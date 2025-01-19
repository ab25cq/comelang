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

extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdinp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stdoutp;
extern struct __sFILE* __attribute__((__swift_attr__("nonisolated(unsafe)"))) __stderrp;
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

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
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
    struct tuple1$1sTypeph* mRefferenceOriginalType;
    char* mInterfaceName;
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
    _Bool mRefference;
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
    char* mAttribute;
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

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
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
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")))

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
__attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use snprintf(3) instead.")))

 int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...);
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...);
struct __sFILE* tmpfile();
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89);
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91);
__attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use vsnprintf(3) instead.")))

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
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

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
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_free(void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
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
__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
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
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of mktemp(3), it is highly recommended that you use mkstemp(3) instead.")))

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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
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
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
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
struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info);
static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info);
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
static struct sVar* sVar_clone(struct sVar* self);
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
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3642, "buffer"))));
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3649, "buffer"))));
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
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3658, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3665, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3672, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3679, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3686, "buffer"))));
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
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4014, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4019, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4024, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4029, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4034, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4067, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4069, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4076, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4081, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4083, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4088, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4090, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4095, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4097, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4102, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4104, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4109, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4111, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4116, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4121, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4126, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4131, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4136, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4141, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4146, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4151, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4156, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4161, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4166, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4171, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4176, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4181, "vector$1double")),len,self)));
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1943, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1943, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1943, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1943, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1943, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1943, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1943, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1charph"))));
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
void* __right_value298 = (void*)0;
struct sType* __dec_obj88;
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
    __dec_obj88=come_value_253->type;
    come_value_253->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value263 = (void*)0;
struct tuple1$1sTypeph* __dec_obj63;
void* __right_value264 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value265 = (void*)0;
char* __dec_obj65;
void* __right_value266 = (void*)0;
char* __dec_obj66;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj70;
void* __right_value281 = (void*)0;
struct list$1sNodeph* __dec_obj74;
void* __right_value282 = (void*)0;
struct list$1sTypeph* __dec_obj75;
void* __right_value289 = (void*)0;
struct list$1charph* __dec_obj79;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* __dec_obj80;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value294 = (void*)0;
char* __dec_obj84;
void* __right_value295 = (void*)0;
char* __dec_obj85;
void* __right_value296 = (void*)0;
char* __dec_obj86;
void* __right_value297 = (void*)0;
char* __dec_obj87;
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
        __dec_obj62=result_254->mNoSolvedGenericsType;
        result_254->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj63=result_254->mOriginalLoadVarType;
        result_254->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj64=result_254->mRefferenceOriginalType;
        result_254->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj65=result_254->mInterfaceName;
        result_254->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj66=result_254->mGenericsName;
        result_254->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj70=result_254->mGenericsTypes;
        result_254->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj74=result_254->mArrayNum;
        result_254->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj74,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_254->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj75=result_254->mParamTypes;
        result_254->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj75,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj79=result_254->mParamNames;
        result_254->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj80=result_254->mResultType;
        result_254->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_254->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj81=result_254->mAlignas;
        result_254->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj82=result_254->mChannelType;
        result_254->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
        result_254->mRefference=self->mRefference;
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
        __dec_obj83=result_254->mSizeNum;
        result_254->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_254->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj84=result_254->mOriginalTypeName;
        result_254->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj85=result_254->mAsmName;
        result_254->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj86=result_254->mTupleName;
        result_254->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj87=result_254->mAttribute;
        result_254->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct tuple1$1sTypeph* __dec_obj41;
char* __dec_obj43;
char* __dec_obj44;
struct list$1sTypeph* __dec_obj45;
struct list$1sNodeph* __dec_obj47;
struct list$1sTypeph* __dec_obj49;
struct list$1charph* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj53;
struct tuple1$1sTypeph* __dec_obj54;
struct sNode* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
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
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj41=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj41,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj43=self->mInterfaceName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj44=self->mGenericsName;
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj45=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj45,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj47=self->mArrayNum;
            come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj49=self->mParamTypes;
            come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj50=self->mParamNames;
            come_call_finalizer3(__dec_obj50,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj51=self->mResultType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj53=self->mAlignas;
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj54=self->mChannelType;
            come_call_finalizer3(__dec_obj54,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj56=self->mSizeNum;
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj57=self->mOriginalTypeName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj58=self->mAsmName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj59=self->mTupleName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj60=self->mAttribute;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj48;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj48=self->item;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
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

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj61;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj61=self->v1;
            come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result207__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* result_266;
struct list_item$1sTypeph* it_267;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __result210__;
    if(    self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_266=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1065, "list$1sTypeph"))));
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
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_268;
struct sType* __dec_obj67;
void* __right_value270 = (void*)0;
struct list_item$1sTypeph* litem_269;
struct sType* __dec_obj68;
void* __right_value271 = (void*)0;
struct list_item$1sTypeph* litem_270;
struct sType* __dec_obj69;
struct list$1sTypeph* __result209__;
    if(    self->len==0) {
        litem_268=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1079, "list_item$1sTypeph"))));
        litem_268->prev=((void*)0);
        litem_268->next=((void*)0);
        __dec_obj67=litem_268->item;
        litem_268->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_268;
        self->head=litem_268;
    }
    else if(    self->len==1) {
        litem_269=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value270=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1089, "list_item$1sTypeph"))));
        litem_269->prev=self->head;
        litem_269->next=((void*)0);
        __dec_obj68=litem_269->item;
        litem_269->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_269;
        self->head->next=litem_269;
    }
    else {
        litem_270=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value271=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1099, "list_item$1sTypeph"))));
        litem_270->prev=self->tail;
        litem_270->next=((void*)0);
        __dec_obj69=litem_270->item;
        litem_270->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sNodeph* result_271;
struct list_item$1sNodeph* it_272;
void* __right_value280 = (void*)0;
struct list$1sNodeph* __result216__;
    if(    self==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    result_271=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1065, "list$1sNodeph"))));
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
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_273;
struct sNode* __dec_obj71;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_274;
struct sNode* __dec_obj72;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_275;
struct sNode* __dec_obj73;
struct list$1sNodeph* __result213__;
    if(    self->len==0) {
        litem_273=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1079, "list_item$1sNodeph"))));
        litem_273->prev=((void*)0);
        litem_273->next=((void*)0);
        __dec_obj71=litem_273->item;
        litem_273->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_273;
        self->head=litem_273;
    }
    else if(    self->len==1) {
        litem_274=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1089, "list_item$1sNodeph"))));
        litem_274->prev=self->head;
        litem_274->next=((void*)0);
        __dec_obj72=litem_274->item;
        litem_274->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_274;
        self->head->next=litem_274;
    }
    else {
        litem_275=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1099, "list_item$1sNodeph"))));
        litem_275->prev=self->tail;
        litem_275->next=((void*)0);
        __dec_obj73=litem_275->item;
        litem_275->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
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
void* __right_value279 = (void*)0;
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
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* result_277;
struct list_item$1charph* it_278;
void* __right_value288 = (void*)0;
struct list$1charph* __result219__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_277=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1065, "list$1charph"))));
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
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_279;
char* __dec_obj76;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_280;
char* __dec_obj77;
void* __right_value287 = (void*)0;
struct list_item$1charph* litem_281;
char* __dec_obj78;
struct list$1charph* __result218__;
    if(    self->len==0) {
        litem_279=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1079, "list_item$1charph"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj76=litem_279->item;
        litem_279->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1089, "list_item$1charph"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj77=litem_280->item;
        litem_280->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value287=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1099, "list_item$1charph"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj78=litem_281->item;
        litem_281->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_282;
struct CVALUE* __dec_obj89;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_283;
struct CVALUE* __dec_obj93;
void* __right_value301 = (void*)0;
struct list_item$1CVALUEph* litem_284;
struct CVALUE* __dec_obj94;
struct list$1CVALUEph* __result221__;
    if(    self->len==0) {
        litem_282=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1CVALUEph"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj89=litem_282->item;
        litem_282->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1CVALUEph"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj93=litem_283->item;
        litem_283->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value301=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1CVALUEph"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj94=litem_284->item;
        litem_284->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
char* __dec_obj90;
struct sType* __dec_obj91;
char* __dec_obj92;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj90=self->c_value;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj91=self->type;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj92=self->c_value_without_right_value_objects;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct sFun* __dec_obj95;
struct sFunNode* __result223__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj95,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sFunNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_285;
char* come_fun_name_286;
void* __right_value304 = (void*)0;
char* __dec_obj115;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* result_type_287;
void* __right_value307 = (void*)0;
int block_level_288;
void* __right_value308 = (void*)0;
char* __dec_obj116;
_Bool __result225__;
    come_fun_285=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_286=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj115=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_287=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value307=make_define_var(result_type_287,"__result_obj__",(_Bool)0,info))));
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_288=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_288;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value308=xsprintf("come_heap_final();\n"))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_285;
    __dec_obj116=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_286);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result225__ = (_Bool)1;
    come_fun_name_286 = come_decrement_ref_count2(come_fun_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result225__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj96;
struct sType* __dec_obj97;
struct list$1sTypeph* __dec_obj98;
struct list$1charph* __dec_obj99;
struct list$1charph* __dec_obj100;
struct sType* __dec_obj101;
struct sBlock* __dec_obj102;
struct buffer* __dec_obj105;
struct buffer* __dec_obj106;
struct buffer* __dec_obj107;
struct buffer* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj96=self->mName;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj97=self->mResultType;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj98=self->mParamTypes;
            come_call_finalizer3(__dec_obj98,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj99=self->mParamNames;
            come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj100=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj101=self->mLambdaType;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj102=self->mBlock;
            come_call_finalizer3(__dec_obj102,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj105=self->mSource;
            come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj106=self->mSourceHead;
            come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj107=self->mSourceHead2;
            come_call_finalizer3(__dec_obj107,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj108=self->mSourceDefer;
            come_call_finalizer3(__dec_obj108,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj109=self->mComeHeader;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj110=self->mDeclareSName;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj111=self->mAttribute;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj112=self->mFunAttribute;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj103;
struct sVarTable* __dec_obj104;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj103=self->mNodes;
            come_call_finalizer3(__dec_obj103,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj104=self->mVarTable;
            come_call_finalizer3(__dec_obj104,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __dec_obj117;
struct sBlock* __result226__;
    __dec_obj117=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj117,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj118;
void* __right_value312 = (void*)0;
struct list$1charph* __dec_obj119;
void* __right_value313 = (void*)0;
struct list$1charph* __dec_obj120;
char* __dec_obj121;
struct sType* __dec_obj122;
struct list$1sTypeph* __dec_obj123;
struct list$1charph* __dec_obj124;
struct list$1charph* __dec_obj125;
char* __dec_obj126;
void* __right_value314 = (void*)0;
char* __dec_obj127;
struct sGenericsFun* __result227__;
    __dec_obj118=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj119=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj120=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj121=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj123=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj123,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj124=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj124,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj125=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj125,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj126=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj127=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sType* __dec_obj128;
struct list$1charph* __dec_obj129;
struct list$1charph* __dec_obj130;
char* __dec_obj131;
struct sType* __dec_obj132;
struct list$1sTypeph* __dec_obj133;
struct list$1charph* __dec_obj134;
struct list$1charph* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj128=self->mImplType;
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj129=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj129,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj130=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj130,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj131=self->mName;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj132=self->mResultType;
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj133=self->mParamTypes;
            come_call_finalizer3(__dec_obj133,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj134=self->mParamNames;
            come_call_finalizer3(__dec_obj134,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj135=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj135,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj136=self->mBlock;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj137=self->mGenericsSName;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sBlock* result_289;
int sline_top_290;
int block_level_291;
char* p_saved_292;
int sline_saved_293;
char* sname_saved_294;
void* __right_value317 = (void*)0;
char* __dec_obj138;
char* __dec_obj139;
struct map$2charphcharph* __dec_obj140;
char* p_297;
int sline_298;
char* sname_299;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* module_name_300;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1charph* params_301;
void* __right_value322 = (void*)0;
char* word_302;
void* __right_value323 = (void*)0;
char* __dec_obj141;
void* __right_value324 = (void*)0;
char* __dec_obj142;
void* __right_value325 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result232__;
void* __right_value326 = (void*)0;
struct sClassModule* module_306;
void* __right_value327 = (void*)0;
void* __right_value333 = (void*)0;
struct map$2charphcharph* __dec_obj148;
int i_310;
struct list$1charph* o2_saved_311;
char* it_314;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* __dec_obj149;
void* __right_value344 = (void*)0;
struct sNode* node_361;
void* __right_value345 = (void*)0;
char* __dec_obj150;
_Bool omit_semicolon_365;
void* __right_value349 = (void*)0;
char* __dec_obj154;
char* head_380;
void* __right_value350 = (void*)0;
struct sNode* value_381;
char* tail_382;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj155;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* node_384;
void* __right_value354 = (void*)0;
char* __dec_obj156;
struct sNode* node_385;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj160;
_Bool omit_semicolon_387;
char* p_388;
char* head_389;
void* __right_value361 = (void*)0;
char* source_390;
void* __right_value362 = (void*)0;
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
                    __dec_obj138=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_294));
                    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_292=((void*)0);
                    sline_saved_293=0;
                    __dec_obj139=sname_saved_294;
                    sname_saved_294=((void*)0);
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj140=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj140,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
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
                ((char*)(__right_value318=parse_word(info)));
                __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                __dec_obj141=sname_saved_294;
                sname_saved_294=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj142=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_300));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value325=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_300)))==((void*)0))),                come_call_finalizer3(__right_value325,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
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
                module_306=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value326=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_300))), "05function.c", 262, 0));
                come_call_finalizer3(__right_value326,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_306->mParams)!=list$1charph_length(params_301)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj148=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj148,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_310=0;
                for(                o2_saved_311=(struct list$1charph*)come_increment_ref_count((module_306->mParams)),it_314=list$1charph_begin((o2_saved_311));                !list$1charph_end((o2_saved_311));                it_314=list$1charph_next((o2_saved_311))                ){
                    ((char*)(__right_value342=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_314)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value335=list$1charphp_operator_load_element(params_301,i_310))), "05function.c", 273, 1)))))));
                    __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_310++;
                }
                come_call_finalizer3(o2_saved_311,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_306->mText;
                info->sline=module_306->mSLine;
                __dec_obj149=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_306->mSName));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_300 = come_decrement_ref_count2(module_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_361=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj150=info->sname;
            info->sname=(char*)come_increment_ref_count(node_361->sname(node_361->_protocol_obj));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                    __dec_obj154=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_299));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_380=info->p;
                    value_381=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_382=info->p;
                    __dec_obj155=value_381;
                    value_381=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_381),info));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
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
                __dec_obj156=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_294));
                __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value356=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 373, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj159=node_385;
            node_385=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value356,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_289->mNodes,(struct sNode*)come_increment_ref_count(node_385));
        }
        else {
            __dec_obj160=node_385;
            node_385=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
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
char* __dec_obj143;
char* __dec_obj144;
struct list$1charph* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj143=self->mName;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj144=self->mText;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj145=self->mParams;
            come_call_finalizer3(__dec_obj145,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj146=self->mSName;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
int i_307;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charp* __dec_obj147;
struct map$2charphcharph* __result234__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2326, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value329=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2327, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value330=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2328, "bool"))));
    for(    i_307=0;    i_307<128;    i_307++    ){
        self->item_existance[i_307]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj147=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2338, "list$1charp"))));
    come_call_finalizer3(__dec_obj147,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value337 = (void*)0;
char** keys_321;
void* __right_value338 = (void*)0;
char** items_322;
void* __right_value339 = (void*)0;
_Bool* item_existance_323;
int len_324;
char* it_327;
char* default_value_330;
void* __right_value340 = (void*)0;
char* it2_331;
unsigned int hash_334;
int n_335;
char* default_value_336;
void* __right_value341 = (void*)0;
default_value_330 = (void*)0;
default_value_336 = (void*)0;
    size_320=self->size*10;
    keys_321=(char**)come_increment_ref_count(((char**)(__right_value337=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "/usr/local/include/comelang.h", 2554, "char*%"))));
    items_322=(char**)come_increment_ref_count(((char**)(__right_value338=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "/usr/local/include/comelang.h", 2555, "char*%"))));
    item_existance_323=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value339=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_320)), "/usr/local/include/comelang.h", 2556, "bool"))));
    len_324=0;
    for(    it_327=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_327=map$2charphcharph_next(self)    ){
        memset(&default_value_330,0,sizeof(char*));
        it2_331=((char*)(__right_value340=map$2charphcharph_at(self,it_327,default_value_330)));
        __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
                items_322[n_335]=((char*)(__right_value341=map$2charphcharph_at(self,it_327,default_value_336)));
                __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_362;
struct sNode* __dec_obj151;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_363;
struct sNode* __dec_obj152;
void* __right_value348 = (void*)0;
struct list_item$1sNodeph* litem_364;
struct sNode* __dec_obj153;
struct list$1sNodeph* __result265__;
    if(    self->len==0) {
        litem_362=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1sNodeph"))));
        litem_362->prev=((void*)0);
        litem_362->next=((void*)0);
        __dec_obj151=litem_362->item;
        litem_362->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_362;
        self->head=litem_362;
    }
    else if(    self->len==1) {
        litem_363=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1sNodeph"))));
        litem_363->prev=self->head;
        litem_363->next=((void*)0);
        __dec_obj152=litem_363->item;
        litem_363->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_363;
        self->head->next=litem_363;
    }
    else {
        litem_364=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value348=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1sNodeph"))));
        litem_364->prev=self->tail;
        litem_364->next=((void*)0);
        __dec_obj153=litem_364->item;
        litem_364->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
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
char* __dec_obj157;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj157=self->sname;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result269__;
void* __right_value357 = (void*)0;
struct sSemicolonNode* result_386;
void* __right_value358 = (void*)0;
char* __dec_obj158;
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
        __dec_obj158=result_386->sname;
        result_386->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sVarTable* __dec_obj161;
struct sVarTable* current_loop_vtable_394;
struct list$1sTypeph* param_types__395;
struct list$1charph* param_names__396;
int i_397;
struct list$1charph* o2_saved_398;
char* name_399;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* type_400;
void* __right_value367 = (void*)0;
int block_level_404;
int i_405;
struct list$1sNodeph* o2_saved_406;
struct sNode* node_409;
struct list$1sRightValueObjectph* right_value_objects_412;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj166;
char* __dec_obj167;
char* __dec_obj168;
int stack_num_before_417;
int sline_418;
void* __right_value370 = (void*)0;
char* sname_419;
void* __right_value371 = (void*)0;
char* __dec_obj169;
_Bool Value_420;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_421;
void* __right_value377 = (void*)0;
struct CVALUE* come_value2_422;
void* __right_value378 = (void*)0;
char* __dec_obj173;
void* __right_value379 = (void*)0;
struct CVALUE* come_value2_424;
struct sVar* var__425;
void* __right_value380 = (void*)0;
struct CVALUE* come_value3_426;
void* __right_value381 = (void*)0;
_Bool _if_conditional2;
void* __right_value382 = (void*)0;
struct sType* __dec_obj174;
void* __right_value383 = (void*)0;
char* c_value_443;
void* __right_value384 = (void*)0;
char* __dec_obj175;
void* __right_value385 = (void*)0;
char* __dec_obj176;
void* __right_value386 = (void*)0;
char* __dec_obj177;
_Bool Value_444;
void* __right_value387 = (void*)0;
char* __dec_obj178;
struct list$1sRightValueObjectph* __dec_obj179;
void* __if_result__0_447 = (void*)0;
struct list$1sVarph* o2_saved_448;
struct sVar* it_451;
struct list$1sVarph* __dec_obj185;
memset(&i_397, 0, sizeof(int));
memset(&i_405, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_392=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_393=info->lv_table;
    if(    !no_var_table) {
        __dec_obj161=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "sVarTable")),(_Bool)0,old_table_393));
        come_call_finalizer3(__dec_obj161,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
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
            type_400=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value365=list$1sTypephp_operator_load_element(param_types,i_397))), "05function.c", 465, 2))));
            come_call_finalizer3(__right_value365,sType_finalize, 0, 1, 0, 0, (void*)0);
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
            __dec_obj166=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj166,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj167=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj168=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_417=list$1CVALUEph_length(info->stack);
            sline_418=info->sline;
            sname_419=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_409->sline(node_409->_protocol_obj);
            __dec_obj169=info->sname;
            info->sname=(char*)come_increment_ref_count(node_409->sname(node_409->_protocol_obj));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                        __dec_obj173=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_422->c_value));
                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_424=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_421));
                        var__425=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__425) {
                            come_value3_426=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "CVALUE"));
                            if(                            var__425->mType->mClass=="void"&&var__425->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__425->mType,((struct sType*)(__right_value381=sType_clone(come_value_421->type))),come_value3_426,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj174=var__425->mType;
                            var__425->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_421->type));
                            come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_421->type->mHeap) {
                                c_value_443=(char*)come_increment_ref_count(increment_ref_count_object(come_value_421->type,come_value_421->c_value,info));
                                __dec_obj175=come_value2_424->c_value;
                                come_value2_424->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__425->mCValueName,c_value_443));
                                __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_443 = come_decrement_ref_count2(c_value_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj176=come_value2_424->c_value;
                                come_value2_424->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__425->mCValueName,come_value_421->c_value));
                                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_424));
                        __dec_obj177=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_424->c_value));
                        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            __dec_obj178=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_419));
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
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
            __dec_obj179=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_412);
            come_call_finalizer3(__dec_obj179,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
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
            __dec_obj185=info->match_it_var;
            __if_result__0_447=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj185,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
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
struct sRightValueObject* __dec_obj162;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj162=self->item;
            come_call_finalizer3(__dec_obj162,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj163=self->mType;
            come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj164=self->mVarName;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj165=self->mFunName;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value373 = (void*)0;
struct CVALUE* result_423;
void* __right_value374 = (void*)0;
char* __dec_obj170;
void* __right_value375 = (void*)0;
struct sType* __dec_obj171;
void* __right_value376 = (void*)0;
char* __dec_obj172;
struct CVALUE* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_423=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj170=result_423->c_value;
        result_423->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj171=result_423->type;
        result_423->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_423->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj172=result_423->c_value_without_right_value_objects;
        result_423->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(    !charp_equals(left->mAttribute,right->mAttribute)) {
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
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
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
    if(    !tuple1$1sTypeph_equals(left->mRefferenceOriginalType,right->mRefferenceOriginalType)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mInterfaceName,right->mInterfaceName)) {
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
    if(    !bool_equals(left->mRefference,right->mRefference)) {
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
    if(    !charp_equals(left->mAttribute,right->mAttribute)) {
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
    if(    tuple1$1sTypeph_operator_not_equals(left->mRefferenceOriginalType,right->mRefferenceOriginalType)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mInterfaceName,right->mInterfaceName)) {
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
    if(    bool_operator_not_equals(left->mRefference,right->mRefference)) {
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
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&charp_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&charp_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&charp_equals(left->mParentClassName,right->mParentClassName)&&charp_equals(left->mAttribute,right->mAttribute));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))));
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
struct sVar* __dec_obj180;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj180=self->item;
            come_call_finalizer3(__dec_obj180,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj181;
char* __dec_obj182;
struct sType* __dec_obj183;
char* __dec_obj184;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj181=self->mName;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj182=self->mCValueName;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj183=self->mType;
            come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj184=self->mFunName;
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value388 = (void*)0;
char* buf_464;
void* __right_value389 = (void*)0;
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
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value389=__builtin_string(buf_464)));
    buf_464 = come_decrement_ref_count2(buf_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct buffer* asm_fun_name_468;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct buffer* result_469;
char* head_470;
int brace_num_471;
char* tail_472;
char* head_473;
int brace_num_474;
char* tail_475;
char* head_476;
char* tail_477;
char* head_478;
char* tail_479;
int len_480;
_Bool in_dquort_481;
int brace_num_482;
char* head_483;
char* tail_484;
char* head_485;
char* tail_486;
char* head_487;
char* tail_488;
char* head_489;
int nest_490;
char* tail_491;
char* head_492;
int nest_493;
char* tail_494;
char* head_495;
int nest_496;
char* tail_497;
char* head_498;
int nest_499;
char* tail_500;
char* head_501;
int nest_502;
char* tail_503;
char* head_504;
char* tail_505;
char* head_506;
char* tail_507;
char* head_508;
char* tail_509;
char* head_510;
char* tail_511;
char* head_512;
char* tail_513;
char* head_514;
int brace_num_515;
char* tail_516;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple2$2charphcharph* __result292__;
    asm_fun_name_468=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "buffer"))));
    result_469=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 783, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_470=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_471=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_471++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_471--;
                        if(                        brace_num_471==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_472=info->p;
            buffer_append(result_469,head_470,tail_472-head_470);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_473=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_474=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_474++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_474--;
                        if(                        brace_num_474==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_475=info->p;
            buffer_append(result_469,head_473,tail_475-head_473);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_476=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_477=info->p;
            buffer_append(result_469,head_476,tail_477-head_476);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_478=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_479=info->p;
            buffer_append(result_469,head_478,tail_479-head_478);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_480=0;
            if(            *info->p==40) {
                in_dquort_481=(_Bool)0;
                brace_num_482=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_481=!in_dquort_481;
                    }
                    else if(                    in_dquort_481) {
                        buffer_append_char(asm_fun_name_468,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_482++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_482--;
                        if(                        brace_num_482==0) {
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
            head_483=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_484=info->p;
            buffer_append(result_469,head_483,tail_484-head_483);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_485=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_486=info->p;
            buffer_append(result_469,head_485,tail_486-head_485);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_487=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_488=info->p;
            buffer_append(result_469,head_487,tail_488-head_487);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_489=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_490=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_490++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_490--;
                        if(                        nest_490==0) {
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
            tail_491=info->p;
            buffer_append(result_469,head_489,tail_491-head_489);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_492=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_493=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_493++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_493--;
                        if(                        nest_493==0) {
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
            tail_494=info->p;
            buffer_append(result_469,head_492,tail_494-head_492);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_495=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_496=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_496++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_496--;
                        if(                        nest_496==0) {
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
            tail_497=info->p;
            buffer_append(result_469,head_495,tail_497-head_495);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_498=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_499=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_499++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_499--;
                        if(                        nest_499==0) {
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
            tail_500=info->p;
            buffer_append(result_469,head_498,tail_500-head_498);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_501=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_502=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_502++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_502--;
                        if(                        nest_502==0) {
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
            tail_503=info->p;
            buffer_append(result_469,head_501,tail_503-head_501);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_504=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_505=info->p;
            buffer_append(result_469,head_504,tail_505-head_504);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_506=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_507=info->p;
            buffer_append(result_469,head_506,tail_507-head_506);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_508=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_509=info->p;
            buffer_append(result_469,head_508,tail_509-head_508);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_510=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_511=info->p;
            buffer_append(result_469,head_510,tail_511-head_510);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_512=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_513=info->p;
            buffer_append(result_469,head_512,tail_513-head_512);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_514=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_515=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_515++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_515--;
                        if(                        brace_num_515==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_516=info->p;
            buffer_append(result_469,head_514,tail_516-head_514);
        }
        else {
            break;
        }
    }
    __result292__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value397=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1197, "struct tuple2$2charphcharph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_468)),(char*)come_increment_ref_count(buffer_to_string(result_469)))));
    come_call_finalizer3(asm_fun_name_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_469,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value397,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj186;
char* __dec_obj187;
struct tuple2$2charphcharph* __result291__;
    __dec_obj186=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj187=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj188;
char* __dec_obj189;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj188=self->v1;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj189=self->v2;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct buffer* asm_fun_name_517;
void* __right_value400 = (void*)0;
char* attribute_518;
int nest_519;
int nest_520;
int nest_521;
int nest_522;
int nest_523;
void* __right_value401 = (void*)0;
char* __dec_obj190;
int len_524;
_Bool in_dquort_525;
int brace_num_526;
int brace_num_527;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2charphcharph* __result293__;
    asm_fun_name_517=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1202, "buffer"))));
    attribute_518=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_519=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_519++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_519--;
                        if(                        nest_519==0) {
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
                nest_520=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_520++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_520--;
                        if(                        nest_520==0) {
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
                nest_521=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521--;
                        if(                        nest_521==0) {
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
                nest_522=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_522++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_522--;
                        if(                        nest_522==0) {
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
                nest_523=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_523++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_523--;
                        if(                        nest_523==0) {
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
            __dec_obj190=attribute_518;
            attribute_518=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_524=0;
            if(            *info->p==40) {
                in_dquort_525=(_Bool)0;
                brace_num_526=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_525=!in_dquort_525;
                    }
                    else if(                    in_dquort_525) {
                        buffer_append_char(asm_fun_name_517,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_526++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_526--;
                        if(                        brace_num_526==0) {
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
                brace_num_527=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_527++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_527--;
                        if(                        brace_num_527==0) {
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
    __result293__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value404=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1471, "struct tuple2$2charphcharph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_517)),(char*)come_increment_ref_count(attribute_518))));
    come_call_finalizer3(asm_fun_name_517,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_518 = come_decrement_ref_count2(attribute_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value404,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value405 = (void*)0;
char* __dec_obj191;
char* head_528;
int head_sline_529;
void* __right_value406 = (void*)0;
char* buf_530;
void* __right_value407 = (void*)0;
struct sNode* node_531;
_Bool Value_532;
    while(*info->p) {
        __dec_obj191=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(string_clone(info->sname));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_528=info->p;
        head_sline_529=info->sline;
        buf_530=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_530 = come_decrement_ref_count2(buf_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_531=(struct sNode*)come_increment_ref_count(top_level_v99(buf_530,head_528,head_sline_529,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_531!=((void*)0)) {
            Value_532=node_compile(node_531,info);
            if(            !Value_532) {
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
            buf_530 = come_decrement_ref_count2(buf_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_531) { node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_530 = come_decrement_ref_count2(buf_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_531) { node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value408 = (void*)0;
char* name_533;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* result_type_534;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sType* __list_values1___535[5];
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1sTypeph* param_types_540;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
char* __list_values2___541[5];
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1charph* param_names_543;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1charph* param_default_parametors_544;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sFun* main_fun_545;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
char* name_567;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* result_type_568;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sType* __list_values3___569[1];
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1sTypeph* param_types_570;
void* __right_value457 = (void*)0;
char* __list_values4___571[1];
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1charph* param_names_572;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct list$1charph* param_default_parametors_573;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sFun* main_fun_574;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
char* name_575;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* result_type_576;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __list_values5___577[7];
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1sTypeph* param_types_578;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* __list_values6___579[7];
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct list$1charph* param_names_580;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1charph* param_default_parametors_581;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sFun* main_fun_582;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* name_583;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* result_type_584;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __list_values7___585[5];
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct list$1sTypeph* param_types_586;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
char* __list_values8___587[5];
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct list$1charph* param_names_588;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct list$1charph* param_default_parametors_589;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sFun* main_fun_590;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
char* name_591;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* result_type_592;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __list_values9___593[1];
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1sTypeph* param_types_594;
void* __right_value544 = (void*)0;
char* __list_values10___595[1];
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1charph* param_names_596;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1charph* param_default_parametors_597;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sFun* main_fun_598;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
char* name_599;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* result_type_600;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* __list_values11___601[4];
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct list$1sTypeph* param_types_602;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
char* __list_values12___603[4];
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_names_604;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1charph* param_default_parametors_605;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sFun* main_fun_606;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
char* name_607;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sType* result_type_608;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* __list_values13___609[3];
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct list$1sTypeph* param_types_610;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
char* __list_values14___611[3];
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1charph* param_names_612;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1charph* param_default_parametors_613;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sFun* main_fun_614;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
char* name_615;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sType* result_type_616;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* __list_values15___617[1];
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct list$1sTypeph* param_types_618;
void* __right_value619 = (void*)0;
char* __list_values16___619[1];
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1charph* param_names_620;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1charph* param_default_parametors_621;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sFun* main_fun_622;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* name_623;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sType* result_type_624;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sType* __list_values17___625[3];
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct list$1sTypeph* param_types_626;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
char* __list_values18___627[3];
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct list$1charph* param_names_628;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1charph* param_default_parametors_629;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sFun* main_fun_630;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
char* name_631;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sType* result_type_632;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1sTypeph* param_types_633;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1charph* param_names_634;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct list$1charph* param_default_parametors_635;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sFun* main_fun_636;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
char* name_637;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* result_type_638;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sType* __list_values19___639[4];
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1sTypeph* param_types_640;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
char* __list_values20___641[4];
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct list$1charph* param_names_642;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct list$1charph* param_default_parametors_643;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sFun* main_fun_644;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
char* name_645;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* result_type_646;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1sTypeph* param_types_647;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1charph* param_names_648;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct list$1charph* param_default_parametors_649;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sFun* fun_650;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
char* name_651;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sType* result_type_652;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1sTypeph* param_types_653;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1charph* param_names_654;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct list$1charph* param_default_parametors_655;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sFun* fun_656;
void* __right_value731 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_533=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_534=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1527, "sType")),"void*",(_Bool)0,info));
        param_types_540=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___535[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value412=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___535[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value414=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___535[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value416=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"char*",(_Bool)0,info)))),
__list_values1___535[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value418=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___535[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1528, "struct list$1sTypeph")),5,__list_values1___535)));
        come_call_finalizer3(__right_value412,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value414,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value416,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_543=(struct list$1charph*)come_increment_ref_count((__list_values2___541[0]=(char*)come_increment_ref_count(((char*)(__right_value426=__builtin_string("count")))),
__list_values2___541[1]=(char*)come_increment_ref_count(((char*)(__right_value427=__builtin_string("size")))),
__list_values2___541[2]=(char*)come_increment_ref_count(((char*)(__right_value428=__builtin_string("sname")))),
__list_values2___541[3]=(char*)come_increment_ref_count(((char*)(__right_value429=__builtin_string("sline")))),
__list_values2___541[4]=(char*)come_increment_ref_count(((char*)(__right_value430=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1529, "struct list$1charph")),5,__list_values2___541)));
        __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_544=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1530, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_544,((void*)0));
        list$1charph_push_back(param_default_parametors_544,((void*)0));
        list$1charph_push_back(param_default_parametors_544,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_544,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_544,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_545=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1536, "sFun")),(char*)come_increment_ref_count(name_533),(struct sType*)come_increment_ref_count(result_type_534),(struct list$1sTypeph*)come_increment_ref_count(param_types_540),(struct list$1charph*)come_increment_ref_count(param_names_543),(struct list$1charph*)come_increment_ref_count(param_default_parametors_544),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_533)),(struct sFun*)come_increment_ref_count(main_fun_545));
        name_533 = come_decrement_ref_count2(name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_540,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_543,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_545,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_567=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_568=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1547, "sType")),"void*",(_Bool)0,info));
        param_types_570=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___569[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value454=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1548, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1548, "struct list$1sTypeph")),1,__list_values3___569)));
        come_call_finalizer3(__right_value454,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_572=(struct list$1charph*)come_increment_ref_count((__list_values4___571[0]=(char*)come_increment_ref_count(((char*)(__right_value457=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1549, "struct list$1charph")),1,__list_values4___571)));
        __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_573=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1550, "list$1charph"))));
        main_fun_574=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1551, "sFun")),(char*)come_increment_ref_count(name_567),(struct sType*)come_increment_ref_count(result_type_568),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_572),(struct list$1charph*)come_increment_ref_count(param_default_parametors_573),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_567)),(struct sFun*)come_increment_ref_count(main_fun_574));
        name_567 = come_decrement_ref_count2(name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_572,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_573,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_574,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_575=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_576=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1562, "sType")),"void",(_Bool)0,info));
        param_types_578=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___577[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value473=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___577[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value475=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___577[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value477=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___577[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___577[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
__list_values5___577[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
__list_values5___577[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1563, "struct list$1sTypeph")),7,__list_values5___577)));
        come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value475,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value477,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_580=(struct list$1charph*)come_increment_ref_count((__list_values6___579[0]=(char*)come_increment_ref_count(((char*)(__right_value488=__builtin_string("fun")))),
__list_values6___579[1]=(char*)come_increment_ref_count(((char*)(__right_value489=__builtin_string("mem")))),
__list_values6___579[2]=(char*)come_increment_ref_count(((char*)(__right_value490=__builtin_string("protocol_fun")))),
__list_values6___579[3]=(char*)come_increment_ref_count(((char*)(__right_value491=__builtin_string("protocol_obj")))),
__list_values6___579[4]=(char*)come_increment_ref_count(((char*)(__right_value492=__builtin_string("call_finalizer_only")))),
__list_values6___579[5]=(char*)come_increment_ref_count(((char*)(__right_value493=__builtin_string("no_decrement")))),
__list_values6___579[6]=(char*)come_increment_ref_count(((char*)(__right_value494=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1564, "struct list$1charph")),7,__list_values6___579)));
        __right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_581=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1565, "list$1charph"))));
        main_fun_582=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1566, "sFun")),(char*)come_increment_ref_count(name_575),(struct sType*)come_increment_ref_count(result_type_576),(struct list$1sTypeph*)come_increment_ref_count(param_types_578),(struct list$1charph*)come_increment_ref_count(param_names_580),(struct list$1charph*)come_increment_ref_count(param_default_parametors_581),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_575)),(struct sFun*)come_increment_ref_count(main_fun_582));
        name_575 = come_decrement_ref_count2(name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_578,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_580,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_581,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_582,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_583=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_584=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1577, "sType")),"void*",(_Bool)0,info));
        param_types_586=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___585[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value510=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___585[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value512=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___585[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value514=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___585[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value516=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"bool",(_Bool)0,info)))),
__list_values7___585[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value518=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1578, "struct list$1sTypeph")),5,__list_values7___585)));
        come_call_finalizer3(__right_value510,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value512,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_588=(struct list$1charph*)come_increment_ref_count((__list_values8___587[0]=(char*)come_increment_ref_count(((char*)(__right_value521=__builtin_string("mem")))),
__list_values8___587[1]=(char*)come_increment_ref_count(((char*)(__right_value522=__builtin_string("protocol_fun")))),
__list_values8___587[2]=(char*)come_increment_ref_count(((char*)(__right_value523=__builtin_string("protocol_obj")))),
__list_values8___587[3]=(char*)come_increment_ref_count(((char*)(__right_value524=__builtin_string("no_decrement")))),
__list_values8___587[4]=(char*)come_increment_ref_count(((char*)(__right_value525=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1579, "struct list$1charph")),5,__list_values8___587)));
        __right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_589=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1580, "list$1charph"))));
        main_fun_590=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1581, "sFun")),(char*)come_increment_ref_count(name_583),(struct sType*)come_increment_ref_count(result_type_584),(struct list$1sTypeph*)come_increment_ref_count(param_types_586),(struct list$1charph*)come_increment_ref_count(param_names_588),(struct list$1charph*)come_increment_ref_count(param_default_parametors_589),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_583)),(struct sFun*)come_increment_ref_count(main_fun_590));
        name_583 = come_decrement_ref_count2(name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_586,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_588,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_589,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_590,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_591=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_592=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "sType")),"void",(_Bool)0,info));
        param_types_594=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___593[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value541=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1593, "struct list$1sTypeph")),1,__list_values9___593)));
        come_call_finalizer3(__right_value541,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_596=(struct list$1charph*)come_increment_ref_count((__list_values10___595[0]=(char*)come_increment_ref_count(((char*)(__right_value544=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1594, "struct list$1charph")),1,__list_values10___595)));
        __right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_597=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1595, "list$1charph"))));
        main_fun_598=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1596, "sFun")),(char*)come_increment_ref_count(name_591),(struct sType*)come_increment_ref_count(result_type_592),(struct list$1sTypeph*)come_increment_ref_count(param_types_594),(struct list$1charph*)come_increment_ref_count(param_names_596),(struct list$1charph*)come_increment_ref_count(param_default_parametors_597),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_591)),(struct sFun*)come_increment_ref_count(main_fun_598));
        name_591 = come_decrement_ref_count2(name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_592,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_594,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_596,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_597,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_598,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_599=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_600=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "sType")),"void*",(_Bool)0,info));
        param_types_602=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___601[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value560=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"void*",(_Bool)0,info)))),
__list_values11___601[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value562=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"char*",(_Bool)0,info)))),
__list_values11___601[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value564=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"int",(_Bool)0,info)))),
__list_values11___601[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value566=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1608, "struct list$1sTypeph")),4,__list_values11___601)));
        come_call_finalizer3(__right_value560,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value562,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value566,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_604=(struct list$1charph*)come_increment_ref_count((__list_values12___603[0]=(char*)come_increment_ref_count(((char*)(__right_value569=__builtin_string("block")))),
__list_values12___603[1]=(char*)come_increment_ref_count(((char*)(__right_value570=__builtin_string("sname")))),
__list_values12___603[2]=(char*)come_increment_ref_count(((char*)(__right_value571=__builtin_string("sline")))),
__list_values12___603[3]=(char*)come_increment_ref_count(((char*)(__right_value572=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1609, "struct list$1charph")),4,__list_values12___603)));
        __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_605=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1610, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_605,((void*)0));
        list$1charph_push_back(param_default_parametors_605,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_605,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_605,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_606=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1615, "sFun")),(char*)come_increment_ref_count(name_599),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_602),(struct list$1charph*)come_increment_ref_count(param_names_604),(struct list$1charph*)come_increment_ref_count(param_default_parametors_605),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_599)),(struct sFun*)come_increment_ref_count(main_fun_606));
        name_599 = come_decrement_ref_count2(name_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_604,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_605,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_606,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_607=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_608=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1626, "sType")),"void*",(_Bool)0,info));
        param_types_610=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___609[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value591=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"void*",(_Bool)0,info)))),
__list_values13___609[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value593=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"int",(_Bool)0,info)))),
__list_values13___609[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value595=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1627, "struct list$1sTypeph")),3,__list_values13___609)));
        come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value595,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_612=(struct list$1charph*)come_increment_ref_count((__list_values14___611[0]=(char*)come_increment_ref_count(((char*)(__right_value598=__builtin_string("b")))),
__list_values14___611[1]=(char*)come_increment_ref_count(((char*)(__right_value599=__builtin_string("c")))),
__list_values14___611[2]=(char*)come_increment_ref_count(((char*)(__right_value600=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1628, "struct list$1charph")),3,__list_values14___611)));
        __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_613=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1629, "list$1charph"))));
        main_fun_614=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1630, "sFun")),(char*)come_increment_ref_count(name_607),(struct sType*)come_increment_ref_count(result_type_608),(struct list$1sTypeph*)come_increment_ref_count(param_types_610),(struct list$1charph*)come_increment_ref_count(param_names_612),(struct list$1charph*)come_increment_ref_count(param_default_parametors_613),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_607)),(struct sFun*)come_increment_ref_count(main_fun_614));
        name_607 = come_decrement_ref_count2(name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_610,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_612,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_613,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_614,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_615=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_616=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1641, "sType")),"char*",(_Bool)0,info));
        param_types_618=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___617[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value616=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1642, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1642, "struct list$1sTypeph")),1,__list_values15___617)));
        come_call_finalizer3(__right_value616,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_620=(struct list$1charph*)come_increment_ref_count((__list_values16___619[0]=(char*)come_increment_ref_count(((char*)(__right_value619=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1643, "struct list$1charph")),1,__list_values16___619)));
        __right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_621=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1644, "list$1charph"))));
        main_fun_622=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1645, "sFun")),(char*)come_increment_ref_count(name_615),(struct sType*)come_increment_ref_count(result_type_616),(struct list$1sTypeph*)come_increment_ref_count(param_types_618),(struct list$1charph*)come_increment_ref_count(param_names_620),(struct list$1charph*)come_increment_ref_count(param_default_parametors_621),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_615)),(struct sFun*)come_increment_ref_count(main_fun_622));
        name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_616,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_618,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_620,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_621,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_622,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_623=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_624=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1703, "sType")),"void",(_Bool)0,info));
        param_types_626=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___625[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value635=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
__list_values17___625[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value637=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
__list_values17___625[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value639=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1704, "struct list$1sTypeph")),3,__list_values17___625)));
        come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value637,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value639,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_628=(struct list$1charph*)come_increment_ref_count((__list_values18___627[0]=(char*)come_increment_ref_count(((char*)(__right_value642=xsprintf("come_malloc")))),
__list_values18___627[1]=(char*)come_increment_ref_count(((char*)(__right_value643=xsprintf("come_debug")))),
__list_values18___627[2]=(char*)come_increment_ref_count(((char*)(__right_value644=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1705, "struct list$1charph")),3,__list_values18___627)));
        __right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_629=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1706, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_629,((void*)0));
        main_fun_630=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1708, "sFun")),(char*)come_increment_ref_count(name_623),(struct sType*)come_increment_ref_count(result_type_624),(struct list$1sTypeph*)come_increment_ref_count(param_types_626),(struct list$1charph*)come_increment_ref_count(param_names_628),(struct list$1charph*)come_increment_ref_count(param_default_parametors_629),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_623)),(struct sFun*)come_increment_ref_count(main_fun_630));
        name_623 = come_decrement_ref_count2(name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_626,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_628,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_629,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_630,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_631=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_632=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1719, "sType")),"void",(_Bool)0,info));
        param_types_633=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1720, "list$1sTypeph"))));
        param_names_634=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1721, "list$1charph"))));
        param_default_parametors_635=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1722, "list$1charph"))));
        main_fun_636=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1723, "sFun")),(char*)come_increment_ref_count(name_631),(struct sType*)come_increment_ref_count(result_type_632),(struct list$1sTypeph*)come_increment_ref_count(param_types_633),(struct list$1charph*)come_increment_ref_count(param_names_634),(struct list$1charph*)come_increment_ref_count(param_default_parametors_635),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_631)),(struct sFun*)come_increment_ref_count(main_fun_636));
        name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_632,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_633,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_636,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_637=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_638=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1734, "sType")),"void*",(_Bool)0,info));
        param_types_640=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___639[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value676=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"void*",(_Bool)0,info)))),
__list_values19___639[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value678=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"char*",(_Bool)0,info)))),
__list_values19___639[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value680=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"int",(_Bool)0,info)))),
__list_values19___639[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value682=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1735, "struct list$1sTypeph")),4,__list_values19___639)));
        come_call_finalizer3(__right_value676,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value678,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value680,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value682,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_642=(struct list$1charph*)come_increment_ref_count((__list_values20___641[0]=(char*)come_increment_ref_count(((char*)(__right_value685=__builtin_string("mem")))),
__list_values20___641[1]=(char*)come_increment_ref_count(((char*)(__right_value686=__builtin_string("sname")))),
__list_values20___641[2]=(char*)come_increment_ref_count(((char*)(__right_value687=__builtin_string("sline")))),
__list_values20___641[3]=(char*)come_increment_ref_count(((char*)(__right_value688=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1736, "struct list$1charph")),4,__list_values20___641)));
        __right_value685 = come_decrement_ref_count2(__right_value685, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value686 = come_decrement_ref_count2(__right_value686, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value688 = come_decrement_ref_count2(__right_value688, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_643=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1737, "list$1charph"))));
        main_fun_644=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1738, "sFun")),(char*)come_increment_ref_count(name_637),(struct sType*)come_increment_ref_count(result_type_638),(struct list$1sTypeph*)come_increment_ref_count(param_types_640),(struct list$1charph*)come_increment_ref_count(param_names_642),(struct list$1charph*)come_increment_ref_count(param_default_parametors_643),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_637)),(struct sFun*)come_increment_ref_count(main_fun_644));
        name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_642,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_644,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_645=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1749, "sType")),"void",(_Bool)0,info));
        param_types_647=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1750, "list$1sTypeph"))));
        param_names_648=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1751, "list$1charph"))));
        param_default_parametors_649=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1752, "list$1charph"))));
        fun_650=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1753, "sFun")),(char*)come_increment_ref_count(name_645),(struct sType*)come_increment_ref_count(result_type_646),(struct list$1sTypeph*)come_increment_ref_count(param_types_647),(struct list$1charph*)come_increment_ref_count(param_names_648),(struct list$1charph*)come_increment_ref_count(param_default_parametors_649),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_645)),(struct sFun*)come_increment_ref_count(fun_650));
        name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_647,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_648,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_649,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_650,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_651=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_652=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1781, "sType")),"void",(_Bool)0,info));
        param_types_653=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1782, "list$1sTypeph"))));
        param_names_654=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1783, "list$1charph"))));
        param_default_parametors_655=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1784, "list$1charph"))));
        fun_656=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1785, "sFun")),(char*)come_increment_ref_count(name_651),(struct sType*)come_increment_ref_count(result_type_652),(struct list$1sTypeph*)come_increment_ref_count(param_types_653),(struct list$1charph*)come_increment_ref_count(param_names_654),(struct list$1charph*)come_increment_ref_count(param_default_parametors_655),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_651)),(struct sFun*)come_increment_ref_count(fun_656));
        name_651 = come_decrement_ref_count2(name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_653,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_654,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_655,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_656,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_536;
struct list$1sTypeph* __result295__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_536=0;    i_536<num_value;    i_536++    ){
        list$1sTypeph_push_back(self,values[i_536]);
    }
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
struct list_item$1sTypeph* litem_537;
struct sType* __dec_obj192;
void* __right_value422 = (void*)0;
struct list_item$1sTypeph* litem_538;
struct sType* __dec_obj193;
void* __right_value423 = (void*)0;
struct list_item$1sTypeph* litem_539;
struct sType* __dec_obj194;
struct list$1sTypeph* __result294__;
    if(    self->len==0) {
        litem_537=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value421=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1149, "list_item$1sTypeph"))));
        litem_537->prev=((void*)0);
        litem_537->next=((void*)0);
        __dec_obj192=litem_537->item;
        litem_537->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_537;
        self->head=litem_537;
    }
    else if(    self->len==1) {
        litem_538=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value422=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1159, "list_item$1sTypeph"))));
        litem_538->prev=self->head;
        litem_538->next=((void*)0);
        __dec_obj193=litem_538->item;
        litem_538->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_538;
        self->head->next=litem_538;
    }
    else {
        litem_539=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value423=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1169, "list_item$1sTypeph"))));
        litem_539->prev=self->tail;
        litem_539->next=((void*)0);
        __dec_obj194=litem_539->item;
        litem_539->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_539;
        self->tail=litem_539;
    }
    self->len++;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_542;
struct list$1charph* __result296__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_542=0;    i_542<num_value;    i_542++    ){
        list$1charph_push_back(self,values[i_542]);
    }
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_563;
unsigned int it_564;
_Bool same_key_exist_565;
char* it2_566;
struct map$2charphsFunph* __result307__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_563=charp_get_hash_key(key)%self->size;
    it_564=hash_563;
    while((_Bool)1) {
        if(        self->item_existance[it_564]) {
            if(            charp_equals(self->keys[it_564],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_564]);
                    self->keys[it_564] = come_decrement_ref_count2(self->keys[it_564], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_564]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_564]);
                    self->keys[it_564]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_564],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_564]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_564]=item;
                }
                break;
            }
            it_564++;
            if(            it_564>=self->size) {
                it_564=0;
            }
            else if(            it_564==hash_563) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_564]=(_Bool)1;
            if(            1) {
                self->keys[it_564]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_564]=key;
            }
            if(            1) {
                self->items[it_564]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_564]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_565=(_Bool)0;
    for(    it2_566=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_566=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_566,key)) {
            same_key_exist_565=(_Bool)1;
        }
    }
    if(    !same_key_exist_565) {
        list$1charp_push_back(self->key_list,key);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_546;
void* __right_value444 = (void*)0;
char** keys_547;
void* __right_value445 = (void*)0;
struct sFun** items_548;
void* __right_value446 = (void*)0;
_Bool* item_existance_549;
int len_550;
char* it_553;
struct sFun* default_value_556;
void* __right_value447 = (void*)0;
struct sFun* it2_557;
unsigned int hash_560;
int n_561;
struct sFun* default_value_562;
void* __right_value448 = (void*)0;
default_value_556 = (void*)0;
default_value_562 = (void*)0;
    size_546=self->size*10;
    keys_547=(char**)come_increment_ref_count(((char**)(__right_value444=(char**)come_calloc(1, sizeof(char*)*(1*(size_546)), "/usr/local/include/comelang.h", 2554, "char*%"))));
    items_548=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value445=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_546)), "/usr/local/include/comelang.h", 2555, "sFun*%"))));
    item_existance_549=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value446=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_546)), "/usr/local/include/comelang.h", 2556, "bool"))));
    len_550=0;
    for(    it_553=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_553=map$2charphsFunph_next(self)    ){
        memset(&default_value_556,0,sizeof(struct sFun*));
        it2_557=((struct sFun*)(__right_value447=map$2charphsFunph_at(self,it_553,default_value_556)));
        come_call_finalizer3(__right_value447,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_560=charp_get_hash_key(it_553)%size_546;
        n_561=hash_560;
        while((_Bool)1) {
            if(            item_existance_549[n_561]) {
                n_561++;
                if(                n_561>=size_546) {
                    n_561=0;
                }
                else if(                n_561==hash_560) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_549[n_561]=(_Bool)1;
                keys_547[n_561]=it_553;
                items_548[n_561]=((struct sFun*)(__right_value448=map$2charphsFunph_at(self,it_553,default_value_562)));
                come_call_finalizer3(__right_value448,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_550++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_547;
    self->items=items_548;
    self->item_existance=item_existance_549;
    self->size=size_546;
    self->len=len_550;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_551;
char* __result297__;
char* __result298__;
char* result_552;
char* __result299__;
result_551 = (void*)0;
result_552 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_551,0,sizeof(char*));
        __result297__ = gComeFunResultObject = __result_obj__ = result_551;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result298__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    memset(&result_552,0,sizeof(char*));
    __result299__ = gComeFunResultObject = __result_obj__ = result_552;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_554;
char* __result300__;
char* __result301__;
char* result_555;
char* __result302__;
result_554 = (void*)0;
result_555 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_554,0,sizeof(char*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_554;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_555,0,sizeof(char*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_555;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_558;
unsigned int it_559;
struct sFun* __result303__;
struct sFun* __result304__;
struct sFun* __result305__;
struct sFun* __result306__;
    hash_558=charp_get_hash_key(((char*)key))%self->size;
    it_559=hash_558;
    while((_Bool)1) {
        if(        self->item_existance[it_559]) {
            if(            charp_equals(self->keys[it_559],key)) {
                __result303__ = gComeFunResultObject = __result_obj__ = self->items[it_559];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result303__;
            }
            it_559++;
            if(            it_559>=self->size) {
                it_559=0;
            }
            else if(            it_559==hash_558) {
                __result304__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
        }
        else {
            __result305__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
    }
    __result306__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_657;
_Bool is_type_name_flag_658;
int sline_659;
_Bool define_struct_nobody_660;
char* p_661;
int sline_662;
void* __right_value732 = (void*)0;
char* word_663;
_Bool define_function_pointer_result_function_664;
_Bool define_variable_between_brace_665;
char* p_666;
void* __right_value733 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_667=0;
char* fun_name_668=0;
_Bool err_669=0;
void* __right_value734 = (void*)0;
char* word_670;
_Bool define_function_flag_671;
char* p_672;
void* __right_value735 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_673=0;
char* fun_name_674=0;
_Bool err_675=0;
char* word_676;
void* __right_value736 = (void*)0;
char* __dec_obj197;
void* __right_value737 = (void*)0;
char* __dec_obj198;
char* __dec_obj199;
void* __right_value738 = (void*)0;
char* __dec_obj200;
_Bool define_variable_677;
char* p_678;
void* __right_value739 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_679=0;
char* fun_name_680=0;
_Bool err_681=0;
void* __right_value740 = (void*)0;
char* word_682;
void* __right_value741 = (void*)0;
char* word_683;
char* p_684;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
char* word_685;
void* __right_value745 = (void*)0;
char* __dec_obj201;
void* __right_value746 = (void*)0;
char* word_686;
void* __right_value747 = (void*)0;
char* word_689;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* node_690;
struct sNode* __result309__;
void* __right_value750 = (void*)0;
struct sNode* __result310__;
char* header_head_691;
void* __right_value751 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_692=0;
char* fun_name_693=0;
_Bool err_694=0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct list$1sTypeph* param_types_695;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct list$1charph* param_names_696;
void* __right_value756 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_697=0;
char* param_name_698=0;
_Bool err_699=0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct list$1sTypeph* param_types2_701;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct list$1charph* param_names2_702;
void* __right_value763 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_703=0;
char* param_name_704=0;
_Bool err_705=0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
char* header_tail_707;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sType* result_type2_708;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct tuple1$1sTypeph* __dec_obj203;
void* __right_value770 = (void*)0;
struct list$1sTypeph* __dec_obj204;
void* __right_value771 = (void*)0;
struct list$1charph* __dec_obj205;
_Bool var_args_709;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct buffer* header_buf_710;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct list$1charph* param_default_parametors_711;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sFun* fun_712;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sFun* fun2_716;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value833 = (void*)0;
struct sNode* __result340__;
void* __right_value834 = (void*)0;
struct sNode* node_752;
struct sNode* __result341__;
void* __right_value835 = (void*)0;
struct sNode* node_753;
struct sNode* __result342__;
void* __right_value836 = (void*)0;
struct sNode* node_754;
char* source_tail_755;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct buffer* header_756;
struct sNode* __result343__;
void* __right_value839 = (void*)0;
char* buf2_757;
void* __right_value840 = (void*)0;
struct sNode* __result344__;
    info->in_top_level=(_Bool)1;
    source_head_657=info->p;
    is_type_name_flag_658=is_type_name(buf,info);
    sline_659=info->sline;
    define_struct_nobody_660=(_Bool)0;
    {
        p_661=info->p;
        sline_662=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_663=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_660=(_Bool)1;
                }
                word_663 = come_decrement_ref_count2(word_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_662;
    }
    define_function_pointer_result_function_664=(_Bool)0;
    define_variable_between_brace_665=(_Bool)0;
    if(    is_type_name_flag_658) {
        p_666=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value733=backtrace_parse_type((_Bool)0,info)));
            result_type_667=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_668=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_669=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value733,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_664=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_670=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_670,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_665=(_Bool)1;
                            }
                        }
                        word_670 = come_decrement_ref_count2(word_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_668 = come_decrement_ref_count2(fun_name_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_659;
    }
    define_function_flag_671=(_Bool)0;
    if(    is_type_name_flag_658&&!define_function_pointer_result_function_664&&charp_operator_not_equals(buf,"__typeof__")) {
        p_672=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value735=backtrace_parse_type((_Bool)0,info)));
            result_type_673=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_674=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_675=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value735,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_673,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_674 = come_decrement_ref_count2(fun_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_676=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj197=word_676;
                word_676=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_676,"extern")) {
                    __dec_obj198=word_676;
                    word_676=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj199=word_676;
                word_676=((void*)0);
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_676) {
                if(                is_type_name(word_676,info)) {
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
                        __dec_obj200=word_676;
                        word_676=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_676)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_658) {
                        define_function_flag_671=(_Bool)1;
                    }
                }
            }
            word_676 = come_decrement_ref_count2(word_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_672;
        info->sline=sline_659;
    }
    define_variable_677=(_Bool)1;
    if(    is_type_name_flag_658&&!define_function_pointer_result_function_664) {
        p_678=info->p;
        info->p=head;
        if(        !is_type_name_flag_658) {
            define_variable_677=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value739=backtrace_parse_type((_Bool)0,info)));
            result_type_679=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_680=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_681=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value739,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_682=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_677=(_Bool)1;
                            }
                        }
                        word_682 = come_decrement_ref_count2(word_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_683=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_683,info)&&*info->p!=40) {
                            define_variable_677=(_Bool)1;
                        }
                    }
                    word_683 = come_decrement_ref_count2(word_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_679,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_680 = come_decrement_ref_count2(fun_name_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_677=(_Bool)0;
        }
        else if(        define_variable_677) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_677=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_677=(_Bool)0;
            }
        }
        info->p=p_678;
        info->sline=sline_659;
    }
    else {
        define_variable_677=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_664) {
        p_684=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value742=parse_struct_attribute(info)));
            __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value743=parse_word(info)));
                __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_685=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj201=word_685;
                        word_685=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_685,"extends")) {
                            define_variable_677=(_Bool)0;
                        }
                    }
                    word_685 = come_decrement_ref_count2(word_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_677=(_Bool)0;
        }
        else if(        define_variable_677) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_677=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_677=(_Bool)0;
            }
        }
        info->p=p_684;
        info->sline=sline_659;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_686=(char*)come_increment_ref_count(parse_word(info));
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
                    word_689=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_689)));
                    word_689 = come_decrement_ref_count2(word_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_690=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result309__ = gComeFunResultObject = __result_obj__ = node_690;
            if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_686 = come_decrement_ref_count2(word_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result309__;
            if(node_690) { node_690 = come_decrement_ref_count2(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_686 = come_decrement_ref_count2(word_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_660) {
    }
    else if(    define_variable_between_brace_665) {
        info->p=head;
        info->sline=sline_659;
        __result310__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value750=parse_global_variable(info)));
        if(__right_value750) { __right_value750 = come_decrement_ref_count2(__right_value750, ((struct sNode*)__right_value750)->finalize, ((struct sNode*)__right_value750)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    else if(    define_function_pointer_result_function_664) {
        header_head_691=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value751=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_692=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_693=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_694=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value751,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_695=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2111, "list$1sTypeph"))));
            param_names_696=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2112, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value756=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_697=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_698=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_699=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value756,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_699) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_695,(struct sType*)come_increment_ref_count(param_type_697));
                    static int num_function_pointer_result_var_name_a_700=0;
                    list$1charph_push_back(param_names_696,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_700)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value758=parse_word(info)));
                        __right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_698 = come_decrement_ref_count2(param_name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_698 = come_decrement_ref_count2(param_name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_701=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2158, "list$1sTypeph"))));
                param_names2_702=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2159, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value763=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_703=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_704=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_705=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value763,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_705) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_701,(struct sType*)come_increment_ref_count(param_type_703));
                        static int num_function_pointer_result_var_name_b_706=0;
                        list$1charph_push_back(param_names2_702,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_706)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value765=parse_word(info)));
                            __right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_704 = come_decrement_ref_count2(param_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_704 = come_decrement_ref_count2(param_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_707=info->p;
                result_type2_708=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2201, "sType")),"lambda",(_Bool)0,info));
                __dec_obj203=result_type2_708->mResultType;
                result_type2_708->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2203, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_692)));
                come_call_finalizer3(__dec_obj203,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj204=result_type2_708->mParamTypes;
                result_type2_708->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_701));
                come_call_finalizer3(__dec_obj204,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj205=result_type2_708->mParamNames;
                result_type2_708->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_702));
                come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_708->mVarArgs=(_Bool)0;
                result_type2_708->mStatic=(_Bool)0;
                var_args_709=(_Bool)0;
                header_buf_710=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2211, "buffer"))));
                buffer_append(header_buf_710,header_head_691,header_tail_707-header_head_691);
                buffer_append_char(header_buf_710,0);
                param_default_parametors_711=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2215, "list$1charph"))));
                fun_712=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2217, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_693)),(struct sType*)come_increment_ref_count(result_type2_708),(struct list$1sTypeph*)come_increment_ref_count(param_types_695),(struct list$1charph*)come_increment_ref_count(param_names_696),(struct list$1charph*)come_increment_ref_count(param_default_parametors_711),(_Bool)1,var_args_709,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_710)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_716=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value783=__builtin_string(fun_name_693)))));
                __right_value783 = come_decrement_ref_count2(__right_value783, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_716==((void*)0)||fun2_716->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_693)),(struct sFun*)come_increment_ref_count(fun_712));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2230, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value787=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2230, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_712),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=_inf_value2));
                come_call_finalizer3(param_types2_701,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_702,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_708,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_710,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_711,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_712,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_716,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_695,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_693 = come_decrement_ref_count2(fun_name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value787,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result340__;
                come_call_finalizer3(param_types2_701,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_702,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_708,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_710,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_711,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_712,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_716,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_695,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_693 = come_decrement_ref_count2(fun_name_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_659;
        node_752=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result341__ = gComeFunResultObject = __result_obj__ = node_752;
        if(node_752) { node_752 = come_decrement_ref_count2(node_752, ((struct sNode*)node_752)->finalize, ((struct sNode*)node_752)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result341__;
        if(node_752) { node_752 = come_decrement_ref_count2(node_752, ((struct sNode*)node_752)->finalize, ((struct sNode*)node_752)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_671) {
        info->p=head;
        info->sline=sline_659;
        node_753=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result342__ = gComeFunResultObject = __result_obj__ = node_753;
        if(node_753) { node_753 = come_decrement_ref_count2(node_753, ((struct sNode*)node_753)->finalize, ((struct sNode*)node_753)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result342__;
        if(node_753) { node_753 = come_decrement_ref_count2(node_753, ((struct sNode*)node_753)->finalize, ((struct sNode*)node_753)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_677) {
        info->p=head;
        info->sline=sline_659;
        node_754=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_755=info->p;
        header_756=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2262, "buffer"))));
        buffer_append(header_756,source_head_657,source_tail_755-source_head_657);
        __result343__ = gComeFunResultObject = __result_obj__ = node_754;
        if(node_754) { node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result343__;
        if(node_754) { node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_659;
    buf2_757=(char*)come_increment_ref_count(parse_word(info));
    __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value840=top_level_v98(buf2_757,head,head_sline,info)));
    buf2_757 = come_decrement_ref_count2(buf2_757, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value840) { __right_value840 = come_decrement_ref_count2(__right_value840, ((struct sNode*)__right_value840)->finalize, ((struct sNode*)__right_value840)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj195;
char* __dec_obj196;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj195=self->v1;
            come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj196=self->v2;
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_687;
struct list_item$1charph* prev_it_688;
struct list$1charph* __result308__;
    it_687=self->head;
    while(it_687!=((void*)0)) {
        prev_it_688=it_687;
        it_687=it_687->next;
        come_call_finalizer3(prev_it_688,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj202;
struct tuple1$1sTypeph* __result311__;
    __dec_obj202=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_713;
unsigned int hash_714;
unsigned int it_715;
struct sFun* __result312__;
struct sFun* __result313__;
struct sFun* __result314__;
struct sFun* __result315__;
default_value_713 = (void*)0;
    memset(&default_value_713,0,sizeof(struct sFun*));
    hash_714=charp_get_hash_key(((char*)key))%self->size;
    it_715=hash_714;
    while((_Bool)1) {
        if(        self->item_existance[it_715]) {
            if(            charp_equals(self->keys[it_715],key)) {
                __result312__ = gComeFunResultObject = __result_obj__ = self->items[it_715];
                come_call_finalizer3(default_value_713,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result312__;
            }
            it_715++;
            if(            it_715>=self->size) {
                it_715=0;
            }
            else if(            it_715==hash_714) {
                __result313__ = gComeFunResultObject = __result_obj__ = default_value_713;
                come_call_finalizer3(default_value_713,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result313__;
            }
        }
        else {
            __result314__ = gComeFunResultObject = __result_obj__ = default_value_713;
            come_call_finalizer3(default_value_713,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result314__;
        }
    }
    __result315__ = gComeFunResultObject = __result_obj__ = default_value_713;
    come_call_finalizer3(default_value_713,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result317__;
void* __right_value790 = (void*)0;
struct sFun* result_718;
void* __right_value791 = (void*)0;
char* __dec_obj209;
void* __right_value792 = (void*)0;
struct sType* __dec_obj210;
void* __right_value793 = (void*)0;
struct list$1sTypeph* __dec_obj211;
void* __right_value794 = (void*)0;
struct list$1charph* __dec_obj212;
void* __right_value795 = (void*)0;
struct list$1charph* __dec_obj213;
void* __right_value796 = (void*)0;
struct sType* __dec_obj214;
void* __right_value823 = (void*)0;
struct sBlock* __dec_obj224;
void* __right_value824 = (void*)0;
struct buffer* __dec_obj225;
void* __right_value825 = (void*)0;
struct buffer* __dec_obj226;
void* __right_value826 = (void*)0;
struct buffer* __dec_obj227;
void* __right_value827 = (void*)0;
struct buffer* __dec_obj228;
void* __right_value828 = (void*)0;
char* __dec_obj229;
void* __right_value829 = (void*)0;
char* __dec_obj230;
void* __right_value830 = (void*)0;
char* __dec_obj231;
void* __right_value831 = (void*)0;
char* __dec_obj232;
struct sFun* __result338__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_718=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj209=result_718->mName;
        result_718->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj210=result_718->mResultType;
        result_718->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj211=result_718->mParamTypes;
        result_718->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj211,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj212=result_718->mParamNames;
        result_718->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj213=result_718->mParamDefaultParametors;
        result_718->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj213,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj214=result_718->mLambdaType;
        result_718->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj224=result_718->mBlock;
        result_718->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj224,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_718->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_718->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj225=result_718->mSource;
        result_718->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj226=result_718->mSourceHead;
        result_718->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj226,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj227=result_718->mSourceHead2;
        result_718->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj227,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj228=result_718->mSourceDefer;
        result_718->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj228,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_718->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_718->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_718->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj229=result_718->mComeHeader;
        result_718->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_718->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj230=result_718->mDeclareSName;
        result_718->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_718->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_718->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_718->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj231=result_718->mAttribute;
        result_718->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj232=result_718->mFunAttribute;
        result_718->mFunAttribute=(char*)come_increment_ref_count(string_clone(self->mFunAttribute));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_718;
    come_call_finalizer3(result_718,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result318__;
void* __right_value797 = (void*)0;
struct sBlock* result_719;
void* __right_value798 = (void*)0;
struct list$1sNodeph* __dec_obj215;
void* __right_value822 = (void*)0;
struct sVarTable* __dec_obj223;
struct sBlock* __result337__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_719=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj215=result_719->mNodes;
        result_719->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj215,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj223=result_719->mVarTable;
        result_719->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj223,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_719->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_719;
    come_call_finalizer3(result_719,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result319__;
void* __right_value799 = (void*)0;
struct sVarTable* result_720;
void* __right_value821 = (void*)0;
struct map$2charphsVarph* __dec_obj222;
struct sVarTable* __result336__;
    if(    self==(void*)0) {
        __result319__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    result_720=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj222=result_720->mVars;
        result_720->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj222,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_720->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_720->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_720->mID=self->mID;
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_720;
    come_call_finalizer3(result_720,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result320__;
void* __right_value800 = (void*)0;
void* __right_value806 = (void*)0;
struct map$2charphsVarph* result_724;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct list$1charp* __dec_obj217;
char* it_727;
struct sVar* default_value_730;
void* __right_value809 = (void*)0;
struct sVar* it2_733;
void* __right_value820 = (void*)0;
struct map$2charphsVarph* __result335__;
default_value_730 = (void*)0;
    if(    self==((void*)0)) {
        __result320__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_724=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2397, "map$2charphsVarph"))));
    __dec_obj217=result_724->key_list;
    result_724->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2399, "list$1charp"))));
    come_call_finalizer3(__dec_obj217,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_727=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_727=map$2charphsVarph_next(self)    ){
        memset(&default_value_730,0,sizeof(struct sVar*));
        it2_733=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_727,default_value_730));
        map$2charphsVarph_put(result_724,it_727,(struct sVar*)come_increment_ref_count(sVar_clone(it2_733)));
        come_call_finalizer3(it2_733,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_724;
    come_call_finalizer3(result_724,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
int i_721;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct list$1charp* __dec_obj216;
struct map$2charphsVarph* __result321__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value801=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2326, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value802=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2327, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value803=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2328, "bool"))));
    for(    i_721=0;    i_721<128;    i_721++    ){
        self->item_existance[i_721]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj216=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2338, "list$1charp"))));
    come_call_finalizer3(__dec_obj216,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_722;
int i_723;
    for(    i_722=0;    i_722<self->size;    i_722++    ){
        if(        self->item_existance[i_722]) {
            if(            1) {
                come_call_finalizer3(self->items[i_722],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_723=0;    i_723<self->size;    i_723++    ){
        if(        self->item_existance[i_723]) {
            if(            1) {
                self->keys[i_723] = come_decrement_ref_count2(self->keys[i_723], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_725;
char* __result322__;
char* __result323__;
char* result_726;
char* __result324__;
result_725 = (void*)0;
result_726 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_725,0,sizeof(char*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_725;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_726,0,sizeof(char*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_726;
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_728;
char* __result325__;
char* __result326__;
char* result_729;
char* __result327__;
result_728 = (void*)0;
result_729 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_728,0,sizeof(char*));
        __result325__ = gComeFunResultObject = __result_obj__ = result_728;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result326__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    memset(&result_729,0,sizeof(char*));
    __result327__ = gComeFunResultObject = __result_obj__ = result_729;
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_731;
unsigned int it_732;
struct sVar* __result328__;
struct sVar* __result329__;
struct sVar* __result330__;
struct sVar* __result331__;
    hash_731=charp_get_hash_key(((char*)key))%self->size;
    it_732=hash_731;
    while((_Bool)1) {
        if(        self->item_existance[it_732]) {
            if(            charp_equals(self->keys[it_732],key)) {
                __result328__ = gComeFunResultObject = __result_obj__ = self->items[it_732];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result328__;
            }
            it_732++;
            if(            it_732>=self->size) {
                it_732=0;
            }
            else if(            it_732==hash_731) {
                __result329__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result329__;
            }
        }
        else {
            __result330__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result330__;
        }
    }
    __result331__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_745;
int it_746;
_Bool same_key_exist_747;
char* it2_748;
struct map$2charphsVarph* __result332__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_745=charp_get_hash_key(key)%self->size;
    it_746=hash_745;
    while((_Bool)1) {
        if(        self->item_existance[it_746]) {
            if(            charp_equals(self->keys[it_746],key)) {
                if(                1) {
                    self->keys[it_746] = come_decrement_ref_count2(self->keys[it_746], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_746]);
                    self->keys[it_746]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_746]);
                    self->keys[it_746]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_746],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_746]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_746]=item;
                }
                break;
            }
            it_746++;
            if(            it_746>=self->size) {
                it_746=0;
            }
            else if(            it_746==hash_745) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_746]=(_Bool)1;
            if(            1) {
                self->keys[it_746]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_746]=key;
            }
            if(            1) {
                self->items[it_746]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_746]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_747=(_Bool)0;
    for(    it2_748=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_748=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_748,key)) {
            same_key_exist_747=(_Bool)1;
        }
    }
    if(    !same_key_exist_747) {
        list$1charp_push_back(self->key_list,key);
    }
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_734;
void* __right_value810 = (void*)0;
char** keys_735;
void* __right_value811 = (void*)0;
struct sVar** items_736;
void* __right_value812 = (void*)0;
_Bool* item_existance_737;
int len_738;
char* it_739;
struct sVar* default_value_740;
void* __right_value813 = (void*)0;
struct sVar* it2_741;
unsigned int hash_742;
int n_743;
struct sVar* default_value_744;
void* __right_value814 = (void*)0;
default_value_740 = (void*)0;
default_value_744 = (void*)0;
    size_734=self->size*10;
    keys_735=(char**)come_increment_ref_count(((char**)(__right_value810=(char**)come_calloc(1, sizeof(char*)*(1*(size_734)), "/usr/local/include/comelang.h", 2554, "char*%"))));
    items_736=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value811=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_734)), "/usr/local/include/comelang.h", 2555, "sVar*%"))));
    item_existance_737=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value812=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_734)), "/usr/local/include/comelang.h", 2556, "bool"))));
    len_738=0;
    for(    it_739=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_739=map$2charphsVarph_next(self)    ){
        memset(&default_value_740,0,sizeof(struct sVar*));
        it2_741=((struct sVar*)(__right_value813=map$2charphsVarph_at(self,it_739,default_value_740)));
        come_call_finalizer3(__right_value813,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_742=charp_get_hash_key(it_739)%size_734;
        n_743=hash_742;
        while((_Bool)1) {
            if(            item_existance_737[n_743]) {
                n_743++;
                if(                n_743>=size_734) {
                    n_743=0;
                }
                else if(                n_743==hash_742) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_737[n_743]=(_Bool)1;
                keys_735[n_743]=it_739;
                items_736[n_743]=((struct sVar*)(__right_value814=map$2charphsVarph_at(self,it_739,default_value_744)));
                come_call_finalizer3(__right_value814,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_738++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_735;
    self->items=items_736;
    self->item_existance=item_existance_737;
    self->size=size_734;
    self->len=len_738;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result333__;
void* __right_value815 = (void*)0;
struct sVar* result_749;
void* __right_value816 = (void*)0;
char* __dec_obj218;
void* __right_value817 = (void*)0;
char* __dec_obj219;
void* __right_value818 = (void*)0;
struct sType* __dec_obj220;
void* __right_value819 = (void*)0;
char* __dec_obj221;
struct sVar* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_749=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj218=result_749->mName;
        result_749->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj219=result_749->mCValueName;
        result_749->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj220=result_749->mType;
        result_749->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_749->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_749->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_749->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_749->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_749->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj221=result_749->mFunName;
        result_749->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_749;
    come_call_finalizer3(result_749,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_750;
int i_751;
    for(    i_750=0;    i_750<self->size;    i_750++    ){
        if(        self->item_existance[i_750]) {
            if(            1) {
                come_call_finalizer3(self->items[i_750],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_751=0;    i_751<self->size;    i_751++    ){
        if(        self->item_existance[i_751]) {
            if(            1) {
                self->keys[i_751] = come_decrement_ref_count2(self->keys[i_751], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_758;
int caller_line_759;
char* caller_sname_760;
_Bool comma_instead_of_semicolon_761;
char* last_code_762;
char* __dec_obj234;
char* last_code2_763;
char* __dec_obj235;
void* __right_value841 = (void*)0;
char* sname_top_764;
int sline_top_765;
void* __right_value842 = (void*)0;
struct sFun* funX_766;
_Bool __result345__;
void* __right_value843 = (void*)0;
struct sType* result_type_767;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct list$1sTypeph* param_types_768;
struct list$1sTypeph* o2_saved_769;
struct sType* it_772;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct sType* param_type_775;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1charph* param_names_776;
void* __right_value850 = (void*)0;
struct list$1charph* param_default_parametors_777;
char* p_778;
int sline_779;
char* sname_780;
char* head_781;
struct buffer* source_782;
void* __right_value851 = (void*)0;
struct buffer* __dec_obj236;
struct sType* generics_type_saved_783;
void* __right_value852 = (void*)0;
struct sType* __dec_obj237;
struct list$1charph* method_generics_type_names_784;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1charph* __dec_obj238;
struct list$1charph* o2_saved_785;
char* it_786;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct list$1charph* __dec_obj239;
char* __dec_obj240;
void* __right_value857 = (void*)0;
struct sBlock* block_787;
struct buffer* __dec_obj241;
char* __dec_obj242;
_Bool var_args_788;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct sFun* fun_789;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value871 = (void*)0;
struct sNode* node_790;
_Bool in_generics_fun_792;
_Bool Value_793;
void* __if_result__1_794 = (void*)0;
_Bool __result354__;
struct sType* __dec_obj247;
struct list$1charph* __dec_obj248;
void* __right_value872 = (void*)0;
char* __dec_obj249;
char* __dec_obj250;
char* __dec_obj251;
_Bool __result355__;
    caller_fun_758=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_759=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_760=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_761=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_762=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj234=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_763=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj235=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_764=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_765=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_766=((struct sFun*)(__right_value842=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value842,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_766) {
        __result345__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_762 = come_decrement_ref_count2(last_code_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_763 = come_decrement_ref_count2(last_code2_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_764 = come_decrement_ref_count2(sname_top_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result345__;
    }
    result_type_767=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_768=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2309, "list$1sTypeph"))));
    for(    o2_saved_769=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_772=list$1sTypeph_begin((o2_saved_769));    !list$1sTypeph_end((o2_saved_769));    it_772=list$1sTypeph_next((o2_saved_769))    ){
        param_type_775=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value846=sType_clone(it_772))),generics_type,info));
        come_call_finalizer3(__right_value846,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_775->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_768,(struct sType*)come_increment_ref_count(sType_clone(param_type_775)));
        come_call_finalizer3(param_type_775,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_769,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_776=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_777=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_778=info->p;
    sline_779=info->sline;
    sname_780=(char*)come_increment_ref_count(info->sname);
    head_781=info->head;
    source_782=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj236=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj236,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_783=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj237=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_784=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj238=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2336, "list$1charph"))));
    come_call_finalizer3(__dec_obj238,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_785=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_786=list$1charph_begin((o2_saved_785));    !list$1charph_end((o2_saved_785));    it_786=list$1charph_next((o2_saved_785))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_786)));
    }
    come_call_finalizer3(o2_saved_785,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj239=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj239,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj240=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_787=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_781;
    __dec_obj241=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_782);
    come_call_finalizer3(__dec_obj241,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_778;
    info->sline=sline_779;
    __dec_obj242=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_780);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_767->mInline=(_Bool)0;
    result_type_767->mStatic=(_Bool)0;
    result_type_767->mUniq=(_Bool)0;
    var_args_788=generics_fun->mVarArgs;
    fun_789=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2360, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_767),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_768)),(struct list$1charph*)come_increment_ref_count(param_names_776),(struct list$1charph*)come_increment_ref_count(param_default_parametors_777),(_Bool)0,var_args_788,(struct sBlock*)come_increment_ref_count(block_787),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_789));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2367, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value867=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2367, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_789),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_790=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value867,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_792=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_793=node_compile(node_790,info);
    if(    !Value_793) {
        __result354__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_762 = come_decrement_ref_count2(last_code_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_763 = come_decrement_ref_count2(last_code2_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_764 = come_decrement_ref_count2(sname_top_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_767,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_768,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_776,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_777,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_780 = come_decrement_ref_count2(sname_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_783,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_784,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_787,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_789,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_790) { node_790 = come_decrement_ref_count2(node_790, ((struct sNode*)node_790)->finalize, ((struct sNode*)node_790)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result354__;
    }
    else {
        __if_result__1_794=(void*)(Value_793);
;
    }
    info->in_generics_fun=in_generics_fun_792;
    __dec_obj247=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_783);
    come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj248=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_784);
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj249=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_764));
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_765;
    __dec_obj250=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_762);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj251=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_763);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_758;
    info->caller_line=caller_line_759;
    info->caller_sname=caller_sname_760;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_761;
    __result355__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_762 = come_decrement_ref_count2(last_code_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_763 = come_decrement_ref_count2(last_code2_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_764 = come_decrement_ref_count2(sname_top_764, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_767,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_768,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_776,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_777,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_780 = come_decrement_ref_count2(sname_780, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_783,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_784,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_787,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_789,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_790) { node_790 = come_decrement_ref_count2(node_790, ((struct sNode*)node_790)->finalize, ((struct sNode*)node_790)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result355__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_770;
struct sType* __result346__;
struct sType* __result347__;
struct sType* result_771;
struct sType* __result348__;
result_770 = (void*)0;
result_771 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_770,0,sizeof(struct sType*));
        __result346__ = gComeFunResultObject = __result_obj__ = result_770;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    self->it=self->head;
    if(    self->it) {
        __result347__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    memset(&result_771,0,sizeof(struct sType*));
    __result348__ = gComeFunResultObject = __result_obj__ = result_771;
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_773;
struct sType* __result349__;
struct sType* __result350__;
struct sType* result_774;
struct sType* __result351__;
result_773 = (void*)0;
result_774 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_773,0,sizeof(struct sType*));
        __result349__ = gComeFunResultObject = __result_obj__ = result_773;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result350__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    memset(&result_774,0,sizeof(struct sType*));
    __result351__ = gComeFunResultObject = __result_obj__ = result_774;
    gComeFunResultObject = (void*)0;
    return __result351__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_795;
int caller_line_796;
char* caller_sname_797;
_Bool comma_instead_of_semicolon_798;
char* last_code_799;
char* __dec_obj252;
char* last_code2_800;
char* __dec_obj253;
void* __right_value873 = (void*)0;
char* sname_top_801;
int sline_top_802;
void* __right_value874 = (void*)0;
struct sFun* funX_803;
_Bool __result356__;
void* __right_value875 = (void*)0;
struct sType* result_type_804;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct list$1sTypeph* param_types_805;
struct list$1sTypeph* o2_saved_806;
struct sType* it_807;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct sType* param_type_808;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct list$1charph* param_names_809;
void* __right_value882 = (void*)0;
struct list$1charph* param_default_parametors_810;
char* p_811;
int sline_812;
char* sname_813;
char* head_814;
struct buffer* source_815;
void* __right_value883 = (void*)0;
struct buffer* __dec_obj254;
struct list$1charph* method_generics_type_names_816;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct list$1charph* __dec_obj255;
struct list$1charph* o2_saved_817;
char* it_818;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct list$1charph* __dec_obj256;
char* __dec_obj257;
void* __right_value888 = (void*)0;
struct sBlock* block_819;
struct buffer* __dec_obj258;
char* __dec_obj259;
_Bool var_args_820;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct sFun* fun_821;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value902 = (void*)0;
struct sNode* node_822;
_Bool Value_824;
void* __if_result__2_825 = (void*)0;
_Bool __result359__;
struct list$1charph* __dec_obj264;
void* __right_value903 = (void*)0;
char* __dec_obj265;
char* __dec_obj266;
char* __dec_obj267;
_Bool __result360__;
    caller_fun_795=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_796=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_797=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_798=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_799=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj252=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_800=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj253=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_801=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_802=info->sline;
    funX_803=((struct sFun*)(__right_value874=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value874,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_803) {
        __result356__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_799 = come_decrement_ref_count2(last_code_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_800 = come_decrement_ref_count2(last_code2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_801 = come_decrement_ref_count2(sname_top_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result356__;
    }
    result_type_804=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_805=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2421, "list$1sTypeph"))));
    for(    o2_saved_806=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_807=list$1sTypeph_begin((o2_saved_806));    !list$1sTypeph_end((o2_saved_806));    it_807=list$1sTypeph_next((o2_saved_806))    ){
        param_type_808=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value878=sType_clone(it_807))),info));
        come_call_finalizer3(__right_value878,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_808->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_805,(struct sType*)come_increment_ref_count(sType_clone(param_type_808)));
        come_call_finalizer3(param_type_808,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_806,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_809=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_810=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_811=info->p;
    sline_812=info->sline;
    sname_813=(char*)come_increment_ref_count(info->sname);
    head_814=info->head;
    source_815=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj254=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj254,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_816=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj255=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2445, "list$1charph"))));
    come_call_finalizer3(__dec_obj255,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_817=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_818=list$1charph_begin((o2_saved_817));    !list$1charph_end((o2_saved_817));    it_818=list$1charph_next((o2_saved_817))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_818)));
    }
    come_call_finalizer3(o2_saved_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj256=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj256,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj257=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_819=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_814;
    __dec_obj258=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_815);
    come_call_finalizer3(__dec_obj258,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_811;
    info->sline=sline_812;
    __dec_obj259=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_813);
    __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_804->mInline=(_Bool)0;
    result_type_804->mStatic=(_Bool)0;
    result_type_804->mUniq=(_Bool)0;
    var_args_820=generics_fun->mVarArgs;
    fun_821=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2469, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_804),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_805)),(struct list$1charph*)come_increment_ref_count(param_names_809),(struct list$1charph*)come_increment_ref_count(param_default_parametors_810),(_Bool)0,var_args_820,(struct sBlock*)come_increment_ref_count(block_819),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_821));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2476, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value898=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2476, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_821),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_822=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value898,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_824=node_compile(node_822,info);
    if(    !Value_824) {
        __result359__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_799 = come_decrement_ref_count2(last_code_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_800 = come_decrement_ref_count2(last_code2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_801 = come_decrement_ref_count2(sname_top_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_804,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_805,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_809,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_810,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_813 = come_decrement_ref_count2(sname_813, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_815,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_819,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_821,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_822) { node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result359__;
    }
    else {
        __if_result__2_825=(void*)(Value_824);
;
    }
    __dec_obj264=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_816);
    come_call_finalizer3(__dec_obj264,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj265=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_801));
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_802;
    __dec_obj266=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_799);
    __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj267=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_800);
    __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_795;
    info->caller_line=caller_line_796;
    info->caller_sname=caller_sname_797;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_798;
    __result360__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_799 = come_decrement_ref_count2(last_code_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_800 = come_decrement_ref_count2(last_code2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_801 = come_decrement_ref_count2(sname_top_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_804,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_805,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_809,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_810,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_813 = come_decrement_ref_count2(sname_813, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_815,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_816,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_819,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_821,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_822) { node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result360__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_826;
char* source_head_827;
void* __right_value904 = (void*)0;
char* attribute_828;
struct sType* result_type_829;
char* var_name_830;
_Bool constructor__831;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct sType* __dec_obj268;
void* __right_value907 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_832=0;
char* var_name2_833=0;
_Bool err_834=0;
struct sType* __dec_obj269;
char* __dec_obj270;
_Bool method_definition_835;
char* p_836;
int sline_837;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct buffer* buf2_838;
char* fun_name_839;
char* base_fun_name_840;
void* __right_value910 = (void*)0;
char* __dec_obj271;
void* __right_value911 = (void*)0;
char* __dec_obj272;
void* __right_value912 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_841=0;
char* name_842=0;
_Bool err_843=0;
void* __right_value913 = (void*)0;
char* __dec_obj273;
void* __right_value914 = (void*)0;
char* __dec_obj274;
void* __right_value915 = (void*)0;
char* __dec_obj275;
void* __right_value916 = (void*)0;
char* __dec_obj276;
void* __right_value917 = (void*)0;
char* __dec_obj277;
void* __right_value918 = (void*)0;
char* __dec_obj278;
void* __right_value919 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_844=0;
struct list$1charph* param_names_845=0;
struct list$1charph* param_default_parametors_846=0;
_Bool var_args_847=0;
char* header_tail_848;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct buffer* header_buf_849;
int version_850;
int n_851;
_Bool in_top_level_852;
void* __right_value922 = (void*)0;
struct sBlock* block_853;
void* __right_value923 = (void*)0;
char* fun_name_855;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sFun* fun_856;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct sFun* fun2_857;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value938 = (void*)0;
struct sNode* __result363__;
void* __right_value939 = (void*)0;
char* none_generics_name_859;
void* __right_value940 = (void*)0;
char* generics_sname_860;
int generics_sline_861;
void* __right_value941 = (void*)0;
char* block_862;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sGenericsFun* fun_863;
void* __right_value948 = (void*)0;
char* fun_name3_864;
void* __right_value954 = (void*)0;
struct sNode* __result375__;
void* __right_value955 = (void*)0;
char* generics_sname_886;
int generics_sline_887;
void* __right_value956 = (void*)0;
char* block_888;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct sGenericsFun* fun_889;
void* __right_value963 = (void*)0;
char* fun_name3_890;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
struct sNode* __result376__;
char* source_tail_891;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct buffer* header_892;
void* __right_value968 = (void*)0;
char* name_893;
void* __right_value969 = (void*)0;
char* name_894;
int i_895;
void* __right_value970 = (void*)0;
struct sType* param_type_896;
void* __right_value971 = (void*)0;
char* param_name_897;
void* __right_value972 = (void*)0;
char* default_parametor_898;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
char* impl_name_899;
void* __right_value976 = (void*)0;
char* result_type_name_900;
void* __right_value977 = (void*)0;
char* impl_name_901;
void* __right_value978 = (void*)0;
char* result_type_name_902;
int i_903;
void* __right_value979 = (void*)0;
struct sType* param_type_904;
void* __right_value980 = (void*)0;
char* param_name_905;
void* __right_value981 = (void*)0;
char* default_parametor_906;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sBlock* block_907;
_Bool static_fun_908;
_Bool inline_fun_909;
_Bool uniq_fun_910;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
char* new_fun_name_911;
void* __right_value988 = (void*)0;
char* __dec_obj284;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct sFun* fun_912;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sFun* fun2_913;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1005 = (void*)0;
struct sNode* __result379__;
void* __right_value1006 = (void*)0;
char* new_fun_name_915;
void* __right_value1007 = (void*)0;
char* __dec_obj289;
char* source_tail_916;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct buffer* header_917;
_Bool result_type_static_918;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sFun* fun_919;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sFun* fun2_920;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1025 = (void*)0;
struct sNode* __result382__;
void* __right_value1026 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_922=0;
char* fun_attribute_923=0;
void* __right_value1027 = (void*)0;
char* __dec_obj294;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct buffer* header_924;
char* source_tail_925;
_Bool result_type_static_926;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct sFun* fun_927;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sFun* fun2_928;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1044 = (void*)0;
struct sNode* __result385__;
struct sNode* __result386__;
fun_name_839 = (void*)0;
    header_head_826=info->p;
    source_head_827=info->p;
    attribute_828=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_829=((void*)0);
    var_name_830=((void*)0);
    constructor__831=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value905=parse_word(info)));
        __right_value905 = come_decrement_ref_count2(__right_value905, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj268=result_type_829;
        result_type_829=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_829->mHeap=(_Bool)1;
        constructor__831=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value907=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_832=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_833=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_834=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value907,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj269=result_type_829;
        result_type_829=(struct sType*)come_increment_ref_count(result_type2_832);
        come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj270=var_name_830;
        var_name_830=(char*)come_increment_ref_count(var_name2_833);
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_834) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_832,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_833 = come_decrement_ref_count2(var_name2_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_835=(_Bool)0;
    {
        p_836=info->p;
        sline_837=info->sline;
        buf2_838=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2542, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_838,*info->p);
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
        if(        buffer_length(buf2_838)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_835=(_Bool)1;
        }
        info->p=p_836;
        info->sline=sline_837;
        come_call_finalizer3(buf2_838,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_840=((void*)0);
    if(    constructor__831) {
        __dec_obj271=base_fun_name_840;
        base_fun_name_840=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj272=fun_name_839;
        fun_name_839=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_840,info,(_Bool)1));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_835) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value912=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_841=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_842=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_843=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value912,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_843) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj273=base_fun_name_840;
        base_fun_name_840=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj274=fun_name_839;
        fun_name_839=(char*)come_increment_ref_count(create_method_name(obj_type_841,(_Bool)0,base_fun_name_840,info,(_Bool)1));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_841,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_842 = come_decrement_ref_count2(name_842, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj275=base_fun_name_840;
        base_fun_name_840=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj276=fun_name_839;
        fun_name_839=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_840,info,(_Bool)1));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj277=fun_name_839;
        fun_name_839=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj278=base_fun_name_840;
        base_fun_name_840=(char*)come_increment_ref_count(__builtin_string(fun_name_839));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_840,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value919=parse_params(info,constructor__831)));
    param_types_844=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_845=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_846=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_847=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value919,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_848=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_840,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_849=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2609, "buffer"))));
    buffer_append(header_buf_849,header_head_826,header_tail_848-header_head_826);
    buffer_append_char(header_buf_849,0);
    version_850=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_851=0;
        while(xisdigit(*info->p)) {
            n_851=n_851*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_850=n_851;
    }
    in_top_level_852=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_840,"lambda")) {
        block_853=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_854=0;
        lambda_num_854++;
        fun_name_855=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_854));
        result_type_829->mInline=(_Bool)0;
        result_type_829->mStatic=(_Bool)0;
        result_type_829->mUniq=(_Bool)0;
        fun_856=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2644, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_855)),(struct sType*)come_increment_ref_count(result_type_829),(struct list$1sTypeph*)come_increment_ref_count(param_types_844),(struct list$1charph*)come_increment_ref_count(param_names_845),(struct list$1charph*)come_increment_ref_count(param_default_parametors_846),(_Bool)0,var_args_847,(struct sBlock*)come_increment_ref_count(block_853),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_849)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_857=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value931=__builtin_string(fun_name_855)))));
        __right_value931 = come_decrement_ref_count2(__right_value931, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_857==((void*)0)||fun2_857->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_855)),(struct sFun*)come_increment_ref_count(fun_856));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2654, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value935=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2654, "sLambdaNode")),fun_856,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value938=_inf_value5));
        come_call_finalizer3(block_853,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_855 = come_decrement_ref_count2(fun_name_855, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_856,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_857,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_828 = come_decrement_ref_count2(attribute_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_830 = come_decrement_ref_count2(var_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_840 = come_decrement_ref_count2(base_fun_name_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value935,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value938) { __right_value938 = come_decrement_ref_count2(__right_value938, ((struct sNode*)__right_value938)->finalize, ((struct sNode*)__right_value938)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result363__;
        come_call_finalizer3(block_853,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_855 = come_decrement_ref_count2(fun_name_855, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_856,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_857,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_859=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_860=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_861=info->sline;
        block_862=(char*)come_increment_ref_count(skip_block(info));
        fun_863=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2664, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value943=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value944=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sType*)come_increment_ref_count(result_type_829),(struct list$1sTypeph*)come_increment_ref_count(param_types_844),(struct list$1charph*)come_increment_ref_count(param_names_845),(struct list$1charph*)come_increment_ref_count(param_default_parametors_846),var_args_847,(char*)come_increment_ref_count(block_862),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_860)),generics_sline_861));
        come_call_finalizer3(__right_value943,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value944,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_864=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_859,base_fun_name_840));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_864)),(struct sGenericsFun*)come_increment_ref_count(fun_863));
        __result375__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_859 = come_decrement_ref_count2(none_generics_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_860 = come_decrement_ref_count2(generics_sname_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_862 = come_decrement_ref_count2(block_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_863,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_864 = come_decrement_ref_count2(fun_name3_864, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_828 = come_decrement_ref_count2(attribute_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_830 = come_decrement_ref_count2(var_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_840 = come_decrement_ref_count2(base_fun_name_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result375__;
        none_generics_name_859 = come_decrement_ref_count2(none_generics_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_860 = come_decrement_ref_count2(generics_sname_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_862 = come_decrement_ref_count2(block_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_863,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_864 = come_decrement_ref_count2(fun_name3_864, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_886=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_887=info->sline;
        block_888=(char*)come_increment_ref_count(skip_block(info));
        fun_889=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2678, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value958=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value959=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sType*)come_increment_ref_count(result_type_829),(struct list$1sTypeph*)come_increment_ref_count(param_types_844),(struct list$1charph*)come_increment_ref_count(param_names_845),(struct list$1charph*)come_increment_ref_count(param_default_parametors_846),var_args_847,(char*)come_increment_ref_count(block_888),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_886)),generics_sline_887));
        come_call_finalizer3(__right_value958,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value959,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_890=(char*)come_increment_ref_count(charp_clone(base_fun_name_840));
        if(        method_definition_835) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sGenericsFun*)come_increment_ref_count(fun_889));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_890)),(struct sGenericsFun*)come_increment_ref_count(fun_889));
        }
        __result376__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_886 = come_decrement_ref_count2(generics_sname_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_888 = come_decrement_ref_count2(block_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_889,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_890 = come_decrement_ref_count2(fun_name3_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_828 = come_decrement_ref_count2(attribute_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_830 = come_decrement_ref_count2(var_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_840 = come_decrement_ref_count2(base_fun_name_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result376__;
        generics_sname_886 = come_decrement_ref_count2(generics_sname_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_888 = come_decrement_ref_count2(block_888, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_889,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_890 = come_decrement_ref_count2(fun_name3_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_891=info->p-1;
        header_892=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2694, "buffer"))));
        if(        constructor__831) {
            if(            list$1sTypeph_length(param_types_844)==1) {
                name_893=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_892,"extern %s*%% %s*::initialize(%s*%% self);\n",name_893,name_893,name_893);
                name_893 = come_decrement_ref_count2(name_893, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_894=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_892,"extern %s*%% %s*::initialize(%s*%% self, ",name_894,name_894,name_894);
                for(                i_895=1;                i_895<list$1sTypeph_length(param_types_844);                i_895++                ){
                    param_type_896=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_844,i_895));
                    param_name_897=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_845,i_895));
                    default_parametor_898=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_846,i_895));
                    if(                    default_parametor_898) {
                        buffer_append_format(header_892,"extern %s %s=%s",((char*)(__right_value973=make_come_type_name_string_no_solved(param_type_896,(_Bool)0,info))),param_name_897,default_parametor_898);
                        __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_892,"extern %s %s",((char*)(__right_value974=make_come_type_name_string_no_solved(param_type_896,(_Bool)0,info))),param_name_897);
                        __right_value974 = come_decrement_ref_count2(__right_value974, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_895!=list$1sTypeph_length(param_types_844)-1) {
                        buffer_append_str(header_892,",");
                    }
                    come_call_finalizer3(param_type_896,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_897 = come_decrement_ref_count2(param_name_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_898 = come_decrement_ref_count2(default_parametor_898, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_892,");\n");
                name_894 = come_decrement_ref_count2(name_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_844)==1) {
                impl_name_899=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_900=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_829,(_Bool)0,info));
                buffer_append_format(header_892,"extern %s %s*::%s(%s* self);\n",result_type_name_900,impl_name_899,base_fun_name_840,impl_name_899);
                impl_name_899 = come_decrement_ref_count2(impl_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_900 = come_decrement_ref_count2(result_type_name_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_901=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_902=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_829,(_Bool)0,info));
                buffer_append_format(header_892,"extern %s %s*::%s(%s* self, ",result_type_name_902,impl_name_901,base_fun_name_840,impl_name_901);
                for(                i_903=1;                i_903<list$1sTypeph_length(param_types_844);                i_903++                ){
                    param_type_904=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_844,i_903));
                    param_name_905=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_845,i_903));
                    default_parametor_906=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_846,i_903));
                    if(                    default_parametor_906) {
                        buffer_append_format(header_892,"extern %s %s=%s",((char*)(__right_value982=make_come_type_name_string_no_solved(param_type_904,(_Bool)0,info))),param_name_905,default_parametor_906);
                        __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_892,"extern %s %s",((char*)(__right_value983=make_come_type_name_string_no_solved(param_type_904,(_Bool)0,info))),param_name_905);
                        __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_903!=list$1sTypeph_length(param_types_844)-1) {
                        buffer_append_str(header_892,",");
                    }
                    come_call_finalizer3(param_type_904,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_905 = come_decrement_ref_count2(param_name_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_906 = come_decrement_ref_count2(default_parametor_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_892,");\n");
                impl_name_901 = come_decrement_ref_count2(impl_name_901, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_902 = come_decrement_ref_count2(result_type_name_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_892,source_head_827,source_tail_891-source_head_827);
            buffer_append_str(header_892,";\n");
        }
        if(        !result_type_829->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value984=buffer_to_string(header_892))));
                __right_value984 = come_decrement_ref_count2(__right_value984, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_907=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__831,(_Bool)1));
        static_fun_908=(_Bool)0;
        if(        result_type_829->mStatic) {
            result_type_829->mStatic=(_Bool)0;
            result_type_829->mUniq=(_Bool)0;
            static_fun_908=(_Bool)1;
        }
        inline_fun_909=(_Bool)0;
        if(        result_type_829->mInline) {
            result_type_829->mInline=(_Bool)0;
            result_type_829->mUniq=(_Bool)0;
            inline_fun_909=(_Bool)1;
        }
        uniq_fun_910=(_Bool)0;
        if(        result_type_829->mUniq) {
            result_type_829->mUniq=(_Bool)0;
            result_type_829->mInline=(_Bool)0;
            result_type_829->mStatic=(_Bool)0;
            uniq_fun_910=(_Bool)1;
        }
        if(        version_850>0) {
            new_fun_name_911=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value986=__builtin_string(fun_name_839))),version_850));
            __right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj284=fun_name_839;
            fun_name_839=(char*)come_increment_ref_count(__builtin_string(new_fun_name_911));
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_911 = come_decrement_ref_count2(new_fun_name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_912=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2796, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sType*)come_increment_ref_count(result_type_829),(struct list$1sTypeph*)come_increment_ref_count(param_types_844),(struct list$1charph*)come_increment_ref_count(param_names_845),(struct list$1charph*)come_increment_ref_count(param_default_parametors_846),(_Bool)0,var_args_847,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_907)),static_fun_908,(char*)come_increment_ref_count(buffer_to_string(header_buf_849)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_909,uniq_fun_910,(char*)come_increment_ref_count(attribute_828),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_839)),(struct sFun*)come_increment_ref_count(fun_912));
        }
        else {
            fun2_913=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value997=__builtin_string(fun_name_839)))));
            __right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_913==((void*)0)||fun2_913->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_839)),(struct sFun*)come_increment_ref_count(fun_912));
            }
            come_call_finalizer3(fun2_913,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2816, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1001=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2816, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_912),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1005=_inf_value6));
        come_call_finalizer3(header_892,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_907,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_912,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_828 = come_decrement_ref_count2(attribute_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_830 = come_decrement_ref_count2(var_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_840 = come_decrement_ref_count2(base_fun_name_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1001,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1005) { __right_value1005 = come_decrement_ref_count2(__right_value1005, ((struct sNode*)__right_value1005)->finalize, ((struct sNode*)__right_value1005)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result379__;
        come_call_finalizer3(header_892,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_907,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_912,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_850>0) {
            new_fun_name_915=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_839,version_850));
            __dec_obj289=fun_name_839;
            fun_name_839=(char*)come_increment_ref_count(__builtin_string(new_fun_name_915));
            __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_915 = come_decrement_ref_count2(new_fun_name_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_916=info->p;
            header_917=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2829, "buffer"))));
            buffer_append(header_917,source_head_827,source_tail_916-source_head_827);
            skip_spaces_and_lf(info);
            result_type_static_918=result_type_829->mStatic;
            result_type_829->mStatic=(_Bool)0;
            result_type_829->mUniq=(_Bool)0;
            result_type_829->mInline=(_Bool)0;
            fun_919=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2839, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sType*)come_increment_ref_count(result_type_829),(struct list$1sTypeph*)come_increment_ref_count(param_types_844),(struct list$1charph*)come_increment_ref_count(param_names_845),(struct list$1charph*)come_increment_ref_count(param_default_parametors_846),(_Bool)1,var_args_847,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_849)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_828),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_920=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1016=__builtin_string(fun_name_839)))));
            __right_value1016 = come_decrement_ref_count2(__right_value1016, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_920==((void*)0)||fun2_920->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_839)),(struct sFun*)come_increment_ref_count(fun_919));
            }
            if(            !result_type_static_918) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1019=buffer_to_string(header_917))));
                    __right_value1019 = come_decrement_ref_count2(__right_value1019, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2858, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1021=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2858, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_919),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1025=_inf_value7));
            come_call_finalizer3(header_917,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_919,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_920,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_828 = come_decrement_ref_count2(attribute_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_830 = come_decrement_ref_count2(var_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_840 = come_decrement_ref_count2(base_fun_name_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1021,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1025) { __right_value1025 = come_decrement_ref_count2(__right_value1025, ((struct sNode*)__right_value1025)->finalize, ((struct sNode*)__right_value1025)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result382__;
            come_call_finalizer3(header_917,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_919,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_920,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1026=parse_function_attribute(info)));
            asm_fun_922=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_923=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1026,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_922,"")) {
                __dec_obj294=fun_name_839;
                fun_name_839=(char*)come_increment_ref_count(__builtin_string(asm_fun_922));
                __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_924=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2867, "buffer"))));
            if(            *info->p==59) {
                info->p++;
                source_tail_925=info->p;
                buffer_append(header_924,source_head_827,source_tail_925-source_head_827);
                skip_spaces_and_lf(info);
            }
            result_type_static_926=result_type_829->mStatic;
            result_type_829->mStatic=(_Bool)0;
            result_type_829->mUniq=(_Bool)0;
            result_type_829->mInline=(_Bool)0;
            fun_927=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2880, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sType*)come_increment_ref_count(result_type_829),(struct list$1sTypeph*)come_increment_ref_count(param_types_844),(struct list$1charph*)come_increment_ref_count(param_names_845),(struct list$1charph*)come_increment_ref_count(param_default_parametors_846),(_Bool)1,var_args_847,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_849)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_828),(char*)come_increment_ref_count(fun_attribute_923)));
            fun2_928=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1035=__builtin_string(fun_name_839)))));
            __right_value1035 = come_decrement_ref_count2(__right_value1035, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_928==((void*)0)||fun2_928->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_839)),(struct sFun*)come_increment_ref_count(fun_927));
            }
            if(            !result_type_static_926) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1038=buffer_to_string(header_924))));
                    __right_value1038 = come_decrement_ref_count2(__right_value1038, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2899, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1040=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2899, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_927),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1044=_inf_value8));
            asm_fun_922 = come_decrement_ref_count2(asm_fun_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_923 = come_decrement_ref_count2(fun_attribute_923, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_927,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_928,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_828 = come_decrement_ref_count2(attribute_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_830 = come_decrement_ref_count2(var_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_840 = come_decrement_ref_count2(base_fun_name_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1040,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1044) { __right_value1044 = come_decrement_ref_count2(__right_value1044, ((struct sNode*)__right_value1044)->finalize, ((struct sNode*)__right_value1044)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result385__;
            asm_fun_922 = come_decrement_ref_count2(asm_fun_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_923 = come_decrement_ref_count2(fun_attribute_923, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_927,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_928,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_852;
    __result386__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_828 = come_decrement_ref_count2(attribute_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_829,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_830 = come_decrement_ref_count2(var_name_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_840 = come_decrement_ref_count2(base_fun_name_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_844,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_845,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj279;
struct list$1charph* __dec_obj280;
struct list$1charph* __dec_obj281;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj279=self->v1;
            come_call_finalizer3(__dec_obj279,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj280=self->v2;
            come_call_finalizer3(__dec_obj280,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj281=self->v3;
            come_call_finalizer3(__dec_obj281,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj282;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj282=self->sname;
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result361__;
void* __right_value936 = (void*)0;
struct sLambdaNode* result_858;
void* __right_value937 = (void*)0;
char* __dec_obj283;
struct sLambdaNode* __result362__;
    if(    self==(void*)0) {
        __result361__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_858=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_858->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_858->sname;
        result_858->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_858->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_858->mFun=self->mFun;
    }
    __result362__ = gComeFunResultObject = __result_obj__ = result_858;
    come_call_finalizer3(result_858,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_882;
unsigned int it_883;
_Bool same_key_exist_884;
char* it2_885;
struct map$2charphsGenericsFunph* __result374__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_882=charp_get_hash_key(key)%self->size;
    it_883=hash_882;
    while((_Bool)1) {
        if(        self->item_existance[it_883]) {
            if(            charp_equals(self->keys[it_883],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_883]);
                    self->keys[it_883] = come_decrement_ref_count2(self->keys[it_883], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_883]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_883]);
                    self->keys[it_883]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_883],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_883]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_883]=item;
                }
                break;
            }
            it_883++;
            if(            it_883>=self->size) {
                it_883=0;
            }
            else if(            it_883==hash_882) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_883]=(_Bool)1;
            if(            1) {
                self->keys[it_883]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_883]=key;
            }
            if(            1) {
                self->items[it_883]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_883]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_884=(_Bool)0;
    for(    it2_885=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_885=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_885,key)) {
            same_key_exist_884=(_Bool)1;
        }
    }
    if(    !same_key_exist_884) {
        list$1charp_push_back(self->key_list,key);
    }
    __result374__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_865;
void* __right_value949 = (void*)0;
char** keys_866;
void* __right_value950 = (void*)0;
struct sGenericsFun** items_867;
void* __right_value951 = (void*)0;
_Bool* item_existance_868;
int len_869;
char* it_872;
struct sGenericsFun* default_value_875;
void* __right_value952 = (void*)0;
struct sGenericsFun* it2_876;
unsigned int hash_879;
int n_880;
struct sGenericsFun* default_value_881;
void* __right_value953 = (void*)0;
default_value_875 = (void*)0;
default_value_881 = (void*)0;
    size_865=self->size*10;
    keys_866=(char**)come_increment_ref_count(((char**)(__right_value949=(char**)come_calloc(1, sizeof(char*)*(1*(size_865)), "/usr/local/include/comelang.h", 2554, "char*%"))));
    items_867=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value950=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_865)), "/usr/local/include/comelang.h", 2555, "sGenericsFun*%"))));
    item_existance_868=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value951=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_865)), "/usr/local/include/comelang.h", 2556, "bool"))));
    len_869=0;
    for(    it_872=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_872=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_875,0,sizeof(struct sGenericsFun*));
        it2_876=((struct sGenericsFun*)(__right_value952=map$2charphsGenericsFunph_at(self,it_872,default_value_875)));
        come_call_finalizer3(__right_value952,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_879=charp_get_hash_key(it_872)%size_865;
        n_880=hash_879;
        while((_Bool)1) {
            if(            item_existance_868[n_880]) {
                n_880++;
                if(                n_880>=size_865) {
                    n_880=0;
                }
                else if(                n_880==hash_879) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_868[n_880]=(_Bool)1;
                keys_866[n_880]=it_872;
                items_867[n_880]=((struct sGenericsFun*)(__right_value953=map$2charphsGenericsFunph_at(self,it_872,default_value_881)));
                come_call_finalizer3(__right_value953,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_869++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_866;
    self->items=items_867;
    self->item_existance=item_existance_868;
    self->size=size_865;
    self->len=len_869;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_870;
char* __result364__;
char* __result365__;
char* result_871;
char* __result366__;
result_870 = (void*)0;
result_871 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_870,0,sizeof(char*));
        __result364__ = gComeFunResultObject = __result_obj__ = result_870;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result365__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    memset(&result_871,0,sizeof(char*));
    __result366__ = gComeFunResultObject = __result_obj__ = result_871;
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_873;
char* __result367__;
char* __result368__;
char* result_874;
char* __result369__;
result_873 = (void*)0;
result_874 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_873,0,sizeof(char*));
        __result367__ = gComeFunResultObject = __result_obj__ = result_873;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result368__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    memset(&result_874,0,sizeof(char*));
    __result369__ = gComeFunResultObject = __result_obj__ = result_874;
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_877;
unsigned int it_878;
struct sGenericsFun* __result370__;
struct sGenericsFun* __result371__;
struct sGenericsFun* __result372__;
struct sGenericsFun* __result373__;
    hash_877=charp_get_hash_key(((char*)key))%self->size;
    it_878=hash_877;
    while((_Bool)1) {
        if(        self->item_existance[it_878]) {
            if(            charp_equals(self->keys[it_878],key)) {
                __result370__ = gComeFunResultObject = __result_obj__ = self->items[it_878];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result370__;
            }
            it_878++;
            if(            it_878>=self->size) {
                it_878=0;
            }
            else if(            it_878==hash_877) {
                __result371__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result371__;
            }
        }
        else {
            __result372__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result372__;
        }
    }
    __result373__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_930;
char* __dec_obj299;
char* last_code2_931;
char* __dec_obj300;
_Bool comma_instead_of_semicolon_932;
struct sClass* current_stack_frame_struct_933;
struct sFun* finalizer_934;
void* __right_value1045 = (void*)0;
char* real_fun_name_935;
void* __right_value1046 = (void*)0;
char* user_real_fun_name_936;
void* __right_value1047 = (void*)0;
struct sFun* user_finalizer_937;
void* __right_value1048 = (void*)0;
struct sType* type2_938;
struct sClass* klass_939;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
struct buffer* source_940;
void* __right_value1051 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_949;
struct tuple2$2charphsTypeph* it_952;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_955=0;
struct sType* field_type_956=0;
char* p_959;
int sline_960;
char* sname_961;
char* head_962;
struct buffer* source3_963;
struct buffer* __dec_obj309;
void* __right_value1052 = (void*)0;
char* __dec_obj310;
void* __right_value1053 = (void*)0;
struct sBlock* block_964;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
struct sType* result_type_965;
void* __right_value1056 = (void*)0;
char* name_966;
void* __right_value1057 = (void*)0;
struct sType* self_type_967;
struct sType* __list_values21___968[1];
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct list$1sTypeph* param_types_969;
void* __right_value1060 = (void*)0;
char* __list_values22___970[1];
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct list$1charph* param_names_971;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct list$1charph* param_default_parametors_972;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct buffer* header_buf_973;
void* __right_value1067 = (void*)0;
int i_974;
void* __right_value1068 = (void*)0;
struct sType* param_type_975;
void* __right_value1069 = (void*)0;
char* param_name_976;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct sFun* fun_977;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct sFun* fun2_978;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1085 = (void*)0;
struct sNode* node_979;
_Bool Value_981;
struct buffer* __dec_obj315;
char* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct tuple2$2sFunpcharph* __result400__;
    last_code_930=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj299=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_931=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj300=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_932=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_933=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_934=((void*)0);
    real_fun_name_935=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_936=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_937=((struct sFun*)(__right_value1047=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_936)));
    come_call_finalizer3(__right_value1047,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_938=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_938;
    klass_939=type->mClass;
    if(    type->mPointerNum>0&&klass_939->mStruct||type->mAllocaValue) {
        source_940=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2940, "buffer"))));
        buffer_append_char(source_940,123);
        if(        user_finalizer_937) {
            char source2_941[1024];
            memset(&source2_941, 0, sizeof(char)            *(1024)            );
            snprintf(source2_941,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_936);
            buffer_append_str(source_940,source2_941);
        }
        klass_939=((struct sClass*)(__right_value1051=map$2charphsClassphp_operator_load_element(info->classes,klass_939->mName)));
        come_call_finalizer3(__right_value1051,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_949=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_939->mFields)),it_952=list$1tuple2$2charphsTypephph_begin((o2_saved_949));        !list$1tuple2$2charphsTypephph_end((o2_saved_949));        it_952=list$1tuple2$2charphsTypephph_next((o2_saved_949))        ){
            multiple_assign_var11=it_952;
            name_955=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_956=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_956->mClass->mName)&&type->mPointerNum==field_type_956->mPointerNum&&field_type_956->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_956->mHeap) {
                char source2_957[1024];
                memset(&source2_957, 0, sizeof(char)                *(1024)                );
                snprintf(source2_957,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_955,name_955,name_955,name_955);
                buffer_append_str(source_940,source2_957);
            }
            else if(            field_type_956->mChannel) {
                char source2_958[1024];
                memset(&source2_958, 0, sizeof(char)                *(1024)                );
                snprintf(source2_958,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_955,name_955);
                buffer_append_str(source_940,source2_958);
                snprintf(source2_958,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_955,name_955);
                buffer_append_str(source_940,source2_958);
            }
            name_955 = come_decrement_ref_count2(name_955, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_956,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_949,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_940,125);
        p_959=info->p;
        sline_960=info->sline;
        sname_961=(char*)come_increment_ref_count(info->sname);
        head_962=info->head;
        source3_963=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj309=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_940);
        come_call_finalizer3(__dec_obj309,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_940->buf;
        info->head=source_940->buf;
        __dec_obj310=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_935));
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_964=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_965=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2995, "sType")),"void",(_Bool)0,info));
        name_966=(char*)come_increment_ref_count(string_clone(real_fun_name_935));
        self_type_967=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_967->mHeap=(_Bool)0;
        if(        self_type_967->mPointerNum==0) {
            self_type_967->mPointerNum=1;
        }
        if(        self_type_967->mPointerNum>1) {
            self_type_967->mPointerNum=1;
        }
        param_types_969=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___968[0]=(struct sType*)come_increment_ref_count(self_type_967),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3005, "struct list$1sTypeph")),1,__list_values21___968)));
        param_names_971=(struct list$1charph*)come_increment_ref_count((__list_values22___970[0]=(char*)come_increment_ref_count(((char*)(__right_value1060=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3006, "struct list$1charph")),1,__list_values22___970)));
        __right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_972=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3007, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_972,((void*)0));
        header_buf_973=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3010, "buffer"))));
        buffer_append_str(header_buf_973,((char*)(__right_value1067=make_come_type_name_string(result_type_965,info))));
        __right_value1067 = come_decrement_ref_count2(__right_value1067, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_973," ");
        buffer_append_str(header_buf_973,real_fun_name_935);
        buffer_append_str(header_buf_973,"(");
        for(        i_974=0;        i_974<list$1sTypeph_length(param_types_969);        i_974++        ){
            param_type_975=((struct sType*)come_null_check(((struct sType*)(__right_value1068=list$1sTypephp_operator_load_element(param_types_969,i_974))), "05function.c", 3018, 7));
            come_call_finalizer3(__right_value1068,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_976=((char*)come_null_check(((char*)(__right_value1069=list$1charphp_operator_load_element(param_names_971,i_974))), "05function.c", 3019, 8));
            __right_value1069 = come_decrement_ref_count2(__right_value1069, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_973,((char*)(__right_value1070=make_come_type_name_string(param_type_975,info))));
            __right_value1070 = come_decrement_ref_count2(__right_value1070, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_973," ");
            buffer_append_str(header_buf_973,param_name_976);
            if(            i_974!=list$1sTypeph_length(param_types_969)-1) {
                buffer_append_str(header_buf_973,",");
            }
        }
        buffer_append_str(header_buf_973,")");
        result_type_965->mStatic=(_Bool)0;
        result_type_965->mUniq=(_Bool)0;
        result_type_965->mInline=(_Bool)0;
        fun_977=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3035, "sFun")),(char*)come_increment_ref_count(name_966),(struct sType*)come_increment_ref_count(result_type_965),(struct list$1sTypeph*)come_increment_ref_count(param_types_969),(struct list$1charph*)come_increment_ref_count(param_names_971),(struct list$1charph*)come_increment_ref_count(param_default_parametors_972),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_964),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_973)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_978=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1077=__builtin_string(fun_name)))));
        __right_value1077 = come_decrement_ref_count2(__right_value1077, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_978==((void*)0)||fun2_978->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_966)),(struct sFun*)come_increment_ref_count(fun_977));
        }
        finalizer_934=fun_977;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3051, "struct sNode");
        _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1081=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3051, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_977),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_979=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value1081,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_981=node_compile(node_979,info);
        if(        !Value_981) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_963);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_959;
        info->head=head_962;
        info->sline=sline_960;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_961);
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_940,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_961 = come_decrement_ref_count2(sname_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_963,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_964,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_965,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_966 = come_decrement_ref_count2(name_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_967,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_969,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_971,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_972,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_973,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_977,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_978,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_979) { node_979 = come_decrement_ref_count2(node_979, ((struct sNode*)node_979)->finalize, ((struct sNode*)node_979)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_933;
    __dec_obj317=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_930);
    __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj318=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_931);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_932;
    __result400__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1087=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3071, "struct tuple2$2sFunpcharph")),finalizer_934,(char*)come_increment_ref_count(real_fun_name_935))));
    last_code_930 = come_decrement_ref_count2(last_code_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_931 = come_decrement_ref_count2(last_code2_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_935 = come_decrement_ref_count2(real_fun_name_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_936 = come_decrement_ref_count2(user_real_fun_name_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_938,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1087,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_942;
unsigned int hash_943;
unsigned int it_944;
struct sClass* __result387__;
struct sClass* __result388__;
struct sClass* __result389__;
struct sClass* __result390__;
default_value_942 = (void*)0;
    memset(&default_value_942,0,sizeof(struct sClass*));
    hash_943=charp_get_hash_key(((char*)key))%self->size;
    it_944=hash_943;
    while((_Bool)1) {
        if(        self->item_existance[it_944]) {
            if(            charp_equals(self->keys[it_944],key)) {
                __result387__ = gComeFunResultObject = __result_obj__ = self->items[it_944];
                come_call_finalizer3(default_value_942,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result387__;
            }
            it_944++;
            if(            it_944>=self->size) {
                it_944=0;
            }
            else if(            it_944==hash_943) {
                __result388__ = gComeFunResultObject = __result_obj__ = default_value_942;
                come_call_finalizer3(default_value_942,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result388__;
            }
        }
        else {
            __result389__ = gComeFunResultObject = __result_obj__ = default_value_942;
            come_call_finalizer3(default_value_942,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result389__;
        }
    }
    __result390__ = gComeFunResultObject = __result_obj__ = default_value_942;
    come_call_finalizer3(default_value_942,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj301;
struct list$1tuple2$2charphsTypephph* __dec_obj302;
char* __dec_obj306;
char* __dec_obj307;
char* __dec_obj308;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj301=self->mName;
            __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj302=self->mFields;
            come_call_finalizer3(__dec_obj302,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj306=self->mDeclareSName;
            __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj307=self->mParentClassName;
            __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj308=self->mAttribute;
            __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_945;
struct list_item$1tuple2$2charphsTypephph* prev_it_946;
    it_945=self->head;
    while(it_945!=((void*)0)) {
        prev_it_946=it_945;
        it_945=it_945->next;
        come_call_finalizer3(prev_it_946,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj303;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj303=self->item;
            come_call_finalizer3(__dec_obj303,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj304;
struct sType* __dec_obj305;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj304=self->v1;
            __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj305=self->v2;
            come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_947;
struct list_item$1tuple2$2charphsTypephph* prev_it_948;
    it_947=self->head;
    while(it_947!=((void*)0)) {
        prev_it_948=it_947;
        it_947=it_947->next;
        come_call_finalizer3(prev_it_948,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_950;
struct tuple2$2charphsTypeph* __result391__;
struct tuple2$2charphsTypeph* __result392__;
struct tuple2$2charphsTypeph* result_951;
struct tuple2$2charphsTypeph* __result393__;
result_950 = (void*)0;
result_951 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_950,0,sizeof(struct tuple2$2charphsTypeph*));
        __result391__ = gComeFunResultObject = __result_obj__ = result_950;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    self->it=self->head;
    if(    self->it) {
        __result392__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    memset(&result_951,0,sizeof(struct tuple2$2charphsTypeph*));
    __result393__ = gComeFunResultObject = __result_obj__ = result_951;
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_953;
struct tuple2$2charphsTypeph* __result394__;
struct tuple2$2charphsTypeph* __result395__;
struct tuple2$2charphsTypeph* result_954;
struct tuple2$2charphsTypeph* __result396__;
result_953 = (void*)0;
result_954 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_953,0,sizeof(struct tuple2$2charphsTypeph*));
        __result394__ = gComeFunResultObject = __result_obj__ = result_953;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result395__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result395__;
    }
    memset(&result_954,0,sizeof(struct tuple2$2charphsTypeph*));
    __result396__ = gComeFunResultObject = __result_obj__ = result_954;
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj319;
struct tuple2$2sFunpcharph* __result399__;
    self->v1=v1;
    __dec_obj319=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result399__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj320;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj320=self->v2;
            __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_982;
char* __dec_obj321;
char* last_code2_983;
char* __dec_obj322;
_Bool comma_instead_of_semicolon_984;
struct sClass* current_stack_frame_struct_985;
struct sFun* equaler_986;
void* __right_value1088 = (void*)0;
char* real_fun_name_987;
void* __right_value1089 = (void*)0;
struct sType* type2_988;
struct sClass* klass_989;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct buffer* source_990;
char* name_991;
void* __right_value1092 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_993;
struct tuple2$2charphsTypeph* it_994;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_995=0;
struct sType* field_type_996=0;
char* p_998;
int sline_999;
char* sname_1000;
char* head_1001;
struct buffer* source3_1002;
struct buffer* __dec_obj323;
void* __right_value1093 = (void*)0;
char* __dec_obj324;
void* __right_value1094 = (void*)0;
struct sBlock* block_1003;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sType* result_type_1004;
void* __right_value1097 = (void*)0;
char* name_1005;
void* __right_value1098 = (void*)0;
struct sType* left_type_1006;
void* __right_value1099 = (void*)0;
struct sType* right_type_1007;
struct sType* __list_values23___1008[2];
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct list$1sTypeph* param_types_1009;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
char* __list_values24___1010[2];
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
struct list$1charph* param_names_1011;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
struct list$1charph* param_default_parametors_1012;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
struct buffer* header_buf_1013;
void* __right_value1110 = (void*)0;
int i_1014;
void* __right_value1111 = (void*)0;
struct sType* param_type_1015;
void* __right_value1112 = (void*)0;
char* param_name_1016;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
struct sFun* fun_1017;
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
struct sFun* fun2_1018;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
void* __right_value1124 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1128 = (void*)0;
struct sNode* node_1019;
_Bool Value_1021;
struct buffer* __dec_obj329;
char* __dec_obj330;
char* __dec_obj331;
char* __dec_obj332;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct tuple2$2sFunpcharph* __result403__;
    last_code_982=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_983=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_984=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_985=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_986=((void*)0);
    real_fun_name_987=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_988=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_988;
    klass_989=type->mClass;
    if(    type->mPointerNum>0&&!klass_989->mNumber) {
        source_990=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3097, "buffer"))));
        buffer_append_char(source_990,123);
        if(        klass_989->mProtocol) {
            name_991="_protocol_obj";
            char source2_992[1024];
            memset(&source2_992, 0, sizeof(char)            *(1024)            );
            snprintf(source2_992,1024,"return left.%s.equals(right.%s);\n",name_991,name_991);
            buffer_append_str(source_990,source2_992);
        }
        else {
            klass_989=((struct sClass*)(__right_value1092=map$2charphsClassphp_operator_load_element(info->classes,klass_989->mName)));
            come_call_finalizer3(__right_value1092,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_993=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_989->mFields)),it_994=list$1tuple2$2charphsTypephph_begin((o2_saved_993));            !list$1tuple2$2charphsTypephph_end((o2_saved_993));            it_994=list$1tuple2$2charphsTypephph_next((o2_saved_993))            ){
                multiple_assign_var12=it_994;
                name_995=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_996=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_996->mClass->mName)&&type->mPointerNum==field_type_996->mPointerNum&&field_type_996->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_997[1024];
                memset(&source2_997, 0, sizeof(char)                *(1024)                );
                snprintf(source2_997,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_995,name_995,name_995);
                buffer_append_str(source_990,source2_997);
                name_995 = come_decrement_ref_count2(name_995, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_996,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_993,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_990,"return true;");
        buffer_append_char(source_990,125);
        p_998=info->p;
        sline_999=info->sline;
        sname_1000=(char*)come_increment_ref_count(info->sname);
        head_1001=info->head;
        source3_1002=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj323=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_990);
        come_call_finalizer3(__dec_obj323,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_990->buf;
        info->head=source_990->buf;
        __dec_obj324=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_987));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1003=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1004=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3143, "sType")),"bool",(_Bool)0,info));
        name_1005=(char*)come_increment_ref_count(string_clone(real_fun_name_987));
        left_type_1006=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1006->mHeap=(_Bool)0;
        right_type_1007=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1007->mHeap=(_Bool)0;
        param_types_1009=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1008[0]=(struct sType*)come_increment_ref_count(left_type_1006),
__list_values23___1008[1]=(struct sType*)come_increment_ref_count(right_type_1007),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3149, "struct list$1sTypeph")),2,__list_values23___1008)));
        param_names_1011=(struct list$1charph*)come_increment_ref_count((__list_values24___1010[0]=(char*)come_increment_ref_count(((char*)(__right_value1102=__builtin_string("left")))),
__list_values24___1010[1]=(char*)come_increment_ref_count(((char*)(__right_value1103=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3150, "struct list$1charph")),2,__list_values24___1010)));
        __right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1103 = come_decrement_ref_count2(__right_value1103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1012=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3151, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1012,((void*)0));
        list$1charph_push_back(param_default_parametors_1012,((void*)0));
        header_buf_1013=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3155, "buffer"))));
        buffer_append_str(header_buf_1013,((char*)(__right_value1110=make_come_type_name_string(result_type_1004,info))));
        __right_value1110 = come_decrement_ref_count2(__right_value1110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1013," ");
        buffer_append_str(header_buf_1013,real_fun_name_987);
        buffer_append_str(header_buf_1013,"(");
        for(        i_1014=0;        i_1014<list$1sTypeph_length(param_types_1009);        i_1014++        ){
            param_type_1015=((struct sType*)come_null_check(((struct sType*)(__right_value1111=list$1sTypephp_operator_load_element(param_types_1009,i_1014))), "05function.c", 3163, 9));
            come_call_finalizer3(__right_value1111,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1016=((char*)come_null_check(((char*)(__right_value1112=list$1charphp_operator_load_element(param_names_1011,i_1014))), "05function.c", 3164, 10));
            __right_value1112 = come_decrement_ref_count2(__right_value1112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1013,((char*)(__right_value1113=make_come_type_name_string(param_type_1015,info))));
            __right_value1113 = come_decrement_ref_count2(__right_value1113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1013," ");
            buffer_append_str(header_buf_1013,param_name_1016);
            if(            i_1014!=list$1sTypeph_length(param_types_1009)-1) {
                buffer_append_str(header_buf_1013,",");
            }
        }
        buffer_append_str(header_buf_1013,")");
        result_type_1004->mStatic=(_Bool)0;
        result_type_1004->mUniq=(_Bool)0;
        result_type_1004->mInline=(_Bool)0;
        fun_1017=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3180, "sFun")),(char*)come_increment_ref_count(name_1005),(struct sType*)come_increment_ref_count(result_type_1004),(struct list$1sTypeph*)come_increment_ref_count(param_types_1009),(struct list$1charph*)come_increment_ref_count(param_names_1011),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1012),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1003),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1013)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_1018=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1120=__builtin_string(fun_name)))));
        __right_value1120 = come_decrement_ref_count2(__right_value1120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1018==((void*)0)||fun2_1018->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1005)),(struct sFun*)come_increment_ref_count(fun_1017));
        }
        equaler_986=fun_1017;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3196, "struct sNode");
        _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1124=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3196, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1017),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_1019=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value1124,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1021=node_compile(node_1019,info);
        if(        !Value_1021) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj329=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1002);
        come_call_finalizer3(__dec_obj329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_998;
        info->head=head_1001;
        info->sline=sline_999;
        __dec_obj330=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1000);
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_990,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1000 = come_decrement_ref_count2(sname_1000, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1002,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1003,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1004,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1005 = come_decrement_ref_count2(name_1005, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1006,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1007,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1009,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1011,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1012,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1013,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1017,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1018,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1019) { node_1019 = come_decrement_ref_count2(node_1019, ((struct sNode*)node_1019)->finalize, ((struct sNode*)node_1019)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_985;
    __dec_obj331=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_982);
    __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj332=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_983);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_984;
    __result403__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1130=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3216, "struct tuple2$2sFunpcharph")),equaler_986,(char*)come_increment_ref_count(real_fun_name_987))));
    last_code_982 = come_decrement_ref_count2(last_code_982, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_983 = come_decrement_ref_count2(last_code2_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_987 = come_decrement_ref_count2(real_fun_name_987, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_988,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1130,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1022;
char* __dec_obj333;
char* last_code2_1023;
char* __dec_obj334;
_Bool comma_instead_of_semicolon_1024;
struct sClass* current_stack_frame_struct_1025;
struct sFun* equaler_1026;
void* __right_value1131 = (void*)0;
char* real_fun_name_1027;
void* __right_value1132 = (void*)0;
struct sType* type2_1028;
struct sClass* klass_1029;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct buffer* source_1030;
char* name_1031;
int i_1034;
void* __right_value1135 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1035;
struct tuple2$2charphsTypeph* it_1036;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1037=0;
struct sType* field_type_1038=0;
char* p_1042;
int sline_1043;
char* sname_1044;
char* head_1045;
struct buffer* source3_1046;
struct buffer* __dec_obj335;
void* __right_value1136 = (void*)0;
char* __dec_obj336;
void* __right_value1137 = (void*)0;
struct sBlock* block_1047;
void* __right_value1138 = (void*)0;
void* __right_value1139 = (void*)0;
struct sType* result_type_1048;
void* __right_value1140 = (void*)0;
char* name_1049;
void* __right_value1141 = (void*)0;
struct sType* left_type_1050;
void* __right_value1142 = (void*)0;
struct sType* right_type_1051;
struct sType* __list_values25___1052[2];
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct list$1sTypeph* param_types_1053;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
char* __list_values26___1054[2];
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
struct list$1charph* param_names_1055;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct list$1charph* param_default_parametors_1056;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct buffer* header_buf_1057;
void* __right_value1153 = (void*)0;
int i_1058;
void* __right_value1154 = (void*)0;
struct sType* param_type_1059;
void* __right_value1155 = (void*)0;
char* param_name_1060;
void* __right_value1156 = (void*)0;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
struct sFun* fun_1061;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
struct sFun* fun2_1062;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1171 = (void*)0;
struct sNode* node_1063;
_Bool Value_1065;
struct buffer* __dec_obj341;
char* __dec_obj342;
char* __dec_obj343;
char* __dec_obj344;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct tuple2$2sFunpcharph* __result406__;
    last_code_1022=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj333=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1023=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj334=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1024=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1025=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1026=((void*)0);
    real_fun_name_1027=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1028=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1028;
    klass_1029=type->mClass;
    if(    type->mPointerNum>0&&!klass_1029->mNumber) {
        source_1030=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3241, "buffer"))));
        buffer_append_char(source_1030,123);
        if(        klass_1029->mProtocol) {
            name_1031="_protocol_obj";
            char source2_1032[1024];
            memset(&source2_1032, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1032,1024,"return left.%s !== right.%s;\n",name_1031,name_1031);
            buffer_append_str(source_1030,source2_1032);
        }
        else {
            char source2_1033[1024];
            memset(&source2_1033, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1033,1024,"return !(");
            buffer_append_str(source_1030,source2_1033);
            snprintf(source2_1033,1024,"( ");
            buffer_append_str(source_1030,source2_1033);
            i_1034=0;
            klass_1029=((struct sClass*)(__right_value1135=map$2charphsClassphp_operator_load_element(info->classes,klass_1029->mName)));
            come_call_finalizer3(__right_value1135,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1035=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1029->mFields)),it_1036=list$1tuple2$2charphsTypephph_begin((o2_saved_1035));            !list$1tuple2$2charphsTypephph_end((o2_saved_1035));            it_1036=list$1tuple2$2charphsTypephph_next((o2_saved_1035))            ){
                multiple_assign_var13=it_1036;
                name_1037=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1038=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1038->mClass->mName)&&type->mPointerNum==field_type_1038->mPointerNum&&field_type_1038->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1039[1024];
                memset(&source2_1039, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1039,1024,"(left.%s === right.%s)",name_1037,name_1037,name_1037);
                buffer_append_str(source_1030,source2_1039);
                if(                i_1034==list$1tuple2$2charphsTypephph_length(klass_1029->mFields)-1) {
                    char source2_1040[1024];
                    memset(&source2_1040, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1040,1024,"));");
                    buffer_append_str(source_1030,source2_1040);
                }
                else {
                    char source2_1041[1024];
                    memset(&source2_1041, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1041,1024," && ");
                    buffer_append_str(source_1030,source2_1041);
                }
                i_1034++;
                name_1037 = come_decrement_ref_count2(name_1037, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1038,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1035,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1030,125);
        p_1042=info->p;
        sline_1043=info->sline;
        sname_1044=(char*)come_increment_ref_count(info->sname);
        head_1045=info->head;
        source3_1046=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj335=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1030);
        come_call_finalizer3(__dec_obj335,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1030->buf;
        info->head=source_1030->buf;
        __dec_obj336=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1027));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1047=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1048=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3307, "sType")),"bool",(_Bool)0,info));
        name_1049=(char*)come_increment_ref_count(string_clone(real_fun_name_1027));
        left_type_1050=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1050->mHeap=(_Bool)0;
        right_type_1051=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1051->mHeap=(_Bool)0;
        param_types_1053=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1052[0]=(struct sType*)come_increment_ref_count(left_type_1050),
__list_values25___1052[1]=(struct sType*)come_increment_ref_count(right_type_1051),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3313, "struct list$1sTypeph")),2,__list_values25___1052)));
        param_names_1055=(struct list$1charph*)come_increment_ref_count((__list_values26___1054[0]=(char*)come_increment_ref_count(((char*)(__right_value1145=__builtin_string("left")))),
__list_values26___1054[1]=(char*)come_increment_ref_count(((char*)(__right_value1146=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3314, "struct list$1charph")),2,__list_values26___1054)));
        __right_value1145 = come_decrement_ref_count2(__right_value1145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1146 = come_decrement_ref_count2(__right_value1146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1056=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3315, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1056,((void*)0));
        list$1charph_push_back(param_default_parametors_1056,((void*)0));
        header_buf_1057=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3319, "buffer"))));
        buffer_append_str(header_buf_1057,((char*)(__right_value1153=make_come_type_name_string(result_type_1048,info))));
        __right_value1153 = come_decrement_ref_count2(__right_value1153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1057," ");
        buffer_append_str(header_buf_1057,real_fun_name_1027);
        buffer_append_str(header_buf_1057,"(");
        for(        i_1058=0;        i_1058<list$1sTypeph_length(param_types_1053);        i_1058++        ){
            param_type_1059=((struct sType*)come_null_check(((struct sType*)(__right_value1154=list$1sTypephp_operator_load_element(param_types_1053,i_1058))), "05function.c", 3327, 11));
            come_call_finalizer3(__right_value1154,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1060=((char*)come_null_check(((char*)(__right_value1155=list$1charphp_operator_load_element(param_names_1055,i_1058))), "05function.c", 3328, 12));
            __right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1057,((char*)(__right_value1156=make_come_type_name_string(param_type_1059,info))));
            __right_value1156 = come_decrement_ref_count2(__right_value1156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1057," ");
            buffer_append_str(header_buf_1057,param_name_1060);
            if(            i_1058!=list$1sTypeph_length(param_types_1053)-1) {
                buffer_append_str(header_buf_1057,",");
            }
        }
        buffer_append_str(header_buf_1057,")");
        result_type_1048->mStatic=(_Bool)0;
        result_type_1048->mUniq=(_Bool)0;
        result_type_1048->mInline=(_Bool)0;
        fun_1061=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3344, "sFun")),(char*)come_increment_ref_count(name_1049),(struct sType*)come_increment_ref_count(result_type_1048),(struct list$1sTypeph*)come_increment_ref_count(param_types_1053),(struct list$1charph*)come_increment_ref_count(param_names_1055),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1056),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1047),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1057)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_1062=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1163=__builtin_string(fun_name)))));
        __right_value1163 = come_decrement_ref_count2(__right_value1163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1062==((void*)0)||fun2_1062->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1049)),(struct sFun*)come_increment_ref_count(fun_1061));
        }
        equaler_1026=fun_1061;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3360, "struct sNode");
        _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1167=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3360, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1061),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_1063=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value1167,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1065=node_compile(node_1063,info);
        if(        !Value_1065) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj341=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1046);
        come_call_finalizer3(__dec_obj341,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1042;
        info->head=head_1045;
        info->sline=sline_1043;
        __dec_obj342=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1044);
        __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1030,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1044 = come_decrement_ref_count2(sname_1044, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1046,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1047,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1048,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1049 = come_decrement_ref_count2(name_1049, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1050,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1053,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1055,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1056,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1057,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1061,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1062,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1063) { node_1063 = come_decrement_ref_count2(node_1063, ((struct sNode*)node_1063)->finalize, ((struct sNode*)node_1063)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1025;
    __dec_obj343=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1022);
    __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj344=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1023);
    __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1024;
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1173=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3380, "struct tuple2$2sFunpcharph")),equaler_1026,(char*)come_increment_ref_count(real_fun_name_1027))));
    last_code_1022 = come_decrement_ref_count2(last_code_1022, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1023 = come_decrement_ref_count2(last_code2_1023, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1027 = come_decrement_ref_count2(real_fun_name_1027, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1028,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1173,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1066;
char* __dec_obj345;
char* last_code2_1067;
char* __dec_obj346;
_Bool comma_instead_of_semicolon_1068;
struct sClass* current_stack_frame_struct_1069;
struct sFun* equaler_1070;
void* __right_value1174 = (void*)0;
char* real_fun_name_1071;
void* __right_value1175 = (void*)0;
struct sType* type2_1072;
struct sClass* klass_1073;
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
struct buffer* source_1074;
char* name_1075;
int i_1078;
void* __right_value1178 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1079;
struct tuple2$2charphsTypeph* it_1080;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1081=0;
struct sType* field_type_1082=0;
char* p_1086;
int sline_1087;
char* sname_1088;
char* head_1089;
struct buffer* source3_1090;
struct buffer* __dec_obj347;
void* __right_value1179 = (void*)0;
char* __dec_obj348;
void* __right_value1180 = (void*)0;
struct sBlock* block_1091;
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
struct sType* result_type_1092;
void* __right_value1183 = (void*)0;
char* name_1093;
void* __right_value1184 = (void*)0;
struct sType* left_type_1094;
void* __right_value1185 = (void*)0;
struct sType* right_type_1095;
struct sType* __list_values27___1096[2];
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
struct list$1sTypeph* param_types_1097;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
char* __list_values28___1098[2];
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
struct list$1charph* param_names_1099;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct list$1charph* param_default_parametors_1100;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
struct buffer* header_buf_1101;
void* __right_value1196 = (void*)0;
int i_1102;
void* __right_value1197 = (void*)0;
struct sType* param_type_1103;
void* __right_value1198 = (void*)0;
char* param_name_1104;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
void* __right_value1205 = (void*)0;
struct sFun* fun_1105;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct sFun* fun2_1106;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1214 = (void*)0;
struct sNode* node_1107;
_Bool Value_1109;
struct buffer* __dec_obj353;
char* __dec_obj354;
char* __dec_obj355;
char* __dec_obj356;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct tuple2$2sFunpcharph* __result409__;
    last_code_1066=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj345=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1067=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj346=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1068=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1069=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1070=((void*)0);
    real_fun_name_1071=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1072=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1072;
    klass_1073=type->mClass;
    if(    type->mPointerNum>0&&!klass_1073->mNumber) {
        source_1074=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3405, "buffer"))));
        buffer_append_char(source_1074,123);
        if(        klass_1073->mProtocol) {
            name_1075="_protocol_obj";
            char source2_1076[1024];
            memset(&source2_1076, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1076,1024,"return !left.%s.equals(right.%s);\n",name_1075,name_1075);
            buffer_append_str(source_1074,source2_1076);
        }
        else {
            char source2_1077[1024];
            memset(&source2_1077, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1077,1024,"return !(");
            buffer_append_str(source_1074,source2_1077);
            i_1078=0;
            klass_1073=((struct sClass*)(__right_value1178=map$2charphsClassphp_operator_load_element(info->classes,klass_1073->mName)));
            come_call_finalizer3(__right_value1178,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1079=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1073->mFields)),it_1080=list$1tuple2$2charphsTypephph_begin((o2_saved_1079));            !list$1tuple2$2charphsTypephph_end((o2_saved_1079));            it_1080=list$1tuple2$2charphsTypephph_next((o2_saved_1079))            ){
                multiple_assign_var14=it_1080;
                name_1081=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1082=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1082->mClass->mName)&&type->mPointerNum==field_type_1082->mPointerNum&&field_type_1082->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1083[1024];
                memset(&source2_1083, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1083,1024,"left.%s.equals(right.%s)",name_1081,name_1081);
                buffer_append_str(source_1074,source2_1083);
                if(                i_1078==list$1tuple2$2charphsTypephph_length(klass_1073->mFields)-1) {
                    char source2_1084[1024];
                    memset(&source2_1084, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1084,1024,");");
                    buffer_append_str(source_1074,source2_1084);
                }
                else {
                    char source2_1085[1024];
                    memset(&source2_1085, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1085,1024," && ");
                    buffer_append_str(source_1074,source2_1085);
                }
                i_1078++;
                name_1081 = come_decrement_ref_count2(name_1081, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1082,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1079,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1074,125);
        p_1086=info->p;
        sline_1087=info->sline;
        sname_1088=(char*)come_increment_ref_count(info->sname);
        head_1089=info->head;
        source3_1090=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj347=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1074);
        come_call_finalizer3(__dec_obj347,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1074->buf;
        info->head=source_1074->buf;
        __dec_obj348=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1071));
        __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1091=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1092=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3468, "sType")),"bool",(_Bool)0,info));
        name_1093=(char*)come_increment_ref_count(string_clone(real_fun_name_1071));
        left_type_1094=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1094->mHeap=(_Bool)0;
        right_type_1095=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1095->mHeap=(_Bool)0;
        param_types_1097=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1096[0]=(struct sType*)come_increment_ref_count(left_type_1094),
__list_values27___1096[1]=(struct sType*)come_increment_ref_count(right_type_1095),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3474, "struct list$1sTypeph")),2,__list_values27___1096)));
        param_names_1099=(struct list$1charph*)come_increment_ref_count((__list_values28___1098[0]=(char*)come_increment_ref_count(((char*)(__right_value1188=__builtin_string("left")))),
__list_values28___1098[1]=(char*)come_increment_ref_count(((char*)(__right_value1189=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3475, "struct list$1charph")),2,__list_values28___1098)));
        __right_value1188 = come_decrement_ref_count2(__right_value1188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1189 = come_decrement_ref_count2(__right_value1189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1100=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3476, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1100,((void*)0));
        list$1charph_push_back(param_default_parametors_1100,((void*)0));
        header_buf_1101=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3480, "buffer"))));
        buffer_append_str(header_buf_1101,((char*)(__right_value1196=make_come_type_name_string(result_type_1092,info))));
        __right_value1196 = come_decrement_ref_count2(__right_value1196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1101," ");
        buffer_append_str(header_buf_1101,real_fun_name_1071);
        buffer_append_str(header_buf_1101,"(");
        for(        i_1102=0;        i_1102<list$1sTypeph_length(param_types_1097);        i_1102++        ){
            param_type_1103=((struct sType*)come_null_check(((struct sType*)(__right_value1197=list$1sTypephp_operator_load_element(param_types_1097,i_1102))), "05function.c", 3488, 13));
            come_call_finalizer3(__right_value1197,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1104=((char*)come_null_check(((char*)(__right_value1198=list$1charphp_operator_load_element(param_names_1099,i_1102))), "05function.c", 3489, 14));
            __right_value1198 = come_decrement_ref_count2(__right_value1198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1101,((char*)(__right_value1199=make_come_type_name_string(param_type_1103,info))));
            __right_value1199 = come_decrement_ref_count2(__right_value1199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
        fun_1105=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3505, "sFun")),(char*)come_increment_ref_count(name_1093),(struct sType*)come_increment_ref_count(result_type_1092),(struct list$1sTypeph*)come_increment_ref_count(param_types_1097),(struct list$1charph*)come_increment_ref_count(param_names_1099),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1100),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1091),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1101)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_1106=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1206=__builtin_string(fun_name)))));
        __right_value1206 = come_decrement_ref_count2(__right_value1206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1106==((void*)0)||fun2_1106->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1093)),(struct sFun*)come_increment_ref_count(fun_1105));
        }
        equaler_1070=fun_1105;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3521, "struct sNode");
        _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1210=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3521, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1105),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_1107=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer3(__right_value1210,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1109=node_compile(node_1107,info);
        if(        !Value_1109) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj353=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1090);
        come_call_finalizer3(__dec_obj353,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1086;
        info->head=head_1089;
        info->sline=sline_1087;
        __dec_obj354=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1088);
        __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1074,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    info->current_stack_frame_struct=current_stack_frame_struct_1069;
    __dec_obj355=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1066);
    __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj356=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1067);
    __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1068;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1216=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3541, "struct tuple2$2sFunpcharph")),equaler_1070,(char*)come_increment_ref_count(real_fun_name_1071))));
    last_code_1066 = come_decrement_ref_count2(last_code_1066, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1067 = come_decrement_ref_count2(last_code2_1067, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1071 = come_decrement_ref_count2(real_fun_name_1071, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1072,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1216,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1110;
char* __dec_obj357;
char* last_code2_1111;
char* __dec_obj358;
_Bool comma_instead_of_semicolon_1112;
struct sClass* current_stack_frame_struct_1113;
struct sFun* equaler_1114;
void* __right_value1217 = (void*)0;
char* real_fun_name_1115;
void* __right_value1218 = (void*)0;
struct sType* type2_1116;
struct sClass* klass_1117;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct buffer* source_1118;
char* name_1119;
void* __right_value1221 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1122;
struct tuple2$2charphsTypeph* it_1123;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1124=0;
struct sType* field_type_1125=0;
char* p_1127;
int sline_1128;
char* sname_1129;
char* head_1130;
struct buffer* source3_1131;
struct buffer* __dec_obj359;
void* __right_value1222 = (void*)0;
char* __dec_obj360;
void* __right_value1223 = (void*)0;
struct sBlock* block_1132;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
struct sType* result_type_1133;
void* __right_value1226 = (void*)0;
char* name_1134;
void* __right_value1227 = (void*)0;
struct sType* left_type_1135;
void* __right_value1228 = (void*)0;
struct sType* right_type_1136;
struct sType* __list_values29___1137[2];
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
struct list$1sTypeph* param_types_1138;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
char* __list_values30___1139[2];
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
struct list$1charph* param_names_1140;
void* __right_value1235 = (void*)0;
void* __right_value1236 = (void*)0;
struct list$1charph* param_default_parametors_1141;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct buffer* header_buf_1142;
void* __right_value1239 = (void*)0;
int i_1143;
void* __right_value1240 = (void*)0;
struct sType* param_type_1144;
void* __right_value1241 = (void*)0;
char* param_name_1145;
void* __right_value1242 = (void*)0;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
struct sFun* fun_1146;
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
struct sFun* fun2_1147;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1257 = (void*)0;
struct sNode* node_1148;
_Bool Value_1150;
struct buffer* __dec_obj365;
char* __dec_obj366;
char* __dec_obj367;
char* __dec_obj368;
void* __right_value1258 = (void*)0;
void* __right_value1259 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
    last_code_1110=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj357=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1111=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj358=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1112=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1113=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1114=((void*)0);
    real_fun_name_1115=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1116=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1116;
    klass_1117=type->mClass;
    if(    type->mPointerNum>0&&!klass_1117->mNumber) {
        source_1118=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3566, "buffer"))));
        buffer_append_char(source_1118,123);
        if(        klass_1117->mProtocol) {
            name_1119="_protocol_obj";
            char source2_1120[1024];
            memset(&source2_1120, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1120,1024,"return left.%s === right.%s;\n",name_1119,name_1119);
            buffer_append_str(source_1118,source2_1120);
        }
        else {
            char source2_1121[1024];
            memset(&source2_1121, 0, sizeof(char)            *(1024)            );
            klass_1117=((struct sClass*)(__right_value1221=map$2charphsClassphp_operator_load_element(info->classes,klass_1117->mName)));
            come_call_finalizer3(__right_value1221,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1122=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1117->mFields)),it_1123=list$1tuple2$2charphsTypephph_begin((o2_saved_1122));            !list$1tuple2$2charphsTypephph_end((o2_saved_1122));            it_1123=list$1tuple2$2charphsTypephph_next((o2_saved_1122))            ){
                multiple_assign_var15=it_1123;
                name_1124=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1125=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1125->mClass->mName)&&type->mPointerNum==field_type_1125->mPointerNum&&field_type_1125->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1126[1024];
                memset(&source2_1126, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1126,1024,"if(left.%s !== right.%s) { return false; }\n",name_1124,name_1124,name_1124);
                buffer_append_str(source_1118,source2_1126);
                name_1124 = come_decrement_ref_count2(name_1124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1125,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1122,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1118,"return true;\n");
        buffer_append_char(source_1118,125);
        p_1127=info->p;
        sline_1128=info->sline;
        sname_1129=(char*)come_increment_ref_count(info->sname);
        head_1130=info->head;
        source3_1131=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj359=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1118);
        come_call_finalizer3(__dec_obj359,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1118->buf;
        info->head=source_1118->buf;
        __dec_obj360=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1115));
        __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1132=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1133=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3614, "sType")),"bool",(_Bool)0,info));
        name_1134=(char*)come_increment_ref_count(string_clone(real_fun_name_1115));
        left_type_1135=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1135->mHeap=(_Bool)0;
        right_type_1136=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1136->mHeap=(_Bool)0;
        param_types_1138=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1137[0]=(struct sType*)come_increment_ref_count(left_type_1135),
__list_values29___1137[1]=(struct sType*)come_increment_ref_count(right_type_1136),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3620, "struct list$1sTypeph")),2,__list_values29___1137)));
        param_names_1140=(struct list$1charph*)come_increment_ref_count((__list_values30___1139[0]=(char*)come_increment_ref_count(((char*)(__right_value1231=__builtin_string("left")))),
__list_values30___1139[1]=(char*)come_increment_ref_count(((char*)(__right_value1232=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3621, "struct list$1charph")),2,__list_values30___1139)));
        __right_value1231 = come_decrement_ref_count2(__right_value1231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1232 = come_decrement_ref_count2(__right_value1232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1141=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3622, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1141,((void*)0));
        list$1charph_push_back(param_default_parametors_1141,((void*)0));
        header_buf_1142=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3626, "buffer"))));
        buffer_append_str(header_buf_1142,((char*)(__right_value1239=make_come_type_name_string(result_type_1133,info))));
        __right_value1239 = come_decrement_ref_count2(__right_value1239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1142," ");
        buffer_append_str(header_buf_1142,real_fun_name_1115);
        buffer_append_str(header_buf_1142,"(");
        for(        i_1143=0;        i_1143<list$1sTypeph_length(param_types_1138);        i_1143++        ){
            param_type_1144=((struct sType*)come_null_check(((struct sType*)(__right_value1240=list$1sTypephp_operator_load_element(param_types_1138,i_1143))), "05function.c", 3634, 15));
            come_call_finalizer3(__right_value1240,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1145=((char*)come_null_check(((char*)(__right_value1241=list$1charphp_operator_load_element(param_names_1140,i_1143))), "05function.c", 3635, 16));
            __right_value1241 = come_decrement_ref_count2(__right_value1241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1142,((char*)(__right_value1242=make_come_type_name_string(param_type_1144,info))));
            __right_value1242 = come_decrement_ref_count2(__right_value1242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1142," ");
            buffer_append_str(header_buf_1142,param_name_1145);
            if(            i_1143!=list$1sTypeph_length(param_types_1138)-1) {
                buffer_append_str(header_buf_1142,",");
            }
        }
        buffer_append_str(header_buf_1142,")");
        result_type_1133->mStatic=(_Bool)0;
        result_type_1133->mUniq=(_Bool)0;
        result_type_1133->mInline=(_Bool)0;
        fun_1146=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3651, "sFun")),(char*)come_increment_ref_count(name_1134),(struct sType*)come_increment_ref_count(result_type_1133),(struct list$1sTypeph*)come_increment_ref_count(param_types_1138),(struct list$1charph*)come_increment_ref_count(param_names_1140),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1141),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1132),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1142)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_1147=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1249=__builtin_string(fun_name)))));
        __right_value1249 = come_decrement_ref_count2(__right_value1249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1147==((void*)0)||fun2_1147->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1134)),(struct sFun*)come_increment_ref_count(fun_1146));
        }
        equaler_1114=fun_1146;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3667, "struct sNode");
        _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1253=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3667, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1146),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_1148=(struct sNode*)come_increment_ref_count(_inf_value13);
        come_call_finalizer3(__right_value1253,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1150=node_compile(node_1148,info);
        if(        !Value_1150) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        else {
        }
        __dec_obj365=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1131);
        come_call_finalizer3(__dec_obj365,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1127;
        info->head=head_1130;
        info->sline=sline_1128;
        __dec_obj366=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1129);
        __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1118,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1129 = come_decrement_ref_count2(sname_1129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1131,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1132,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1133,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1134 = come_decrement_ref_count2(name_1134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1135,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1136,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1138,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1140,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1141,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1142,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1146,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1147,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1148) { node_1148 = come_decrement_ref_count2(node_1148, ((struct sNode*)node_1148)->finalize, ((struct sNode*)node_1148)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1113;
    __dec_obj367=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1110);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj368=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1111);
    __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1112;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1259=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3687, "struct tuple2$2sFunpcharph")),equaler_1114,(char*)come_increment_ref_count(real_fun_name_1115))));
    last_code_1110 = come_decrement_ref_count2(last_code_1110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1111 = come_decrement_ref_count2(last_code2_1111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1115 = come_decrement_ref_count2(real_fun_name_1115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1116,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1259,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1151;
char* __dec_obj369;
char* last_code2_1152;
char* __dec_obj370;
_Bool comma_instead_of_semicolon_1153;
struct sClass* current_stack_frame_struct_1154;
struct sFun* cloner_1155;
void* __right_value1260 = (void*)0;
char* real_fun_name_1156;
void* __right_value1261 = (void*)0;
struct sType* type2_1157;
struct sClass* klass_1158;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
struct buffer* source_1159;
void* __right_value1264 = (void*)0;
char* name_1160;
void* __right_value1265 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1162;
struct tuple2$2charphsTypeph* it_1163;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1164=0;
struct sType* field_type_1165=0;
void* __right_value1266 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1168;
struct tuple2$2charphsTypeph* it_1169;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1170=0;
struct sType* field_type_1171=0;
char* p_1175;
int sline_1176;
char* sname_1177;
struct buffer* source3_1178;
char* head_1179;
struct buffer* __dec_obj371;
void* __right_value1267 = (void*)0;
char* __dec_obj372;
void* __right_value1268 = (void*)0;
struct sBlock* block_1180;
void* __right_value1269 = (void*)0;
struct sType* result_type_1181;
void* __right_value1270 = (void*)0;
char* name_1182;
void* __right_value1271 = (void*)0;
struct sType* self_type_1183;
struct sType* __list_values31___1184[1];
void* __right_value1272 = (void*)0;
void* __right_value1273 = (void*)0;
struct list$1sTypeph* param_types_1185;
void* __right_value1274 = (void*)0;
char* __list_values32___1186[1];
void* __right_value1275 = (void*)0;
void* __right_value1276 = (void*)0;
struct list$1charph* param_names_1187;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
struct list$1charph* param_default_parametors_1188;
void* __right_value1279 = (void*)0;
void* __right_value1280 = (void*)0;
struct buffer* header_buf_1189;
void* __right_value1281 = (void*)0;
int i_1190;
void* __right_value1282 = (void*)0;
struct sType* param_type_1191;
void* __right_value1283 = (void*)0;
char* param_name_1192;
void* __right_value1284 = (void*)0;
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
void* __right_value1287 = (void*)0;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
void* __right_value1290 = (void*)0;
struct sFun* fun_1193;
void* __right_value1291 = (void*)0;
void* __right_value1292 = (void*)0;
struct sFun* fun2_1194;
void* __right_value1293 = (void*)0;
void* __right_value1294 = (void*)0;
void* __right_value1295 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1299 = (void*)0;
struct sNode* node_1195;
_Bool Value_1197;
char* __dec_obj377;
struct buffer* __dec_obj378;
char* __dec_obj379;
char* __dec_obj380;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct tuple2$2sFunpcharph* __result415__;
    last_code_1151=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj369=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1152=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj370=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1153=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1154=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1155=((void*)0);
    real_fun_name_1156=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1157=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1157;
    klass_1158=type->mClass;
    if(    type->mPointerNum>0&&!klass_1158->mNumber) {
        source_1159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3712, "buffer"))));
        buffer_append_str(source_1159,"{\n");
        buffer_append_str(source_1159,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1159,"var result = new %s;\n",((char*)(__right_value1264=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1264 = come_decrement_ref_count2(__right_value1264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1158->mProtocol) {
            name_1160="_protocol_obj";
            char source2_1161[1024];
            memset(&source2_1161, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1161,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1159,source2_1161);
            klass_1158=((struct sClass*)(__right_value1265=map$2charphsClassphp_operator_load_element(info->classes,klass_1158->mName)));
            come_call_finalizer3(__right_value1265,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1162=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1158->mFields)),it_1163=list$1tuple2$2charphsTypephph_begin((o2_saved_1162));            !list$1tuple2$2charphsTypephph_end((o2_saved_1162));            it_1163=list$1tuple2$2charphsTypephph_next((o2_saved_1162))            ){
                multiple_assign_var16=it_1163;
                name_1164=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1165=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1165->mClass->mName)&&type->mPointerNum==field_type_1165->mPointerNum&&field_type_1165->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_1164,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1165->mArrayNum)>0) {
                    char source2_1166[1024];
                    memset(&source2_1166, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1166,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1164,name_1164,name_1164);
                    buffer_append_str(source_1159,source2_1166);
                }
                else {
                    char source2_1167[1024];
                    memset(&source2_1167, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1167,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1164,name_1164);
                    buffer_append_str(source_1159,source2_1167);
                }
                name_1164 = come_decrement_ref_count2(name_1164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1165,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1162,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1158=((struct sClass*)(__right_value1266=map$2charphsClassphp_operator_load_element(info->classes,klass_1158->mName)));
            come_call_finalizer3(__right_value1266,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1168=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1158->mFields)),it_1169=list$1tuple2$2charphsTypephph_begin((o2_saved_1168));            !list$1tuple2$2charphsTypephph_end((o2_saved_1168));            it_1169=list$1tuple2$2charphsTypephph_next((o2_saved_1168))            ){
                multiple_assign_var17=it_1169;
                name_1170=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1171=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1171->mClass->mName)&&type->mPointerNum==field_type_1171->mPointerNum&&field_type_1171->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_1171->mHeap) {
                    char source2_1172[1024];
                    memset(&source2_1172, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1172,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1170,name_1170,name_1170);
                    buffer_append_str(source_1159,source2_1172);
                }
                else if(                list$1sNodeph_length(field_type_1171->mArrayNum)>0) {
                    char source2_1173[1024];
                    memset(&source2_1173, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1173,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1170,name_1170,name_1170);
                    buffer_append_str(source_1159,source2_1173);
                }
                else {
                    char source2_1174[1024];
                    memset(&source2_1174, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1174,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1170,name_1170);
                    buffer_append_str(source_1159,source2_1174);
                }
                name_1170 = come_decrement_ref_count2(name_1170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1171,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1168,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1159,"return result;");
        buffer_append_char(source_1159,125);
        p_1175=info->p;
        sline_1176=info->sline;
        sname_1177=(char*)come_increment_ref_count(info->sname);
        source3_1178=(struct buffer*)come_increment_ref_count(info->source);
        head_1179=info->head;
        __dec_obj371=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1159);
        come_call_finalizer3(__dec_obj371,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj372=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1156));
        __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1180=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1181=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1182=(char*)come_increment_ref_count(string_clone(real_fun_name_1156));
        self_type_1183=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1183->mHeap=(_Bool)0;
        param_types_1185=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1184[0]=(struct sType*)come_increment_ref_count(self_type_1183),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3806, "struct list$1sTypeph")),1,__list_values31___1184)));
        param_names_1187=(struct list$1charph*)come_increment_ref_count((__list_values32___1186[0]=(char*)come_increment_ref_count(((char*)(__right_value1274=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3807, "struct list$1charph")),1,__list_values32___1186)));
        __right_value1274 = come_decrement_ref_count2(__right_value1274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1188=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3808, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1188,((void*)0));
        header_buf_1189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3811, "buffer"))));
        buffer_append_str(header_buf_1189,((char*)(__right_value1281=make_come_type_name_string(result_type_1181,info))));
        __right_value1281 = come_decrement_ref_count2(__right_value1281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1189," ");
        buffer_append_str(header_buf_1189,real_fun_name_1156);
        buffer_append_str(header_buf_1189,"(");
        for(        i_1190=0;        i_1190<list$1sTypeph_length(param_types_1185);        i_1190++        ){
            param_type_1191=((struct sType*)come_null_check(((struct sType*)(__right_value1282=list$1sTypephp_operator_load_element(param_types_1185,i_1190))), "05function.c", 3819, 17));
            come_call_finalizer3(__right_value1282,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1192=((char*)come_null_check(((char*)(__right_value1283=list$1charphp_operator_load_element(param_names_1187,i_1190))), "05function.c", 3820, 18));
            __right_value1283 = come_decrement_ref_count2(__right_value1283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1189,((char*)(__right_value1284=make_come_type_name_string(param_type_1191,info))));
            __right_value1284 = come_decrement_ref_count2(__right_value1284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1189," ");
            buffer_append_str(header_buf_1189,param_name_1192);
            if(            i_1190!=list$1sTypeph_length(param_types_1185)-1) {
                buffer_append_str(header_buf_1189,",");
            }
        }
        buffer_append_str(header_buf_1189,")");
        result_type_1181->mStatic=(_Bool)0;
        result_type_1181->mUniq=(_Bool)0;
        result_type_1181->mInline=(_Bool)0;
        fun_1193=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3836, "sFun")),(char*)come_increment_ref_count(name_1182),(struct sType*)come_increment_ref_count(result_type_1181),(struct list$1sTypeph*)come_increment_ref_count(param_types_1185),(struct list$1charph*)come_increment_ref_count(param_names_1187),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1188),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1180),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1189)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun_1193->mCloner=(_Bool)1;
        fun2_1194=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1291=__builtin_string(fun_name)))));
        __right_value1291 = come_decrement_ref_count2(__right_value1291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1194==((void*)0)||fun2_1194->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1182)),(struct sFun*)come_increment_ref_count(fun_1193));
        }
        cloner_1155=fun_1193;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3853, "struct sNode");
        _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1295=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3853, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1193),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_1195=(struct sNode*)come_increment_ref_count(_inf_value14);
        come_call_finalizer3(__right_value1295,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1197=node_compile(node_1195,info);
        if(        !Value_1197) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj377=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1177);
        __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1176;
        __dec_obj378=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1178);
        come_call_finalizer3(__dec_obj378,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1175;
        info->head=head_1179;
        info->sline=sline_1176;
        come_call_finalizer3(source_1159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1177 = come_decrement_ref_count2(sname_1177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1178,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1180,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1181,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1182 = come_decrement_ref_count2(name_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1183,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1185,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1187,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1188,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1189,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1193,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1194,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1195) { node_1195 = come_decrement_ref_count2(node_1195, ((struct sNode*)node_1195)->finalize, ((struct sNode*)node_1195)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1154;
    __dec_obj379=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1151);
    __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj380=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1152);
    __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1153;
    __result415__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1301=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3875, "struct tuple2$2sFunpcharph")),cloner_1155,(char*)come_increment_ref_count(real_fun_name_1156))));
    last_code_1151 = come_decrement_ref_count2(last_code_1151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1152 = come_decrement_ref_count2(last_code2_1152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1156 = come_decrement_ref_count2(real_fun_name_1156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1301,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1198;
char* __dec_obj381;
char* last_code2_1199;
char* __dec_obj382;
_Bool comma_instead_of_semicolon_1200;
struct sClass* current_stack_frame_struct_1201;
struct sFun* cloner_1202;
void* __right_value1302 = (void*)0;
char* real_fun_name_1203;
void* __right_value1303 = (void*)0;
struct sType* type2_1204;
struct sClass* klass_1205;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
struct buffer* source_1206;
int i_1207;
void* __right_value1306 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1208;
struct tuple2$2charphsTypeph* it_1209;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1210=0;
struct sType* field_type_1211=0;
char* p_1214;
int sline_1215;
char* sname_1216;
struct buffer* source3_1217;
char* head_1218;
struct buffer* __dec_obj383;
void* __right_value1307 = (void*)0;
char* __dec_obj384;
void* __right_value1308 = (void*)0;
struct sBlock* block_1219;
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct sType* result_type_1220;
void* __right_value1311 = (void*)0;
char* name_1221;
void* __right_value1312 = (void*)0;
struct sType* self_type_1222;
struct sType* __list_values33___1223[1];
void* __right_value1313 = (void*)0;
void* __right_value1314 = (void*)0;
struct list$1sTypeph* param_types_1224;
void* __right_value1315 = (void*)0;
char* __list_values34___1225[1];
void* __right_value1316 = (void*)0;
void* __right_value1317 = (void*)0;
struct list$1charph* param_names_1226;
void* __right_value1318 = (void*)0;
void* __right_value1319 = (void*)0;
struct list$1charph* param_default_parametors_1227;
void* __right_value1320 = (void*)0;
void* __right_value1321 = (void*)0;
struct buffer* header_buf_1228;
void* __right_value1322 = (void*)0;
int i_1229;
void* __right_value1323 = (void*)0;
struct sType* param_type_1230;
void* __right_value1324 = (void*)0;
char* param_name_1231;
void* __right_value1325 = (void*)0;
void* __right_value1326 = (void*)0;
void* __right_value1327 = (void*)0;
void* __right_value1328 = (void*)0;
void* __right_value1329 = (void*)0;
void* __right_value1330 = (void*)0;
void* __right_value1331 = (void*)0;
struct sFun* fun_1232;
void* __right_value1332 = (void*)0;
void* __right_value1333 = (void*)0;
struct sFun* fun2_1233;
void* __right_value1334 = (void*)0;
void* __right_value1335 = (void*)0;
void* __right_value1336 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1340 = (void*)0;
struct sNode* node_1234;
_Bool Value_1236;
char* __dec_obj389;
struct buffer* __dec_obj390;
char* __dec_obj391;
char* __dec_obj392;
void* __right_value1341 = (void*)0;
void* __right_value1342 = (void*)0;
struct tuple2$2sFunpcharph* __result418__;
    last_code_1198=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj381=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1199=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj382=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1200=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1201=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1202=((void*)0);
    real_fun_name_1203=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1204=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1204;
    klass_1205=type->mClass;
    if(    type->mPointerNum>0&&!klass_1205->mNumber) {
        source_1206=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3900, "buffer"))));
        buffer_append_str(source_1206,"{\n");
        buffer_append_str(source_1206,"var result = new buffer();\n");
        buffer_append_format(source_1206,"result.append_str(\"%s {\");\n",klass_1205->mName);
        i_1207=0;
        klass_1205=((struct sClass*)(__right_value1306=map$2charphsClassphp_operator_load_element(info->classes,klass_1205->mName)));
        come_call_finalizer3(__right_value1306,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1208=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1205->mFields)),it_1209=list$1tuple2$2charphsTypephph_begin((o2_saved_1208));        !list$1tuple2$2charphsTypephph_end((o2_saved_1208));        it_1209=list$1tuple2$2charphsTypephph_next((o2_saved_1208))        ){
            multiple_assign_var18=it_1209;
            name_1210=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1211=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_1211->mClass->mName)&&type->mPointerNum==field_type_1211->mPointerNum&&field_type_1211->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_1207==list$1tuple2$2charphsTypephph_length(klass_1205->mFields)-1) {
                char source2_1212[1024];
                memset(&source2_1212, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1212,1024,"result.append_str(\"%s:\");\n",name_1210);
                buffer_append_str(source_1206,source2_1212);
                snprintf(source2_1212,1024,"result.append_str(self.%s.to_string());\n",name_1210);
                buffer_append_str(source_1206,source2_1212);
            }
            else {
                char source2_1213[1024];
                memset(&source2_1213, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1213,1024,"result.append_str(\"%s:\");\n",name_1210);
                buffer_append_str(source_1206,source2_1213);
                snprintf(source2_1213,1024,"result.append_str(self.%s.to_string());\n",name_1210);
                buffer_append_str(source_1206,source2_1213);
                snprintf(source2_1213,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1206,source2_1213);
            }
            i_1207++;
            name_1210 = come_decrement_ref_count2(name_1210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1211,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1208,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1206,"result.append_str(\"}\");\n");
        buffer_append_format(source_1206,"return result.to_string();\n");
        buffer_append_char(source_1206,125);
        p_1214=info->p;
        sline_1215=info->sline;
        sname_1216=(char*)come_increment_ref_count(info->sname);
        source3_1217=(struct buffer*)come_increment_ref_count(info->source);
        head_1218=info->head;
        __dec_obj383=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1206);
        come_call_finalizer3(__dec_obj383,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj384=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1203));
        __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1219=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1220=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3967, "sType")),"char*",(_Bool)0,info));
        result_type_1220->mHeap=(_Bool)1;
        name_1221=(char*)come_increment_ref_count(string_clone(real_fun_name_1203));
        self_type_1222=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1222->mHeap=(_Bool)0;
        param_types_1224=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1223[0]=(struct sType*)come_increment_ref_count(self_type_1222),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3972, "struct list$1sTypeph")),1,__list_values33___1223)));
        param_names_1226=(struct list$1charph*)come_increment_ref_count((__list_values34___1225[0]=(char*)come_increment_ref_count(((char*)(__right_value1315=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3973, "struct list$1charph")),1,__list_values34___1225)));
        __right_value1315 = come_decrement_ref_count2(__right_value1315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1227=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3974, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1227,((void*)0));
        header_buf_1228=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3977, "buffer"))));
        buffer_append_str(header_buf_1228,((char*)(__right_value1322=make_come_type_name_string(result_type_1220,info))));
        __right_value1322 = come_decrement_ref_count2(__right_value1322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1228," ");
        buffer_append_str(header_buf_1228,real_fun_name_1203);
        buffer_append_str(header_buf_1228,"(");
        for(        i_1229=0;        i_1229<list$1sTypeph_length(param_types_1224);        i_1229++        ){
            param_type_1230=((struct sType*)come_null_check(((struct sType*)(__right_value1323=list$1sTypephp_operator_load_element(param_types_1224,i_1229))), "05function.c", 3985, 19));
            come_call_finalizer3(__right_value1323,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1231=((char*)come_null_check(((char*)(__right_value1324=list$1charphp_operator_load_element(param_names_1226,i_1229))), "05function.c", 3986, 20));
            __right_value1324 = come_decrement_ref_count2(__right_value1324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1228,((char*)(__right_value1325=make_come_type_name_string(param_type_1230,info))));
            __right_value1325 = come_decrement_ref_count2(__right_value1325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1228," ");
            buffer_append_str(header_buf_1228,param_name_1231);
            if(            i_1229!=list$1sTypeph_length(param_types_1224)-1) {
                buffer_append_str(header_buf_1228,",");
            }
        }
        buffer_append_str(header_buf_1228,")");
        result_type_1220->mStatic=(_Bool)0;
        result_type_1220->mUniq=(_Bool)0;
        result_type_1220->mInline=(_Bool)0;
        fun_1232=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4002, "sFun")),(char*)come_increment_ref_count(name_1221),(struct sType*)come_increment_ref_count(result_type_1220),(struct list$1sTypeph*)come_increment_ref_count(param_types_1224),(struct list$1charph*)come_increment_ref_count(param_names_1226),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1227),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1219),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1228)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun_1232->mCloner=(_Bool)1;
        fun2_1233=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1332=__builtin_string(fun_name)))));
        __right_value1332 = come_decrement_ref_count2(__right_value1332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1233==((void*)0)||fun2_1233->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1221)),(struct sFun*)come_increment_ref_count(fun_1232));
        }
        cloner_1202=fun_1232;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4019, "struct sNode");
        _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1336=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4019, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1232),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_1234=(struct sNode*)come_increment_ref_count(_inf_value15);
        come_call_finalizer3(__right_value1336,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1236=node_compile(node_1234,info);
        if(        !Value_1236) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj389=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1216);
        __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1215;
        __dec_obj390=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1217);
        come_call_finalizer3(__dec_obj390,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1214;
        info->head=head_1218;
        info->sline=sline_1215;
        come_call_finalizer3(source_1206,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1216 = come_decrement_ref_count2(sname_1216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1217,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1219,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1220,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1221 = come_decrement_ref_count2(name_1221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1222,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1224,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1226,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1227,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1228,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1232,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1233,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1234) { node_1234 = come_decrement_ref_count2(node_1234, ((struct sNode*)node_1234)->finalize, ((struct sNode*)node_1234)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1201;
    __dec_obj391=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1198);
    __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj392=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1199);
    __dec_obj392 = come_decrement_ref_count2(__dec_obj392, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1200;
    __result418__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1342=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4041, "struct tuple2$2sFunpcharph")),cloner_1202,(char*)come_increment_ref_count(real_fun_name_1203))));
    last_code_1198 = come_decrement_ref_count2(last_code_1198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1199 = come_decrement_ref_count2(last_code2_1199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1203 = come_decrement_ref_count2(real_fun_name_1203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1342,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj385;
struct sFun* __dec_obj386;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj385=self->sname;
            __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj386=self->mFun;
            come_call_finalizer3(__dec_obj386,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result416__;
void* __right_value1337 = (void*)0;
struct sFunNode* result_1235;
void* __right_value1338 = (void*)0;
char* __dec_obj387;
void* __right_value1339 = (void*)0;
struct sFun* __dec_obj388;
struct sFunNode* __result417__;
    if(    self==(void*)0) {
        __result416__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result416__;
    }
    result_1235=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1235->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj387=result_1235->sname;
        result_1235->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1235->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj388=result_1235->mFun;
        result_1235->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj388,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result417__ = gComeFunResultObject = __result_obj__ = result_1235;
    come_call_finalizer3(result_1235,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

