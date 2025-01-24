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
    struct list$1objectph* right_value_objects;
    struct sType* generics_type;
    struct list$1objectph* method_generics_types;
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
    struct list$1objectph* method_generics_types;
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1objectph* method_generics_types, struct sInfo* info);
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
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
char* make_method_generics_function(char* fun_name, struct list$1objectph* method_generics_types, struct sInfo* info);
static void list$1objectph_finalize(struct list$1objectph* self);
static void list_item$1objectphp_finalize(struct list_item$1objectph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void list$1objectphp_finalize(struct list$1objectph* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1objectph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
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
static int list$1objectph_length(struct list$1objectph* self);
static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void list$1objectphp_operator_store_element(struct list$1objectph* self, int position, struct object* item);
static struct list$1objectph* list$1objectph_replace(struct list$1objectph* self, int position, struct object* item);
static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1objectph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self);
static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item);
static void object_finalize(struct object* self);
static struct object* object_clone(struct object* self);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sType_finalize(struct sType* self);
static struct sType* sType_clone(struct sType* self);
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
void* __right_value291 = (void*)0;
struct sType* result_type_267;
void* __right_value292 = (void*)0;
struct sType* result_type2_296;
struct sType* result_type3_297;
void* __right_value293 = (void*)0;
_Bool _if_conditional1;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj90;
_Bool Value_298;
_Bool __result226__;
void* __right_value295 = (void*)0;
struct CVALUE* come_value_299;
void* __right_value296 = (void*)0;
struct sType* come_value_type_300;
void* __right_value297 = (void*)0;
struct sType* __dec_obj91;
void* __right_value298 = (void*)0;
char* var_name_302;
int num_result_stack_303;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __if_result__0_304 = (void*)0;
struct list$1sVarph* o2_saved_305;
struct sVar* it_308;
struct list$1sVarph* __dec_obj97;
void* __right_value301 = (void*)0;
struct sFun* come_fun_315;
void* __if_result__1_316 = (void*)0;
struct list$1sVarph* o2_saved_317;
struct sVar* it_318;
struct list$1sVarph* __dec_obj101;
void* __right_value302 = (void*)0;
    if(    self->value) {
        come_fun_266=info->come_fun;
        result_type_267=(struct sType*)come_increment_ref_count(sType_clone(come_fun_266->mResultType));
        result_type2_296=(struct sType*)come_increment_ref_count(solve_generics(result_type_267,info->generics_type,info));
        result_type3_297=result_type2_296->mNoSolvedGenericsType->v1;
        if(        result_type2_296->mNoSolvedGenericsType->v1) {
            result_type3_297=result_type2_296->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_297=result_type2_296;
        }
        if(        result_type_267->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value293=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj90=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_298=node_compile(self->value,info);
        if(        !Value_298) {
            __result226__ = (_Bool)0;
            come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result226__;
        }
        else {
        }
        come_value_299=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_300=(struct sType*)come_increment_ref_count(solve_generics(come_value_299->type,info->generics_type,info));
        __dec_obj91=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_299->type));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_299->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_266->mBlock,info,come_value_299->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_299->c_value);
        }
        else {
            static int num_result_301=0;
            var_name_302=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_301));
            num_result_stack_303=num_result_301;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_296->mClass->mName)>strlen("tuple")&&memcmp(result_type2_296->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_296,come_value_type_300,come_value_299,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value299=make_define_var(result_type2_296,var_name_302,(_Bool)0,info))));
                __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_302,come_value_299->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value300=make_define_var(result_type2_296,var_name_302,(_Bool)0,info))));
                __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_302,come_value_299->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_266->mBlock,info,come_value_299->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_305=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_308=list$1sVarph_begin((o2_saved_305));                    !list$1sVarph_end((o2_saved_305));                    it_308=list$1sVarph_next((o2_saved_305))                    ){
                        free_object(it_308->mType,it_308->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_305,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj97=info->match_it_var;
                    __if_result__0_304=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj97,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_304,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value301=xsprintf("come_heap_final();\n"))));
                __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_303);
            var_name_302 = come_decrement_ref_count2(var_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_296,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_315=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_315->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_317=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_318=list$1sVarph_begin((o2_saved_317));                !list$1sVarph_end((o2_saved_317));                it_318=list$1sVarph_next((o2_saved_317))                ){
                    free_object(it_318->mType,it_318->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_317,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj101=info->match_it_var;
                __if_result__1_316=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj101,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_316,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value302=xsprintf("come_heap_final();\n"))));
            __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_270;
struct list_item$1sTypeph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer3(prev_it_271,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj48;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj48=self->item;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_272;
struct list_item$1sTypeph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        come_call_finalizer3(prev_it_273,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_278;
struct list_item$1charph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
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

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj63;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj63=self->v1;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result212__;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1sTypeph* result_280;
struct list_item$1sTypeph* it_281;
void* __right_value265 = (void*)0;
struct list$1sTypeph* __result215__;
    if(    self==((void*)0)) {
        __result212__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_280=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_281=self->head;
    while(it_281!=((void*)0)) {
        list$1sTypeph_add(result_280,(struct sType*)come_increment_ref_count(sType_clone(it_281->item)));
        it_281=it_281->next;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_280;
    come_call_finalizer3(result_280,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result213__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result213__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_282;
struct sType* __dec_obj69;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_283;
struct sType* __dec_obj70;
void* __right_value264 = (void*)0;
struct list_item$1sTypeph* litem_284;
struct sType* __dec_obj71;
struct list$1sTypeph* __result214__;
    if(    self->len==0) {
        litem_282=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj69=litem_282->item;
        litem_282->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj70=litem_283->item;
        litem_283->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value264=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj71=litem_284->item;
        litem_284->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result216__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sNodeph* result_285;
struct list_item$1sNodeph* it_286;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __result221__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_285=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_286=self->head;
    while(it_286!=((void*)0)) {
        list$1sNodeph_add(result_285,(struct sNode*)come_increment_ref_count(sNode_clone(it_286->item)));
        it_286=it_286->next;
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_285;
    come_call_finalizer3(result_285,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result217__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result217__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_287;
struct sNode* __dec_obj73;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_288;
struct sNode* __dec_obj74;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_289;
struct sNode* __dec_obj75;
struct list$1sNodeph* __result218__;
    if(    self->len==0) {
        litem_287=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_287->prev=((void*)0);
        litem_287->next=((void*)0);
        __dec_obj73=litem_287->item;
        litem_287->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_287;
        self->head=litem_287;
    }
    else if(    self->len==1) {
        litem_288=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_288->prev=self->head;
        litem_288->next=((void*)0);
        __dec_obj74=litem_288->item;
        litem_288->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_288;
        self->head->next=litem_288;
    }
    else {
        litem_289=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_289->prev=self->tail;
        litem_289->next=((void*)0);
        __dec_obj75=litem_289->item;
        litem_289->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_289;
        self->tail=litem_289;
    }
    self->len++;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result219__;
void* __right_value272 = (void*)0;
struct sNode* result_290;
struct sNode* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_290=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_290->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_290->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_290->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_290->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_290->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_290->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_290->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_290->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_290->kind=self->kind;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_290;
    if(result_290) { result_290 = come_decrement_ref_count2(result_290, ((struct sNode*)result_290)->finalize, ((struct sNode*)result_290)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result222__;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1charph* result_291;
struct list_item$1charph* it_292;
void* __right_value281 = (void*)0;
struct list$1charph* __result224__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_291=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_292=self->head;
    while(it_292!=((void*)0)) {
        list$1charph_add(result_291,(char*)come_increment_ref_count(string_clone(it_292->item)));
        it_292=it_292->next;
    }
    __result224__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_293;
char* __dec_obj78;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_294;
char* __dec_obj79;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_295;
char* __dec_obj80;
struct list$1charph* __result223__;
    if(    self->len==0) {
        litem_293=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_293->prev=((void*)0);
        litem_293->next=((void*)0);
        __dec_obj78=litem_293->item;
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_293;
        self->head=litem_293;
    }
    else if(    self->len==1) {
        litem_294=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_294->prev=self->head;
        litem_294->next=((void*)0);
        __dec_obj79=litem_294->item;
        litem_294->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_294;
        self->head->next=litem_294;
    }
    else {
        litem_295=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_295->prev=self->tail;
        litem_295->next=((void*)0);
        __dec_obj80=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_295;
        self->tail=litem_295;
    }
    self->len++;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_306;
struct sVar* __result227__;
struct sVar* __result228__;
struct sVar* result_307;
struct sVar* __result229__;
result_306 = (void*)0;
result_307 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_306,0,sizeof(struct sVar*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_306;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->head;
    if(    self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_307,0,sizeof(struct sVar*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_307;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_309;
struct sVar* __result230__;
struct sVar* __result231__;
struct sVar* result_310;
struct sVar* __result232__;
result_309 = (void*)0;
result_310 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_309,0,sizeof(struct sVar*));
        __result230__ = gComeFunResultObject = __result_obj__ = result_309;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result231__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    memset(&result_310,0,sizeof(struct sVar*));
    __result232__ = gComeFunResultObject = __result_obj__ = result_310;
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_311;
struct list_item$1sVarph* prev_it_312;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        come_call_finalizer3(prev_it_312,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj92;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj92=self->item;
            come_call_finalizer3(__dec_obj92,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj93;
char* __dec_obj94;
struct sType* __dec_obj95;
char* __dec_obj96;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj93=self->mName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj94=self->mCValueName;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj95=self->mType;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj96=self->mFunName;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_313;
struct list_item$1sVarph* prev_it_314;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        come_call_finalizer3(prev_it_314,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj98;
struct sType* __dec_obj99;
char* __dec_obj100;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj98=self->c_value;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj99=self->type;
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj100=self->c_value_without_right_value_objects;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __dec_obj102;
struct sOutputNode* __result233__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj102=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sOutputNode")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
char* __dec_obj105;
struct list$1sNodeph* __dec_obj106;
struct sInlineAssembler* __result235__;
    ((struct sNodeBase*)(__right_value305=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value305,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj106,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
char* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value306=__builtin_string("sInlineAssembler")));
    __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_319;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_320;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct buffer* buf_321;
char* p_322;
_Bool dquort_323;
int num_exp_324;
void* __right_value311 = (void*)0;
struct sNode* node_325;
_Bool Value_329;
_Bool __result239__;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_330;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* __dec_obj110;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* __dec_obj111;
_Bool __result241__;
    source_319=(char*)come_increment_ref_count(self->source);
    come_value_320=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "CVALUE"))));
    buf_321=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "buffer"))));
    p_322=source_319;
    while(*p_322!=40) {
        buffer_append_char(buf_321,*p_322);
        p_322++;
    }
    if(    *p_322==40) {
        buffer_append_char(buf_321,*p_322);
        p_322++;
        while(*p_322==32||*p_322==9||*p_322==10) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
        }
    }
    dquort_323=(_Bool)0;
    num_exp_324=0;
    while(*p_322) {
        if(        *p_322==34) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
            dquort_323=!dquort_323;
        }
        else if(        dquort_323) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
        }
        else if(        *p_322==40) {
            buffer_append_char(buf_321,*p_322);
            p_322++;
            node_325=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_324++));
            Value_329=node_compile(node_325,info);
            if(            !Value_329) {
                __result239__ = (_Bool)0;
                if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_319 = come_decrement_ref_count2(source_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result239__;
            }
            else {
            }
            come_value_330=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_321,come_value_330->c_value);
            if(            *p_322==41) {
                buffer_append_char(buf_321,*p_322);
                p_322++;
            }
            if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_330,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_321,*p_322);
            p_322++;
        }
    }
    __dec_obj110=come_value_320->c_value;
    come_value_320->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value313=buffer_to_string(buf_321)))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj111=come_value_320->type;
    come_value_320->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_320->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_320));
    add_come_last_code(info,"%s",come_value_320->c_value);
    __result241__ = (_Bool)1;
    source_319 = come_decrement_ref_count2(source_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result241__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_326;
int i_327;
struct sNode* __result237__;
struct sNode* default_value_328;
struct sNode* __result238__;
default_value_328 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_326=self->head;
    i_327=0;
    while(it_326!=((void*)0)) {
        if(        position==i_327) {
            __result237__ = gComeFunResultObject = __result_obj__ = it_326->item;
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
        it_326=it_326->next;
        i_327++;
    }
    memset(&default_value_328,0,sizeof(struct sNode*));
    __result238__ = gComeFunResultObject = __result_obj__ = default_value_328;
    if(default_value_328) { default_value_328 = come_decrement_ref_count2(default_value_328, ((struct sNode*)default_value_328)->finalize, ((struct sNode*)default_value_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
struct list_item$1CVALUEph* litem_331;
struct CVALUE* __dec_obj112;
void* __right_value318 = (void*)0;
struct list_item$1CVALUEph* litem_332;
struct CVALUE* __dec_obj113;
void* __right_value319 = (void*)0;
struct list_item$1CVALUEph* litem_333;
struct CVALUE* __dec_obj114;
struct list$1CVALUEph* __result240__;
    if(    self->len==0) {
        litem_331=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value317=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj112=litem_331->item;
        litem_331->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value318=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj113=litem_332->item;
        litem_332->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value319=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj114=litem_333->item;
        litem_333->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct sCurrentNode2* __result242__;
    ((struct sNodeBase*)(__right_value320=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value320,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
char* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value321=__builtin_string(self->sname)));
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
char* __result244__;
    __result244__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value322=__builtin_string("sCurrentNode")));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value323 = (void*)0;
char* class_name_334;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sClass* current_stack_335;
struct sVarTable* vtable_336;
struct map$2charphsVarph* o2_saved_337;
char* it_340;
char* key_343;
void* __right_value326 = (void*)0;
struct sVar* value_344;
void* __right_value327 = (void*)0;
struct sType* type2_348;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct tuple2$2charphsTypeph* item_349;
void* __right_value331 = (void*)0;
struct sType* type3_350;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct tuple2$2charphsTypeph* item2_353;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct map$2charphsVarph* o2_saved_405;
char* it_406;
char* key_407;
void* __right_value348 = (void*)0;
struct sVar* value_408;
void* __right_value349 = (void*)0;
struct sType* type2_409;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple2$2charphsTypeph* item_410;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_411;
void* __right_value354 = (void*)0;
char* __dec_obj139;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* __dec_obj140;
_Bool __result281__;
    info->current_stack_num++;
    class_name_334=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_335=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 457, "sClass")),class_name_334,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_336=info->lv_table;
    while(vtable_336) {
        for(        o2_saved_337=(struct map$2charphsVarph*)come_increment_ref_count((vtable_336->mVars)),it_340=map$2charphsVarph_begin((o2_saved_337));        !map$2charphsVarph_end((o2_saved_337));        it_340=map$2charphsVarph_next((o2_saved_337))        ){
            key_343=it_340;
            value_344=((struct sVar*)come_null_check(((struct sVar*)(__right_value326=map$2charphsVarphp_operator_load_element(vtable_336->mVars,key_343))), "./common.h", 464, 1));
            come_call_finalizer3(__right_value326,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_348=(struct sType*)come_increment_ref_count(sType_clone(value_344->mType));
            type2_348->mPointerNum++;
            item_349=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 470, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_344->mCValueName)),(struct sType*)come_increment_ref_count(type2_348)));
            if(            value_344->mCValueName!=((void*)0)) {
                if(                strcmp(value_344->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_344->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_344->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_344->mType->mClass->mName,"va_list")||string_operator_equals(value_344->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_348->mArrayNum)==1) {
                    type3_350=(struct sType*)come_increment_ref_count(sType_clone(type2_348));
                    list$1sNodeph_reset(type3_350->mArrayNum);
                    type3_350->mPointerNum=1;
                    type3_350->mOriginIsArray=(_Bool)1;
                    item2_353=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 490, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_344->mCValueName)),(struct sType*)come_increment_ref_count(type3_350)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_353)));
                    value_344->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_350,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_353,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_335->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_349)));
                }
            }
            come_call_finalizer3(type2_348,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_349,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_337,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_336=vtable_336->mParent;
    }
    output_struct(current_stack_335,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_334),(struct sClass*)come_increment_ref_count(current_stack_335));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_334,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_334);
    vtable_336=info->lv_table;
    while(vtable_336) {
        for(        o2_saved_405=(struct map$2charphsVarph*)come_increment_ref_count((vtable_336->mVars)),it_406=map$2charphsVarph_begin((o2_saved_405));        !map$2charphsVarph_end((o2_saved_405));        it_406=map$2charphsVarph_next((o2_saved_405))        ){
            key_407=it_406;
            value_408=((struct sVar*)come_null_check(((struct sVar*)(__right_value348=map$2charphsVarphp_operator_load_element(vtable_336->mVars,key_407))), "./common.h", 515, 2));
            come_call_finalizer3(__right_value348,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_409=(struct sType*)come_increment_ref_count(sType_clone(value_408->mType));
            item_410=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 519, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_408->mCValueName),(struct sType*)come_increment_ref_count(type2_409)));
            if(            value_408->mCValueName!=((void*)0)) {
                if(                strcmp(value_408->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_408->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_408->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_408->mType->mClass->mName,"va_list")||string_operator_equals(value_408->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_409->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_408->mCValueName,value_408->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_408->mCValueName,value_408->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_409,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_410,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_405,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_336=vtable_336->mParent;
    }
    come_value_411=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 548, "CVALUE"))));
    __dec_obj139=come_value_411->c_value;
    come_value_411->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=come_value_411->type;
    come_value_411->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 551, "sType")),class_name_334,(_Bool)0,info));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_411->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_411->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_411));
    __result281__ = (_Bool)1;
    class_name_334 = come_decrement_ref_count2(class_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_335,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_411,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result281__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_338;
char* __result245__;
char* __result246__;
char* result_339;
char* __result247__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_338,0,sizeof(char*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_339,0,sizeof(char*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_341;
char* __result248__;
char* __result249__;
char* result_342;
char* __result250__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_342,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_345;
unsigned int hash_346;
unsigned int it_347;
struct sVar* __result251__;
struct sVar* __result252__;
struct sVar* __result253__;
struct sVar* __result254__;
default_value_345 = (void*)0;
    memset(&default_value_345,0,sizeof(struct sVar*));
    hash_346=charp_get_hash_key(((char*)key))%self->size;
    it_347=hash_346;
    while((_Bool)1) {
        if(        self->item_existance[it_347]) {
            if(            charp_equals(self->keys[it_347],key)) {
                __result251__ = gComeFunResultObject = __result_obj__ = self->items[it_347];
                come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
            it_347++;
            if(            it_347>=self->size) {
                it_347=0;
            }
            else if(            it_347==hash_346) {
                __result252__ = gComeFunResultObject = __result_obj__ = default_value_345;
                come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
        }
        else {
            __result253__ = gComeFunResultObject = __result_obj__ = default_value_345;
            come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = default_value_345;
    come_call_finalizer3(default_value_345,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj116;
struct sType* __dec_obj117;
struct tuple2$2charphsTypeph* __result255__;
    __dec_obj116=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj117=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_351;
struct list_item$1sNodeph* prev_it_352;
struct list$1sNodeph* __result256__;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_354;
struct tuple2$2charphsTypeph* __dec_obj120;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_355;
struct tuple2$2charphsTypeph* __dec_obj123;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_356;
struct tuple2$2charphsTypeph* __dec_obj126;
struct list$1tuple2$2charphsTypephph* __result257__;
    if(    self->len==0) {
        litem_354=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value335=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsTypephph"))));
        litem_354->prev=((void*)0);
        litem_354->next=((void*)0);
        __dec_obj120=litem_354->item;
        litem_354->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_354;
        self->head=litem_354;
    }
    else if(    self->len==1) {
        litem_355=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value336=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsTypephph"))));
        litem_355->prev=self->head;
        litem_355->next=((void*)0);
        __dec_obj123=litem_355->item;
        litem_355->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head->next=litem_355;
    }
    else {
        litem_356=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value337=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsTypephph"))));
        litem_356->prev=self->tail;
        litem_356->next=((void*)0);
        __dec_obj126=litem_356->item;
        litem_356->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_356;
        self->tail=litem_356;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj127;
struct sType* __dec_obj128;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj128=self->v2;
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result258__;
void* __right_value338 = (void*)0;
struct tuple2$2charphsTypeph* result_357;
void* __right_value339 = (void*)0;
char* __dec_obj129;
void* __right_value340 = (void*)0;
struct sType* __dec_obj130;
struct tuple2$2charphsTypeph* __result259__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_357=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj129=result_357->v1;
        result_357->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj130=result_357->v2;
        result_357->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
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

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_358;
int i_359;
    for(    i_358=0;    i_358<self->size;    i_358++    ){
        if(        self->item_existance[i_358]) {
            if(            1) {
                come_call_finalizer3(self->items[i_358],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_359=0;    i_359<self->size;    i_359++    ){
        if(        self->item_existance[i_359]) {
            if(            1) {
                self->keys[i_359] = come_decrement_ref_count2(self->keys[i_359], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_381;
unsigned int it_382;
_Bool same_key_exist_399;
char* it2_402;
struct map$2charphsClassph* __result280__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_381=charp_get_hash_key(key)%self->size;
    it_382=hash_381;
    while((_Bool)1) {
        if(        self->item_existance[it_382]) {
            if(            charp_equals(self->keys[it_382],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_382]);
                    self->keys[it_382] = come_decrement_ref_count2(self->keys[it_382], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_382]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_382]);
                    self->keys[it_382]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_382],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_382]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_382]=item;
                }
                break;
            }
            it_382++;
            if(            it_382>=self->size) {
                it_382=0;
            }
            else if(            it_382==hash_381) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_382]=(_Bool)1;
            if(            1) {
                self->keys[it_382]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_382]=key;
            }
            if(            1) {
                self->items[it_382]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_382]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_399=(_Bool)0;
    for(    it2_402=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_402=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_402,key)) {
            same_key_exist_399=(_Bool)1;
        }
    }
    if(    !same_key_exist_399) {
        list$1charp_push_back(self->key_list,key);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_360;
void* __right_value343 = (void*)0;
char** keys_361;
void* __right_value344 = (void*)0;
struct sClass** items_362;
void* __right_value345 = (void*)0;
_Bool* item_existance_363;
int len_364;
char* it_367;
struct sClass* default_value_370;
void* __right_value346 = (void*)0;
struct sClass* it2_371;
unsigned int hash_378;
int n_379;
struct sClass* default_value_380;
void* __right_value347 = (void*)0;
default_value_370 = (void*)0;
default_value_380 = (void*)0;
    size_360=self->size*10;
    keys_361=(char**)come_increment_ref_count(((char**)(__right_value343=(char**)come_calloc(1, sizeof(char*)*(1*(size_360)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_362=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value344=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_360)), "/usr/local/include/comelang.h", 2558, "sClass*%"))));
    item_existance_363=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value345=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_360)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_364=0;
    for(    it_367=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_367=map$2charphsClassph_next(self)    ){
        memset(&default_value_370,0,sizeof(struct sClass*));
        it2_371=((struct sClass*)(__right_value346=map$2charphsClassph_at(self,it_367,default_value_370)));
        come_call_finalizer3(__right_value346,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_378=charp_get_hash_key(it_367)%size_360;
        n_379=hash_378;
        while((_Bool)1) {
            if(            item_existance_363[n_379]) {
                n_379++;
                if(                n_379>=size_360) {
                    n_379=0;
                }
                else if(                n_379==hash_378) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_363[n_379]=(_Bool)1;
                keys_361[n_379]=it_367;
                items_362[n_379]=((struct sClass*)(__right_value347=map$2charphsClassph_at(self,it_367,default_value_380)));
                come_call_finalizer3(__right_value347,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_364++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_361;
    self->items=items_362;
    self->item_existance=item_existance_363;
    self->size=size_360;
    self->len=len_364;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_365;
char* __result260__;
char* __result261__;
char* result_366;
char* __result262__;
result_365 = (void*)0;
result_366 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_365,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_365;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_366,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_368;
char* __result263__;
char* __result264__;
char* result_369;
char* __result265__;
result_368 = (void*)0;
result_369 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_368,0,sizeof(char*));
        __result263__ = gComeFunResultObject = __result_obj__ = result_368;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result264__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    memset(&result_369,0,sizeof(char*));
    __result265__ = gComeFunResultObject = __result_obj__ = result_369;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_372;
unsigned int it_373;
struct sClass* __result266__;
struct sClass* __result267__;
struct sClass* __result268__;
struct sClass* __result269__;
    hash_372=charp_get_hash_key(((char*)key))%self->size;
    it_373=hash_372;
    while((_Bool)1) {
        if(        self->item_existance[it_373]) {
            if(            charp_equals(self->keys[it_373],key)) {
                __result266__ = gComeFunResultObject = __result_obj__ = self->items[it_373];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            it_373++;
            if(            it_373>=self->size) {
                it_373=0;
            }
            else if(            it_373==hash_372) {
                __result267__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
        }
        else {
            __result268__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result268__;
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj133;
struct list$1tuple2$2charphsTypephph* __dec_obj134;
char* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj133=self->mName;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj134=self->mFields;
            come_call_finalizer3(__dec_obj134,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj136=self->mDeclareSName;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj137=self->mParentClassName;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj138=self->mAttribute;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_374;
struct list_item$1tuple2$2charphsTypephph* prev_it_375;
    it_374=self->head;
    while(it_374!=((void*)0)) {
        prev_it_375=it_374;
        it_374=it_374->next;
        come_call_finalizer3(prev_it_375,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj135;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj135=self->item;
            come_call_finalizer3(__dec_obj135,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_376;
struct list_item$1tuple2$2charphsTypephph* prev_it_377;
    it_376=self->head;
    while(it_376!=((void*)0)) {
        prev_it_377=it_376;
        it_376=it_376->next;
        come_call_finalizer3(prev_it_377,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_383;
struct list_item$1charp* it_384;
struct list$1charp* __result273__;
    it2_383=0;
    it_384=self->head;
    while(it_384!=((void*)0)) {
        if(        charp_equals(it_384->item,item)) {
            list$1charp_delete(self,it2_383,it2_383+1);
            break;
        }
        it2_383++;
        it_384=it_384->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_385;
struct list$1charp* __result270__;
struct list_item$1charp* it_388;
int i_389;
struct list_item$1charp* prev_it_390;
struct list_item$1charp* it_391;
int i_392;
struct list_item$1charp* prev_it_393;
struct list_item$1charp* it_394;
struct list_item$1charp* head_prev_it_395;
struct list_item$1charp* tail_it_396;
int i_397;
struct list_item$1charp* prev_it_398;
struct list$1charp* __result272__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_385=tail;
        tail=head;
        head=tmp_385;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result270__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_388=self->head;
        i_389=0;
        while(it_388!=((void*)0)) {
            if(            i_389<tail) {
                prev_it_390=it_388;
                it_388=it_388->next;
                i_389++;
                come_call_finalizer3(prev_it_390,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_389==tail) {
                self->head=it_388;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_388=it_388->next;
                i_389++;
            }
        }
    }
    else if(    tail==self->len) {
        it_391=self->head;
        i_392=0;
        while(it_391!=((void*)0)) {
            if(            i_392==head) {
                self->tail=it_391->prev;
                self->tail->next=((void*)0);
            }
            if(            i_392>=head) {
                prev_it_393=it_391;
                it_391=it_391->next;
                i_392++;
                come_call_finalizer3(prev_it_393,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_391=it_391->next;
                i_392++;
            }
        }
    }
    else {
        it_394=self->head;
        head_prev_it_395=((void*)0);
        tail_it_396=((void*)0);
        i_397=0;
        while(it_394!=((void*)0)) {
            if(            i_397==head) {
                head_prev_it_395=it_394->prev;
            }
            if(            i_397==tail) {
                tail_it_396=it_394;
            }
            if(            i_397>=head&&i_397<tail) {
                prev_it_398=it_394;
                it_394=it_394->next;
                i_397++;
                come_call_finalizer3(prev_it_398,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_394=it_394->next;
                i_397++;
            }
        }
        if(        head_prev_it_395!=((void*)0)) {
            head_prev_it_395->next=tail_it_396;
        }
        if(        tail_it_396!=((void*)0)) {
            tail_it_396->prev=head_prev_it_395;
        }
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_386;
struct list_item$1charp* prev_it_387;
struct list$1charp* __result271__;
    it_386=self->head;
    while(it_386!=((void*)0)) {
        prev_it_387=it_386;
        it_386=it_386->next;
        come_call_finalizer3(prev_it_387,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_400;
char* __result274__;
char* __result275__;
char* result_401;
char* __result276__;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_400,0,sizeof(char*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_400;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->it=self->head;
    if(    self->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_401,0,sizeof(char*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_401;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_403;
char* __result277__;
char* __result278__;
char* result_404;
char* __result279__;
result_403 = (void*)0;
result_404 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_403,0,sizeof(char*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_403;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_404,0,sizeof(char*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_404;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
struct sLineNode* __result282__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sLineNode")));
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value361 = (void*)0;
char* __dec_obj142;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sType* __dec_obj143;
_Bool __result284__;
    come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "CVALUE"))));
    __dec_obj142=come_value_412->c_value;
    come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=come_value_412->type;
    come_value_412->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_412->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
    add_come_last_code(info,"%s",come_value_412->c_value);
    __result284__ = (_Bool)1;
    come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result284__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
struct sSNameNode* __result285__;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value364,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sSNameNode")));
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value368 = (void*)0;
char* __dec_obj145;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __dec_obj146;
_Bool __result287__;
    come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "CVALUE"))));
    __dec_obj145=come_value_413->c_value;
    come_value_413->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj146=come_value_413->type;
    come_value_413->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_413->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_413));
    add_come_last_code(info,"%s",come_value_413->c_value);
    __result287__ = (_Bool)1;
    come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result287__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
struct sFuncNode* __result288__;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value371,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sFuncNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value375 = (void*)0;
char* __dec_obj148;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* __dec_obj149;
_Bool __result290__;
    come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "CVALUE"))));
    __dec_obj148=come_value_414->c_value;
    come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value_414->type;
    come_value_414->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_414->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
    add_come_last_code(info,"%s",come_value_414->c_value);
    __result290__ = (_Bool)1;
    come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
struct sWildCard* __result291__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value379=__builtin_string("sWildCard")));
    __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* value_node_415;
_Bool Value_416;
_Bool __result293__;
_Bool __result294__;
    value_node_415=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value380=xsprintf("Value"))),info));
    __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_416=node_compile(value_node_415,info);
    if(    !Value_416) {
        __result293__ = (_Bool)0;
        if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result293__;
    }
    else {
    }
    __result294__ = (_Bool)1;
    if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result294__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
struct sCallerFuncNode* __result295__;
    ((struct sNodeBase*)(__right_value382=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value382,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value383=__builtin_string("sCallerFuncNode")));
    __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value386 = (void*)0;
char* __dec_obj152;
void* __right_value387 = (void*)0;
char* __dec_obj153;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj154;
_Bool __result297__;
    come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj152=come_value_417->c_value;
        come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj153=come_value_417->c_value;
        come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj154=come_value_417->type;
    come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_417->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
    add_come_last_code(info,"%s",come_value_417->c_value);
    __result297__ = (_Bool)1;
    come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
struct sCallerLineNode* __result298__;
    ((struct sNodeBase*)(__right_value390=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value390,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value393 = (void*)0;
char* __dec_obj156;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* __dec_obj157;
_Bool __result299__;
    come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "CVALUE"))));
    __dec_obj156=come_value_418->c_value;
    come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=come_value_418->type;
    come_value_418->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_418->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
    add_come_last_code(info,"%s",come_value_418->c_value);
    __result299__ = (_Bool)1;
    come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result299__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value396=__builtin_string("sCallerLineNode")));
    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
struct sCallerSNameNode* __result301__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value400 = (void*)0;
char* __dec_obj159;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sType* __dec_obj160;
_Bool __result302__;
    come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "CVALUE"))));
    __dec_obj159=come_value_419->c_value;
    come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj160=come_value_419->type;
    come_value_419->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_419->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
    add_come_last_code(info,"%s",come_value_419->c_value);
    __result302__ = (_Bool)1;
    come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value403=__builtin_string("sCallerSNameNode")));
    __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* make_method_generics_function(char* fun_name, struct list$1objectph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* fun_name3_421;
struct list$1objectph* method_generics_types_before_422;
struct list$1objectph* __dec_obj161;
void* __right_value405 = (void*)0;
struct sGenericsFun* generics_fun_425;
void* __right_value406 = (void*)0;
_Bool _if_conditional2;
void* __right_value407 = (void*)0;
char* __result308__;
struct list$1objectph* __dec_obj173;
char* __result309__;
    static int num_method_generics_420=0;
    fun_name3_421=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_420++));
    method_generics_types_before_422=(struct list$1objectph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj161=info->method_generics_types;
    info->method_generics_types=(struct list$1objectph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj161,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_425=((struct sGenericsFun*)(__right_value405=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value405,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_425) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_421)),generics_fun_425,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_421);
            __result308__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value407=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_421 = come_decrement_ref_count2(fun_name3_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_422,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
    }
    __dec_obj173=info->method_generics_types;
    info->method_generics_types=(struct list$1objectph*)come_increment_ref_count(method_generics_types_before_422);
    come_call_finalizer3(__dec_obj173,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = fun_name3_421;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_421 = come_decrement_ref_count2(fun_name3_421, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_422,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_423;
struct list_item$1objectph* prev_it_424;
    it_423=self->head;
    while(it_423!=((void*)0)) {
        prev_it_424=it_423;
        it_423=it_423->next;
        come_call_finalizer3(prev_it_424,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj162;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj162=self->item;
            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct object*)__dec_obj162)->finalize, ((struct object*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_426;
unsigned int it_427;
struct sGenericsFun* __result304__;
struct sGenericsFun* __result305__;
struct sGenericsFun* __result306__;
struct sGenericsFun* __result307__;
    hash_426=charp_get_hash_key(((char*)key))%self->size;
    it_427=hash_426;
    while((_Bool)1) {
        if(        self->item_existance[it_427]) {
            if(            charp_equals(self->keys[it_427],key)) {
                __result304__ = gComeFunResultObject = __result_obj__ = self->items[it_427];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
            it_427++;
            if(            it_427>=self->size) {
                it_427=0;
            }
            else if(            it_427==hash_426) {
                __result305__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result305__;
            }
        }
        else {
            __result306__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result306__;
        }
    }
    __result307__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj163;
struct list$1charph* __dec_obj164;
struct list$1charph* __dec_obj165;
char* __dec_obj166;
struct sType* __dec_obj167;
struct list$1sTypeph* __dec_obj168;
struct list$1charph* __dec_obj169;
struct list$1charph* __dec_obj170;
char* __dec_obj171;
char* __dec_obj172;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj163=self->mImplType;
            come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj164=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj165=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj165,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj166=self->mName;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj167=self->mResultType;
            come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj168=self->mParamTypes;
            come_call_finalizer3(__dec_obj168,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj169=self->mParamNames;
            come_call_finalizer3(__dec_obj169,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj170=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj170,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj171=self->mBlock;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj172=self->mGenericsSName;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_428;
struct list_item$1objectph* prev_it_429;
    it_428=self->head;
    while(it_428!=((void*)0)) {
        prev_it_429=it_428;
        it_428=it_428->next;
        come_call_finalizer3(prev_it_429,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1objectph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
char* __dec_obj174;
void* __right_value419 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj191;
struct list$1objectph* __dec_obj192;
struct buffer* __dec_obj193;
struct sFunCallNode* __result316__;
    ((struct sNodeBase*)(__right_value408=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value408,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj174=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj191=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj191,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj192=self->method_generics_types;
    self->method_generics_types=(struct list$1objectph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj192,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj193=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj193,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value420=__builtin_string("sFunCallNode")));
    __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
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
char* fun_name_440;
struct list$1tuple2$2charphsNodephph* params_441;
struct buffer* method_block_442;
int method_block_sline_443;
struct sVar* var__444;
struct sType* lambda_type_445;
_Bool __result318__;
void* __right_value421 = (void*)0;
struct sType* result_type_446;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUEph* come_params_447;
_Bool __result320__;
int i_450;
struct list$1tuple2$2charphsNodephph* o2_saved_451;
struct tuple2$2charphsNodeph* it_454;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_457=0;
struct sNode* node_458=0;
_Bool Value_459;
_Bool __result327__;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value425 = (void*)0;
_Bool _if_conditional3;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
_Bool _if_conditional4;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* buf_464;
int j_465;
struct list$1CVALUEph* o2_saved_466;
struct CVALUE* it_469;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value436 = (void*)0;
char* __dec_obj200;
void* __right_value437 = (void*)0;
struct sType* __dec_obj201;
_Bool __result336__;
void* __right_value438 = (void*)0;
struct sGenericsFun* generics_fun_473;
_Bool method_generics_474;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1objectph* method_generics_types_475;
void* __right_value441 = (void*)0;
char* generics_fun_name_476;
void* __right_value442 = (void*)0;
struct sFun* fun_477;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1CVALUEph* come_params_480;
void* __right_value445 = (void*)0;
struct sFun* fun_481;
_Bool no_output_come_code_482;
_Bool __result342__;
void* __right_value446 = (void*)0;
struct CVALUE* method_block_node_483;
void* __right_value447 = (void*)0;
struct sType* method_block_lambda_type_487;
void* __right_value448 = (void*)0;
struct sType* method_block_result_type_488;
void* __right_value449 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_489;
struct sType* generics_fun_method_block_result_type_490;
int method_generics_num_491;
void* __right_value453 = (void*)0;
struct object* _inf_value1;
struct sType* _inf_obj_value1;
void* __right_value472 = (void*)0;
int n_501;
struct list$1sTypeph* o2_saved_502;
struct sType* it_505;
int method_generics_num_508;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct object* _inf_value2;
struct sType* _inf_obj_value2;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct list$1CVALUEph* come_params_510;
int i_511;
struct sType* result_type_512;
struct list$1tuple2$2charphsNodephph* o2_saved_513;
struct tuple2$2charphsNodeph* it_514;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_515=0;
struct sNode* node_516=0;
_Bool Value_517;
_Bool __result358__;
void* __right_value496 = (void*)0;
struct CVALUE* come_value_518;
int method_generics_num_522;
void* __right_value500 = (void*)0;
struct object* _inf_value3;
struct sType* _inf_obj_value3;
void* __right_value519 = (void*)0;
int n_524;
struct list$1sTypeph* o2_saved_525;
struct sType* it_526;
int method_generics_num_527;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct object* _inf_value4;
struct sType* _inf_obj_value4;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
char* __dec_obj362;
void* __right_value542 = (void*)0;
char* __dec_obj363;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1CVALUEph* come_params_531;
struct list$1tuple2$2charphsNodephph* o2_saved_532;
struct tuple2$2charphsNodeph* it_533;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_534=0;
struct sNode* node_535=0;
_Bool Value_536;
_Bool __result365__;
void* __right_value545 = (void*)0;
struct CVALUE* come_value_537;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* buf_538;
int j_539;
struct list$1CVALUEph* o2_saved_540;
struct CVALUE* it_541;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* come_value_542;
void* __right_value550 = (void*)0;
char* __dec_obj364;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* __dec_obj365;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sType* __dec_obj366;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* __dec_obj367;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* __dec_obj368;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* __dec_obj369;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* __dec_obj370;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* __dec_obj371;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* __dec_obj372;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sType* __dec_obj373;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sType* __dec_obj374;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sType* __dec_obj375;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sType* __dec_obj376;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sType* __dec_obj377;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sType* __dec_obj378;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* __dec_obj379;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sType* __dec_obj380;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sType* __dec_obj381;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj382;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* __dec_obj383;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sType* __dec_obj384;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sType* __dec_obj385;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* __dec_obj386;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sType* __dec_obj387;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sType* __dec_obj388;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __dec_obj389;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sType* __dec_obj390;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sType* __dec_obj391;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sType* __dec_obj392;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* __dec_obj393;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sType* __dec_obj394;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sType* __dec_obj395;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sType* __dec_obj396;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* __dec_obj397;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sType* __dec_obj398;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* __dec_obj399;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sType* __dec_obj400;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* __dec_obj401;
_Bool __result366__;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1CVALUEph* come_params_543;
int i_544;
struct sType* result_type_545;
struct list$1tuple2$2charphsNodephph* o2_saved_546;
struct tuple2$2charphsNodeph* it_547;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_548=0;
struct sNode* node_549=0;
_Bool Value_550;
_Bool __result367__;
void* __right_value627 = (void*)0;
struct CVALUE* come_value_551;
struct sType* __dec_obj402;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct buffer* buf_552;
int j_553;
struct list$1CVALUEph* o2_saved_554;
struct CVALUE* it_555;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct CVALUE* come_value_556;
void* __right_value632 = (void*)0;
char* __dec_obj403;
struct sType* __dec_obj404;
_Bool __result368__;
void* __right_value633 = (void*)0;
char* __dec_obj405;
void* __right_value634 = (void*)0;
char* __dec_obj406;
char* p_557;
int version_558;
char* p2_559;
int i_561;
void* __right_value635 = (void*)0;
char* new_fun_name_562;
void* __right_value636 = (void*)0;
_Bool _if_conditional5;
void* __right_value637 = (void*)0;
char* __dec_obj407;
void* __right_value638 = (void*)0;
char* new_fun_name_566;
void* __right_value639 = (void*)0;
_Bool _if_conditional6;
void* __right_value640 = (void*)0;
char* __dec_obj408;
_Bool __result373__;
int i_567;
void* __right_value641 = (void*)0;
char* new_fun_name_568;
void* __right_value642 = (void*)0;
_Bool _if_conditional7;
void* __right_value643 = (void*)0;
char* __dec_obj409;
void* __right_value644 = (void*)0;
struct sFun* fun_569;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct list$1CVALUEph* come_params_570;
int i_571;
struct sType* result_type_572;
struct list$1tuple2$2charphsNodephph* o2_saved_573;
struct tuple2$2charphsNodeph* it_574;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_575=0;
struct sNode* node_576=0;
_Bool Value_577;
_Bool __result374__;
void* __right_value647 = (void*)0;
struct CVALUE* come_value_578;
struct sType* __dec_obj410;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct buffer* buf_579;
int j_580;
struct list$1CVALUEph* o2_saved_581;
struct CVALUE* it_582;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct CVALUE* come_value_583;
void* __right_value652 = (void*)0;
char* __dec_obj411;
struct sType* __dec_obj412;
_Bool __result375__;
void* __right_value653 = (void*)0;
struct sType* result_type_584;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1sTypeph* param_types_585;
struct list$1sTypeph* o2_saved_586;
struct sType* it_587;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* it2_588;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sType* __dec_obj416;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct list$1CVALUEph* come_params_592;
int i_593;
struct list$1tuple2$2charphsNodephph* o2_saved_594;
struct tuple2$2charphsNodeph* it_595;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_596=0;
struct sNode* node_597=0;
_Bool Value_598;
_Bool __result377__;
void* __right_value665 = (void*)0;
struct CVALUE* come_value_599;
int n_600;
struct list$1charph* o2_saved_601;
char* it_604;
void* __right_value666 = (void*)0;
_Bool _if_conditional8;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
_Bool _if_conditional9;
void* __right_value673 = (void*)0;
int i_612;
struct list$1tuple2$2charphsNodephph* o2_saved_613;
struct tuple2$2charphsNodeph* it_614;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_615=0;
struct sNode* node_616=0;
_Bool Value_617;
_Bool __result386__;
void* __right_value674 = (void*)0;
struct CVALUE* come_value_618;
void* __right_value675 = (void*)0;
_Bool _if_conditional10;
_Bool Value_619;
_Bool __result387__;
void* __right_value676 = (void*)0;
struct CVALUE* come_value_620;
void* __right_value677 = (void*)0;
_Bool _if_conditional11;
void* __right_value678 = (void*)0;
_Bool _if_conditional12;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
_Bool _if_conditional13;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
_Bool _if_conditional14;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
char* default_param_621;
void* __right_value689 = (void*)0;
char* param_name_625;
void* __right_value690 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_626;
char* p_627;
char* head_628;
int sline_629;
void* __right_value691 = (void*)0;
struct buffer* __dec_obj418;
void* __right_value692 = (void*)0;
struct sNode* node_630;
_Bool Value_631;
_Bool __result390__;
struct buffer* __dec_obj419;
void* __right_value693 = (void*)0;
struct CVALUE* come_value_632;
void* __right_value694 = (void*)0;
_Bool _if_conditional16;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
_Bool _if_conditional17;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
_Bool _if_conditional18;
_Bool __result391__;
_Bool __result392__;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* _inf_value5;
struct sCurrentNode2* _inf_obj_value5;
void* __right_value707 = (void*)0;
struct sNode* current_stack_frame_node_633;
_Bool Value_635;
_Bool __result395__;
void* __right_value708 = (void*)0;
struct CVALUE* come_value_636;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct buffer* method_block2_637;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sType* method_block_type_638;
void* __right_value713 = (void*)0;
char* class_name_639;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sClass* current_stack_frame_struct_643;
void* __right_value716 = (void*)0;
_Bool __result400__;
void* __right_value717 = (void*)0;
struct sType* result_type_644;
void* __right_value718 = (void*)0;
struct list$1sTypeph* param_types_645;
struct list$1charph* param_names_646;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct buffer* all_alhabet_sname_647;
char* p_648;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1sTypeph* o2_saved_649;
struct sType* it_650;
struct sType* param_type_651;
void* __right_value723 = (void*)0;
char* param_name_652;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
char* param_name_653;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
char* param_name_654;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct buffer* source3_655;
char* p_656;
char* head_657;
int sline_658;
struct buffer* __dec_obj422;
void* __right_value730 = (void*)0;
struct sNode* node_659;
_Bool Value_660;
_Bool __result401__;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
char* method_block_name_661;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct CVALUE* come_value2_662;
void* __right_value735 = (void*)0;
struct sFun* fun2_663;
_Bool __result402__;
struct sType* method_block_type2_664;
void* __right_value736 = (void*)0;
char* __dec_obj423;
void* __right_value737 = (void*)0;
struct sType* __dec_obj424;
struct buffer* __dec_obj425;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct buffer* buf_665;
int j_666;
struct list$1CVALUEph* o2_saved_667;
struct CVALUE* it_668;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct CVALUE* come_value_669;
void* __right_value742 = (void*)0;
char* __dec_obj426;
void* __right_value743 = (void*)0;
struct sType* __dec_obj427;
void* __right_value744 = (void*)0;
char* __dec_obj428;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
char* __dec_obj429;
_Bool __result403__;
memset(&i_561, 0, sizeof(int));
    fun_name_440=(char*)come_increment_ref_count(self->fun_name);
    params_441=self->params;
    method_block_442=self->method_block;
    method_block_sline_443=self->method_block_sline;
    var__444=get_variable_from_table(info->lv_table,fun_name_440);
    if(    var__444==((void*)0)) {
        var__444=get_variable_from_table(info->gv_table,fun_name_440);
    }
    if(    var__444) {
        lambda_type_445=var__444->mType;
        if(        string_operator_not_equals(lambda_type_445->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_440);
            __result318__ = (_Bool)0;
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result318__;
        }
        result_type_446=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_445->mResultType->v1));
        result_type_446->mStatic=(_Bool)0;
        come_params_447=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 542, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_445->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_441)&&!lambda_type_445->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_440,list$1sTypeph_length(lambda_type_445->mParamTypes),list$1tuple2$2charphsNodephph_length(params_441));
            __result320__ = (_Bool)0;
            come_call_finalizer3(result_type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_447,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result320__;
        }
        i_450=0;
        for(        o2_saved_451=(params_441),it_454=list$1tuple2$2charphsNodephph_begin((o2_saved_451));        !list$1tuple2$2charphsNodephph_end((o2_saved_451));        it_454=list$1tuple2$2charphsNodephph_next((o2_saved_451))        ){
            multiple_assign_var1=it_454;
            label_457=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_458=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_459=node_compile(node_458,info);
            if(            !Value_459) {
                __result327__ = (_Bool)0;
                label_457 = come_decrement_ref_count2(label_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_458) { node_458 = come_decrement_ref_count2(node_458, ((struct sNode*)node_458)->finalize, ((struct sNode*)node_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_447,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result327__;
            }
            else {
            }
            come_value_460=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_445->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value425=list$1sTypephp_operator_load_element(lambda_type_445->mParamTypes,i_450))), "05call.c", 558, 3))==((void*)0))),            come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value428=xsprintf("\%s calling param #\%s",((char*)(__right_value426=string_to_string(fun_name_440))),((char*)(__right_value427=int_to_string(i_450)))))),((struct sType*)come_null_check(((struct sType*)(__right_value429=list$1sTypephp_operator_load_element(lambda_type_445->mParamTypes,i_450))), "05call.c", 561, 4)),come_value_460->type,come_value_460,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value430=list$1sTypephp_operator_load_element(lambda_type_445->mParamTypes,i_450))), "05call.c", 562, 5))->mHeap&&come_value_460->type->mHeap)),                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value431=list$1sTypephp_operator_load_element(lambda_type_445->mParamTypes,i_450))), "05call.c", 563, 6)),come_value_460->type,come_value_460,info,(_Bool)1);
                    come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_447,(struct CVALUE*)come_increment_ref_count(come_value_460));
            dec_stack_ptr(1,info);
            i_450++;
            label_457 = come_decrement_ref_count2(label_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_458) { node_458 = come_decrement_ref_count2(node_458, ((struct sNode*)node_458)->finalize, ((struct sNode*)node_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_464=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 574, "buffer"))));
        buffer_append_str(buf_464,var__444->mCValueName);
        buffer_append_str(buf_464,"(");
        j_465=0;
        for(        o2_saved_466=(struct list$1CVALUEph*)come_increment_ref_count((come_params_447)),it_469=list$1CVALUEph_begin((o2_saved_466));        !list$1CVALUEph_end((o2_saved_466));        it_469=list$1CVALUEph_next((o2_saved_466))        ){
            buffer_append_str(buf_464,it_469->c_value);
            if(            j_465!=list$1CVALUEph_length(come_params_447)-1) {
                buffer_append_str(buf_464,",");
            }
            j_465++;
        }
        come_call_finalizer3(o2_saved_466,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_464,")");
        come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 591, "CVALUE"))));
        __dec_obj200=come_value_472->c_value;
        come_value_472->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_464));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj201=come_value_472->type;
        come_value_472->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_446));
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_472->type->mStatic=(_Bool)0;
        come_value_472->var=((void*)0);
        if(        lambda_type_445->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_472,(struct sType*)come_increment_ref_count(lambda_type_445->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_472->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
        info->calling_fun=((void*)0);
        __result336__ = (_Bool)1;
        come_call_finalizer3(result_type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_447,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_464,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result336__;
        come_call_finalizer3(result_type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_447,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_464,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_473=((struct sGenericsFun*)(__right_value438=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_440,((void*)0))));
    come_call_finalizer3(__right_value438,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    method_generics_474=(_Bool)0;
    if(    generics_fun_473) {
        method_generics_474=list$1charph_length(generics_fun_473->mMethodGenericsTypeNames)>0;
    }
    if(    list$1objectph_length(self->method_generics_types)>0||method_generics_474) {
        if(        list$1objectph_length(self->method_generics_types)==0) {
            method_generics_types_475=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "05call.c", 616, "list$1objectph"))));
            generics_fun_name_476=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_440),(struct list$1objectph*)come_increment_ref_count(method_generics_types_475),info));
            fun_477=((struct sFun*)(__right_value442=map$2charphsFunph_at(info->funcs,generics_fun_name_476,((void*)0))));
            come_call_finalizer3(__right_value442,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            method_block_442) {
                come_params_480=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 622, "list$1CVALUEph"))));
                fun_481=((struct sFun*)(__right_value445=map$2charphsFunph_at(info->funcs,generics_fun_name_476,((void*)0))));
                come_call_finalizer3(__right_value445,sFun_finalize, 0, 1, 0, 0, (void*)0);
                no_output_come_code_482=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_442,(struct list$1CVALUEph*)come_increment_ref_count(come_params_480),fun_481,fun_name_440,method_block_sline_443,info,(_Bool)1)) {
                    __result342__ = (_Bool)0;
                    come_call_finalizer3(come_params_480,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_475,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_476 = come_decrement_ref_count2(generics_fun_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result342__;
                }
                info->no_output_come_code=no_output_come_code_482;
                method_block_node_483=((struct CVALUE*)(__right_value446=list$1CVALUEphp_operator_load_element(come_params_480,-1)));
                come_call_finalizer3(__right_value446,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_487=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_483->type));
                method_block_result_type_488=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_489=((struct sType*)(__right_value449=list$1sTypephp_operator_load_element(generics_fun_473->mParamTypes,-1)));
                come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_490=generics_fun_method_block_lambda_type_489->mResultType->v1;
                if(                generics_fun_method_block_result_type_490->mClass->mMethodGenerics) {
                    method_generics_num_491=generics_fun_method_block_result_type_490->mClass->mMethodGenericsNum;
                    _inf_value1=(struct object*)come_calloc(1, sizeof(struct object), "05call.c", 642, "struct object");
                    _inf_obj_value1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value453=sType_clone(method_block_result_type_488))));
                    _inf_value1->_protocol_obj=_inf_obj_value1;
                    _inf_value1->finalize=(void*)sType_finalize;
                    _inf_value1->clone=(void*)sType_clone;
                    list$1objectphp_operator_store_element(method_generics_types_475,method_generics_num_491,(struct object*)come_increment_ref_count(_inf_value1));
                    come_call_finalizer3(__right_value453,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                n_501=0;
                for(                o2_saved_502=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_489->mParamTypes)),it_505=list$1sTypeph_begin((o2_saved_502));                !list$1sTypeph_end((o2_saved_502));                it_505=list$1sTypeph_next((o2_saved_502))                ){
                    if(                    it_505->mClass->mMethodGenerics) {
                        method_generics_num_508=it_505->mClass->mMethodGenericsNum;
                        _inf_value2=(struct object*)come_calloc(1, sizeof(struct object), "05call.c", 648, "struct object");
                        _inf_obj_value2=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value474=sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value473=list$1sTypephp_operator_load_element(method_block_lambda_type_487->mParamTypes,n_501))), "05call.c", 648, 7))))));
                        _inf_value2->_protocol_obj=_inf_obj_value2;
                        _inf_value2->finalize=(void*)sType_finalize;
                        _inf_value2->clone=(void*)sType_clone;
                        list$1objectphp_operator_store_element(method_generics_types_475,method_generics_num_508,(struct object*)come_increment_ref_count(_inf_value2));
                        come_call_finalizer3(__right_value473,sType_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value474,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_501++;
                }
                come_call_finalizer3(o2_saved_502,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_480,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_488,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_510=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 654, "list$1CVALUEph"))));
            i_511=0;
            result_type_512=((void*)0);
            for(            o2_saved_513=(params_441),it_514=list$1tuple2$2charphsNodephph_begin((o2_saved_513));            !list$1tuple2$2charphsNodephph_end((o2_saved_513));            it_514=list$1tuple2$2charphsNodephph_next((o2_saved_513))            ){
                multiple_assign_var2=it_514;
                label_515=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_516=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                Value_517=node_compile(node_516,info);
                if(                !Value_517) {
                    __result358__ = (_Bool)0;
                    label_515 = come_decrement_ref_count2(label_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_475,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_476 = come_decrement_ref_count2(generics_fun_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_510,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result358__;
                }
                else {
                }
                come_value_518=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_510,(struct CVALUE*)come_increment_ref_count(come_value_518));
                label_515 = come_decrement_ref_count2(label_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_473->mResultType->mClass->mMethodGenerics) {
                method_generics_num_522=generics_fun_473->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    _inf_value3=(struct object*)come_calloc(1, sizeof(struct object), "05call.c", 675, "struct object");
                    _inf_obj_value3=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value500=sType_clone(info->function_result_type))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sType_finalize;
                    _inf_value3->clone=(void*)sType_clone;
                    list$1objectphp_operator_store_element(method_generics_types_475,method_generics_num_522,(struct object*)come_increment_ref_count(_inf_value3));
                    come_call_finalizer3(__right_value500,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            n_524=0;
            for(            o2_saved_525=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_473->mParamTypes)),it_526=list$1sTypeph_begin((o2_saved_525));            !list$1sTypeph_end((o2_saved_525));            it_526=list$1sTypeph_next((o2_saved_525))            ){
                if(                it_526->mClass->mMethodGenerics) {
                    method_generics_num_527=it_526->mClass->mMethodGenericsNum;
                    if(                    n_524<list$1CVALUEph_length(come_params_510)) {
                        _inf_value4=(struct object*)come_calloc(1, sizeof(struct object), "05call.c", 683, "struct object");
                        _inf_obj_value4=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value521=sType_clone(((struct CVALUE*)(__right_value520=list$1CVALUEphp_operator_load_element(come_params_510,n_524)))->type))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sType_finalize;
                        _inf_value4->clone=(void*)sType_clone;
                        list$1objectphp_operator_store_element(method_generics_types_475,method_generics_num_527,(struct object*)come_increment_ref_count(_inf_value4));
                        come_call_finalizer3(__right_value520,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value521,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_524++;
            }
            come_call_finalizer3(o2_saved_525,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunph_remove(info->funcs,generics_fun_name_476);
            __dec_obj362=fun_name_440;
            fun_name_440=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_440),(struct list$1objectph*)come_increment_ref_count(method_generics_types_475),info));
            __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_475,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_476 = come_decrement_ref_count2(generics_fun_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_510,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj363=fun_name_440;
            fun_name_440=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_440),(struct list$1objectph*)come_increment_ref_count(self->method_generics_types),info));
            __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_440,"__builtin_memmove")||string_operator_equals(fun_name_440,"__builtin_memset")||string_operator_equals(fun_name_440,"__builtin_ffs")||string_operator_equals(fun_name_440,"__builtin_ffsl")||string_operator_equals(fun_name_440,"__builtin_ffsll")||string_operator_equals(fun_name_440,"__builtin_bswap16")||string_operator_equals(fun_name_440,"__builtin_bswap32")||string_operator_equals(fun_name_440,"__builtin_bswap64")||string_operator_equals(fun_name_440,"__builtin_constant_p")||string_operator_equals(fun_name_440,"__builtin_expect")||string_operator_equals(fun_name_440,"__builtin___memset_chk")||string_operator_equals(fun_name_440,"__builtin_object_size")||string_operator_equals(fun_name_440,"__builtin___memcpy_chk")||string_operator_equals(fun_name_440,"__builtin___strncpy_chk")||string_operator_equals(fun_name_440,"__builtin___strncat_chk")||string_operator_equals(fun_name_440,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_440,"__builtin_strrchr")||string_operator_equals(fun_name_440,"__builtin_clz")||string_operator_equals(fun_name_440,"__dsb")||string_operator_equals(fun_name_440,"__isb")||string_operator_equals(fun_name_440,"__dmb")||memcmp(fun_name_440,"__builtin_arm_",strlen("__builtin_arm_"))==0||string_operator_equals(fun_name_440,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_440,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_440,"__c11_atomic_store")||string_operator_equals(fun_name_440,"__c11_atomic_load")||string_operator_equals(fun_name_440,"__c11_atomic_exchange")||string_operator_equals(fun_name_440,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_440,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_440,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_440,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_440,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_440,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_440,"__c11_atomic_fetch_xor")) {
        come_params_531=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 726, "list$1CVALUEph"))));
        for(        o2_saved_532=(params_441),it_533=list$1tuple2$2charphsNodephph_begin((o2_saved_532));        !list$1tuple2$2charphsNodephph_end((o2_saved_532));        it_533=list$1tuple2$2charphsNodephph_next((o2_saved_532))        ){
            multiple_assign_var3=it_533;
            label_534=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_535=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            Value_536=node_compile(node_535,info);
            if(            !Value_536) {
                __result365__ = (_Bool)0;
                label_534 = come_decrement_ref_count2(label_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_531,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result365__;
            }
            else {
            }
            come_value_537=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(come_params_531,(struct CVALUE*)come_increment_ref_count(come_value_537));
            label_534 = come_decrement_ref_count2(label_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 740, "buffer"))));
        buffer_append_str(buf_538,fun_name_440);
        buffer_append_str(buf_538,"(");
        j_539=0;
        for(        o2_saved_540=(struct list$1CVALUEph*)come_increment_ref_count((come_params_531)),it_541=list$1CVALUEph_begin((o2_saved_540));        !list$1CVALUEph_end((o2_saved_540));        it_541=list$1CVALUEph_next((o2_saved_540))        ){
            buffer_append_str(buf_538,it_541->c_value);
            if(            j_539!=list$1CVALUEph_length(come_params_531)-1) {
                buffer_append_str(buf_538,",");
            }
            j_539++;
        }
        come_call_finalizer3(o2_saved_540,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_538,")");
        come_value_542=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 757, "CVALUE"))));
        __dec_obj364=come_value_542->c_value;
        come_value_542->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_538));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_440,"__builtin_memmove")||string_operator_equals(fun_name_440,"__builtin_memset")) {
            __dec_obj365=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj365,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_ffs")) {
            __dec_obj366=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj366,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_ffsl")) {
            __dec_obj367=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj367,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_ffsll")) {
            __dec_obj368=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj368,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_bswap16")) {
            __dec_obj369=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "sType")),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj369,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_bswap32")) {
            __dec_obj370=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj370,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_bswap64")) {
            __dec_obj371=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj371,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_constant_p")) {
            __dec_obj372=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj372,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_expect")) {
            __dec_obj373=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj373,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin___memset_chk")) {
            __dec_obj374=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj374,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_542->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_object_size")) {
            __dec_obj375=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj375,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin___memcpy_chk")) {
            __dec_obj376=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj376,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_542->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_440,"__builtin___strncpy_chk")) {
            __dec_obj377=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj377,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_542->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_440,"__builtin___strncat_chk")) {
            __dec_obj378=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj378,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_542->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_strrchr")) {
            __dec_obj379=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 807, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj379,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_542->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_440,"__builtin___vsnprintf_chk")) {
            __dec_obj380=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj380,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_clz")) {
            __dec_obj381=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj381,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_thread_fence")) {
            __dec_obj382=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 817, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj382,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_signal_fence")) {
            __dec_obj383=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj383,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_exchange")) {
            __dec_obj384=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value589=list$1CVALUEphp_operator_load_element(come_params_531,1))), "05call.c", 823, 8))->type));
            come_call_finalizer3(__dec_obj384,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value589,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_exchange_strong")) {
            __dec_obj385=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value591=list$1CVALUEphp_operator_load_element(come_params_531,2))), "05call.c", 826, 9))->type));
            come_call_finalizer3(__dec_obj385,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value591,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_exchange_weak")) {
            __dec_obj386=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value593=list$1CVALUEphp_operator_load_element(come_params_531,2))), "05call.c", 829, 10))->type));
            come_call_finalizer3(__dec_obj386,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value593,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_store")) {
            __dec_obj387=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 832, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj387,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_load")) {
            __dec_obj388=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value597=list$1CVALUEphp_operator_load_element(come_params_531,0))), "05call.c", 835, 11))->type));
            come_call_finalizer3(__dec_obj388,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value597,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_542->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_fetch_add")) {
            __dec_obj389=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value599=list$1CVALUEphp_operator_load_element(come_params_531,1))), "05call.c", 839, 12))->type));
            come_call_finalizer3(__dec_obj389,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value599,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_fetch_sub")) {
            __dec_obj390=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value601=list$1CVALUEphp_operator_load_element(come_params_531,1))), "05call.c", 842, 13))->type));
            come_call_finalizer3(__dec_obj390,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value601,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_fetch_and")) {
            __dec_obj391=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value603=list$1CVALUEphp_operator_load_element(come_params_531,1))), "05call.c", 845, 14))->type));
            come_call_finalizer3(__dec_obj391,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value603,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_fetch_or")) {
            __dec_obj392=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value605=list$1CVALUEphp_operator_load_element(come_params_531,1))), "05call.c", 848, 15))->type));
            come_call_finalizer3(__dec_obj392,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value605,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__c11_atomic_fetch_xor")) {
            __dec_obj393=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value607=list$1CVALUEphp_operator_load_element(come_params_531,1))), "05call.c", 851, 16))->type));
            come_call_finalizer3(__dec_obj393,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value607,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__dsb")) {
            __dec_obj394=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj394,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__isb")) {
            __dec_obj395=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj395,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__dmb")) {
            __dec_obj396=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj396,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_arm_cdp")) {
            __dec_obj397=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj397,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_arm_ldc")) {
            __dec_obj398=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 866, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj398,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_arm_stc")) {
            __dec_obj399=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 869, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj399,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_arm_stcl")) {
            __dec_obj400=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 872, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj400,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_440,"__builtin_arm_ldcl")) {
            __dec_obj401=come_value_542->type;
            come_value_542->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 875, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj401,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_542->var=((void*)0);
        add_come_last_code(info,"%s",come_value_542->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_542));
        __result366__ = (_Bool)1;
        come_call_finalizer3(come_params_531,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_538,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result366__;
        come_call_finalizer3(come_params_531,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_538,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_440,"__builtin_va_arg")) {
        come_params_543=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 887, "list$1CVALUEph"))));
        i_544=0;
        result_type_545=((void*)0);
        for(        o2_saved_546=(params_441),it_547=list$1tuple2$2charphsNodephph_begin((o2_saved_546));        !list$1tuple2$2charphsNodephph_end((o2_saved_546));        it_547=list$1tuple2$2charphsNodephph_next((o2_saved_546))        ){
            multiple_assign_var4=it_547;
            label_548=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_549=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_550=node_compile(node_549,info);
            if(            !Value_550) {
                __result367__ = (_Bool)0;
                label_548 = come_decrement_ref_count2(label_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_549) { node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result367__;
            }
            else {
            }
            come_value_551=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_543,(struct CVALUE*)come_increment_ref_count(come_value_551));
            __dec_obj402=result_type_545;
            result_type_545=(struct sType*)come_increment_ref_count(come_value_551->type);
            come_call_finalizer3(__dec_obj402,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_548 = come_decrement_ref_count2(label_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_549) { node_549 = come_decrement_ref_count2(node_549, ((struct sNode*)node_549)->finalize, ((struct sNode*)node_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_551,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_552=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 906, "buffer"))));
        buffer_append_str(buf_552,fun_name_440);
        buffer_append_str(buf_552,"(");
        j_553=0;
        for(        o2_saved_554=(struct list$1CVALUEph*)come_increment_ref_count((come_params_543)),it_555=list$1CVALUEph_begin((o2_saved_554));        !list$1CVALUEph_end((o2_saved_554));        it_555=list$1CVALUEph_next((o2_saved_554))        ){
            buffer_append_str(buf_552,it_555->c_value);
            if(            j_553!=list$1CVALUEph_length(come_params_543)-1) {
                buffer_append_str(buf_552,",");
            }
            j_553++;
        }
        come_call_finalizer3(o2_saved_554,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_552,")");
        come_value_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 923, "CVALUE"))));
        __dec_obj403=come_value_556->c_value;
        come_value_556->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_552));
        __dec_obj403 = come_decrement_ref_count2(__dec_obj403, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj404=come_value_556->type;
        come_value_556->type=(struct sType*)come_increment_ref_count(result_type_545);
        come_call_finalizer3(__dec_obj404,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_556->var=((void*)0);
        add_come_last_code(info,"%s",come_value_556->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_556));
        __result368__ = (_Bool)1;
        come_call_finalizer3(come_params_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_552,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result368__;
        come_call_finalizer3(come_params_543,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_552,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_440,"string")) {
        __dec_obj405=fun_name_440;
        fun_name_440=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj405 = come_decrement_ref_count2(__dec_obj405, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_440,"wstring")) {
        __dec_obj406=fun_name_440;
        fun_name_440=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj406 = come_decrement_ref_count2(__dec_obj406, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_440,"inherit")) {
        p_557=info->come_fun->mName;
        version_558=0;
        while(*p_557) {
            if(            *p_557==95&&*(p_557+1)==118&&xisdigit(*(p_557+2))) {
                p2_559=p_557+2;
                version_558=0;
                while(xisdigit(*p2_559)) {
                    version_558=version_558*10+(*p2_559-48);
                    p2_559++;
                }
                break;
            }
            else {
                p_557++;
            }
        }
        char real_fun_name_560[2048];
        memset(&real_fun_name_560, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_560,info->come_fun->mName,p_557-info->come_fun->mName);
        real_fun_name_560[p_557-info->come_fun->mName]=0;
        for(        i_561=version_558-1;        i_561>=1;        i_561--        ){
            new_fun_name_562=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_560,i_561));
            if(            (_if_conditional5=(((struct sFun*)(__right_value636=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_562))))),            come_call_finalizer3(__right_value636,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj407=fun_name_440;
                fun_name_440=(char*)come_increment_ref_count(__builtin_string(new_fun_name_562));
                __dec_obj407 = come_decrement_ref_count2(__dec_obj407, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_562 = come_decrement_ref_count2(new_fun_name_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_562 = come_decrement_ref_count2(new_fun_name_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_561==0) {
            new_fun_name_566=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_560));
            if(            (_if_conditional6=(((struct sFun*)(__right_value639=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_566))))),            come_call_finalizer3(__right_value639,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj408=fun_name_440;
                fun_name_440=(char*)come_increment_ref_count(__builtin_string(new_fun_name_566));
                __dec_obj408 = come_decrement_ref_count2(__dec_obj408, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_440,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result373__ = (_Bool)0;
                new_fun_name_566 = come_decrement_ref_count2(new_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result373__;
            }
            new_fun_name_566 = come_decrement_ref_count2(new_fun_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_567=128;        i_567>=1;        i_567--        ){
            new_fun_name_568=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_440,i_567));
            if(            (_if_conditional7=(((struct sFun*)(__right_value642=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_568))))),            come_call_finalizer3(__right_value642,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj409=fun_name_440;
                fun_name_440=(char*)come_increment_ref_count(__builtin_string(new_fun_name_568));
                __dec_obj409 = come_decrement_ref_count2(__dec_obj409, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_568 = come_decrement_ref_count2(new_fun_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_568 = come_decrement_ref_count2(new_fun_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_569=((struct sFun*)(__right_value644=map$2charphsFunph_at(info->funcs,fun_name_440,((void*)0))));
    come_call_finalizer3(__right_value644,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_569==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_440);
        come_params_570=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1004, "list$1CVALUEph"))));
        i_571=0;
        result_type_572=((void*)0);
        for(        o2_saved_573=(params_441),it_574=list$1tuple2$2charphsNodephph_begin((o2_saved_573));        !list$1tuple2$2charphsNodephph_end((o2_saved_573));        it_574=list$1tuple2$2charphsNodephph_next((o2_saved_573))        ){
            multiple_assign_var5=it_574;
            label_575=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_576=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            Value_577=node_compile(node_576,info);
            if(            !Value_577) {
                __result374__ = (_Bool)0;
                label_575 = come_decrement_ref_count2(label_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result374__;
            }
            else {
            }
            come_value_578=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_570,(struct CVALUE*)come_increment_ref_count(come_value_578));
            __dec_obj410=result_type_572;
            result_type_572=(struct sType*)come_increment_ref_count(come_value_578->type);
            come_call_finalizer3(__dec_obj410,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_575 = come_decrement_ref_count2(label_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_579=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1023, "buffer"))));
        buffer_append_str(buf_579,fun_name_440);
        buffer_append_str(buf_579,"(");
        j_580=0;
        for(        o2_saved_581=(struct list$1CVALUEph*)come_increment_ref_count((come_params_570)),it_582=list$1CVALUEph_begin((o2_saved_581));        !list$1CVALUEph_end((o2_saved_581));        it_582=list$1CVALUEph_next((o2_saved_581))        ){
            buffer_append_str(buf_579,it_582->c_value);
            if(            j_580!=list$1CVALUEph_length(come_params_570)-1) {
                buffer_append_str(buf_579,",");
            }
            j_580++;
        }
        come_call_finalizer3(o2_saved_581,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_579,")");
        come_value_583=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1040, "CVALUE"))));
        __dec_obj411=come_value_583->c_value;
        come_value_583->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_579));
        __dec_obj411 = come_decrement_ref_count2(__dec_obj411, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj412=come_value_583->type;
        come_value_583->type=(struct sType*)come_increment_ref_count(result_type_572);
        come_call_finalizer3(__dec_obj412,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_583->var=((void*)0);
        add_come_last_code(info,"%s",come_value_583->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_583));
        __result375__ = (_Bool)1;
        come_call_finalizer3(come_params_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_579,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result375__;
        come_call_finalizer3(come_params_570,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_579,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_584=(struct sType*)come_increment_ref_count(sType_clone(fun_569->mResultType));
    result_type_584->mStatic=(_Bool)0;
    param_types_585=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1055, "list$1sTypeph"))));
    for(    o2_saved_586=(struct list$1sTypeph*)come_increment_ref_count((fun_569->mParamTypes)),it_587=list$1sTypeph_begin((o2_saved_586));    !list$1sTypeph_end((o2_saved_586));    it_587=list$1sTypeph_next((o2_saved_586))    ){
        it2_588=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value656=sType_clone(it_587))),info->generics_type,info));
        come_call_finalizer3(__right_value656,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(param_types_585,(struct sType*)come_increment_ref_count(sType_clone(it2_588)));
        come_call_finalizer3(it2_588,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_586,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj416=result_type_584;
    result_type_584=(struct sType*)come_increment_ref_count(solve_generics(result_type_584,info->generics_type,info));
    come_call_finalizer3(__dec_obj416,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_592=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1063, "list$1CVALUEph"))));
    for(    i_593=0;    i_593<list$1sTypeph_length(fun_569->mParamTypes)-(((method_block_442)?(2):(0)));    i_593++    ){
        list$1CVALUEph_add(come_params_592,((void*)0));
    }
    for(    o2_saved_594=(params_441),it_595=list$1tuple2$2charphsNodephph_begin((o2_saved_594));    !list$1tuple2$2charphsNodephph_end((o2_saved_594));    it_595=list$1tuple2$2charphsNodephph_next((o2_saved_594))    ){
        multiple_assign_var6=it_595;
        label_596=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_597=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        fun_569->mVarArgs||string_operator_equals(fun_name_440,"__builtin_va_start")) {
        }
        else if(        label_596) {
            Value_598=node_compile(node_597,info);
            if(            !Value_598) {
                __result377__ = (_Bool)0;
                label_596 = come_decrement_ref_count2(label_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_597) { node_597 = come_decrement_ref_count2(node_597, ((struct sNode*)node_597)->finalize, ((struct sNode*)node_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result377__;
            }
            else {
            }
            come_value_599=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_600=0;
            for(            o2_saved_601=(struct list$1charph*)come_increment_ref_count((fun_569->mParamNames)),it_604=list$1charph_begin((o2_saved_601));            !list$1charph_end((o2_saved_601));            it_604=list$1charph_next((o2_saved_601))            ){
                if(                string_operator_equals(label_596,it_604)) {
                    break;
                }
                n_600++;
            }
            come_call_finalizer3(o2_saved_601,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional8=(((struct sType*)(__right_value666=list$1sTypephp_operator_load_element(param_types_585,n_600))))),            come_call_finalizer3(__right_value666,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                check_assign_type(((char*)(__right_value669=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value667=string_to_string(fun_name_440))),((char*)(__right_value668=int_to_string(n_600)))))),((struct sType*)come_null_check(((struct sType*)(__right_value670=list$1sTypephp_operator_load_element(param_types_585,n_600))), "05call.c", 1092, 17)),come_value_599->type,come_value_599,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value668 = come_decrement_ref_count2(__right_value668, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value669 = come_decrement_ref_count2(__right_value669, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value670,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional9=(((struct sType*)(__right_value671=list$1sTypephp_operator_load_element(param_types_585,n_600)))&&((struct sType*)come_null_check(((struct sType*)(__right_value672=list$1sTypephp_operator_load_element(param_types_585,n_600))), "05call.c", 1094, 18))->mHeap&&come_value_599->type->mHeap)),            come_call_finalizer3(__right_value671,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value672,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value673=list$1sTypephp_operator_load_element(param_types_585,n_600))), "05call.c", 1095, 19)),come_value_599->type,come_value_599,info,(_Bool)1);
                come_call_finalizer3(__right_value673,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_592,n_600,(struct CVALUE*)come_increment_ref_count(come_value_599));
            come_call_finalizer3(come_value_599,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_596 = come_decrement_ref_count2(label_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_597) { node_597 = come_decrement_ref_count2(node_597, ((struct sNode*)node_597)->finalize, ((struct sNode*)node_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_612=0;
    for(    o2_saved_613=(params_441),it_614=list$1tuple2$2charphsNodephph_begin((o2_saved_613));    !list$1tuple2$2charphsNodephph_end((o2_saved_613));    it_614=list$1tuple2$2charphsNodephph_next((o2_saved_613))    ){
        multiple_assign_var7=it_614;
        label_615=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_616=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        fun_569->mVarArgs||string_operator_equals(fun_name_440,"__builtin_va_start")) {
            Value_617=node_compile(node_616,info);
            if(            !Value_617) {
                __result386__ = (_Bool)0;
                label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result386__;
            }
            else {
            }
            come_value_618=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value675=list$1CVALUEphp_operator_load_element(come_params_592,i_612)))==((void*)0))),                come_call_finalizer3(__right_value675,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_612++;
                }
            }
            list$1CVALUEph_replace(come_params_592,i_612,(struct CVALUE*)come_increment_ref_count(come_value_618));
            i_612++;
            come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_615) {
        }
        else {
            Value_619=node_compile(node_616,info);
            if(            !Value_619) {
                __result387__ = (_Bool)0;
                label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result387__;
            }
            else {
            }
            come_value_620=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional11=(((struct CVALUE*)(__right_value677=list$1CVALUEphp_operator_load_element(come_params_592,i_612)))==((void*)0))),                come_call_finalizer3(__right_value677,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    break;
                }
                else {
                    i_612++;
                }
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value678=list$1sTypephp_operator_load_element(param_types_585,i_612))))),            come_call_finalizer3(__right_value678,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                check_assign_type(((char*)(__right_value681=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value679=string_to_string(fun_name_440))),((char*)(__right_value680=int_to_string(i_612)))))),((struct sType*)come_null_check(((struct sType*)(__right_value682=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1146, 20)),come_value_620->type,come_value_620,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value679 = come_decrement_ref_count2(__right_value679, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value680 = come_decrement_ref_count2(__right_value680, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value682,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional13=(((struct sType*)(__right_value683=list$1sTypephp_operator_load_element(param_types_585,i_612)))&&((struct sType*)come_null_check(((struct sType*)(__right_value684=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1148, 21))->mHeap&&come_value_620->type->mHeap)),            come_call_finalizer3(__right_value683,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value685=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1149, 22)),come_value_620->type,come_value_620,info,(_Bool)1);
                come_call_finalizer3(__right_value685,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_592,i_612,(struct CVALUE*)come_increment_ref_count(come_value_620));
            i_612++;
            come_call_finalizer3(come_value_620,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional14=(((struct CVALUE*)(__right_value686=list$1CVALUEphp_operator_load_element(come_params_592,i_612)))==((void*)0))),        come_call_finalizer3(__right_value686,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            break;
        }
        else {
            i_612++;
        }
    }
    if(    list$1tuple2$2charphsNodephph_length(params_441)<list$1sTypeph_length(fun_569->mParamTypes)) {
        for(        ;        i_612<list$1sTypeph_length(fun_569->mParamTypes)-(((method_block_442)?(2):(0)));        i_612++        ){
            default_param_621=(char*)come_increment_ref_count(string_clone(((char*)(__right_value687=list$1charphp_operator_load_element(fun_569->mParamDefaultParametors,i_612)))));
            __right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_625=((char*)come_null_check(((char*)(__right_value689=list$1charphp_operator_load_element(fun_569->mParamNames,i_612))), "05call.c", 1170, 23));
            __right_value689 = come_decrement_ref_count2(__right_value689, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional15=(default_param_621&&string_operator_not_equals(default_param_621,"")&&((struct CVALUE*)(__right_value690=list$1CVALUEphp_operator_load_element(come_params_592,i_612)))==((void*)0))),            come_call_finalizer3(__right_value690,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                source_626=(struct buffer*)come_increment_ref_count(info->source);
                p_627=info->p;
                head_628=info->head;
                sline_629=info->sline;
                __dec_obj418=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_621));
                come_call_finalizer3(__dec_obj418,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_630=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_631=node_compile(node_630,info);
                if(                !Value_631) {
                    __result390__ = (_Bool)0;
                    come_call_finalizer3(source_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_621 = come_decrement_ref_count2(default_param_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result390__;
                }
                else {
                }
                __dec_obj419=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_626);
                come_call_finalizer3(__dec_obj419,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_627;
                info->head=head_628;
                info->sline=sline_629;
                come_value_632=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value694=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1194, 24)))),                come_call_finalizer3(__right_value694,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    check_assign_type(((char*)(__right_value697=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value695=string_to_string(fun_name_440))),((char*)(__right_value696=int_to_string(i_612)))))),((struct sType*)come_null_check(((struct sType*)(__right_value698=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1195, 25)),come_value_632->type,come_value_632,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value697 = come_decrement_ref_count2(__right_value697, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value698,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value699=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1197, 26))&&((struct sType*)come_null_check(((struct sType*)(__right_value700=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1197, 27))->mHeap&&come_value_632->type->mHeap)),                come_call_finalizer3(__right_value699,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value700,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value701=list$1sTypephp_operator_load_element(param_types_585,i_612))), "05call.c", 1198, 28)),come_value_632->type,come_value_632,info,(_Bool)1);
                    come_call_finalizer3(__right_value701,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_592,i_612,(struct CVALUE*)come_increment_ref_count(come_value_632));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_626,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_632,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional18=(((struct CVALUE*)(__right_value702=list$1CVALUEphp_operator_load_element(come_params_592,i_612)))==((void*)0))),                come_call_finalizer3(__right_value702,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_569->mName,i_612);
                    __result391__ = (_Bool)0;
                    default_param_621 = come_decrement_ref_count2(default_param_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result391__;
                }
            }
            default_param_621 = come_decrement_ref_count2(default_param_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypeph_length(fun_569->mParamTypes)-(((method_block_442)?(2):(0)))!=list$1CVALUEph_length(come_params_592)&&!fun_569->mVarArgs&&string_operator_not_equals(fun_name_440,"__builtin_va_start")&&string_operator_not_equals(fun_name_440,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_440,list$1sTypeph_length(fun_569->mParamTypes),list$1tuple2$2charphsNodephph_length(params_441));
        __result392__ = (_Bool)0;
        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result392__;
    }
    if(    method_block_442) {
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1219, "struct sNode");
        _inf_obj_value5=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value704=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1219, "sCurrentNode2")),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sCurrentNode2_finalize;
        _inf_value5->clone=(void*)sCurrentNode2_clone;
        _inf_value5->compile=(void*)sCurrentNode2_compile;
        _inf_value5->sline=(void*)sCurrentNode2_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sCurrentNode2_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_633=(struct sNode*)come_increment_ref_count(_inf_value5);
        come_call_finalizer3(__right_value704,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_635=node_compile(current_stack_frame_node_633,info);
        if(        !Value_635) {
            __result395__ = (_Bool)0;
            if(current_stack_frame_node_633) { current_stack_frame_node_633 = come_decrement_ref_count2(current_stack_frame_node_633, ((struct sNode*)current_stack_frame_node_633)->finalize, ((struct sNode*)current_stack_frame_node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result395__;
        }
        else {
        }
        come_value_636=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEph_push_back(come_params_592,(struct CVALUE*)come_increment_ref_count(come_value_636));
        dec_stack_ptr(1,info);
        method_block2_637=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1229, "buffer"))));
        method_block_type_638=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value711=list$1sTypephp_operator_load_element(fun_569->mParamTypes,-1))), "05call.c", 1230, 29))));
        come_call_finalizer3(__right_value711,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_639=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)come_null_check(((struct sType*)(__right_value714=list$1sTypephp_operator_load_element(method_block_type_638->mParamTypes,0))), "05call.c", 1234, 30))->mClass=((struct sClass*)(__right_value715=map$2charphsClassphp_operator_load_element(info->classes,class_name_639)));
        come_call_finalizer3(__right_value714,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value715,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_643=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value716=map$2charphsClassphp_operator_load_element(info->classes,class_name_639)));
        come_call_finalizer3(__right_value716,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_638->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_440);
            __result400__ = (_Bool)0;
            if(current_stack_frame_node_633) { current_stack_frame_node_633 = come_decrement_ref_count2(current_stack_frame_node_633, ((struct sNode*)current_stack_frame_node_633)->finalize, ((struct sNode*)current_stack_frame_node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_637,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_639 = come_decrement_ref_count2(class_name_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result400__;
        }
        result_type_644=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_638->mResultType->v1));
        result_type_644->mStatic=(_Bool)0;
        param_types_645=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_638->mParamTypes));
        param_names_646=method_block_type_638->mParamNames;
        all_alhabet_sname_647=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1250, "buffer"))));
        {
            p_648=info->sname;
            while(*p_648) {
                if(                xisalnum(*p_648)) {
                    buffer_append_char(all_alhabet_sname_647,*p_648++);
                }
                else {
                    p_648++;
                }
            }
        }
        buffer_append_format(method_block2_637,"%s fun_block%d_%s(",((char*)(__right_value721=make_type_name_string(result_type_644,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value722=buffer_to_string(all_alhabet_sname_647))));
        __right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value722 = come_decrement_ref_count2(__right_value722, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_612=0;
        for(        o2_saved_649=(struct list$1sTypeph*)come_increment_ref_count((param_types_645)),it_650=list$1sTypeph_begin((o2_saved_649));        !list$1sTypeph_end((o2_saved_649));        it_650=list$1sTypeph_next((o2_saved_649))        ){
            param_type_651=it_650;
            if(            i_612==0) {
                param_name_652=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_637,"%s",((char*)(__right_value724=make_define_var(param_type_651,param_name_652,(_Bool)0,info))));
                __right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_652 = come_decrement_ref_count2(param_name_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_612==1) {
                param_name_653=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_637,"%s",((char*)(__right_value726=make_define_var_no_solved(param_type_651,param_name_653,(_Bool)0,(_Bool)1,info))));
                __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_653 = come_decrement_ref_count2(param_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_654=(char*)come_increment_ref_count(xsprintf("it%d",i_612));
                buffer_append_format(method_block2_637,"%s",((char*)(__right_value728=make_define_var_no_solved(param_type_651,param_name_654,(_Bool)0,(_Bool)1,info))));
                __right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_654 = come_decrement_ref_count2(param_name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_612!=list$1sTypeph_length(param_types_645)-1) {
                buffer_append_str(method_block2_637,",");
            }
            i_612++;
        }
        come_call_finalizer3(o2_saved_649,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_637,")\n");
        buffer_append_str(method_block2_637,((char*)(__right_value729=buffer_to_string(method_block_442))));
        __right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_655=(struct buffer*)come_increment_ref_count(info->source);
        p_656=info->p;
        head_657=info->head;
        sline_658=info->sline;
        __dec_obj422=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_637);
        come_call_finalizer3(__dec_obj422,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_443;
        node_659=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_660=node_compile(node_659,info);
        if(        !Value_660) {
            __result401__ = (_Bool)0;
            if(current_stack_frame_node_633) { current_stack_frame_node_633 = come_decrement_ref_count2(current_stack_frame_node_633, ((struct sNode*)current_stack_frame_node_633)->finalize, ((struct sNode*)current_stack_frame_node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_637,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_639 = come_decrement_ref_count2(class_name_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_645,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result401__;
        }
        else {
        }
        method_block_name_661=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value731=buffer_to_string(all_alhabet_sname_647)))));
        __right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_662=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1315, "CVALUE"))));
        fun2_663=((struct sFun*)(__right_value735=map$2charphsFunph_at(info->funcs,method_block_name_661,((void*)0))));
        come_call_finalizer3(__right_value735,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun2_663==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_661);
            __result402__ = (_Bool)1;
            if(current_stack_frame_node_633) { current_stack_frame_node_633 = come_decrement_ref_count2(current_stack_frame_node_633, ((struct sNode*)current_stack_frame_node_633)->finalize, ((struct sNode*)current_stack_frame_node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_637,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_639 = come_decrement_ref_count2(class_name_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_645,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_661 = come_decrement_ref_count2(method_block_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_662,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result402__;
        }
        method_block_type2_664=fun2_663->mLambdaType;
        __dec_obj423=come_value2_662->c_value;
        come_value2_662->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_661));
        __dec_obj423 = come_decrement_ref_count2(__dec_obj423, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj424=come_value2_662->type;
        come_value2_662->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_664));
        come_call_finalizer3(__dec_obj424,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_662->var=((void*)0);
        list$1CVALUEph_push_back(come_params_592,(struct CVALUE*)come_increment_ref_count(come_value2_662));
        __dec_obj425=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_655);
        come_call_finalizer3(__dec_obj425,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_656;
        info->head=head_657;
        info->sline=sline_658;
        info->current_stack_frame_struct=current_stack_frame_struct_643;
        if(current_stack_frame_node_633) { current_stack_frame_node_633 = come_decrement_ref_count2(current_stack_frame_node_633, ((struct sNode*)current_stack_frame_node_633)->finalize, ((struct sNode*)current_stack_frame_node_633)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_637,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_639 = come_decrement_ref_count2(class_name_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_645,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_659) { node_659 = come_decrement_ref_count2(node_659, ((struct sNode*)node_659)->finalize, ((struct sNode*)node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_661 = come_decrement_ref_count2(method_block_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_662,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_665=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1340, "buffer"))));
    buffer_append_str(buf_665,fun_name_440);
    buffer_append_str(buf_665,"(");
    j_666=0;
    for(    o2_saved_667=(struct list$1CVALUEph*)come_increment_ref_count((come_params_592)),it_668=list$1CVALUEph_begin((o2_saved_667));    !list$1CVALUEph_end((o2_saved_667));    it_668=list$1CVALUEph_next((o2_saved_667))    ){
        buffer_append_str(buf_665,it_668->c_value);
        if(        j_666!=list$1CVALUEph_length(come_params_592)-1) {
            buffer_append_str(buf_665,",");
        }
        j_666++;
    }
    come_call_finalizer3(o2_saved_667,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_665,")");
    come_value_669=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1357, "CVALUE"))));
    __dec_obj426=come_value_669->c_value;
    come_value_669->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_665));
    __dec_obj426 = come_decrement_ref_count2(__dec_obj426, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj427=come_value_669->type;
    come_value_669->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_584));
    come_call_finalizer3(__dec_obj427,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_669->type->mStatic=(_Bool)0;
    come_value_669->var=((void*)0);
    if(    fun_569->mResultType->mHeap) {
        append_object_to_right_values2(come_value_669,(struct sType*)come_increment_ref_count(result_type_584),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_440,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_440,"null_check")&&string_operator_not_equals(fun_name_440,"come_push_stackframe")&&string_operator_not_equals(fun_name_440,"come_pop_stackframe")) {
            __dec_obj428=come_value_669->c_value;
            come_value_669->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_669->c_value,come_value_669->type,info));
            __dec_obj428 = come_decrement_ref_count2(__dec_obj428, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_584->mGuardValue&&result_type_584->mPointerNum>0) {
        __dec_obj429=come_value_669->c_value;
        come_value_669->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value745=make_type_name_string(result_type_584,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_669->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj429 = come_decrement_ref_count2(__dec_obj429, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_669->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_669));
    info->calling_fun=fun_569;
    __result403__ = (_Bool)1;
    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_584,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_585,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_592,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_665,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_669,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result403__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result310__;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_432;
struct list_item$1tuple2$2charphsNodephph* it_433;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result315__;
    if(    self==((void*)0)) {
        __result310__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    result_432=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple2$2charphsNodephph"))));
    it_433=self->head;
    while(it_433!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_432,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_433->item)));
        it_433=it_433->next;
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_432;
    come_call_finalizer3(result_432,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result311__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_430;
struct list_item$1tuple2$2charphsNodephph* prev_it_431;
    it_430=self->head;
    while(it_430!=((void*)0)) {
        prev_it_431=it_430;
        it_430=it_430->next;
        come_call_finalizer3(prev_it_431,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj175;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj175=self->item;
            come_call_finalizer3(__dec_obj175,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_434;
struct tuple2$2charphsNodeph* __dec_obj178;
void* __right_value413 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_435;
struct tuple2$2charphsNodeph* __dec_obj181;
void* __right_value414 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_436;
struct tuple2$2charphsNodeph* __dec_obj184;
struct list$1tuple2$2charphsNodephph* __result312__;
    if(    self->len==0) {
        litem_434=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value412=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2charphsNodephph"))));
        litem_434->prev=((void*)0);
        litem_434->next=((void*)0);
        __dec_obj178=litem_434->item;
        litem_434->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_434;
        self->head=litem_434;
    }
    else if(    self->len==1) {
        litem_435=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value413=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2charphsNodephph"))));
        litem_435->prev=self->head;
        litem_435->next=((void*)0);
        __dec_obj181=litem_435->item;
        litem_435->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_435;
        self->head->next=litem_435;
    }
    else {
        litem_436=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value414=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2charphsNodephph"))));
        litem_436->prev=self->tail;
        litem_436->next=((void*)0);
        __dec_obj184=litem_436->item;
        litem_436->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj184,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_436;
        self->tail=litem_436;
    }
    self->len++;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj185;
struct sNode* __dec_obj186;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj185=self->v1;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj186=self->v2;
            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result313__;
void* __right_value415 = (void*)0;
struct tuple2$2charphsNodeph* result_437;
void* __right_value416 = (void*)0;
char* __dec_obj187;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj188;
struct tuple2$2charphsNodeph* __result314__;
    if(    self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_437=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj187=result_437->v1;
        result_437->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj188=result_437->v2;
        result_437->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_437;
    come_call_finalizer3(result_437,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj189;
struct sNode* __dec_obj190;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj189=self->v1;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj190=self->v2;
            if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_438;
struct list_item$1tuple2$2charphsNodephph* prev_it_439;
    it_438=self->head;
    while(it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        come_call_finalizer3(prev_it_439,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result319__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_448;
struct list_item$1CVALUEph* prev_it_449;
    it_448=self->head;
    while(it_448!=((void*)0)) {
        prev_it_449=it_448;
        it_448=it_448->next;
        come_call_finalizer3(prev_it_449,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj199;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj199=self->item;
            come_call_finalizer3(__dec_obj199,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_452;
struct tuple2$2charphsNodeph* __result321__;
struct tuple2$2charphsNodeph* __result322__;
struct tuple2$2charphsNodeph* result_453;
struct tuple2$2charphsNodeph* __result323__;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_452,0,sizeof(struct tuple2$2charphsNodeph*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_452;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->head;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_453,0,sizeof(struct tuple2$2charphsNodeph*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_453;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_455;
struct tuple2$2charphsNodeph* __result324__;
struct tuple2$2charphsNodeph* __result325__;
struct tuple2$2charphsNodeph* result_456;
struct tuple2$2charphsNodeph* __result326__;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_455,0,sizeof(struct tuple2$2charphsNodeph*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_455;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_456,0,sizeof(struct tuple2$2charphsNodeph*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_456;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_461;
int i_462;
struct sType* __result328__;
struct sType* default_value_463;
struct sType* __result329__;
default_value_463 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_461=self->head;
    i_462=0;
    while(it_461!=((void*)0)) {
        if(        position==i_462) {
            __result328__ = gComeFunResultObject = __result_obj__ = it_461->item;
            gComeFunResultObject = (void*)0;
            return __result328__;
        }
        it_461=it_461->next;
        i_462++;
    }
    memset(&default_value_463,0,sizeof(struct sType*));
    __result329__ = gComeFunResultObject = __result_obj__ = default_value_463;
    come_call_finalizer3(default_value_463,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_467;
struct CVALUE* __result330__;
struct CVALUE* __result331__;
struct CVALUE* result_468;
struct CVALUE* __result332__;
result_467 = (void*)0;
result_468 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_467,0,sizeof(struct CVALUE*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_467;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->head;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_468,0,sizeof(struct CVALUE*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_468;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_470;
struct CVALUE* __result333__;
struct CVALUE* __result334__;
struct CVALUE* result_471;
struct CVALUE* __result335__;
result_470 = (void*)0;
result_471 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_470,0,sizeof(struct CVALUE*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_470;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_471,0,sizeof(struct CVALUE*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_471;
    gComeFunResultObject = (void*)0;
    return __result335__;
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

static int list$1objectph_length(struct list$1objectph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result337__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_478;
unsigned int it_479;
struct sFun* __result338__;
struct sFun* __result339__;
struct sFun* __result340__;
struct sFun* __result341__;
    hash_478=charp_get_hash_key(((char*)key))%self->size;
    it_479=hash_478;
    while((_Bool)1) {
        if(        self->item_existance[it_479]) {
            if(            charp_equals(self->keys[it_479],key)) {
                __result338__ = gComeFunResultObject = __result_obj__ = self->items[it_479];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result338__;
            }
            it_479++;
            if(            it_479>=self->size) {
                it_479=0;
            }
            else if(            it_479==hash_478) {
                __result339__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result339__;
            }
        }
        else {
            __result340__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result340__;
        }
    }
    __result341__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj202;
struct sType* __dec_obj203;
struct list$1sTypeph* __dec_obj204;
struct list$1charph* __dec_obj205;
struct list$1charph* __dec_obj206;
struct sType* __dec_obj207;
struct sBlock* __dec_obj208;
struct buffer* __dec_obj211;
struct buffer* __dec_obj212;
struct buffer* __dec_obj213;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj202=self->mName;
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj203=self->mResultType;
            come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj204=self->mParamTypes;
            come_call_finalizer3(__dec_obj204,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj205=self->mParamNames;
            come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj206=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj206,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj207=self->mLambdaType;
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj208=self->mBlock;
            come_call_finalizer3(__dec_obj208,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj211=self->mSource;
            come_call_finalizer3(__dec_obj211,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj212=self->mSourceHead;
            come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj213=self->mSourceHead2;
            come_call_finalizer3(__dec_obj213,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj214=self->mSourceDefer;
            come_call_finalizer3(__dec_obj214,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj215=self->mComeHeader;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj216=self->mDeclareSName;
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj217=self->mAttribute;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj218=self->mFunAttribute;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj209;
struct sVarTable* __dec_obj210;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj209=self->mNodes;
            come_call_finalizer3(__dec_obj209,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj210=self->mVarTable;
            come_call_finalizer3(__dec_obj210,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_484;
int i_485;
struct CVALUE* __result343__;
struct CVALUE* default_value_486;
struct CVALUE* __result344__;
default_value_486 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_484=self->head;
    i_485=0;
    while(it_484!=((void*)0)) {
        if(        position==i_485) {
            __result343__ = gComeFunResultObject = __result_obj__ = it_484->item;
            gComeFunResultObject = (void*)0;
            return __result343__;
        }
        it_484=it_484->next;
        i_485++;
    }
    memset(&default_value_486,0,sizeof(struct CVALUE*));
    __result344__ = gComeFunResultObject = __result_obj__ = default_value_486;
    come_call_finalizer3(default_value_486,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void list$1objectphp_operator_store_element(struct list$1objectph* self, int position, struct object* item){
    list$1objectph_replace(self,position,(struct object*)come_increment_ref_count(item));
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1objectph* list$1objectph_replace(struct list$1objectph* self, int position, struct object* item){
void* __result_obj__=(void*)0;
int len_492;
int i_493;
struct object* default_value_494;
struct list$1objectph* __result346__;
struct list_item$1objectph* it_498;
int i_499;
struct object* __dec_obj222;
struct list$1objectph* __result347__;
default_value_494 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_492=self->len;
        for(        i_493=0;        i_493<position-len_492;        i_493++        ){
            memset(&default_value_494,0,sizeof(struct object*));
            list$1objectph_push_back(self,(struct object*)come_increment_ref_count(default_value_494));
            if(default_value_494) { default_value_494 = come_decrement_ref_count2(default_value_494, ((struct object*)default_value_494)->finalize, ((struct object*)default_value_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        list$1objectph_push_back(self,(struct object*)come_increment_ref_count(item));
        __result346__ = gComeFunResultObject = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    it_498=self->head;
    i_499=0;
    while(it_498!=((void*)0)) {
        if(        position==i_499) {
            __dec_obj222=it_498->item;
            it_498->item=(struct object*)come_increment_ref_count(item);
            if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct object*)__dec_obj222)->finalize, ((struct object*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
            break;
        }
        it_498=it_498->next;
        i_499++;
    }
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value450 = (void*)0;
struct list_item$1objectph* litem_495;
struct object* __dec_obj219;
void* __right_value451 = (void*)0;
struct list_item$1objectph* litem_496;
struct object* __dec_obj220;
void* __right_value452 = (void*)0;
struct list_item$1objectph* litem_497;
struct object* __dec_obj221;
struct list$1objectph* __result345__;
    if(    self->len==0) {
        litem_495=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value450=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1objectph"))));
        litem_495->prev=((void*)0);
        litem_495->next=((void*)0);
        __dec_obj219=litem_495->item;
        litem_495->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct object*)__dec_obj219)->finalize, ((struct object*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_495;
        self->head=litem_495;
    }
    else if(    self->len==1) {
        litem_496=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value451=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1objectph"))));
        litem_496->prev=self->head;
        litem_496->next=((void*)0);
        __dec_obj220=litem_496->item;
        litem_496->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct object*)__dec_obj220)->finalize, ((struct object*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_496;
        self->head->next=litem_496;
    }
    else {
        litem_497=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value452=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1objectph"))));
        litem_497->prev=self->tail;
        litem_497->next=((void*)0);
        __dec_obj221=litem_497->item;
        litem_497->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct object*)__dec_obj221)->finalize, ((struct object*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_497;
        self->tail=litem_497;
    }
    self->len++;
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_503;
struct sType* __result350__;
struct sType* __result351__;
struct sType* result_504;
struct sType* __result352__;
result_503 = (void*)0;
result_504 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_503,0,sizeof(struct sType*));
        __result350__ = gComeFunResultObject = __result_obj__ = result_503;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    self->it=self->head;
    if(    self->it) {
        __result351__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    memset(&result_504,0,sizeof(struct sType*));
    __result352__ = gComeFunResultObject = __result_obj__ = result_504;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_506;
struct sType* __result353__;
struct sType* __result354__;
struct sType* result_507;
struct sType* __result355__;
result_506 = (void*)0;
result_507 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_506,0,sizeof(struct sType*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_506;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_507,0,sizeof(struct sType*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_507;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value497 = (void*)0;
struct list_item$1CVALUEph* litem_519;
struct CVALUE* __dec_obj291;
void* __right_value498 = (void*)0;
struct list_item$1CVALUEph* litem_520;
struct CVALUE* __dec_obj292;
void* __right_value499 = (void*)0;
struct list_item$1CVALUEph* litem_521;
struct CVALUE* __dec_obj293;
struct list$1CVALUEph* __result359__;
    if(    self->len==0) {
        litem_519=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value497=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1CVALUEph"))));
        litem_519->prev=((void*)0);
        litem_519->next=((void*)0);
        __dec_obj291=litem_519->item;
        litem_519->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj291,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_519;
        self->head=litem_519;
    }
    else if(    self->len==1) {
        litem_520=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value498=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1CVALUEph"))));
        litem_520->prev=self->head;
        litem_520->next=((void*)0);
        __dec_obj292=litem_520->item;
        litem_520->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_520;
        self->head->next=litem_520;
    }
    else {
        litem_521=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value499=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1CVALUEph"))));
        litem_521->prev=self->tail;
        litem_521->next=((void*)0);
        __dec_obj293=litem_521->item;
        litem_521->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_521;
        self->tail=litem_521;
    }
    self->len++;
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_529;
unsigned int it_530;
struct map$2charphsFunph* __result364__;
    hash_529=charp_get_hash_key(((char*)key))%self->size;
    it_530=hash_529;
    while((_Bool)1) {
        if(        self->item_existance[it_530]) {
            if(            charp_equals(self->keys[it_530],key)) {
                list$1charp_remove(self->key_list,self->keys[it_530]);
                self->item_existance[it_530]=(_Bool)0;
                if(                1) {
                    self->keys[it_530] = come_decrement_ref_count2(self->keys[it_530], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_530]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_530],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_530]=((void*)0);
                self->len--;
                break;
            }
            it_530++;
            if(            it_530>=self->size) {
                it_530=0;
            }
            else if(            it_530==hash_529) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_563;
unsigned int hash_564;
unsigned int it_565;
struct sFun* __result369__;
struct sFun* __result370__;
struct sFun* __result371__;
struct sFun* __result372__;
default_value_563 = (void*)0;
    memset(&default_value_563,0,sizeof(struct sFun*));
    hash_564=charp_get_hash_key(((char*)key))%self->size;
    it_565=hash_564;
    while((_Bool)1) {
        if(        self->item_existance[it_565]) {
            if(            charp_equals(self->keys[it_565],key)) {
                __result369__ = gComeFunResultObject = __result_obj__ = self->items[it_565];
                come_call_finalizer3(default_value_563,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result369__;
            }
            it_565++;
            if(            it_565>=self->size) {
                it_565=0;
            }
            else if(            it_565==hash_564) {
                __result370__ = gComeFunResultObject = __result_obj__ = default_value_563;
                come_call_finalizer3(default_value_563,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result370__;
            }
        }
        else {
            __result371__ = gComeFunResultObject = __result_obj__ = default_value_563;
            come_call_finalizer3(default_value_563,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result371__;
        }
    }
    __result372__ = gComeFunResultObject = __result_obj__ = default_value_563;
    come_call_finalizer3(default_value_563,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value658 = (void*)0;
struct list_item$1sTypeph* litem_589;
struct sType* __dec_obj413;
void* __right_value659 = (void*)0;
struct list_item$1sTypeph* litem_590;
struct sType* __dec_obj414;
void* __right_value660 = (void*)0;
struct list_item$1sTypeph* litem_591;
struct sType* __dec_obj415;
struct list$1sTypeph* __result376__;
    if(    self->len==0) {
        litem_589=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value658=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_589->prev=((void*)0);
        litem_589->next=((void*)0);
        __dec_obj413=litem_589->item;
        litem_589->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj413,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_589;
        self->head=litem_589;
    }
    else if(    self->len==1) {
        litem_590=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value659=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_590->prev=self->head;
        litem_590->next=((void*)0);
        __dec_obj414=litem_590->item;
        litem_590->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj414,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_590;
        self->head->next=litem_590;
    }
    else {
        litem_591=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value660=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_591->prev=self->tail;
        litem_591->next=((void*)0);
        __dec_obj415=litem_591->item;
        litem_591->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj415,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_591;
        self->tail=litem_591;
    }
    self->len++;
    __result376__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_602;
char* __result378__;
char* __result379__;
char* result_603;
char* __result380__;
result_602 = (void*)0;
result_603 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_602,0,sizeof(char*));
        __result378__ = gComeFunResultObject = __result_obj__ = result_602;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    self->it=self->head;
    if(    self->it) {
        __result379__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    memset(&result_603,0,sizeof(char*));
    __result380__ = gComeFunResultObject = __result_obj__ = result_603;
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_605;
char* __result381__;
char* __result382__;
char* result_606;
char* __result383__;
result_605 = (void*)0;
result_606 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_605,0,sizeof(char*));
        __result381__ = gComeFunResultObject = __result_obj__ = result_605;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result382__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    memset(&result_606,0,sizeof(char*));
    __result383__ = gComeFunResultObject = __result_obj__ = result_606;
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_607;
int i_608;
struct CVALUE* default_value_609;
struct list$1CVALUEph* __result384__;
struct list_item$1CVALUEph* it_610;
int i_611;
struct CVALUE* __dec_obj417;
struct list$1CVALUEph* __result385__;
default_value_609 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_607=self->len;
        for(        i_608=0;        i_608<position-len_607;        i_608++        ){
            memset(&default_value_609,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_609));
            come_call_finalizer3(default_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result384__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    it_610=self->head;
    i_611=0;
    while(it_610!=((void*)0)) {
        if(        position==i_611) {
            __dec_obj417=it_610->item;
            it_610->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_610=it_610->next;
        i_611++;
    }
    __result385__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_622;
int i_623;
char* __result388__;
char* default_value_624;
char* __result389__;
default_value_624 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_622=self->head;
    i_623=0;
    while(it_622!=((void*)0)) {
        if(        position==i_623) {
            __result388__ = gComeFunResultObject = __result_obj__ = it_622->item;
            gComeFunResultObject = (void*)0;
            return __result388__;
        }
        it_622=it_622->next;
        i_623++;
    }
    memset(&default_value_624,0,sizeof(char*));
    __result389__ = gComeFunResultObject = __result_obj__ = default_value_624;
    default_value_624 = come_decrement_ref_count2(default_value_624, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_640;
unsigned int hash_641;
unsigned int it_642;
struct sClass* __result396__;
struct sClass* __result397__;
struct sClass* __result398__;
struct sClass* __result399__;
default_value_640 = (void*)0;
    memset(&default_value_640,0,sizeof(struct sClass*));
    hash_641=charp_get_hash_key(((char*)key))%self->size;
    it_642=hash_641;
    while((_Bool)1) {
        if(        self->item_existance[it_642]) {
            if(            charp_equals(self->keys[it_642],key)) {
                __result396__ = gComeFunResultObject = __result_obj__ = self->items[it_642];
                come_call_finalizer3(default_value_640,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result396__;
            }
            it_642++;
            if(            it_642>=self->size) {
                it_642=0;
            }
            else if(            it_642==hash_641) {
                __result397__ = gComeFunResultObject = __result_obj__ = default_value_640;
                come_call_finalizer3(default_value_640,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result397__;
            }
        }
        else {
            __result398__ = gComeFunResultObject = __result_obj__ = default_value_640;
            come_call_finalizer3(default_value_640,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result398__;
        }
    }
    __result399__ = gComeFunResultObject = __result_obj__ = default_value_640;
    come_call_finalizer3(default_value_640,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value747 = (void*)0;
struct buffer* __dec_obj430;
struct sComeCallNode* __result404__;
    ((struct sNodeBase*)(__right_value747=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value747,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj430=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj430,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result404__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value748 = (void*)0;
char* __result405__;
    __result405__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value748=__builtin_string("sComeCallNode")));
    __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_670;
struct buffer* come_block_671;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct list$1CVALUEph* come_params_672;
void* __right_value751 = (void*)0;
char* var_name_674;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sType* type__675;
_Bool __result410__;
void* __right_value754 = (void*)0;
struct sNode* var_node_678;
_Bool Value_679;
_Bool __result411__;
void* __right_value755 = (void*)0;
struct CVALUE* thread_var_value_680;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct CVALUE* come_value_681;
void* __right_value758 = (void*)0;
char* __dec_obj433;
struct sType* __dec_obj434;
void* __right_value759 = (void*)0;
struct sNode* null_node_682;
_Bool Value_683;
_Bool __result412__;
void* __right_value760 = (void*)0;
struct CVALUE* __dec_obj435;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode2* _inf_obj_value6;
void* __right_value765 = (void*)0;
struct sNode* current_stack_frame_node_684;
_Bool Value_686;
_Bool __result415__;
void* __right_value766 = (void*)0;
struct CVALUE* current_stack_frame_value_687;
void* __right_value767 = (void*)0;
char* fun_name_688;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct buffer* come_block2_689;
void* __right_value770 = (void*)0;
char* class_name_690;
void* __right_value771 = (void*)0;
struct sClass* current_stack_frame_struct_691;
void* __right_value772 = (void*)0;
struct buffer* source3_692;
char* p_693;
char* head_694;
int sline_695;
struct buffer* __dec_obj438;
void* __right_value773 = (void*)0;
struct sNode* node_696;
_Bool Value_697;
_Bool __result416__;
struct buffer* __dec_obj439;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct CVALUE* fun_value_698;
void* __right_value776 = (void*)0;
char* __dec_obj440;
struct sType* __dec_obj441;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct buffer* buf_699;
void* __right_value779 = (void*)0;
char* fun_name_700;
int j_701;
struct list$1CVALUEph* o2_saved_702;
struct CVALUE* it_703;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct CVALUE* come_value_704;
void* __right_value782 = (void*)0;
char* __dec_obj442;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sType* type_705;
_Bool __result417__;
struct sType* __dec_obj443;
_Bool __result418__;
    come_block_sline_670=self->come_block_sline;
    come_block_671=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_672=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1412, "list$1CVALUEph"))));
    static int thread_num_673=0;
    thread_num_673++;
    var_name_674=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_673));
    type__675=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value752=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value752,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type__675==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result410__ = (_Bool)0;
        come_call_finalizer3(come_block_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_674 = come_decrement_ref_count2(var_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__675,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result410__;
    }
    var_node_678=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_674),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__675),(_Bool)1,((void*)0),info));
    Value_679=node_compile(var_node_678,info);
    if(    !Value_679) {
        __result411__ = (_Bool)0;
        come_call_finalizer3(come_block_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_674 = come_decrement_ref_count2(var_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__675,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_678) { var_node_678 = come_decrement_ref_count2(var_node_678, ((struct sNode*)var_node_678)->finalize, ((struct sNode*)var_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result411__;
    }
    else {
    }
    thread_var_value_680=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_681=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1435, "CVALUE"))));
    __dec_obj433=come_value_681->c_value;
    come_value_681->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_680->c_value));
    __dec_obj433 = come_decrement_ref_count2(__dec_obj433, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj434=come_value_681->type;
    come_value_681->type=(struct sType*)come_increment_ref_count(thread_var_value_680->type);
    come_call_finalizer3(__dec_obj434,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_681->var=((void*)0);
    list$1CVALUEph_push_back(come_params_672,(struct CVALUE*)come_increment_ref_count(come_value_681));
    null_node_682=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_683=node_compile(null_node_682,info);
    if(    !Value_683) {
        __result412__ = (_Bool)0;
        come_call_finalizer3(come_block_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_674 = come_decrement_ref_count2(var_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__675,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_678) { var_node_678 = come_decrement_ref_count2(var_node_678, ((struct sNode*)var_node_678)->finalize, ((struct sNode*)var_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_682) { null_node_682 = come_decrement_ref_count2(null_node_682, ((struct sNode*)null_node_682)->finalize, ((struct sNode*)null_node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result412__;
    }
    else {
    }
    __dec_obj435=come_value_681;
    come_value_681=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_672,(struct CVALUE*)come_increment_ref_count(come_value_681));
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1453, "struct sNode");
    _inf_obj_value6=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value762=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1453, "sCurrentNode2")),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sCurrentNode2_finalize;
    _inf_value6->clone=(void*)sCurrentNode2_clone;
    _inf_value6->compile=(void*)sCurrentNode2_compile;
    _inf_value6->sline=(void*)sCurrentNode2_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sCurrentNode2_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_684=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value762,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_686=node_compile(current_stack_frame_node_684,info);
    if(    !Value_686) {
        __result415__ = (_Bool)0;
        come_call_finalizer3(come_block_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_674 = come_decrement_ref_count2(var_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__675,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_678) { var_node_678 = come_decrement_ref_count2(var_node_678, ((struct sNode*)var_node_678)->finalize, ((struct sNode*)var_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_682) { null_node_682 = come_decrement_ref_count2(null_node_682, ((struct sNode*)null_node_682)->finalize, ((struct sNode*)null_node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_684) { current_stack_frame_node_684 = come_decrement_ref_count2(current_stack_frame_node_684, ((struct sNode*)current_stack_frame_node_684)->finalize, ((struct sNode*)current_stack_frame_node_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result415__;
    }
    else {
    }
    current_stack_frame_value_687=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_688=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_673));
    come_block2_689=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1464, "buffer"))));
    class_name_690=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_689,"void* %s(%s* parent)\n",fun_name_688,class_name_690);
    buffer_append_str(come_block2_689,((char*)(__right_value771=buffer_to_string(come_block_671))));
    __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_691=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value772=map$2charphsClassphp_operator_load_element(info->classes,class_name_690)));
    come_call_finalizer3(__right_value772,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_692=(struct buffer*)come_increment_ref_count(info->source);
    p_693=info->p;
    head_694=info->head;
    sline_695=info->sline;
    __dec_obj438=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_689);
    come_call_finalizer3(__dec_obj438,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_670;
    node_696=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_697=node_compile(node_696,info);
    if(    !Value_697) {
        __result416__ = (_Bool)0;
        come_call_finalizer3(come_block_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_674 = come_decrement_ref_count2(var_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__675,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_678) { var_node_678 = come_decrement_ref_count2(var_node_678, ((struct sNode*)var_node_678)->finalize, ((struct sNode*)var_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_682) { null_node_682 = come_decrement_ref_count2(null_node_682, ((struct sNode*)null_node_682)->finalize, ((struct sNode*)null_node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_684) { current_stack_frame_node_684 = come_decrement_ref_count2(current_stack_frame_node_684, ((struct sNode*)current_stack_frame_node_684)->finalize, ((struct sNode*)current_stack_frame_node_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_688 = come_decrement_ref_count2(fun_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_689,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_690 = come_decrement_ref_count2(class_name_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_692,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_696) { node_696 = come_decrement_ref_count2(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result416__;
    }
    else {
    }
    __dec_obj439=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_692);
    come_call_finalizer3(__dec_obj439,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_693;
    info->head=head_694;
    info->sline=sline_695;
    info->current_stack_frame_struct=current_stack_frame_struct_691;
    fun_value_698=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1498, "CVALUE"))));
    __dec_obj440=fun_value_698->c_value;
    fun_value_698->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_688));
    __dec_obj440 = come_decrement_ref_count2(__dec_obj440, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj441=come_value_681->type;
    come_value_681->type=((void*)0);
    come_call_finalizer3(__dec_obj441,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_681->var=((void*)0);
    list$1CVALUEph_add(come_params_672,(struct CVALUE*)come_increment_ref_count(fun_value_698));
    list$1CVALUEph_add(come_params_672,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_687));
    buf_699=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1508, "buffer"))));
    fun_name_688 = come_decrement_ref_count2(fun_name_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_700=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_699,"(");
    buffer_append_str(buf_699,fun_name_700);
    buffer_append_str(buf_699,"(");
    j_701=0;
    for(    o2_saved_702=(struct list$1CVALUEph*)come_increment_ref_count((come_params_672)),it_703=list$1CVALUEph_begin((o2_saved_702));    !list$1CVALUEph_end((o2_saved_702));    it_703=list$1CVALUEph_next((o2_saved_702))    ){
        buffer_append_str(buf_699,it_703->c_value);
        if(        j_701!=list$1CVALUEph_length(come_params_672)-1) {
            buffer_append_str(buf_699,",");
        }
        j_701++;
    }
    come_call_finalizer3(o2_saved_702,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_699,")");
    buffer_append_str(buf_699,", ");
    buffer_append_str(buf_699,thread_var_value_680->c_value);
    buffer_append_str(buf_699,")");
    come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_704=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1531, "CVALUE"))));
    __dec_obj442=come_value_704->c_value;
    come_value_704->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_699));
    __dec_obj442 = come_decrement_ref_count2(__dec_obj442, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_705=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value783=map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))))));
    come_call_finalizer3(__right_value783,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    type_705==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result417__ = (_Bool)0;
        come_call_finalizer3(come_block_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_674 = come_decrement_ref_count2(var_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__675,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_678) { var_node_678 = come_decrement_ref_count2(var_node_678, ((struct sNode*)var_node_678)->finalize, ((struct sNode*)var_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_682) { null_node_682 = come_decrement_ref_count2(null_node_682, ((struct sNode*)null_node_682)->finalize, ((struct sNode*)null_node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_684) { current_stack_frame_node_684 = come_decrement_ref_count2(current_stack_frame_node_684, ((struct sNode*)current_stack_frame_node_684)->finalize, ((struct sNode*)current_stack_frame_node_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_689,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_690 = come_decrement_ref_count2(class_name_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_692,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_696) { node_696 = come_decrement_ref_count2(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_700 = come_decrement_ref_count2(fun_name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_704,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_705,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result417__;
    }
    __dec_obj443=come_value_704->type;
    come_value_704->type=(struct sType*)come_increment_ref_count(type_705);
    come_call_finalizer3(__dec_obj443,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_704->var=((void*)0);
    add_come_last_code(info,"%s",come_value_704->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_704));
    __result418__ = (_Bool)1;
    come_call_finalizer3(come_block_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_672,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_674 = come_decrement_ref_count2(var_name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__675,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_678) { var_node_678 = come_decrement_ref_count2(var_node_678, ((struct sNode*)var_node_678)->finalize, ((struct sNode*)var_node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_680,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_682) { null_node_682 = come_decrement_ref_count2(null_node_682, ((struct sNode*)null_node_682)->finalize, ((struct sNode*)null_node_682)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_684) { current_stack_frame_node_684 = come_decrement_ref_count2(current_stack_frame_node_684, ((struct sNode*)current_stack_frame_node_684)->finalize, ((struct sNode*)current_stack_frame_node_684)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_687,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_689,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_690 = come_decrement_ref_count2(class_name_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_692,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_696) { node_696 = come_decrement_ref_count2(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_700 = come_decrement_ref_count2(fun_name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_704,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_705,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result418__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_676;
unsigned int it_677;
struct sType* __result406__;
struct sType* __result407__;
struct sType* __result408__;
struct sType* __result409__;
    hash_676=charp_get_hash_key(((char*)key))%self->size;
    it_677=hash_676;
    while((_Bool)1) {
        if(        self->item_existance[it_677]) {
            if(            charp_equals(self->keys[it_677],key)) {
                __result406__ = gComeFunResultObject = __result_obj__ = self->items[it_677];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result406__;
            }
            it_677++;
            if(            it_677>=self->size) {
                it_677=0;
            }
            else if(            it_677==hash_676) {
                __result407__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result407__;
            }
        }
        else {
            __result408__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result408__;
        }
    }
    __result409__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
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

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result413__;
void* __right_value763 = (void*)0;
struct sCurrentNode2* result_685;
void* __right_value764 = (void*)0;
char* __dec_obj437;
struct sCurrentNode2* __result414__;
    if(    self==(void*)0) {
        __result413__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result413__;
    }
    result_685=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_685->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj437=result_685->sname;
        result_685->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj437 = come_decrement_ref_count2(__dec_obj437, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_685->sline_real=self->sline_real;
    }
    __result414__ = gComeFunResultObject = __result_obj__ = result_685;
    come_call_finalizer3(result_685,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value785 = (void*)0;
struct sNode* __dec_obj444;
struct sComeJoinNode* __result419__;
    ((struct sNodeBase*)(__right_value785=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value785,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj444=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj444) { __dec_obj444 = come_decrement_ref_count2(__dec_obj444, ((struct sNode*)__dec_obj444)->finalize, ((struct sNode*)__dec_obj444)->_protocol_obj, 0,0,0, (void*)0); };
    __result419__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result419__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value786 = (void*)0;
char* __result420__;
    __result420__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value786=__builtin_string("sComeJoinNode")));
    __right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_706;
_Bool Value_707;
_Bool __result421__;
void* __right_value787 = (void*)0;
struct CVALUE* come_value_708;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct buffer* buf_709;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct CVALUE* come_value_710;
void* __right_value792 = (void*)0;
char* __dec_obj447;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct sType* __dec_obj448;
_Bool __result422__;
    node_706=(struct sNode*)come_increment_ref_count(self->node);
    Value_707=node_compile(node_706,info);
    if(    !Value_707) {
        __result421__ = (_Bool)0;
        if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result421__;
    }
    else {
    }
    come_value_708=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_709=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1579, "buffer"))));
    buffer_append_str(buf_709,"pthread_join(");
    buffer_append_str(buf_709,come_value_708->c_value);
    buffer_append_str(buf_709,", 0)");
    come_call_finalizer3(come_value_708,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_710=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1584, "CVALUE"))));
    __dec_obj447=come_value_710->c_value;
    come_value_710->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_709));
    __dec_obj447 = come_decrement_ref_count2(__dec_obj447, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj448=come_value_710->type;
    come_value_710->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1586, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj448,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_710->var=((void*)0);
    add_come_last_code(info,"%s",come_value_710->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_710));
    __result422__ = (_Bool)1;
    if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_710,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result422__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value795 = (void*)0;
struct list$1sNodeph* __dec_obj449;
struct list$1sBlockph* __dec_obj450;
struct sBlock* __dec_obj452;
struct sComePollNode* __result423__;
    ((struct sNodeBase*)(__right_value795=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value795,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj449=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj449,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj450=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj450,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj452=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj452,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result423__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value796 = (void*)0;
char* __result424__;
    __result424__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value796=__builtin_string("sComePollNode")));
    __right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_715;
struct list$1sBlockph* blocks_716;
int time_out_717;
int n_719;
struct list$1sNodeph* o2_saved_720;
struct sNode* it_723;
_Bool Value_726;
_Bool __result431__;
void* __right_value797 = (void*)0;
struct CVALUE* come_value_727;
int n_728;
struct list$1sNodeph* o2_saved_729;
struct sNode* it_730;
void* __right_value798 = (void*)0;
_Bool __result434__;
    vars_715=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_716=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_717=self->time_out;
    static int var_num_718=0;
    var_num_718++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_718,list$1sNodeph_length(vars_715));
    n_719=0;
    for(    o2_saved_720=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_723=list$1sNodeph_begin((o2_saved_720));    !list$1sNodeph_end((o2_saved_720));    it_723=list$1sNodeph_next((o2_saved_720))    ){
        Value_726=node_compile(it_723,info);
        if(        !Value_726) {
            __result431__ = (_Bool)0;
            come_call_finalizer3(o2_saved_720,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_715,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_716,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result431__;
        }
        else {
        }
        come_value_727=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_718,n_719,come_value_727->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_718,n_719,1);
        n_719++;
        come_call_finalizer3(come_value_727,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_720,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_718,var_num_718,list$1sNodeph_length(vars_715),time_out_717);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_718);
    n_728=0;
    for(    o2_saved_729=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_730=list$1sNodeph_begin((o2_saved_729));    !list$1sNodeph_end((o2_saved_729));    it_730=list$1sNodeph_next((o2_saved_729))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_718,n_728,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value798=list$1sBlockphp_operator_load_element(blocks_716,n_728))), "05call.c", 1650, 31)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value798,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_728++;
    }
    come_call_finalizer3(o2_saved_729,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_718);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result434__ = (_Bool)1;
    come_call_finalizer3(vars_715,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_716,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result434__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_711;
struct list_item$1sBlockph* prev_it_712;
    it_711=self->head;
    while(it_711!=((void*)0)) {
        prev_it_712=it_711;
        it_711=it_711->next;
        come_call_finalizer3(prev_it_712,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj451;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj451=self->item;
            come_call_finalizer3(__dec_obj451,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_713;
struct list_item$1sBlockph* prev_it_714;
    it_713=self->head;
    while(it_713!=((void*)0)) {
        prev_it_714=it_713;
        it_713=it_713->next;
        come_call_finalizer3(prev_it_714,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_721;
struct sNode* __result425__;
struct sNode* __result426__;
struct sNode* result_722;
struct sNode* __result427__;
result_721 = (void*)0;
result_722 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_721,0,sizeof(struct sNode*));
        __result425__ = gComeFunResultObject = __result_obj__ = result_721;
        gComeFunResultObject = (void*)0;
        return __result425__;
    }
    self->it=self->head;
    if(    self->it) {
        __result426__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result426__;
    }
    memset(&result_722,0,sizeof(struct sNode*));
    __result427__ = gComeFunResultObject = __result_obj__ = result_722;
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_724;
struct sNode* __result428__;
struct sNode* __result429__;
struct sNode* result_725;
struct sNode* __result430__;
result_724 = (void*)0;
result_725 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_724,0,sizeof(struct sNode*));
        __result428__ = gComeFunResultObject = __result_obj__ = result_724;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result429__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result429__;
    }
    memset(&result_725,0,sizeof(struct sNode*));
    __result430__ = gComeFunResultObject = __result_obj__ = result_725;
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_731;
int i_732;
struct sBlock* __result432__;
struct sBlock* default_value_733;
struct sBlock* __result433__;
default_value_733 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_731=self->head;
    i_732=0;
    while(it_731!=((void*)0)) {
        if(        position==i_732) {
            __result432__ = gComeFunResultObject = __result_obj__ = it_731->item;
            gComeFunResultObject = (void*)0;
            return __result432__;
        }
        it_731=it_731->next;
        i_732++;
    }
    memset(&default_value_733,0,sizeof(struct sBlock*));
    __result433__ = gComeFunResultObject = __result_obj__ = default_value_733;
    come_call_finalizer3(default_value_733,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1objectph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct sNode* _inf_value7;
struct sFunCallNode* _inf_obj_value7;
void* __right_value816 = (void*)0;
struct sNode* node_734;
void* __right_value817 = (void*)0;
struct sNode* __dec_obj470;
struct sNode* __result444__;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode");
    _inf_obj_value7=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value800=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1670, "sFunCallNode")),fun_name,params,guard_break,(struct list$1objectph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sFunCallNode_finalize;
    _inf_value7->clone=(void*)sFunCallNode_clone;
    _inf_value7->compile=(void*)sFunCallNode_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sFunCallNode_terminated;
    _inf_value7->kind=(void*)sFunCallNode_kind;
    node_734=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer3(__right_value800,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj470=node_734;
    node_734=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_734),info));
    if(__dec_obj470) { __dec_obj470 = come_decrement_ref_count2(__dec_obj470, ((struct sNode*)__dec_obj470)->finalize, ((struct sNode*)__dec_obj470)->_protocol_obj, 0,0,0, (void*)0); };
    __result444__ = gComeFunResultObject = __result_obj__ = node_734;
    come_call_finalizer3(method_generics_types,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_734) { node_734 = come_decrement_ref_count2(node_734, ((struct sNode*)node_734)->finalize, ((struct sNode*)node_734)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result444__;
}

static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result436__;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct list$1objectph* result_736;
struct list_item$1objectph* it_737;
void* __right_value811 = (void*)0;
struct object* _inf_value8;
struct object* _inf_obj_value8;
void* __right_value813 = (void*)0;
struct list$1objectph* __result442__;
    if(    self==((void*)0)) {
        __result436__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result436__;
    }
    result_736=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_737=self->head;
    while(it_737!=((void*)0)) {
        _inf_value8=(struct object*)come_calloc(1, sizeof(struct object), "/usr/local/include/comelang.h", 1074, "struct object");
        _inf_obj_value8=(struct object*)come_increment_ref_count(((struct object*)(__right_value811=object_clone(it_737->item))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)object_finalize;
        _inf_value8->clone=(void*)object_clone;
        list$1objectph_add(result_736,(struct object*)come_increment_ref_count(_inf_value8));
        come_call_finalizer2(object_finalize, __right_value811, __right_value811 ? ((struct object*)__right_value811)->finalize:(void*)0, __right_value811 ? ((struct object*)__right_value811)->_protocol_obj:(void*)0, 0, 1, 0, 0, __result_obj__);
        it_737=it_737->next;
    }
    __result442__ = gComeFunResultObject = __result_obj__ = result_736;
    come_call_finalizer3(result_736,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value807 = (void*)0;
struct list_item$1objectph* litem_738;
struct object* __dec_obj465;
void* __right_value808 = (void*)0;
struct list_item$1objectph* litem_739;
struct object* __dec_obj466;
void* __right_value809 = (void*)0;
struct list_item$1objectph* litem_740;
struct object* __dec_obj467;
struct list$1objectph* __result437__;
    if(    self->len==0) {
        litem_738=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value807=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_738->prev=((void*)0);
        litem_738->next=((void*)0);
        __dec_obj465=litem_738->item;
        litem_738->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj465) { __dec_obj465 = come_decrement_ref_count2(__dec_obj465, ((struct object*)__dec_obj465)->finalize, ((struct object*)__dec_obj465)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_738;
        self->head=litem_738;
    }
    else if(    self->len==1) {
        litem_739=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value808=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_739->prev=self->head;
        litem_739->next=((void*)0);
        __dec_obj466=litem_739->item;
        litem_739->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj466) { __dec_obj466 = come_decrement_ref_count2(__dec_obj466, ((struct object*)__dec_obj466)->finalize, ((struct object*)__dec_obj466)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_739;
        self->head->next=litem_739;
    }
    else {
        litem_740=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value809=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_740->prev=self->tail;
        litem_740->next=((void*)0);
        __dec_obj467=litem_740->item;
        litem_740->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj467) { __dec_obj467 = come_decrement_ref_count2(__dec_obj467, ((struct object*)__dec_obj467)->finalize, ((struct object*)__dec_obj467)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_740;
        self->tail=litem_740;
    }
    self->len++;
    __result437__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result437__;
}

static void object_finalize(struct object* self){
}

static struct object* object_clone(struct object* self){
void* __result_obj__=(void*)0;
struct object* __result440__;
void* __right_value812 = (void*)0;
struct object* result_742;
struct object* __result441__;
    if(    self==(void*)0) {
        __result440__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result440__;
    }
    result_742=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_742->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_742->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_742->clone=self->clone;
    }
    __result441__ = gComeFunResultObject = __result_obj__ = result_742;
    come_call_finalizer2(object_finalize, result_742, result_742 ? ((struct object*)result_742)->finalize:(void*)0, result_742 ? ((struct object*)result_742)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result441__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value818 = (void*)0;
struct sNode* __dec_obj471;
void* __right_value819 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj472;
struct sLambdaCall* __result445__;
    ((struct sNodeBase*)(__right_value818=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value818,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj471=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj471) { __dec_obj471 = come_decrement_ref_count2(__dec_obj471, ((struct sNode*)__dec_obj471)->finalize, ((struct sNode*)__dec_obj471)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj472=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj472,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result445__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result445__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value820 = (void*)0;
char* __result446__;
    __result446__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value820=__builtin_string("sLambdaCall")));
    __right_value820 = come_decrement_ref_count2(__right_value820, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result446__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_743;
struct list$1tuple2$2charphsNodephph* params_744;
_Bool Value_745;
_Bool __result447__;
void* __right_value821 = (void*)0;
struct CVALUE* come_value_746;
struct sType* lambda_type_747;
_Bool __result448__;
void* __right_value822 = (void*)0;
struct sType* result_type_748;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1CVALUEph* come_params_749;
_Bool __result449__;
int i_750;
struct list$1tuple2$2charphsNodephph* o2_saved_751;
struct tuple2$2charphsNodeph* it_752;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_753=0;
struct sNode* node_754=0;
_Bool Value_755;
_Bool __result450__;
void* __right_value825 = (void*)0;
struct CVALUE* come_value_756;
void* __right_value826 = (void*)0;
_Bool _if_conditional19;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
_Bool _if_conditional20;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* buf_757;
int j_758;
struct list$1CVALUEph* o2_saved_759;
struct CVALUE* it_760;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct CVALUE* come_value2_761;
void* __right_value836 = (void*)0;
char* __dec_obj476;
void* __right_value837 = (void*)0;
struct sType* __dec_obj477;
_Bool __result451__;
    node_743=(struct sNode*)come_increment_ref_count(self->node);
    params_744=self->params;
    Value_745=node_compile(node_743,info);
    if(    !Value_745) {
        __result447__ = (_Bool)0;
        if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result447__;
    }
    else {
    }
    come_value_746=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_747=come_value_746->type;
    if(    lambda_type_747->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result448__ = (_Bool)0;
        if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_746,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result448__;
    }
    result_type_748=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_747->mResultType->v1));
    result_type_748->mStatic=(_Bool)0;
    come_params_749=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1714, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_747->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_744)&&!lambda_type_747->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_747->mParamTypes),list$1tuple2$2charphsNodephph_length(params_744));
        __result449__ = (_Bool)0;
        if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_746,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_748,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_749,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result449__;
    }
    i_750=0;
    for(    o2_saved_751=(params_744),it_752=list$1tuple2$2charphsNodephph_begin((o2_saved_751));    !list$1tuple2$2charphsNodephph_end((o2_saved_751));    it_752=list$1tuple2$2charphsNodephph_next((o2_saved_751))    ){
        multiple_assign_var8=it_752;
        label_753=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_754=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        Value_755=node_compile(node_754,info);
        if(        !Value_755) {
            __result450__ = (_Bool)0;
            label_753 = come_decrement_ref_count2(label_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_754) { node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_746,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_748,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_749,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result450__;
        }
        else {
        }
        come_value_756=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_747->mVarArgs&&((struct sType*)(__right_value826=list$1sTypephp_operator_load_element(lambda_type_747->mParamTypes,i_750)))==((void*)0))),        come_call_finalizer3(__right_value826,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value828=xsprintf("calling param #\%s",((char*)(__right_value827=int_to_string(i_750)))))),((struct sType*)come_null_check(((struct sType*)(__right_value829=list$1sTypephp_operator_load_element(lambda_type_747->mParamTypes,i_750))), "05call.c", 1733, 32)),come_value_756->type,come_value_756,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value827 = come_decrement_ref_count2(__right_value827, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value828 = come_decrement_ref_count2(__right_value828, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value829,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value830=list$1sTypephp_operator_load_element(lambda_type_747->mParamTypes,i_750))), "05call.c", 1734, 33))->mHeap&&come_value_756->type->mHeap)),            come_call_finalizer3(__right_value830,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value831=list$1sTypephp_operator_load_element(lambda_type_747->mParamTypes,i_750))), "05call.c", 1735, 34)),come_value_756->type,come_value_756,info,(_Bool)1);
                come_call_finalizer3(__right_value831,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_749,(struct CVALUE*)come_increment_ref_count(come_value_756));
        dec_stack_ptr(1,info);
        i_750++;
        label_753 = come_decrement_ref_count2(label_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_754) { node_754 = come_decrement_ref_count2(node_754, ((struct sNode*)node_754)->finalize, ((struct sNode*)node_754)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_756,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_757=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1745, "buffer"))));
    buffer_append_str(buf_757,"(");
    buffer_append_str(buf_757,come_value_746->c_value);
    buffer_append_str(buf_757,")");
    buffer_append_str(buf_757,"(");
    j_758=0;
    for(    o2_saved_759=(struct list$1CVALUEph*)come_increment_ref_count((come_params_749)),it_760=list$1CVALUEph_begin((o2_saved_759));    !list$1CVALUEph_end((o2_saved_759));    it_760=list$1CVALUEph_next((o2_saved_759))    ){
        buffer_append_str(buf_757,it_760->c_value);
        if(        j_758!=list$1CVALUEph_length(come_params_749)-1) {
            buffer_append_str(buf_757,",");
        }
        j_758++;
    }
    come_call_finalizer3(o2_saved_759,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_757,")");
    come_value2_761=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1764, "CVALUE"))));
    __dec_obj476=come_value2_761->c_value;
    come_value2_761->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_757));
    __dec_obj476 = come_decrement_ref_count2(__dec_obj476, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_747->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_761,(struct sType*)come_increment_ref_count(lambda_type_747->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj477=come_value2_761->type;
    come_value2_761->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_748));
    come_call_finalizer3(__dec_obj477,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_761->type->mStatic=(_Bool)0;
    come_value2_761->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_761->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_761));
    __result451__ = (_Bool)1;
    if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_746,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_748,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_749,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_757,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_761,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result451__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value838 = (void*)0;
struct sType* __dec_obj478;
struct sVarArgTypeName* __result452__;
    ((struct sNodeBase*)(__right_value838=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value838,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj478=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj478,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result452__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result452__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value839 = (void*)0;
char* __result453__;
    __result453__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value839=__builtin_string("sVarArgTypeName")));
    __right_value839 = come_decrement_ref_count2(__right_value839, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result453__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_762;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct CVALUE* come_value_763;
void* __right_value842 = (void*)0;
char* __dec_obj481;
struct sType* __dec_obj482;
_Bool __result454__;
    type_762=(struct sType*)come_increment_ref_count(self->type);
    come_value_763=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1801, "CVALUE"))));
    __dec_obj481=come_value_763->c_value;
    come_value_763->c_value=(char*)come_increment_ref_count(make_type_name_string(type_762,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj481 = come_decrement_ref_count2(__dec_obj481, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj482=come_value_763->type;
    come_value_763->type=(struct sType*)come_increment_ref_count(type_762);
    come_call_finalizer3(__dec_obj482,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_763->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_763));
    __result454__ = (_Bool)1;
    come_call_finalizer3(type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_763,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result454__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct list$1objectph* method_generics_types_764;
void* __right_value845 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_765=0;
char* name_766=0;
_Bool err_767=0;
void* __right_value846 = (void*)0;
struct object* _inf_value9;
struct sType* _inf_obj_value9;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_769;
_Bool _va_arg_770;
char* p_771;
int sline_772;
_Bool err_flag_773;
void* __right_value868 = (void*)0;
char* label_774;
void* __right_value869 = (void*)0;
char* __dec_obj519;
char* __dec_obj520;
_Bool no_comma_775;
_Bool in_fun_param_776;
void* __right_value870 = (void*)0;
struct sNode* node_777;
void* __right_value871 = (void*)0;
struct sNode* __dec_obj521;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
_Bool guard_break_781;
struct buffer* method_block_782;
int method_block_sline_783;
char* head_784;
void* __right_value877 = (void*)0;
char* tail_785;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct buffer* __dec_obj527;
int len_786;
void* __right_value880 = (void*)0;
char* mem_787;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct sNode* _inf_value10;
struct sFunCallNode* _inf_obj_value10;
void* __right_value889 = (void*)0;
struct sNode* node_788;
void* __right_value890 = (void*)0;
struct sNode* __dec_obj538;
struct sNode* __result461__;
    method_generics_types_764=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "05call.c", 1815, "list$1objectph"))));
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value845=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_765=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_766=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_767=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value845,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_767) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                _inf_value9=(struct object*)come_calloc(1, sizeof(struct object), "05call.c", 1843, "struct object");
                _inf_obj_value9=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value846=sType_clone(type_765))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sType_finalize;
                _inf_value9->clone=(void*)sType_clone;
                list$1objectph_push_back(method_generics_types_764,(struct object*)come_increment_ref_count(_inf_value9));
                come_call_finalizer3(__right_value846,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_766 = come_decrement_ref_count2(name_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_769=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1853, "list$1tuple2$2charphsNodephph"))));
    _va_arg_770=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_771=info->p;
        sline_772=info->sline;
        err_flag_773=(_Bool)0;
        label_774=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj519=label_774;
            label_774=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj519 = come_decrement_ref_count2(__dec_obj519, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_773=(_Bool)1;
        }
        if(        err_flag_773==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj520=label_774;
            label_774=((void*)0);
            __dec_obj520 = come_decrement_ref_count2(__dec_obj520, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_771;
            info->sline=sline_772;
        }
        no_comma_775=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_776=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_777=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj521=node_777;
        node_777=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_777),info));
        if(__dec_obj521) { __dec_obj521 = come_decrement_ref_count2(__dec_obj521, ((struct sNode*)__dec_obj521)->finalize, ((struct sNode*)__dec_obj521)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_775;
        info->in_fun_param=in_fun_param_776;
        list$1tuple2$2charphsNodephph_push_back(params_769,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1901, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_774),(struct sNode*)come_increment_ref_count(node_777))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_774 = come_decrement_ref_count2(label_774, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_777) { node_777 = come_decrement_ref_count2(node_777, ((struct sNode*)node_777)->finalize, ((struct sNode*)node_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_774 = come_decrement_ref_count2(label_774, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_777) { node_777 = come_decrement_ref_count2(node_777, ((struct sNode*)node_777)->finalize, ((struct sNode*)node_777)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_770;
    guard_break_781=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_781=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_782=((void*)0);
    method_block_sline_783=0;
    if(    *info->p==123) {
        head_784=info->p;
        method_block_sline_783=info->sline;
        ((char*)(__right_value877=skip_block(info)));
        __right_value877 = come_decrement_ref_count2(__right_value877, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_785=info->p;
        __dec_obj527=method_block_782;
        method_block_782=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1938, "buffer"))));
        come_call_finalizer3(__dec_obj527,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_786=tail_785-head_784;
        mem_787=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_786+1)), "05call.c", 1941, "char"));
        memcpy(mem_787,head_784,len_786);
        mem_787[len_786]=0;
        buffer_append_str(method_block_782,mem_787);
        buffer_append_str(method_block_782,"\n");
        mem_787 = come_decrement_ref_count2(mem_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1951, "struct sNode");
    _inf_obj_value10=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value882=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1951, "sFunCallNode")),fun_name,params_769,guard_break_781,(struct list$1objectph*)come_increment_ref_count(method_generics_types_764),(struct buffer*)come_increment_ref_count(method_block_782),method_block_sline_783,info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sFunCallNode_finalize;
    _inf_value10->clone=(void*)sFunCallNode_clone;
    _inf_value10->compile=(void*)sFunCallNode_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sFunCallNode_terminated;
    _inf_value10->kind=(void*)sFunCallNode_kind;
    node_788=(struct sNode*)come_increment_ref_count(_inf_value10);
    come_call_finalizer3(__right_value882,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj538=node_788;
    node_788=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_788),info));
    if(__dec_obj538) { __dec_obj538 = come_decrement_ref_count2(__dec_obj538, ((struct sNode*)__dec_obj538)->finalize, ((struct sNode*)__dec_obj538)->_protocol_obj, 0,0,0, (void*)0); };
    __result461__ = gComeFunResultObject = __result_obj__ = node_788;
    come_call_finalizer3(method_generics_types_764,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_769,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_782,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_788) { node_788 = come_decrement_ref_count2(node_788, ((struct sNode*)node_788)->finalize, ((struct sNode*)node_788)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj483;
char* __dec_obj484;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj483=self->v1;
            come_call_finalizer3(__dec_obj483,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj484=self->v2;
            __dec_obj484 = come_decrement_ref_count2(__dec_obj484, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj485;
struct tuple1$1sTypeph* __dec_obj486;
struct tuple1$1sTypeph* __dec_obj487;
char* __dec_obj488;
char* __dec_obj489;
struct list$1sTypeph* __dec_obj490;
struct list$1sNodeph* __dec_obj491;
struct list$1sTypeph* __dec_obj492;
struct list$1charph* __dec_obj493;
struct tuple1$1sTypeph* __dec_obj494;
struct sNode* __dec_obj495;
struct tuple1$1sTypeph* __dec_obj496;
struct sNode* __dec_obj497;
char* __dec_obj498;
char* __dec_obj499;
char* __dec_obj500;
char* __dec_obj501;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj485=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj485,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj486=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj486,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj487=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj487,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj488=self->mInterfaceName;
            __dec_obj488 = come_decrement_ref_count2(__dec_obj488, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj489=self->mGenericsName;
            __dec_obj489 = come_decrement_ref_count2(__dec_obj489, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj490=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj490,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj491=self->mArrayNum;
            come_call_finalizer3(__dec_obj491,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj492=self->mParamTypes;
            come_call_finalizer3(__dec_obj492,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj493=self->mParamNames;
            come_call_finalizer3(__dec_obj493,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj494=self->mResultType;
            come_call_finalizer3(__dec_obj494,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj495=self->mAlignas;
            if(__dec_obj495) { __dec_obj495 = come_decrement_ref_count2(__dec_obj495, ((struct sNode*)__dec_obj495)->finalize, ((struct sNode*)__dec_obj495)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj496=self->mChannelType;
            come_call_finalizer3(__dec_obj496,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj497=self->mSizeNum;
            if(__dec_obj497) { __dec_obj497 = come_decrement_ref_count2(__dec_obj497, ((struct sNode*)__dec_obj497)->finalize, ((struct sNode*)__dec_obj497)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj498=self->mOriginalTypeName;
            __dec_obj498 = come_decrement_ref_count2(__dec_obj498, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj499=self->mAsmName;
            __dec_obj499 = come_decrement_ref_count2(__dec_obj499, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj500=self->mTupleName;
            __dec_obj500 = come_decrement_ref_count2(__dec_obj500, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj501=self->mAttribute;
            __dec_obj501 = come_decrement_ref_count2(__dec_obj501, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result455__;
void* __right_value847 = (void*)0;
struct sType* result_768;
void* __right_value848 = (void*)0;
struct tuple1$1sTypeph* __dec_obj502;
void* __right_value849 = (void*)0;
struct tuple1$1sTypeph* __dec_obj503;
void* __right_value850 = (void*)0;
struct tuple1$1sTypeph* __dec_obj504;
void* __right_value851 = (void*)0;
char* __dec_obj505;
void* __right_value852 = (void*)0;
char* __dec_obj506;
void* __right_value853 = (void*)0;
struct list$1sTypeph* __dec_obj507;
void* __right_value854 = (void*)0;
struct list$1sNodeph* __dec_obj508;
void* __right_value855 = (void*)0;
struct list$1sTypeph* __dec_obj509;
void* __right_value856 = (void*)0;
struct list$1charph* __dec_obj510;
void* __right_value857 = (void*)0;
struct tuple1$1sTypeph* __dec_obj511;
void* __right_value858 = (void*)0;
struct sNode* __dec_obj512;
void* __right_value859 = (void*)0;
struct tuple1$1sTypeph* __dec_obj513;
void* __right_value860 = (void*)0;
struct sNode* __dec_obj514;
void* __right_value861 = (void*)0;
char* __dec_obj515;
void* __right_value862 = (void*)0;
char* __dec_obj516;
void* __right_value863 = (void*)0;
char* __dec_obj517;
void* __right_value864 = (void*)0;
char* __dec_obj518;
struct sType* __result456__;
    if(    self==(void*)0) {
        __result455__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result455__;
    }
    result_768=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_768->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj502=result_768->mNoSolvedGenericsType;
        result_768->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj502,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj503=result_768->mOriginalLoadVarType;
        result_768->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj503,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj504=result_768->mRefferenceOriginalType;
        result_768->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj504,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj505=result_768->mInterfaceName;
        result_768->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj505 = come_decrement_ref_count2(__dec_obj505, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj506=result_768->mGenericsName;
        result_768->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj506 = come_decrement_ref_count2(__dec_obj506, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj507=result_768->mGenericsTypes;
        result_768->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj507,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj508=result_768->mArrayNum;
        result_768->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj508,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_768->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj509=result_768->mParamTypes;
        result_768->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj509,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj510=result_768->mParamNames;
        result_768->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj510,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj511=result_768->mResultType;
        result_768->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj511,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_768->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj512=result_768->mAlignas;
        result_768->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj512) { __dec_obj512 = come_decrement_ref_count2(__dec_obj512, ((struct sNode*)__dec_obj512)->finalize, ((struct sNode*)__dec_obj512)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj513=result_768->mChannelType;
        result_768->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj513,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_768->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_768->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_768->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_768->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_768->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_768->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_768->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_768->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_768->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_768->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_768->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_768->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_768->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_768->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_768->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_768->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_768->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_768->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_768->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_768->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_768->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_768->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_768->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_768->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_768->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_768->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj514=result_768->mSizeNum;
        result_768->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj514) { __dec_obj514 = come_decrement_ref_count2(__dec_obj514, ((struct sNode*)__dec_obj514)->finalize, ((struct sNode*)__dec_obj514)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_768->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj515=result_768->mOriginalTypeName;
        result_768->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj515 = come_decrement_ref_count2(__dec_obj515, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_768->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_768->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_768->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_768->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_768->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_768->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_768->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_768->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj516=result_768->mAsmName;
        result_768->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj516 = come_decrement_ref_count2(__dec_obj516, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_768->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_768->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_768->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_768->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_768->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_768->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj517=result_768->mTupleName;
        result_768->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj517 = come_decrement_ref_count2(__dec_obj517, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj518=result_768->mAttribute;
        result_768->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj518 = come_decrement_ref_count2(__dec_obj518, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_768->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result456__ = gComeFunResultObject = __result_obj__ = result_768;
    come_call_finalizer3(result_768,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result456__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value872 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_778;
struct tuple2$2charphsNodeph* __dec_obj522;
void* __right_value873 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_779;
struct tuple2$2charphsNodeph* __dec_obj523;
void* __right_value874 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_780;
struct tuple2$2charphsNodeph* __dec_obj524;
struct list$1tuple2$2charphsNodephph* __result457__;
    if(    self->len==0) {
        litem_778=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value872=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsNodephph"))));
        litem_778->prev=((void*)0);
        litem_778->next=((void*)0);
        __dec_obj522=litem_778->item;
        litem_778->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj522,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_778;
        self->head=litem_778;
    }
    else if(    self->len==1) {
        litem_779=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value873=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsNodephph"))));
        litem_779->prev=self->head;
        litem_779->next=((void*)0);
        __dec_obj523=litem_779->item;
        litem_779->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj523,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_779;
        self->head->next=litem_779;
    }
    else {
        litem_780=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value874=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsNodephph"))));
        litem_780->prev=self->tail;
        litem_780->next=((void*)0);
        __dec_obj524=litem_780->item;
        litem_780->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj524,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_780;
        self->tail=litem_780;
    }
    self->len++;
    __result457__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result457__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj525;
struct sNode* __dec_obj526;
struct tuple2$2charphsNodeph* __result458__;
    __dec_obj525=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj525 = come_decrement_ref_count2(__dec_obj525, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj526=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj526) { __dec_obj526 = come_decrement_ref_count2(__dec_obj526, ((struct sNode*)__dec_obj526)->finalize, ((struct sNode*)__dec_obj526)->_protocol_obj, 0,0,0, (void*)0); };
    __result458__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result458__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj528;
char* __dec_obj529;
struct list$1tuple2$2charphsNodephph* __dec_obj530;
struct list$1objectph* __dec_obj531;
struct buffer* __dec_obj532;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj528=self->sname;
            __dec_obj528 = come_decrement_ref_count2(__dec_obj528, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj529=self->fun_name;
            __dec_obj529 = come_decrement_ref_count2(__dec_obj529, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj530=self->params;
            come_call_finalizer3(__dec_obj530,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj531=self->method_generics_types;
            come_call_finalizer3(__dec_obj531,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj532=self->method_block;
            come_call_finalizer3(__dec_obj532,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result459__;
void* __right_value883 = (void*)0;
struct sFunCallNode* result_789;
void* __right_value884 = (void*)0;
char* __dec_obj533;
void* __right_value885 = (void*)0;
char* __dec_obj534;
void* __right_value886 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj535;
void* __right_value887 = (void*)0;
struct list$1objectph* __dec_obj536;
void* __right_value888 = (void*)0;
struct buffer* __dec_obj537;
struct sFunCallNode* __result460__;
    if(    self==(void*)0) {
        __result459__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result459__;
    }
    result_789=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_789->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj533=result_789->sname;
        result_789->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj533 = come_decrement_ref_count2(__dec_obj533, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_789->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj534=result_789->fun_name;
        result_789->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj534 = come_decrement_ref_count2(__dec_obj534, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj535=result_789->params;
        result_789->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj535,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_789->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj536=result_789->method_generics_types;
        result_789->method_generics_types=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj536,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj537=result_789->method_block;
        result_789->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj537,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_789->method_block_sline=self->method_block_sline;
    }
    __result460__ = gComeFunResultObject = __result_obj__ = result_789;
    come_call_finalizer3(result_789,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result462__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result462__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result462__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sNode* _inf_value11;
struct sReturnNode* _inf_obj_value11;
void* __right_value897 = (void*)0;
struct sNode* __result465__;
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode");
    _inf_obj_value11=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value892=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sReturnNode_finalize;
    _inf_value11->clone=(void*)sReturnNode_clone;
    _inf_value11->compile=(void*)sReturnNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sNodeBase_terminated;
    _inf_value11->kind=(void*)sReturnNode_kind;
    __result465__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value897=_inf_value11));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value892,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value897) { __right_value897 = come_decrement_ref_count2(__right_value897, ((struct sNode*)__right_value897)->finalize, ((struct sNode*)__right_value897)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result465__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sNode* _inf_value12;
struct sReturnNode* _inf_obj_value12;
void* __right_value905 = (void*)0;
struct sNode* __result468__;
char* head_792;
void* __right_value906 = (void*)0;
struct sNode* value_793;
char* tail_794;
void* __right_value907 = (void*)0;
struct sNode* __dec_obj551;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value13;
struct sReturnNode* _inf_obj_value13;
void* __right_value915 = (void*)0;
struct sNode* __result471__;
int nest_797;
char* head_798;
int head_sline_799;
int sline_real_800;
void* __right_value916 = (void*)0;
char* buf_801;
_Bool is_type_name__802;
_Bool is_special_word_804;
_Bool define_function_pointer_flag_805;
void* __right_value917 = (void*)0;
_Bool lambda_flag_806;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
char* word2_807;
_Bool fun_name_with_type_name_808;
void* __right_value920 = (void*)0;
char* word2_809;
_Bool call_method_generics_fun_call_810;
void* __right_value921 = (void*)0;
char* __dec_obj558;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
_Bool _if_conditional21;
int nest_811;
_Bool inline_asm_812;
void* __right_value924 = (void*)0;
char* __dec_obj559;
void* __right_value925 = (void*)0;
char* __dec_obj560;
void* __right_value926 = (void*)0;
char* __dec_obj561;
void* __right_value927 = (void*)0;
struct sNode* node_813;
struct sNode* __result472__;
_Bool no_comma_814;
void* __right_value928 = (void*)0;
struct sNode* exp_815;
void* __right_value929 = (void*)0;
struct sNode* exp2_816;
void* __right_value930 = (void*)0;
struct sNode* __result473__;
void* __right_value931 = (void*)0;
char* block_text_817;
char* contents_818;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sNode* _inf_value14;
struct sOutputNode* _inf_obj_value14;
void* __right_value937 = (void*)0;
struct sNode* __result476__;
void* __right_value938 = (void*)0;
struct sNode* node_820;
struct sNode* __result477__;
void* __right_value939 = (void*)0;
struct sNode* node_821;
struct sNode* __result478__;
struct buffer* come_block_822;
int come_block_sline_823;
char* head_824;
void* __right_value940 = (void*)0;
char* tail_825;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct buffer* __dec_obj566;
int len_826;
void* __right_value943 = (void*)0;
char* mem_827;
char* head_828;
_Bool no_output_come_code_829;
void* __right_value944 = (void*)0;
char* tail_830;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct buffer* __dec_obj567;
int len_831;
void* __right_value947 = (void*)0;
char* mem_832;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sNode* _inf_value15;
struct sComeCallNode* _inf_obj_value15;
void* __right_value953 = (void*)0;
struct sNode* node_833;
struct sNode* __result481__;
struct buffer* come_block_835;
int come_block_sline_836;
void* __right_value954 = (void*)0;
struct sNode* node_837;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sNode* _inf_value16;
struct sComeJoinNode* _inf_obj_value16;
void* __right_value960 = (void*)0;
struct sNode* __result484__;
int time_out_839;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct list$1sNodeph* vars_840;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct list$1sBlockph* blocks_841;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sBlock* else_block_842;
void* __right_value967 = (void*)0;
struct sBlock* __dec_obj576;
void* __right_value968 = (void*)0;
struct sNode* var_name_843;
void* __right_value969 = (void*)0;
struct sBlock* block_844;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* _inf_value17;
struct sComePollNode* _inf_obj_value17;
void* __right_value1012 = (void*)0;
struct sNode* __result508__;
void* __right_value1013 = (void*)0;
struct sNode* node_880;
struct sNode* __result509__;
void* __right_value1014 = (void*)0;
struct sNode* node_881;
struct sNode* __result510__;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct sNode* _inf_value18;
struct sFuncNode* _inf_obj_value18;
void* __right_value1019 = (void*)0;
struct sNode* __result513__;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sNode* _inf_value19;
struct sWildCard* _inf_obj_value19;
void* __right_value1024 = (void*)0;
struct sNode* __result516__;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sNode* _inf_value20;
struct sLineNode* _inf_obj_value20;
void* __right_value1029 = (void*)0;
struct sNode* __result519__;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sNode* _inf_value21;
struct sSNameNode* _inf_obj_value21;
void* __right_value1034 = (void*)0;
struct sNode* __result522__;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sNode* _inf_value22;
struct sCallerFuncNode* _inf_obj_value22;
void* __right_value1039 = (void*)0;
struct sNode* __result525__;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
struct sNode* _inf_value23;
struct sCallerLineNode* _inf_obj_value23;
void* __right_value1044 = (void*)0;
struct sNode* __result528__;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct sNode* _inf_value24;
struct sCallerSNameNode* _inf_obj_value24;
void* __right_value1049 = (void*)0;
struct sNode* __result531__;
void* __right_value1050 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_889=0;
char* name_890=0;
_Bool err_891=0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct sNode* _inf_value25;
struct sVarArgTypeName* _inf_obj_value25;
void* __right_value1056 = (void*)0;
struct sNode* __result534__;
void* __right_value1057 = (void*)0;
struct sNode* node_893;
struct sNode* __result535__;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct buffer* buf2_894;
void* __right_value1060 = (void*)0;
char* word_895;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct list$1sNodeph* exps_896;
void* __right_value1063 = (void*)0;
struct sNode* exp_897;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct sNode* _inf_value26;
struct sInlineAssembler* _inf_obj_value26;
void* __right_value1071 = (void*)0;
struct sNode* __result538__;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct buffer* fun_name_899;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct sType* type_900;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct sClass* klass_904;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct sType* __dec_obj621;
void* __right_value1081 = (void*)0;
char* buf2_905;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
struct sNode* node_906;
struct sNode* __result543__;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct buffer* fun_name_907;
void* __right_value1086 = (void*)0;
char* buf2_908;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct sNode* node_909;
struct sNode* __result544__;
void* __right_value1089 = (void*)0;
struct sNode* node_910;
struct sNode* __result545__;
void* __right_value1090 = (void*)0;
struct sNode* node_911;
struct sNode* __result546__;
void* __right_value1091 = (void*)0;
struct sNode* node_912;
struct sNode* __result547__;
void* __right_value1092 = (void*)0;
struct sNode* node_913;
struct sNode* __result548__;
struct sNode* __result549__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode");
            _inf_obj_value12=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value900=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1985, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sReturnNode_finalize;
            _inf_value12->clone=(void*)sReturnNode_clone;
            _inf_value12->compile=(void*)sReturnNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sReturnNode_kind;
            __result468__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value905=_inf_value12));
            come_call_finalizer3(__right_value900,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value905) { __right_value905 = come_decrement_ref_count2(__right_value905, ((struct sNode*)__right_value905)->finalize, ((struct sNode*)__right_value905)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result468__;
        }
        else {
            head_792=info->p;
            value_793=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_794=info->p;
            __dec_obj551=value_793;
            value_793=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_793),info));
            if(__dec_obj551) { __dec_obj551 = come_decrement_ref_count2(__dec_obj551, ((struct sNode*)__dec_obj551)->finalize, ((struct sNode*)__dec_obj551)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_795[tail_794-head_792+1];
            memset(&buf_795, 0, sizeof(char)            *(tail_794-head_792+1)            );
            memcpy(buf_795,head_792,tail_794-head_792);
            buf_795[tail_794-head_792]=0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1997, "struct sNode");
            _inf_obj_value13=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value910=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1997, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_793),(char*)come_increment_ref_count(__builtin_string(buf_795)),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sReturnNode_finalize;
            _inf_value13->clone=(void*)sReturnNode_clone;
            _inf_value13->compile=(void*)sReturnNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sReturnNode_kind;
            __result471__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value915=_inf_value13));
            if(value_793) { value_793 = come_decrement_ref_count2(value_793, ((struct sNode*)value_793)->finalize, ((struct sNode*)value_793)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value910,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value915) { __right_value915 = come_decrement_ref_count2(__right_value915, ((struct sNode*)__right_value915)->finalize, ((struct sNode*)__right_value915)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result471__;
            if(value_793) { value_793 = come_decrement_ref_count2(value_793, ((struct sNode*)value_793)->finalize, ((struct sNode*)value_793)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_797=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_797++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_797--;
                if(                nest_797==0) {
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
        head_798=info->p;
        head_sline_799=info->sline;
        sline_real_800=info->sline_real;
        info->sline_real=info->sline;
        buf_801=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__802=is_type_name(buf_801,info);
        static char* is_special_word_array_803[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_804=charppa_contained(is_special_word_array_803,19,buf_801);
        define_function_pointer_flag_805=(_Bool)0;
        if(        !is_special_word_804&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value917=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value917,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_805=(_Bool)1;
                }
            }
            info->p=head_798;
            info->sline=head_sline_799;
        }
        lambda_flag_806=(_Bool)0;
        if(        !is_special_word_804&&is_type_name__802) {
            info->p=head_798;
            info->sline=head_sline_799;
            ((struct tuple3$3sTypephcharphbool*)(__right_value918=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value918,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_807=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_807,"lambda")) {
                lambda_flag_806=(_Bool)1;
            }
            info->p=head_798;
            info->sline=head_sline_799;
            word2_807 = come_decrement_ref_count2(word2_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_808=(_Bool)0;
        if(        !is_special_word_804) {
            info->p=head_798;
            info->sline=head_sline_799;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_809=(char*)come_increment_ref_count(parse_word(info));
                word2_809 = come_decrement_ref_count2(word2_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_808=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_798;
            info->sline=head_sline_799;
        }
        call_method_generics_fun_call_810=(_Bool)0;
        {
            info->p=head_798;
            info->sline=head_sline_799;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj558=buf_801;
                buf_801=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj558 = come_decrement_ref_count2(__dec_obj558, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_801,info)&&((struct sVar*)(__right_value922=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_801)))==((void*)0)&&((struct sVar*)(__right_value923=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_801)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value922,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value923,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_811=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_811++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_811==0) {
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
                    call_method_generics_fun_call_810=(_Bool)1;
                }
            }
            info->p=head_798;
            info->sline=head_sline_799;
        }
        inline_asm_812=(_Bool)0;
        {
            info->p=head_798;
            info->sline=head_sline_799;
            __dec_obj559=buf_801;
            buf_801=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj559 = come_decrement_ref_count2(__dec_obj559, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_801,"asm")||string_operator_equals(buf_801,"__asm")||string_operator_equals(buf_801,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_812=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj560=buf_801;
                        buf_801=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj560 = come_decrement_ref_count2(__dec_obj560, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_812=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_798;
            info->sline=head_sline_799;
        }
        parse_sharp_v5(info);
        __dec_obj561=buf_801;
        buf_801=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj561 = come_decrement_ref_count2(__dec_obj561, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_806) {
            info->p=head_798;
            info->sline=head_sline_799;
            node_813=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_800;
            __result472__ = gComeFunResultObject = __result_obj__ = node_813;
            if(node_813) { node_813 = come_decrement_ref_count2(node_813, ((struct sNode*)node_813)->finalize, ((struct sNode*)node_813)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result472__;
            if(node_813) { node_813 = come_decrement_ref_count2(node_813, ((struct sNode*)node_813)->finalize, ((struct sNode*)node_813)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_801,"_Static_assert")||string_operator_equals(buf_801,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_814=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_815=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_814;
            expected_next_character(44,info);
            exp2_816=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result473__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value930=static_assert_node((struct sNode*)come_increment_ref_count(exp_815),(struct sNode*)come_increment_ref_count(exp2_816),info)));
            if(exp_815) { exp_815 = come_decrement_ref_count2(exp_815, ((struct sNode*)exp_815)->finalize, ((struct sNode*)exp_815)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_816) { exp2_816 = come_decrement_ref_count2(exp2_816, ((struct sNode*)exp2_816)->finalize, ((struct sNode*)exp2_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value930) { __right_value930 = come_decrement_ref_count2(__right_value930, ((struct sNode*)__right_value930)->finalize, ((struct sNode*)__right_value930)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result473__;
            if(exp_815) { exp_815 = come_decrement_ref_count2(exp_815, ((struct sNode*)exp_815)->finalize, ((struct sNode*)exp_815)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_816) { exp2_816 = come_decrement_ref_count2(exp2_816, ((struct sNode*)exp2_816)->finalize, ((struct sNode*)exp2_816)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_801,"output")&&*info->p==123) {
            block_text_817=(char*)come_increment_ref_count(skip_block(info));
            contents_818=(char*)come_increment_ref_count(block_text_817);
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2235, "struct sNode");
            _inf_obj_value14=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value933=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2235, "sOutputNode")),(char*)come_increment_ref_count(contents_818),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sOutputNode_finalize;
            _inf_value14->clone=(void*)sOutputNode_clone;
            _inf_value14->compile=(void*)sOutputNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sOutputNode_kind;
            __result476__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value937=_inf_value14));
            block_text_817 = come_decrement_ref_count2(block_text_817, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_818 = come_decrement_ref_count2(contents_818, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value933,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value937) { __right_value937 = come_decrement_ref_count2(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result476__;
            block_text_817 = come_decrement_ref_count2(block_text_817, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_818 = come_decrement_ref_count2(contents_818, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_801,"extern")) {
            node_820=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result477__ = gComeFunResultObject = __result_obj__ = node_820;
            if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result477__;
            if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_801,"string")||string_operator_equals(buf_801,"wstring"))&&*info->p==40) {
            node_821=(struct sNode*)come_increment_ref_count(parse_function_call(buf_801,info,(_Bool)0));
            info->sline_real=sline_real_800;
            __result478__ = gComeFunResultObject = __result_obj__ = node_821;
            if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result478__;
            if(node_821) { node_821 = come_decrement_ref_count2(node_821, ((struct sNode*)node_821)->finalize, ((struct sNode*)node_821)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_801,"come")) {
            come_block_822=((void*)0);
            come_block_sline_823=0;
            if(            *info->p==123) {
                head_824=info->p;
                come_block_sline_823=info->sline;
                ((char*)(__right_value940=skip_block(info)));
                __right_value940 = come_decrement_ref_count2(__right_value940, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_825=info->p;
                __dec_obj566=come_block_822;
                come_block_822=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2260, "buffer"))));
                come_call_finalizer3(__dec_obj566,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_826=tail_825-head_824;
                mem_827=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_826+1)), "05call.c", 2263, "char"));
                memcpy(mem_827,head_824,len_826);
                mem_827[len_826]=0;
                buffer_append_str(come_block_822,mem_827);
                buffer_append_str(come_block_822,"\n");
                mem_827 = come_decrement_ref_count2(mem_827, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_828=info->p;
                come_block_sline_823=info->sline;
                no_output_come_code_829=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value944=expression_v13(info)));
                if(__right_value944) { __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_829;
                tail_830=info->p;
                __dec_obj567=come_block_822;
                come_block_822=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2281, "buffer"))));
                come_call_finalizer3(__dec_obj567,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_831=tail_830-head_828;
                mem_832=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_831+1)), "05call.c", 2284, "char"));
                memcpy(mem_832,head_828,len_831);
                mem_832[len_831]=0;
                buffer_append_str(come_block_822,"{");
                buffer_append_str(come_block_822,mem_832);
                buffer_append_str(come_block_822,"; }");
                buffer_append_str(come_block_822,"}");
                buffer_append_str(come_block_822,"\n");
                mem_832 = come_decrement_ref_count2(mem_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode");
            _inf_obj_value15=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value949=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2295, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_822),come_block_sline_823,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sComeCallNode_finalize;
            _inf_value15->clone=(void*)sComeCallNode_clone;
            _inf_value15->compile=(void*)sComeCallNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sComeCallNode_terminated;
            _inf_value15->kind=(void*)sComeCallNode_kind;
            node_833=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value949,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_800;
            __result481__ = gComeFunResultObject = __result_obj__ = node_833;
            come_call_finalizer3(come_block_822,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_833) { node_833 = come_decrement_ref_count2(node_833, ((struct sNode*)node_833)->finalize, ((struct sNode*)node_833)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result481__;
            come_call_finalizer3(come_block_822,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_833) { node_833 = come_decrement_ref_count2(node_833, ((struct sNode*)node_833)->finalize, ((struct sNode*)node_833)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_801,"come_join")&&*info->p==40) {
            come_block_835=((void*)0);
            come_block_sline_836=0;
            expected_next_character(40,info);
            node_837=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_800;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2309, "struct sNode");
            _inf_obj_value16=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value956=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2309, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_837),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sComeJoinNode_finalize;
            _inf_value16->clone=(void*)sComeJoinNode_clone;
            _inf_value16->compile=(void*)sComeJoinNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sComeJoinNode_terminated;
            _inf_value16->kind=(void*)sComeJoinNode_kind;
            __result484__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value960=_inf_value16));
            come_call_finalizer3(come_block_835,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_837) { node_837 = come_decrement_ref_count2(node_837, ((struct sNode*)node_837)->finalize, ((struct sNode*)node_837)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value956,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value960) { __right_value960 = come_decrement_ref_count2(__right_value960, ((struct sNode*)__right_value960)->finalize, ((struct sNode*)__right_value960)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result484__;
            come_call_finalizer3(come_block_835,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_837) { node_837 = come_decrement_ref_count2(node_837, ((struct sNode*)node_837)->finalize, ((struct sNode*)node_837)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_801,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_839=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_839=time_out_839*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_840=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2327, "list$1sNodeph"))));
            blocks_841=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2328, "list$1sBlockph"))));
            else_block_842=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2329, "sBlock")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj576=else_block_842;
                    else_block_842=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj576,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_843=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_844=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_840,(struct sNode*)come_increment_ref_count(var_name_843));
                    list$1sBlockph_add(blocks_841,(struct sBlock*)come_increment_ref_count(block_844));
                    if(                    *info->p==125) {
                        if(var_name_843) { var_name_843 = come_decrement_ref_count2(var_name_843, ((struct sNode*)var_name_843)->finalize, ((struct sNode*)var_name_843)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_844,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_843) { var_name_843 = come_decrement_ref_count2(var_name_843, ((struct sNode*)var_name_843)->finalize, ((struct sNode*)var_name_843)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_844,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_800;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode");
            _inf_obj_value17=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value974=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2359, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_840),(struct list$1sBlockph*)come_increment_ref_count(blocks_841),(struct sBlock*)come_increment_ref_count(else_block_842),time_out_839,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sComePollNode_finalize;
            _inf_value17->clone=(void*)sComePollNode_clone;
            _inf_value17->compile=(void*)sComePollNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sComePollNode_terminated;
            _inf_value17->kind=(void*)sComePollNode_kind;
            __result508__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1012=_inf_value17));
            come_call_finalizer3(vars_840,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_841,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_842,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value974,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1012) { __right_value1012 = come_decrement_ref_count2(__right_value1012, ((struct sNode*)__right_value1012)->finalize, ((struct sNode*)__right_value1012)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result508__;
            come_call_finalizer3(vars_840,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_841,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_842,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_801,"none")&&*info->p==40) {
            node_880=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_800;
            __result509__ = gComeFunResultObject = __result_obj__ = node_880;
            if(node_880) { node_880 = come_decrement_ref_count2(node_880, ((struct sNode*)node_880)->finalize, ((struct sNode*)node_880)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result509__;
            if(node_880) { node_880 = come_decrement_ref_count2(node_880, ((struct sNode*)node_880)->finalize, ((struct sNode*)node_880)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_801,"some")&&*info->p==40) {
            node_881=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_800;
            __result510__ = gComeFunResultObject = __result_obj__ = node_881;
            if(node_881) { node_881 = come_decrement_ref_count2(node_881, ((struct sNode*)node_881)->finalize, ((struct sNode*)node_881)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result510__;
            if(node_881) { node_881 = come_decrement_ref_count2(node_881, ((struct sNode*)node_881)->finalize, ((struct sNode*)node_881)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_801,"__func__")||string_operator_equals(buf_801,"__FUNCTION__")) {
            info->sline_real=sline_real_800;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode");
            _inf_obj_value18=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value1016=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2376, "sFuncNode")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sFuncNode_finalize;
            _inf_value18->clone=(void*)sFuncNode_clone;
            _inf_value18->compile=(void*)sFuncNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sFuncNode_kind;
            __result513__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1019=_inf_value18));
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1016,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1019) { __right_value1019 = come_decrement_ref_count2(__right_value1019, ((struct sNode*)__right_value1019)->finalize, ((struct sNode*)__right_value1019)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result513__;
        }
        else if(        !gComeC&&string_operator_equals(buf_801,"wildcard")) {
            info->sline_real=sline_real_800;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode");
            _inf_obj_value19=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value1021=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2380, "sWildCard")),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sWildCard_finalize;
            _inf_value19->clone=(void*)sWildCard_clone;
            _inf_value19->compile=(void*)sWildCard_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sWildCard_kind;
            __result516__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1024=_inf_value19));
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1021,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1024) { __right_value1024 = come_decrement_ref_count2(__right_value1024, ((struct sNode*)__right_value1024)->finalize, ((struct sNode*)__right_value1024)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result516__;
        }
        else if(        string_operator_equals(buf_801,"__line__")||string_operator_equals(buf_801,"__LINE__")) {
            info->sline_real=sline_real_800;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value20=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value1026=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2384, "sLineNode")),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLineNode_finalize;
            _inf_value20->clone=(void*)sLineNode_clone;
            _inf_value20->compile=(void*)sLineNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLineNode_kind;
            __result519__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1029=_inf_value20));
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1026,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1029) { __right_value1029 = come_decrement_ref_count2(__right_value1029, ((struct sNode*)__right_value1029)->finalize, ((struct sNode*)__right_value1029)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result519__;
        }
        else if(        string_operator_equals(buf_801,"__sname__")) {
            info->sline_real=sline_real_800;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value21=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value1031=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2388, "sSNameNode")),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sSNameNode_finalize;
            _inf_value21->clone=(void*)sSNameNode_clone;
            _inf_value21->compile=(void*)sSNameNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sSNameNode_kind;
            __result522__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1034=_inf_value21));
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1031,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1034) { __right_value1034 = come_decrement_ref_count2(__right_value1034, ((struct sNode*)__right_value1034)->finalize, ((struct sNode*)__right_value1034)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result522__;
        }
        else if(        string_operator_equals(buf_801,"__caller_func__")) {
            info->sline_real=sline_real_800;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value22=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value1036=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2392, "sCallerFuncNode")),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value22->clone=(void*)sCallerFuncNode_clone;
            _inf_value22->compile=(void*)sCallerFuncNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sCallerFuncNode_kind;
            __result525__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1039=_inf_value22));
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1036,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1039) { __right_value1039 = come_decrement_ref_count2(__right_value1039, ((struct sNode*)__right_value1039)->finalize, ((struct sNode*)__right_value1039)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result525__;
        }
        else if(        string_operator_equals(buf_801,"__caller_line__")) {
            info->sline_real=sline_real_800;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode");
            _inf_obj_value23=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value1041=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2396, "sCallerLineNode")),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sCallerLineNode_finalize;
            _inf_value23->clone=(void*)sCallerLineNode_clone;
            _inf_value23->compile=(void*)sCallerLineNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sCallerLineNode_kind;
            __result528__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1044=_inf_value23));
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1041,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1044) { __right_value1044 = come_decrement_ref_count2(__right_value1044, ((struct sNode*)__right_value1044)->finalize, ((struct sNode*)__right_value1044)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result528__;
        }
        else if(        string_operator_equals(buf_801,"__caller_sname__")) {
            info->sline_real=sline_real_800;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode");
            _inf_obj_value24=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value1046=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2400, "sCallerSNameNode")),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value24->clone=(void*)sCallerSNameNode_clone;
            _inf_value24->compile=(void*)sCallerSNameNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sCallerSNameNode_kind;
            __result531__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1049=_inf_value24));
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1046,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1049) { __right_value1049 = come_decrement_ref_count2(__right_value1049, ((struct sNode*)__right_value1049)->finalize, ((struct sNode*)__right_value1049)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result531__;
        }
        else if(        info->va_arg&&is_type_name(buf_801,info)) {
            info->p=head_798;
            info->sline=head_sline_799;
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value1050=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_889=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_890=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_891=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value1050,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_800;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode");
            _inf_obj_value25=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value1052=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2409, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_889),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value25->clone=(void*)sVarArgTypeName_clone;
            _inf_value25->compile=(void*)sVarArgTypeName_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sVarArgTypeName_kind;
            __result534__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1056=_inf_value25));
            come_call_finalizer3(type_889,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_890 = come_decrement_ref_count2(name_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1052,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1056) { __right_value1056 = come_decrement_ref_count2(__right_value1056, ((struct sNode*)__right_value1056)->finalize, ((struct sNode*)__right_value1056)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result534__;
            come_call_finalizer3(type_889,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_890 = come_decrement_ref_count2(name_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_801,"sizeof")||string_operator_equals(buf_801,"_Alignof")||string_operator_equals(buf_801,"_Alignas")||string_operator_equals(buf_801,"__alignof__")) {
            node_893=(struct sNode*)come_increment_ref_count(string_node_v21(buf_801,head_798,head_sline_799,info));
            info->sline_real=sline_real_800;
            __result535__ = gComeFunResultObject = __result_obj__ = node_893;
            if(node_893) { node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result535__;
            if(node_893) { node_893 = come_decrement_ref_count2(node_893, ((struct sNode*)node_893)->finalize, ((struct sNode*)node_893)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_812) {
            buf2_894=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2418, "buffer"))));
            if(            *info->p!=40) {
                word_895=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_894,word_895);
                word_895 = come_decrement_ref_count2(word_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_894,40);
            exps_896=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2429, "list$1sNodeph"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_894,40);
                    info->p++;
                    exp_897=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_896,(struct sNode*)come_increment_ref_count(exp_897));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_894,41);
                    if(exp_897) { exp_897 = come_decrement_ref_count2(exp_897, ((struct sNode*)exp_897)->finalize, ((struct sNode*)exp_897)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_894,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_894,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_894,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_800;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2466, "struct sNode");
            _inf_obj_value26=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value1066=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2466, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_894)),(struct list$1sNodeph*)come_increment_ref_count(exps_896),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sInlineAssembler_finalize;
            _inf_value26->clone=(void*)sInlineAssembler_clone;
            _inf_value26->compile=(void*)sInlineAssembler_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sInlineAssembler_kind;
            __result538__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1071=_inf_value26));
            come_call_finalizer3(buf2_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_896,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1066,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1071) { __right_value1071 = come_decrement_ref_count2(__right_value1071, ((struct sNode*)__right_value1071)->finalize, ((struct sNode*)__right_value1071)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result538__;
            come_call_finalizer3(buf2_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_896,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_808) {
            fun_name_899=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2469, "buffer"))));
            buffer_append_str(fun_name_899,buf_801);
            type_900=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value1075=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value1074=buffer_to_string(fun_name_899))))))));
            __right_value1074 = come_decrement_ref_count2(__right_value1074, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value1075,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_900==((void*)0)) {
                klass_904=((struct sClass*)(__right_value1078=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value1077=buffer_to_string(fun_name_899))))));
                __right_value1077 = come_decrement_ref_count2(__right_value1077, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value1078,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_904) {
                    __dec_obj621=type_900;
                    type_900=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2479, "sType")),buf_801,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj621,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_801);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_900->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_899,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_899,"_");
            buf2_905=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_899,buf2_905);
            node_906=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1082=buffer_to_string(fun_name_899))),info,(_Bool)0));
            __right_value1082 = come_decrement_ref_count2(__right_value1082, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_800;
            __result543__ = gComeFunResultObject = __result_obj__ = node_906;
            come_call_finalizer3(fun_name_899,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_900,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_905 = come_decrement_ref_count2(buf2_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_906) { node_906 = come_decrement_ref_count2(node_906, ((struct sNode*)node_906)->finalize, ((struct sNode*)node_906)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result543__;
            come_call_finalizer3(fun_name_899,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_900,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_905 = come_decrement_ref_count2(buf2_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_906) { node_906 = come_decrement_ref_count2(node_906, ((struct sNode*)node_906)->finalize, ((struct sNode*)node_906)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_907=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2514, "buffer"))));
            buffer_append_str(fun_name_907,buf_801);
            buffer_append_str(fun_name_907,"_");
            buf2_908=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_907,buf2_908);
            node_909=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value1087=buffer_to_string(fun_name_907))),info,(_Bool)0));
            __right_value1087 = come_decrement_ref_count2(__right_value1087, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_800;
            __result544__ = gComeFunResultObject = __result_obj__ = node_909;
            come_call_finalizer3(fun_name_907,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_908 = come_decrement_ref_count2(buf2_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_909) { node_909 = come_decrement_ref_count2(node_909, ((struct sNode*)node_909)->finalize, ((struct sNode*)node_909)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result544__;
            come_call_finalizer3(fun_name_907,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_908 = come_decrement_ref_count2(buf2_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_909) { node_909 = come_decrement_ref_count2(node_909, ((struct sNode*)node_909)->finalize, ((struct sNode*)node_909)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_810) {
            node_910=(struct sNode*)come_increment_ref_count(parse_function_call(buf_801,info,(_Bool)0));
            info->sline_real=sline_real_800;
            __result545__ = gComeFunResultObject = __result_obj__ = node_910;
            if(node_910) { node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result545__;
            if(node_910) { node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_804&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__802)) {
            node_911=(struct sNode*)come_increment_ref_count(parse_function_call(buf_801,info,(_Bool)0));
            info->sline_real=sline_real_800;
            __result546__ = gComeFunResultObject = __result_obj__ = node_911;
            if(node_911) { node_911 = come_decrement_ref_count2(node_911, ((struct sNode*)node_911)->finalize, ((struct sNode*)node_911)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result546__;
            if(node_911) { node_911 = come_decrement_ref_count2(node_911, ((struct sNode*)node_911)->finalize, ((struct sNode*)node_911)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_912=(struct sNode*)come_increment_ref_count(string_node_v21(buf_801,head_798,head_sline_799,info));
            info->sline_real=sline_real_800;
            __result547__ = gComeFunResultObject = __result_obj__ = node_912;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result547__;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_801 = come_decrement_ref_count2(buf_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_913=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result548__ = gComeFunResultObject = __result_obj__ = node_913;
        if(node_913) { node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result548__;
        if(node_913) { node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result549__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result549__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj552;
struct sNode* __dec_obj553;
char* __dec_obj554;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj552=self->sname;
            __dec_obj552 = come_decrement_ref_count2(__dec_obj552, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj553=self->value;
            if(__dec_obj553) { __dec_obj553 = come_decrement_ref_count2(__dec_obj553, ((struct sNode*)__dec_obj553)->finalize, ((struct sNode*)__dec_obj553)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj554=self->value_source;
            __dec_obj554 = come_decrement_ref_count2(__dec_obj554, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result469__;
void* __right_value911 = (void*)0;
struct sReturnNode* result_796;
void* __right_value912 = (void*)0;
char* __dec_obj555;
void* __right_value913 = (void*)0;
struct sNode* __dec_obj556;
void* __right_value914 = (void*)0;
char* __dec_obj557;
struct sReturnNode* __result470__;
    if(    self==(void*)0) {
        __result469__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result469__;
    }
    result_796=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_796->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj555=result_796->sname;
        result_796->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj555 = come_decrement_ref_count2(__dec_obj555, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_796->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj556=result_796->value;
        result_796->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj556) { __dec_obj556 = come_decrement_ref_count2(__dec_obj556, ((struct sNode*)__dec_obj556)->finalize, ((struct sNode*)__dec_obj556)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj557=result_796->value_source;
        result_796->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        __dec_obj557 = come_decrement_ref_count2(__dec_obj557, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result470__ = gComeFunResultObject = __result_obj__ = result_796;
    come_call_finalizer3(result_796,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result470__;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj562;
char* __dec_obj563;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj562=self->sname;
            __dec_obj562 = come_decrement_ref_count2(__dec_obj562, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj563=self->contents;
            __dec_obj563 = come_decrement_ref_count2(__dec_obj563, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result474__;
void* __right_value934 = (void*)0;
struct sOutputNode* result_819;
void* __right_value935 = (void*)0;
char* __dec_obj564;
void* __right_value936 = (void*)0;
char* __dec_obj565;
struct sOutputNode* __result475__;
    if(    self==(void*)0) {
        __result474__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result474__;
    }
    result_819=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "sOutputNode"));
    if(    self!=((void*)0)) {
        result_819->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj564=result_819->sname;
        result_819->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj564 = come_decrement_ref_count2(__dec_obj564, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_819->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj565=result_819->contents;
        result_819->contents=(char*)come_increment_ref_count(string_clone(self->contents));
        __dec_obj565 = come_decrement_ref_count2(__dec_obj565, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result475__ = gComeFunResultObject = __result_obj__ = result_819;
    come_call_finalizer3(result_819,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj568;
struct buffer* __dec_obj569;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj568=self->sname;
            __dec_obj568 = come_decrement_ref_count2(__dec_obj568, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj569=self->come_block;
            come_call_finalizer3(__dec_obj569,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result479__;
void* __right_value950 = (void*)0;
struct sComeCallNode* result_834;
void* __right_value951 = (void*)0;
char* __dec_obj570;
void* __right_value952 = (void*)0;
struct buffer* __dec_obj571;
struct sComeCallNode* __result480__;
    if(    self==(void*)0) {
        __result479__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result479__;
    }
    result_834=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_834->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj570=result_834->sname;
        result_834->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj570 = come_decrement_ref_count2(__dec_obj570, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_834->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj571=result_834->come_block;
        result_834->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj571,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_834->come_block_sline=self->come_block_sline;
    }
    __result480__ = gComeFunResultObject = __result_obj__ = result_834;
    come_call_finalizer3(result_834,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result480__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj572;
struct sNode* __dec_obj573;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj572=self->sname;
            __dec_obj572 = come_decrement_ref_count2(__dec_obj572, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj573=self->node;
            if(__dec_obj573) { __dec_obj573 = come_decrement_ref_count2(__dec_obj573, ((struct sNode*)__dec_obj573)->finalize, ((struct sNode*)__dec_obj573)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result482__;
void* __right_value957 = (void*)0;
struct sComeJoinNode* result_838;
void* __right_value958 = (void*)0;
char* __dec_obj574;
void* __right_value959 = (void*)0;
struct sNode* __dec_obj575;
struct sComeJoinNode* __result483__;
    if(    self==(void*)0) {
        __result482__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result482__;
    }
    result_838=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
    if(    self!=((void*)0)) {
        result_838->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj574=result_838->sname;
        result_838->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj574 = come_decrement_ref_count2(__dec_obj574, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_838->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj575=result_838->node;
        result_838->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj575) { __dec_obj575 = come_decrement_ref_count2(__dec_obj575, ((struct sNode*)__dec_obj575)->finalize, ((struct sNode*)__dec_obj575)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result483__ = gComeFunResultObject = __result_obj__ = result_838;
    come_call_finalizer3(result_838,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result483__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result485__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result485__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value970 = (void*)0;
struct list_item$1sBlockph* litem_845;
struct sBlock* __dec_obj577;
void* __right_value971 = (void*)0;
struct list_item$1sBlockph* litem_846;
struct sBlock* __dec_obj578;
void* __right_value972 = (void*)0;
struct list_item$1sBlockph* litem_847;
struct sBlock* __dec_obj579;
struct list$1sBlockph* __result486__;
    if(    self->len==0) {
        litem_845=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value970=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sBlockph"))));
        litem_845->prev=((void*)0);
        litem_845->next=((void*)0);
        __dec_obj577=litem_845->item;
        litem_845->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj577,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_845;
        self->head=litem_845;
    }
    else if(    self->len==1) {
        litem_846=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value971=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sBlockph"))));
        litem_846->prev=self->head;
        litem_846->next=((void*)0);
        __dec_obj578=litem_846->item;
        litem_846->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj578,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_846;
        self->head->next=litem_846;
    }
    else {
        litem_847=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value972=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sBlockph"))));
        litem_847->prev=self->tail;
        litem_847->next=((void*)0);
        __dec_obj579=litem_847->item;
        litem_847->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj579,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_847;
        self->tail=litem_847;
    }
    self->len++;
    __result486__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result486__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj580;
struct list$1sNodeph* __dec_obj581;
struct list$1sBlockph* __dec_obj582;
struct sBlock* __dec_obj583;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj580=self->sname;
            __dec_obj580 = come_decrement_ref_count2(__dec_obj580, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj581=self->vars;
            come_call_finalizer3(__dec_obj581,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj582=self->blocks;
            come_call_finalizer3(__dec_obj582,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj583=self->else_block;
            come_call_finalizer3(__dec_obj583,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result487__;
void* __right_value975 = (void*)0;
struct sComePollNode* result_848;
void* __right_value976 = (void*)0;
char* __dec_obj584;
void* __right_value977 = (void*)0;
struct list$1sNodeph* __dec_obj585;
void* __right_value1010 = (void*)0;
struct list$1sBlockph* __dec_obj595;
void* __right_value1011 = (void*)0;
struct sBlock* __dec_obj596;
struct sComePollNode* __result507__;
    if(    self==(void*)0) {
        __result487__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result487__;
    }
    result_848=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_848->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj584=result_848->sname;
        result_848->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj584 = come_decrement_ref_count2(__dec_obj584, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_848->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj585=result_848->vars;
        result_848->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj585,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj595=result_848->blocks;
        result_848->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj595,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj596=result_848->else_block;
        result_848->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer3(__dec_obj596,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_848->time_out=self->time_out;
    }
    __result507__ = gComeFunResultObject = __result_obj__ = result_848;
    come_call_finalizer3(result_848,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result507__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result488__;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct list$1sBlockph* result_849;
struct list_item$1sBlockph* it_850;
void* __right_value1009 = (void*)0;
struct list$1sBlockph* __result506__;
    if(    self==((void*)0)) {
        __result488__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result488__;
    }
    result_849=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sBlockph"))));
    it_850=self->head;
    while(it_850!=((void*)0)) {
        list$1sBlockph_add(result_849,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_850->item)));
        it_850=it_850->next;
    }
    __result506__ = gComeFunResultObject = __result_obj__ = result_849;
    come_call_finalizer3(result_849,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result506__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result489__;
void* __right_value980 = (void*)0;
struct sBlock* result_851;
void* __right_value984 = (void*)0;
struct list$1sNodeph* __dec_obj586;
void* __right_value1008 = (void*)0;
struct sVarTable* __dec_obj594;
struct sBlock* __result505__;
    if(    self==(void*)0) {
        __result489__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result489__;
    }
    result_851=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj586=result_851->mNodes;
        result_851->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj586,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj594=result_851->mVarTable;
        result_851->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj594,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_851->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result505__ = gComeFunResultObject = __result_obj__ = result_851;
    come_call_finalizer3(result_851,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result505__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result490__;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct list$1sNodeph* result_852;
struct list_item$1sNodeph* it_853;
void* __right_value983 = (void*)0;
struct list$1sNodeph* __result491__;
    if(    self==((void*)0)) {
        __result490__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result490__;
    }
    result_852=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_853=self->head;
    while(it_853!=((void*)0)) {
        list$1sNodeph_add(result_852,(struct sNode*)come_increment_ref_count(sNode_clone(it_853->item)));
        it_853=it_853->next;
    }
    __result491__ = gComeFunResultObject = __result_obj__ = result_852;
    come_call_finalizer3(result_852,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result491__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result492__;
void* __right_value985 = (void*)0;
struct sVarTable* result_854;
void* __right_value1007 = (void*)0;
struct map$2charphsVarph* __dec_obj593;
struct sVarTable* __result504__;
    if(    self==(void*)0) {
        __result492__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result492__;
    }
    result_854=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj593=result_854->mVars;
        result_854->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj593,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_854->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_854->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_854->mID=self->mID;
    }
    __result504__ = gComeFunResultObject = __result_obj__ = result_854;
    come_call_finalizer3(result_854,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result504__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result493__;
void* __right_value986 = (void*)0;
void* __right_value992 = (void*)0;
struct map$2charphsVarph* result_856;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct list$1charp* __dec_obj588;
char* it_857;
struct sVar* default_value_858;
void* __right_value995 = (void*)0;
struct sVar* it2_861;
void* __right_value1006 = (void*)0;
struct map$2charphsVarph* __result503__;
default_value_858 = (void*)0;
    if(    self==((void*)0)) {
        __result493__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result493__;
    }
    result_856=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2400, "map$2charphsVarph"))));
    __dec_obj588=result_856->key_list;
    result_856->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2402, "list$1charp"))));
    come_call_finalizer3(__dec_obj588,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_857=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_857=map$2charphsVarph_next(self)    ){
        memset(&default_value_858,0,sizeof(struct sVar*));
        it2_861=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_857,default_value_858));
        map$2charphsVarph_put(result_856,it_857,(struct sVar*)come_increment_ref_count(sVar_clone(it2_861)));
        come_call_finalizer3(it2_861,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result503__ = gComeFunResultObject = __result_obj__ = result_856;
    come_call_finalizer3(result_856,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result503__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
int i_855;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct list$1charp* __dec_obj587;
struct map$2charphsVarph* __result495__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value987=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2329, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value988=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2330, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value989=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2331, "bool"))));
    for(    i_855=0;    i_855<128;    i_855++    ){
        self->item_existance[i_855]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj587=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj587,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result495__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result495__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result494__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result494__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result494__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_859;
unsigned int it_860;
struct sVar* __result496__;
struct sVar* __result497__;
struct sVar* __result498__;
struct sVar* __result499__;
    hash_859=charp_get_hash_key(((char*)key))%self->size;
    it_860=hash_859;
    while((_Bool)1) {
        if(        self->item_existance[it_860]) {
            if(            charp_equals(self->keys[it_860],key)) {
                __result496__ = gComeFunResultObject = __result_obj__ = self->items[it_860];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result496__;
            }
            it_860++;
            if(            it_860>=self->size) {
                it_860=0;
            }
            else if(            it_860==hash_859) {
                __result497__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result497__;
            }
        }
        else {
            __result498__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result498__;
        }
    }
    __result499__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result499__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_873;
int it_874;
_Bool same_key_exist_875;
char* it2_876;
struct map$2charphsVarph* __result500__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_873=charp_get_hash_key(key)%self->size;
    it_874=hash_873;
    while((_Bool)1) {
        if(        self->item_existance[it_874]) {
            if(            charp_equals(self->keys[it_874],key)) {
                if(                1) {
                    self->keys[it_874] = come_decrement_ref_count2(self->keys[it_874], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_874]);
                    self->keys[it_874]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_874]);
                    self->keys[it_874]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_874],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_874]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_874]=item;
                }
                break;
            }
            it_874++;
            if(            it_874>=self->size) {
                it_874=0;
            }
            else if(            it_874==hash_873) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_874]=(_Bool)1;
            if(            1) {
                self->keys[it_874]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_874]=key;
            }
            if(            1) {
                self->items[it_874]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_874]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_875=(_Bool)0;
    for(    it2_876=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_876=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_876,key)) {
            same_key_exist_875=(_Bool)1;
        }
    }
    if(    !same_key_exist_875) {
        list$1charp_push_back(self->key_list,key);
    }
    __result500__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result500__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_862;
void* __right_value996 = (void*)0;
char** keys_863;
void* __right_value997 = (void*)0;
struct sVar** items_864;
void* __right_value998 = (void*)0;
_Bool* item_existance_865;
int len_866;
char* it_867;
struct sVar* default_value_868;
void* __right_value999 = (void*)0;
struct sVar* it2_869;
unsigned int hash_870;
int n_871;
struct sVar* default_value_872;
void* __right_value1000 = (void*)0;
default_value_868 = (void*)0;
default_value_872 = (void*)0;
    size_862=self->size*10;
    keys_863=(char**)come_increment_ref_count(((char**)(__right_value996=(char**)come_calloc(1, sizeof(char*)*(1*(size_862)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_864=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value997=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_862)), "/usr/local/include/comelang.h", 2558, "sVar*%"))));
    item_existance_865=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value998=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_862)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_866=0;
    for(    it_867=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_867=map$2charphsVarph_next(self)    ){
        memset(&default_value_868,0,sizeof(struct sVar*));
        it2_869=((struct sVar*)(__right_value999=map$2charphsVarph_at(self,it_867,default_value_868)));
        come_call_finalizer3(__right_value999,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_870=charp_get_hash_key(it_867)%size_862;
        n_871=hash_870;
        while((_Bool)1) {
            if(            item_existance_865[n_871]) {
                n_871++;
                if(                n_871>=size_862) {
                    n_871=0;
                }
                else if(                n_871==hash_870) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_865[n_871]=(_Bool)1;
                keys_863[n_871]=it_867;
                items_864[n_871]=((struct sVar*)(__right_value1000=map$2charphsVarph_at(self,it_867,default_value_872)));
                come_call_finalizer3(__right_value1000,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_866++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_863;
    self->items=items_864;
    self->item_existance=item_existance_865;
    self->size=size_862;
    self->len=len_866;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result501__;
void* __right_value1001 = (void*)0;
struct sVar* result_877;
void* __right_value1002 = (void*)0;
char* __dec_obj589;
void* __right_value1003 = (void*)0;
char* __dec_obj590;
void* __right_value1004 = (void*)0;
struct sType* __dec_obj591;
void* __right_value1005 = (void*)0;
char* __dec_obj592;
struct sVar* __result502__;
    if(    self==(void*)0) {
        __result501__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result501__;
    }
    result_877=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj589=result_877->mName;
        result_877->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj589 = come_decrement_ref_count2(__dec_obj589, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj590=result_877->mCValueName;
        result_877->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        __dec_obj590 = come_decrement_ref_count2(__dec_obj590, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj591=result_877->mType;
        result_877->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj591,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_877->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_877->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_877->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_877->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_877->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj592=result_877->mFunName;
        result_877->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        __dec_obj592 = come_decrement_ref_count2(__dec_obj592, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result502__ = gComeFunResultObject = __result_obj__ = result_877;
    come_call_finalizer3(result_877,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result502__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_878;
int i_879;
    for(    i_878=0;    i_878<self->size;    i_878++    ){
        if(        self->item_existance[i_878]) {
            if(            1) {
                come_call_finalizer3(self->items[i_878],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_879=0;    i_879<self->size;    i_879++    ){
        if(        self->item_existance[i_879]) {
            if(            1) {
                self->keys[i_879] = come_decrement_ref_count2(self->keys[i_879], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj597;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj597=self->sname;
            __dec_obj597 = come_decrement_ref_count2(__dec_obj597, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result511__;
void* __right_value1017 = (void*)0;
struct sFuncNode* result_882;
void* __right_value1018 = (void*)0;
char* __dec_obj598;
struct sFuncNode* __result512__;
    if(    self==(void*)0) {
        __result511__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result511__;
    }
    result_882=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_882->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj598=result_882->sname;
        result_882->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj598 = come_decrement_ref_count2(__dec_obj598, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_882->sline_real=self->sline_real;
    }
    __result512__ = gComeFunResultObject = __result_obj__ = result_882;
    come_call_finalizer3(result_882,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result512__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj599;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj599=self->sname;
            __dec_obj599 = come_decrement_ref_count2(__dec_obj599, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result514__;
void* __right_value1022 = (void*)0;
struct sWildCard* result_883;
void* __right_value1023 = (void*)0;
char* __dec_obj600;
struct sWildCard* __result515__;
    if(    self==(void*)0) {
        __result514__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result514__;
    }
    result_883=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_883->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj600=result_883->sname;
        result_883->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj600 = come_decrement_ref_count2(__dec_obj600, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_883->sline_real=self->sline_real;
    }
    __result515__ = gComeFunResultObject = __result_obj__ = result_883;
    come_call_finalizer3(result_883,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result515__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj601;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj601=self->sname;
            __dec_obj601 = come_decrement_ref_count2(__dec_obj601, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result517__;
void* __right_value1027 = (void*)0;
struct sLineNode* result_884;
void* __right_value1028 = (void*)0;
char* __dec_obj602;
struct sLineNode* __result518__;
    if(    self==(void*)0) {
        __result517__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result517__;
    }
    result_884=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_884->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj602=result_884->sname;
        result_884->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj602 = come_decrement_ref_count2(__dec_obj602, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_884->sline_real=self->sline_real;
    }
    __result518__ = gComeFunResultObject = __result_obj__ = result_884;
    come_call_finalizer3(result_884,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result518__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj603;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj603=self->sname;
            __dec_obj603 = come_decrement_ref_count2(__dec_obj603, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result520__;
void* __right_value1032 = (void*)0;
struct sSNameNode* result_885;
void* __right_value1033 = (void*)0;
char* __dec_obj604;
struct sSNameNode* __result521__;
    if(    self==(void*)0) {
        __result520__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result520__;
    }
    result_885=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_885->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj604=result_885->sname;
        result_885->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj604 = come_decrement_ref_count2(__dec_obj604, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_885->sline_real=self->sline_real;
    }
    __result521__ = gComeFunResultObject = __result_obj__ = result_885;
    come_call_finalizer3(result_885,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result521__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj605;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj605=self->sname;
            __dec_obj605 = come_decrement_ref_count2(__dec_obj605, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result523__;
void* __right_value1037 = (void*)0;
struct sCallerFuncNode* result_886;
void* __right_value1038 = (void*)0;
char* __dec_obj606;
struct sCallerFuncNode* __result524__;
    if(    self==(void*)0) {
        __result523__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result523__;
    }
    result_886=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_886->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj606=result_886->sname;
        result_886->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj606 = come_decrement_ref_count2(__dec_obj606, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_886->sline_real=self->sline_real;
    }
    __result524__ = gComeFunResultObject = __result_obj__ = result_886;
    come_call_finalizer3(result_886,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result524__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj607;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj607=self->sname;
            __dec_obj607 = come_decrement_ref_count2(__dec_obj607, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result526__;
void* __right_value1042 = (void*)0;
struct sCallerLineNode* result_887;
void* __right_value1043 = (void*)0;
char* __dec_obj608;
struct sCallerLineNode* __result527__;
    if(    self==(void*)0) {
        __result526__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result526__;
    }
    result_887=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_887->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj608=result_887->sname;
        result_887->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj608 = come_decrement_ref_count2(__dec_obj608, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_887->sline_real=self->sline_real;
    }
    __result527__ = gComeFunResultObject = __result_obj__ = result_887;
    come_call_finalizer3(result_887,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result527__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj609;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj609=self->sname;
            __dec_obj609 = come_decrement_ref_count2(__dec_obj609, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result529__;
void* __right_value1047 = (void*)0;
struct sCallerSNameNode* result_888;
void* __right_value1048 = (void*)0;
char* __dec_obj610;
struct sCallerSNameNode* __result530__;
    if(    self==(void*)0) {
        __result529__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result529__;
    }
    result_888=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_888->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj610=result_888->sname;
        result_888->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj610 = come_decrement_ref_count2(__dec_obj610, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_888->sline_real=self->sline_real;
    }
    __result530__ = gComeFunResultObject = __result_obj__ = result_888;
    come_call_finalizer3(result_888,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result530__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj611;
struct sType* __dec_obj612;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj611=self->sname;
            __dec_obj611 = come_decrement_ref_count2(__dec_obj611, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj612=self->type;
            come_call_finalizer3(__dec_obj612,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result532__;
void* __right_value1053 = (void*)0;
struct sVarArgTypeName* result_892;
void* __right_value1054 = (void*)0;
char* __dec_obj613;
void* __right_value1055 = (void*)0;
struct sType* __dec_obj614;
struct sVarArgTypeName* __result533__;
    if(    self==(void*)0) {
        __result532__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result532__;
    }
    result_892=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_892->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj613=result_892->sname;
        result_892->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj613 = come_decrement_ref_count2(__dec_obj613, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_892->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj614=result_892->type;
        result_892->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj614,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result533__ = gComeFunResultObject = __result_obj__ = result_892;
    come_call_finalizer3(result_892,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result533__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj615;
char* __dec_obj616;
struct list$1sNodeph* __dec_obj617;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj615=self->sname;
            __dec_obj615 = come_decrement_ref_count2(__dec_obj615, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj616=self->source;
            __dec_obj616 = come_decrement_ref_count2(__dec_obj616, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj617=self->exps;
            come_call_finalizer3(__dec_obj617,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result536__;
void* __right_value1067 = (void*)0;
struct sInlineAssembler* result_898;
void* __right_value1068 = (void*)0;
char* __dec_obj618;
void* __right_value1069 = (void*)0;
char* __dec_obj619;
void* __right_value1070 = (void*)0;
struct list$1sNodeph* __dec_obj620;
struct sInlineAssembler* __result537__;
    if(    self==(void*)0) {
        __result536__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result536__;
    }
    result_898=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_898->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj618=result_898->sname;
        result_898->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj618 = come_decrement_ref_count2(__dec_obj618, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_898->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj619=result_898->source;
        result_898->source=(char*)come_increment_ref_count(string_clone(self->source));
        __dec_obj619 = come_decrement_ref_count2(__dec_obj619, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj620=result_898->exps;
        result_898->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj620,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result537__ = gComeFunResultObject = __result_obj__ = result_898;
    come_call_finalizer3(result_898,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result537__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_901;
unsigned int hash_902;
unsigned int it_903;
struct sType* __result539__;
struct sType* __result540__;
struct sType* __result541__;
struct sType* __result542__;
default_value_901 = (void*)0;
    memset(&default_value_901,0,sizeof(struct sType*));
    hash_902=charp_get_hash_key(((char*)key))%self->size;
    it_903=hash_902;
    while((_Bool)1) {
        if(        self->item_existance[it_903]) {
            if(            charp_equals(self->keys[it_903],key)) {
                __result539__ = gComeFunResultObject = __result_obj__ = self->items[it_903];
                come_call_finalizer3(default_value_901,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result539__;
            }
            it_903++;
            if(            it_903>=self->size) {
                it_903=0;
            }
            else if(            it_903==hash_902) {
                __result540__ = gComeFunResultObject = __result_obj__ = default_value_901;
                come_call_finalizer3(default_value_901,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result540__;
            }
        }
        else {
            __result541__ = gComeFunResultObject = __result_obj__ = default_value_901;
            come_call_finalizer3(default_value_901,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result541__;
        }
    }
    __result542__ = gComeFunResultObject = __result_obj__ = default_value_901;
    come_call_finalizer3(default_value_901,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result542__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1093 = (void*)0;
struct sNode* __result550__;
    __result550__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1093=expression_node_v99(info)));
    if(__right_value1093) { __right_value1093 = come_decrement_ref_count2(__right_value1093, ((struct sNode*)__right_value1093)->finalize, ((struct sNode*)__right_value1093)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result550__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct sNode* __dec_obj622;
struct sNode* __result551__;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
struct sNode* __dec_obj623;
struct sNode* __result552__;
struct sNode* __result553__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj622=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj622) { __dec_obj622 = come_decrement_ref_count2(__dec_obj622, ((struct sNode*)__dec_obj622)->finalize, ((struct sNode*)__dec_obj622)->_protocol_obj, 0,0,0, (void*)0); };
        __result551__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result551__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj623=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj623) { __dec_obj623 = come_decrement_ref_count2(__dec_obj623, ((struct sNode*)__dec_obj623)->finalize, ((struct sNode*)__dec_obj623)->_protocol_obj, 0,0,0, (void*)0); };
        __result552__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result552__;
    }
    __result553__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result553__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1098 = (void*)0;
struct sNode* node_914;
void* __right_value1099 = (void*)0;
struct sNode* __dec_obj624;
struct sNode* __result554__;
    node_914=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj624=node_914;
    node_914=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_914),info));
    if(__dec_obj624) { __dec_obj624 = come_decrement_ref_count2(__dec_obj624, ((struct sNode*)__dec_obj624)->finalize, ((struct sNode*)__dec_obj624)->_protocol_obj, 0,0,0, (void*)0); };
    __result554__ = gComeFunResultObject = __result_obj__ = node_914;
    if(node_914) { node_914 = come_decrement_ref_count2(node_914, ((struct sNode*)node_914)->finalize, ((struct sNode*)node_914)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result554__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_915;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct buffer* buf_916;
void* __right_value1102 = (void*)0;
char* __dec_obj625;
int i_917;
void* __right_value1103 = (void*)0;
char* __dec_obj626;
void* __right_value1104 = (void*)0;
char* __dec_obj627;
int i_918;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
char* __result555__;
struct_name_915 = (void*)0;
    buf_916=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2600, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj625=struct_name_915;
        struct_name_915=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj625 = come_decrement_ref_count2(__dec_obj625, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_917=0;            i_917<obj_type->mOriginalTypeNamePointerNum;            i_917++            ){
                buffer_append_str(buf_916,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj626=struct_name_915;
        struct_name_915=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj626 = come_decrement_ref_count2(__dec_obj626, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj627=struct_name_915;
        struct_name_915=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj627 = come_decrement_ref_count2(__dec_obj627, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_918=0;        i_918<obj_type->mPointerNum;        i_918++        ){
            buffer_append_str(buf_916,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_916,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_916,"pa");
    }
    __result555__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1106=xsprintf("%s%s_%s",struct_name_915,((char*)(__right_value1105=buffer_to_string(buf_916))),fun_name)));
    struct_name_915 = come_decrement_ref_count2(struct_name_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_916,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1105 = come_decrement_ref_count2(__right_value1105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value1106 = come_decrement_ref_count2(__right_value1106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result555__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_919;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct buffer* buf_920;
void* __right_value1109 = (void*)0;
char* __dec_obj628;
void* __right_value1110 = (void*)0;
char* __dec_obj629;
int i_921;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
char* __result556__;
struct_name_919 = (void*)0;
    buf_920=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2635, "buffer"))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj628=struct_name_919;
        struct_name_919=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj628 = come_decrement_ref_count2(__dec_obj628, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj629=struct_name_919;
        struct_name_919=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj629 = come_decrement_ref_count2(__dec_obj629, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_921=0;        i_921<obj_type->mPointerNum;        i_921++        ){
            buffer_append_str(buf_920,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_920,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_920,"pa");
    }
    __result556__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1112=xsprintf("%s%s_%s",struct_name_919,((char*)(__right_value1111=buffer_to_string(buf_920))),fun_name)));
    struct_name_919 = come_decrement_ref_count2(struct_name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_920,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1111 = come_decrement_ref_count2(__right_value1111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value1112 = come_decrement_ref_count2(__right_value1112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result556__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_922;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct buffer* buf_923;
void* __right_value1115 = (void*)0;
char* __dec_obj630;
int i_924;
void* __right_value1116 = (void*)0;
char* __dec_obj631;
void* __right_value1117 = (void*)0;
char* __dec_obj632;
int i_925;
void* __right_value1118 = (void*)0;
int len_927;
void* __right_value1119 = (void*)0;
char* __result557__;
struct_name_922 = (void*)0;
    buf_923=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2661, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj630=struct_name_922;
        struct_name_922=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj630 = come_decrement_ref_count2(__dec_obj630, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_924=0;            i_924<obj_type->mOriginalTypeNamePointerNum;            i_924++            ){
                buffer_append_str(buf_923,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj631=struct_name_922;
        struct_name_922=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj631 = come_decrement_ref_count2(__dec_obj631, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj632=struct_name_922;
        struct_name_922=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj632 = come_decrement_ref_count2(__dec_obj632, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_925=0;        i_925<obj_type->mPointerNum;        i_925++        ){
            buffer_append_str(buf_923,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_923,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_923,"pa");
    }
    char none_method_name_926[charp_length(fun_name)+1];
    memset(&none_method_name_926, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_927=string_length(struct_name_922)+string_length(((char*)(__right_value1118=buffer_to_string(buf_923))));
    __right_value1118 = come_decrement_ref_count2(__right_value1118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_926,fun_name+len_927+1,charp_length(fun_name)-len_927-1);
    none_method_name_926[charp_length(fun_name)-len_927-1]=0;
    __result557__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1119=__builtin_string(none_method_name_926)));
    struct_name_922 = come_decrement_ref_count2(struct_name_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_923,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1119 = come_decrement_ref_count2(__right_value1119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result557__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value1120 = (void*)0;
char* struct_name_928;
void* __right_value1121 = (void*)0;
char* __result558__;
    struct_name_928=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result558__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1121=xsprintf("%s_%s",struct_name_928,fun_name)));
    struct_name_928 = come_decrement_ref_count2(struct_name_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value1121 = come_decrement_ref_count2(__right_value1121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result558__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result559__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result559__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result559__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_929;
char* p_930;
int sline_931;
_Bool err_flag_932;
void* __right_value1124 = (void*)0;
char* label_933;
void* __right_value1125 = (void*)0;
char* __dec_obj633;
char* __dec_obj634;
_Bool no_comma_934;
_Bool in_fun_param_935;
void* __right_value1126 = (void*)0;
struct sNode* node_936;
void* __right_value1127 = (void*)0;
struct sNode* __dec_obj635;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
void* __right_value1131 = (void*)0;
struct sNode* _inf_value27;
struct sLambdaCall* _inf_obj_value27;
void* __right_value1136 = (void*)0;
struct sNode* __result562__;
struct sNode* __result563__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_929=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2724, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_930=info->p;
            sline_931=info->sline;
            err_flag_932=(_Bool)0;
            label_933=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj633=label_933;
                label_933=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj633 = come_decrement_ref_count2(__dec_obj633, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_932=(_Bool)1;
            }
            if(            err_flag_932==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj634=label_933;
                label_933=((void*)0);
                __dec_obj634 = come_decrement_ref_count2(__dec_obj634, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_930;
                info->sline=sline_931;
            }
            no_comma_934=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_935=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_936=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj635=node_936;
            node_936=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_936),info));
            if(__dec_obj635) { __dec_obj635 = come_decrement_ref_count2(__dec_obj635, ((struct sNode*)__dec_obj635)->finalize, ((struct sNode*)__dec_obj635)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_934;
            info->in_fun_param=in_fun_param_935;
            list$1tuple2$2charphsNodephph_push_back(params_929,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2767, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_933),(struct sNode*)come_increment_ref_count(node_936))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_933 = come_decrement_ref_count2(label_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_936) { node_936 = come_decrement_ref_count2(node_936, ((struct sNode*)node_936)->finalize, ((struct sNode*)node_936)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_933 = come_decrement_ref_count2(label_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_936) { node_936 = come_decrement_ref_count2(node_936, ((struct sNode*)node_936)->finalize, ((struct sNode*)node_936)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2785, "struct sNode");
        _inf_obj_value27=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1131=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2785, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_929,info))));
        _inf_value27->_protocol_obj=_inf_obj_value27;
        _inf_value27->finalize=(void*)sLambdaCall_finalize;
        _inf_value27->clone=(void*)sLambdaCall_clone;
        _inf_value27->compile=(void*)sLambdaCall_compile;
        _inf_value27->sline=(void*)sNodeBase_sline;
        _inf_value27->sline_real=(void*)sNodeBase_sline_real;
        _inf_value27->sname=(void*)sNodeBase_sname;
        _inf_value27->terminated=(void*)sNodeBase_terminated;
        _inf_value27->kind=(void*)sLambdaCall_kind;
        __result562__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1136=_inf_value27));
        come_call_finalizer3(params_929,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1131,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1136) { __right_value1136 = come_decrement_ref_count2(__right_value1136, ((struct sNode*)__right_value1136)->finalize, ((struct sNode*)__right_value1136)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result562__;
        come_call_finalizer3(params_929,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result563__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result563__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj636;
struct sNode* __dec_obj637;
struct list$1tuple2$2charphsNodephph* __dec_obj638;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj636=self->sname;
            __dec_obj636 = come_decrement_ref_count2(__dec_obj636, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj637=self->node;
            if(__dec_obj637) { __dec_obj637 = come_decrement_ref_count2(__dec_obj637, ((struct sNode*)__dec_obj637)->finalize, ((struct sNode*)__dec_obj637)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj638=self->params;
            come_call_finalizer3(__dec_obj638,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result560__;
void* __right_value1132 = (void*)0;
struct sLambdaCall* result_937;
void* __right_value1133 = (void*)0;
char* __dec_obj639;
void* __right_value1134 = (void*)0;
struct sNode* __dec_obj640;
void* __right_value1135 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj641;
struct sLambdaCall* __result561__;
    if(    self==(void*)0) {
        __result560__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result560__;
    }
    result_937=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_937->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj639=result_937->sname;
        result_937->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj639 = come_decrement_ref_count2(__dec_obj639, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_937->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj640=result_937->node;
        result_937->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj640) { __dec_obj640 = come_decrement_ref_count2(__dec_obj640, ((struct sNode*)__dec_obj640)->finalize, ((struct sNode*)__dec_obj640)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj641=result_937->params;
        result_937->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj641,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result561__ = gComeFunResultObject = __result_obj__ = result_937;
    come_call_finalizer3(result_937,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result561__;
}

