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

typedef int wint_t;

struct anonymous_typeX8
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX8 _RuneEntry;

struct anonymous_typeX9
{
    int __nranges;
    struct anonymous_typeX8* __ranges;
};

typedef struct anonymous_typeX9 _RuneRange;

struct anonymous_typeX10
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX10 _RuneCharClass;

struct anonymous_typeX11
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX9 __runetype_ext;
    struct anonymous_typeX9 __maplower_ext;
    struct anonymous_typeX9 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX10* __charclasses;
};

typedef struct anonymous_typeX11 _RuneLocale;

extern struct anonymous_typeX11 _DefaultRuneLocale;
extern struct anonymous_typeX11* _CurrentRuneLocale;
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

typedef struct regex_t* re_t;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
};

union anonymous_typeZ12
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ13
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ13 u;
};

typedef struct regex_t regex_t;

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

struct list_item$1objectph
{
    struct object* item;
    struct list_item$1objectph* prev;
    struct list_item$1objectph* next;
};

struct list$1objectph
{
    struct list_item$1objectph* head;
    struct list_item$1objectph* tail;
    int len;
    struct list_item$1objectph* it;
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

struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    struct tuple1$1sTypeph* mRefferenceOriginalType;
    char* mInterfaceName;
    char* mGenericsName;
    struct list$1objectph* mGenericsTypes;
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
    _Bool mNoRefference;
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
    int mGenericsNumBefore;
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
int gRightValueNum=0;
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
int isalnum(int anonymous_var_nameX387);
int isalpha(int anonymous_var_nameX388);
int isblank(int anonymous_var_nameX389);
int iscntrl(int anonymous_var_nameX390);
int isdigit(int anonymous_var_nameX391);
int isgraph(int anonymous_var_nameX392);
int islower(int anonymous_var_nameX393);
int isprint(int anonymous_var_nameX394);
int ispunct(int anonymous_var_nameX395);
int isspace(int anonymous_var_nameX396);
int isupper(int anonymous_var_nameX397);
int isxdigit(int anonymous_var_nameX398);
int tolower(int anonymous_var_nameX399);
int toupper(int anonymous_var_nameX400);
int isascii(int anonymous_var_nameX401);
int toascii(int anonymous_var_nameX402);
int _tolower(int anonymous_var_nameX403);
int _toupper(int anonymous_var_nameX404);
int digittoint(int anonymous_var_nameX405);
int ishexnumber(int anonymous_var_nameX406);
int isideogram(int anonymous_var_nameX407);
int isnumber(int anonymous_var_nameX408);
int isphonogram(int anonymous_var_nameX409);
int isrune(int anonymous_var_nameX410);
int isspecial(int anonymous_var_nameX411);
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
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
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
void free_objects_of_match_lv_tables(struct sInfo* info);
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
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1objectph_finalize(struct list$1objectph* self);
static void list_item$1objectphp_finalize(struct list_item$1objectph* self);
static void list$1objectphp_finalize(struct list$1objectph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self);
static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self);
static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item);
static struct object* object_clone(struct object* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static int list$1objectph_length(struct list$1objectph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position);
static struct list$1objectph* list$1objectph_reset(struct list$1objectph* self);
static struct object* list$1objectph_begin(struct list$1objectph* self);
static _Bool list$1objectph_end(struct list$1objectph* self);
static struct object* list$1objectph_next(struct list$1objectph* self);
static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1objectphp_operator_store_element(struct list$1objectph* self, int position, struct object* item);
static struct list$1objectph* list$1objectph_replace(struct list$1objectph* self, int position, struct object* item);
static void sType_finalize(struct sType* self);
static struct sType* sType_clone(struct sType* self);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
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
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3643, "buffer"))));
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3650, "buffer"))));
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
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3659, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3666, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3673, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3680, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3687, "buffer"))));
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
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4015, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4020, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4025, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4030, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4035, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4068, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4070, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4075, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4077, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4082, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4084, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4089, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4091, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4096, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4098, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4103, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4105, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4110, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4112, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4117, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4122, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4127, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4132, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4137, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4142, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4147, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4152, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4157, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4162, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4167, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4172, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4177, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4182, "vector$1double")),len,self)));
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1946, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1946, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1946, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1946, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1946, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1946, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1946, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1charph"))));
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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_266;
struct list$1sRightValueObjectph* o2_saved_267;
struct sRightValueObject* it2_270;
char* __dec_obj61;
void* __right_value249 = (void*)0;
char* __dec_obj62;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_266=right_value->right_value_objects;
        for(        o2_saved_267=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it2_270=list$1sRightValueObjectph_begin((o2_saved_267));        !list$1sRightValueObjectph_end((o2_saved_267));        it2_270=list$1sRightValueObjectph_next((o2_saved_267))        ){
            if(            it_266->mID==it2_270->mID) {
                it2_270->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer3(o2_saved_267,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj61=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj62=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_268;
struct sRightValueObject* __result207__;
struct sRightValueObject* __result208__;
struct sRightValueObject* result_269;
struct sRightValueObject* __result209__;
result_268 = (void*)0;
result_269 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_268,0,sizeof(struct sRightValueObject*));
        __result207__ = gComeFunResultObject = __result_obj__ = result_268;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    self->it=self->head;
    if(    self->it) {
        __result208__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    memset(&result_269,0,sizeof(struct sRightValueObject*));
    __result209__ = gComeFunResultObject = __result_obj__ = result_269;
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_271;
struct sRightValueObject* __result210__;
struct sRightValueObject* __result211__;
struct sRightValueObject* result_272;
struct sRightValueObject* __result212__;
result_271 = (void*)0;
result_272 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_271,0,sizeof(struct sRightValueObject*));
        __result210__ = gComeFunResultObject = __result_obj__ = result_271;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result211__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    memset(&result_272,0,sizeof(struct sRightValueObject*));
    __result212__ = gComeFunResultObject = __result_obj__ = result_272;
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_273;
struct list_item$1sRightValueObjectph* prev_it_274;
    it_273=self->head;
    while(it_273!=((void*)0)) {
        prev_it_274=it_273;
        it_273=it_273->next;
        come_call_finalizer3(prev_it_274,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj32;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj32=self->item;
            come_call_finalizer3(__dec_obj32,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj33;
char* __dec_obj59;
char* __dec_obj60;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj33=self->mType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj59=self->mVarName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj60=self->mFunName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_275;
struct list_item$1objectph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        come_call_finalizer3(prev_it_276,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct object*)__dec_obj43)->finalize, ((struct object*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_277;
struct list_item$1objectph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        come_call_finalizer3(prev_it_278,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_279;
struct list_item$1sNodeph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        come_call_finalizer3(prev_it_280,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_281;
struct list_item$1sNodeph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        come_call_finalizer3(prev_it_282,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_283;
struct list_item$1sTypeph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        come_call_finalizer3(prev_it_284,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_285;
struct list_item$1sTypeph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer3(prev_it_286,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_287;
struct list_item$1charph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        come_call_finalizer3(prev_it_288,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
struct sType* result_289;
struct sType* __result236__;
struct sType* __result237__;
struct sClass* klass_314;
void* __right_value297 = (void*)0;
struct sType* result_type_315;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct tuple1$1sTypeph* __dec_obj95;
struct list$1sTypeph* o2_saved_318;
struct sType* it_321;
void* __right_value300 = (void*)0;
struct sType* new_param_type_324;
int generics_number_328;
struct list$1sNodeph* array_num_329;
_Bool immutable__330;
int pointer_num_331;
_Bool heap_332;
_Bool refference_333;
_Bool no_refference_334;
_Bool exception__335;
_Bool guard__336;
_Bool no_heap_337;
_Bool no_calling_destructor_338;
_Bool null_value_339;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* __dec_obj99;
struct list$1sNodeph* __dec_obj100;
int generics_number_343;
void* __right_value306 = (void*)0;
struct object* __tmp_infY1;
struct sClass* klass2_344;
int generics_number2_348;
struct list$1sNodeph* array_num_349;
_Bool immutable__350;
int pointer_num_351;
_Bool heap_352;
_Bool refference_353;
_Bool no_refference_354;
_Bool guard__355;
_Bool no_heap_356;
_Bool no_calling_destructor_357;
_Bool null_value_358;
_Bool record__359;
_Bool multiple_types_360;
_Bool exception__361;
void* __right_value307 = (void*)0;
struct object* __tmp_infY2;
void* __right_value308 = (void*)0;
struct sType* __dec_obj101;
struct list$1sNodeph* __dec_obj102;
struct list$1objectph* o2_saved_364;
struct object* it_367;
struct object* __tmp_infY3;
void* __right_value309 = (void*)0;
struct sType* type_370;
struct object* _inf_value1;
struct sType* _inf_obj_value1;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* new_name_375;
struct sType* __result261__;
    result_289=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = result_289;
        come_call_finalizer3(result_289,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    if(    list$1objectph_length(generics_type->mGenericsTypes)==0) {
        __result237__ = gComeFunResultObject = __result_obj__ = result_289;
        come_call_finalizer3(result_289,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    klass_314=type->mClass;
    if(    string_operator_equals(klass_314->mName,"lambda")) {
        result_type_315=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType->v1,generics_type,info));
        __dec_obj95=result_289->mResultType;
        result_289->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 38, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_315)));
        come_call_finalizer3(__dec_obj95,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        list$1sTypeph_reset(result_289->mParamTypes);
        for(        o2_saved_318=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_321=list$1sTypeph_begin((o2_saved_318));        !list$1sTypeph_end((o2_saved_318));        it_321=list$1sTypeph_next((o2_saved_318))        ){
            new_param_type_324=(struct sType*)come_increment_ref_count(solve_generics(it_321,generics_type,info));
            list$1sTypeph_push_back(result_289->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_324));
            come_call_finalizer3(new_param_type_324,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_318,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_314->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_328=klass_314->mMethodGenericsNum;
        if(        generics_number_328>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_328,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_329=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__330=type->mImmutable;
        pointer_num_331=type->mPointerNum;
        heap_332=type->mHeap;
        refference_333=type->mRefference;
        no_refference_334=type->mNoRefference;
        exception__335=type->mException;
        guard__336=type->mGuardValue;
        no_heap_337=type->mNoHeap;
        no_calling_destructor_338=type->mNoCallingDestructor;
        null_value_339=type->mNullValue;
        __dec_obj99=result_289;
        result_289=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value304=list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_328))), "04heap.c", 70, 0))));
        come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value304,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        heap_332) {
            result_289->mHeap=heap_332;
        }
        if(        refference_333) {
            result_289->mRefference=refference_333;
        }
        if(        no_refference_334) {
            result_289->mNoRefference=no_refference_334;
        }
        if(        guard__336) {
            result_289->mGuardValue=guard__336;
        }
        if(        no_heap_337) {
            result_289->mNoHeap=(_Bool)1;
            result_289->mHeap=(_Bool)0;
        }
        if(        exception__335) {
            result_289->mException=(_Bool)1;
        }
        if(        no_calling_destructor_338) {
            result_289->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__330) {
            result_289->mImmutable=immutable__330;
        }
        if(        list$1sNodeph_length(array_num_329)>0) {
            __dec_obj100=result_289->mArrayNum;
            result_289->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_329);
            come_call_finalizer3(__dec_obj100,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_339) {
            result_289->mNullValue=null_value_339;
        }
        if(        pointer_num_331>0) {
            result_289->mPointerNum+=pointer_num_331;
        }
        come_call_finalizer3(array_num_329,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_314->mGenerics) {
        generics_number_343=klass_314->mGenericsNum;
        if(        generics_number_343>=list$1objectph_length(generics_type->mGenericsTypes)) {
            err_msg(info,"invalid generics parametor number");
            exit(2);
        }
        klass2_344=((__tmp_infY1=((struct object*)come_null_check(((struct object*)(__right_value306=list$1objectphp_operator_load_element(generics_type->mGenericsTypes,generics_number_343))), "04heap.c", 118, 1))),((struct sType*)(__tmp_infY1 ? __tmp_infY1->_protocol_obj:(void*)0)))->mClass;
        if(__right_value306) { __right_value306 = come_decrement_ref_count2(__right_value306, ((struct object*)__right_value306)->finalize, ((struct object*)__right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        generics_number2_348=klass2_344->mGenericsNum;
        if(        generics_number_343!=generics_number2_348) {
            array_num_349=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
            immutable__350=type->mImmutable;
            pointer_num_351=type->mPointerNum;
            heap_352=type->mHeap;
            refference_353=type->mRefference;
            no_refference_354=type->mNoRefference;
            guard__355=type->mGuardValue;
            no_heap_356=type->mNoHeap;
            no_calling_destructor_357=type->mNoCallingDestructor;
            null_value_358=type->mNullValue;
            record__359=type->mRecord;
            multiple_types_360=type->mMultipleTypes;
            exception__361=type->mException;
            __dec_obj101=result_289;
            result_289=(struct sType*)come_increment_ref_count(sType_clone(((__tmp_infY2=((struct object*)come_null_check(((struct object*)(__right_value307=list$1objectphp_operator_load_element(generics_type->mGenericsTypes,generics_number_343))), "04heap.c", 139, 2))),((struct sType*)(__tmp_infY2 ? __tmp_infY2->_protocol_obj:(void*)0)))));
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(__right_value307) { __right_value307 = come_decrement_ref_count2(__right_value307, ((struct object*)__right_value307)->finalize, ((struct object*)__right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            result_289->mGenericsNumBefore=generics_number_343;
            if(            refference_353) {
                result_289->mRefference=refference_353;
            }
            if(            no_refference_354) {
                result_289->mNoRefference=no_refference_354;
            }
            if(            heap_352) {
                result_289->mHeap=heap_352;
            }
            if(            exception__361) {
                result_289->mException=exception__361;
            }
            if(            guard__355) {
                result_289->mGuardValue=guard__355;
            }
            if(            record__359) {
                result_289->mRecord=record__359;
            }
            if(            no_heap_356) {
                result_289->mNoHeap=(_Bool)1;
                result_289->mHeap=(_Bool)0;
            }
            if(            multiple_types_360) {
                result_289->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_357) {
                result_289->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__350) {
                result_289->mImmutable=immutable__350;
            }
            if(            list$1sNodeph_length(array_num_349)>0) {
                __dec_obj102=result_289->mArrayNum;
                result_289->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_349);
                come_call_finalizer3(__dec_obj102,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            null_value_358) {
                result_289->mNullValue=null_value_358;
            }
            if(            pointer_num_351>0) {
                result_289->mPointerNum+=pointer_num_351;
            }
            come_call_finalizer3(array_num_349,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1objectph_reset(result_289->mGenericsTypes);
        for(        o2_saved_364=(struct list$1objectph*)come_increment_ref_count((type->mGenericsTypes)),it_367=list$1objectph_begin((o2_saved_364));        !list$1objectph_end((o2_saved_364));        it_367=list$1objectph_next((o2_saved_364))        ){
            type_370=(struct sType*)come_increment_ref_count(solve_generics(((__tmp_infY3=it_367),((struct sType*)(__tmp_infY3 ? __tmp_infY3->_protocol_obj:(void*)0))),generics_type,info));
            _inf_value1=(struct object*)come_calloc(1, sizeof(struct object), "04heap.c", 190, "struct object");
            _inf_obj_value1=(struct sType*)come_increment_ref_count(type_370);
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sType_finalize;
            _inf_value1->clone=(void*)sType_clone;
            list$1objectph_push_back(result_289->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value1));
            come_call_finalizer3(type_370,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_364,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_generics_struct(result_289,generics_type,info)) {
            new_name_375=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_375);
            exit(1);
            new_name_375 = come_decrement_ref_count2(new_name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_289;
    come_call_finalizer3(result_289,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result214__;
void* __right_value251 = (void*)0;
struct tuple1$1sTypeph* result_291;
void* __right_value252 = (void*)0;
struct sType* __dec_obj63;
struct tuple1$1sTypeph* __result215__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_291=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj63=result_291->v1;
        result_291->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj64;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj64=self->v1;
            come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result216__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1objectph* result_292;
struct list_item$1objectph* it_293;
void* __right_value264 = (void*)0;
struct list$1objectph* __result221__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_292=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_293=self->head;
    while(it_293!=((void*)0)) {
        list$1objectph_add(result_292,(struct object*)come_increment_ref_count(object_clone(it_293->item)));
        it_293=it_293->next;
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_292;
    come_call_finalizer3(result_292,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result217__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result217__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1objectph* litem_294;
struct object* __dec_obj70;
void* __right_value261 = (void*)0;
struct list_item$1objectph* litem_295;
struct object* __dec_obj71;
void* __right_value262 = (void*)0;
struct list_item$1objectph* litem_296;
struct object* __dec_obj72;
struct list$1objectph* __result218__;
    if(    self->len==0) {
        litem_294=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value260=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_294->prev=((void*)0);
        litem_294->next=((void*)0);
        __dec_obj70=litem_294->item;
        litem_294->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct object*)__dec_obj70)->finalize, ((struct object*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_294;
        self->head=litem_294;
    }
    else if(    self->len==1) {
        litem_295=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value261=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_295->prev=self->head;
        litem_295->next=((void*)0);
        __dec_obj71=litem_295->item;
        litem_295->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct object*)__dec_obj71)->finalize, ((struct object*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_295;
        self->head->next=litem_295;
    }
    else {
        litem_296=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value262=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_296->prev=self->tail;
        litem_296->next=((void*)0);
        __dec_obj72=litem_296->item;
        litem_296->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct object*)__dec_obj72)->finalize, ((struct object*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_296;
        self->tail=litem_296;
    }
    self->len++;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct object* object_clone(struct object* self){
void* __result_obj__=(void*)0;
struct object* __result219__;
void* __right_value263 = (void*)0;
struct object* result_297;
struct object* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_297=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_297->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_297->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_297->clone=self->clone;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_297;
    if(result_297) { result_297 = come_decrement_ref_count2(result_297, ((struct object*)result_297)->finalize, ((struct object*)result_297)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result222__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_298;
struct list_item$1sNodeph* it_299;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result227__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_298=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_299=self->head;
    while(it_299!=((void*)0)) {
        list$1sNodeph_add(result_298,(struct sNode*)come_increment_ref_count(sNode_clone(it_299->item)));
        it_299=it_299->next;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_298;
    come_call_finalizer3(result_298,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result223__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_300;
struct sNode* __dec_obj74;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_301;
struct sNode* __dec_obj75;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_302;
struct sNode* __dec_obj76;
struct list$1sNodeph* __result224__;
    if(    self->len==0) {
        litem_300=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj74=litem_300->item;
        litem_300->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj75=litem_301->item;
        litem_301->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj76=litem_302->item;
        litem_302->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result225__;
void* __right_value271 = (void*)0;
struct sNode* result_303;
struct sNode* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_303=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_303->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_303->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_303->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_303->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_303->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_303->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_303->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_303->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_303->kind=self->kind;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_303;
    if(result_303) { result_303 = come_decrement_ref_count2(result_303, ((struct sNode*)result_303)->finalize, ((struct sNode*)result_303)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result228__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sTypeph* result_304;
struct list_item$1sTypeph* it_305;
void* __right_value279 = (void*)0;
struct list$1sTypeph* __result231__;
    if(    self==((void*)0)) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_304=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_305=self->head;
    while(it_305!=((void*)0)) {
        list$1sTypeph_add(result_304,(struct sType*)come_increment_ref_count(sType_clone(it_305->item)));
        it_305=it_305->next;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_304;
    come_call_finalizer3(result_304,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result229__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1sTypeph* litem_306;
struct sType* __dec_obj78;
void* __right_value277 = (void*)0;
struct list_item$1sTypeph* litem_307;
struct sType* __dec_obj79;
void* __right_value278 = (void*)0;
struct list_item$1sTypeph* litem_308;
struct sType* __dec_obj80;
struct list$1sTypeph* __result230__;
    if(    self->len==0) {
        litem_306=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value276=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        __dec_obj78=litem_306->item;
        litem_306->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1) {
        litem_307=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value277=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        __dec_obj79=litem_307->item;
        litem_307->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value278=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        __dec_obj80=litem_308->item;
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result232__;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* result_309;
struct list_item$1charph* it_310;
void* __right_value286 = (void*)0;
struct list$1charph* __result234__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_309=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_310=self->head;
    while(it_310!=((void*)0)) {
        list$1charph_add(result_309,(char*)come_increment_ref_count(string_clone(it_310->item)));
        it_310=it_310->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_309;
    come_call_finalizer3(result_309,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_311;
char* __dec_obj82;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_312;
char* __dec_obj83;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_313;
char* __dec_obj84;
struct list$1charph* __result233__;
    if(    self->len==0) {
        litem_311=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_311->prev=((void*)0);
        litem_311->next=((void*)0);
        __dec_obj82=litem_311->item;
        litem_311->item=(char*)come_increment_ref_count(item);
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_311;
        self->head=litem_311;
    }
    else if(    self->len==1) {
        litem_312=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_312->prev=self->head;
        litem_312->next=((void*)0);
        __dec_obj83=litem_312->item;
        litem_312->item=(char*)come_increment_ref_count(item);
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_312;
        self->head->next=litem_312;
    }
    else {
        litem_313=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_313->prev=self->tail;
        litem_313->next=((void*)0);
        __dec_obj84=litem_313->item;
        litem_313->item=(char*)come_increment_ref_count(item);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_313;
        self->tail=litem_313;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static int list$1objectph_length(struct list$1objectph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj94;
struct tuple1$1sTypeph* __result238__;
    __dec_obj94=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_316;
struct list_item$1sTypeph* prev_it_317;
struct list$1sTypeph* __result239__;
    it_316=self->head;
    while(it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        come_call_finalizer3(prev_it_317,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_319;
struct sType* __result240__;
struct sType* __result241__;
struct sType* result_320;
struct sType* __result242__;
result_319 = (void*)0;
result_320 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_319,0,sizeof(struct sType*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_319;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->head;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_320,0,sizeof(struct sType*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_320;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_322;
struct sType* __result243__;
struct sType* __result244__;
struct sType* result_323;
struct sType* __result245__;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_322,0,sizeof(struct sType*));
        __result243__ = gComeFunResultObject = __result_obj__ = result_322;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result244__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    memset(&result_323,0,sizeof(struct sType*));
    __result245__ = gComeFunResultObject = __result_obj__ = result_323;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list_item$1sTypeph* litem_325;
struct sType* __dec_obj96;
void* __right_value302 = (void*)0;
struct list_item$1sTypeph* litem_326;
struct sType* __dec_obj97;
void* __right_value303 = (void*)0;
struct list_item$1sTypeph* litem_327;
struct sType* __dec_obj98;
struct list$1sTypeph* __result246__;
    if(    self->len==0) {
        litem_325=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value301=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_325->prev=((void*)0);
        litem_325->next=((void*)0);
        __dec_obj96=litem_325->item;
        litem_325->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_325;
        self->head=litem_325;
    }
    else if(    self->len==1) {
        litem_326=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value302=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_326->prev=self->head;
        litem_326->next=((void*)0);
        __dec_obj97=litem_326->item;
        litem_326->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_326;
        self->head->next=litem_326;
    }
    else {
        litem_327=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value303=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_327->prev=self->tail;
        litem_327->next=((void*)0);
        __dec_obj98=litem_327->item;
        litem_327->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_327;
        self->tail=litem_327;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_340;
int i_341;
struct sType* __result247__;
struct sType* default_value_342;
struct sType* __result248__;
default_value_342 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_340=self->head;
    i_341=0;
    while(it_340!=((void*)0)) {
        if(        position==i_341) {
            __result247__ = gComeFunResultObject = __result_obj__ = it_340->item;
            gComeFunResultObject = (void*)0;
            return __result247__;
        }
        it_340=it_340->next;
        i_341++;
    }
    memset(&default_value_342,0,sizeof(struct sType*));
    __result248__ = gComeFunResultObject = __result_obj__ = default_value_342;
    come_call_finalizer3(default_value_342,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1objectph* it_345;
int i_346;
struct object* __result249__;
struct object* default_value_347;
struct object* __result250__;
default_value_347 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_345=self->head;
    i_346=0;
    while(it_345!=((void*)0)) {
        if(        position==i_346) {
            __result249__ = gComeFunResultObject = __result_obj__ = it_345->item;
            gComeFunResultObject = (void*)0;
            return __result249__;
        }
        it_345=it_345->next;
        i_346++;
    }
    memset(&default_value_347,0,sizeof(struct object*));
    __result250__ = gComeFunResultObject = __result_obj__ = default_value_347;
    if(default_value_347) { default_value_347 = come_decrement_ref_count2(default_value_347, ((struct object*)default_value_347)->finalize, ((struct object*)default_value_347)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1objectph* list$1objectph_reset(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list_item$1objectph* it_362;
struct list_item$1objectph* prev_it_363;
struct list$1objectph* __result251__;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        prev_it_363=it_362;
        it_362=it_362->next;
        come_call_finalizer3(prev_it_363,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct object* list$1objectph_begin(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct object* result_365;
struct object* __result252__;
struct object* __result253__;
struct object* result_366;
struct object* __result254__;
result_365 = (void*)0;
result_366 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_365,0,sizeof(struct object*));
        __result252__ = gComeFunResultObject = __result_obj__ = result_365;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    self->it=self->head;
    if(    self->it) {
        __result253__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    memset(&result_366,0,sizeof(struct object*));
    __result254__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static _Bool list$1objectph_end(struct list$1objectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct object* list$1objectph_next(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct object* result_368;
struct object* __result255__;
struct object* __result256__;
struct object* result_369;
struct object* __result257__;
result_368 = (void*)0;
result_369 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_368,0,sizeof(struct object*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_368;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_369,0,sizeof(struct object*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_369;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
struct list_item$1objectph* litem_371;
struct object* __dec_obj103;
void* __right_value311 = (void*)0;
struct list_item$1objectph* litem_372;
struct object* __dec_obj104;
void* __right_value312 = (void*)0;
struct list_item$1objectph* litem_373;
struct object* __dec_obj105;
struct list$1objectph* __result258__;
    if(    self->len==0) {
        litem_371=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value310=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1objectph"))));
        litem_371->prev=((void*)0);
        litem_371->next=((void*)0);
        __dec_obj103=litem_371->item;
        litem_371->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct object*)__dec_obj103)->finalize, ((struct object*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_371;
        self->head=litem_371;
    }
    else if(    self->len==1) {
        litem_372=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value311=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1objectph"))));
        litem_372->prev=self->head;
        litem_372->next=((void*)0);
        __dec_obj104=litem_372->item;
        litem_372->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct object*)__dec_obj104)->finalize, ((struct object*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_372;
        self->head->next=litem_372;
    }
    else {
        litem_373=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value312=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1objectph"))));
        litem_373->prev=self->tail;
        litem_373->next=((void*)0);
        __dec_obj105=litem_373->item;
        litem_373->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct object*)__dec_obj105)->finalize, ((struct object*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_373;
        self->tail=litem_373;
    }
    self->len++;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result258__;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
struct sType* result_376;
struct sClass* klass_377;
int generics_number_378;
struct list$1sNodeph* array_num_379;
_Bool immutable__380;
int pointer_num_381;
_Bool heap_382;
_Bool refference_383;
_Bool no_refference_384;
_Bool guard__385;
_Bool no_heap_386;
_Bool no_calling_destructor_387;
_Bool null_value_388;
_Bool exception__389;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* __dec_obj140;
struct list$1sNodeph* __dec_obj141;
int i_390;
struct list$1objectph* o2_saved_391;
struct object* it_392;
struct object* __tmp_infY4;
void* __right_value336 = (void*)0;
struct object* _inf_value2;
struct sType* _inf_obj_value2;
void* __right_value355 = (void*)0;
struct list$1sTypeph* o2_saved_399;
struct sType* it_400;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* __dec_obj178;
struct sType* __result268__;
    result_376=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_377=type->mClass;
    if(    klass_377->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_378=klass_377->mMethodGenericsNum;
        if(        generics_number_378>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_378,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_379=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__380=type->mImmutable;
        pointer_num_381=type->mPointerNum;
        heap_382=type->mHeap;
        refference_383=type->mRefference;
        no_refference_384=type->mNoRefference;
        guard__385=type->mGuardValue;
        no_heap_386=type->mNoHeap;
        no_calling_destructor_387=type->mNoCallingDestructor;
        null_value_388=type->mNullValue;
        exception__389=type->mException;
        __dec_obj140=result_376;
        result_376=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value334=list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_378))), "04heap.c", 233, 3))));
        come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        heap_382) {
            result_376->mHeap=heap_382||result_376->mHeap;
        }
        if(        refference_383) {
            result_376->mRefference=refference_383||result_376->mRefference;
        }
        if(        no_refference_384) {
            result_376->mNoRefference=no_refference_384||result_376->mNoRefference;
        }
        if(        exception__389) {
            result_376->mException=exception__389;
        }
        if(        guard__385) {
            result_376->mGuardValue=guard__385||result_376->mGuardValue;
        }
        if(        no_heap_386) {
            result_376->mNoHeap=(_Bool)1;
            result_376->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_387) {
            result_376->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__380) {
            result_376->mImmutable=immutable__380;
        }
        if(        list$1sNodeph_length(array_num_379)>0) {
            __dec_obj141=result_376->mArrayNum;
            result_376->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_379);
            come_call_finalizer3(__dec_obj141,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_388) {
            result_376->mNullValue=null_value_388;
        }
        if(        pointer_num_381>0) {
            result_376->mPointerNum+=pointer_num_381;
        }
        come_call_finalizer3(array_num_379,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_390=0;
    for(    o2_saved_391=(struct list$1objectph*)come_increment_ref_count((type->mGenericsTypes)),it_392=list$1objectph_begin((o2_saved_391));    !list$1objectph_end((o2_saved_391));    it_392=list$1objectph_next((o2_saved_391))    ){
        _inf_value2=(struct object*)come_calloc(1, sizeof(struct object), "04heap.c", 275, "struct object");
        _inf_obj_value2=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value336=solve_method_generics(((__tmp_infY4=it_392),((struct sType*)(__tmp_infY4 ? __tmp_infY4->_protocol_obj:(void*)0))),info))));
        _inf_value2->_protocol_obj=_inf_obj_value2;
        _inf_value2->finalize=(void*)sType_finalize;
        _inf_value2->clone=(void*)sType_clone;
        list$1objectphp_operator_store_element(result_376->mGenericsTypes,i_390,(struct object*)come_increment_ref_count(_inf_value2));
        come_call_finalizer3(__right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
        i_390++;
    }
    come_call_finalizer3(o2_saved_391,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    i_390=0;
    for(    o2_saved_399=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_400=list$1sTypeph_begin((o2_saved_399));    !list$1sTypeph_end((o2_saved_399));    it_400=list$1sTypeph_next((o2_saved_399))    ){
        list$1sTypephp_operator_store_element(result_376->mParamTypes,i_390,(struct sType*)come_increment_ref_count(solve_method_generics(it_400,info)));
        i_390++;
    }
    come_call_finalizer3(o2_saved_399,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mResultType) {
        __dec_obj178=result_376->mResultType->v1;
        result_376->mResultType->v1=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType->v1,info));
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result268__ = gComeFunResultObject = __result_obj__ = result_376;
    come_call_finalizer3(result_376,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void list$1objectphp_operator_store_element(struct list$1objectph* self, int position, struct object* item){
    list$1objectph_replace(self,position,(struct object*)come_increment_ref_count(item));
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1objectph* list$1objectph_replace(struct list$1objectph* self, int position, struct object* item){
void* __result_obj__=(void*)0;
int len_393;
int i_394;
struct object* default_value_395;
struct list$1objectph* __result262__;
struct list_item$1objectph* it_396;
int i_397;
struct object* __dec_obj142;
struct list$1objectph* __result263__;
default_value_395 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_393=self->len;
        for(        i_394=0;        i_394<position-len_393;        i_394++        ){
            memset(&default_value_395,0,sizeof(struct object*));
            list$1objectph_push_back(self,(struct object*)come_increment_ref_count(default_value_395));
            if(default_value_395) { default_value_395 = come_decrement_ref_count2(default_value_395, ((struct object*)default_value_395)->finalize, ((struct object*)default_value_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        list$1objectph_push_back(self,(struct object*)come_increment_ref_count(item));
        __result262__ = gComeFunResultObject = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    it_396=self->head;
    i_397=0;
    while(it_396!=((void*)0)) {
        if(        position==i_397) {
            __dec_obj142=it_396->item;
            it_396->item=(struct object*)come_increment_ref_count(item);
            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct object*)__dec_obj142)->finalize, ((struct object*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
            break;
        }
        it_396=it_396->next;
        i_397++;
    }
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj143;
struct tuple1$1sTypeph* __dec_obj144;
struct tuple1$1sTypeph* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
struct list$1objectph* __dec_obj148;
struct list$1sNodeph* __dec_obj149;
struct list$1sTypeph* __dec_obj150;
struct list$1charph* __dec_obj151;
struct tuple1$1sTypeph* __dec_obj152;
struct sNode* __dec_obj153;
struct tuple1$1sTypeph* __dec_obj154;
struct sNode* __dec_obj155;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj143=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj143,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj144=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj144,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj145=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj145,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj146=self->mInterfaceName;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj147=self->mGenericsName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj148=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj148,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj149=self->mArrayNum;
            come_call_finalizer3(__dec_obj149,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj150=self->mParamTypes;
            come_call_finalizer3(__dec_obj150,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj151=self->mParamNames;
            come_call_finalizer3(__dec_obj151,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj152=self->mResultType;
            come_call_finalizer3(__dec_obj152,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj153=self->mAlignas;
            if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj154=self->mChannelType;
            come_call_finalizer3(__dec_obj154,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj155=self->mSizeNum;
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj156=self->mOriginalTypeName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj157=self->mAsmName;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj158=self->mTupleName;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj159=self->mAttribute;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result264__;
void* __right_value337 = (void*)0;
struct sType* result_398;
void* __right_value338 = (void*)0;
struct tuple1$1sTypeph* __dec_obj160;
void* __right_value339 = (void*)0;
struct tuple1$1sTypeph* __dec_obj161;
void* __right_value340 = (void*)0;
struct tuple1$1sTypeph* __dec_obj162;
void* __right_value341 = (void*)0;
char* __dec_obj163;
void* __right_value342 = (void*)0;
char* __dec_obj164;
void* __right_value343 = (void*)0;
struct list$1objectph* __dec_obj165;
void* __right_value344 = (void*)0;
struct list$1sNodeph* __dec_obj166;
void* __right_value345 = (void*)0;
struct list$1sTypeph* __dec_obj167;
void* __right_value346 = (void*)0;
struct list$1charph* __dec_obj168;
void* __right_value347 = (void*)0;
struct tuple1$1sTypeph* __dec_obj169;
void* __right_value348 = (void*)0;
struct sNode* __dec_obj170;
void* __right_value349 = (void*)0;
struct tuple1$1sTypeph* __dec_obj171;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value351 = (void*)0;
char* __dec_obj173;
void* __right_value352 = (void*)0;
char* __dec_obj174;
void* __right_value353 = (void*)0;
char* __dec_obj175;
void* __right_value354 = (void*)0;
char* __dec_obj176;
struct sType* __result265__;
    if(    self==(void*)0) {
        __result264__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_398=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_398->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj160=result_398->mNoSolvedGenericsType;
        result_398->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj160,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj161=result_398->mOriginalLoadVarType;
        result_398->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj161,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj162=result_398->mRefferenceOriginalType;
        result_398->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj162,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj163=result_398->mInterfaceName;
        result_398->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj164=result_398->mGenericsName;
        result_398->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj165=result_398->mGenericsTypes;
        result_398->mGenericsTypes=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj165,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj166=result_398->mArrayNum;
        result_398->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj166,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj167=result_398->mParamTypes;
        result_398->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj167,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj168=result_398->mParamNames;
        result_398->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj168,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj169=result_398->mResultType;
        result_398->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj169,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj170=result_398->mAlignas;
        result_398->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj171=result_398->mChannelType;
        result_398->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj171,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_398->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_398->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_398->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_398->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_398->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_398->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_398->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_398->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_398->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_398->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_398->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_398->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_398->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_398->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_398->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_398->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_398->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_398->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_398->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_398->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_398->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_398->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_398->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_398->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_398->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj172=result_398->mSizeNum;
        result_398->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_398->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj173=result_398->mOriginalTypeName;
        result_398->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_398->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_398->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_398->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_398->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_398->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_398->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_398->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj174=result_398->mAsmName;
        result_398->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_398->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_398->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_398->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_398->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_398->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj175=result_398->mTupleName;
        result_398->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj176=result_398->mAttribute;
        result_398->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_398;
    come_call_finalizer3(result_398,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_401;
int i_402;
struct sType* default_value_403;
struct list$1sTypeph* __result266__;
struct list_item$1sTypeph* it_404;
int i_405;
struct sType* __dec_obj177;
struct list$1sTypeph* __result267__;
default_value_403 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_401=self->len;
        for(        i_402=0;        i_402<position-len_401;        i_402++        ){
            memset(&default_value_403,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_403));
            come_call_finalizer3(default_value_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result266__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    it_404=self->head;
    i_405=0;
    while(it_404!=((void*)0)) {
        if(        position==i_405) {
            __dec_obj177=it_404->item;
            it_404->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_404=it_404->next;
        i_405++;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result269__;
void* __right_value359 = (void*)0;
char* __result270__;
void* __right_value360 = (void*)0;
struct sRightValueObject* new_value_406;
struct sType* __dec_obj179;
void* __right_value361 = (void*)0;
char* __dec_obj180;
char* __dec_obj181;
void* __right_value365 = (void*)0;
char* buf_410;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __result272__;
    if(    gComeGC||gComeC) {
        __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    if(    info->no_output_come_code) {
        __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    new_value_406=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 301, "sRightValueObject"));
    __dec_obj179=new_value_406->mType;
    new_value_406->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_406->mFreed=(_Bool)0;
    new_value_406->mID=gRightValueNum;
    __dec_obj180=new_value_406->mVarName;
    new_value_406->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj181=new_value_406->mFunName;
    new_value_406->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_406->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_406));
    buf_410=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_410);
    __result272__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value367=xsprintf("((%s)(%s=%s))",((char*)(__right_value366=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_406->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_406,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_410 = come_decrement_ref_count2(buf_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
struct list_item$1sRightValueObjectph* litem_407;
struct sRightValueObject* __dec_obj182;
void* __right_value363 = (void*)0;
struct list_item$1sRightValueObjectph* litem_408;
struct sRightValueObject* __dec_obj183;
void* __right_value364 = (void*)0;
struct list_item$1sRightValueObjectph* litem_409;
struct sRightValueObject* __dec_obj184;
struct list$1sRightValueObjectph* __result271__;
    if(    self->len==0) {
        litem_407=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value362=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sRightValueObjectph"))));
        litem_407->prev=((void*)0);
        litem_407->next=((void*)0);
        __dec_obj182=litem_407->item;
        litem_407->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj182,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_407;
        self->head=litem_407;
    }
    else if(    self->len==1) {
        litem_408=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value363=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sRightValueObjectph"))));
        litem_408->prev=self->head;
        litem_408->next=((void*)0);
        __dec_obj183=litem_408->item;
        litem_408->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj183,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_408;
        self->head->next=litem_408;
    }
    else {
        litem_409=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value364=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sRightValueObjectph"))));
        litem_409->prev=self->tail;
        litem_409->next=((void*)0);
        __dec_obj184=litem_409->item;
        litem_409->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj184,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_409;
        self->tail=litem_409;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value368 = (void*)0;
struct sRightValueObject* new_value_411;
struct sType* __dec_obj185;
void* __right_value369 = (void*)0;
char* __dec_obj186;
char* __dec_obj187;
void* __right_value370 = (void*)0;
char* buf_412;
void* __right_value371 = (void*)0;
char* __dec_obj188;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
char* __dec_obj189;
    if(    gComeGC||gComeC) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_411=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 325, "sRightValueObject"));
    __dec_obj185=new_value_411->mType;
    new_value_411->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_411->mFreed=(_Bool)0;
    new_value_411->mID=gRightValueNum;
    __dec_obj186=new_value_411->mVarName;
    new_value_411->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj187=new_value_411->mFunName;
    new_value_411->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_411->mBlockLevel=info->block_level;
    new_value_411->mDecrementRefCount=decrement_ref_count;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_411));
    buf_412=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_412);
    __dec_obj188=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(come_value->c_value));
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj189=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value372=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_411->mVarName,come_value->c_value));
    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value->right_value_objects=new_value_411;
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_411,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_412 = come_decrement_ref_count2(buf_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_413;
struct list$1sRightValueObjectph* o2_saved_414;
struct sRightValueObject* it_415;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_413=0;
    for(    o2_saved_414=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_415=list$1sRightValueObjectph_begin((o2_saved_414));    !list$1sRightValueObjectph_end((o2_saved_414));    it_415=list$1sRightValueObjectph_next((o2_saved_414))    ){
        if(        it_415->mID==right_value_num) {
            break;
        }
        i_413++;
    }
    come_call_finalizer3(o2_saved_414,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_413,i_413+1);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_416;
struct list$1sRightValueObjectph* __result273__;
struct list_item$1sRightValueObjectph* it_419;
int i_420;
struct list_item$1sRightValueObjectph* prev_it_421;
struct list_item$1sRightValueObjectph* it_422;
int i_423;
struct list_item$1sRightValueObjectph* prev_it_424;
struct list_item$1sRightValueObjectph* it_425;
struct list_item$1sRightValueObjectph* head_prev_it_426;
struct list_item$1sRightValueObjectph* tail_it_427;
int i_428;
struct list_item$1sRightValueObjectph* prev_it_429;
struct list$1sRightValueObjectph* __result275__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_416=tail;
        tail=head;
        head=tmp_416;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result273__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    if(    head==0&&tail==self->len) {
        list$1sRightValueObjectph_reset(self);
    }
    else if(    head==0) {
        it_419=self->head;
        i_420=0;
        while(it_419!=((void*)0)) {
            if(            i_420<tail) {
                prev_it_421=it_419;
                it_419=it_419->next;
                i_420++;
                come_call_finalizer3(prev_it_421,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_420==tail) {
                self->head=it_419;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_419=it_419->next;
                i_420++;
            }
        }
    }
    else if(    tail==self->len) {
        it_422=self->head;
        i_423=0;
        while(it_422!=((void*)0)) {
            if(            i_423==head) {
                self->tail=it_422->prev;
                self->tail->next=((void*)0);
            }
            if(            i_423>=head) {
                prev_it_424=it_422;
                it_422=it_422->next;
                i_423++;
                come_call_finalizer3(prev_it_424,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_422=it_422->next;
                i_423++;
            }
        }
    }
    else {
        it_425=self->head;
        head_prev_it_426=((void*)0);
        tail_it_427=((void*)0);
        i_428=0;
        while(it_425!=((void*)0)) {
            if(            i_428==head) {
                head_prev_it_426=it_425->prev;
            }
            if(            i_428==tail) {
                tail_it_427=it_425;
            }
            if(            i_428>=head&&i_428<tail) {
                prev_it_429=it_425;
                it_425=it_425->next;
                i_428++;
                come_call_finalizer3(prev_it_429,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_425=it_425->next;
                i_428++;
            }
        }
        if(        head_prev_it_426!=((void*)0)) {
            head_prev_it_426->next=tail_it_427;
        }
        if(        tail_it_427!=((void*)0)) {
            tail_it_427->prev=head_prev_it_426;
        }
    }
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_417;
struct list_item$1sRightValueObjectph* prev_it_418;
struct list$1sRightValueObjectph* __result274__;
    it_417=self->head;
    while(it_417!=((void*)0)) {
        prev_it_418=it_417;
        it_417=it_417->next;
        come_call_finalizer3(prev_it_418,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __result276__;
void* __right_value375 = (void*)0;
char* __result277__;
struct sClass* klass_430;
void* __right_value376 = (void*)0;
char* type_name_431;
void* __right_value377 = (void*)0;
char* __result278__;
    if(    gComeGC||gComeC) {
        __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value374=__builtin_string(obj)));
        __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    if(    info->no_output_come_code) {
        __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value375=__builtin_string(obj)));
        __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    klass_430=type->mClass;
    type_name_431=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result278__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value377=xsprintf("(%s)come_increment_ref_count(%s)",type_name_431,obj)));
    type_name_431 = come_decrement_ref_count2(type_name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUEph* stack_saved_432;
struct list$1sRightValueObjectph* right_value_objects_433;
struct sClass* klass_434;
void* __right_value378 = (void*)0;
char* name_436;
void* __right_value379 = (void*)0;
_Bool no_decrement_437;
void* __right_value380 = (void*)0;
char* c_value_438;
struct sClass* klass_439;
char* class_name_440;
char* fun_name_441;
void* __right_value381 = (void*)0;
struct sType* type2_442;
void* __right_value382 = (void*)0;
char* fun_name2_443;
struct sFun* finalizer_444;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
char* none_generics_name_448;
void* __right_value385 = (void*)0;
char* generics_fun_name_449;
void* __right_value386 = (void*)0;
struct sGenericsFun* generics_fun_450;
void* __right_value387 = (void*)0;
int i_454;
void* __right_value388 = (void*)0;
char* new_fun_name_455;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
char* __dec_obj217;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_456=0;
char* new_fun_name_457=0;
char* __dec_obj219;
void* __right_value393 = (void*)0;
char* type_name_458;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
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
char* type_name_459;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* str_460;
void* __right_value415 = (void*)0;
char* str_461;
struct list$1sRightValueObjectph* __dec_obj220;
struct list$1CVALUEph* __dec_obj221;
memset(&i_454, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_432=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_433=info->right_value_objects;
    klass_434=type->mClass;
    static int dec_num_435=0;
    name_436=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_435));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value379=make_define_var(type,name_436,(_Bool)0,info))));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    info->comma_instead_of_semicolon) {
        add_come_code(info,"%s=%s,\n",name_436,obj);
    }
    else {
        add_come_code(info,"%s=%s;\n",name_436,obj);
    }
    obj=name_436;
    no_decrement_437=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_438=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_439=type->mClass;
        class_name_440=klass_439->mName;
        fun_name_441="finalize";
        type2_442=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_442->mHeap=(_Bool)0;
        fun_name2_443=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_441,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_444=((void*)0);
        if(        list$1objectph_length(type->mGenericsTypes)>0) {
            finalizer_444=((struct sFun*)(__right_value383=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_443)));
            come_call_finalizer3(__right_value383,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_444==((void*)0)) {
                none_generics_name_448=(char*)come_increment_ref_count(get_none_generics_name(type2_442->mClass->mName));
                generics_fun_name_449=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_448,fun_name_441));
                generics_fun_450=((struct sGenericsFun*)(__right_value386=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_449)));
                come_call_finalizer3(__right_value386,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                generics_fun_450) {
                    if(                    !create_generics_fun((char*)come_increment_ref_count(fun_name2_443),generics_fun_450,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_444=((struct sFun*)(__right_value387=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_443)));
                    come_call_finalizer3(__right_value387,sFun_finalize, 0, 1, 0, 0, (void*)0);
                }
                none_generics_name_448 = come_decrement_ref_count2(none_generics_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_449 = come_decrement_ref_count2(generics_fun_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_454=128-1;            i_454>=1;            i_454--            ){
                new_fun_name_455=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_443,i_454));
                finalizer_444=((struct sFun*)(__right_value389=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_455)));
                come_call_finalizer3(__right_value389,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                finalizer_444) {
                    __dec_obj217=fun_name2_443;
                    fun_name2_443=(char*)come_increment_ref_count(__builtin_string(new_fun_name_455));
                    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_455 = come_decrement_ref_count2(new_fun_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_455 = come_decrement_ref_count2(new_fun_name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_444==((void*)0)) {
                finalizer_444=((struct sFun*)(__right_value391=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_443)));
                come_call_finalizer3(__right_value391,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        if(        finalizer_444==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodeph_length(type->mArrayNum)==0) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value392=create_finalizer_automatically(type,fun_name_441,info)));
            fun_456=multiple_assign_var1->v1;
            new_fun_name_457=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(__right_value392,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj219=fun_name2_443;
            fun_name2_443=(char*)come_increment_ref_count(new_fun_name_457);
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_444=fun_456;
            new_fun_name_457 = come_decrement_ref_count2(new_fun_name_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_444!=((void*)0)) {
            if(            klass_439->mProtocol&&type->mPointerNum==1) {
                type_name_458=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_438) {
                    add_come_last_code2(info,((char*)(__right_value402=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0)",((char*)(__right_value394=string_to_string(fun_name2_443))),((char*)(__right_value395=string_to_string(c_value_438))),((char*)(__right_value396=string_to_string(c_value_438))),((char*)(__right_value397=string_to_string(type_name_458))),((char*)(__right_value398=string_to_string(c_value_438))),((char*)(__right_value399=string_to_string(c_value_438))),((char*)(__right_value400=string_to_string(type_name_458))),((char*)(__right_value401=string_to_string(c_value_438)))))),type->mAllocaValue,no_decrement_437,no_free,force_delete_);
                    __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                type_name_458 = come_decrement_ref_count2(type_name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_438) {
                    add_come_last_code2(info,((char*)(__right_value405=xsprintf("come_call_finalizer3(\%s,\%s, %%d, %%d, %%d, %%d, (void*)0)",((char*)(__right_value403=string_to_string(c_value_438))),((char*)(__right_value404=string_to_string(fun_name2_443)))))),type->mAllocaValue,no_decrement_437,no_free,force_delete_);
                    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(            klass_439->mProtocol&&type->mPointerNum==1) {
                type_name_459=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_460=(char*)come_increment_ref_count(xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0,0,0, (void*)0); }",((char*)(__right_value407=string_to_string(name_436))),((char*)(__right_value408=string_to_string(name_436))),((char*)(__right_value409=string_to_string(name_436))),((char*)(__right_value410=string_to_string(type_name_459))),((char*)(__right_value411=string_to_string(name_436))),((char*)(__right_value412=string_to_string(type_name_459))),((char*)(__right_value413=string_to_string(name_436)))));
                __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_last_code2(info,str_460);
                type_name_459 = come_decrement_ref_count2(type_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_460 = come_decrement_ref_count2(str_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_461=(char*)come_increment_ref_count(xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0)",name_436,name_436));
                add_come_last_code2(info,str_461);
                str_461 = come_decrement_ref_count2(str_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        c_value_438 = come_decrement_ref_count2(c_value_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_442,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_443 = come_decrement_ref_count2(fun_name2_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj220=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_433);
    come_call_finalizer3(__dec_obj220,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj221=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_432);
    come_call_finalizer3(__dec_obj221,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_432,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_436 = come_decrement_ref_count2(name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_445;
unsigned int hash_446;
unsigned int it_447;
struct sFun* __result279__;
struct sFun* __result280__;
struct sFun* __result281__;
struct sFun* __result282__;
default_value_445 = (void*)0;
    memset(&default_value_445,0,sizeof(struct sFun*));
    hash_446=charp_get_hash_key(((char*)key))%self->size;
    it_447=hash_446;
    while((_Bool)1) {
        if(        self->item_existance[it_447]) {
            if(            charp_equals(self->keys[it_447],key)) {
                __result279__ = gComeFunResultObject = __result_obj__ = self->items[it_447];
                come_call_finalizer3(default_value_445,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result279__;
            }
            it_447++;
            if(            it_447>=self->size) {
                it_447=0;
            }
            else if(            it_447==hash_446) {
                __result280__ = gComeFunResultObject = __result_obj__ = default_value_445;
                come_call_finalizer3(default_value_445,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result280__;
            }
        }
        else {
            __result281__ = gComeFunResultObject = __result_obj__ = default_value_445;
            come_call_finalizer3(default_value_445,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
    }
    __result282__ = gComeFunResultObject = __result_obj__ = default_value_445;
    come_call_finalizer3(default_value_445,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj190;
struct sType* __dec_obj191;
struct list$1sTypeph* __dec_obj192;
struct list$1charph* __dec_obj193;
struct list$1charph* __dec_obj194;
struct sType* __dec_obj195;
struct sBlock* __dec_obj196;
struct buffer* __dec_obj199;
struct buffer* __dec_obj200;
struct buffer* __dec_obj201;
struct buffer* __dec_obj202;
char* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj190=self->mName;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj191=self->mResultType;
            come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj192=self->mParamTypes;
            come_call_finalizer3(__dec_obj192,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj193=self->mParamNames;
            come_call_finalizer3(__dec_obj193,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj194=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj194,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj195=self->mLambdaType;
            come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj196=self->mBlock;
            come_call_finalizer3(__dec_obj196,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj199=self->mSource;
            come_call_finalizer3(__dec_obj199,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj200=self->mSourceHead;
            come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj201=self->mSourceHead2;
            come_call_finalizer3(__dec_obj201,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj202=self->mSourceDefer;
            come_call_finalizer3(__dec_obj202,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj203=self->mComeHeader;
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj204=self->mDeclareSName;
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj205=self->mAttribute;
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj206=self->mFunAttribute;
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj197;
struct sVarTable* __dec_obj198;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj197=self->mNodes;
            come_call_finalizer3(__dec_obj197,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj198=self->mVarTable;
            come_call_finalizer3(__dec_obj198,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_451;
unsigned int hash_452;
unsigned int it_453;
struct sGenericsFun* __result283__;
struct sGenericsFun* __result284__;
struct sGenericsFun* __result285__;
struct sGenericsFun* __result286__;
default_value_451 = (void*)0;
    memset(&default_value_451,0,sizeof(struct sGenericsFun*));
    hash_452=charp_get_hash_key(((char*)key))%self->size;
    it_453=hash_452;
    while((_Bool)1) {
        if(        self->item_existance[it_453]) {
            if(            charp_equals(self->keys[it_453],key)) {
                __result283__ = gComeFunResultObject = __result_obj__ = self->items[it_453];
                come_call_finalizer3(default_value_451,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
            it_453++;
            if(            it_453>=self->size) {
                it_453=0;
            }
            else if(            it_453==hash_452) {
                __result284__ = gComeFunResultObject = __result_obj__ = default_value_451;
                come_call_finalizer3(default_value_451,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result284__;
            }
        }
        else {
            __result285__ = gComeFunResultObject = __result_obj__ = default_value_451;
            come_call_finalizer3(default_value_451,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = default_value_451;
    come_call_finalizer3(default_value_451,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj207;
struct list$1charph* __dec_obj208;
struct list$1charph* __dec_obj209;
char* __dec_obj210;
struct sType* __dec_obj211;
struct list$1sTypeph* __dec_obj212;
struct list$1charph* __dec_obj213;
struct list$1charph* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj207=self->mImplType;
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj208=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj208,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj209=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj209,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj210=self->mName;
            __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj211=self->mResultType;
            come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj212=self->mParamTypes;
            come_call_finalizer3(__dec_obj212,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj213=self->mParamNames;
            come_call_finalizer3(__dec_obj213,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj214=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj214,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj215=self->mBlock;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj216=self->mGenericsSName;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj218;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj218=self->v2;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_462;
struct list_item$1sRightValueObjectph* prev_it_463;
    it_462=self->head;
    while(it_462!=((void*)0)) {
        prev_it_463=it_462;
        it_462=it_462->next;
        come_call_finalizer3(prev_it_463,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_464;
struct list_item$1CVALUEph* prev_it_465;
    it_464=self->head;
    while(it_464!=((void*)0)) {
        prev_it_465=it_464;
        it_464=it_464->next;
        come_call_finalizer3(prev_it_465,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj222;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj222=self->item;
            come_call_finalizer3(__dec_obj222,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj223;
struct sType* __dec_obj224;
char* __dec_obj225;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj223=self->c_value;
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj224=self->type;
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj225=self->c_value_without_right_value_objects;
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_466;
struct list_item$1CVALUEph* prev_it_467;
    it_466=self->head;
    while(it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        come_call_finalizer3(prev_it_467,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_468;
struct list$1sRightValueObjectph* right_value_objects_469;
struct sType* type_before_470;
_Bool alloca_value_471;
void* __right_value416 = (void*)0;
char* c_value_472;
struct sClass* klass_473;
char* class_name_474;
char* fun_name_475;
void* __right_value417 = (void*)0;
struct sType* type2_476;
void* __right_value418 = (void*)0;
char* fun_name2_477;
struct sFun* finalizer_478;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
char* none_generics_name_479;
void* __right_value421 = (void*)0;
char* generics_fun_name_480;
void* __right_value422 = (void*)0;
struct sGenericsFun* generics_fun_481;
void* __right_value423 = (void*)0;
int i_482;
void* __right_value424 = (void*)0;
char* new_fun_name_483;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
char* __dec_obj226;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_484=0;
char* new_fun_name_485=0;
char* __dec_obj227;
void* __right_value429 = (void*)0;
char* type_name_486;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
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
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_487;
struct tuple2$2charphsTypeph* it_490;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_493=0;
struct sType* field_type_494=0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
char* obj_495;
struct list$1tuple2$2charphsTypephph* o2_saved_498;
struct tuple2$2charphsTypeph* it_499;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* name_500=0;
struct sType* field_type_501=0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* obj_502;
void* __right_value474 = (void*)0;
char* type_name_503;
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
void* __right_value486 = (void*)0;
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
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj231;
struct list$1CVALUEph* __dec_obj232;
memset(&i_482, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_468=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_469=info->right_value_objects;
    type_before_470=type;
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType->v1) {
        alloca_value_471=type->mAllocaValue;
        type=type->mNoSolvedGenericsType->v1;
        type->mAllocaValue=alloca_value_471;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1objectph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        c_value_472=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_473=type->mClass;
        class_name_474=klass_473->mName;
        fun_name_475="finalize";
        type2_476=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_476->mHeap=(_Bool)0;
        fun_name2_477=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_475,info,(_Bool)1));
        finalizer_478=((void*)0);
        if(        list$1objectph_length(type->mGenericsTypes)>0) {
            finalizer_478=((struct sFun*)(__right_value419=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_477)));
            come_call_finalizer3(__right_value419,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_478==((void*)0)) {
                none_generics_name_479=(char*)come_increment_ref_count(get_none_generics_name(type2_476->mClass->mName));
                generics_fun_name_480=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_479,fun_name_475));
                generics_fun_481=((struct sGenericsFun*)(__right_value422=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_480)));
                come_call_finalizer3(__right_value422,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                generics_fun_481) {
                    if(                    !create_generics_fun((char*)come_increment_ref_count(fun_name2_477),generics_fun_481,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_478=((struct sFun*)(__right_value423=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_477)));
                    come_call_finalizer3(__right_value423,sFun_finalize, 0, 1, 0, 0, (void*)0);
                }
                none_generics_name_479 = come_decrement_ref_count2(none_generics_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_480 = come_decrement_ref_count2(generics_fun_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_482=128-1;            i_482>=1;            i_482--            ){
                new_fun_name_483=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_477,i_482));
                finalizer_478=((struct sFun*)(__right_value425=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_483)));
                come_call_finalizer3(__right_value425,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                finalizer_478) {
                    __dec_obj226=fun_name2_477;
                    fun_name2_477=(char*)come_increment_ref_count(__builtin_string(new_fun_name_483));
                    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_483 = come_decrement_ref_count2(new_fun_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_483 = come_decrement_ref_count2(new_fun_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_478==((void*)0)) {
                finalizer_478=((struct sFun*)(__right_value427=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_477)));
                come_call_finalizer3(__right_value427,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        if(        finalizer_478==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodeph_length(type->mArrayNum)==0) {
            multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value428=create_finalizer_automatically(type,fun_name_475,info)));
            fun_484=multiple_assign_var2->v1;
            new_fun_name_485=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            come_call_finalizer3(__right_value428,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj227=fun_name2_477;
            fun_name2_477=(char*)come_increment_ref_count(new_fun_name_485);
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_478=fun_484;
            new_fun_name_485 = come_decrement_ref_count2(new_fun_name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_478!=((void*)0)) {
            if(            klass_473->mProtocol&&type->mPointerNum==1) {
                type_name_486=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_472) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value438=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, %%d, %%d, %%d, %%d, %%s),\n",((char*)(__right_value430=string_to_string(fun_name2_477))),((char*)(__right_value431=string_to_string(c_value_472))),((char*)(__right_value432=string_to_string(c_value_472))),((char*)(__right_value433=string_to_string(type_name_486))),((char*)(__right_value434=string_to_string(c_value_472))),((char*)(__right_value435=string_to_string(c_value_472))),((char*)(__right_value436=string_to_string(type_name_486))),((char*)(__right_value437=string_to_string(c_value_472)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value447=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, %%s);\n",((char*)(__right_value439=string_to_string(fun_name2_477))),((char*)(__right_value440=string_to_string(c_value_472))),((char*)(__right_value441=string_to_string(c_value_472))),((char*)(__right_value442=string_to_string(type_name_486))),((char*)(__right_value443=string_to_string(c_value_472))),((char*)(__right_value444=string_to_string(c_value_472))),((char*)(__right_value445=string_to_string(type_name_486))),((char*)(__right_value446=string_to_string(c_value_472)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value456=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0),\n",((char*)(__right_value448=string_to_string(fun_name2_477))),((char*)(__right_value449=string_to_string(c_value_472))),((char*)(__right_value450=string_to_string(c_value_472))),((char*)(__right_value451=string_to_string(type_name_486))),((char*)(__right_value452=string_to_string(c_value_472))),((char*)(__right_value453=string_to_string(c_value_472))),((char*)(__right_value454=string_to_string(type_name_486))),((char*)(__right_value455=string_to_string(c_value_472)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                            __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value465=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0);\n",((char*)(__right_value457=string_to_string(fun_name2_477))),((char*)(__right_value458=string_to_string(c_value_472))),((char*)(__right_value459=string_to_string(c_value_472))),((char*)(__right_value460=string_to_string(type_name_486))),((char*)(__right_value461=string_to_string(c_value_472))),((char*)(__right_value462=string_to_string(c_value_472))),((char*)(__right_value463=string_to_string(type_name_486))),((char*)(__right_value464=string_to_string(c_value_472)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                            __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                }
                type_name_486 = come_decrement_ref_count2(type_name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_472) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value466=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_472,fun_name2_477,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value467=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_472,fun_name2_477,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value468=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_472,fun_name2_477,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value469=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_472,fun_name2_477,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        else {
            if(            klass_473->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_487=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_473->mFields)),it_490=list$1tuple2$2charphsTypephph_begin((o2_saved_487));                !list$1tuple2$2charphsTypephph_end((o2_saved_487));                it_490=list$1tuple2$2charphsTypephph_next((o2_saved_487))                ){
                    multiple_assign_var3=it_490;
                    name_493=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                    field_type_494=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                    if(                    field_type_494->mHeap&&field_type_494->mPointerNum>0) {
                        obj_495=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value470=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_472,name_493));
                        __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_494,obj_495,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        obj_495 = come_decrement_ref_count2(obj_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    name_493 = come_decrement_ref_count2(name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_487,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            klass_473->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_498=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_473->mFields)),it_499=list$1tuple2$2charphsTypephph_begin((o2_saved_498));                !list$1tuple2$2charphsTypephph_end((o2_saved_498));                it_499=list$1tuple2$2charphsTypephph_next((o2_saved_498))                ){
                    multiple_assign_var4=it_499;
                    name_500=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    field_type_501=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    field_type_501->mHeap&&field_type_501->mPointerNum>0) {
                        obj_502=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value472=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_472,name_500));
                        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_501,obj_502,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        obj_502 = come_decrement_ref_count2(obj_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    name_500 = come_decrement_ref_count2(name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_498,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                klass_473->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_472) {
                        type_name_503=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,((char*)(__right_value482=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d,%%d, %%s):0),\n",((char*)(__right_value475=string_to_string(c_value_472))),((char*)(__right_value476=string_to_string(c_value_472))),((char*)(__right_value477=string_to_string(c_value_472))),((char*)(__right_value478=string_to_string(type_name_503))),((char*)(__right_value479=string_to_string(c_value_472))),((char*)(__right_value480=string_to_string(type_name_503))),((char*)(__right_value481=string_to_string(c_value_472)))))),no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value490=xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, %%s); } \n",((char*)(__right_value483=string_to_string(c_value_472))),((char*)(__right_value484=string_to_string(c_value_472))),((char*)(__right_value485=string_to_string(c_value_472))),((char*)(__right_value486=string_to_string(type_name_503))),((char*)(__right_value487=string_to_string(c_value_472))),((char*)(__right_value488=string_to_string(type_name_503))),((char*)(__right_value489=string_to_string(c_value_472)))))),no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,((char*)(__right_value498=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, (void*)0):0),\n",((char*)(__right_value491=string_to_string(c_value_472))),((char*)(__right_value492=string_to_string(c_value_472))),((char*)(__right_value493=string_to_string(c_value_472))),((char*)(__right_value494=string_to_string(type_name_503))),((char*)(__right_value495=string_to_string(c_value_472))),((char*)(__right_value496=string_to_string(type_name_503))),((char*)(__right_value497=string_to_string(c_value_472)))))),no_decrement,no_free,force_delete_);
                                __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value506=xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, (void*)0); } \n",((char*)(__right_value499=string_to_string(c_value_472))),((char*)(__right_value500=string_to_string(c_value_472))),((char*)(__right_value501=string_to_string(c_value_472))),((char*)(__right_value502=string_to_string(type_name_503))),((char*)(__right_value503=string_to_string(c_value_472))),((char*)(__right_value504=string_to_string(type_name_503))),((char*)(__right_value505=string_to_string(c_value_472)))))),no_decrement,no_free,force_delete_);
                                __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        type_name_503 = come_decrement_ref_count2(type_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(                    c_value_472) {
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_472,c_value_472,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                            else {
                                add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_472,c_value_472,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",c_value_472,c_value_472,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_472,c_value_472,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                }
            }
        }
        c_value_472 = come_decrement_ref_count2(c_value_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_476,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_477 = come_decrement_ref_count2(fun_name2_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj231=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_469);
    come_call_finalizer3(__dec_obj231,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj232=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_468);
    come_call_finalizer3(__dec_obj232,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_468,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_488;
struct tuple2$2charphsTypeph* __result287__;
struct tuple2$2charphsTypeph* __result288__;
struct tuple2$2charphsTypeph* result_489;
struct tuple2$2charphsTypeph* __result289__;
result_488 = (void*)0;
result_489 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_488,0,sizeof(struct tuple2$2charphsTypeph*));
        __result287__ = gComeFunResultObject = __result_obj__ = result_488;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    self->it=self->head;
    if(    self->it) {
        __result288__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    memset(&result_489,0,sizeof(struct tuple2$2charphsTypeph*));
    __result289__ = gComeFunResultObject = __result_obj__ = result_489;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_491;
struct tuple2$2charphsTypeph* __result290__;
struct tuple2$2charphsTypeph* __result291__;
struct tuple2$2charphsTypeph* result_492;
struct tuple2$2charphsTypeph* __result292__;
result_491 = (void*)0;
result_492 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_491,0,sizeof(struct tuple2$2charphsTypeph*));
        __result290__ = gComeFunResultObject = __result_obj__ = result_491;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result291__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    memset(&result_492,0,sizeof(struct tuple2$2charphsTypeph*));
    __result292__ = gComeFunResultObject = __result_obj__ = result_492;
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_496;
struct list_item$1tuple2$2charphsTypephph* prev_it_497;
    it_496=self->head;
    while(it_496!=((void*)0)) {
        prev_it_497=it_496;
        it_496=it_496->next;
        come_call_finalizer3(prev_it_497,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj228;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj228=self->item;
            come_call_finalizer3(__dec_obj228,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj229;
struct sType* __dec_obj230;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj229=self->v1;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj230=self->v2;
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_clone_object_504;
void* __right_value507 = (void*)0;
struct sType* type2_505;
char* result_506;
struct sType* result_type_507;
struct list$1CVALUEph* stack_saved_508;
struct list$1sRightValueObjectph* right_value_objects_509;
void* __right_value508 = (void*)0;
char* c_value_510;
struct sClass* klass_511;
char* class_name_512;
char* fun_name_513;
struct sFun* cloner_514;
char* fun_name2_515;
void* __right_value509 = (void*)0;
char* none_generics_name_516;
void* __right_value510 = (void*)0;
struct sType* obj_type_517;
void* __right_value511 = (void*)0;
char* __dec_obj233;
void* __right_value512 = (void*)0;
char* fun_name3_518;
void* __right_value513 = (void*)0;
struct sGenericsFun* generics_fun_519;
void* __right_value514 = (void*)0;
_Bool _if_conditional1;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct tuple2$2sTypephcharph* __result298__;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
char* __dec_obj238;
int i_522;
void* __right_value522 = (void*)0;
char* new_fun_name_523;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj239;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_524=0;
char* new_fun_name_525=0;
char* __dec_obj240;
struct sType* __dec_obj241;
void* __right_value527 = (void*)0;
struct sType* __dec_obj242;
void* __right_value528 = (void*)0;
char* __dec_obj243;
void* __right_value529 = (void*)0;
char* __dec_obj244;
void* __right_value530 = (void*)0;
struct sType* __dec_obj245;
void* __right_value531 = (void*)0;
char* type_name_526;
void* __right_value532 = (void*)0;
char* __dec_obj246;
void* __right_value533 = (void*)0;
char* __dec_obj247;
struct list$1sRightValueObjectph* __dec_obj248;
struct list$1CVALUEph* __dec_obj249;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct tuple2$2sTypephcharph* __result299__;
fun_name2_515 = (void*)0;
memset(&i_522, 0, sizeof(int));
    in_clone_object_504=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_505=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_506=((void*)0);
    result_type_507=((void*)0);
    stack_saved_508=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_509=info->right_value_objects;
    c_value_510=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_511=type->mClass;
    class_name_512=klass_511->mName;
    fun_name_513="clone";
    cloner_514=((void*)0);
    if(    list$1objectph_length(type->mGenericsTypes)>0) {
        none_generics_name_516=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_517=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj233=fun_name2_515;
        fun_name2_515=(char*)come_increment_ref_count(create_method_name(obj_type_517,(_Bool)0,fun_name_513,info,(_Bool)1));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_518=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_516,fun_name_513));
        generics_fun_519=((struct sGenericsFun*)(__right_value513=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_518,((void*)0))));
        come_call_finalizer3(__right_value513,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_519) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_515)),generics_fun_519,obj_type_517,info))),            _if_conditional1) {
                __result298__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value519=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 739, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 739, "sType")),"void",(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string("")))));
                none_generics_name_516 = come_decrement_ref_count2(none_generics_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_517,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_518 = come_decrement_ref_count2(fun_name3_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_505,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_506 = come_decrement_ref_count2(result_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_510 = come_decrement_ref_count2(c_value_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_515 = come_decrement_ref_count2(fun_name2_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value519,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
        }
        cloner_514=((struct sFun*)(__right_value520=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_515)));
        come_call_finalizer3(__right_value520,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        none_generics_name_516 = come_decrement_ref_count2(none_generics_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_517,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_518 = come_decrement_ref_count2(fun_name3_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj238=fun_name2_515;
        fun_name2_515=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_513,info,(_Bool)1));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_522=128-1;        i_522>=1;        i_522--        ){
            new_fun_name_523=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_515,i_522));
            cloner_514=((struct sFun*)(__right_value523=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_523)));
            come_call_finalizer3(__right_value523,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_514) {
                __dec_obj239=fun_name2_515;
                fun_name2_515=(char*)come_increment_ref_count(__builtin_string(new_fun_name_523));
                __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_523 = come_decrement_ref_count2(new_fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_523 = come_decrement_ref_count2(new_fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_514==((void*)0)) {
            cloner_514=((struct sFun*)(__right_value525=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_515)));
            come_call_finalizer3(__right_value525,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    cloner_514==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value526=create_cloner_automatically(type,fun_name_513,info)));
        fun_524=multiple_assign_var5->v1;
        new_fun_name_525=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        come_call_finalizer3(__right_value526,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj240=fun_name2_515;
        fun_name2_515=(char*)come_increment_ref_count(new_fun_name_525);
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_514=fun_524;
        new_fun_name_525 = come_decrement_ref_count2(new_fun_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    cloner_514!=((void*)0)) {
        __dec_obj241=result_type_507;
        result_type_507=(struct sType*)come_increment_ref_count(cloner_514->mResultType);
        come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj242=result_type_507;
        result_type_507=(struct sType*)come_increment_ref_count(solve_generics(result_type_507,type,info));
        come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj243=result_506;
        result_506=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_515,c_value_510));
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj244=result_506;
            result_506=(char*)come_increment_ref_count(append_stackframe(result_506,result_type_507,info));
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj245=result_type_507;
        result_type_507=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        type2_505->mHeap=(_Bool)1;
        type_name_526=(char*)come_increment_ref_count(make_type_name_string(type2_505,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj246=result_506;
        result_506=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_526,c_value_510,info->sname,info->sline,type_name_526));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj247=result_506;
            result_506=(char*)come_increment_ref_count(append_stackframe(result_506,result_type_507,info));
            __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type_name_526 = come_decrement_ref_count2(type_name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj248=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_509);
    come_call_finalizer3(__dec_obj248,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj249=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_508);
    come_call_finalizer3(__dec_obj249,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    info->in_clone_object=in_clone_object_504;
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value535=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 798, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_507),(char*)come_increment_ref_count(result_506))));
    come_call_finalizer3(type2_505,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_506 = come_decrement_ref_count2(result_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_510 = come_decrement_ref_count2(c_value_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_515 = come_decrement_ref_count2(fun_name2_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value535,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_520;
unsigned int it_521;
struct sGenericsFun* __result293__;
struct sGenericsFun* __result294__;
struct sGenericsFun* __result295__;
struct sGenericsFun* __result296__;
    hash_520=charp_get_hash_key(((char*)key))%self->size;
    it_521=hash_520;
    while((_Bool)1) {
        if(        self->item_existance[it_521]) {
            if(            charp_equals(self->keys[it_521],key)) {
                __result293__ = gComeFunResultObject = __result_obj__ = self->items[it_521];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
            it_521++;
            if(            it_521>=self->size) {
                it_521=0;
            }
            else if(            it_521==hash_520) {
                __result294__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result294__;
            }
        }
        else {
            __result295__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
    }
    __result296__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj234;
char* __dec_obj235;
struct tuple2$2sTypephcharph* __result297__;
    __dec_obj234=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj235=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj236;
char* __dec_obj237;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj236=self->v1;
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj237=self->v2;
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_527;
struct list$1CVALUEph* stack_saved_528;
struct list$1sRightValueObjectph* right_value_objects_529;
struct sClass* klass_530;
char* class_name_531;
char* fun_name_532;
void* __right_value536 = (void*)0;
struct sType* type2_533;
struct sFun* cloner_534;
char* fun_name2_535;
void* __right_value537 = (void*)0;
char* none_generics_name_536;
void* __right_value538 = (void*)0;
struct sType* obj_type_537;
void* __right_value539 = (void*)0;
char* __dec_obj250;
void* __right_value540 = (void*)0;
char* fun_name3_538;
void* __right_value541 = (void*)0;
struct sGenericsFun* generics_fun_539;
void* __right_value542 = (void*)0;
_Bool _if_conditional2;
_Bool __result300__;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
char* __dec_obj251;
int i_540;
void* __right_value545 = (void*)0;
char* new_fun_name_541;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
char* __dec_obj252;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun_542=0;
char* new_fun_name_543=0;
char* __dec_obj253;
struct list$1sRightValueObjectph* __dec_obj254;
struct list$1CVALUEph* __dec_obj255;
_Bool __result301__;
fun_name2_535 = (void*)0;
memset(&i_540, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_527=((void*)0);
    stack_saved_528=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_529=info->right_value_objects;
    klass_530=type->mClass;
    class_name_531=klass_530->mName;
    fun_name_532="equals";
    type2_533=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_533->mHeap=(_Bool)0;
    cloner_534=((void*)0);
    if(    list$1objectph_length(type->mGenericsTypes)>0) {
        none_generics_name_536=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_537=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj250=fun_name2_535;
        fun_name2_535=(char*)come_increment_ref_count(create_method_name(obj_type_537,(_Bool)0,fun_name_532,info,(_Bool)1));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_538=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_536,fun_name_532));
        generics_fun_539=((struct sGenericsFun*)(__right_value541=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_538,((void*)0))));
        come_call_finalizer3(__right_value541,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_539) {
            if(            (_if_conditional2=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_535)),generics_fun_539,obj_type_537,info))),            _if_conditional2) {
                __result300__ = (_Bool)0;
                none_generics_name_536 = come_decrement_ref_count2(none_generics_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_538 = come_decrement_ref_count2(fun_name3_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_527 = come_decrement_ref_count2(result_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_528,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_535 = come_decrement_ref_count2(fun_name2_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result300__;
            }
        }
        cloner_534=((struct sFun*)(__right_value543=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_535)));
        come_call_finalizer3(__right_value543,sFun_finalize, 0, 1, 0, 0, (void*)0);
        none_generics_name_536 = come_decrement_ref_count2(none_generics_name_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_538 = come_decrement_ref_count2(fun_name3_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj251=fun_name2_535;
        fun_name2_535=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_532,info,(_Bool)1));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_540=128-1;        i_540>=1;        i_540--        ){
            new_fun_name_541=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_535,i_540));
            cloner_534=((struct sFun*)(__right_value546=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_541)));
            come_call_finalizer3(__right_value546,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_534) {
                __dec_obj252=fun_name2_535;
                fun_name2_535=(char*)come_increment_ref_count(__builtin_string(new_fun_name_541));
                __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_541 = come_decrement_ref_count2(new_fun_name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_541 = come_decrement_ref_count2(new_fun_name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_534==((void*)0)) {
            cloner_534=((struct sFun*)(__right_value548=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_535)));
            come_call_finalizer3(__right_value548,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_534==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value549=create_equals_automatically(type,fun_name_532,info)));
        fun_542=multiple_assign_var6->v1;
        new_fun_name_543=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer3(__right_value549,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj253=fun_name2_535;
        fun_name2_535=(char*)come_increment_ref_count(new_fun_name_543);
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_534=fun_542;
        new_fun_name_543 = come_decrement_ref_count2(new_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj254=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_529);
    come_call_finalizer3(__dec_obj254,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj255=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_528);
    come_call_finalizer3(__dec_obj255,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result301__ = (_Bool)1;
    result_527 = come_decrement_ref_count2(result_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_528,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_533,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_535 = come_decrement_ref_count2(fun_name2_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result301__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_544;
struct list$1CVALUEph* stack_saved_545;
struct list$1sRightValueObjectph* right_value_objects_546;
struct sClass* klass_547;
char* class_name_548;
char* fun_name_549;
void* __right_value550 = (void*)0;
struct sType* type2_550;
struct sFun* cloner_551;
char* fun_name2_552;
void* __right_value551 = (void*)0;
char* none_generics_name_553;
void* __right_value552 = (void*)0;
struct sType* obj_type_554;
void* __right_value553 = (void*)0;
char* __dec_obj256;
void* __right_value554 = (void*)0;
char* fun_name3_555;
void* __right_value555 = (void*)0;
struct sGenericsFun* generics_fun_556;
void* __right_value556 = (void*)0;
_Bool _if_conditional3;
_Bool __result302__;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
char* __dec_obj257;
int i_557;
void* __right_value559 = (void*)0;
char* new_fun_name_558;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
char* __dec_obj258;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_559=0;
char* new_fun_name_560=0;
char* __dec_obj259;
struct list$1sRightValueObjectph* __dec_obj260;
struct list$1CVALUEph* __dec_obj261;
_Bool __result303__;
fun_name2_552 = (void*)0;
memset(&i_557, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_544=((void*)0);
    stack_saved_545=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_546=info->right_value_objects;
    klass_547=type->mClass;
    class_name_548=klass_547->mName;
    fun_name_549="operator_equals";
    type2_550=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_550->mHeap=(_Bool)0;
    cloner_551=((void*)0);
    if(    list$1objectph_length(type->mGenericsTypes)>0) {
        none_generics_name_553=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_554=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj256=fun_name2_552;
        fun_name2_552=(char*)come_increment_ref_count(create_method_name(obj_type_554,(_Bool)0,fun_name_549,info,(_Bool)1));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_555=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_553,fun_name_549));
        generics_fun_556=((struct sGenericsFun*)(__right_value555=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_555,((void*)0))));
        come_call_finalizer3(__right_value555,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_556) {
            if(            (_if_conditional3=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_552)),generics_fun_556,obj_type_554,info))),            _if_conditional3) {
                __result302__ = (_Bool)0;
                none_generics_name_553 = come_decrement_ref_count2(none_generics_name_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_554,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_555 = come_decrement_ref_count2(fun_name3_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_544 = come_decrement_ref_count2(result_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_552 = come_decrement_ref_count2(fun_name2_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result302__;
            }
        }
        cloner_551=((struct sFun*)(__right_value557=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_552)));
        come_call_finalizer3(__right_value557,sFun_finalize, 0, 1, 0, 0, (void*)0);
        none_generics_name_553 = come_decrement_ref_count2(none_generics_name_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_554,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_555 = come_decrement_ref_count2(fun_name3_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj257=fun_name2_552;
        fun_name2_552=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_549,info,(_Bool)1));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_557=128-1;        i_557>=1;        i_557--        ){
            new_fun_name_558=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_552,i_557));
            cloner_551=((struct sFun*)(__right_value560=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_558)));
            come_call_finalizer3(__right_value560,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_551) {
                __dec_obj258=fun_name2_552;
                fun_name2_552=(char*)come_increment_ref_count(__builtin_string(new_fun_name_558));
                __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_558 = come_decrement_ref_count2(new_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_558 = come_decrement_ref_count2(new_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_551==((void*)0)) {
            cloner_551=((struct sFun*)(__right_value562=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_552)));
            come_call_finalizer3(__right_value562,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_551==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value563=create_operator_equals_automatically(type,fun_name_549,info)));
        fun_559=multiple_assign_var7->v1;
        new_fun_name_560=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer3(__right_value563,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj259=fun_name2_552;
        fun_name2_552=(char*)come_increment_ref_count(new_fun_name_560);
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_551=fun_559;
        new_fun_name_560 = come_decrement_ref_count2(new_fun_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj260=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_546);
    come_call_finalizer3(__dec_obj260,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj261=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_545);
    come_call_finalizer3(__dec_obj261,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result303__ = (_Bool)1;
    result_544 = come_decrement_ref_count2(result_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_550,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_552 = come_decrement_ref_count2(fun_name2_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result303__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_561;
struct list$1CVALUEph* stack_saved_562;
struct list$1sRightValueObjectph* right_value_objects_563;
struct sClass* klass_564;
char* class_name_565;
char* fun_name_566;
void* __right_value564 = (void*)0;
struct sType* type2_567;
struct sFun* cloner_568;
char* fun_name2_569;
void* __right_value565 = (void*)0;
char* none_generics_name_570;
void* __right_value566 = (void*)0;
struct sType* obj_type_571;
void* __right_value567 = (void*)0;
char* __dec_obj262;
void* __right_value568 = (void*)0;
char* fun_name3_572;
void* __right_value569 = (void*)0;
struct sGenericsFun* generics_fun_573;
void* __right_value570 = (void*)0;
_Bool _if_conditional4;
_Bool __result304__;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
char* __dec_obj263;
int i_574;
void* __right_value573 = (void*)0;
char* new_fun_name_575;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* __dec_obj264;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun_576=0;
char* new_fun_name_577=0;
char* __dec_obj265;
struct list$1sRightValueObjectph* __dec_obj266;
struct list$1CVALUEph* __dec_obj267;
_Bool __result305__;
fun_name2_569 = (void*)0;
memset(&i_574, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_561=((void*)0);
    stack_saved_562=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_563=info->right_value_objects;
    klass_564=type->mClass;
    class_name_565=klass_564->mName;
    fun_name_566="operator_not_equals";
    type2_567=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_567->mHeap=(_Bool)0;
    cloner_568=((void*)0);
    if(    list$1objectph_length(type->mGenericsTypes)>0) {
        none_generics_name_570=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_571=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj262=fun_name2_569;
        fun_name2_569=(char*)come_increment_ref_count(create_method_name(obj_type_571,(_Bool)0,fun_name_566,info,(_Bool)1));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_572=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_570,fun_name_566));
        generics_fun_573=((struct sGenericsFun*)(__right_value569=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_572,((void*)0))));
        come_call_finalizer3(__right_value569,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_573) {
            if(            (_if_conditional4=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_569)),generics_fun_573,obj_type_571,info))),            _if_conditional4) {
                __result304__ = (_Bool)0;
                none_generics_name_570 = come_decrement_ref_count2(none_generics_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_572 = come_decrement_ref_count2(fun_name3_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_561 = come_decrement_ref_count2(result_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_567,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_569 = come_decrement_ref_count2(fun_name2_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result304__;
            }
        }
        cloner_568=((struct sFun*)(__right_value571=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_569)));
        come_call_finalizer3(__right_value571,sFun_finalize, 0, 1, 0, 0, (void*)0);
        none_generics_name_570 = come_decrement_ref_count2(none_generics_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_572 = come_decrement_ref_count2(fun_name3_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj263=fun_name2_569;
        fun_name2_569=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_566,info,(_Bool)1));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_574=128-1;        i_574>=1;        i_574--        ){
            new_fun_name_575=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_569,i_574));
            cloner_568=((struct sFun*)(__right_value574=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_575)));
            come_call_finalizer3(__right_value574,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_568) {
                __dec_obj264=fun_name2_569;
                fun_name2_569=(char*)come_increment_ref_count(__builtin_string(new_fun_name_575));
                __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_575 = come_decrement_ref_count2(new_fun_name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_575 = come_decrement_ref_count2(new_fun_name_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_568==((void*)0)) {
            cloner_568=((struct sFun*)(__right_value576=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_569)));
            come_call_finalizer3(__right_value576,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_568==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value577=create_operator_not_equals_automatically(type,fun_name_566,info)));
        fun_576=multiple_assign_var8->v1;
        new_fun_name_577=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value577,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj265=fun_name2_569;
        fun_name2_569=(char*)come_increment_ref_count(new_fun_name_577);
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_568=fun_576;
        new_fun_name_577 = come_decrement_ref_count2(new_fun_name_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj266=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_563);
    come_call_finalizer3(__dec_obj266,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj267=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_562);
    come_call_finalizer3(__dec_obj267,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result305__ = (_Bool)1;
    result_561 = come_decrement_ref_count2(result_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_562,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_567,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_569 = come_decrement_ref_count2(fun_name2_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result305__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_578;
struct list$1sRightValueObjectph* right_value_objects_579;
int n_580;
struct list$1sRightValueObjectph* o2_saved_581;
struct sRightValueObject* it_582;
struct sType* type_583;
void* __right_value578 = (void*)0;
struct sType* type2_584;
void* __right_value579 = (void*)0;
struct sType* __dec_obj268;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_578=(_Bool)0;
    right_value_objects_579=info->right_value_objects;
    n_580=0;
    for(    o2_saved_581=(right_value_objects_579),it_582=list$1sRightValueObjectph_begin((o2_saved_581));    !list$1sRightValueObjectph_end((o2_saved_581));    it_582=list$1sRightValueObjectph_next((o2_saved_581))    ){
        if(        it_582&&!it_582->mFreed) {
            if(            string_operator_equals(it_582->mFunName,info->come_fun->mName)&&it_582->mBlockLevel==info->block_level&&!it_582->mStored) {
                type_583=(struct sType*)come_increment_ref_count(it_582->mType);
                type2_584=(struct sType*)come_increment_ref_count(sType_clone(type_583));
                if(                info->generics_type) {
                    __dec_obj268=type_583;
                    type_583=(struct sType*)come_increment_ref_count(solve_generics(type2_584,info->generics_type,info));
                    come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                free_object(type_583,it_582->mVarName,!it_582->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_582->mFreed=(_Bool)1;
                free_right_value_578=(_Bool)1;
                come_call_finalizer3(type_583,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_580++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_585;
void* __right_value580 = (void*)0;
struct sVar* var__586;
struct sVar* __result310__;
struct sVar* __result311__;
    it_585=table;
    while(it_585) {
        var__586=((struct sVar*)(__right_value580=map$2charphsVarphp_operator_load_element(it_585->mVars,name)));
        come_call_finalizer3(__right_value580,sVar_finalize, 0, 1, 0, 0, __result_obj__);
        if(        var__586) {
            __result310__ = gComeFunResultObject = __result_obj__ = var__586;
            gComeFunResultObject = (void*)0;
            return __result310__;
        }
        it_585=it_585->mParent;
    }
    __result311__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_587;
unsigned int hash_588;
unsigned int it_589;
struct sVar* __result306__;
struct sVar* __result307__;
struct sVar* __result308__;
struct sVar* __result309__;
default_value_587 = (void*)0;
    memset(&default_value_587,0,sizeof(struct sVar*));
    hash_588=charp_get_hash_key(((char*)key))%self->size;
    it_589=hash_588;
    while((_Bool)1) {
        if(        self->item_existance[it_589]) {
            if(            charp_equals(self->keys[it_589],key)) {
                __result306__ = gComeFunResultObject = __result_obj__ = self->items[it_589];
                come_call_finalizer3(default_value_587,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result306__;
            }
            it_589++;
            if(            it_589>=self->size) {
                it_589=0;
            }
            else if(            it_589==hash_588) {
                __result307__ = gComeFunResultObject = __result_obj__ = default_value_587;
                come_call_finalizer3(default_value_587,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result307__;
            }
        }
        else {
            __result308__ = gComeFunResultObject = __result_obj__ = default_value_587;
            come_call_finalizer3(default_value_587,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
    }
    __result309__ = gComeFunResultObject = __result_obj__ = default_value_587;
    come_call_finalizer3(default_value_587,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj269;
char* __dec_obj270;
struct sType* __dec_obj271;
char* __dec_obj272;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj269=self->mName;
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj270=self->mCValueName;
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj271=self->mType;
            come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj272=self->mFunName;
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_590;
char* it_593;
void* __right_value581 = (void*)0;
struct sVar* p_596;
struct sType* type_597;
struct sClass* klass_598;
void* __right_value582 = (void*)0;
char* c_value_599;
void* __right_value583 = (void*)0;
struct sType* type2_600;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_590=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_593=map$2charphsVarph_begin((o2_saved_590));    !map$2charphsVarph_end((o2_saved_590));    it_593=map$2charphsVarph_next((o2_saved_590))    ){
        p_596=((struct sVar*)(__right_value581=map$2charphsVarphp_operator_load_element(table->mVars,it_593)));
        come_call_finalizer3(__right_value581,sVar_finalize, 0, 1, 0, 0, (void*)0);
        type_597=p_596->mType;
        klass_598=type_597->mClass;
        if(        type_597->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_596->mCValueName,p_596->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_596->mCValueName,p_596->mCValueName);
        }
        else if(        ret_value!=((void*)0)&&p_596->mCValueName!=((void*)0)&&string_operator_equals(p_596->mCValueName,ret_value->mCValueName)&&type_597->mHeap) {
            free_object(type_597,p_596->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else if(        type_597->mHeap&&p_596->mCValueName) {
            free_object(type_597,p_596->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
        }
        else if(        klass_598->mStruct&&p_596->mCValueName&&type_597->mAllocaValue&&!type_597->mNoCallingDestructor) {
            c_value_599=(char*)come_increment_ref_count(xsprintf("(&%s)",p_596->mCValueName));
            type2_600=(struct sType*)come_increment_ref_count(sType_clone(type_597));
            type2_600->mPointerNum++;
            free_object(type2_600,c_value_599,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            c_value_599 = come_decrement_ref_count2(c_value_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_590,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_591;
char* __result312__;
char* __result313__;
char* result_592;
char* __result314__;
result_591 = (void*)0;
result_592 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_591,0,sizeof(char*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_591;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_592,0,sizeof(char*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_592;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_594;
char* __result315__;
char* __result316__;
char* result_595;
char* __result317__;
result_594 = (void*)0;
result_595 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_594,0,sizeof(char*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_594;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_595,0,sizeof(char*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_595;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_601;
int i_602;
    for(    i_601=0;    i_601<self->size;    i_601++    ){
        if(        self->item_existance[i_601]) {
            if(            1) {
                come_call_finalizer3(self->items[i_601],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_602=0;    i_602<self->size;    i_602++    ){
        if(        self->item_existance[i_602]) {
            if(            1) {
                self->keys[i_602] = come_decrement_ref_count2(self->keys[i_602], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_603;
    if(    gComeGC||gComeC) {
        return;
    }
    it_603=info->lv_table;
    if(    it_603==info->come_fun->mBlock->mVarTable) {
        free_objects(it_603,ret_value,info);
    }
    else {
        while(it_603!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_603,ret_value,info);
            it_603=it_603->mParent;
        }
        free_objects(it_603,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_604;
struct sVarTable* current_loop_vtable_605;
struct sVarTable* it_606;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_604=((void*)0);
    current_loop_vtable_605=info->current_loop_vtable;
    if(    current_loop_vtable_605!=((void*)0)) {
        it_606=info->lv_table;
        while(it_606!=current_loop_vtable_605) {
            free_objects(it_606,ret_value_604,info);
            it_606=it_606->mParent;
        }
        free_objects(it_606,ret_value_604,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
char* __result318__;
void* __right_value589 = (void*)0;
char* var_name_608;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
char* __result319__;
void* __right_value598 = (void*)0;
char* __result320__;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value588=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value584=string_to_string(info->sname))),((char*)(__right_value585=int_to_string(info->sline))),((char*)(__right_value586=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value587=charp_to_string(c_value))))));
            __right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_607=0;
        ++n_607;
        var_name_608=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_607));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value590=make_define_var(type,var_name_608,(_Bool)0,info))));
        __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result319__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value597=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value591=string_to_string(info->sname))),((char*)(__right_value592=int_to_string(info->sline))),((char*)(__right_value593=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value594=string_to_string(var_name_608))),((char*)(__right_value595=charp_to_string(c_value))),((char*)(__right_value596=string_to_string(var_name_608))))));
        var_name_608 = come_decrement_ref_count2(var_name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result319__;
        var_name_608 = come_decrement_ref_count2(var_name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value598=__builtin_string(c_value)));
    __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_609;
char* it_610;
void* __right_value599 = (void*)0;
struct sVar* p_611;
struct sType* type_612;
struct sClass* klass_613;
_Bool __result321__;
_Bool __result322__;
_Bool __result323__;
_Bool __result324__;
_Bool __result325__;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_609=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_610=map$2charphsVarph_begin((o2_saved_609));    !map$2charphsVarph_end((o2_saved_609));    it_610=map$2charphsVarph_next((o2_saved_609))    ){
        p_611=((struct sVar*)(__right_value599=map$2charphsVarphp_operator_load_element(table->mVars,it_610)));
        come_call_finalizer3(__right_value599,sVar_finalize, 0, 1, 0, 0, (void*)0);
        type_612=p_611->mType;
        klass_613=type_612->mClass;
        if(        type_612->mChannel) {
            __result321__ = (_Bool)1;
            come_call_finalizer3(o2_saved_609,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result321__;
        }
        else if(        ret_value!=((void*)0)&&p_611->mCValueName!=((void*)0)&&string_operator_equals(p_611->mCValueName,ret_value->mCValueName)&&type_612->mHeap) {
            __result322__ = (_Bool)1;
            come_call_finalizer3(o2_saved_609,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result322__;
        }
        else if(        type_612->mHeap&&p_611->mCValueName) {
            if(            type_612->mFunctionParam) {
                __result323__ = (_Bool)1;
                come_call_finalizer3(o2_saved_609,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result323__;
            }
            else {
                __result324__ = (_Bool)1;
                come_call_finalizer3(o2_saved_609,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result324__;
            }
        }
        else if(        klass_613->mStruct&&p_611->mCValueName&&type_612->mAllocaValue&&!type_612->mNoCallingDestructor) {
            __result325__ = (_Bool)1;
            come_call_finalizer3(o2_saved_609,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result325__;
        }
    }
    come_call_finalizer3(o2_saved_609,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_614;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_614=info->lv_table;
    if(    it_614==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_614,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_614!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_614,ret_value,info)) {
                return (_Bool)1;
            }
            it_614=it_614->mParent;
        }
        if(        existance_free_objects(it_614,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_615;
struct list$1sRightValueObjectph* o2_saved_616;
struct sRightValueObject* it_617;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_615=info->right_value_objects;
    for(    o2_saved_616=(right_value_objects_615),it_617=list$1sRightValueObjectph_begin((o2_saved_616));    !list$1sRightValueObjectph_end((o2_saved_616));    it_617=list$1sRightValueObjectph_next((o2_saved_616))    ){
        if(        it_617&&!it_617->mFreed) {
            if(            string_operator_equals(it_617->mFunName,info->come_fun->mName)&&it_617->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

