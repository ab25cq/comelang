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
int poll(struct pollfd* anonymous_var_nameX695, unsigned int anonymous_var_nameX696, int anonymous_var_nameX697);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
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
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
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
static struct sVar* sVar_clone(struct sVar* self);
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

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value250 = (void*)0;
char* __dec_obj34;
struct sReturnNode* __result207__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj34=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sReturnNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_266;
void* __right_value298 = (void*)0;
struct sType* result_type_267;
void* __right_value299 = (void*)0;
struct sType* result_type2_306;
struct sType* result_type3_307;
void* __right_value300 = (void*)0;
_Bool _if_conditional1;
void* __right_value301 = (void*)0;
struct sNode* __dec_obj94;
_Bool Value_308;
_Bool __result232__;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_309;
void* __right_value303 = (void*)0;
struct sType* come_value_type_310;
void* __right_value304 = (void*)0;
struct sType* __dec_obj95;
void* __right_value305 = (void*)0;
char* var_name_312;
int num_result_stack_313;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __if_result__0_314 = (void*)0;
struct list$1sVarph* o2_saved_315;
struct sVar* it_318;
struct list$1sVarph* __dec_obj101;
void* __right_value308 = (void*)0;
struct sFun* come_fun_325;
void* __if_result__1_326 = (void*)0;
struct list$1sVarph* o2_saved_327;
struct sVar* it_328;
struct list$1sVarph* __dec_obj105;
void* __right_value309 = (void*)0;
    if(    self->value) {
        come_fun_266=info->come_fun;
        result_type_267=(struct sType*)come_increment_ref_count(sType_clone(come_fun_266->mResultType));
        result_type2_306=(struct sType*)come_increment_ref_count(solve_generics(result_type_267,info->generics_type,info));
        result_type3_307=result_type2_306->mNoSolvedGenericsType->v1;
        if(        result_type2_306->mNoSolvedGenericsType->v1) {
            result_type3_307=result_type2_306->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_307=result_type2_306;
        }
        if(        result_type_267->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value300=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj94=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_308=node_compile(self->value,info);
        if(        !Value_308) {
            __result232__ = (_Bool)0;
            come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_306,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result232__;
        }
        else {
        }
        come_value_309=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_310=(struct sType*)come_increment_ref_count(solve_generics(come_value_309->type,info->generics_type,info));
        __dec_obj95=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_309->type));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_309->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_266->mBlock,info,come_value_309->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_309->c_value);
        }
        else {
            static int num_result_311=0;
            var_name_312=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_311));
            num_result_stack_313=num_result_311;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_306->mClass->mName)>strlen("tuple")&&memcmp(result_type2_306->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_306,come_value_type_310,come_value_309,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value306=make_define_var(result_type2_306,var_name_312,(_Bool)0,info))));
                __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_312,come_value_309->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value307=make_define_var(result_type2_306,var_name_312,(_Bool)0,info))));
                __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_312,come_value_309->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_266->mBlock,info,come_value_309->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_315=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_318=list$1sVarph_begin((o2_saved_315));                    !list$1sVarph_end((o2_saved_315));                    it_318=list$1sVarph_next((o2_saved_315))                    ){
                        free_object(it_318->mType,it_318->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_315,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj101=info->match_it_var;
                    __if_result__0_314=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj101,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_314,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value308=xsprintf("come_heap_final();\n"))));
                __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_313);
            var_name_312 = come_decrement_ref_count2(var_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_306,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_309,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_325=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_325->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_327=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_328=list$1sVarph_begin((o2_saved_327));                !list$1sVarph_end((o2_saved_327));                it_328=list$1sVarph_next((o2_saved_327))                ){
                    free_object(it_328->mType,it_328->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_327,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj105=info->match_it_var;
                __if_result__1_326=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj105,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_326,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value309=xsprintf("come_heap_final();\n"))));
            __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
struct sType* __result209__;
void* __right_value252 = (void*)0;
struct sType* result_268;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj65;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* __dec_obj67;
void* __right_value258 = (void*)0;
char* __dec_obj68;
void* __right_value259 = (void*)0;
char* __dec_obj69;
void* __right_value267 = (void*)0;
struct list$1objectph* __dec_obj73;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __dec_obj77;
void* __right_value282 = (void*)0;
struct list$1sTypeph* __dec_obj81;
void* __right_value289 = (void*)0;
struct list$1charph* __dec_obj85;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj88;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value294 = (void*)0;
char* __dec_obj90;
void* __right_value295 = (void*)0;
char* __dec_obj91;
void* __right_value296 = (void*)0;
char* __dec_obj92;
void* __right_value297 = (void*)0;
char* __dec_obj93;
struct sType* __result231__;
    if(    self==(void*)0) {
        __result209__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_268=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_268->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj65=result_268->mNoSolvedGenericsType;
        result_268->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj65,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj66=result_268->mOriginalLoadVarType;
        result_268->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj67=result_268->mRefferenceOriginalType;
        result_268->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj67,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj68=result_268->mInterfaceName;
        result_268->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj69=result_268->mGenericsName;
        result_268->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj73=result_268->mGenericsTypes;
        result_268->mGenericsTypes=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj73,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj77=result_268->mArrayNum;
        result_268->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj77,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj81=result_268->mParamTypes;
        result_268->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj81,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj85=result_268->mParamNames;
        result_268->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj86=result_268->mResultType;
        result_268->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj87=result_268->mAlignas;
        result_268->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj88=result_268->mChannelType;
        result_268->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj88,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_268->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_268->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_268->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_268->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_268->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_268->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_268->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_268->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_268->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_268->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_268->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_268->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_268->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_268->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_268->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_268->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_268->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_268->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_268->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj89=result_268->mSizeNum;
        result_268->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_268->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj90=result_268->mOriginalTypeName;
        result_268->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_268->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_268->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_268->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_268->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_268->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_268->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj91=result_268->mAsmName;
        result_268->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_268->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_268->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj92=result_268->mTupleName;
        result_268->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj93=result_268->mAttribute;
        result_268->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_268;
    come_call_finalizer3(result_268,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result210__;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* result_269;
void* __right_value254 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result211__;
    if(    self==(void*)0) {
        __result210__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_269=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_269->v1;
        result_269->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result211__ = gComeFunResultObject = __result_obj__ = result_269;
    come_call_finalizer3(result_269,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj41;
struct tuple1$1sTypeph* __dec_obj43;
char* __dec_obj45;
char* __dec_obj46;
struct list$1objectph* __dec_obj47;
struct list$1sNodeph* __dec_obj49;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj53;
struct tuple1$1sTypeph* __dec_obj54;
struct sNode* __dec_obj56;
struct tuple1$1sTypeph* __dec_obj57;
struct sNode* __dec_obj59;
char* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
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
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj43=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj45=self->mInterfaceName;
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj46=self->mGenericsName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj47=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj47,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj49=self->mArrayNum;
            come_call_finalizer3(__dec_obj49,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj51=self->mParamTypes;
            come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj53=self->mParamNames;
            come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj54=self->mResultType;
            come_call_finalizer3(__dec_obj54,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj56=self->mAlignas;
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj57=self->mChannelType;
            come_call_finalizer3(__dec_obj57,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj59=self->mSizeNum;
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj60=self->mOriginalTypeName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj61=self->mAsmName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj62=self->mTupleName;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj63=self->mAttribute;
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_270;
struct list_item$1objectph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer3(prev_it_271,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj48;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj48=self->item;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct object*)__dec_obj48)->finalize, ((struct object*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_272;
struct list_item$1objectph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        come_call_finalizer3(prev_it_273,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_274;
struct list_item$1sNodeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj50;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj50=self->item;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_276;
struct list_item$1sNodeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_278;
struct list_item$1sTypeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj52=self->item;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_280;
struct list_item$1sTypeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_282;
struct list_item$1charph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj58;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj58=self->v1;
            come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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
struct list$1objectph* __result212__;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1objectph* result_284;
struct list_item$1objectph* it_285;
void* __right_value266 = (void*)0;
struct list$1objectph* __result217__;
    if(    self==((void*)0)) {
        __result212__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_284=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_285=self->head;
    while(it_285!=((void*)0)) {
        list$1objectph_add(result_284,(struct object*)come_increment_ref_count(object_clone(it_285->item)));
        it_285=it_285->next;
    }
    __result217__ = gComeFunResultObject = __result_obj__ = result_284;
    come_call_finalizer3(result_284,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result213__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result213__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
struct list_item$1objectph* litem_286;
struct object* __dec_obj70;
void* __right_value263 = (void*)0;
struct list_item$1objectph* litem_287;
struct object* __dec_obj71;
void* __right_value264 = (void*)0;
struct list_item$1objectph* litem_288;
struct object* __dec_obj72;
struct list$1objectph* __result214__;
    if(    self->len==0) {
        litem_286=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value262=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj70=litem_286->item;
        litem_286->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct object*)__dec_obj70)->finalize, ((struct object*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value263=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj71=litem_287->item;
        litem_287->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct object*)__dec_obj71)->finalize, ((struct object*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value264=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj72=litem_288->item;
        litem_288->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct object*)__dec_obj72)->finalize, ((struct object*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct object* object_clone(struct object* self){
void* __result_obj__=(void*)0;
struct object* __result215__;
void* __right_value265 = (void*)0;
struct object* result_289;
struct object* __result216__;
    if(    self==(void*)0) {
        __result215__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_289=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_289->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_289->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_289->clone=self->clone;
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_289;
    if(result_289) { result_289 = come_decrement_ref_count2(result_289, ((struct object*)result_289)->finalize, ((struct object*)result_289)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result218__;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNodeph* result_290;
struct list_item$1sNodeph* it_291;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __result223__;
    if(    self==((void*)0)) {
        __result218__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    result_290=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_291=self->head;
    while(it_291!=((void*)0)) {
        list$1sNodeph_add(result_290,(struct sNode*)come_increment_ref_count(sNode_clone(it_291->item)));
        it_291=it_291->next;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_290;
    come_call_finalizer3(result_290,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result219__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj74;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj75;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_294;
struct sNode* __dec_obj76;
struct list$1sNodeph* __result220__;
    if(    self->len==0) {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj74=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj75=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj76=litem_294->item;
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_294;
        self->tail=litem_294;
    }
    self->len++;
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result221__;
void* __right_value273 = (void*)0;
struct sNode* result_295;
struct sNode* __result222__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_295=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_295->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_295->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_295->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_295->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_295->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_295->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_295->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_295->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_295->kind=self->kind;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_295;
    if(result_295) { result_295 = come_decrement_ref_count2(result_295, ((struct sNode*)result_295)->finalize, ((struct sNode*)result_295)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result224__;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1sTypeph* result_296;
struct list_item$1sTypeph* it_297;
void* __right_value281 = (void*)0;
struct list$1sTypeph* __result227__;
    if(    self==((void*)0)) {
        __result224__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_296=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_297=self->head;
    while(it_297!=((void*)0)) {
        list$1sTypeph_add(result_296,(struct sType*)come_increment_ref_count(sType_clone(it_297->item)));
        it_297=it_297->next;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_296;
    come_call_finalizer3(result_296,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result225__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
struct list_item$1sTypeph* litem_298;
struct sType* __dec_obj78;
void* __right_value279 = (void*)0;
struct list_item$1sTypeph* litem_299;
struct sType* __dec_obj79;
void* __right_value280 = (void*)0;
struct list_item$1sTypeph* litem_300;
struct sType* __dec_obj80;
struct list$1sTypeph* __result226__;
    if(    self->len==0) {
        litem_298=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value278=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj78=litem_298->item;
        litem_298->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value279=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj79=litem_299->item;
        litem_299->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value280=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj80=litem_300->item;
        litem_300->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
    }
    self->len++;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result228__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* result_301;
struct list_item$1charph* it_302;
void* __right_value288 = (void*)0;
struct list$1charph* __result230__;
    if(    self==((void*)0)) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_301=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_302=self->head;
    while(it_302!=((void*)0)) {
        list$1charph_add(result_301,(char*)come_increment_ref_count(string_clone(it_302->item)));
        it_302=it_302->next;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_301;
    come_call_finalizer3(result_301,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_303;
char* __dec_obj82;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_304;
char* __dec_obj83;
void* __right_value287 = (void*)0;
struct list_item$1charph* litem_305;
char* __dec_obj84;
struct list$1charph* __result229__;
    if(    self->len==0) {
        litem_303=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_303->prev=((void*)0);
        litem_303->next=((void*)0);
        __dec_obj82=litem_303->item;
        litem_303->item=(char*)come_increment_ref_count(item);
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_303;
        self->head=litem_303;
    }
    else if(    self->len==1) {
        litem_304=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_304->prev=self->head;
        litem_304->next=((void*)0);
        __dec_obj83=litem_304->item;
        litem_304->item=(char*)come_increment_ref_count(item);
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_304;
        self->head->next=litem_304;
    }
    else {
        litem_305=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value287=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_305->prev=self->tail;
        litem_305->next=((void*)0);
        __dec_obj84=litem_305->item;
        litem_305->item=(char*)come_increment_ref_count(item);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_305;
        self->tail=litem_305;
    }
    self->len++;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_316;
struct sVar* __result233__;
struct sVar* __result234__;
struct sVar* result_317;
struct sVar* __result235__;
result_316 = (void*)0;
result_317 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_316,0,sizeof(struct sVar*));
        __result233__ = gComeFunResultObject = __result_obj__ = result_316;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    self->it=self->head;
    if(    self->it) {
        __result234__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    memset(&result_317,0,sizeof(struct sVar*));
    __result235__ = gComeFunResultObject = __result_obj__ = result_317;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_319;
struct sVar* __result236__;
struct sVar* __result237__;
struct sVar* result_320;
struct sVar* __result238__;
result_319 = (void*)0;
result_320 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_319,0,sizeof(struct sVar*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_319;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_320,0,sizeof(struct sVar*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_320;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_321;
struct list_item$1sVarph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer3(prev_it_322,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj96;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj96=self->item;
            come_call_finalizer3(__dec_obj96,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj97;
char* __dec_obj98;
struct sType* __dec_obj99;
char* __dec_obj100;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj97=self->mName;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj98=self->mCValueName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj99=self->mType;
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj100=self->mFunName;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_323;
struct list_item$1sVarph* prev_it_324;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        come_call_finalizer3(prev_it_324,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj102;
struct sType* __dec_obj103;
char* __dec_obj104;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj102=self->c_value;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj103=self->type;
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj104=self->c_value_without_right_value_objects;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
char* __dec_obj106;
struct sOutputNode* __result239__;
    ((struct sNodeBase*)(__right_value310=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value310,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
char* __result240__;
    __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value311=__builtin_string("sOutputNode")));
    __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
char* __dec_obj109;
struct list$1sNodeph* __dec_obj110;
struct sInlineAssembler* __result241__;
    ((struct sNodeBase*)(__right_value312=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value312,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj109=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
char* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value313=__builtin_string("sInlineAssembler")));
    __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_329;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct CVALUE* come_value_330;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct buffer* buf_331;
char* p_332;
_Bool dquort_333;
int num_exp_334;
void* __right_value318 = (void*)0;
struct sNode* node_335;
_Bool Value_339;
_Bool __result245__;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_340;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
char* __dec_obj114;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* __dec_obj115;
_Bool __result247__;
    source_329=(char*)come_increment_ref_count(self->source);
    come_value_330=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "CVALUE"))));
    buf_331=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "buffer"))));
    p_332=source_329;
    while(*p_332!=40) {
        buffer_append_char(buf_331,*p_332);
        p_332++;
    }
    if(    *p_332==40) {
        buffer_append_char(buf_331,*p_332);
        p_332++;
        while(*p_332==32||*p_332==9||*p_332==10) {
            buffer_append_char(buf_331,*p_332);
            p_332++;
        }
    }
    dquort_333=(_Bool)0;
    num_exp_334=0;
    while(*p_332) {
        if(        *p_332==34) {
            buffer_append_char(buf_331,*p_332);
            p_332++;
            dquort_333=!dquort_333;
        }
        else if(        dquort_333) {
            buffer_append_char(buf_331,*p_332);
            p_332++;
        }
        else if(        *p_332==40) {
            buffer_append_char(buf_331,*p_332);
            p_332++;
            node_335=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_334++));
            Value_339=node_compile(node_335,info);
            if(            !Value_339) {
                __result245__ = (_Bool)0;
                if(node_335) { node_335 = come_decrement_ref_count2(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_329 = come_decrement_ref_count2(source_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_330,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_331,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result245__;
            }
            else {
            }
            come_value_340=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_331,come_value_340->c_value);
            if(            *p_332==41) {
                buffer_append_char(buf_331,*p_332);
                p_332++;
            }
            if(node_335) { node_335 = come_decrement_ref_count2(node_335, ((struct sNode*)node_335)->finalize, ((struct sNode*)node_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_331,*p_332);
            p_332++;
        }
    }
    __dec_obj114=come_value_330->c_value;
    come_value_330->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value320=buffer_to_string(buf_331)))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj115=come_value_330->type;
    come_value_330->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_330->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_330));
    add_come_last_code(info,"%s",come_value_330->c_value);
    __result247__ = (_Bool)1;
    source_329 = come_decrement_ref_count2(source_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_330,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_331,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result247__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_336;
int i_337;
struct sNode* __result243__;
struct sNode* default_value_338;
struct sNode* __result244__;
default_value_338 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_336=self->head;
    i_337=0;
    while(it_336!=((void*)0)) {
        if(        position==i_337) {
            __result243__ = gComeFunResultObject = __result_obj__ = it_336->item;
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
        it_336=it_336->next;
        i_337++;
    }
    memset(&default_value_338,0,sizeof(struct sNode*));
    __result244__ = gComeFunResultObject = __result_obj__ = default_value_338;
    if(default_value_338) { default_value_338 = come_decrement_ref_count2(default_value_338, ((struct sNode*)default_value_338)->finalize, ((struct sNode*)default_value_338)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value324 = (void*)0;
struct list_item$1CVALUEph* litem_341;
struct CVALUE* __dec_obj116;
void* __right_value325 = (void*)0;
struct list_item$1CVALUEph* litem_342;
struct CVALUE* __dec_obj117;
void* __right_value326 = (void*)0;
struct list_item$1CVALUEph* litem_343;
struct CVALUE* __dec_obj118;
struct list$1CVALUEph* __result246__;
    if(    self->len==0) {
        litem_341=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value324=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_341->prev=((void*)0);
        litem_341->next=((void*)0);
        __dec_obj116=litem_341->item;
        litem_341->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_341;
        self->head=litem_341;
    }
    else if(    self->len==1) {
        litem_342=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value325=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_342->prev=self->head;
        litem_342->next=((void*)0);
        __dec_obj117=litem_342->item;
        litem_342->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_342;
        self->head->next=litem_342;
    }
    else {
        litem_343=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value326=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_343->prev=self->tail;
        litem_343->next=((void*)0);
        __dec_obj118=litem_343->item;
        litem_343->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_343;
        self->tail=litem_343;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct sCurrentNode2* __result248__;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value327,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* __result249__;
    __result249__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string(self->sname)));
    __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value329 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=__builtin_string("sCurrentNode")));
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value330 = (void*)0;
char* class_name_344;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sClass* current_stack_345;
struct sVarTable* vtable_346;
struct map$2charphsVarph* o2_saved_347;
char* it_350;
char* key_353;
void* __right_value333 = (void*)0;
struct sVar* value_354;
void* __right_value334 = (void*)0;
struct sType* type2_358;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct tuple2$2charphsTypeph* item_359;
void* __right_value338 = (void*)0;
struct sType* type3_360;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct tuple2$2charphsTypeph* item2_363;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct map$2charphsVarph* o2_saved_415;
char* it_416;
char* key_417;
void* __right_value355 = (void*)0;
struct sVar* value_418;
void* __right_value356 = (void*)0;
struct sType* type2_419;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct tuple2$2charphsTypeph* item_420;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_421;
void* __right_value361 = (void*)0;
char* __dec_obj143;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __dec_obj144;
_Bool __result287__;
    info->current_stack_num++;
    class_name_344=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_345=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 457, "sClass")),class_name_344,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_346=info->lv_table;
    while(vtable_346) {
        for(        o2_saved_347=(struct map$2charphsVarph*)come_increment_ref_count((vtable_346->mVars)),it_350=map$2charphsVarph_begin((o2_saved_347));        !map$2charphsVarph_end((o2_saved_347));        it_350=map$2charphsVarph_next((o2_saved_347))        ){
            key_353=it_350;
            value_354=((struct sVar*)come_null_check(((struct sVar*)(__right_value333=map$2charphsVarphp_operator_load_element(vtable_346->mVars,key_353))), "./common.h", 464, 1));
            come_call_finalizer3(__right_value333,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_358=(struct sType*)come_increment_ref_count(sType_clone(value_354->mType));
            type2_358->mPointerNum++;
            item_359=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 470, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_354->mCValueName)),(struct sType*)come_increment_ref_count(type2_358)));
            if(            value_354->mCValueName!=((void*)0)) {
                if(                strcmp(value_354->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_354->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_354->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_354->mType->mClass->mName,"va_list")||string_operator_equals(value_354->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_358->mArrayNum)==1) {
                    type3_360=(struct sType*)come_increment_ref_count(sType_clone(type2_358));
                    list$1sNodeph_reset(type3_360->mArrayNum);
                    type3_360->mPointerNum=1;
                    type3_360->mOriginIsArray=(_Bool)1;
                    item2_363=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 490, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_354->mCValueName)),(struct sType*)come_increment_ref_count(type3_360)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_345->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_363)));
                    value_354->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_360,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_363,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_345->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_359)));
                }
            }
            come_call_finalizer3(type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_359,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_347,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_346=vtable_346->mParent;
    }
    output_struct(current_stack_345,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_344),(struct sClass*)come_increment_ref_count(current_stack_345));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_344,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_344);
    vtable_346=info->lv_table;
    while(vtable_346) {
        for(        o2_saved_415=(struct map$2charphsVarph*)come_increment_ref_count((vtable_346->mVars)),it_416=map$2charphsVarph_begin((o2_saved_415));        !map$2charphsVarph_end((o2_saved_415));        it_416=map$2charphsVarph_next((o2_saved_415))        ){
            key_417=it_416;
            value_418=((struct sVar*)come_null_check(((struct sVar*)(__right_value355=map$2charphsVarphp_operator_load_element(vtable_346->mVars,key_417))), "./common.h", 515, 2));
            come_call_finalizer3(__right_value355,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_419=(struct sType*)come_increment_ref_count(sType_clone(value_418->mType));
            item_420=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 519, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_418->mCValueName),(struct sType*)come_increment_ref_count(type2_419)));
            if(            value_418->mCValueName!=((void*)0)) {
                if(                strcmp(value_418->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_418->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_418->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_418->mType->mClass->mName,"va_list")||string_operator_equals(value_418->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_419->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_418->mCValueName,value_418->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_418->mCValueName,value_418->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_419,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_420,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_415,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_346=vtable_346->mParent;
    }
    come_value_421=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 548, "CVALUE"))));
    __dec_obj143=come_value_421->c_value;
    come_value_421->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=come_value_421->type;
    come_value_421->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 551, "sType")),class_name_344,(_Bool)0,info));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_421->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_421->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_421));
    __result287__ = (_Bool)1;
    class_name_344 = come_decrement_ref_count2(class_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_345,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_348;
char* __result251__;
char* __result252__;
char* result_349;
char* __result253__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_348,0,sizeof(char*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_349,0,sizeof(char*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_351;
char* __result254__;
char* __result255__;
char* result_352;
char* __result256__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_351,0,sizeof(char*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_352,0,sizeof(char*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_355;
unsigned int hash_356;
unsigned int it_357;
struct sVar* __result257__;
struct sVar* __result258__;
struct sVar* __result259__;
struct sVar* __result260__;
default_value_355 = (void*)0;
    memset(&default_value_355,0,sizeof(struct sVar*));
    hash_356=charp_get_hash_key(((char*)key))%self->size;
    it_357=hash_356;
    while((_Bool)1) {
        if(        self->item_existance[it_357]) {
            if(            charp_equals(self->keys[it_357],key)) {
                __result257__ = gComeFunResultObject = __result_obj__ = self->items[it_357];
                come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result257__;
            }
            it_357++;
            if(            it_357>=self->size) {
                it_357=0;
            }
            else if(            it_357==hash_356) {
                __result258__ = gComeFunResultObject = __result_obj__ = default_value_355;
                come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result258__;
            }
        }
        else {
            __result259__ = gComeFunResultObject = __result_obj__ = default_value_355;
            come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result259__;
        }
    }
    __result260__ = gComeFunResultObject = __result_obj__ = default_value_355;
    come_call_finalizer3(default_value_355,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj120;
struct sType* __dec_obj121;
struct tuple2$2charphsTypeph* __result261__;
    __dec_obj120=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_361;
struct list_item$1sNodeph* prev_it_362;
struct list$1sNodeph* __result262__;
    it_361=self->head;
    while(it_361!=((void*)0)) {
        prev_it_362=it_361;
        it_361=it_361->next;
        come_call_finalizer3(prev_it_362,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_364;
struct tuple2$2charphsTypeph* __dec_obj124;
void* __right_value343 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_365;
struct tuple2$2charphsTypeph* __dec_obj127;
void* __right_value344 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_366;
struct tuple2$2charphsTypeph* __dec_obj130;
struct list$1tuple2$2charphsTypephph* __result263__;
    if(    self->len==0) {
        litem_364=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value342=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsTypephph"))));
        litem_364->prev=((void*)0);
        litem_364->next=((void*)0);
        __dec_obj124=litem_364->item;
        litem_364->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_364;
        self->head=litem_364;
    }
    else if(    self->len==1) {
        litem_365=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value343=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsTypephph"))));
        litem_365->prev=self->head;
        litem_365->next=((void*)0);
        __dec_obj127=litem_365->item;
        litem_365->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_365;
        self->head->next=litem_365;
    }
    else {
        litem_366=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value344=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsTypephph"))));
        litem_366->prev=self->tail;
        litem_366->next=((void*)0);
        __dec_obj130=litem_366->item;
        litem_366->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj130,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_366;
        self->tail=litem_366;
    }
    self->len++;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj131;
struct sType* __dec_obj132;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj131=self->v1;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj132=self->v2;
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result264__;
void* __right_value345 = (void*)0;
struct tuple2$2charphsTypeph* result_367;
void* __right_value346 = (void*)0;
char* __dec_obj133;
void* __right_value347 = (void*)0;
struct sType* __dec_obj134;
struct tuple2$2charphsTypeph* __result265__;
    if(    self==(void*)0) {
        __result264__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_367=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj133=result_367->v1;
        result_367->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj134=result_367->v2;
        result_367->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_367;
    come_call_finalizer3(result_367,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj135;
struct sType* __dec_obj136;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj135=self->v1;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj136=self->v2;
            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_368;
int i_369;
    for(    i_368=0;    i_368<self->size;    i_368++    ){
        if(        self->item_existance[i_368]) {
            if(            1) {
                come_call_finalizer3(self->items[i_368],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_369=0;    i_369<self->size;    i_369++    ){
        if(        self->item_existance[i_369]) {
            if(            1) {
                self->keys[i_369] = come_decrement_ref_count2(self->keys[i_369], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_391;
unsigned int it_392;
_Bool same_key_exist_409;
char* it2_412;
struct map$2charphsClassph* __result286__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_391=charp_get_hash_key(key)%self->size;
    it_392=hash_391;
    while((_Bool)1) {
        if(        self->item_existance[it_392]) {
            if(            charp_equals(self->keys[it_392],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_392]);
                    self->keys[it_392] = come_decrement_ref_count2(self->keys[it_392], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_392]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_392]);
                    self->keys[it_392]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_392],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_392]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_392]=item;
                }
                break;
            }
            it_392++;
            if(            it_392>=self->size) {
                it_392=0;
            }
            else if(            it_392==hash_391) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_392]=(_Bool)1;
            if(            1) {
                self->keys[it_392]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_392]=key;
            }
            if(            1) {
                self->items[it_392]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_392]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_409=(_Bool)0;
    for(    it2_412=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_412=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_412,key)) {
            same_key_exist_409=(_Bool)1;
        }
    }
    if(    !same_key_exist_409) {
        list$1charp_push_back(self->key_list,key);
    }
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_370;
void* __right_value350 = (void*)0;
char** keys_371;
void* __right_value351 = (void*)0;
struct sClass** items_372;
void* __right_value352 = (void*)0;
_Bool* item_existance_373;
int len_374;
char* it_377;
struct sClass* default_value_380;
void* __right_value353 = (void*)0;
struct sClass* it2_381;
unsigned int hash_388;
int n_389;
struct sClass* default_value_390;
void* __right_value354 = (void*)0;
default_value_380 = (void*)0;
default_value_390 = (void*)0;
    size_370=self->size*10;
    keys_371=(char**)come_increment_ref_count(((char**)(__right_value350=(char**)come_calloc(1, sizeof(char*)*(1*(size_370)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_372=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value351=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_370)), "/usr/local/include/comelang.h", 2558, "sClass*%"))));
    item_existance_373=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value352=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_370)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_374=0;
    for(    it_377=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_377=map$2charphsClassph_next(self)    ){
        memset(&default_value_380,0,sizeof(struct sClass*));
        it2_381=((struct sClass*)(__right_value353=map$2charphsClassph_at(self,it_377,default_value_380)));
        come_call_finalizer3(__right_value353,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_388=charp_get_hash_key(it_377)%size_370;
        n_389=hash_388;
        while((_Bool)1) {
            if(            item_existance_373[n_389]) {
                n_389++;
                if(                n_389>=size_370) {
                    n_389=0;
                }
                else if(                n_389==hash_388) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_373[n_389]=(_Bool)1;
                keys_371[n_389]=it_377;
                items_372[n_389]=((struct sClass*)(__right_value354=map$2charphsClassph_at(self,it_377,default_value_390)));
                come_call_finalizer3(__right_value354,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_374++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_371;
    self->items=items_372;
    self->item_existance=item_existance_373;
    self->size=size_370;
    self->len=len_374;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_375;
char* __result266__;
char* __result267__;
char* result_376;
char* __result268__;
result_375 = (void*)0;
result_376 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_375,0,sizeof(char*));
        __result266__ = gComeFunResultObject = __result_obj__ = result_375;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result267__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    memset(&result_376,0,sizeof(char*));
    __result268__ = gComeFunResultObject = __result_obj__ = result_376;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_378;
char* __result269__;
char* __result270__;
char* result_379;
char* __result271__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_378,0,sizeof(char*));
        __result269__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result270__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    memset(&result_379,0,sizeof(char*));
    __result271__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_382;
unsigned int it_383;
struct sClass* __result272__;
struct sClass* __result273__;
struct sClass* __result274__;
struct sClass* __result275__;
    hash_382=charp_get_hash_key(((char*)key))%self->size;
    it_383=hash_382;
    while((_Bool)1) {
        if(        self->item_existance[it_383]) {
            if(            charp_equals(self->keys[it_383],key)) {
                __result272__ = gComeFunResultObject = __result_obj__ = self->items[it_383];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result272__;
            }
            it_383++;
            if(            it_383>=self->size) {
                it_383=0;
            }
            else if(            it_383==hash_382) {
                __result273__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result273__;
            }
        }
        else {
            __result274__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
    }
    __result275__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj137;
struct list$1tuple2$2charphsTypephph* __dec_obj138;
char* __dec_obj140;
char* __dec_obj141;
char* __dec_obj142;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj137=self->mName;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj138=self->mFields;
            come_call_finalizer3(__dec_obj138,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj140=self->mDeclareSName;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj141=self->mParentClassName;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj142=self->mAttribute;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_384;
struct list_item$1tuple2$2charphsTypephph* prev_it_385;
    it_384=self->head;
    while(it_384!=((void*)0)) {
        prev_it_385=it_384;
        it_384=it_384->next;
        come_call_finalizer3(prev_it_385,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj139;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj139=self->item;
            come_call_finalizer3(__dec_obj139,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_386;
struct list_item$1tuple2$2charphsTypephph* prev_it_387;
    it_386=self->head;
    while(it_386!=((void*)0)) {
        prev_it_387=it_386;
        it_386=it_386->next;
        come_call_finalizer3(prev_it_387,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_393;
struct list_item$1charp* it_394;
struct list$1charp* __result279__;
    it2_393=0;
    it_394=self->head;
    while(it_394!=((void*)0)) {
        if(        charp_equals(it_394->item,item)) {
            list$1charp_delete(self,it2_393,it2_393+1);
            break;
        }
        it2_393++;
        it_394=it_394->next;
    }
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_395;
struct list$1charp* __result276__;
struct list_item$1charp* it_398;
int i_399;
struct list_item$1charp* prev_it_400;
struct list_item$1charp* it_401;
int i_402;
struct list_item$1charp* prev_it_403;
struct list_item$1charp* it_404;
struct list_item$1charp* head_prev_it_405;
struct list_item$1charp* tail_it_406;
int i_407;
struct list_item$1charp* prev_it_408;
struct list$1charp* __result278__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_395=tail;
        tail=head;
        head=tmp_395;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result276__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_398=self->head;
        i_399=0;
        while(it_398!=((void*)0)) {
            if(            i_399<tail) {
                prev_it_400=it_398;
                it_398=it_398->next;
                i_399++;
                come_call_finalizer3(prev_it_400,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_399==tail) {
                self->head=it_398;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_398=it_398->next;
                i_399++;
            }
        }
    }
    else if(    tail==self->len) {
        it_401=self->head;
        i_402=0;
        while(it_401!=((void*)0)) {
            if(            i_402==head) {
                self->tail=it_401->prev;
                self->tail->next=((void*)0);
            }
            if(            i_402>=head) {
                prev_it_403=it_401;
                it_401=it_401->next;
                i_402++;
                come_call_finalizer3(prev_it_403,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_401=it_401->next;
                i_402++;
            }
        }
    }
    else {
        it_404=self->head;
        head_prev_it_405=((void*)0);
        tail_it_406=((void*)0);
        i_407=0;
        while(it_404!=((void*)0)) {
            if(            i_407==head) {
                head_prev_it_405=it_404->prev;
            }
            if(            i_407==tail) {
                tail_it_406=it_404;
            }
            if(            i_407>=head&&i_407<tail) {
                prev_it_408=it_404;
                it_404=it_404->next;
                i_407++;
                come_call_finalizer3(prev_it_408,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_404=it_404->next;
                i_407++;
            }
        }
        if(        head_prev_it_405!=((void*)0)) {
            head_prev_it_405->next=tail_it_406;
        }
        if(        tail_it_406!=((void*)0)) {
            tail_it_406->prev=head_prev_it_405;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_396;
struct list_item$1charp* prev_it_397;
struct list$1charp* __result277__;
    it_396=self->head;
    while(it_396!=((void*)0)) {
        prev_it_397=it_396;
        it_396=it_396->next;
        come_call_finalizer3(prev_it_397,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_410;
char* __result280__;
char* __result281__;
char* result_411;
char* __result282__;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_410,0,sizeof(char*));
        __result280__ = gComeFunResultObject = __result_obj__ = result_410;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    self->it=self->head;
    if(    self->it) {
        __result281__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    memset(&result_411,0,sizeof(char*));
    __result282__ = gComeFunResultObject = __result_obj__ = result_411;
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_413;
char* __result283__;
char* __result284__;
char* result_414;
char* __result285__;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_413,0,sizeof(char*));
        __result283__ = gComeFunResultObject = __result_obj__ = result_413;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result284__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    memset(&result_414,0,sizeof(char*));
    __result285__ = gComeFunResultObject = __result_obj__ = result_414;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
struct sLineNode* __result288__;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value364,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sLineNode")));
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value368 = (void*)0;
char* __dec_obj146;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __dec_obj147;
_Bool __result290__;
    come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "CVALUE"))));
    __dec_obj146=come_value_422->c_value;
    come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value_422->type;
    come_value_422->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_422->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
    add_come_last_code(info,"%s",come_value_422->c_value);
    __result290__ = (_Bool)1;
    come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
struct sSNameNode* __result291__;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value371,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sSNameNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value375 = (void*)0;
char* __dec_obj149;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* __dec_obj150;
_Bool __result293__;
    come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "CVALUE"))));
    __dec_obj149=come_value_423->c_value;
    come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj150=come_value_423->type;
    come_value_423->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_423->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
    add_come_last_code(info,"%s",come_value_423->c_value);
    __result293__ = (_Bool)1;
    come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
struct sFuncNode* __result294__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sFuncNode")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value382 = (void*)0;
char* __dec_obj152;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* __dec_obj153;
_Bool __result296__;
    come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "CVALUE"))));
    __dec_obj152=come_value_424->c_value;
    come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value_424->type;
    come_value_424->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_424->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
    add_come_last_code(info,"%s",come_value_424->c_value);
    __result296__ = (_Bool)1;
    come_call_finalizer3(come_value_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result296__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
struct sWildCard* __result297__;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value385,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
char* __result298__;
    __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=__builtin_string("sWildCard")));
    __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* value_node_425;
_Bool Value_426;
_Bool __result299__;
_Bool __result300__;
    value_node_425=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value387=xsprintf("Value"))),info));
    __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_426=node_compile(value_node_425,info);
    if(    !Value_426) {
        __result299__ = (_Bool)0;
        if(value_node_425) { value_node_425 = come_decrement_ref_count2(value_node_425, ((struct sNode*)value_node_425)->finalize, ((struct sNode*)value_node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result299__;
    }
    else {
    }
    __result300__ = (_Bool)1;
    if(value_node_425) { value_node_425 = come_decrement_ref_count2(value_node_425, ((struct sNode*)value_node_425)->finalize, ((struct sNode*)value_node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result300__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
struct sCallerFuncNode* __result301__;
    ((struct sNodeBase*)(__right_value389=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value389,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=__builtin_string("sCallerFuncNode")));
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_427;
void* __right_value393 = (void*)0;
char* __dec_obj156;
void* __right_value394 = (void*)0;
char* __dec_obj157;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* __dec_obj158;
_Bool __result303__;
    come_value_427=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj156=come_value_427->c_value;
        come_value_427->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj157=come_value_427->c_value;
        come_value_427->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj158=come_value_427->type;
    come_value_427->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_427->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_427));
    add_come_last_code(info,"%s",come_value_427->c_value);
    __result303__ = (_Bool)1;
    come_call_finalizer3(come_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result303__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
struct sCallerLineNode* __result304__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_428;
void* __right_value400 = (void*)0;
char* __dec_obj160;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __dec_obj161;
_Bool __result305__;
    come_value_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "CVALUE"))));
    __dec_obj160=come_value_428->c_value;
    come_value_428->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=come_value_428->type;
    come_value_428->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_428->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_428));
    add_come_last_code(info,"%s",come_value_428->c_value);
    __result305__ = (_Bool)1;
    come_call_finalizer3(come_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result305__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
char* __result306__;
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=__builtin_string("sCallerLineNode")));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
struct sCallerSNameNode* __result307__;
    ((struct sNodeBase*)(__right_value404=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value404,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct CVALUE* come_value_429;
void* __right_value407 = (void*)0;
char* __dec_obj163;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* __dec_obj164;
_Bool __result308__;
    come_value_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "CVALUE"))));
    __dec_obj163=come_value_429->c_value;
    come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj164=come_value_429->type;
    come_value_429->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_429->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_429));
    add_come_last_code(info,"%s",come_value_429->c_value);
    __result308__ = (_Bool)1;
    come_call_finalizer3(come_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result308__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value410=__builtin_string("sCallerSNameNode")));
    __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* fun_name3_431;
struct list$1sTypeph* method_generics_types_before_432;
struct list$1sTypeph* __dec_obj165;
void* __right_value412 = (void*)0;
struct sGenericsFun* generics_fun_433;
void* __right_value413 = (void*)0;
_Bool _if_conditional2;
void* __right_value414 = (void*)0;
char* __result314__;
struct list$1sTypeph* __dec_obj176;
char* __result315__;
    static int num_method_generics_430=0;
    fun_name3_431=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_430++));
    method_generics_types_before_432=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj165=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj165,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_433=((struct sGenericsFun*)(__right_value412=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value412,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_433) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_431)),generics_fun_433,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_431);
            __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value414=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_431 = come_decrement_ref_count2(fun_name3_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_432,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result314__;
        }
    }
    __dec_obj176=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_432);
    come_call_finalizer3(__dec_obj176,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result315__ = gComeFunResultObject = __result_obj__ = fun_name3_431;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_431 = come_decrement_ref_count2(fun_name3_431, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_432,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_434;
unsigned int it_435;
struct sGenericsFun* __result310__;
struct sGenericsFun* __result311__;
struct sGenericsFun* __result312__;
struct sGenericsFun* __result313__;
    hash_434=charp_get_hash_key(((char*)key))%self->size;
    it_435=hash_434;
    while((_Bool)1) {
        if(        self->item_existance[it_435]) {
            if(            charp_equals(self->keys[it_435],key)) {
                __result310__ = gComeFunResultObject = __result_obj__ = self->items[it_435];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result310__;
            }
            it_435++;
            if(            it_435>=self->size) {
                it_435=0;
            }
            else if(            it_435==hash_434) {
                __result311__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result311__;
            }
        }
        else {
            __result312__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result312__;
        }
    }
    __result313__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj166;
struct list$1charph* __dec_obj167;
struct list$1charph* __dec_obj168;
char* __dec_obj169;
struct sType* __dec_obj170;
struct list$1sTypeph* __dec_obj171;
struct list$1charph* __dec_obj172;
struct list$1charph* __dec_obj173;
char* __dec_obj174;
char* __dec_obj175;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj166=self->mImplType;
            come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj167=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj167,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj168=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj168,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj169=self->mName;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj170=self->mResultType;
            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj171=self->mParamTypes;
            come_call_finalizer3(__dec_obj171,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj172=self->mParamNames;
            come_call_finalizer3(__dec_obj172,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj173=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj173,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj174=self->mBlock;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj175=self->mGenericsSName;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* __dec_obj177;
void* __right_value426 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj194;
struct list$1sTypeph* __dec_obj195;
struct buffer* __dec_obj196;
struct sFunCallNode* __result322__;
    ((struct sNodeBase*)(__right_value415=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value415,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj177=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj194=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj194,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj195=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj195,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj196=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
char* __result323__;
    __result323__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value427=__builtin_string("sFunCallNode")));
    __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result323__;
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
char* fun_name_446;
struct list$1tuple2$2charphsNodephph* params_447;
struct buffer* method_block_448;
int method_block_sline_449;
struct sVar* var__450;
struct sType* lambda_type_451;
_Bool __result324__;
void* __right_value428 = (void*)0;
struct sType* result_type_452;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1CVALUEph* come_params_453;
_Bool __result326__;
int i_456;
struct list$1tuple2$2charphsNodephph* o2_saved_457;
struct tuple2$2charphsNodeph* it_460;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_463=0;
struct sNode* node_464=0;
_Bool Value_465;
_Bool __result333__;
void* __right_value431 = (void*)0;
struct CVALUE* come_value_466;
void* __right_value432 = (void*)0;
_Bool _if_conditional3;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
_Bool _if_conditional4;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct buffer* buf_470;
int j_471;
struct list$1CVALUEph* o2_saved_472;
struct CVALUE* it_475;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value443 = (void*)0;
char* __dec_obj203;
void* __right_value444 = (void*)0;
struct sType* __dec_obj204;
_Bool __result342__;
void* __right_value445 = (void*)0;
struct sGenericsFun* generics_fun_479;
_Bool method_generics_480;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1sTypeph* method_generics_types_481;
void* __right_value448 = (void*)0;
char* generics_fun_name_482;
void* __right_value449 = (void*)0;
struct sFun* fun_483;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1CVALUEph* come_params_486;
void* __right_value452 = (void*)0;
struct sFun* fun_487;
_Bool no_output_come_code_488;
_Bool __result347__;
void* __right_value453 = (void*)0;
struct CVALUE* method_block_node_489;
void* __right_value454 = (void*)0;
struct sType* method_block_lambda_type_493;
void* __right_value455 = (void*)0;
struct sType* method_block_result_type_494;
void* __right_value456 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_495;
struct sType* generics_fun_method_block_result_type_496;
int method_generics_num_497;
void* __right_value460 = (void*)0;
int n_506;
struct list$1sTypeph* o2_saved_507;
struct sType* it_510;
int method_generics_num_513;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1CVALUEph* come_params_514;
int i_515;
struct sType* result_type_516;
struct list$1tuple2$2charphsNodephph* o2_saved_517;
struct tuple2$2charphsNodeph* it_518;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_519=0;
struct sNode* node_520=0;
_Bool Value_521;
_Bool __result359__;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_522;
int method_generics_num_526;
void* __right_value469 = (void*)0;
int n_527;
struct list$1sTypeph* o2_saved_528;
struct sType* it_529;
int method_generics_num_530;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* __dec_obj229;
void* __right_value473 = (void*)0;
char* __dec_obj230;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct list$1CVALUEph* come_params_533;
struct list$1tuple2$2charphsNodephph* o2_saved_534;
struct tuple2$2charphsNodeph* it_535;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_536=0;
struct sNode* node_537=0;
_Bool Value_538;
_Bool __result362__;
void* __right_value476 = (void*)0;
struct CVALUE* come_value_539;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct buffer* buf_540;
int j_541;
struct list$1CVALUEph* o2_saved_542;
struct CVALUE* it_543;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct CVALUE* come_value_544;
void* __right_value481 = (void*)0;
char* __dec_obj231;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj232;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __dec_obj233;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj234;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj235;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj236;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj237;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj238;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj239;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj240;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj241;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj242;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj243;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj244;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj245;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj246;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj247;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj248;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj249;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj250;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj251;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj252;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj253;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj254;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj255;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj256;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj257;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj258;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj259;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* __dec_obj260;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj261;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj262;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* __dec_obj263;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj264;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj265;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj266;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj267;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* __dec_obj268;
_Bool __result363__;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1CVALUEph* come_params_545;
int i_546;
struct sType* result_type_547;
struct list$1tuple2$2charphsNodephph* o2_saved_548;
struct tuple2$2charphsNodeph* it_549;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_550=0;
struct sNode* node_551=0;
_Bool Value_552;
_Bool __result364__;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_553;
struct sType* __dec_obj269;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct buffer* buf_554;
int j_555;
struct list$1CVALUEph* o2_saved_556;
struct CVALUE* it_557;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct CVALUE* come_value_558;
void* __right_value563 = (void*)0;
char* __dec_obj270;
struct sType* __dec_obj271;
_Bool __result365__;
void* __right_value564 = (void*)0;
char* __dec_obj272;
void* __right_value565 = (void*)0;
char* __dec_obj273;
char* p_559;
int version_560;
char* p2_561;
int i_563;
void* __right_value566 = (void*)0;
char* new_fun_name_564;
void* __right_value567 = (void*)0;
_Bool _if_conditional5;
void* __right_value568 = (void*)0;
char* __dec_obj274;
void* __right_value569 = (void*)0;
char* new_fun_name_568;
void* __right_value570 = (void*)0;
_Bool _if_conditional6;
void* __right_value571 = (void*)0;
char* __dec_obj275;
_Bool __result370__;
int i_569;
void* __right_value572 = (void*)0;
char* new_fun_name_570;
void* __right_value573 = (void*)0;
_Bool _if_conditional7;
void* __right_value574 = (void*)0;
char* __dec_obj276;
void* __right_value575 = (void*)0;
struct sFun* fun_571;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct list$1CVALUEph* come_params_572;
int i_573;
struct sType* result_type_574;
struct list$1tuple2$2charphsNodephph* o2_saved_575;
struct tuple2$2charphsNodeph* it_576;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_577=0;
struct sNode* node_578=0;
_Bool Value_579;
_Bool __result371__;
void* __right_value578 = (void*)0;
struct CVALUE* come_value_580;
struct sType* __dec_obj277;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct buffer* buf_581;
int j_582;
struct list$1CVALUEph* o2_saved_583;
struct CVALUE* it_584;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct CVALUE* come_value_585;
void* __right_value583 = (void*)0;
char* __dec_obj278;
struct sType* __dec_obj279;
_Bool __result372__;
void* __right_value584 = (void*)0;
struct sType* result_type_586;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1sTypeph* param_types_587;
struct list$1sTypeph* o2_saved_588;
struct sType* it_589;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* it2_590;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sType* __dec_obj280;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct list$1CVALUEph* come_params_591;
int i_592;
struct list$1tuple2$2charphsNodephph* o2_saved_593;
struct tuple2$2charphsNodeph* it_594;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_595=0;
struct sNode* node_596=0;
_Bool Value_597;
_Bool __result373__;
void* __right_value593 = (void*)0;
struct CVALUE* come_value_598;
int n_599;
struct list$1charph* o2_saved_600;
char* it_603;
void* __right_value594 = (void*)0;
_Bool _if_conditional8;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
_Bool _if_conditional9;
void* __right_value601 = (void*)0;
int i_611;
struct list$1tuple2$2charphsNodephph* o2_saved_612;
struct tuple2$2charphsNodeph* it_613;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_614=0;
struct sNode* node_615=0;
_Bool Value_616;
_Bool __result382__;
void* __right_value602 = (void*)0;
struct CVALUE* come_value_617;
void* __right_value603 = (void*)0;
_Bool _if_conditional10;
_Bool Value_618;
_Bool __result383__;
void* __right_value604 = (void*)0;
struct CVALUE* come_value_619;
void* __right_value605 = (void*)0;
_Bool _if_conditional11;
void* __right_value606 = (void*)0;
_Bool _if_conditional12;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
_Bool _if_conditional13;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
_Bool _if_conditional14;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
char* default_param_620;
void* __right_value617 = (void*)0;
char* param_name_624;
void* __right_value618 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_625;
char* p_626;
char* head_627;
int sline_628;
void* __right_value619 = (void*)0;
struct buffer* __dec_obj282;
void* __right_value620 = (void*)0;
struct sNode* node_629;
_Bool Value_630;
_Bool __result386__;
struct buffer* __dec_obj283;
void* __right_value621 = (void*)0;
struct CVALUE* come_value_631;
void* __right_value622 = (void*)0;
_Bool _if_conditional16;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
_Bool _if_conditional17;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
_Bool _if_conditional18;
_Bool __result387__;
_Bool __result388__;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value635 = (void*)0;
struct sNode* current_stack_frame_node_632;
_Bool Value_634;
_Bool __result391__;
void* __right_value636 = (void*)0;
struct CVALUE* come_value_635;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct buffer* method_block2_636;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sType* method_block_type_637;
void* __right_value641 = (void*)0;
char* class_name_638;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sClass* current_stack_frame_struct_642;
void* __right_value644 = (void*)0;
_Bool __result396__;
void* __right_value645 = (void*)0;
struct sType* result_type_643;
void* __right_value646 = (void*)0;
struct list$1sTypeph* param_types_644;
struct list$1charph* param_names_645;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct buffer* all_alhabet_sname_646;
char* p_647;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sTypeph* o2_saved_648;
struct sType* it_649;
struct sType* param_type_650;
void* __right_value651 = (void*)0;
char* param_name_651;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* param_name_652;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* param_name_653;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct buffer* source3_654;
char* p_655;
char* head_656;
int sline_657;
struct buffer* __dec_obj286;
void* __right_value658 = (void*)0;
struct sNode* node_658;
_Bool Value_659;
_Bool __result397__;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
char* method_block_name_660;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* come_value2_661;
void* __right_value663 = (void*)0;
struct sFun* fun2_662;
_Bool __result398__;
struct sType* method_block_type2_663;
void* __right_value664 = (void*)0;
char* __dec_obj287;
void* __right_value665 = (void*)0;
struct sType* __dec_obj288;
struct buffer* __dec_obj289;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct buffer* buf_664;
int j_665;
struct list$1CVALUEph* o2_saved_666;
struct CVALUE* it_667;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct CVALUE* come_value_668;
void* __right_value670 = (void*)0;
char* __dec_obj290;
void* __right_value671 = (void*)0;
struct sType* __dec_obj291;
void* __right_value672 = (void*)0;
char* __dec_obj292;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
char* __dec_obj293;
_Bool __result399__;
memset(&i_563, 0, sizeof(int));
    fun_name_446=(char*)come_increment_ref_count(self->fun_name);
    params_447=self->params;
    method_block_448=self->method_block;
    method_block_sline_449=self->method_block_sline;
    var__450=get_variable_from_table(info->lv_table,fun_name_446);
    if(    var__450==((void*)0)) {
        var__450=get_variable_from_table(info->gv_table,fun_name_446);
    }
    if(    var__450) {
        lambda_type_451=var__450->mType;
        if(        string_operator_not_equals(lambda_type_451->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_446);
            __result324__ = (_Bool)0;
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result324__;
        }
        result_type_452=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_451->mResultType->v1));
        result_type_452->mStatic=(_Bool)0;
        come_params_453=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 542, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_451->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_447)&&!lambda_type_451->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_446,list$1sTypeph_length(lambda_type_451->mParamTypes),list$1tuple2$2charphsNodephph_length(params_447));
            __result326__ = (_Bool)0;
            come_call_finalizer3(result_type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_453,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result326__;
        }
        i_456=0;
        for(        o2_saved_457=(params_447),it_460=list$1tuple2$2charphsNodephph_begin((o2_saved_457));        !list$1tuple2$2charphsNodephph_end((o2_saved_457));        it_460=list$1tuple2$2charphsNodephph_next((o2_saved_457))        ){
            multiple_assign_var1=it_460;
            label_463=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_464=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_465=node_compile(node_464,info);
            if(            !Value_465) {
                __result333__ = (_Bool)0;
                label_463 = come_decrement_ref_count2(label_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_464) { node_464 = come_decrement_ref_count2(node_464, ((struct sNode*)node_464)->finalize, ((struct sNode*)node_464)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_453,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result333__;
            }
            else {
            }
            come_value_466=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_451->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value432=list$1sTypephp_operator_load_element(lambda_type_451->mParamTypes,i_456))), "05call.c", 558, 3))==((void*)0))),            come_call_finalizer3(__right_value432,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value435=xsprintf("\%s calling param #\%s",((char*)(__right_value433=string_to_string(fun_name_446))),((char*)(__right_value434=int_to_string(i_456)))))),((struct sType*)come_null_check(((struct sType*)(__right_value436=list$1sTypephp_operator_load_element(lambda_type_451->mParamTypes,i_456))), "05call.c", 561, 4)),come_value_466->type,come_value_466,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value436,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value437=list$1sTypephp_operator_load_element(lambda_type_451->mParamTypes,i_456))), "05call.c", 562, 5))->mHeap&&come_value_466->type->mHeap)),                come_call_finalizer3(__right_value437,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value438=list$1sTypephp_operator_load_element(lambda_type_451->mParamTypes,i_456))), "05call.c", 563, 6)),come_value_466->type,come_value_466,info,(_Bool)1);
                    come_call_finalizer3(__right_value438,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_453,(struct CVALUE*)come_increment_ref_count(come_value_466));
            dec_stack_ptr(1,info);
            i_456++;
            label_463 = come_decrement_ref_count2(label_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_464) { node_464 = come_decrement_ref_count2(node_464, ((struct sNode*)node_464)->finalize, ((struct sNode*)node_464)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_470=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 574, "buffer"))));
        buffer_append_str(buf_470,var__450->mCValueName);
        buffer_append_str(buf_470,"(");
        j_471=0;
        for(        o2_saved_472=(struct list$1CVALUEph*)come_increment_ref_count((come_params_453)),it_475=list$1CVALUEph_begin((o2_saved_472));        !list$1CVALUEph_end((o2_saved_472));        it_475=list$1CVALUEph_next((o2_saved_472))        ){
            buffer_append_str(buf_470,it_475->c_value);
            if(            j_471!=list$1CVALUEph_length(come_params_453)-1) {
                buffer_append_str(buf_470,",");
            }
            j_471++;
        }
        come_call_finalizer3(o2_saved_472,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_470,")");
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 591, "CVALUE"))));
        __dec_obj203=come_value_478->c_value;
        come_value_478->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_470));
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj204=come_value_478->type;
        come_value_478->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_452));
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_478->type->mStatic=(_Bool)0;
        come_value_478->var=((void*)0);
        if(        lambda_type_451->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_478,(struct sType*)come_increment_ref_count(lambda_type_451->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_478->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
        info->calling_fun=((void*)0);
        __result342__ = (_Bool)1;
        come_call_finalizer3(result_type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_453,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_470,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result342__;
        come_call_finalizer3(result_type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_453,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_470,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_479=((struct sGenericsFun*)(__right_value445=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_446,((void*)0))));
    come_call_finalizer3(__right_value445,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_480=(_Bool)0;
    if(    generics_fun_479) {
        method_generics_480=list$1charph_length(generics_fun_479->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sTypeph_length(self->method_generics_types)>0||method_generics_480) {
        if(        list$1sTypeph_length(self->method_generics_types)==0) {
            method_generics_types_481=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 616, "list$1sTypeph"))));
            generics_fun_name_482=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_446),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_481),info));
            fun_483=((struct sFun*)(__right_value449=map$2charphsFunph_at(info->funcs,generics_fun_name_482,((void*)0))));
            come_call_finalizer3(__right_value449,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_448) {
                come_params_486=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 622, "list$1CVALUEph"))));
                fun_487=((struct sFun*)(__right_value452=map$2charphsFunph_at(info->funcs,generics_fun_name_482,((void*)0))));
                come_call_finalizer3(__right_value452,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_488=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_448,(struct list$1CVALUEph*)come_increment_ref_count(come_params_486),fun_487,fun_name_446,method_block_sline_449,info,(_Bool)1)) {
                    __result347__ = (_Bool)0;
                    come_call_finalizer3(come_params_486,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_481,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_482 = come_decrement_ref_count2(generics_fun_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result347__;
                }
                info->no_output_come_code=no_output_come_code_488;
                method_block_node_489=((struct CVALUE*)(__right_value453=list$1CVALUEphp_operator_load_element(come_params_486,-1)));
                come_call_finalizer3(__right_value453,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_493=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_489->type));
                method_block_result_type_494=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_495=((struct sType*)(__right_value456=list$1sTypephp_operator_load_element(generics_fun_479->mParamTypes,-1)));
                come_call_finalizer3(__right_value456,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_496=generics_fun_method_block_lambda_type_495->mResultType->v1;
                if(                generics_fun_method_block_result_type_496->mClass->mMethodGenerics) {
                    method_generics_num_497=generics_fun_method_block_result_type_496->mClass->mMethodGenericsNum;
                    list$1sTypephp_operator_store_element(method_generics_types_481,method_generics_num_497,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_494)));
                }
                n_506=0;
                for(                o2_saved_507=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_495->mParamTypes)),it_510=list$1sTypeph_begin((o2_saved_507));                !list$1sTypeph_end((o2_saved_507));                it_510=list$1sTypeph_next((o2_saved_507))                ){
                    if(                    it_510->mClass->mMethodGenerics) {
                        method_generics_num_513=it_510->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_481,method_generics_num_513,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value461=list$1sTypephp_operator_load_element(method_block_lambda_type_493->mParamTypes,n_506))), "05call.c", 648, 7)))));
                        come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_506++;
                }
                come_call_finalizer3(o2_saved_507,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_486,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_493,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_514=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 654, "list$1CVALUEph"))));
            i_515=0;
            result_type_516=((void*)0);
            for(            o2_saved_517=(params_447),it_518=list$1tuple2$2charphsNodephph_begin((o2_saved_517));            !list$1tuple2$2charphsNodephph_end((o2_saved_517));            it_518=list$1tuple2$2charphsNodephph_next((o2_saved_517))            ){
                multiple_assign_var2=it_518;
                label_519=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_520=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                Value_521=node_compile(node_520,info);
                if(                !Value_521) {
                    __result359__ = (_Bool)0;
                    label_519 = come_decrement_ref_count2(label_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_520) { node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_481,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_482 = come_decrement_ref_count2(generics_fun_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_516,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result359__;
                }
                else {
                }
                come_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_514,(struct CVALUE*)come_increment_ref_count(come_value_522));
                label_519 = come_decrement_ref_count2(label_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_520) { node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_479->mResultType->mClass->mMethodGenerics) {
                method_generics_num_526=generics_fun_479->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sTypephp_operator_store_element(method_generics_types_481,method_generics_num_526,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                }
            }
            n_527=0;
            for(            o2_saved_528=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_479->mParamTypes)),it_529=list$1sTypeph_begin((o2_saved_528));            !list$1sTypeph_end((o2_saved_528));            it_529=list$1sTypeph_next((o2_saved_528))            ){
                if(                it_529->mClass->mMethodGenerics) {
                    method_generics_num_530=it_529->mClass->mMethodGenericsNum;
                    if(                    n_527<list$1CVALUEph_length(come_params_514)) {
                        list$1sTypephp_operator_store_element(method_generics_types_481,method_generics_num_530,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value470=list$1CVALUEphp_operator_load_element(come_params_514,n_527)))->type)));
                        come_call_finalizer3(__right_value470,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_527++;
            }
            come_call_finalizer3(o2_saved_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunph_remove(info->funcs,generics_fun_name_482);
            __dec_obj229=fun_name_446;
            fun_name_446=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_446),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_481),info));
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_481,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_482 = come_decrement_ref_count2(generics_fun_name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_516,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj230=fun_name_446;
            fun_name_446=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_446),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_446,"__builtin_memmove")||string_operator_equals(fun_name_446,"__builtin_memset")||string_operator_equals(fun_name_446,"__builtin_ffs")||string_operator_equals(fun_name_446,"__builtin_ffsl")||string_operator_equals(fun_name_446,"__builtin_ffsll")||string_operator_equals(fun_name_446,"__builtin_bswap16")||string_operator_equals(fun_name_446,"__builtin_bswap32")||string_operator_equals(fun_name_446,"__builtin_bswap64")||string_operator_equals(fun_name_446,"__builtin_constant_p")||string_operator_equals(fun_name_446,"__builtin_expect")||string_operator_equals(fun_name_446,"__builtin___memset_chk")||string_operator_equals(fun_name_446,"__builtin_object_size")||string_operator_equals(fun_name_446,"__builtin___memcpy_chk")||string_operator_equals(fun_name_446,"__builtin___strncpy_chk")||string_operator_equals(fun_name_446,"__builtin___strncat_chk")||string_operator_equals(fun_name_446,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_446,"__builtin_strrchr")||string_operator_equals(fun_name_446,"__builtin_clz")||string_operator_equals(fun_name_446,"__dsb")||string_operator_equals(fun_name_446,"__isb")||string_operator_equals(fun_name_446,"__dmb")||memcmp(fun_name_446,"__builtin_arm_",strlen("__builtin_arm_"))==0||string_operator_equals(fun_name_446,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_446,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_446,"__c11_atomic_store")||string_operator_equals(fun_name_446,"__c11_atomic_load")||string_operator_equals(fun_name_446,"__c11_atomic_exchange")||string_operator_equals(fun_name_446,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_446,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_446,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_446,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_446,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_446,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_446,"__c11_atomic_fetch_xor")) {
        come_params_533=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 726, "list$1CVALUEph"))));
        for(        o2_saved_534=(params_447),it_535=list$1tuple2$2charphsNodephph_begin((o2_saved_534));        !list$1tuple2$2charphsNodephph_end((o2_saved_534));        it_535=list$1tuple2$2charphsNodephph_next((o2_saved_534))        ){
            multiple_assign_var3=it_535;
            label_536=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_537=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            Value_538=node_compile(node_537,info);
            if(            !Value_538) {
                __result362__ = (_Bool)0;
                label_536 = come_decrement_ref_count2(label_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_537) { node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_533,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result362__;
            }
            else {
            }
            come_value_539=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(come_params_533,(struct CVALUE*)come_increment_ref_count(come_value_539));
            label_536 = come_decrement_ref_count2(label_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_537) { node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_540=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 740, "buffer"))));
        buffer_append_str(buf_540,fun_name_446);
        buffer_append_str(buf_540,"(");
        j_541=0;
        for(        o2_saved_542=(struct list$1CVALUEph*)come_increment_ref_count((come_params_533)),it_543=list$1CVALUEph_begin((o2_saved_542));        !list$1CVALUEph_end((o2_saved_542));        it_543=list$1CVALUEph_next((o2_saved_542))        ){
            buffer_append_str(buf_540,it_543->c_value);
            if(            j_541!=list$1CVALUEph_length(come_params_533)-1) {
                buffer_append_str(buf_540,",");
            }
            j_541++;
        }
        come_call_finalizer3(o2_saved_542,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_540,")");
        come_value_544=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 757, "CVALUE"))));
        __dec_obj231=come_value_544->c_value;
        come_value_544->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_540));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_446,"__builtin_memmove")||string_operator_equals(fun_name_446,"__builtin_memset")) {
            __dec_obj232=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_ffs")) {
            __dec_obj233=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_ffsl")) {
            __dec_obj234=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_ffsll")) {
            __dec_obj235=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_bswap16")) {
            __dec_obj236=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "sType")),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_bswap32")) {
            __dec_obj237=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_bswap64")) {
            __dec_obj238=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_constant_p")) {
            __dec_obj239=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_expect")) {
            __dec_obj240=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin___memset_chk")) {
            __dec_obj241=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_544->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_object_size")) {
            __dec_obj242=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin___memcpy_chk")) {
            __dec_obj243=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_544->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_446,"__builtin___strncpy_chk")) {
            __dec_obj244=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_544->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_446,"__builtin___strncat_chk")) {
            __dec_obj245=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_544->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_strrchr")) {
            __dec_obj246=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 807, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_544->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_446,"__builtin___vsnprintf_chk")) {
            __dec_obj247=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_clz")) {
            __dec_obj248=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_thread_fence")) {
            __dec_obj249=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 817, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_signal_fence")) {
            __dec_obj250=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_exchange")) {
            __dec_obj251=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value520=list$1CVALUEphp_operator_load_element(come_params_533,1))), "05call.c", 823, 8))->type));
            come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value520,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_exchange_strong")) {
            __dec_obj252=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value522=list$1CVALUEphp_operator_load_element(come_params_533,2))), "05call.c", 826, 9))->type));
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value522,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_exchange_weak")) {
            __dec_obj253=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value524=list$1CVALUEphp_operator_load_element(come_params_533,2))), "05call.c", 829, 10))->type));
            come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value524,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_store")) {
            __dec_obj254=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 832, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_load")) {
            __dec_obj255=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value528=list$1CVALUEphp_operator_load_element(come_params_533,0))), "05call.c", 835, 11))->type));
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value528,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_544->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_fetch_add")) {
            __dec_obj256=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value530=list$1CVALUEphp_operator_load_element(come_params_533,1))), "05call.c", 839, 12))->type));
            come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value530,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_fetch_sub")) {
            __dec_obj257=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value532=list$1CVALUEphp_operator_load_element(come_params_533,1))), "05call.c", 842, 13))->type));
            come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value532,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_fetch_and")) {
            __dec_obj258=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value534=list$1CVALUEphp_operator_load_element(come_params_533,1))), "05call.c", 845, 14))->type));
            come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value534,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_fetch_or")) {
            __dec_obj259=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value536=list$1CVALUEphp_operator_load_element(come_params_533,1))), "05call.c", 848, 15))->type));
            come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value536,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__c11_atomic_fetch_xor")) {
            __dec_obj260=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value538=list$1CVALUEphp_operator_load_element(come_params_533,1))), "05call.c", 851, 16))->type));
            come_call_finalizer3(__dec_obj260,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value538,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__dsb")) {
            __dec_obj261=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__isb")) {
            __dec_obj262=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__dmb")) {
            __dec_obj263=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_arm_cdp")) {
            __dec_obj264=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_arm_ldc")) {
            __dec_obj265=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 866, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_arm_stc")) {
            __dec_obj266=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 869, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_arm_stcl")) {
            __dec_obj267=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 872, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_446,"__builtin_arm_ldcl")) {
            __dec_obj268=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 875, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_544->var=((void*)0);
        add_come_last_code(info,"%s",come_value_544->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_544));
        __result363__ = (_Bool)1;
        come_call_finalizer3(come_params_533,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_540,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result363__;
        come_call_finalizer3(come_params_533,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_540,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_446,"__builtin_va_arg")) {
        come_params_545=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 887, "list$1CVALUEph"))));
        i_546=0;
        result_type_547=((void*)0);
        for(        o2_saved_548=(params_447),it_549=list$1tuple2$2charphsNodephph_begin((o2_saved_548));        !list$1tuple2$2charphsNodephph_end((o2_saved_548));        it_549=list$1tuple2$2charphsNodephph_next((o2_saved_548))        ){
            multiple_assign_var4=it_549;
            label_550=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_551=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_552=node_compile(node_551,info);
            if(            !Value_552) {
                __result364__ = (_Bool)0;
                label_550 = come_decrement_ref_count2(label_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result364__;
            }
            else {
            }
            come_value_553=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_545,(struct CVALUE*)come_increment_ref_count(come_value_553));
            __dec_obj269=result_type_547;
            result_type_547=(struct sType*)come_increment_ref_count(come_value_553->type);
            come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_550 = come_decrement_ref_count2(label_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_554=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 906, "buffer"))));
        buffer_append_str(buf_554,fun_name_446);
        buffer_append_str(buf_554,"(");
        j_555=0;
        for(        o2_saved_556=(struct list$1CVALUEph*)come_increment_ref_count((come_params_545)),it_557=list$1CVALUEph_begin((o2_saved_556));        !list$1CVALUEph_end((o2_saved_556));        it_557=list$1CVALUEph_next((o2_saved_556))        ){
            buffer_append_str(buf_554,it_557->c_value);
            if(            j_555!=list$1CVALUEph_length(come_params_545)-1) {
                buffer_append_str(buf_554,",");
            }
            j_555++;
        }
        come_call_finalizer3(o2_saved_556,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_554,")");
        come_value_558=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 923, "CVALUE"))));
        __dec_obj270=come_value_558->c_value;
        come_value_558->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_554));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj271=come_value_558->type;
        come_value_558->type=(struct sType*)come_increment_ref_count(result_type_547);
        come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_558->var=((void*)0);
        add_come_last_code(info,"%s",come_value_558->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_558));
        __result365__ = (_Bool)1;
        come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result365__;
        come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_446,"string")) {
        __dec_obj272=fun_name_446;
        fun_name_446=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_446,"wstring")) {
        __dec_obj273=fun_name_446;
        fun_name_446=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_446,"inherit")) {
        p_559=info->come_fun->mName;
        version_560=0;
        while(*p_559) {
            if(            *p_559==95&&*(p_559+1)==118&&xisdigit(*(p_559+2))) {
                p2_561=p_559+2;
                version_560=0;
                while(xisdigit(*p2_561)) {
                    version_560=version_560*10+(*p2_561-48);
                    p2_561++;
                }
                break;
            }
            else {
                p_559++;
            }
        }
        char real_fun_name_562[2048];
        memset(&real_fun_name_562, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_562,info->come_fun->mName,p_559-info->come_fun->mName);
        real_fun_name_562[p_559-info->come_fun->mName]=0;
        for(        i_563=version_560-1;        i_563>=1;        i_563--        ){
            new_fun_name_564=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_562,i_563));
            if(            (_if_conditional5=(((struct sFun*)(__right_value567=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_564))))),            come_call_finalizer3(__right_value567,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj274=fun_name_446;
                fun_name_446=(char*)come_increment_ref_count(__builtin_string(new_fun_name_564));
                __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_564 = come_decrement_ref_count2(new_fun_name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_564 = come_decrement_ref_count2(new_fun_name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_563==0) {
            new_fun_name_568=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_562));
            if(            (_if_conditional6=(((struct sFun*)(__right_value570=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_568))))),            come_call_finalizer3(__right_value570,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj275=fun_name_446;
                fun_name_446=(char*)come_increment_ref_count(__builtin_string(new_fun_name_568));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_446,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result370__ = (_Bool)0;
                new_fun_name_568 = come_decrement_ref_count2(new_fun_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result370__;
            }
            new_fun_name_568 = come_decrement_ref_count2(new_fun_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_569=128;        i_569>=1;        i_569--        ){
            new_fun_name_570=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_446,i_569));
            if(            (_if_conditional7=(((struct sFun*)(__right_value573=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_570))))),            come_call_finalizer3(__right_value573,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj276=fun_name_446;
                fun_name_446=(char*)come_increment_ref_count(__builtin_string(new_fun_name_570));
                __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_570 = come_decrement_ref_count2(new_fun_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_570 = come_decrement_ref_count2(new_fun_name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_571=((struct sFun*)(__right_value575=map$2charphsFunph_at(info->funcs,fun_name_446,((void*)0))));
    come_call_finalizer3(__right_value575,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_571==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_446);
        come_params_572=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1004, "list$1CVALUEph"))));
        i_573=0;
        result_type_574=((void*)0);
        for(        o2_saved_575=(params_447),it_576=list$1tuple2$2charphsNodephph_begin((o2_saved_575));        !list$1tuple2$2charphsNodephph_end((o2_saved_575));        it_576=list$1tuple2$2charphsNodephph_next((o2_saved_575))        ){
            multiple_assign_var5=it_576;
            label_577=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_578=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            Value_579=node_compile(node_578,info);
            if(            !Value_579) {
                __result371__ = (_Bool)0;
                label_577 = come_decrement_ref_count2(label_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_578) { node_578 = come_decrement_ref_count2(node_578, ((struct sNode*)node_578)->finalize, ((struct sNode*)node_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_572,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result371__;
            }
            else {
            }
            come_value_580=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_572,(struct CVALUE*)come_increment_ref_count(come_value_580));
            __dec_obj277=result_type_574;
            result_type_574=(struct sType*)come_increment_ref_count(come_value_580->type);
            come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_577 = come_decrement_ref_count2(label_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_578) { node_578 = come_decrement_ref_count2(node_578, ((struct sNode*)node_578)->finalize, ((struct sNode*)node_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_581=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1023, "buffer"))));
        buffer_append_str(buf_581,fun_name_446);
        buffer_append_str(buf_581,"(");
        j_582=0;
        for(        o2_saved_583=(struct list$1CVALUEph*)come_increment_ref_count((come_params_572)),it_584=list$1CVALUEph_begin((o2_saved_583));        !list$1CVALUEph_end((o2_saved_583));        it_584=list$1CVALUEph_next((o2_saved_583))        ){
            buffer_append_str(buf_581,it_584->c_value);
            if(            j_582!=list$1CVALUEph_length(come_params_572)-1) {
                buffer_append_str(buf_581,",");
            }
            j_582++;
        }
        come_call_finalizer3(o2_saved_583,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_581,")");
        come_value_585=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1040, "CVALUE"))));
        __dec_obj278=come_value_585->c_value;
        come_value_585->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_581));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj279=come_value_585->type;
        come_value_585->type=(struct sType*)come_increment_ref_count(result_type_574);
        come_call_finalizer3(__dec_obj279,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_585->var=((void*)0);
        add_come_last_code(info,"%s",come_value_585->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_585));
        __result372__ = (_Bool)1;
        come_call_finalizer3(come_params_572,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_581,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_585,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result372__;
        come_call_finalizer3(come_params_572,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_574,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_581,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_585,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_586=(struct sType*)come_increment_ref_count(sType_clone(fun_571->mResultType));
    result_type_586->mStatic=(_Bool)0;
    param_types_587=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1055, "list$1sTypeph"))));
    for(    o2_saved_588=(struct list$1sTypeph*)come_increment_ref_count((fun_571->mParamTypes)),it_589=list$1sTypeph_begin((o2_saved_588));    !list$1sTypeph_end((o2_saved_588));    it_589=list$1sTypeph_next((o2_saved_588))    ){
        it2_590=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value587=sType_clone(it_589))),info->generics_type,info));
        come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(param_types_587,(struct sType*)come_increment_ref_count(sType_clone(it2_590)));
        come_call_finalizer3(it2_590,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_588,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj280=result_type_586;
    result_type_586=(struct sType*)come_increment_ref_count(solve_generics(result_type_586,info->generics_type,info));
    come_call_finalizer3(__dec_obj280,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_591=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1063, "list$1CVALUEph"))));
    for(    i_592=0;    i_592<list$1sTypeph_length(fun_571->mParamTypes)-(((method_block_448)?(2):(0)));    i_592++    ){
        list$1CVALUEph_add(come_params_591,((void*)0));
    }
    for(    o2_saved_593=(params_447),it_594=list$1tuple2$2charphsNodephph_begin((o2_saved_593));    !list$1tuple2$2charphsNodephph_end((o2_saved_593));    it_594=list$1tuple2$2charphsNodephph_next((o2_saved_593))    ){
        multiple_assign_var6=it_594;
        label_595=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_596=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        fun_571->mVarArgs||string_operator_equals(fun_name_446,"__builtin_va_start")) {
        }
        else if(        label_595) {
            Value_597=node_compile(node_596,info);
            if(            !Value_597) {
                __result373__ = (_Bool)0;
                label_595 = come_decrement_ref_count2(label_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result373__;
            }
            else {
            }
            come_value_598=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_599=0;
            for(            o2_saved_600=(struct list$1charph*)come_increment_ref_count((fun_571->mParamNames)),it_603=list$1charph_begin((o2_saved_600));            !list$1charph_end((o2_saved_600));            it_603=list$1charph_next((o2_saved_600))            ){
                if(                string_operator_equals(label_595,it_603)) {
                    break;
                }
                n_599++;
            }
            come_call_finalizer3(o2_saved_600,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional8=(((struct sType*)(__right_value594=list$1sTypephp_operator_load_element(param_types_587,n_599))))),            come_call_finalizer3(__right_value594,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                check_assign_type(((char*)(__right_value597=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value595=string_to_string(fun_name_446))),((char*)(__right_value596=int_to_string(n_599)))))),((struct sType*)come_null_check(((struct sType*)(__right_value598=list$1sTypephp_operator_load_element(param_types_587,n_599))), "05call.c", 1092, 17)),come_value_598->type,come_value_598,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value598,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional9=(((struct sType*)(__right_value599=list$1sTypephp_operator_load_element(param_types_587,n_599)))&&((struct sType*)come_null_check(((struct sType*)(__right_value600=list$1sTypephp_operator_load_element(param_types_587,n_599))), "05call.c", 1094, 18))->mHeap&&come_value_598->type->mHeap)),            come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value600,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value601=list$1sTypephp_operator_load_element(param_types_587,n_599))), "05call.c", 1095, 19)),come_value_598->type,come_value_598,info,(_Bool)1);
                come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_591,n_599,(struct CVALUE*)come_increment_ref_count(come_value_598));
            come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_595 = come_decrement_ref_count2(label_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_611=0;
    for(    o2_saved_612=(params_447),it_613=list$1tuple2$2charphsNodephph_begin((o2_saved_612));    !list$1tuple2$2charphsNodephph_end((o2_saved_612));    it_613=list$1tuple2$2charphsNodephph_next((o2_saved_612))    ){
        multiple_assign_var7=it_613;
        label_614=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_615=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        fun_571->mVarArgs||string_operator_equals(fun_name_446,"__builtin_va_start")) {
            Value_616=node_compile(node_615,info);
            if(            !Value_616) {
                __result382__ = (_Bool)0;
                label_614 = come_decrement_ref_count2(label_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_615) { node_615 = come_decrement_ref_count2(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result382__;
            }
            else {
            }
            come_value_617=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value603=list$1CVALUEphp_operator_load_element(come_params_591,i_611)))==((void*)0))),                come_call_finalizer3(__right_value603,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_611++;
                }
            }
            list$1CVALUEph_replace(come_params_591,i_611,(struct CVALUE*)come_increment_ref_count(come_value_617));
            i_611++;
            come_call_finalizer3(come_value_617,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_614) {
        }
        else {
            Value_618=node_compile(node_615,info);
            if(            !Value_618) {
                __result383__ = (_Bool)0;
                label_614 = come_decrement_ref_count2(label_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_615) { node_615 = come_decrement_ref_count2(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result383__;
            }
            else {
            }
            come_value_619=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional11=(((struct CVALUE*)(__right_value605=list$1CVALUEphp_operator_load_element(come_params_591,i_611)))==((void*)0))),                come_call_finalizer3(__right_value605,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    break;
                }
                else {
                    i_611++;
                }
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value606=list$1sTypephp_operator_load_element(param_types_587,i_611))))),            come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                check_assign_type(((char*)(__right_value609=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value607=string_to_string(fun_name_446))),((char*)(__right_value608=int_to_string(i_611)))))),((struct sType*)come_null_check(((struct sType*)(__right_value610=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1146, 20)),come_value_619->type,come_value_619,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value610,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional13=(((struct sType*)(__right_value611=list$1sTypephp_operator_load_element(param_types_587,i_611)))&&((struct sType*)come_null_check(((struct sType*)(__right_value612=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1148, 21))->mHeap&&come_value_619->type->mHeap)),            come_call_finalizer3(__right_value611,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value613=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1149, 22)),come_value_619->type,come_value_619,info,(_Bool)1);
                come_call_finalizer3(__right_value613,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_591,i_611,(struct CVALUE*)come_increment_ref_count(come_value_619));
            i_611++;
            come_call_finalizer3(come_value_619,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_614 = come_decrement_ref_count2(label_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_615) { node_615 = come_decrement_ref_count2(node_615, ((struct sNode*)node_615)->finalize, ((struct sNode*)node_615)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional14=(((struct CVALUE*)(__right_value614=list$1CVALUEphp_operator_load_element(come_params_591,i_611)))==((void*)0))),        come_call_finalizer3(__right_value614,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            break;
        }
        else {
            i_611++;
        }
    }
    if(    list$1tuple2$2charphsNodephph_length(params_447)<list$1sTypeph_length(fun_571->mParamTypes)) {
        for(        ;        i_611<list$1sTypeph_length(fun_571->mParamTypes)-(((method_block_448)?(2):(0)));        i_611++        ){
            default_param_620=(char*)come_increment_ref_count(string_clone(((char*)(__right_value615=list$1charphp_operator_load_element(fun_571->mParamDefaultParametors,i_611)))));
            __right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_624=((char*)come_null_check(((char*)(__right_value617=list$1charphp_operator_load_element(fun_571->mParamNames,i_611))), "05call.c", 1170, 23));
            __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional15=(default_param_620&&string_operator_not_equals(default_param_620,"")&&((struct CVALUE*)(__right_value618=list$1CVALUEphp_operator_load_element(come_params_591,i_611)))==((void*)0))),            come_call_finalizer3(__right_value618,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                source_625=(struct buffer*)come_increment_ref_count(info->source);
                p_626=info->p;
                head_627=info->head;
                sline_628=info->sline;
                __dec_obj282=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_620));
                come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_630=node_compile(node_629,info);
                if(                !Value_630) {
                    __result386__ = (_Bool)0;
                    come_call_finalizer3(source_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_620 = come_decrement_ref_count2(default_param_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result386__;
                }
                else {
                }
                __dec_obj283=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_625);
                come_call_finalizer3(__dec_obj283,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_626;
                info->head=head_627;
                info->sline=sline_628;
                come_value_631=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value622=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1194, 24)))),                come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    check_assign_type(((char*)(__right_value625=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value623=string_to_string(fun_name_446))),((char*)(__right_value624=int_to_string(i_611)))))),((struct sType*)come_null_check(((struct sType*)(__right_value626=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1195, 25)),come_value_631->type,come_value_631,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value626,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value627=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1197, 26))&&((struct sType*)come_null_check(((struct sType*)(__right_value628=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1197, 27))->mHeap&&come_value_631->type->mHeap)),                come_call_finalizer3(__right_value627,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value628,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value629=list$1sTypephp_operator_load_element(param_types_587,i_611))), "05call.c", 1198, 28)),come_value_631->type,come_value_631,info,(_Bool)1);
                    come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_591,i_611,(struct CVALUE*)come_increment_ref_count(come_value_631));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_629) { node_629 = come_decrement_ref_count2(node_629, ((struct sNode*)node_629)->finalize, ((struct sNode*)node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_631,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional18=(((struct CVALUE*)(__right_value630=list$1CVALUEphp_operator_load_element(come_params_591,i_611)))==((void*)0))),                come_call_finalizer3(__right_value630,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_571->mName,i_611);
                    __result387__ = (_Bool)0;
                    default_param_620 = come_decrement_ref_count2(default_param_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result387__;
                }
            }
            default_param_620 = come_decrement_ref_count2(default_param_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypeph_length(fun_571->mParamTypes)-(((method_block_448)?(2):(0)))!=list$1CVALUEph_length(come_params_591)&&!fun_571->mVarArgs&&string_operator_not_equals(fun_name_446,"__builtin_va_start")&&string_operator_not_equals(fun_name_446,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_446,list$1sTypeph_length(fun_571->mParamTypes),list$1tuple2$2charphsNodephph_length(params_447));
        __result388__ = (_Bool)0;
        fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result388__;
    }
    if(    method_block_448) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1219, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value632=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1219, "sCurrentNode2")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_632=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value632,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_634=node_compile(current_stack_frame_node_632,info);
        if(        !Value_634) {
            __result391__ = (_Bool)0;
            if(current_stack_frame_node_632) { current_stack_frame_node_632 = come_decrement_ref_count2(current_stack_frame_node_632, ((struct sNode*)current_stack_frame_node_632)->finalize, ((struct sNode*)current_stack_frame_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result391__;
        }
        else {
        }
        come_value_635=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEph_push_back(come_params_591,(struct CVALUE*)come_increment_ref_count(come_value_635));
        dec_stack_ptr(1,info);
        method_block2_636=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1229, "buffer"))));
        method_block_type_637=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value639=list$1sTypephp_operator_load_element(fun_571->mParamTypes,-1))), "05call.c", 1230, 29))));
        come_call_finalizer3(__right_value639,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_638=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)come_null_check(((struct sType*)(__right_value642=list$1sTypephp_operator_load_element(method_block_type_637->mParamTypes,0))), "05call.c", 1234, 30))->mClass=((struct sClass*)(__right_value643=map$2charphsClassphp_operator_load_element(info->classes,class_name_638)));
        come_call_finalizer3(__right_value642,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value643,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_642=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value644=map$2charphsClassphp_operator_load_element(info->classes,class_name_638)));
        come_call_finalizer3(__right_value644,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_637->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_446);
            __result396__ = (_Bool)0;
            if(current_stack_frame_node_632) { current_stack_frame_node_632 = come_decrement_ref_count2(current_stack_frame_node_632, ((struct sNode*)current_stack_frame_node_632)->finalize, ((struct sNode*)current_stack_frame_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_638 = come_decrement_ref_count2(class_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result396__;
        }
        result_type_643=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_637->mResultType->v1));
        result_type_643->mStatic=(_Bool)0;
        param_types_644=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_637->mParamTypes));
        param_names_645=method_block_type_637->mParamNames;
        all_alhabet_sname_646=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1250, "buffer"))));
        {
            p_647=info->sname;
            while(*p_647) {
                if(                xisalnum(*p_647)) {
                    buffer_append_char(all_alhabet_sname_646,*p_647++);
                }
                else {
                    p_647++;
                }
            }
        }
        buffer_append_format(method_block2_636,"%s fun_block%d_%s(",((char*)(__right_value649=make_type_name_string(result_type_643,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value650=buffer_to_string(all_alhabet_sname_646))));
        __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_611=0;
        for(        o2_saved_648=(struct list$1sTypeph*)come_increment_ref_count((param_types_644)),it_649=list$1sTypeph_begin((o2_saved_648));        !list$1sTypeph_end((o2_saved_648));        it_649=list$1sTypeph_next((o2_saved_648))        ){
            param_type_650=it_649;
            if(            i_611==0) {
                param_name_651=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_636,"%s",((char*)(__right_value652=make_define_var(param_type_650,param_name_651,(_Bool)0,info))));
                __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_651 = come_decrement_ref_count2(param_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_611==1) {
                param_name_652=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_636,"%s",((char*)(__right_value654=make_define_var_no_solved(param_type_650,param_name_652,(_Bool)0,(_Bool)1,info))));
                __right_value654 = come_decrement_ref_count2(__right_value654, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_652 = come_decrement_ref_count2(param_name_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_653=(char*)come_increment_ref_count(xsprintf("it%d",i_611));
                buffer_append_format(method_block2_636,"%s",((char*)(__right_value656=make_define_var_no_solved(param_type_650,param_name_653,(_Bool)0,(_Bool)1,info))));
                __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_653 = come_decrement_ref_count2(param_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_611!=list$1sTypeph_length(param_types_644)-1) {
                buffer_append_str(method_block2_636,",");
            }
            i_611++;
        }
        come_call_finalizer3(o2_saved_648,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_636,")\n");
        buffer_append_str(method_block2_636,((char*)(__right_value657=buffer_to_string(method_block_448))));
        __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_654=(struct buffer*)come_increment_ref_count(info->source);
        p_655=info->p;
        head_656=info->head;
        sline_657=info->sline;
        __dec_obj286=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_636);
        come_call_finalizer3(__dec_obj286,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_449;
        node_658=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_659=node_compile(node_658,info);
        if(        !Value_659) {
            __result397__ = (_Bool)0;
            if(current_stack_frame_node_632) { current_stack_frame_node_632 = come_decrement_ref_count2(current_stack_frame_node_632, ((struct sNode*)current_stack_frame_node_632)->finalize, ((struct sNode*)current_stack_frame_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_638 = come_decrement_ref_count2(class_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_644,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_658) { node_658 = come_decrement_ref_count2(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result397__;
        }
        else {
        }
        method_block_name_660=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value659=buffer_to_string(all_alhabet_sname_646)))));
        __right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_661=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1315, "CVALUE"))));
        fun2_662=((struct sFun*)(__right_value663=map$2charphsFunph_at(info->funcs,method_block_name_660,((void*)0))));
        come_call_finalizer3(__right_value663,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_662==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_660);
            __result398__ = (_Bool)1;
            if(current_stack_frame_node_632) { current_stack_frame_node_632 = come_decrement_ref_count2(current_stack_frame_node_632, ((struct sNode*)current_stack_frame_node_632)->finalize, ((struct sNode*)current_stack_frame_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_638 = come_decrement_ref_count2(class_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_644,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_658) { node_658 = come_decrement_ref_count2(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_660 = come_decrement_ref_count2(method_block_name_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_661,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result398__;
        }
        method_block_type2_663=fun2_662->mLambdaType;
        __dec_obj287=come_value2_661->c_value;
        come_value2_661->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_660));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj288=come_value2_661->type;
        come_value2_661->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_663));
        come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_661->var=((void*)0);
        list$1CVALUEph_push_back(come_params_591,(struct CVALUE*)come_increment_ref_count(come_value2_661));
        __dec_obj289=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_654);
        come_call_finalizer3(__dec_obj289,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_655;
        info->head=head_656;
        info->sline=sline_657;
        info->current_stack_frame_struct=current_stack_frame_struct_642;
        if(current_stack_frame_node_632) { current_stack_frame_node_632 = come_decrement_ref_count2(current_stack_frame_node_632, ((struct sNode*)current_stack_frame_node_632)->finalize, ((struct sNode*)current_stack_frame_node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_636,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_638 = come_decrement_ref_count2(class_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_644,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_646,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_658) { node_658 = come_decrement_ref_count2(node_658, ((struct sNode*)node_658)->finalize, ((struct sNode*)node_658)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_660 = come_decrement_ref_count2(method_block_name_660, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_661,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_664=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1340, "buffer"))));
    buffer_append_str(buf_664,fun_name_446);
    buffer_append_str(buf_664,"(");
    j_665=0;
    for(    o2_saved_666=(struct list$1CVALUEph*)come_increment_ref_count((come_params_591)),it_667=list$1CVALUEph_begin((o2_saved_666));    !list$1CVALUEph_end((o2_saved_666));    it_667=list$1CVALUEph_next((o2_saved_666))    ){
        buffer_append_str(buf_664,it_667->c_value);
        if(        j_665!=list$1CVALUEph_length(come_params_591)-1) {
            buffer_append_str(buf_664,",");
        }
        j_665++;
    }
    come_call_finalizer3(o2_saved_666,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_664,")");
    come_value_668=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1357, "CVALUE"))));
    __dec_obj290=come_value_668->c_value;
    come_value_668->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_664));
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=come_value_668->type;
    come_value_668->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_586));
    come_call_finalizer3(__dec_obj291,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_668->type->mStatic=(_Bool)0;
    come_value_668->var=((void*)0);
    if(    fun_571->mResultType->mHeap) {
        append_object_to_right_values2(come_value_668,(struct sType*)come_increment_ref_count(result_type_586),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_446,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_446,"null_check")&&string_operator_not_equals(fun_name_446,"come_push_stackframe")&&string_operator_not_equals(fun_name_446,"come_pop_stackframe")) {
            __dec_obj292=come_value_668->c_value;
            come_value_668->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_668->c_value,come_value_668->type,info));
            __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_586->mGuardValue&&result_type_586->mPointerNum>0) {
        __dec_obj293=come_value_668->c_value;
        come_value_668->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value673=make_type_name_string(result_type_586,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_668->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_668->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_668));
    info->calling_fun=fun_571;
    __result399__ = (_Bool)1;
    fun_name_446 = come_decrement_ref_count2(fun_name_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_664,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_668,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result399__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result316__;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_438;
struct list_item$1tuple2$2charphsNodephph* it_439;
void* __right_value425 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result321__;
    if(    self==((void*)0)) {
        __result316__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_438=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple2$2charphsNodephph"))));
    it_439=self->head;
    while(it_439!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_438,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_439->item)));
        it_439=it_439->next;
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_438;
    come_call_finalizer3(result_438,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result317__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_436;
struct list_item$1tuple2$2charphsNodephph* prev_it_437;
    it_436=self->head;
    while(it_436!=((void*)0)) {
        prev_it_437=it_436;
        it_436=it_436->next;
        come_call_finalizer3(prev_it_437,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj178;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj178=self->item;
            come_call_finalizer3(__dec_obj178,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_440;
struct tuple2$2charphsNodeph* __dec_obj181;
void* __right_value420 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_441;
struct tuple2$2charphsNodeph* __dec_obj184;
void* __right_value421 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_442;
struct tuple2$2charphsNodeph* __dec_obj187;
struct list$1tuple2$2charphsNodephph* __result318__;
    if(    self->len==0) {
        litem_440=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value419=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2charphsNodephph"))));
        litem_440->prev=((void*)0);
        litem_440->next=((void*)0);
        __dec_obj181=litem_440->item;
        litem_440->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_440;
        self->head=litem_440;
    }
    else if(    self->len==1) {
        litem_441=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value420=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2charphsNodephph"))));
        litem_441->prev=self->head;
        litem_441->next=((void*)0);
        __dec_obj184=litem_441->item;
        litem_441->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj184,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_441;
        self->head->next=litem_441;
    }
    else {
        litem_442=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value421=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2charphsNodephph"))));
        litem_442->prev=self->tail;
        litem_442->next=((void*)0);
        __dec_obj187=litem_442->item;
        litem_442->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_442;
        self->tail=litem_442;
    }
    self->len++;
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj188;
struct sNode* __dec_obj189;
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
            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result319__;
void* __right_value422 = (void*)0;
struct tuple2$2charphsNodeph* result_443;
void* __right_value423 = (void*)0;
char* __dec_obj190;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj191;
struct tuple2$2charphsNodeph* __result320__;
    if(    self==(void*)0) {
        __result319__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    result_443=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj190=result_443->v1;
        result_443->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj191=result_443->v2;
        result_443->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result320__ = gComeFunResultObject = __result_obj__ = result_443;
    come_call_finalizer3(result_443,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj192;
struct sNode* __dec_obj193;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj192=self->v1;
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj193=self->v2;
            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_444;
struct list_item$1tuple2$2charphsNodephph* prev_it_445;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        prev_it_445=it_444;
        it_444=it_444->next;
        come_call_finalizer3(prev_it_445,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result325__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_454;
struct list_item$1CVALUEph* prev_it_455;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        come_call_finalizer3(prev_it_455,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj202;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj202=self->item;
            come_call_finalizer3(__dec_obj202,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_458;
struct tuple2$2charphsNodeph* __result327__;
struct tuple2$2charphsNodeph* __result328__;
struct tuple2$2charphsNodeph* result_459;
struct tuple2$2charphsNodeph* __result329__;
result_458 = (void*)0;
result_459 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_458,0,sizeof(struct tuple2$2charphsNodeph*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_458;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->head;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_459,0,sizeof(struct tuple2$2charphsNodeph*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_459;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_461;
struct tuple2$2charphsNodeph* __result330__;
struct tuple2$2charphsNodeph* __result331__;
struct tuple2$2charphsNodeph* result_462;
struct tuple2$2charphsNodeph* __result332__;
result_461 = (void*)0;
result_462 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_461,0,sizeof(struct tuple2$2charphsNodeph*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_461;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_462,0,sizeof(struct tuple2$2charphsNodeph*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_462;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_467;
int i_468;
struct sType* __result334__;
struct sType* default_value_469;
struct sType* __result335__;
default_value_469 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_467=self->head;
    i_468=0;
    while(it_467!=((void*)0)) {
        if(        position==i_468) {
            __result334__ = gComeFunResultObject = __result_obj__ = it_467->item;
            gComeFunResultObject = (void*)0;
            return __result334__;
        }
        it_467=it_467->next;
        i_468++;
    }
    memset(&default_value_469,0,sizeof(struct sType*));
    __result335__ = gComeFunResultObject = __result_obj__ = default_value_469;
    come_call_finalizer3(default_value_469,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_473;
struct CVALUE* __result336__;
struct CVALUE* __result337__;
struct CVALUE* result_474;
struct CVALUE* __result338__;
result_473 = (void*)0;
result_474 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_473,0,sizeof(struct CVALUE*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_473;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->head;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_474,0,sizeof(struct CVALUE*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_474;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_476;
struct CVALUE* __result339__;
struct CVALUE* __result340__;
struct CVALUE* result_477;
struct CVALUE* __result341__;
result_476 = (void*)0;
result_477 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_476,0,sizeof(struct CVALUE*));
        __result339__ = gComeFunResultObject = __result_obj__ = result_476;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result340__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    memset(&result_477,0,sizeof(struct CVALUE*));
    __result341__ = gComeFunResultObject = __result_obj__ = result_477;
    gComeFunResultObject = (void*)0;
    return __result341__;
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
unsigned int hash_484;
unsigned int it_485;
struct sFun* __result343__;
struct sFun* __result344__;
struct sFun* __result345__;
struct sFun* __result346__;
    hash_484=charp_get_hash_key(((char*)key))%self->size;
    it_485=hash_484;
    while((_Bool)1) {
        if(        self->item_existance[it_485]) {
            if(            charp_equals(self->keys[it_485],key)) {
                __result343__ = gComeFunResultObject = __result_obj__ = self->items[it_485];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result343__;
            }
            it_485++;
            if(            it_485>=self->size) {
                it_485=0;
            }
            else if(            it_485==hash_484) {
                __result344__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result344__;
            }
        }
        else {
            __result345__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result345__;
        }
    }
    __result346__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj205;
struct sType* __dec_obj206;
struct list$1sTypeph* __dec_obj207;
struct list$1charph* __dec_obj208;
struct list$1charph* __dec_obj209;
struct sType* __dec_obj210;
struct sBlock* __dec_obj211;
struct buffer* __dec_obj214;
struct buffer* __dec_obj215;
struct buffer* __dec_obj216;
struct buffer* __dec_obj217;
char* __dec_obj218;
char* __dec_obj219;
char* __dec_obj220;
char* __dec_obj221;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj205=self->mName;
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj206=self->mResultType;
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj207=self->mParamTypes;
            come_call_finalizer3(__dec_obj207,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj208=self->mParamNames;
            come_call_finalizer3(__dec_obj208,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj209=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj209,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj210=self->mLambdaType;
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj211=self->mBlock;
            come_call_finalizer3(__dec_obj211,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj214=self->mSource;
            come_call_finalizer3(__dec_obj214,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj215=self->mSourceHead;
            come_call_finalizer3(__dec_obj215,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj216=self->mSourceHead2;
            come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj217=self->mSourceDefer;
            come_call_finalizer3(__dec_obj217,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj218=self->mComeHeader;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj219=self->mDeclareSName;
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj220=self->mAttribute;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj221=self->mFunAttribute;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj212;
struct sVarTable* __dec_obj213;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj212=self->mNodes;
            come_call_finalizer3(__dec_obj212,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj213=self->mVarTable;
            come_call_finalizer3(__dec_obj213,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_490;
int i_491;
struct CVALUE* __result348__;
struct CVALUE* default_value_492;
struct CVALUE* __result349__;
default_value_492 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_490=self->head;
    i_491=0;
    while(it_490!=((void*)0)) {
        if(        position==i_491) {
            __result348__ = gComeFunResultObject = __result_obj__ = it_490->item;
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
        it_490=it_490->next;
        i_491++;
    }
    memset(&default_value_492,0,sizeof(struct CVALUE*));
    __result349__ = gComeFunResultObject = __result_obj__ = default_value_492;
    come_call_finalizer3(default_value_492,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_498;
int i_499;
struct sType* default_value_500;
struct list$1sTypeph* __result351__;
struct list_item$1sTypeph* it_504;
int i_505;
struct sType* __dec_obj225;
struct list$1sTypeph* __result352__;
default_value_500 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_498=self->len;
        for(        i_499=0;        i_499<position-len_498;        i_499++        ){
            memset(&default_value_500,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_500));
            come_call_finalizer3(default_value_500,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result351__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    it_504=self->head;
    i_505=0;
    while(it_504!=((void*)0)) {
        if(        position==i_505) {
            __dec_obj225=it_504->item;
            it_504->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_504=it_504->next;
        i_505++;
    }
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value457 = (void*)0;
struct list_item$1sTypeph* litem_501;
struct sType* __dec_obj222;
void* __right_value458 = (void*)0;
struct list_item$1sTypeph* litem_502;
struct sType* __dec_obj223;
void* __right_value459 = (void*)0;
struct list_item$1sTypeph* litem_503;
struct sType* __dec_obj224;
struct list$1sTypeph* __result350__;
    if(    self->len==0) {
        litem_501=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value457=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_501->prev=((void*)0);
        litem_501->next=((void*)0);
        __dec_obj222=litem_501->item;
        litem_501->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_501;
        self->head=litem_501;
    }
    else if(    self->len==1) {
        litem_502=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value458=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_502->prev=self->head;
        litem_502->next=((void*)0);
        __dec_obj223=litem_502->item;
        litem_502->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_502;
        self->head->next=litem_502;
    }
    else {
        litem_503=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value459=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_503->prev=self->tail;
        litem_503->next=((void*)0);
        __dec_obj224=litem_503->item;
        litem_503->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_503;
        self->tail=litem_503;
    }
    self->len++;
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_508;
struct sType* __result353__;
struct sType* __result354__;
struct sType* result_509;
struct sType* __result355__;
result_508 = (void*)0;
result_509 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_508,0,sizeof(struct sType*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_508;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->head;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_509,0,sizeof(struct sType*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_509;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_511;
struct sType* __result356__;
struct sType* __result357__;
struct sType* result_512;
struct sType* __result358__;
result_511 = (void*)0;
result_512 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_511,0,sizeof(struct sType*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_511;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_512,0,sizeof(struct sType*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_512;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
struct list_item$1CVALUEph* litem_523;
struct CVALUE* __dec_obj226;
void* __right_value467 = (void*)0;
struct list_item$1CVALUEph* litem_524;
struct CVALUE* __dec_obj227;
void* __right_value468 = (void*)0;
struct list_item$1CVALUEph* litem_525;
struct CVALUE* __dec_obj228;
struct list$1CVALUEph* __result360__;
    if(    self->len==0) {
        litem_523=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value466=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1CVALUEph"))));
        litem_523->prev=((void*)0);
        litem_523->next=((void*)0);
        __dec_obj226=litem_523->item;
        litem_523->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_523;
        self->head=litem_523;
    }
    else if(    self->len==1) {
        litem_524=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value467=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1CVALUEph"))));
        litem_524->prev=self->head;
        litem_524->next=((void*)0);
        __dec_obj227=litem_524->item;
        litem_524->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_524;
        self->head->next=litem_524;
    }
    else {
        litem_525=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value468=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1CVALUEph"))));
        litem_525->prev=self->tail;
        litem_525->next=((void*)0);
        __dec_obj228=litem_525->item;
        litem_525->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_525;
        self->tail=litem_525;
    }
    self->len++;
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_531;
unsigned int it_532;
struct map$2charphsFunph* __result361__;
    hash_531=charp_get_hash_key(((char*)key))%self->size;
    it_532=hash_531;
    while((_Bool)1) {
        if(        self->item_existance[it_532]) {
            if(            charp_equals(self->keys[it_532],key)) {
                list$1charp_remove(self->key_list,self->keys[it_532]);
                self->item_existance[it_532]=(_Bool)0;
                if(                1) {
                    self->keys[it_532] = come_decrement_ref_count2(self->keys[it_532], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_532]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_532],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_532]=((void*)0);
                self->len--;
                break;
            }
            it_532++;
            if(            it_532>=self->size) {
                it_532=0;
            }
            else if(            it_532==hash_531) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result361__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_565;
unsigned int hash_566;
unsigned int it_567;
struct sFun* __result366__;
struct sFun* __result367__;
struct sFun* __result368__;
struct sFun* __result369__;
default_value_565 = (void*)0;
    memset(&default_value_565,0,sizeof(struct sFun*));
    hash_566=charp_get_hash_key(((char*)key))%self->size;
    it_567=hash_566;
    while((_Bool)1) {
        if(        self->item_existance[it_567]) {
            if(            charp_equals(self->keys[it_567],key)) {
                __result366__ = gComeFunResultObject = __result_obj__ = self->items[it_567];
                come_call_finalizer3(default_value_565,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result366__;
            }
            it_567++;
            if(            it_567>=self->size) {
                it_567=0;
            }
            else if(            it_567==hash_566) {
                __result367__ = gComeFunResultObject = __result_obj__ = default_value_565;
                come_call_finalizer3(default_value_565,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result367__;
            }
        }
        else {
            __result368__ = gComeFunResultObject = __result_obj__ = default_value_565;
            come_call_finalizer3(default_value_565,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result368__;
        }
    }
    __result369__ = gComeFunResultObject = __result_obj__ = default_value_565;
    come_call_finalizer3(default_value_565,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_601;
char* __result374__;
char* __result375__;
char* result_602;
char* __result376__;
result_601 = (void*)0;
result_602 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_601,0,sizeof(char*));
        __result374__ = gComeFunResultObject = __result_obj__ = result_601;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    self->it=self->head;
    if(    self->it) {
        __result375__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    memset(&result_602,0,sizeof(char*));
    __result376__ = gComeFunResultObject = __result_obj__ = result_602;
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_604;
char* __result377__;
char* __result378__;
char* result_605;
char* __result379__;
result_604 = (void*)0;
result_605 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_604,0,sizeof(char*));
        __result377__ = gComeFunResultObject = __result_obj__ = result_604;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result378__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    memset(&result_605,0,sizeof(char*));
    __result379__ = gComeFunResultObject = __result_obj__ = result_605;
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_606;
int i_607;
struct CVALUE* default_value_608;
struct list$1CVALUEph* __result380__;
struct list_item$1CVALUEph* it_609;
int i_610;
struct CVALUE* __dec_obj281;
struct list$1CVALUEph* __result381__;
default_value_608 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_606=self->len;
        for(        i_607=0;        i_607<position-len_606;        i_607++        ){
            memset(&default_value_608,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_608));
            come_call_finalizer3(default_value_608,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result380__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    it_609=self->head;
    i_610=0;
    while(it_609!=((void*)0)) {
        if(        position==i_610) {
            __dec_obj281=it_609->item;
            it_609->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj281,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_609=it_609->next;
        i_610++;
    }
    __result381__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_621;
int i_622;
char* __result384__;
char* default_value_623;
char* __result385__;
default_value_623 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_621=self->head;
    i_622=0;
    while(it_621!=((void*)0)) {
        if(        position==i_622) {
            __result384__ = gComeFunResultObject = __result_obj__ = it_621->item;
            gComeFunResultObject = (void*)0;
            return __result384__;
        }
        it_621=it_621->next;
        i_622++;
    }
    memset(&default_value_623,0,sizeof(char*));
    __result385__ = gComeFunResultObject = __result_obj__ = default_value_623;
    default_value_623 = come_decrement_ref_count2(default_value_623, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_639;
unsigned int hash_640;
unsigned int it_641;
struct sClass* __result392__;
struct sClass* __result393__;
struct sClass* __result394__;
struct sClass* __result395__;
default_value_639 = (void*)0;
    memset(&default_value_639,0,sizeof(struct sClass*));
    hash_640=charp_get_hash_key(((char*)key))%self->size;
    it_641=hash_640;
    while((_Bool)1) {
        if(        self->item_existance[it_641]) {
            if(            charp_equals(self->keys[it_641],key)) {
                __result392__ = gComeFunResultObject = __result_obj__ = self->items[it_641];
                come_call_finalizer3(default_value_639,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result392__;
            }
            it_641++;
            if(            it_641>=self->size) {
                it_641=0;
            }
            else if(            it_641==hash_640) {
                __result393__ = gComeFunResultObject = __result_obj__ = default_value_639;
                come_call_finalizer3(default_value_639,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result393__;
            }
        }
        else {
            __result394__ = gComeFunResultObject = __result_obj__ = default_value_639;
            come_call_finalizer3(default_value_639,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result394__;
        }
    }
    __result395__ = gComeFunResultObject = __result_obj__ = default_value_639;
    come_call_finalizer3(default_value_639,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value675 = (void*)0;
struct buffer* __dec_obj294;
struct sComeCallNode* __result400__;
    ((struct sNodeBase*)(__right_value675=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value675,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj294=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj294,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result400__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value676 = (void*)0;
char* __result401__;
    __result401__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value676=__builtin_string("sComeCallNode")));
    __right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_669;
struct buffer* come_block_670;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct list$1CVALUEph* come_params_671;
void* __right_value679 = (void*)0;
char* var_name_673;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sType* type__674;
_Bool __result406__;
void* __right_value682 = (void*)0;
struct sNode* var_node_677;
_Bool Value_678;
_Bool __result407__;
void* __right_value683 = (void*)0;
struct CVALUE* thread_var_value_679;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct CVALUE* come_value_680;
void* __right_value686 = (void*)0;
char* __dec_obj297;
struct sType* __dec_obj298;
void* __right_value687 = (void*)0;
struct sNode* null_node_681;
_Bool Value_682;
_Bool __result408__;
void* __right_value688 = (void*)0;
struct CVALUE* __dec_obj299;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value693 = (void*)0;
struct sNode* current_stack_frame_node_683;
_Bool Value_685;
_Bool __result411__;
void* __right_value694 = (void*)0;
struct CVALUE* current_stack_frame_value_686;
void* __right_value695 = (void*)0;
char* fun_name_687;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct buffer* come_block2_688;
void* __right_value698 = (void*)0;
char* class_name_689;
void* __right_value699 = (void*)0;
struct sClass* current_stack_frame_struct_690;
void* __right_value700 = (void*)0;
struct buffer* source3_691;
char* p_692;
char* head_693;
int sline_694;
struct buffer* __dec_obj302;
void* __right_value701 = (void*)0;
struct sNode* node_695;
_Bool Value_696;
_Bool __result412__;
struct buffer* __dec_obj303;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct CVALUE* fun_value_697;
void* __right_value704 = (void*)0;
char* __dec_obj304;
struct sType* __dec_obj305;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct buffer* buf_698;
void* __right_value707 = (void*)0;
char* fun_name_699;
int j_700;
struct list$1CVALUEph* o2_saved_701;
struct CVALUE* it_702;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct CVALUE* come_value_703;
void* __right_value710 = (void*)0;
char* __dec_obj306;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sType* type_704;
_Bool __result413__;
struct sType* __dec_obj307;
_Bool __result414__;
    come_block_sline_669=self->come_block_sline;
    come_block_670=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_671=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1412, "list$1CVALUEph"))));
    static int thread_num_672=0;
    thread_num_672++;
    var_name_673=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_672));
    type__674=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value680=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value680,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__674==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result406__ = (_Bool)0;
        come_call_finalizer3(come_block_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_671,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__674,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result406__;
    }
    var_node_677=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_673),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__674),(_Bool)1,((void*)0),info));
    Value_678=node_compile(var_node_677,info);
    if(    !Value_678) {
        __result407__ = (_Bool)0;
        come_call_finalizer3(come_block_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_671,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__674,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_677) { var_node_677 = come_decrement_ref_count2(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result407__;
    }
    else {
    }
    thread_var_value_679=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_680=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1435, "CVALUE"))));
    __dec_obj297=come_value_680->c_value;
    come_value_680->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_679->c_value));
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj298=come_value_680->type;
    come_value_680->type=(struct sType*)come_increment_ref_count(thread_var_value_679->type);
    come_call_finalizer3(__dec_obj298,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_680->var=((void*)0);
    list$1CVALUEph_push_back(come_params_671,(struct CVALUE*)come_increment_ref_count(come_value_680));
    null_node_681=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_682=node_compile(null_node_681,info);
    if(    !Value_682) {
        __result408__ = (_Bool)0;
        come_call_finalizer3(come_block_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_671,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__674,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_677) { var_node_677 = come_decrement_ref_count2(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_681) { null_node_681 = come_decrement_ref_count2(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result408__;
    }
    else {
    }
    __dec_obj299=come_value_680;
    come_value_680=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_671,(struct CVALUE*)come_increment_ref_count(come_value_680));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1453, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value690=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1453, "sCurrentNode2")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_683=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value690,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_685=node_compile(current_stack_frame_node_683,info);
    if(    !Value_685) {
        __result411__ = (_Bool)0;
        come_call_finalizer3(come_block_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_671,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__674,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_677) { var_node_677 = come_decrement_ref_count2(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_681) { null_node_681 = come_decrement_ref_count2(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_683) { current_stack_frame_node_683 = come_decrement_ref_count2(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result411__;
    }
    else {
    }
    current_stack_frame_value_686=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_687=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_672));
    come_block2_688=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1464, "buffer"))));
    class_name_689=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_688,"void* %s(%s* parent)\n",fun_name_687,class_name_689);
    buffer_append_str(come_block2_688,((char*)(__right_value699=buffer_to_string(come_block_670))));
    __right_value699 = come_decrement_ref_count2(__right_value699, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_690=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value700=map$2charphsClassphp_operator_load_element(info->classes,class_name_689)));
    come_call_finalizer3(__right_value700,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_691=(struct buffer*)come_increment_ref_count(info->source);
    p_692=info->p;
    head_693=info->head;
    sline_694=info->sline;
    __dec_obj302=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_688);
    come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_669;
    node_695=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_696=node_compile(node_695,info);
    if(    !Value_696) {
        __result412__ = (_Bool)0;
        come_call_finalizer3(come_block_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_671,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__674,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_677) { var_node_677 = come_decrement_ref_count2(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_681) { null_node_681 = come_decrement_ref_count2(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_683) { current_stack_frame_node_683 = come_decrement_ref_count2(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_686,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_687 = come_decrement_ref_count2(fun_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_689 = come_decrement_ref_count2(class_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_691,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_695) { node_695 = come_decrement_ref_count2(node_695, ((struct sNode*)node_695)->finalize, ((struct sNode*)node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result412__;
    }
    else {
    }
    __dec_obj303=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_691);
    come_call_finalizer3(__dec_obj303,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_692;
    info->head=head_693;
    info->sline=sline_694;
    info->current_stack_frame_struct=current_stack_frame_struct_690;
    fun_value_697=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1498, "CVALUE"))));
    __dec_obj304=fun_value_697->c_value;
    fun_value_697->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_687));
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=come_value_680->type;
    come_value_680->type=((void*)0);
    come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_680->var=((void*)0);
    list$1CVALUEph_add(come_params_671,(struct CVALUE*)come_increment_ref_count(fun_value_697));
    list$1CVALUEph_add(come_params_671,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_686));
    buf_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1508, "buffer"))));
    fun_name_687 = come_decrement_ref_count2(fun_name_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_699=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_698,"(");
    buffer_append_str(buf_698,fun_name_699);
    buffer_append_str(buf_698,"(");
    j_700=0;
    for(    o2_saved_701=(struct list$1CVALUEph*)come_increment_ref_count((come_params_671)),it_702=list$1CVALUEph_begin((o2_saved_701));    !list$1CVALUEph_end((o2_saved_701));    it_702=list$1CVALUEph_next((o2_saved_701))    ){
        buffer_append_str(buf_698,it_702->c_value);
        if(        j_700!=list$1CVALUEph_length(come_params_671)-1) {
            buffer_append_str(buf_698,",");
        }
        j_700++;
    }
    come_call_finalizer3(o2_saved_701,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_698,")");
    buffer_append_str(buf_698,", ");
    buffer_append_str(buf_698,thread_var_value_679->c_value);
    buffer_append_str(buf_698,")");
    come_call_finalizer3(come_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_703=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1531, "CVALUE"))));
    __dec_obj306=come_value_703->c_value;
    come_value_703->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_698));
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_704=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value711=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value711,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_704==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result413__ = (_Bool)0;
        come_call_finalizer3(come_block_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_671,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__674,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_677) { var_node_677 = come_decrement_ref_count2(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_681) { null_node_681 = come_decrement_ref_count2(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_683) { current_stack_frame_node_683 = come_decrement_ref_count2(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_686,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_689 = come_decrement_ref_count2(class_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_691,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_695) { node_695 = come_decrement_ref_count2(node_695, ((struct sNode*)node_695)->finalize, ((struct sNode*)node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_699 = come_decrement_ref_count2(fun_name_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_703,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_704,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result413__;
    }
    __dec_obj307=come_value_703->type;
    come_value_703->type=(struct sType*)come_increment_ref_count(type_704);
    come_call_finalizer3(__dec_obj307,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_703->var=((void*)0);
    add_come_last_code(info,"%s",come_value_703->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_703));
    __result414__ = (_Bool)1;
    come_call_finalizer3(come_block_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_671,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_673 = come_decrement_ref_count2(var_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__674,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_677) { var_node_677 = come_decrement_ref_count2(var_node_677, ((struct sNode*)var_node_677)->finalize, ((struct sNode*)var_node_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_681) { null_node_681 = come_decrement_ref_count2(null_node_681, ((struct sNode*)null_node_681)->finalize, ((struct sNode*)null_node_681)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_683) { current_stack_frame_node_683 = come_decrement_ref_count2(current_stack_frame_node_683, ((struct sNode*)current_stack_frame_node_683)->finalize, ((struct sNode*)current_stack_frame_node_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_686,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_688,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_689 = come_decrement_ref_count2(class_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_691,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_695) { node_695 = come_decrement_ref_count2(node_695, ((struct sNode*)node_695)->finalize, ((struct sNode*)node_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_699 = come_decrement_ref_count2(fun_name_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_703,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_704,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result414__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_675;
unsigned int it_676;
struct sType* __result402__;
struct sType* __result403__;
struct sType* __result404__;
struct sType* __result405__;
    hash_675=charp_get_hash_key(((char*)key))%self->size;
    it_676=hash_675;
    while((_Bool)1) {
        if(        self->item_existance[it_676]) {
            if(            charp_equals(self->keys[it_676],key)) {
                __result402__ = gComeFunResultObject = __result_obj__ = self->items[it_676];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result402__;
            }
            it_676++;
            if(            it_676>=self->size) {
                it_676=0;
            }
            else if(            it_676==hash_675) {
                __result403__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result403__;
            }
        }
        else {
            __result404__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result404__;
        }
    }
    __result405__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj300;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj300=self->sname;
            __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result409__;
void* __right_value691 = (void*)0;
struct sCurrentNode2* result_684;
void* __right_value692 = (void*)0;
char* __dec_obj301;
struct sCurrentNode2* __result410__;
    if(    self==(void*)0) {
        __result409__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    result_684=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_684->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj301=result_684->sname;
        result_684->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_684->sline_real=self->sline_real;
    }
    __result410__ = gComeFunResultObject = __result_obj__ = result_684;
    come_call_finalizer3(result_684,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj308;
struct sComeJoinNode* __result415__;
    ((struct sNodeBase*)(__right_value713=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value713,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj308=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    __result415__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result415__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value714 = (void*)0;
char* __result416__;
    __result416__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value714=__builtin_string("sComeJoinNode")));
    __right_value714 = come_decrement_ref_count2(__right_value714, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_705;
_Bool Value_706;
_Bool __result417__;
void* __right_value715 = (void*)0;
struct CVALUE* come_value_707;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct buffer* buf_708;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct CVALUE* come_value_709;
void* __right_value720 = (void*)0;
char* __dec_obj311;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sType* __dec_obj312;
_Bool __result418__;
    node_705=(struct sNode*)come_increment_ref_count(self->node);
    Value_706=node_compile(node_705,info);
    if(    !Value_706) {
        __result417__ = (_Bool)0;
        if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result417__;
    }
    else {
    }
    come_value_707=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_708=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1579, "buffer"))));
    buffer_append_str(buf_708,"pthread_join(");
    buffer_append_str(buf_708,come_value_707->c_value);
    buffer_append_str(buf_708,", 0)");
    come_call_finalizer3(come_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_709=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1584, "CVALUE"))));
    __dec_obj311=come_value_709->c_value;
    come_value_709->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_708));
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj312=come_value_709->type;
    come_value_709->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1586, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj312,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_709->var=((void*)0);
    add_come_last_code(info,"%s",come_value_709->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_709));
    __result418__ = (_Bool)1;
    if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result418__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value723 = (void*)0;
struct list$1sNodeph* __dec_obj313;
struct list$1sBlockph* __dec_obj314;
struct sBlock* __dec_obj316;
struct sComePollNode* __result419__;
    ((struct sNodeBase*)(__right_value723=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value723,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj313=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj313,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj314=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj314,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj316=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj316,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result419__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result419__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value724 = (void*)0;
char* __result420__;
    __result420__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value724=__builtin_string("sComePollNode")));
    __right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_714;
struct list$1sBlockph* blocks_715;
int time_out_716;
int n_718;
struct list$1sNodeph* o2_saved_719;
struct sNode* it_722;
_Bool Value_725;
_Bool __result427__;
void* __right_value725 = (void*)0;
struct CVALUE* come_value_726;
int n_727;
struct list$1sNodeph* o2_saved_728;
struct sNode* it_729;
void* __right_value726 = (void*)0;
_Bool __result430__;
    vars_714=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_715=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_716=self->time_out;
    static int var_num_717=0;
    var_num_717++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_717,list$1sNodeph_length(vars_714));
    n_718=0;
    for(    o2_saved_719=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_722=list$1sNodeph_begin((o2_saved_719));    !list$1sNodeph_end((o2_saved_719));    it_722=list$1sNodeph_next((o2_saved_719))    ){
        Value_725=node_compile(it_722,info);
        if(        !Value_725) {
            __result427__ = (_Bool)0;
            come_call_finalizer3(o2_saved_719,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_714,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_715,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result427__;
        }
        else {
        }
        come_value_726=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_717,n_718,come_value_726->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_717,n_718,1);
        n_718++;
        come_call_finalizer3(come_value_726,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_719,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_717,var_num_717,list$1sNodeph_length(vars_714),time_out_716);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_717);
    n_727=0;
    for(    o2_saved_728=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_729=list$1sNodeph_begin((o2_saved_728));    !list$1sNodeph_end((o2_saved_728));    it_729=list$1sNodeph_next((o2_saved_728))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_717,n_727,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value726=list$1sBlockphp_operator_load_element(blocks_715,n_727))), "05call.c", 1650, 31)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value726,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_727++;
    }
    come_call_finalizer3(o2_saved_728,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_717);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result430__ = (_Bool)1;
    come_call_finalizer3(vars_714,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_715,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result430__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_710;
struct list_item$1sBlockph* prev_it_711;
    it_710=self->head;
    while(it_710!=((void*)0)) {
        prev_it_711=it_710;
        it_710=it_710->next;
        come_call_finalizer3(prev_it_711,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj315;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj315=self->item;
            come_call_finalizer3(__dec_obj315,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_712;
struct list_item$1sBlockph* prev_it_713;
    it_712=self->head;
    while(it_712!=((void*)0)) {
        prev_it_713=it_712;
        it_712=it_712->next;
        come_call_finalizer3(prev_it_713,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_720;
struct sNode* __result421__;
struct sNode* __result422__;
struct sNode* result_721;
struct sNode* __result423__;
result_720 = (void*)0;
result_721 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_720,0,sizeof(struct sNode*));
        __result421__ = gComeFunResultObject = __result_obj__ = result_720;
        gComeFunResultObject = (void*)0;
        return __result421__;
    }
    self->it=self->head;
    if(    self->it) {
        __result422__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result422__;
    }
    memset(&result_721,0,sizeof(struct sNode*));
    __result423__ = gComeFunResultObject = __result_obj__ = result_721;
    gComeFunResultObject = (void*)0;
    return __result423__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_723;
struct sNode* __result424__;
struct sNode* __result425__;
struct sNode* result_724;
struct sNode* __result426__;
result_723 = (void*)0;
result_724 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_723,0,sizeof(struct sNode*));
        __result424__ = gComeFunResultObject = __result_obj__ = result_723;
        gComeFunResultObject = (void*)0;
        return __result424__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result425__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    memset(&result_724,0,sizeof(struct sNode*));
    __result426__ = gComeFunResultObject = __result_obj__ = result_724;
    gComeFunResultObject = (void*)0;
    return __result426__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_730;
int i_731;
struct sBlock* __result428__;
struct sBlock* default_value_732;
struct sBlock* __result429__;
default_value_732 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_730=self->head;
    i_731=0;
    while(it_730!=((void*)0)) {
        if(        position==i_731) {
            __result428__ = gComeFunResultObject = __result_obj__ = it_730->item;
            gComeFunResultObject = (void*)0;
            return __result428__;
        }
        it_730=it_730->next;
        i_731++;
    }
    memset(&default_value_732,0,sizeof(struct sBlock*));
    __result429__ = gComeFunResultObject = __result_obj__ = default_value_732;
    come_call_finalizer3(default_value_732,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value735 = (void*)0;
struct sNode* node_733;
void* __right_value736 = (void*)0;
struct sNode* __dec_obj331;
struct sNode* __result433__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value728=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1670, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_733=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value728,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj331=node_733;
    node_733=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_733),info));
    if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
    __result433__ = gComeFunResultObject = __result_obj__ = node_733;
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_733) { node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result433__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value737 = (void*)0;
struct sNode* __dec_obj332;
void* __right_value738 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj333;
struct sLambdaCall* __result434__;
    ((struct sNodeBase*)(__right_value737=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value737,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj332=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj333=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj333,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result434__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result434__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value739 = (void*)0;
char* __result435__;
    __result435__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value739=__builtin_string("sLambdaCall")));
    __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_735;
struct list$1tuple2$2charphsNodephph* params_736;
_Bool Value_737;
_Bool __result436__;
void* __right_value740 = (void*)0;
struct CVALUE* come_value_738;
struct sType* lambda_type_739;
_Bool __result437__;
void* __right_value741 = (void*)0;
struct sType* result_type_740;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1CVALUEph* come_params_741;
_Bool __result438__;
int i_742;
struct list$1tuple2$2charphsNodephph* o2_saved_743;
struct tuple2$2charphsNodeph* it_744;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_745=0;
struct sNode* node_746=0;
_Bool Value_747;
_Bool __result439__;
void* __right_value744 = (void*)0;
struct CVALUE* come_value_748;
void* __right_value745 = (void*)0;
_Bool _if_conditional19;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
_Bool _if_conditional20;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct buffer* buf_749;
int j_750;
struct list$1CVALUEph* o2_saved_751;
struct CVALUE* it_752;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct CVALUE* come_value2_753;
void* __right_value755 = (void*)0;
char* __dec_obj337;
void* __right_value756 = (void*)0;
struct sType* __dec_obj338;
_Bool __result440__;
    node_735=(struct sNode*)come_increment_ref_count(self->node);
    params_736=self->params;
    Value_737=node_compile(node_735,info);
    if(    !Value_737) {
        __result436__ = (_Bool)0;
        if(node_735) { node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result436__;
    }
    else {
    }
    come_value_738=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_739=come_value_738->type;
    if(    lambda_type_739->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result437__ = (_Bool)0;
        if(node_735) { node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_738,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result437__;
    }
    result_type_740=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_739->mResultType->v1));
    result_type_740->mStatic=(_Bool)0;
    come_params_741=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1714, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_739->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_736)&&!lambda_type_739->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_739->mParamTypes),list$1tuple2$2charphsNodephph_length(params_736));
        __result438__ = (_Bool)0;
        if(node_735) { node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_738,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_740,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_741,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result438__;
    }
    i_742=0;
    for(    o2_saved_743=(params_736),it_744=list$1tuple2$2charphsNodephph_begin((o2_saved_743));    !list$1tuple2$2charphsNodephph_end((o2_saved_743));    it_744=list$1tuple2$2charphsNodephph_next((o2_saved_743))    ){
        multiple_assign_var8=it_744;
        label_745=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_746=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        Value_747=node_compile(node_746,info);
        if(        !Value_747) {
            __result439__ = (_Bool)0;
            label_745 = come_decrement_ref_count2(label_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_735) { node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_738,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_740,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_741,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result439__;
        }
        else {
        }
        come_value_748=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_739->mVarArgs&&((struct sType*)(__right_value745=list$1sTypephp_operator_load_element(lambda_type_739->mParamTypes,i_742)))==((void*)0))),        come_call_finalizer3(__right_value745,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value747=xsprintf("calling param #\%s",((char*)(__right_value746=int_to_string(i_742)))))),((struct sType*)come_null_check(((struct sType*)(__right_value748=list$1sTypephp_operator_load_element(lambda_type_739->mParamTypes,i_742))), "05call.c", 1733, 32)),come_value_748->type,come_value_748,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value748,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value749=list$1sTypephp_operator_load_element(lambda_type_739->mParamTypes,i_742))), "05call.c", 1734, 33))->mHeap&&come_value_748->type->mHeap)),            come_call_finalizer3(__right_value749,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value750=list$1sTypephp_operator_load_element(lambda_type_739->mParamTypes,i_742))), "05call.c", 1735, 34)),come_value_748->type,come_value_748,info,(_Bool)1);
                come_call_finalizer3(__right_value750,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_741,(struct CVALUE*)come_increment_ref_count(come_value_748));
        dec_stack_ptr(1,info);
        i_742++;
        label_745 = come_decrement_ref_count2(label_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_746) { node_746 = come_decrement_ref_count2(node_746, ((struct sNode*)node_746)->finalize, ((struct sNode*)node_746)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_748,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_749=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1745, "buffer"))));
    buffer_append_str(buf_749,"(");
    buffer_append_str(buf_749,come_value_738->c_value);
    buffer_append_str(buf_749,")");
    buffer_append_str(buf_749,"(");
    j_750=0;
    for(    o2_saved_751=(struct list$1CVALUEph*)come_increment_ref_count((come_params_741)),it_752=list$1CVALUEph_begin((o2_saved_751));    !list$1CVALUEph_end((o2_saved_751));    it_752=list$1CVALUEph_next((o2_saved_751))    ){
        buffer_append_str(buf_749,it_752->c_value);
        if(        j_750!=list$1CVALUEph_length(come_params_741)-1) {
            buffer_append_str(buf_749,",");
        }
        j_750++;
    }
    come_call_finalizer3(o2_saved_751,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_749,")");
    come_value2_753=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1764, "CVALUE"))));
    __dec_obj337=come_value2_753->c_value;
    come_value2_753->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_749));
    __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_739->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_753,(struct sType*)come_increment_ref_count(lambda_type_739->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj338=come_value2_753->type;
    come_value2_753->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_740));
    come_call_finalizer3(__dec_obj338,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_753->type->mStatic=(_Bool)0;
    come_value2_753->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_753->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_753));
    __result440__ = (_Bool)1;
    if(node_735) { node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_738,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_740,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_741,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_749,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_753,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result440__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value757 = (void*)0;
struct sType* __dec_obj339;
struct sVarArgTypeName* __result441__;
    ((struct sNodeBase*)(__right_value757=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value757,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj339=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj339,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result441__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result441__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value758 = (void*)0;
char* __result442__;
    __result442__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value758=__builtin_string("sVarArgTypeName")));
    __right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_754;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct CVALUE* come_value_755;
void* __right_value761 = (void*)0;
char* __dec_obj342;
struct sType* __dec_obj343;
_Bool __result443__;
    type_754=(struct sType*)come_increment_ref_count(self->type);
    come_value_755=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1801, "CVALUE"))));
    __dec_obj342=come_value_755->c_value;
    come_value_755->c_value=(char*)come_increment_ref_count(make_type_name_string(type_754,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj343=come_value_755->type;
    come_value_755->type=(struct sType*)come_increment_ref_count(type_754);
    come_call_finalizer3(__dec_obj343,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_755->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_755));
    __result443__ = (_Bool)1;
    come_call_finalizer3(type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_755,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result443__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1sTypeph* method_generics_types_756;
void* __right_value764 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_757=0;
char* name_758=0;
_Bool err_759=0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_760;
_Bool _va_arg_761;
char* p_762;
int sline_763;
_Bool err_flag_764;
void* __right_value768 = (void*)0;
char* label_765;
void* __right_value769 = (void*)0;
char* __dec_obj346;
char* __dec_obj347;
_Bool no_comma_766;
_Bool in_fun_param_767;
void* __right_value770 = (void*)0;
struct sNode* node_768;
void* __right_value771 = (void*)0;
struct sNode* __dec_obj348;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
_Bool guard_break_772;
struct buffer* method_block_773;
int method_block_sline_774;
char* head_775;
void* __right_value777 = (void*)0;
char* tail_776;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct buffer* __dec_obj354;
int len_777;
void* __right_value780 = (void*)0;
char* mem_778;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value789 = (void*)0;
struct sNode* node_779;
void* __right_value790 = (void*)0;
struct sNode* __dec_obj365;
struct sNode* __result448__;
    method_generics_types_756=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1815, "list$1sTypeph"))));
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value764=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_757=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_758=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_759=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value764,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_759) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_756,(struct sType*)come_increment_ref_count(sType_clone(type_757)));
                come_call_finalizer3(type_757,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_758 = come_decrement_ref_count2(name_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_760=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1853, "list$1tuple2$2charphsNodephph"))));
    _va_arg_761=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_762=info->p;
        sline_763=info->sline;
        err_flag_764=(_Bool)0;
        label_765=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj346=label_765;
            label_765=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_764=(_Bool)1;
        }
        if(        err_flag_764==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj347=label_765;
            label_765=((void*)0);
            __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_762;
            info->sline=sline_763;
        }
        no_comma_766=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_767=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_768=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj348=node_768;
        node_768=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_768),info));
        if(__dec_obj348) { __dec_obj348 = come_decrement_ref_count2(__dec_obj348, ((struct sNode*)__dec_obj348)->finalize, ((struct sNode*)__dec_obj348)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_766;
        info->in_fun_param=in_fun_param_767;
        list$1tuple2$2charphsNodephph_push_back(params_760,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1901, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_765),(struct sNode*)come_increment_ref_count(node_768))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_765 = come_decrement_ref_count2(label_765, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_768) { node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_765 = come_decrement_ref_count2(label_765, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_768) { node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_761;
    guard_break_772=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_772=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_773=((void*)0);
    method_block_sline_774=0;
    if(    *info->p==123) {
        head_775=info->p;
        method_block_sline_774=info->sline;
        ((char*)(__right_value777=skip_block(info)));
        __right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_776=info->p;
        __dec_obj354=method_block_773;
        method_block_773=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1938, "buffer"))));
        come_call_finalizer3(__dec_obj354,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_777=tail_776-head_775;
        mem_778=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_777+1)), "05call.c", 1941, "char"));
        memcpy(mem_778,head_775,len_777);
        mem_778[len_777]=0;
        buffer_append_str(method_block_773,mem_778);
        buffer_append_str(method_block_773,"\n");
        mem_778 = come_decrement_ref_count2(mem_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1951, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value782=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1951, "sFunCallNode")),fun_name,params_760,guard_break_772,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_756),(struct buffer*)come_increment_ref_count(method_block_773),method_block_sline_774,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_779=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value782,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj365=node_779;
    node_779=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_779),info));
    if(__dec_obj365) { __dec_obj365 = come_decrement_ref_count2(__dec_obj365, ((struct sNode*)__dec_obj365)->finalize, ((struct sNode*)__dec_obj365)->_protocol_obj, 0,0,0, (void*)0); };
    __result448__ = gComeFunResultObject = __result_obj__ = node_779;
    come_call_finalizer3(method_generics_types_756,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_760,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result448__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj344;
char* __dec_obj345;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj344=self->v1;
            come_call_finalizer3(__dec_obj344,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj345=self->v2;
            __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value772 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_769;
struct tuple2$2charphsNodeph* __dec_obj349;
void* __right_value773 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_770;
struct tuple2$2charphsNodeph* __dec_obj350;
void* __right_value774 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_771;
struct tuple2$2charphsNodeph* __dec_obj351;
struct list$1tuple2$2charphsNodephph* __result444__;
    if(    self->len==0) {
        litem_769=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value772=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsNodephph"))));
        litem_769->prev=((void*)0);
        litem_769->next=((void*)0);
        __dec_obj349=litem_769->item;
        litem_769->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj349,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_769;
        self->head=litem_769;
    }
    else if(    self->len==1) {
        litem_770=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value773=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsNodephph"))));
        litem_770->prev=self->head;
        litem_770->next=((void*)0);
        __dec_obj350=litem_770->item;
        litem_770->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj350,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_770;
        self->head->next=litem_770;
    }
    else {
        litem_771=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value774=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsNodephph"))));
        litem_771->prev=self->tail;
        litem_771->next=((void*)0);
        __dec_obj351=litem_771->item;
        litem_771->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj351,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_771;
        self->tail=litem_771;
    }
    self->len++;
    __result444__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result444__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj352;
struct sNode* __dec_obj353;
struct tuple2$2charphsNodeph* __result445__;
    __dec_obj352=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj353=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
    __result445__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj355;
char* __dec_obj356;
struct list$1tuple2$2charphsNodephph* __dec_obj357;
struct list$1sTypeph* __dec_obj358;
struct buffer* __dec_obj359;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj355=self->sname;
            __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj356=self->fun_name;
            __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj357=self->params;
            come_call_finalizer3(__dec_obj357,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj358=self->method_generics_types;
            come_call_finalizer3(__dec_obj358,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj359=self->method_block;
            come_call_finalizer3(__dec_obj359,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result446__;
void* __right_value783 = (void*)0;
struct sFunCallNode* result_780;
void* __right_value784 = (void*)0;
char* __dec_obj360;
void* __right_value785 = (void*)0;
char* __dec_obj361;
void* __right_value786 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj362;
void* __right_value787 = (void*)0;
struct list$1sTypeph* __dec_obj363;
void* __right_value788 = (void*)0;
struct buffer* __dec_obj364;
struct sFunCallNode* __result447__;
    if(    self==(void*)0) {
        __result446__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result446__;
    }
    result_780=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_780->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj360=result_780->sname;
        result_780->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_780->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj361=result_780->fun_name;
        result_780->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj362=result_780->params;
        result_780->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj362,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_780->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj363=result_780->method_generics_types;
        result_780->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj363,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj364=result_780->method_block;
        result_780->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj364,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_780->method_block_sline=self->method_block_sline;
    }
    __result447__ = gComeFunResultObject = __result_obj__ = result_780;
    come_call_finalizer3(result_780,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result447__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result449__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result449__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result449__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value797 = (void*)0;
struct sNode* __result452__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode");
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value792=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result452__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value797=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value792,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value797) { __right_value797 = come_decrement_ref_count2(__right_value797, ((struct sNode*)__right_value797)->finalize, ((struct sNode*)__right_value797)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result452__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value805 = (void*)0;
struct sNode* __result455__;
char* head_783;
void* __right_value806 = (void*)0;
struct sNode* value_784;
char* tail_785;
void* __right_value807 = (void*)0;
struct sNode* __dec_obj378;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value815 = (void*)0;
struct sNode* __result458__;
int nest_788;
char* head_789;
int head_sline_790;
int sline_real_791;
void* __right_value816 = (void*)0;
char* buf_792;
_Bool is_type_name__793;
_Bool is_special_word_795;
_Bool define_function_pointer_flag_796;
void* __right_value817 = (void*)0;
_Bool lambda_flag_797;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
char* word2_798;
_Bool fun_name_with_type_name_799;
void* __right_value820 = (void*)0;
char* word2_800;
_Bool call_method_generics_fun_call_801;
void* __right_value821 = (void*)0;
char* __dec_obj385;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
_Bool _if_conditional21;
int nest_802;
_Bool inline_asm_803;
void* __right_value824 = (void*)0;
char* __dec_obj386;
void* __right_value825 = (void*)0;
char* __dec_obj387;
void* __right_value826 = (void*)0;
char* __dec_obj388;
void* __right_value827 = (void*)0;
struct sNode* node_804;
struct sNode* __result459__;
_Bool no_comma_805;
void* __right_value828 = (void*)0;
struct sNode* exp_806;
void* __right_value829 = (void*)0;
struct sNode* exp2_807;
void* __right_value830 = (void*)0;
struct sNode* __result460__;
void* __right_value831 = (void*)0;
char* block_text_808;
char* contents_809;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value837 = (void*)0;
struct sNode* __result463__;
void* __right_value838 = (void*)0;
struct sNode* node_811;
struct sNode* __result464__;
void* __right_value839 = (void*)0;
struct sNode* node_812;
struct sNode* __result465__;
struct buffer* come_block_813;
int come_block_sline_814;
char* head_815;
void* __right_value840 = (void*)0;
char* tail_816;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct buffer* __dec_obj393;
int len_817;
void* __right_value843 = (void*)0;
char* mem_818;
char* head_819;
_Bool no_output_come_code_820;
void* __right_value844 = (void*)0;
char* tail_821;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct buffer* __dec_obj394;
int len_822;
void* __right_value847 = (void*)0;
char* mem_823;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value853 = (void*)0;
struct sNode* node_824;
struct sNode* __result468__;
struct buffer* come_block_826;
int come_block_sline_827;
void* __right_value854 = (void*)0;
struct sNode* node_828;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value860 = (void*)0;
struct sNode* __result471__;
int time_out_830;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1sNodeph* vars_831;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1sBlockph* blocks_832;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sBlock* else_block_833;
void* __right_value867 = (void*)0;
struct sBlock* __dec_obj403;
void* __right_value868 = (void*)0;
struct sNode* var_name_834;
void* __right_value869 = (void*)0;
struct sBlock* block_835;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value912 = (void*)0;
struct sNode* __result495__;
void* __right_value913 = (void*)0;
struct sNode* node_871;
struct sNode* __result496__;
void* __right_value914 = (void*)0;
struct sNode* node_872;
struct sNode* __result497__;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value919 = (void*)0;
struct sNode* __result500__;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value924 = (void*)0;
struct sNode* __result503__;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value929 = (void*)0;
struct sNode* __result506__;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value934 = (void*)0;
struct sNode* __result509__;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value939 = (void*)0;
struct sNode* __result512__;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value944 = (void*)0;
struct sNode* __result515__;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value949 = (void*)0;
struct sNode* __result518__;
void* __right_value950 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_880=0;
char* name_881=0;
_Bool err_882=0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value956 = (void*)0;
struct sNode* __result521__;
void* __right_value957 = (void*)0;
struct sNode* node_884;
struct sNode* __result522__;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct buffer* buf2_885;
void* __right_value960 = (void*)0;
char* word_886;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct list$1sNodeph* exps_887;
void* __right_value963 = (void*)0;
struct sNode* exp_888;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value971 = (void*)0;
struct sNode* __result525__;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct buffer* fun_name_890;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sType* type_891;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct sClass* klass_895;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sType* __dec_obj448;
void* __right_value981 = (void*)0;
char* buf2_896;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct sNode* node_897;
struct sNode* __result530__;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct buffer* fun_name_898;
void* __right_value986 = (void*)0;
char* buf2_899;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* node_900;
struct sNode* __result531__;
void* __right_value989 = (void*)0;
struct sNode* node_901;
struct sNode* __result532__;
void* __right_value990 = (void*)0;
struct sNode* node_902;
struct sNode* __result533__;
void* __right_value991 = (void*)0;
struct sNode* node_903;
struct sNode* __result534__;
void* __right_value992 = (void*)0;
struct sNode* node_904;
struct sNode* __result535__;
struct sNode* __result536__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value800=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1985, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result455__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value805=_inf_value6));
            come_call_finalizer3(__right_value800,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value805) { __right_value805 = come_decrement_ref_count2(__right_value805, ((struct sNode*)__right_value805)->finalize, ((struct sNode*)__right_value805)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result455__;
        }
        else {
            head_783=info->p;
            value_784=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_785=info->p;
            __dec_obj378=value_784;
            value_784=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_784),info));
            if(__dec_obj378) { __dec_obj378 = come_decrement_ref_count2(__dec_obj378, ((struct sNode*)__dec_obj378)->finalize, ((struct sNode*)__dec_obj378)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_786[tail_785-head_783+1];
            memset(&buf_786, 0, sizeof(char)            *(tail_785-head_783+1)            );
            memcpy(buf_786,head_783,tail_785-head_783);
            buf_786[tail_785-head_783]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1997, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value810=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1997, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_784),(char*)come_increment_ref_count(__builtin_string(buf_786)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result458__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value815=_inf_value7));
            if(value_784) { value_784 = come_decrement_ref_count2(value_784, ((struct sNode*)value_784)->finalize, ((struct sNode*)value_784)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value810,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value815) { __right_value815 = come_decrement_ref_count2(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result458__;
            if(value_784) { value_784 = come_decrement_ref_count2(value_784, ((struct sNode*)value_784)->finalize, ((struct sNode*)value_784)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_788=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_788++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_788--;
                if(                nest_788==0) {
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
        head_789=info->p;
        head_sline_790=info->sline;
        sline_real_791=info->sline_real;
        info->sline_real=info->sline;
        buf_792=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__793=is_type_name(buf_792,info);
        static char* is_special_word_array_794[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_795=charppa_contained(is_special_word_array_794,19,buf_792);
        define_function_pointer_flag_796=(_Bool)0;
        if(        !is_special_word_795&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value817=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value817,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_796=(_Bool)1;
                }
            }
            info->p=head_789;
            info->sline=head_sline_790;
        }
        lambda_flag_797=(_Bool)0;
        if(        !is_special_word_795&&is_type_name__793) {
            info->p=head_789;
            info->sline=head_sline_790;
            ((struct tuple3$3sTypephcharphbool*)(__right_value818=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value818,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_798=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_798,"lambda")) {
                lambda_flag_797=(_Bool)1;
            }
            info->p=head_789;
            info->sline=head_sline_790;
            word2_798 = come_decrement_ref_count2(word2_798, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_799=(_Bool)0;
        if(        !is_special_word_795) {
            info->p=head_789;
            info->sline=head_sline_790;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_800=(char*)come_increment_ref_count(parse_word(info));
                word2_800 = come_decrement_ref_count2(word2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_799=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_789;
            info->sline=head_sline_790;
        }
        call_method_generics_fun_call_801=(_Bool)0;
        {
            info->p=head_789;
            info->sline=head_sline_790;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj385=buf_792;
                buf_792=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_792,info)&&((struct sVar*)(__right_value822=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_792)))==((void*)0)&&((struct sVar*)(__right_value823=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_792)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value822,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value823,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_802=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_802++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_802==0) {
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
                    call_method_generics_fun_call_801=(_Bool)1;
                }
            }
            info->p=head_789;
            info->sline=head_sline_790;
        }
        inline_asm_803=(_Bool)0;
        {
            info->p=head_789;
            info->sline=head_sline_790;
            __dec_obj386=buf_792;
            buf_792=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj386 = come_decrement_ref_count2(__dec_obj386, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_792,"asm")||string_operator_equals(buf_792,"__asm")||string_operator_equals(buf_792,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_803=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj387=buf_792;
                        buf_792=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_803=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_789;
            info->sline=head_sline_790;
        }
        parse_sharp_v5(info);
        __dec_obj388=buf_792;
        buf_792=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj388 = come_decrement_ref_count2(__dec_obj388, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_797) {
            info->p=head_789;
            info->sline=head_sline_790;
            node_804=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_791;
            __result459__ = gComeFunResultObject = __result_obj__ = node_804;
            if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result459__;
            if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_792,"_Static_assert")||string_operator_equals(buf_792,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_805=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_806=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_805;
            expected_next_character(44,info);
            exp2_807=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value830=static_assert_node((struct sNode*)come_increment_ref_count(exp_806),(struct sNode*)come_increment_ref_count(exp2_807),info)));
            if(exp_806) { exp_806 = come_decrement_ref_count2(exp_806, ((struct sNode*)exp_806)->finalize, ((struct sNode*)exp_806)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_807) { exp2_807 = come_decrement_ref_count2(exp2_807, ((struct sNode*)exp2_807)->finalize, ((struct sNode*)exp2_807)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value830) { __right_value830 = come_decrement_ref_count2(__right_value830, ((struct sNode*)__right_value830)->finalize, ((struct sNode*)__right_value830)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result460__;
            if(exp_806) { exp_806 = come_decrement_ref_count2(exp_806, ((struct sNode*)exp_806)->finalize, ((struct sNode*)exp_806)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_807) { exp2_807 = come_decrement_ref_count2(exp2_807, ((struct sNode*)exp2_807)->finalize, ((struct sNode*)exp2_807)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_792,"output")&&*info->p==123) {
            block_text_808=(char*)come_increment_ref_count(skip_block(info));
            contents_809=(char*)come_increment_ref_count(block_text_808);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2235, "struct sNode");
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value833=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2235, "sOutputNode")),(char*)come_increment_ref_count(contents_809),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result463__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value837=_inf_value8));
            block_text_808 = come_decrement_ref_count2(block_text_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_809 = come_decrement_ref_count2(contents_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value833,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value837) { __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result463__;
            block_text_808 = come_decrement_ref_count2(block_text_808, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_809 = come_decrement_ref_count2(contents_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_792,"extern")) {
            node_811=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result464__ = gComeFunResultObject = __result_obj__ = node_811;
            if(node_811) { node_811 = come_decrement_ref_count2(node_811, ((struct sNode*)node_811)->finalize, ((struct sNode*)node_811)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result464__;
            if(node_811) { node_811 = come_decrement_ref_count2(node_811, ((struct sNode*)node_811)->finalize, ((struct sNode*)node_811)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_792,"string")||string_operator_equals(buf_792,"wstring"))&&*info->p==40) {
            node_812=(struct sNode*)come_increment_ref_count(parse_function_call(buf_792,info,(_Bool)0));
            info->sline_real=sline_real_791;
            __result465__ = gComeFunResultObject = __result_obj__ = node_812;
            if(node_812) { node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result465__;
            if(node_812) { node_812 = come_decrement_ref_count2(node_812, ((struct sNode*)node_812)->finalize, ((struct sNode*)node_812)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_792,"come")) {
            come_block_813=((void*)0);
            come_block_sline_814=0;
            if(            *info->p==123) {
                head_815=info->p;
                come_block_sline_814=info->sline;
                ((char*)(__right_value840=skip_block(info)));
                __right_value840 = come_decrement_ref_count2(__right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_816=info->p;
                __dec_obj393=come_block_813;
                come_block_813=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2260, "buffer"))));
                come_call_finalizer3(__dec_obj393,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_817=tail_816-head_815;
                mem_818=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_817+1)), "05call.c", 2263, "char"));
                memcpy(mem_818,head_815,len_817);
                mem_818[len_817]=0;
                buffer_append_str(come_block_813,mem_818);
                buffer_append_str(come_block_813,"\n");
                mem_818 = come_decrement_ref_count2(mem_818, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_819=info->p;
                come_block_sline_814=info->sline;
                no_output_come_code_820=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value844=expression_v13(info)));
                if(__right_value844) { __right_value844 = come_decrement_ref_count2(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_820;
                tail_821=info->p;
                __dec_obj394=come_block_813;
                come_block_813=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2281, "buffer"))));
                come_call_finalizer3(__dec_obj394,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_822=tail_821-head_819;
                mem_823=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_822+1)), "05call.c", 2284, "char"));
                memcpy(mem_823,head_819,len_822);
                mem_823[len_822]=0;
                buffer_append_str(come_block_813,"{");
                buffer_append_str(come_block_813,mem_823);
                buffer_append_str(come_block_813,"; }");
                buffer_append_str(come_block_813,"}");
                buffer_append_str(come_block_813,"\n");
                mem_823 = come_decrement_ref_count2(mem_823, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode");
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value849=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2295, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_813),come_block_sline_814,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_824=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value849,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_791;
            __result468__ = gComeFunResultObject = __result_obj__ = node_824;
            come_call_finalizer3(come_block_813,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_824) { node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result468__;
            come_call_finalizer3(come_block_813,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_824) { node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_792,"come_join")&&*info->p==40) {
            come_block_826=((void*)0);
            come_block_sline_827=0;
            expected_next_character(40,info);
            node_828=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_791;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2309, "struct sNode");
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value856=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2309, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_828),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result471__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value860=_inf_value10));
            come_call_finalizer3(come_block_826,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_828) { node_828 = come_decrement_ref_count2(node_828, ((struct sNode*)node_828)->finalize, ((struct sNode*)node_828)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value856,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value860) { __right_value860 = come_decrement_ref_count2(__right_value860, ((struct sNode*)__right_value860)->finalize, ((struct sNode*)__right_value860)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result471__;
            come_call_finalizer3(come_block_826,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_828) { node_828 = come_decrement_ref_count2(node_828, ((struct sNode*)node_828)->finalize, ((struct sNode*)node_828)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_792,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_830=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_830=time_out_830*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_831=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2327, "list$1sNodeph"))));
            blocks_832=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2328, "list$1sBlockph"))));
            else_block_833=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2329, "sBlock")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj403=else_block_833;
                    else_block_833=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj403,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_834=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_835=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_831,(struct sNode*)come_increment_ref_count(var_name_834));
                    list$1sBlockph_add(blocks_832,(struct sBlock*)come_increment_ref_count(block_835));
                    if(                    *info->p==125) {
                        if(var_name_834) { var_name_834 = come_decrement_ref_count2(var_name_834, ((struct sNode*)var_name_834)->finalize, ((struct sNode*)var_name_834)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_835,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_834) { var_name_834 = come_decrement_ref_count2(var_name_834, ((struct sNode*)var_name_834)->finalize, ((struct sNode*)var_name_834)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_835,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_791;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode");
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value874=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2359, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_831),(struct list$1sBlockph*)come_increment_ref_count(blocks_832),(struct sBlock*)come_increment_ref_count(else_block_833),time_out_830,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result495__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value912=_inf_value11));
            come_call_finalizer3(vars_831,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_832,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_833,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value874,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value912) { __right_value912 = come_decrement_ref_count2(__right_value912, ((struct sNode*)__right_value912)->finalize, ((struct sNode*)__right_value912)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result495__;
            come_call_finalizer3(vars_831,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_832,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_833,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_792,"none")&&*info->p==40) {
            node_871=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_791;
            __result496__ = gComeFunResultObject = __result_obj__ = node_871;
            if(node_871) { node_871 = come_decrement_ref_count2(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result496__;
            if(node_871) { node_871 = come_decrement_ref_count2(node_871, ((struct sNode*)node_871)->finalize, ((struct sNode*)node_871)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_792,"some")&&*info->p==40) {
            node_872=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_791;
            __result497__ = gComeFunResultObject = __result_obj__ = node_872;
            if(node_872) { node_872 = come_decrement_ref_count2(node_872, ((struct sNode*)node_872)->finalize, ((struct sNode*)node_872)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result497__;
            if(node_872) { node_872 = come_decrement_ref_count2(node_872, ((struct sNode*)node_872)->finalize, ((struct sNode*)node_872)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_792,"__func__")||string_operator_equals(buf_792,"__FUNCTION__")) {
            info->sline_real=sline_real_791;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode");
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value916=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2376, "sFuncNode")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result500__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value919=_inf_value12));
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value916,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value919) { __right_value919 = come_decrement_ref_count2(__right_value919, ((struct sNode*)__right_value919)->finalize, ((struct sNode*)__right_value919)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result500__;
        }
        else if(        !gComeC&&string_operator_equals(buf_792,"wildcard")) {
            info->sline_real=sline_real_791;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode");
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value921=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2380, "sWildCard")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result503__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value924=_inf_value13));
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value921,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value924) { __right_value924 = come_decrement_ref_count2(__right_value924, ((struct sNode*)__right_value924)->finalize, ((struct sNode*)__right_value924)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result503__;
        }
        else if(        string_operator_equals(buf_792,"__line__")||string_operator_equals(buf_792,"__LINE__")) {
            info->sline_real=sline_real_791;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value926=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2384, "sLineNode")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result506__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value929=_inf_value14));
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value926,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value929) { __right_value929 = come_decrement_ref_count2(__right_value929, ((struct sNode*)__right_value929)->finalize, ((struct sNode*)__right_value929)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result506__;
        }
        else if(        string_operator_equals(buf_792,"__sname__")) {
            info->sline_real=sline_real_791;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value931=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2388, "sSNameNode")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result509__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value934=_inf_value15));
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value931,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value934) { __right_value934 = come_decrement_ref_count2(__right_value934, ((struct sNode*)__right_value934)->finalize, ((struct sNode*)__right_value934)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result509__;
        }
        else if(        string_operator_equals(buf_792,"__caller_func__")) {
            info->sline_real=sline_real_791;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value936=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2392, "sCallerFuncNode")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result512__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value939=_inf_value16));
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value936,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value939) { __right_value939 = come_decrement_ref_count2(__right_value939, ((struct sNode*)__right_value939)->finalize, ((struct sNode*)__right_value939)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result512__;
        }
        else if(        string_operator_equals(buf_792,"__caller_line__")) {
            info->sline_real=sline_real_791;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode");
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value941=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2396, "sCallerLineNode")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result515__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value944=_inf_value17));
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value941,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value944) { __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result515__;
        }
        else if(        string_operator_equals(buf_792,"__caller_sname__")) {
            info->sline_real=sline_real_791;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode");
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value946=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2400, "sCallerSNameNode")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result518__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value949=_inf_value18));
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value946,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value949) { __right_value949 = come_decrement_ref_count2(__right_value949, ((struct sNode*)__right_value949)->finalize, ((struct sNode*)__right_value949)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result518__;
        }
        else if(        info->va_arg&&is_type_name(buf_792,info)) {
            info->p=head_789;
            info->sline=head_sline_790;
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value950=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_880=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_881=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_882=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value950,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_791;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode");
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value952=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2409, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_880),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result521__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value956=_inf_value19));
            come_call_finalizer3(type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_881 = come_decrement_ref_count2(name_881, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value952,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value956) { __right_value956 = come_decrement_ref_count2(__right_value956, ((struct sNode*)__right_value956)->finalize, ((struct sNode*)__right_value956)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result521__;
            come_call_finalizer3(type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_881 = come_decrement_ref_count2(name_881, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_792,"sizeof")||string_operator_equals(buf_792,"_Alignof")||string_operator_equals(buf_792,"_Alignas")||string_operator_equals(buf_792,"__alignof__")) {
            node_884=(struct sNode*)come_increment_ref_count(string_node_v21(buf_792,head_789,head_sline_790,info));
            info->sline_real=sline_real_791;
            __result522__ = gComeFunResultObject = __result_obj__ = node_884;
            if(node_884) { node_884 = come_decrement_ref_count2(node_884, ((struct sNode*)node_884)->finalize, ((struct sNode*)node_884)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result522__;
            if(node_884) { node_884 = come_decrement_ref_count2(node_884, ((struct sNode*)node_884)->finalize, ((struct sNode*)node_884)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_803) {
            buf2_885=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2418, "buffer"))));
            if(            *info->p!=40) {
                word_886=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_885,word_886);
                word_886 = come_decrement_ref_count2(word_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_885,40);
            exps_887=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2429, "list$1sNodeph"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_885,40);
                    info->p++;
                    exp_888=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_887,(struct sNode*)come_increment_ref_count(exp_888));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_885,41);
                    if(exp_888) { exp_888 = come_decrement_ref_count2(exp_888, ((struct sNode*)exp_888)->finalize, ((struct sNode*)exp_888)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_885,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_885,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_885,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_791;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2466, "struct sNode");
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value966=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2466, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_885)),(struct list$1sNodeph*)come_increment_ref_count(exps_887),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result525__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value971=_inf_value20));
            come_call_finalizer3(buf2_885,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_887,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value966,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value971) { __right_value971 = come_decrement_ref_count2(__right_value971, ((struct sNode*)__right_value971)->finalize, ((struct sNode*)__right_value971)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result525__;
            come_call_finalizer3(buf2_885,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_887,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_799) {
            fun_name_890=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2469, "buffer"))));
            buffer_append_str(fun_name_890,buf_792);
            type_891=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value975=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value974=buffer_to_string(fun_name_890))))))));
            __right_value974 = come_decrement_ref_count2(__right_value974, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value975,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_891==((void*)0)) {
                klass_895=((struct sClass*)(__right_value978=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value977=buffer_to_string(fun_name_890))))));
                __right_value977 = come_decrement_ref_count2(__right_value977, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value978,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_895) {
                    __dec_obj448=type_891;
                    type_891=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2479, "sType")),buf_792,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj448,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_792);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_891->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_890,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_890,"_");
            buf2_896=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_890,buf2_896);
            node_897=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value982=buffer_to_string(fun_name_890))),info,(_Bool)0));
            __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_791;
            __result530__ = gComeFunResultObject = __result_obj__ = node_897;
            come_call_finalizer3(fun_name_890,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_896 = come_decrement_ref_count2(buf2_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_897) { node_897 = come_decrement_ref_count2(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result530__;
            come_call_finalizer3(fun_name_890,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_896 = come_decrement_ref_count2(buf2_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_897) { node_897 = come_decrement_ref_count2(node_897, ((struct sNode*)node_897)->finalize, ((struct sNode*)node_897)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_898=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2514, "buffer"))));
            buffer_append_str(fun_name_898,buf_792);
            buffer_append_str(fun_name_898,"_");
            buf2_899=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_898,buf2_899);
            node_900=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value987=buffer_to_string(fun_name_898))),info,(_Bool)0));
            __right_value987 = come_decrement_ref_count2(__right_value987, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_791;
            __result531__ = gComeFunResultObject = __result_obj__ = node_900;
            come_call_finalizer3(fun_name_898,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_899 = come_decrement_ref_count2(buf2_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_900) { node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result531__;
            come_call_finalizer3(fun_name_898,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_899 = come_decrement_ref_count2(buf2_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_900) { node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_801) {
            node_901=(struct sNode*)come_increment_ref_count(parse_function_call(buf_792,info,(_Bool)0));
            info->sline_real=sline_real_791;
            __result532__ = gComeFunResultObject = __result_obj__ = node_901;
            if(node_901) { node_901 = come_decrement_ref_count2(node_901, ((struct sNode*)node_901)->finalize, ((struct sNode*)node_901)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result532__;
            if(node_901) { node_901 = come_decrement_ref_count2(node_901, ((struct sNode*)node_901)->finalize, ((struct sNode*)node_901)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_795&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__793)) {
            node_902=(struct sNode*)come_increment_ref_count(parse_function_call(buf_792,info,(_Bool)0));
            info->sline_real=sline_real_791;
            __result533__ = gComeFunResultObject = __result_obj__ = node_902;
            if(node_902) { node_902 = come_decrement_ref_count2(node_902, ((struct sNode*)node_902)->finalize, ((struct sNode*)node_902)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result533__;
            if(node_902) { node_902 = come_decrement_ref_count2(node_902, ((struct sNode*)node_902)->finalize, ((struct sNode*)node_902)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_903=(struct sNode*)come_increment_ref_count(string_node_v21(buf_792,head_789,head_sline_790,info));
            info->sline_real=sline_real_791;
            __result534__ = gComeFunResultObject = __result_obj__ = node_903;
            if(node_903) { node_903 = come_decrement_ref_count2(node_903, ((struct sNode*)node_903)->finalize, ((struct sNode*)node_903)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result534__;
            if(node_903) { node_903 = come_decrement_ref_count2(node_903, ((struct sNode*)node_903)->finalize, ((struct sNode*)node_903)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_792 = come_decrement_ref_count2(buf_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_904=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result535__ = gComeFunResultObject = __result_obj__ = node_904;
        if(node_904) { node_904 = come_decrement_ref_count2(node_904, ((struct sNode*)node_904)->finalize, ((struct sNode*)node_904)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result535__;
        if(node_904) { node_904 = come_decrement_ref_count2(node_904, ((struct sNode*)node_904)->finalize, ((struct sNode*)node_904)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result536__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result536__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj379;
struct sNode* __dec_obj380;
char* __dec_obj381;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj379=self->sname;
            __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj380=self->value;
            if(__dec_obj380) { __dec_obj380 = come_decrement_ref_count2(__dec_obj380, ((struct sNode*)__dec_obj380)->finalize, ((struct sNode*)__dec_obj380)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj381=self->value_source;
            __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result456__;
void* __right_value811 = (void*)0;
struct sReturnNode* result_787;
void* __right_value812 = (void*)0;
char* __dec_obj382;
void* __right_value813 = (void*)0;
struct sNode* __dec_obj383;
void* __right_value814 = (void*)0;
char* __dec_obj384;
struct sReturnNode* __result457__;
    if(    self==(void*)0) {
        __result456__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result456__;
    }
    result_787=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_787->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj382=result_787->sname;
        result_787->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_787->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj383=result_787->value;
        result_787->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj383) { __dec_obj383 = come_decrement_ref_count2(__dec_obj383, ((struct sNode*)__dec_obj383)->finalize, ((struct sNode*)__dec_obj383)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj384=result_787->value_source;
        result_787->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result457__ = gComeFunResultObject = __result_obj__ = result_787;
    come_call_finalizer3(result_787,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result457__;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj389;
char* __dec_obj390;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj389=self->sname;
            __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj390=self->contents;
            __dec_obj390 = come_decrement_ref_count2(__dec_obj390, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result461__;
void* __right_value834 = (void*)0;
struct sOutputNode* result_810;
void* __right_value835 = (void*)0;
char* __dec_obj391;
void* __right_value836 = (void*)0;
char* __dec_obj392;
struct sOutputNode* __result462__;
    if(    self==(void*)0) {
        __result461__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result461__;
    }
    result_810=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "sOutputNode"));
    if(    self!=((void*)0)) {
        result_810->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj391=result_810->sname;
        result_810->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_810->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj392=result_810->contents;
        result_810->contents=(char*)come_increment_ref_count(string_clone(self->contents));
        __dec_obj392 = come_decrement_ref_count2(__dec_obj392, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result462__ = gComeFunResultObject = __result_obj__ = result_810;
    come_call_finalizer3(result_810,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result462__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj395;
struct buffer* __dec_obj396;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj395=self->sname;
            __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj396=self->come_block;
            come_call_finalizer3(__dec_obj396,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result466__;
void* __right_value850 = (void*)0;
struct sComeCallNode* result_825;
void* __right_value851 = (void*)0;
char* __dec_obj397;
void* __right_value852 = (void*)0;
struct buffer* __dec_obj398;
struct sComeCallNode* __result467__;
    if(    self==(void*)0) {
        __result466__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result466__;
    }
    result_825=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_825->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj397=result_825->sname;
        result_825->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj397 = come_decrement_ref_count2(__dec_obj397, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_825->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj398=result_825->come_block;
        result_825->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj398,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_825->come_block_sline=self->come_block_sline;
    }
    __result467__ = gComeFunResultObject = __result_obj__ = result_825;
    come_call_finalizer3(result_825,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj399;
struct sNode* __dec_obj400;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj399=self->sname;
            __dec_obj399 = come_decrement_ref_count2(__dec_obj399, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj400=self->node;
            if(__dec_obj400) { __dec_obj400 = come_decrement_ref_count2(__dec_obj400, ((struct sNode*)__dec_obj400)->finalize, ((struct sNode*)__dec_obj400)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result469__;
void* __right_value857 = (void*)0;
struct sComeJoinNode* result_829;
void* __right_value858 = (void*)0;
char* __dec_obj401;
void* __right_value859 = (void*)0;
struct sNode* __dec_obj402;
struct sComeJoinNode* __result470__;
    if(    self==(void*)0) {
        __result469__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    result_829=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
    if(    self!=((void*)0)) {
        result_829->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj401=result_829->sname;
        result_829->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj401 = come_decrement_ref_count2(__dec_obj401, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_829->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj402=result_829->node;
        result_829->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj402) { __dec_obj402 = come_decrement_ref_count2(__dec_obj402, ((struct sNode*)__dec_obj402)->finalize, ((struct sNode*)__dec_obj402)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result470__ = gComeFunResultObject = __result_obj__ = result_829;
    come_call_finalizer3(result_829,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result470__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result472__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result472__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result472__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value870 = (void*)0;
struct list_item$1sBlockph* litem_836;
struct sBlock* __dec_obj404;
void* __right_value871 = (void*)0;
struct list_item$1sBlockph* litem_837;
struct sBlock* __dec_obj405;
void* __right_value872 = (void*)0;
struct list_item$1sBlockph* litem_838;
struct sBlock* __dec_obj406;
struct list$1sBlockph* __result473__;
    if(    self->len==0) {
        litem_836=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value870=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sBlockph"))));
        litem_836->prev=((void*)0);
        litem_836->next=((void*)0);
        __dec_obj404=litem_836->item;
        litem_836->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj404,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_836;
        self->head=litem_836;
    }
    else if(    self->len==1) {
        litem_837=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value871=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sBlockph"))));
        litem_837->prev=self->head;
        litem_837->next=((void*)0);
        __dec_obj405=litem_837->item;
        litem_837->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj405,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_837;
        self->head->next=litem_837;
    }
    else {
        litem_838=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value872=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sBlockph"))));
        litem_838->prev=self->tail;
        litem_838->next=((void*)0);
        __dec_obj406=litem_838->item;
        litem_838->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj406,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_838;
        self->tail=litem_838;
    }
    self->len++;
    __result473__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result473__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj407;
struct list$1sNodeph* __dec_obj408;
struct list$1sBlockph* __dec_obj409;
struct sBlock* __dec_obj410;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj407=self->sname;
            __dec_obj407 = come_decrement_ref_count2(__dec_obj407, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj408=self->vars;
            come_call_finalizer3(__dec_obj408,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj409=self->blocks;
            come_call_finalizer3(__dec_obj409,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj410=self->else_block;
            come_call_finalizer3(__dec_obj410,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result474__;
void* __right_value875 = (void*)0;
struct sComePollNode* result_839;
void* __right_value876 = (void*)0;
char* __dec_obj411;
void* __right_value877 = (void*)0;
struct list$1sNodeph* __dec_obj412;
void* __right_value910 = (void*)0;
struct list$1sBlockph* __dec_obj422;
void* __right_value911 = (void*)0;
struct sBlock* __dec_obj423;
struct sComePollNode* __result494__;
    if(    self==(void*)0) {
        __result474__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result474__;
    }
    result_839=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_839->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj411=result_839->sname;
        result_839->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj411 = come_decrement_ref_count2(__dec_obj411, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_839->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj412=result_839->vars;
        result_839->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj412,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj422=result_839->blocks;
        result_839->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj422,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj423=result_839->else_block;
        result_839->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer3(__dec_obj423,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_839->time_out=self->time_out;
    }
    __result494__ = gComeFunResultObject = __result_obj__ = result_839;
    come_call_finalizer3(result_839,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result494__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result475__;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1sBlockph* result_840;
struct list_item$1sBlockph* it_841;
void* __right_value909 = (void*)0;
struct list$1sBlockph* __result493__;
    if(    self==((void*)0)) {
        __result475__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result475__;
    }
    result_840=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sBlockph"))));
    it_841=self->head;
    while(it_841!=((void*)0)) {
        list$1sBlockph_add(result_840,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_841->item)));
        it_841=it_841->next;
    }
    __result493__ = gComeFunResultObject = __result_obj__ = result_840;
    come_call_finalizer3(result_840,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result493__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result476__;
void* __right_value880 = (void*)0;
struct sBlock* result_842;
void* __right_value884 = (void*)0;
struct list$1sNodeph* __dec_obj413;
void* __right_value908 = (void*)0;
struct sVarTable* __dec_obj421;
struct sBlock* __result492__;
    if(    self==(void*)0) {
        __result476__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result476__;
    }
    result_842=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj413=result_842->mNodes;
        result_842->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj413,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj421=result_842->mVarTable;
        result_842->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj421,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_842->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result492__ = gComeFunResultObject = __result_obj__ = result_842;
    come_call_finalizer3(result_842,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result492__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result477__;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct list$1sNodeph* result_843;
struct list_item$1sNodeph* it_844;
void* __right_value883 = (void*)0;
struct list$1sNodeph* __result478__;
    if(    self==((void*)0)) {
        __result477__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result477__;
    }
    result_843=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_844=self->head;
    while(it_844!=((void*)0)) {
        list$1sNodeph_add(result_843,(struct sNode*)come_increment_ref_count(sNode_clone(it_844->item)));
        it_844=it_844->next;
    }
    __result478__ = gComeFunResultObject = __result_obj__ = result_843;
    come_call_finalizer3(result_843,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result478__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result479__;
void* __right_value885 = (void*)0;
struct sVarTable* result_845;
void* __right_value907 = (void*)0;
struct map$2charphsVarph* __dec_obj420;
struct sVarTable* __result491__;
    if(    self==(void*)0) {
        __result479__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result479__;
    }
    result_845=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj420=result_845->mVars;
        result_845->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj420,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_845->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_845->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_845->mID=self->mID;
    }
    __result491__ = gComeFunResultObject = __result_obj__ = result_845;
    come_call_finalizer3(result_845,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result491__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result480__;
void* __right_value886 = (void*)0;
void* __right_value892 = (void*)0;
struct map$2charphsVarph* result_847;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct list$1charp* __dec_obj415;
char* it_848;
struct sVar* default_value_849;
void* __right_value895 = (void*)0;
struct sVar* it2_852;
void* __right_value906 = (void*)0;
struct map$2charphsVarph* __result490__;
default_value_849 = (void*)0;
    if(    self==((void*)0)) {
        __result480__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result480__;
    }
    result_847=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2400, "map$2charphsVarph"))));
    __dec_obj415=result_847->key_list;
    result_847->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2402, "list$1charp"))));
    come_call_finalizer3(__dec_obj415,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_848=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_848=map$2charphsVarph_next(self)    ){
        memset(&default_value_849,0,sizeof(struct sVar*));
        it2_852=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_848,default_value_849));
        map$2charphsVarph_put(result_847,it_848,(struct sVar*)come_increment_ref_count(sVar_clone(it2_852)));
        come_call_finalizer3(it2_852,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result490__ = gComeFunResultObject = __result_obj__ = result_847;
    come_call_finalizer3(result_847,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result490__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
int i_846;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct list$1charp* __dec_obj414;
struct map$2charphsVarph* __result482__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value887=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2329, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value888=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2330, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value889=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2331, "bool"))));
    for(    i_846=0;    i_846<128;    i_846++    ){
        self->item_existance[i_846]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj414=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj414,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result482__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result482__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result481__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result481__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result481__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_850;
unsigned int it_851;
struct sVar* __result483__;
struct sVar* __result484__;
struct sVar* __result485__;
struct sVar* __result486__;
    hash_850=charp_get_hash_key(((char*)key))%self->size;
    it_851=hash_850;
    while((_Bool)1) {
        if(        self->item_existance[it_851]) {
            if(            charp_equals(self->keys[it_851],key)) {
                __result483__ = gComeFunResultObject = __result_obj__ = self->items[it_851];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result483__;
            }
            it_851++;
            if(            it_851>=self->size) {
                it_851=0;
            }
            else if(            it_851==hash_850) {
                __result484__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result484__;
            }
        }
        else {
            __result485__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result485__;
        }
    }
    __result486__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_864;
int it_865;
_Bool same_key_exist_866;
char* it2_867;
struct map$2charphsVarph* __result487__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_864=charp_get_hash_key(key)%self->size;
    it_865=hash_864;
    while((_Bool)1) {
        if(        self->item_existance[it_865]) {
            if(            charp_equals(self->keys[it_865],key)) {
                if(                1) {
                    self->keys[it_865] = come_decrement_ref_count2(self->keys[it_865], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_865]);
                    self->keys[it_865]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_865]);
                    self->keys[it_865]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_865],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_865]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_865]=item;
                }
                break;
            }
            it_865++;
            if(            it_865>=self->size) {
                it_865=0;
            }
            else if(            it_865==hash_864) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_865]=(_Bool)1;
            if(            1) {
                self->keys[it_865]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_865]=key;
            }
            if(            1) {
                self->items[it_865]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_865]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_866=(_Bool)0;
    for(    it2_867=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_867=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_867,key)) {
            same_key_exist_866=(_Bool)1;
        }
    }
    if(    !same_key_exist_866) {
        list$1charp_push_back(self->key_list,key);
    }
    __result487__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_853;
void* __right_value896 = (void*)0;
char** keys_854;
void* __right_value897 = (void*)0;
struct sVar** items_855;
void* __right_value898 = (void*)0;
_Bool* item_existance_856;
int len_857;
char* it_858;
struct sVar* default_value_859;
void* __right_value899 = (void*)0;
struct sVar* it2_860;
unsigned int hash_861;
int n_862;
struct sVar* default_value_863;
void* __right_value900 = (void*)0;
default_value_859 = (void*)0;
default_value_863 = (void*)0;
    size_853=self->size*10;
    keys_854=(char**)come_increment_ref_count(((char**)(__right_value896=(char**)come_calloc(1, sizeof(char*)*(1*(size_853)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_855=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value897=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_853)), "/usr/local/include/comelang.h", 2558, "sVar*%"))));
    item_existance_856=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value898=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_853)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_857=0;
    for(    it_858=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_858=map$2charphsVarph_next(self)    ){
        memset(&default_value_859,0,sizeof(struct sVar*));
        it2_860=((struct sVar*)(__right_value899=map$2charphsVarph_at(self,it_858,default_value_859)));
        come_call_finalizer3(__right_value899,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_861=charp_get_hash_key(it_858)%size_853;
        n_862=hash_861;
        while((_Bool)1) {
            if(            item_existance_856[n_862]) {
                n_862++;
                if(                n_862>=size_853) {
                    n_862=0;
                }
                else if(                n_862==hash_861) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_856[n_862]=(_Bool)1;
                keys_854[n_862]=it_858;
                items_855[n_862]=((struct sVar*)(__right_value900=map$2charphsVarph_at(self,it_858,default_value_863)));
                come_call_finalizer3(__right_value900,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_857++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_854;
    self->items=items_855;
    self->item_existance=item_existance_856;
    self->size=size_853;
    self->len=len_857;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result488__;
void* __right_value901 = (void*)0;
struct sVar* result_868;
void* __right_value902 = (void*)0;
char* __dec_obj416;
void* __right_value903 = (void*)0;
char* __dec_obj417;
void* __right_value904 = (void*)0;
struct sType* __dec_obj418;
void* __right_value905 = (void*)0;
char* __dec_obj419;
struct sVar* __result489__;
    if(    self==(void*)0) {
        __result488__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result488__;
    }
    result_868=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj416=result_868->mName;
        result_868->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj416 = come_decrement_ref_count2(__dec_obj416, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj417=result_868->mCValueName;
        result_868->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        __dec_obj417 = come_decrement_ref_count2(__dec_obj417, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj418=result_868->mType;
        result_868->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj418,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_868->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_868->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_868->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_868->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_868->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj419=result_868->mFunName;
        result_868->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        __dec_obj419 = come_decrement_ref_count2(__dec_obj419, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result489__ = gComeFunResultObject = __result_obj__ = result_868;
    come_call_finalizer3(result_868,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result489__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_869;
int i_870;
    for(    i_869=0;    i_869<self->size;    i_869++    ){
        if(        self->item_existance[i_869]) {
            if(            1) {
                come_call_finalizer3(self->items[i_869],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_870=0;    i_870<self->size;    i_870++    ){
        if(        self->item_existance[i_870]) {
            if(            1) {
                self->keys[i_870] = come_decrement_ref_count2(self->keys[i_870], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj424;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj424=self->sname;
            __dec_obj424 = come_decrement_ref_count2(__dec_obj424, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result498__;
void* __right_value917 = (void*)0;
struct sFuncNode* result_873;
void* __right_value918 = (void*)0;
char* __dec_obj425;
struct sFuncNode* __result499__;
    if(    self==(void*)0) {
        __result498__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result498__;
    }
    result_873=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_873->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj425=result_873->sname;
        result_873->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj425 = come_decrement_ref_count2(__dec_obj425, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_873->sline_real=self->sline_real;
    }
    __result499__ = gComeFunResultObject = __result_obj__ = result_873;
    come_call_finalizer3(result_873,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result499__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj426;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj426=self->sname;
            __dec_obj426 = come_decrement_ref_count2(__dec_obj426, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result501__;
void* __right_value922 = (void*)0;
struct sWildCard* result_874;
void* __right_value923 = (void*)0;
char* __dec_obj427;
struct sWildCard* __result502__;
    if(    self==(void*)0) {
        __result501__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result501__;
    }
    result_874=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_874->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj427=result_874->sname;
        result_874->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj427 = come_decrement_ref_count2(__dec_obj427, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_874->sline_real=self->sline_real;
    }
    __result502__ = gComeFunResultObject = __result_obj__ = result_874;
    come_call_finalizer3(result_874,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result502__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj428;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj428=self->sname;
            __dec_obj428 = come_decrement_ref_count2(__dec_obj428, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result504__;
void* __right_value927 = (void*)0;
struct sLineNode* result_875;
void* __right_value928 = (void*)0;
char* __dec_obj429;
struct sLineNode* __result505__;
    if(    self==(void*)0) {
        __result504__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result504__;
    }
    result_875=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_875->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj429=result_875->sname;
        result_875->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj429 = come_decrement_ref_count2(__dec_obj429, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_875->sline_real=self->sline_real;
    }
    __result505__ = gComeFunResultObject = __result_obj__ = result_875;
    come_call_finalizer3(result_875,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result505__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj430;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj430=self->sname;
            __dec_obj430 = come_decrement_ref_count2(__dec_obj430, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result507__;
void* __right_value932 = (void*)0;
struct sSNameNode* result_876;
void* __right_value933 = (void*)0;
char* __dec_obj431;
struct sSNameNode* __result508__;
    if(    self==(void*)0) {
        __result507__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result507__;
    }
    result_876=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_876->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj431=result_876->sname;
        result_876->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj431 = come_decrement_ref_count2(__dec_obj431, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_876->sline_real=self->sline_real;
    }
    __result508__ = gComeFunResultObject = __result_obj__ = result_876;
    come_call_finalizer3(result_876,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result508__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj432;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj432=self->sname;
            __dec_obj432 = come_decrement_ref_count2(__dec_obj432, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result510__;
void* __right_value937 = (void*)0;
struct sCallerFuncNode* result_877;
void* __right_value938 = (void*)0;
char* __dec_obj433;
struct sCallerFuncNode* __result511__;
    if(    self==(void*)0) {
        __result510__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result510__;
    }
    result_877=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_877->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj433=result_877->sname;
        result_877->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj433 = come_decrement_ref_count2(__dec_obj433, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_877->sline_real=self->sline_real;
    }
    __result511__ = gComeFunResultObject = __result_obj__ = result_877;
    come_call_finalizer3(result_877,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result511__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj434;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj434=self->sname;
            __dec_obj434 = come_decrement_ref_count2(__dec_obj434, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result513__;
void* __right_value942 = (void*)0;
struct sCallerLineNode* result_878;
void* __right_value943 = (void*)0;
char* __dec_obj435;
struct sCallerLineNode* __result514__;
    if(    self==(void*)0) {
        __result513__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result513__;
    }
    result_878=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_878->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj435=result_878->sname;
        result_878->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj435 = come_decrement_ref_count2(__dec_obj435, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_878->sline_real=self->sline_real;
    }
    __result514__ = gComeFunResultObject = __result_obj__ = result_878;
    come_call_finalizer3(result_878,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result514__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj436;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj436=self->sname;
            __dec_obj436 = come_decrement_ref_count2(__dec_obj436, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result516__;
void* __right_value947 = (void*)0;
struct sCallerSNameNode* result_879;
void* __right_value948 = (void*)0;
char* __dec_obj437;
struct sCallerSNameNode* __result517__;
    if(    self==(void*)0) {
        __result516__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result516__;
    }
    result_879=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_879->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj437=result_879->sname;
        result_879->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj437 = come_decrement_ref_count2(__dec_obj437, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_879->sline_real=self->sline_real;
    }
    __result517__ = gComeFunResultObject = __result_obj__ = result_879;
    come_call_finalizer3(result_879,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result517__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj438;
struct sType* __dec_obj439;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj438=self->sname;
            __dec_obj438 = come_decrement_ref_count2(__dec_obj438, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj439=self->type;
            come_call_finalizer3(__dec_obj439,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result519__;
void* __right_value953 = (void*)0;
struct sVarArgTypeName* result_883;
void* __right_value954 = (void*)0;
char* __dec_obj440;
void* __right_value955 = (void*)0;
struct sType* __dec_obj441;
struct sVarArgTypeName* __result520__;
    if(    self==(void*)0) {
        __result519__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result519__;
    }
    result_883=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_883->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj440=result_883->sname;
        result_883->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj440 = come_decrement_ref_count2(__dec_obj440, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_883->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj441=result_883->type;
        result_883->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj441,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result520__ = gComeFunResultObject = __result_obj__ = result_883;
    come_call_finalizer3(result_883,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result520__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj442;
char* __dec_obj443;
struct list$1sNodeph* __dec_obj444;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj442=self->sname;
            __dec_obj442 = come_decrement_ref_count2(__dec_obj442, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj443=self->source;
            __dec_obj443 = come_decrement_ref_count2(__dec_obj443, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj444=self->exps;
            come_call_finalizer3(__dec_obj444,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result523__;
void* __right_value967 = (void*)0;
struct sInlineAssembler* result_889;
void* __right_value968 = (void*)0;
char* __dec_obj445;
void* __right_value969 = (void*)0;
char* __dec_obj446;
void* __right_value970 = (void*)0;
struct list$1sNodeph* __dec_obj447;
struct sInlineAssembler* __result524__;
    if(    self==(void*)0) {
        __result523__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result523__;
    }
    result_889=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_889->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj445=result_889->sname;
        result_889->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj445 = come_decrement_ref_count2(__dec_obj445, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_889->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj446=result_889->source;
        result_889->source=(char*)come_increment_ref_count(string_clone(self->source));
        __dec_obj446 = come_decrement_ref_count2(__dec_obj446, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj447=result_889->exps;
        result_889->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj447,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result524__ = gComeFunResultObject = __result_obj__ = result_889;
    come_call_finalizer3(result_889,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result524__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_892;
unsigned int hash_893;
unsigned int it_894;
struct sType* __result526__;
struct sType* __result527__;
struct sType* __result528__;
struct sType* __result529__;
default_value_892 = (void*)0;
    memset(&default_value_892,0,sizeof(struct sType*));
    hash_893=charp_get_hash_key(((char*)key))%self->size;
    it_894=hash_893;
    while((_Bool)1) {
        if(        self->item_existance[it_894]) {
            if(            charp_equals(self->keys[it_894],key)) {
                __result526__ = gComeFunResultObject = __result_obj__ = self->items[it_894];
                come_call_finalizer3(default_value_892,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result526__;
            }
            it_894++;
            if(            it_894>=self->size) {
                it_894=0;
            }
            else if(            it_894==hash_893) {
                __result527__ = gComeFunResultObject = __result_obj__ = default_value_892;
                come_call_finalizer3(default_value_892,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result527__;
            }
        }
        else {
            __result528__ = gComeFunResultObject = __result_obj__ = default_value_892;
            come_call_finalizer3(default_value_892,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result528__;
        }
    }
    __result529__ = gComeFunResultObject = __result_obj__ = default_value_892;
    come_call_finalizer3(default_value_892,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result529__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value993 = (void*)0;
struct sNode* __result537__;
    __result537__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value993=expression_node_v99(info)));
    if(__right_value993) { __right_value993 = come_decrement_ref_count2(__right_value993, ((struct sNode*)__right_value993)->finalize, ((struct sNode*)__right_value993)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result537__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct sNode* __dec_obj449;
struct sNode* __result538__;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sNode* __dec_obj450;
struct sNode* __result539__;
struct sNode* __result540__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj449=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj449) { __dec_obj449 = come_decrement_ref_count2(__dec_obj449, ((struct sNode*)__dec_obj449)->finalize, ((struct sNode*)__dec_obj449)->_protocol_obj, 0,0,0, (void*)0); };
        __result538__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result538__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj450=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj450) { __dec_obj450 = come_decrement_ref_count2(__dec_obj450, ((struct sNode*)__dec_obj450)->finalize, ((struct sNode*)__dec_obj450)->_protocol_obj, 0,0,0, (void*)0); };
        __result539__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result539__;
    }
    __result540__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result540__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value998 = (void*)0;
struct sNode* node_905;
void* __right_value999 = (void*)0;
struct sNode* __dec_obj451;
struct sNode* __result541__;
    node_905=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj451=node_905;
    node_905=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_905),info));
    if(__dec_obj451) { __dec_obj451 = come_decrement_ref_count2(__dec_obj451, ((struct sNode*)__dec_obj451)->finalize, ((struct sNode*)__dec_obj451)->_protocol_obj, 0,0,0, (void*)0); };
    __result541__ = gComeFunResultObject = __result_obj__ = node_905;
    if(node_905) { node_905 = come_decrement_ref_count2(node_905, ((struct sNode*)node_905)->finalize, ((struct sNode*)node_905)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result541__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_906;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct buffer* buf_907;
void* __right_value1002 = (void*)0;
char* __dec_obj452;
int i_908;
void* __right_value1003 = (void*)0;
char* __dec_obj453;
void* __right_value1004 = (void*)0;
char* __dec_obj454;
int i_909;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
char* __result542__;
struct_name_906 = (void*)0;
    buf_907=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2600, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj452=struct_name_906;
        struct_name_906=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj452 = come_decrement_ref_count2(__dec_obj452, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_908=0;            i_908<obj_type->mOriginalTypeNamePointerNum;            i_908++            ){
                buffer_append_str(buf_907,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj453=struct_name_906;
        struct_name_906=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj453 = come_decrement_ref_count2(__dec_obj453, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj454=struct_name_906;
        struct_name_906=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj454 = come_decrement_ref_count2(__dec_obj454, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_909=0;        i_909<obj_type->mPointerNum;        i_909++        ){
            buffer_append_str(buf_907,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_907,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_907,"pa");
    }
    __result542__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1006=xsprintf("%s%s_%s",struct_name_906,((char*)(__right_value1005=buffer_to_string(buf_907))),fun_name)));
    struct_name_906 = come_decrement_ref_count2(struct_name_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_907,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value1006 = come_decrement_ref_count2(__right_value1006, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result542__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_910;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct buffer* buf_911;
void* __right_value1009 = (void*)0;
char* __dec_obj455;
void* __right_value1010 = (void*)0;
char* __dec_obj456;
int i_912;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
char* __result543__;
struct_name_910 = (void*)0;
    buf_911=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2635, "buffer"))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj455=struct_name_910;
        struct_name_910=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj455 = come_decrement_ref_count2(__dec_obj455, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj456=struct_name_910;
        struct_name_910=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj456 = come_decrement_ref_count2(__dec_obj456, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_912=0;        i_912<obj_type->mPointerNum;        i_912++        ){
            buffer_append_str(buf_911,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_911,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_911,"pa");
    }
    __result543__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1012=xsprintf("%s%s_%s",struct_name_910,((char*)(__right_value1011=buffer_to_string(buf_911))),fun_name)));
    struct_name_910 = come_decrement_ref_count2(struct_name_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_911,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1011 = come_decrement_ref_count2(__right_value1011, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value1012 = come_decrement_ref_count2(__right_value1012, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result543__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_913;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct buffer* buf_914;
void* __right_value1015 = (void*)0;
char* __dec_obj457;
int i_915;
void* __right_value1016 = (void*)0;
char* __dec_obj458;
void* __right_value1017 = (void*)0;
char* __dec_obj459;
int i_916;
void* __right_value1018 = (void*)0;
int len_918;
void* __right_value1019 = (void*)0;
char* __result544__;
struct_name_913 = (void*)0;
    buf_914=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2661, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj457=struct_name_913;
        struct_name_913=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj457 = come_decrement_ref_count2(__dec_obj457, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_915=0;            i_915<obj_type->mOriginalTypeNamePointerNum;            i_915++            ){
                buffer_append_str(buf_914,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj458=struct_name_913;
        struct_name_913=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj458 = come_decrement_ref_count2(__dec_obj458, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj459=struct_name_913;
        struct_name_913=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj459 = come_decrement_ref_count2(__dec_obj459, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_916=0;        i_916<obj_type->mPointerNum;        i_916++        ){
            buffer_append_str(buf_914,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_914,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_914,"pa");
    }
    char none_method_name_917[charp_length(fun_name)+1];
    memset(&none_method_name_917, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_918=string_length(struct_name_913)+string_length(((char*)(__right_value1018=buffer_to_string(buf_914))));
    __right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_917,fun_name+len_918+1,charp_length(fun_name)-len_918-1);
    none_method_name_917[charp_length(fun_name)-len_918-1]=0;
    __result544__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1019=__builtin_string(none_method_name_917)));
    struct_name_913 = come_decrement_ref_count2(struct_name_913, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_914,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1019 = come_decrement_ref_count2(__right_value1019, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result544__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value1020 = (void*)0;
char* struct_name_919;
void* __right_value1021 = (void*)0;
char* __result545__;
    struct_name_919=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result545__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1021=xsprintf("%s_%s",struct_name_919,fun_name)));
    struct_name_919 = come_decrement_ref_count2(struct_name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value1021 = come_decrement_ref_count2(__right_value1021, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result545__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result546__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result546__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result546__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_920;
char* p_921;
int sline_922;
_Bool err_flag_923;
void* __right_value1024 = (void*)0;
char* label_924;
void* __right_value1025 = (void*)0;
char* __dec_obj460;
char* __dec_obj461;
_Bool no_comma_925;
_Bool in_fun_param_926;
void* __right_value1026 = (void*)0;
struct sNode* node_927;
void* __right_value1027 = (void*)0;
struct sNode* __dec_obj462;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1036 = (void*)0;
struct sNode* __result549__;
struct sNode* __result550__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_920=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2724, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_921=info->p;
            sline_922=info->sline;
            err_flag_923=(_Bool)0;
            label_924=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj460=label_924;
                label_924=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj460 = come_decrement_ref_count2(__dec_obj460, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_923=(_Bool)1;
            }
            if(            err_flag_923==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj461=label_924;
                label_924=((void*)0);
                __dec_obj461 = come_decrement_ref_count2(__dec_obj461, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_921;
                info->sline=sline_922;
            }
            no_comma_925=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_926=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_927=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj462=node_927;
            node_927=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_927),info));
            if(__dec_obj462) { __dec_obj462 = come_decrement_ref_count2(__dec_obj462, ((struct sNode*)__dec_obj462)->finalize, ((struct sNode*)__dec_obj462)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_925;
            info->in_fun_param=in_fun_param_926;
            list$1tuple2$2charphsNodephph_push_back(params_920,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2767, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_924),(struct sNode*)come_increment_ref_count(node_927))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_924 = come_decrement_ref_count2(label_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_927) { node_927 = come_decrement_ref_count2(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_924 = come_decrement_ref_count2(label_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_927) { node_927 = come_decrement_ref_count2(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2785, "struct sNode");
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1031=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2785, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_920,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result549__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1036=_inf_value21));
        come_call_finalizer3(params_920,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1031,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1036) { __right_value1036 = come_decrement_ref_count2(__right_value1036, ((struct sNode*)__right_value1036)->finalize, ((struct sNode*)__right_value1036)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result549__;
        come_call_finalizer3(params_920,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result550__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result550__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj463;
struct sNode* __dec_obj464;
struct list$1tuple2$2charphsNodephph* __dec_obj465;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj463=self->sname;
            __dec_obj463 = come_decrement_ref_count2(__dec_obj463, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj464=self->node;
            if(__dec_obj464) { __dec_obj464 = come_decrement_ref_count2(__dec_obj464, ((struct sNode*)__dec_obj464)->finalize, ((struct sNode*)__dec_obj464)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj465=self->params;
            come_call_finalizer3(__dec_obj465,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result547__;
void* __right_value1032 = (void*)0;
struct sLambdaCall* result_928;
void* __right_value1033 = (void*)0;
char* __dec_obj466;
void* __right_value1034 = (void*)0;
struct sNode* __dec_obj467;
void* __right_value1035 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj468;
struct sLambdaCall* __result548__;
    if(    self==(void*)0) {
        __result547__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result547__;
    }
    result_928=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_928->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj466=result_928->sname;
        result_928->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj466 = come_decrement_ref_count2(__dec_obj466, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_928->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj467=result_928->node;
        result_928->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj467) { __dec_obj467 = come_decrement_ref_count2(__dec_obj467, ((struct sNode*)__dec_obj467)->finalize, ((struct sNode*)__dec_obj467)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj468=result_928->params;
        result_928->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj468,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result548__ = gComeFunResultObject = __result_obj__ = result_928;
    come_call_finalizer3(result_928,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result548__;
}

