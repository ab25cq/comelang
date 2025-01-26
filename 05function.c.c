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
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
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
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
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
static _Bool list$1objectph_equals(struct list$1objectph* left, struct list$1objectph* right);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
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
static _Bool list$1objectph_operator_not_equals(struct list$1objectph* left, struct list$1objectph* right);
static _Bool list$1objectph_operator_equals(struct list$1objectph* left, struct list$1objectph* right);
static _Bool object_equals(struct object* left, struct object* right);
static _Bool object_operator_equals(struct object* left, struct object* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sSemicolonNode* __result207__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sSemicolonNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
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
struct sLambdaNode* __result209__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sLambdaNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_266;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* result_type_267;
void* __right_value255 = (void*)0;
int block_level_268;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_269;
void* __right_value258 = (void*)0;
char* __dec_obj35;
void* __right_value305 = (void*)0;
struct sType* __dec_obj92;
_Bool __result235__;
    come_fun_266=info->come_fun;
    info->come_fun=self->mFun;
    result_type_267=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value255=make_define_var(result_type_267,"__result_obj__",(_Bool)0,info))));
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_268=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_268;
    come_value_269=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj35=come_value_269->c_value;
    come_value_269->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj92=come_value_269->type;
    come_value_269->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_269->var=((void*)0);
    add_come_last_code(info,"%s",come_value_269->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_269));
    info->come_fun=come_fun_266;
    __result235__ = (_Bool)1;
    come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_269,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result235__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result211__;
void* __right_value259 = (void*)0;
struct sType* result_270;
void* __right_value262 = (void*)0;
struct tuple1$1sTypeph* __dec_obj63;
void* __right_value263 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value264 = (void*)0;
struct tuple1$1sTypeph* __dec_obj65;
void* __right_value265 = (void*)0;
char* __dec_obj66;
void* __right_value266 = (void*)0;
char* __dec_obj67;
void* __right_value274 = (void*)0;
struct list$1objectph* __dec_obj71;
void* __right_value282 = (void*)0;
struct list$1sNodeph* __dec_obj75;
void* __right_value289 = (void*)0;
struct list$1sTypeph* __dec_obj79;
void* __right_value296 = (void*)0;
struct list$1charph* __dec_obj83;
void* __right_value297 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value299 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value301 = (void*)0;
char* __dec_obj88;
void* __right_value302 = (void*)0;
char* __dec_obj89;
void* __right_value303 = (void*)0;
char* __dec_obj90;
void* __right_value304 = (void*)0;
char* __dec_obj91;
struct sType* __result233__;
    if(    self==(void*)0) {
        __result211__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    result_270=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_270->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj63=result_270->mNoSolvedGenericsType;
        result_270->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj64=result_270->mOriginalLoadVarType;
        result_270->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj65=result_270->mRefferenceOriginalType;
        result_270->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj65,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj66=result_270->mInterfaceName;
        result_270->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj67=result_270->mGenericsName;
        result_270->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj71=result_270->mGenericsTypes;
        result_270->mGenericsTypes=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj71,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj75=result_270->mArrayNum;
        result_270->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj75,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj79=result_270->mParamTypes;
        result_270->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj79,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj83=result_270->mParamNames;
        result_270->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj84=result_270->mResultType;
        result_270->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj85=result_270->mAlignas;
        result_270->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj86=result_270->mChannelType;
        result_270->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_270->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_270->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_270->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_270->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_270->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_270->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_270->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_270->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_270->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_270->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_270->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_270->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_270->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_270->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_270->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_270->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_270->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_270->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_270->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_270->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_270->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_270->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_270->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_270->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_270->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj87=result_270->mSizeNum;
        result_270->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_270->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj88=result_270->mOriginalTypeName;
        result_270->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_270->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_270->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_270->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_270->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_270->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_270->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_270->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj89=result_270->mAsmName;
        result_270->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_270->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_270->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_270->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_270->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_270->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj90=result_270->mTupleName;
        result_270->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj91=result_270->mAttribute;
        result_270->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_270;
    come_call_finalizer3(result_270,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result212__;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* result_271;
void* __right_value261 = (void*)0;
struct sType* __dec_obj36;
struct tuple1$1sTypeph* __result213__;
    if(    self==(void*)0) {
        __result212__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_271=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj36=result_271->v1;
        result_271->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_271;
    come_call_finalizer3(result_271,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj41;
char* __dec_obj43;
char* __dec_obj44;
struct list$1objectph* __dec_obj45;
struct list$1sNodeph* __dec_obj47;
struct list$1sTypeph* __dec_obj49;
struct list$1charph* __dec_obj51;
struct tuple1$1sTypeph* __dec_obj52;
struct sNode* __dec_obj54;
struct tuple1$1sTypeph* __dec_obj55;
struct sNode* __dec_obj57;
char* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
char* __dec_obj61;
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
            come_call_finalizer3(__dec_obj45,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
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
            __dec_obj51=self->mParamNames;
            come_call_finalizer3(__dec_obj51,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj52=self->mResultType;
            come_call_finalizer3(__dec_obj52,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj54=self->mAlignas;
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj55=self->mChannelType;
            come_call_finalizer3(__dec_obj55,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj57=self->mSizeNum;
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj58=self->mOriginalTypeName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj59=self->mAsmName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj60=self->mTupleName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj61=self->mAttribute;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_272;
struct list_item$1objectph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        come_call_finalizer3(prev_it_273,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct object*)__dec_obj46)->finalize, ((struct object*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_274;
struct list_item$1objectph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_276;
struct list_item$1sNodeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_278;
struct list_item$1sNodeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_280;
struct list_item$1sTypeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj50;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj50=self->item;
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_282;
struct list_item$1sTypeph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_284;
struct list_item$1charph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer3(prev_it_285,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj56;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj56=self->v1;
            come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj62;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj62=self->v1;
            come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result214__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1objectph* result_286;
struct list_item$1objectph* it_287;
void* __right_value273 = (void*)0;
struct list$1objectph* __result219__;
    if(    self==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_286=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_287=self->head;
    while(it_287!=((void*)0)) {
        list$1objectph_add(result_286,(struct object*)come_increment_ref_count(object_clone(it_287->item)));
        it_287=it_287->next;
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_286;
    come_call_finalizer3(result_286,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result215__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1objectph* litem_288;
struct object* __dec_obj68;
void* __right_value270 = (void*)0;
struct list_item$1objectph* litem_289;
struct object* __dec_obj69;
void* __right_value271 = (void*)0;
struct list_item$1objectph* litem_290;
struct object* __dec_obj70;
struct list$1objectph* __result216__;
    if(    self->len==0) {
        litem_288=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value269=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_288->prev=((void*)0);
        litem_288->next=((void*)0);
        __dec_obj68=litem_288->item;
        litem_288->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct object*)__dec_obj68)->finalize, ((struct object*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_288;
        self->head=litem_288;
    }
    else if(    self->len==1) {
        litem_289=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value270=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_289->prev=self->head;
        litem_289->next=((void*)0);
        __dec_obj69=litem_289->item;
        litem_289->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct object*)__dec_obj69)->finalize, ((struct object*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_289;
        self->head->next=litem_289;
    }
    else {
        litem_290=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value271=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_290->prev=self->tail;
        litem_290->next=((void*)0);
        __dec_obj70=litem_290->item;
        litem_290->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct object*)__dec_obj70)->finalize, ((struct object*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_290;
        self->tail=litem_290;
    }
    self->len++;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct object* object_clone(struct object* self){
void* __result_obj__=(void*)0;
struct object* __result217__;
void* __right_value272 = (void*)0;
struct object* result_291;
struct object* __result218__;
    if(    self==(void*)0) {
        __result217__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_291=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_291->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_291->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_291->clone=self->clone;
    }
    __result218__ = gComeFunResultObject = __result_obj__ = result_291;
    if(result_291) { result_291 = come_decrement_ref_count2(result_291, ((struct object*)result_291)->finalize, ((struct object*)result_291)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result220__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1sNodeph* result_292;
struct list_item$1sNodeph* it_293;
void* __right_value281 = (void*)0;
struct list$1sNodeph* __result225__;
    if(    self==((void*)0)) {
        __result220__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_292=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_293=self->head;
    while(it_293!=((void*)0)) {
        list$1sNodeph_add(result_292,(struct sNode*)come_increment_ref_count(sNode_clone(it_293->item)));
        it_293=it_293->next;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_292;
    come_call_finalizer3(result_292,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result221__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_294;
struct sNode* __dec_obj72;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_295;
struct sNode* __dec_obj73;
void* __right_value279 = (void*)0;
struct list_item$1sNodeph* litem_296;
struct sNode* __dec_obj74;
struct list$1sNodeph* __result222__;
    if(    self->len==0) {
        litem_294=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_294->prev=((void*)0);
        litem_294->next=((void*)0);
        __dec_obj72=litem_294->item;
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_294;
        self->head=litem_294;
    }
    else if(    self->len==1) {
        litem_295=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_295->prev=self->head;
        litem_295->next=((void*)0);
        __dec_obj73=litem_295->item;
        litem_295->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_295;
        self->head->next=litem_295;
    }
    else {
        litem_296=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value279=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_296->prev=self->tail;
        litem_296->next=((void*)0);
        __dec_obj74=litem_296->item;
        litem_296->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_296;
        self->tail=litem_296;
    }
    self->len++;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result223__;
void* __right_value280 = (void*)0;
struct sNode* result_297;
struct sNode* __result224__;
    if(    self==(void*)0) {
        __result223__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_297=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_297->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_297->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_297->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_297->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_297->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_297->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_297->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_297->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_297->kind=self->kind;
    }
    __result224__ = gComeFunResultObject = __result_obj__ = result_297;
    if(result_297) { result_297 = come_decrement_ref_count2(result_297, ((struct sNode*)result_297)->finalize, ((struct sNode*)result_297)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result226__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sTypeph* result_298;
struct list_item$1sTypeph* it_299;
void* __right_value288 = (void*)0;
struct list$1sTypeph* __result229__;
    if(    self==((void*)0)) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_298=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_299=self->head;
    while(it_299!=((void*)0)) {
        list$1sTypeph_add(result_298,(struct sType*)come_increment_ref_count(sType_clone(it_299->item)));
        it_299=it_299->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_298;
    come_call_finalizer3(result_298,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result227__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1sTypeph* litem_300;
struct sType* __dec_obj76;
void* __right_value286 = (void*)0;
struct list_item$1sTypeph* litem_301;
struct sType* __dec_obj77;
void* __right_value287 = (void*)0;
struct list_item$1sTypeph* litem_302;
struct sType* __dec_obj78;
struct list$1sTypeph* __result228__;
    if(    self->len==0) {
        litem_300=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value285=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj76=litem_300->item;
        litem_300->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value286=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj77=litem_301->item;
        litem_301->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value287=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj78=litem_302->item;
        litem_302->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result230__;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1charph* result_303;
struct list_item$1charph* it_304;
void* __right_value295 = (void*)0;
struct list$1charph* __result232__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_303=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        list$1charph_add(result_303,(char*)come_increment_ref_count(string_clone(it_304->item)));
        it_304=it_304->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(result_303,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
struct list_item$1charph* litem_305;
char* __dec_obj80;
void* __right_value293 = (void*)0;
struct list_item$1charph* litem_306;
char* __dec_obj81;
void* __right_value294 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj82;
struct list$1charph* __result231__;
    if(    self->len==0) {
        litem_305=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value292=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj80=litem_305->item;
        litem_305->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value293=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj81=litem_306->item;
        litem_306->item=(char*)come_increment_ref_count(item);
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value294=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj82=litem_307->item;
        litem_307->item=(char*)come_increment_ref_count(item);
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
struct list_item$1CVALUEph* litem_308;
struct CVALUE* __dec_obj93;
void* __right_value307 = (void*)0;
struct list_item$1CVALUEph* litem_309;
struct CVALUE* __dec_obj97;
void* __right_value308 = (void*)0;
struct list_item$1CVALUEph* litem_310;
struct CVALUE* __dec_obj98;
struct list$1CVALUEph* __result234__;
    if(    self->len==0) {
        litem_308=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value306=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj93=litem_308->item;
        litem_308->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1) {
        litem_309=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value307=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj97=litem_309->item;
        litem_309->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value308=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj98=litem_310->item;
        litem_310->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_310;
        self->tail=litem_310;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj94;
struct sType* __dec_obj95;
char* __dec_obj96;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj94=self->c_value;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj95=self->type;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj96=self->c_value_without_right_value_objects;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
struct sFun* __dec_obj99;
struct sFunNode* __result236__;
    ((struct sNodeBase*)(__right_value309=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value309,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj99,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
char* __result237__;
    __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value310=__builtin_string("sFunNode")));
    __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_311;
char* come_fun_name_312;
void* __right_value311 = (void*)0;
char* __dec_obj119;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* result_type_313;
void* __right_value314 = (void*)0;
int block_level_314;
void* __right_value315 = (void*)0;
char* __dec_obj120;
_Bool __result238__;
    come_fun_311=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_312=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj119=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_313=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value314=make_define_var(result_type_313,"__result_obj__",(_Bool)0,info))));
            __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_314=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_314;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value315=xsprintf("come_heap_final();\n"))));
            __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_311;
    __dec_obj120=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_312);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result238__ = (_Bool)1;
    come_fun_name_312 = come_decrement_ref_count2(come_fun_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result238__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj100;
struct sType* __dec_obj101;
struct list$1sTypeph* __dec_obj102;
struct list$1charph* __dec_obj103;
struct list$1charph* __dec_obj104;
struct sType* __dec_obj105;
struct sBlock* __dec_obj106;
struct buffer* __dec_obj109;
struct buffer* __dec_obj110;
struct buffer* __dec_obj111;
struct buffer* __dec_obj112;
char* __dec_obj113;
char* __dec_obj114;
char* __dec_obj115;
char* __dec_obj116;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj100=self->mName;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj101=self->mResultType;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj102=self->mParamTypes;
            come_call_finalizer3(__dec_obj102,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj103=self->mParamNames;
            come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj104=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj105=self->mLambdaType;
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj106=self->mBlock;
            come_call_finalizer3(__dec_obj106,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj109=self->mSource;
            come_call_finalizer3(__dec_obj109,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj110=self->mSourceHead;
            come_call_finalizer3(__dec_obj110,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj111=self->mSourceHead2;
            come_call_finalizer3(__dec_obj111,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj112=self->mSourceDefer;
            come_call_finalizer3(__dec_obj112,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj113=self->mComeHeader;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj114=self->mDeclareSName;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj115=self->mAttribute;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj116=self->mFunAttribute;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj107;
struct sVarTable* __dec_obj108;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj107=self->mNodes;
            come_call_finalizer3(__dec_obj107,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj108=self->mVarTable;
            come_call_finalizer3(__dec_obj108,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct list$1sNodeph* __dec_obj121;
struct sBlock* __result239__;
    __dec_obj121=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj121,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
struct sType* __dec_obj122;
void* __right_value319 = (void*)0;
struct list$1charph* __dec_obj123;
void* __right_value320 = (void*)0;
struct list$1charph* __dec_obj124;
char* __dec_obj125;
struct sType* __dec_obj126;
struct list$1sTypeph* __dec_obj127;
struct list$1charph* __dec_obj128;
struct list$1charph* __dec_obj129;
char* __dec_obj130;
void* __right_value321 = (void*)0;
char* __dec_obj131;
struct sGenericsFun* __result240__;
    __dec_obj122=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj123=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj123,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj124=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj124,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj125=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj126=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj127=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj127,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj128=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj129=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj129,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj130=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj131=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
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
    return __result240__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj132;
struct list$1charph* __dec_obj133;
struct list$1charph* __dec_obj134;
char* __dec_obj135;
struct sType* __dec_obj136;
struct list$1sTypeph* __dec_obj137;
struct list$1charph* __dec_obj138;
struct list$1charph* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj132=self->mImplType;
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj133=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj133,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj134=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj134,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj135=self->mName;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj136=self->mResultType;
            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj137=self->mParamTypes;
            come_call_finalizer3(__dec_obj137,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj138=self->mParamNames;
            come_call_finalizer3(__dec_obj138,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj139=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj139,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj140=self->mBlock;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj141=self->mGenericsSName;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sBlock* result_315;
int sline_top_316;
int block_level_317;
char* p_saved_318;
int sline_saved_319;
char* sname_saved_320;
void* __right_value324 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
struct map$2charphcharph* __dec_obj144;
char* p_323;
int sline_324;
char* sname_325;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* module_name_326;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1charph* params_327;
void* __right_value329 = (void*)0;
char* word_328;
void* __right_value330 = (void*)0;
char* __dec_obj145;
void* __right_value331 = (void*)0;
char* __dec_obj146;
void* __right_value332 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result245__;
void* __right_value333 = (void*)0;
struct sClassModule* module_332;
void* __right_value334 = (void*)0;
void* __right_value340 = (void*)0;
struct map$2charphcharph* __dec_obj152;
int i_336;
struct list$1charph* o2_saved_337;
char* it_340;
void* __right_value341 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
char* __dec_obj153;
void* __right_value350 = (void*)0;
struct sNode* node_387;
void* __right_value351 = (void*)0;
char* __dec_obj154;
_Bool omit_semicolon_391;
void* __right_value355 = (void*)0;
char* __dec_obj158;
char* head_406;
void* __right_value356 = (void*)0;
struct sNode* value_407;
char* tail_408;
void* __right_value357 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* node_410;
void* __right_value360 = (void*)0;
char* __dec_obj160;
struct sNode* node_411;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value365 = (void*)0;
struct sNode* __dec_obj163;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj164;
_Bool omit_semicolon_413;
char* p_414;
char* head_415;
void* __right_value367 = (void*)0;
char* source_416;
void* __right_value368 = (void*)0;
struct sNode* node_417;
struct sBlock* __result283__;
node_411 = (void*)0;
    result_315=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_316=info->sline_top;
    info->sline_top=info->sline;
    block_level_317=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_318=((void*)0);
        sline_saved_319=0;
        sname_saved_320=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_318) {
                if(                *info->p==0) {
                    info->p=p_saved_318;
                    info->sline=sline_saved_319;
                    __dec_obj142=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_320));
                    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_318=((void*)0);
                    sline_saved_319=0;
                    __dec_obj143=sname_saved_320;
                    sname_saved_320=((void*)0);
                    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj144=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj144,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
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
            p_323=info->p;
            sline_324=info->sline;
            sname_325=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_324;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value325=parse_word(info)));
                __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_326=(char*)come_increment_ref_count(parse_word(info));
                params_327=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 215, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_328=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_327,(char*)come_increment_ref_count(word_328));
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
                            word_328 = come_decrement_ref_count2(word_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_328 = come_decrement_ref_count2(word_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_318=info->p;
                sline_saved_319=info->sline;
                __dec_obj145=sname_saved_320;
                sname_saved_320=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj146=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_326));
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value332=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_326)))==((void*)0))),                come_call_finalizer3(__right_value332,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result245__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_326 = come_decrement_ref_count2(module_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_327,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_320 = come_decrement_ref_count2(sname_saved_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_315,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result245__;
                }
                module_332=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value333=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_326))), "05function.c", 262, 0));
                come_call_finalizer3(__right_value333,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_332->mParams)!=list$1charph_length(params_327)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj152=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj152,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_336=0;
                for(                o2_saved_337=(struct list$1charph*)come_increment_ref_count((module_332->mParams)),it_340=list$1charph_begin((o2_saved_337));                !list$1charph_end((o2_saved_337));                it_340=list$1charph_next((o2_saved_337))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_340)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value347=list$1charphp_operator_load_element(params_327,i_336))), "05function.c", 273, 1)))));
                    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_336++;
                }
                come_call_finalizer3(o2_saved_337,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_332->mText;
                info->sline=module_332->mSLine;
                __dec_obj153=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_332->mSName));
                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_326 = come_decrement_ref_count2(module_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_327,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_387=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj154=info->sname;
            info->sname=(char*)come_increment_ref_count(node_387->sname(node_387->_protocol_obj));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_387->sline(node_387->_protocol_obj);
            if(            node_387==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_315->mNodes,(struct sNode*)come_increment_ref_count(node_387));
            parse_sharp_v5(info);
            if(            node_387->terminated(node_387->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_391=(_Bool)1;
            if(            node_387->terminated(node_387->_protocol_obj)) {
                omit_semicolon_391=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_391=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_315->mOmitSemicolon=omit_semicolon_391;
                if(                omit_semicolon_391&&in_function) {
                    list$1sNodeph_delete(result_315->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_323;
                    info->sline=sline_324;
                    __dec_obj158=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_325));
                    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_406=info->p;
                    value_407=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_408=info->p;
                    __dec_obj159=value_407;
                    value_407=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_407),info));
                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_409[tail_408-head_406+1];
                    memset(&buf_409, 0, sizeof(char)                    *(tail_408-head_406+1)                    );
                    memcpy(buf_409,head_406,tail_408-head_406);
                    buf_409[tail_408-head_406]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_410=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_407),(char*)come_increment_ref_count(__builtin_string(buf_409)),info));
                    list$1sNodeph_push_back(result_315->mNodes,(struct sNode*)come_increment_ref_count(node_410));
                    if(value_407) { value_407 = come_decrement_ref_count2(value_407, ((struct sNode*)value_407)->finalize, ((struct sNode*)value_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_410) { node_410 = come_decrement_ref_count2(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_387) { node_387 = come_decrement_ref_count2(node_387, ((struct sNode*)node_387)->finalize, ((struct sNode*)node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_407) { value_407 = come_decrement_ref_count2(value_407, ((struct sNode*)value_407)->finalize, ((struct sNode*)value_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_410) { node_410 = come_decrement_ref_count2(node_410, ((struct sNode*)node_410)->finalize, ((struct sNode*)node_410)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_387) { node_387 = come_decrement_ref_count2(node_387, ((struct sNode*)node_387)->finalize, ((struct sNode*)node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_387) { node_387 = come_decrement_ref_count2(node_387, ((struct sNode*)node_387)->finalize, ((struct sNode*)node_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_318) {
            if(            info->p==0) {
                info->p=p_saved_318;
                info->sline=sline_saved_319;
                __dec_obj160=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_320));
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_318=((void*)0);
                sline_saved_319=0;
            }
        }
        sname_saved_320 = come_decrement_ref_count2(sname_saved_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 373, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value362=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 373, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj163=node_411;
            node_411=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value362,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_315->mNodes,(struct sNode*)come_increment_ref_count(node_411));
        }
        else {
            __dec_obj164=node_411;
            node_411=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_411==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_411->terminated(node_411->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_413=(_Bool)1;
            if(            node_411->terminated(node_411->_protocol_obj)) {
                omit_semicolon_413=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_413=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_315->mOmitSemicolon=omit_semicolon_413;
            list$1sNodeph_push_back(result_315->mNodes,(struct sNode*)come_increment_ref_count(node_411));
        }
        if(node_411) { node_411 = come_decrement_ref_count2(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_414=info->p;
        head_415=info->head;
        source_416=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_416;
        info->head=source_416;
        node_417=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_417==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_315->mNodes,(struct sNode*)come_increment_ref_count(node_417));
        info->p=p_414;
        info->head=head_415;
        source_416 = come_decrement_ref_count2(source_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_317;
    __result283__ = gComeFunResultObject = __result_obj__ = result_315;
    come_call_finalizer3(result_315,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_321;
int i_322;
    for(    i_321=0;    i_321<self->size;    i_321++    ){
        if(        self->item_existance[i_321]) {
            if(            1) {
                self->items[i_321] = come_decrement_ref_count2(self->items[i_321], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_322=0;    i_322<self->size;    i_322++    ){
        if(        self->item_existance[i_322]) {
            if(            1) {
                self->keys[i_322] = come_decrement_ref_count2(self->keys[i_322], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_329;
unsigned int hash_330;
unsigned int it_331;
struct sClassModule* __result241__;
struct sClassModule* __result242__;
struct sClassModule* __result243__;
struct sClassModule* __result244__;
default_value_329 = (void*)0;
    memset(&default_value_329,0,sizeof(struct sClassModule*));
    hash_330=charp_get_hash_key(((char*)key))%self->size;
    it_331=hash_330;
    while((_Bool)1) {
        if(        self->item_existance[it_331]) {
            if(            charp_equals(self->keys[it_331],key)) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_331];
                come_call_finalizer3(default_value_329,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_331++;
            if(            it_331>=self->size) {
                it_331=0;
            }
            else if(            it_331==hash_330) {
                __result242__ = gComeFunResultObject = __result_obj__ = default_value_329;
                come_call_finalizer3(default_value_329,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = default_value_329;
            come_call_finalizer3(default_value_329,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = default_value_329;
    come_call_finalizer3(default_value_329,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj147;
char* __dec_obj148;
struct list$1charph* __dec_obj149;
char* __dec_obj150;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj147=self->mName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj148=self->mText;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj149=self->mParams;
            come_call_finalizer3(__dec_obj149,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj150=self->mSName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
int i_333;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1charp* __dec_obj151;
struct map$2charphcharph* __result247__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2329, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2330, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value337=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2331, "bool"))));
    for(    i_333=0;    i_333<128;    i_333++    ){
        self->item_existance[i_333]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj151=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj151,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result246__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_334;
int i_335;
    for(    i_334=0;    i_334<self->size;    i_334++    ){
        if(        self->item_existance[i_334]) {
            if(            1) {
                self->items[i_334] = come_decrement_ref_count2(self->items[i_334], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_335=0;    i_335<self->size;    i_335++    ){
        if(        self->item_existance[i_335]) {
            if(            1) {
                self->keys[i_335] = come_decrement_ref_count2(self->keys[i_335], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_338;
char* __result248__;
char* __result249__;
char* result_339;
char* __result250__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_338,0,sizeof(char*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_339,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_341;
char* __result251__;
char* __result252__;
char* result_342;
char* __result253__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_342,0,sizeof(char*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_360;
unsigned int it_361;
_Bool same_key_exist_378;
char* it2_381;
struct map$2charphcharph* __result274__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_360=charp_get_hash_key(key)%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            charp_equals(self->keys[it_361],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_361]);
                    self->keys[it_361] = come_decrement_ref_count2(self->keys[it_361], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_361]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_361]);
                    self->keys[it_361]=key;
                }
                if(                1) {
                    self->items[it_361] = come_decrement_ref_count2(self->items[it_361], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_361]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_361]=item;
                }
                break;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_361]=(_Bool)1;
            if(            1) {
                self->keys[it_361]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_361]=key;
            }
            if(            1) {
                self->items[it_361]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_361]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_378=(_Bool)0;
    for(    it2_381=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_381=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_381,key)) {
            same_key_exist_378=(_Bool)1;
        }
    }
    if(    !same_key_exist_378) {
        list$1charp_push_back(self->key_list,key);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_343;
void* __right_value342 = (void*)0;
char** keys_344;
void* __right_value343 = (void*)0;
char** items_345;
void* __right_value344 = (void*)0;
_Bool* item_existance_346;
int len_347;
char* it_350;
char* default_value_353;
void* __right_value345 = (void*)0;
char* it2_354;
unsigned int hash_357;
int n_358;
char* default_value_359;
void* __right_value346 = (void*)0;
default_value_353 = (void*)0;
default_value_359 = (void*)0;
    size_343=self->size*10;
    keys_344=(char**)come_increment_ref_count(((char**)(__right_value342=(char**)come_calloc(1, sizeof(char*)*(1*(size_343)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_345=(char**)come_increment_ref_count(((char**)(__right_value343=(char**)come_calloc(1, sizeof(char*)*(1*(size_343)), "/usr/local/include/comelang.h", 2558, "char*%"))));
    item_existance_346=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value344=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_343)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_347=0;
    for(    it_350=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_350=map$2charphcharph_next(self)    ){
        memset(&default_value_353,0,sizeof(char*));
        it2_354=((char*)(__right_value345=map$2charphcharph_at(self,it_350,default_value_353)));
        __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_357=charp_get_hash_key(it_350)%size_343;
        n_358=hash_357;
        while((_Bool)1) {
            if(            item_existance_346[n_358]) {
                n_358++;
                if(                n_358>=size_343) {
                    n_358=0;
                }
                else if(                n_358==hash_357) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_346[n_358]=(_Bool)1;
                keys_344[n_358]=it_350;
                items_345[n_358]=((char*)(__right_value346=map$2charphcharph_at(self,it_350,default_value_359)));
                __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_347++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_344;
    self->items=items_345;
    self->item_existance=item_existance_346;
    self->size=size_343;
    self->len=len_347;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_348;
char* __result254__;
char* __result255__;
char* result_349;
char* __result256__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_348,0,sizeof(char*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_349,0,sizeof(char*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_351;
char* __result257__;
char* __result258__;
char* result_352;
char* __result259__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_351,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_352,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_355;
unsigned int it_356;
char* __result260__;
char* __result261__;
char* __result262__;
char* __result263__;
    hash_355=charp_get_hash_key(((char*)key))%self->size;
    it_356=hash_355;
    while((_Bool)1) {
        if(        self->item_existance[it_356]) {
            if(            charp_equals(self->keys[it_356],key)) {
                __result260__ = gComeFunResultObject = __result_obj__ = self->items[it_356];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
            it_356++;
            if(            it_356>=self->size) {
                it_356=0;
            }
            else if(            it_356==hash_355) {
                __result261__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result261__;
            }
        }
        else {
            __result262__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result262__;
        }
    }
    __result263__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_362;
struct list_item$1charp* it_363;
struct list$1charp* __result267__;
    it2_362=0;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        if(        charp_equals(it_363->item,item)) {
            list$1charp_delete(self,it2_362,it2_362+1);
            break;
        }
        it2_362++;
        it_363=it_363->next;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_364;
struct list$1charp* __result264__;
struct list_item$1charp* it_367;
int i_368;
struct list_item$1charp* prev_it_369;
struct list_item$1charp* it_370;
int i_371;
struct list_item$1charp* prev_it_372;
struct list_item$1charp* it_373;
struct list_item$1charp* head_prev_it_374;
struct list_item$1charp* tail_it_375;
int i_376;
struct list_item$1charp* prev_it_377;
struct list$1charp* __result266__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_364=tail;
        tail=head;
        head=tmp_364;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result264__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_367=self->head;
        i_368=0;
        while(it_367!=((void*)0)) {
            if(            i_368<tail) {
                prev_it_369=it_367;
                it_367=it_367->next;
                i_368++;
                come_call_finalizer3(prev_it_369,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_368==tail) {
                self->head=it_367;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_367=it_367->next;
                i_368++;
            }
        }
    }
    else if(    tail==self->len) {
        it_370=self->head;
        i_371=0;
        while(it_370!=((void*)0)) {
            if(            i_371==head) {
                self->tail=it_370->prev;
                self->tail->next=((void*)0);
            }
            if(            i_371>=head) {
                prev_it_372=it_370;
                it_370=it_370->next;
                i_371++;
                come_call_finalizer3(prev_it_372,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_370=it_370->next;
                i_371++;
            }
        }
    }
    else {
        it_373=self->head;
        head_prev_it_374=((void*)0);
        tail_it_375=((void*)0);
        i_376=0;
        while(it_373!=((void*)0)) {
            if(            i_376==head) {
                head_prev_it_374=it_373->prev;
            }
            if(            i_376==tail) {
                tail_it_375=it_373;
            }
            if(            i_376>=head&&i_376<tail) {
                prev_it_377=it_373;
                it_373=it_373->next;
                i_376++;
                come_call_finalizer3(prev_it_377,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_373=it_373->next;
                i_376++;
            }
        }
        if(        head_prev_it_374!=((void*)0)) {
            head_prev_it_374->next=tail_it_375;
        }
        if(        tail_it_375!=((void*)0)) {
            tail_it_375->prev=head_prev_it_374;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_365;
struct list_item$1charp* prev_it_366;
struct list$1charp* __result265__;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        prev_it_366=it_365;
        it_365=it_365->next;
        come_call_finalizer3(prev_it_366,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_379;
char* __result268__;
char* __result269__;
char* result_380;
char* __result270__;
result_379 = (void*)0;
result_380 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_379,0,sizeof(char*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_379;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->it=self->head;
    if(    self->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_380,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_380;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_382;
char* __result271__;
char* __result272__;
char* result_383;
char* __result273__;
result_382 = (void*)0;
result_383 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_382,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_382;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_383,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_383;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_384;
int i_385;
char* __result275__;
char* default_value_386;
char* __result276__;
default_value_386 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_384=self->head;
    i_385=0;
    while(it_384!=((void*)0)) {
        if(        position==i_385) {
            __result275__ = gComeFunResultObject = __result_obj__ = it_384->item;
            gComeFunResultObject = (void*)0;
            return __result275__;
        }
        it_384=it_384->next;
        i_385++;
    }
    memset(&default_value_386,0,sizeof(char*));
    __result276__ = gComeFunResultObject = __result_obj__ = default_value_386;
    default_value_386 = come_decrement_ref_count2(default_value_386, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
struct list_item$1sNodeph* litem_388;
struct sNode* __dec_obj155;
void* __right_value353 = (void*)0;
struct list_item$1sNodeph* litem_389;
struct sNode* __dec_obj156;
void* __right_value354 = (void*)0;
struct list_item$1sNodeph* litem_390;
struct sNode* __dec_obj157;
struct list$1sNodeph* __result277__;
    if(    self->len==0) {
        litem_388=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value352=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sNodeph"))));
        litem_388->prev=((void*)0);
        litem_388->next=((void*)0);
        __dec_obj155=litem_388->item;
        litem_388->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_388;
        self->head=litem_388;
    }
    else if(    self->len==1) {
        litem_389=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value353=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sNodeph"))));
        litem_389->prev=self->head;
        litem_389->next=((void*)0);
        __dec_obj156=litem_389->item;
        litem_389->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_389;
        self->head->next=litem_389;
    }
    else {
        litem_390=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value354=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sNodeph"))));
        litem_390->prev=self->tail;
        litem_390->next=((void*)0);
        __dec_obj157=litem_390->item;
        litem_390->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_390;
        self->tail=litem_390;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_392;
struct list$1sNodeph* __result278__;
struct list_item$1sNodeph* it_395;
int i_396;
struct list_item$1sNodeph* prev_it_397;
struct list_item$1sNodeph* it_398;
int i_399;
struct list_item$1sNodeph* prev_it_400;
struct list_item$1sNodeph* it_401;
struct list_item$1sNodeph* head_prev_it_402;
struct list_item$1sNodeph* tail_it_403;
int i_404;
struct list_item$1sNodeph* prev_it_405;
struct list$1sNodeph* __result280__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_392=tail;
        tail=head;
        head=tmp_392;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result278__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_395=self->head;
        i_396=0;
        while(it_395!=((void*)0)) {
            if(            i_396<tail) {
                prev_it_397=it_395;
                it_395=it_395->next;
                i_396++;
                come_call_finalizer3(prev_it_397,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_396==tail) {
                self->head=it_395;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_395=it_395->next;
                i_396++;
            }
        }
    }
    else if(    tail==self->len) {
        it_398=self->head;
        i_399=0;
        while(it_398!=((void*)0)) {
            if(            i_399==head) {
                self->tail=it_398->prev;
                self->tail->next=((void*)0);
            }
            if(            i_399>=head) {
                prev_it_400=it_398;
                it_398=it_398->next;
                i_399++;
                come_call_finalizer3(prev_it_400,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_398=it_398->next;
                i_399++;
            }
        }
    }
    else {
        it_401=self->head;
        head_prev_it_402=((void*)0);
        tail_it_403=((void*)0);
        i_404=0;
        while(it_401!=((void*)0)) {
            if(            i_404==head) {
                head_prev_it_402=it_401->prev;
            }
            if(            i_404==tail) {
                tail_it_403=it_401;
            }
            if(            i_404>=head&&i_404<tail) {
                prev_it_405=it_401;
                it_401=it_401->next;
                i_404++;
                come_call_finalizer3(prev_it_405,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_401=it_401->next;
                i_404++;
            }
        }
        if(        head_prev_it_402!=((void*)0)) {
            head_prev_it_402->next=tail_it_403;
        }
        if(        tail_it_403!=((void*)0)) {
            tail_it_403->prev=head_prev_it_402;
        }
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_393;
struct list_item$1sNodeph* prev_it_394;
struct list$1sNodeph* __result279__;
    it_393=self->head;
    while(it_393!=((void*)0)) {
        prev_it_394=it_393;
        it_393=it_393->next;
        come_call_finalizer3(prev_it_394,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj161;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result281__;
void* __right_value363 = (void*)0;
struct sSemicolonNode* result_412;
void* __right_value364 = (void*)0;
char* __dec_obj162;
struct sSemicolonNode* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_412=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_412->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_412->sname;
        result_412->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_412->sline_real=self->sline_real;
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_412;
    come_call_finalizer3(result_412,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_418;
struct sVarTable* old_table_419;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sVarTable* __dec_obj165;
struct sVarTable* current_loop_vtable_420;
struct list$1sTypeph* param_types__421;
struct list$1charph* param_names__422;
int i_423;
struct list$1charph* o2_saved_424;
char* name_425;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* type_426;
void* __right_value373 = (void*)0;
int block_level_430;
int i_431;
struct list$1sNodeph* o2_saved_432;
struct sNode* node_435;
struct list$1sRightValueObjectph* right_value_objects_438;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj170;
char* __dec_obj171;
char* __dec_obj172;
int stack_num_before_443;
int sline_444;
void* __right_value376 = (void*)0;
char* sname_445;
void* __right_value377 = (void*)0;
char* __dec_obj173;
_Bool Value_446;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value383 = (void*)0;
struct CVALUE* come_value2_448;
void* __right_value384 = (void*)0;
char* __dec_obj177;
void* __right_value385 = (void*)0;
struct CVALUE* come_value2_450;
struct sVar* var__451;
void* __right_value386 = (void*)0;
struct CVALUE* come_value3_452;
void* __right_value387 = (void*)0;
_Bool _if_conditional2;
void* __right_value388 = (void*)0;
struct sType* __dec_obj178;
void* __right_value389 = (void*)0;
char* c_value_473;
void* __right_value390 = (void*)0;
char* __dec_obj179;
void* __right_value391 = (void*)0;
char* __dec_obj180;
void* __right_value392 = (void*)0;
char* __dec_obj181;
_Bool Value_474;
void* __right_value393 = (void*)0;
char* __dec_obj182;
struct list$1sRightValueObjectph* __dec_obj183;
void* __if_result__0_477 = (void*)0;
struct list$1sVarph* o2_saved_478;
struct sVar* it_481;
struct list$1sVarph* __dec_obj189;
memset(&i_423, 0, sizeof(int));
memset(&i_431, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_418=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_419=info->lv_table;
    if(    !no_var_table) {
        __dec_obj165=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "sVarTable")),(_Bool)0,old_table_419));
        come_call_finalizer3(__dec_obj165,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_420=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__421=info->param_types;
    param_names__422=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_424=(param_names),name_425=list$1charph_begin((o2_saved_424));        !list$1charph_end((o2_saved_424));        name_425=list$1charph_next((o2_saved_424))        ){
            type_426=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value371=list$1sTypephp_operator_load_element(param_types,i_423))), "05function.c", 465, 2))));
            come_call_finalizer3(__right_value371,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_426->mFunctionParam=(_Bool)1;
            type_426->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_425,(struct sType*)come_increment_ref_count(sType_clone(type_426)),info);
            i_423++;
            come_call_finalizer3(type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_430=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_432=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_435=list$1sNodeph_begin((o2_saved_432));        !list$1sNodeph_end((o2_saved_432));        node_435=list$1sNodeph_next((o2_saved_432))        ){
            right_value_objects_438=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj170=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj170,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj171=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj172=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_443=list$1CVALUEph_length(info->stack);
            sline_444=info->sline;
            sname_445=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_435->sline(node_435->_protocol_obj);
            __dec_obj173=info->sname;
            info->sname=(char*)come_increment_ref_count(node_435->sname(node_435->_protocol_obj));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_431==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_446=node_compile(node_435,info);
                if(                !Value_446) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_443+1) {
                    come_value_447=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_447->type->mClass->mName,"void")&&come_value_447->type->mPointerNum==0) {
                        come_value2_448=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_447));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_448));
                        __dec_obj177=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_448->c_value));
                        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_450=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_447));
                        var__451=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__451) {
                            come_value3_452=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "CVALUE"));
                            if(                            var__451->mType->mClass=="void"&&var__451->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__451->mType,((struct sType*)(__right_value387=sType_clone(come_value_447->type))),come_value3_452,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value387,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj178=var__451->mType;
                            var__451->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_447->type));
                            come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_447->type->mHeap) {
                                c_value_473=(char*)come_increment_ref_count(increment_ref_count_object(come_value_447->type,come_value_447->c_value,info));
                                __dec_obj179=come_value2_450->c_value;
                                come_value2_450->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__451->mCValueName,c_value_473));
                                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_473 = come_decrement_ref_count2(c_value_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj180=come_value2_450->c_value;
                                come_value2_450->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__451->mCValueName,come_value_447->c_value));
                                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_450));
                        __dec_obj181=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_450->c_value));
                        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_474=node_compile(node_435,info);
                if(                !Value_474) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_444;
            __dec_obj182=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_445));
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_443);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj183=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_438);
            come_call_finalizer3(__dec_obj183,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_431++;
            come_call_finalizer3(right_value_objects_438,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_445 = come_decrement_ref_count2(sname_445, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_432,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_430==0) {
            for(            o2_saved_478=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_481=list$1sVarph_begin((o2_saved_478));            !list$1sVarph_end((o2_saved_478));            it_481=list$1sVarph_next((o2_saved_478))            ){
                free_object(it_481->mType,it_481->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_478,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj189=info->match_it_var;
            __if_result__0_477=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj189,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_477,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_419;
    info->block_level=block_level_430;
    info->param_types=param_types__421;
    info->param_names=param_names__422;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_420;
    info->inhibits_output_code=inhibits_output_code_418;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_427;
int i_428;
struct sType* __result284__;
struct sType* default_value_429;
struct sType* __result285__;
default_value_429 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_427=self->head;
    i_428=0;
    while(it_427!=((void*)0)) {
        if(        position==i_428) {
            __result284__ = gComeFunResultObject = __result_obj__ = it_427->item;
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
        it_427=it_427->next;
        i_428++;
    }
    memset(&default_value_429,0,sizeof(struct sType*));
    __result285__ = gComeFunResultObject = __result_obj__ = default_value_429;
    come_call_finalizer3(default_value_429,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_433;
struct sNode* __result286__;
struct sNode* __result287__;
struct sNode* result_434;
struct sNode* __result288__;
result_433 = (void*)0;
result_434 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_433,0,sizeof(struct sNode*));
        __result286__ = gComeFunResultObject = __result_obj__ = result_433;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    self->it=self->head;
    if(    self->it) {
        __result287__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    memset(&result_434,0,sizeof(struct sNode*));
    __result288__ = gComeFunResultObject = __result_obj__ = result_434;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_436;
struct sNode* __result289__;
struct sNode* __result290__;
struct sNode* result_437;
struct sNode* __result291__;
result_436 = (void*)0;
result_437 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_436,0,sizeof(struct sNode*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_436;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_437,0,sizeof(struct sNode*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_437;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result292__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_439;
struct list_item$1sRightValueObjectph* prev_it_440;
    it_439=self->head;
    while(it_439!=((void*)0)) {
        prev_it_440=it_439;
        it_439=it_439->next;
        come_call_finalizer3(prev_it_440,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj166;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj166=self->item;
            come_call_finalizer3(__dec_obj166,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj167;
char* __dec_obj168;
char* __dec_obj169;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj167=self->mType;
            come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj168=self->mVarName;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj169=self->mFunName;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_441;
struct list_item$1sRightValueObjectph* prev_it_442;
    it_441=self->head;
    while(it_441!=((void*)0)) {
        prev_it_442=it_441;
        it_441=it_441->next;
        come_call_finalizer3(prev_it_442,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result293__;
void* __right_value379 = (void*)0;
struct CVALUE* result_449;
void* __right_value380 = (void*)0;
char* __dec_obj174;
void* __right_value381 = (void*)0;
struct sType* __dec_obj175;
void* __right_value382 = (void*)0;
char* __dec_obj176;
struct CVALUE* __result294__;
    if(    self==(void*)0) {
        __result293__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    result_449=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj174=result_449->c_value;
        result_449->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj175=result_449->type;
        result_449->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_449->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_449->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj176=result_449->c_value_without_right_value_objects;
        result_449->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result294__ = gComeFunResultObject = __result_obj__ = result_449;
    come_call_finalizer3(result_449,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
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
struct list_item$1tuple2$2charphsTypephph* it_453;
struct list_item$1tuple2$2charphsTypephph* it2_454;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_453=left->head;
    it2_454=right->head;
    while(it_453!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_453->item,it2_454->item)) {
            return (_Bool)0;
        }
        it_453=it_453->next;
        it2_454=it2_454->next;
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

static _Bool list$1objectph_equals(struct list$1objectph* left, struct list$1objectph* right){
struct list_item$1objectph* it_455;
struct list_item$1objectph* it2_456;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_455=left->head;
    it2_456=right->head;
    while(it_455!=((void*)0)) {
        if(        !object_equals(it_455->item,it2_456->item)) {
            return (_Bool)0;
        }
        it_455=it_455->next;
        it2_456=it2_456->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_457;
struct list_item$1sNodeph* it2_458;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_457=left->head;
    it2_458=right->head;
    while(it_457!=((void*)0)) {
        if(        !sNode_equals(it_457->item,it2_458->item)) {
            return (_Bool)0;
        }
        it_457=it_457->next;
        it2_458=it2_458->next;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_459;
struct list_item$1sTypeph* it2_460;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_459=left->head;
    it2_460=right->head;
    while(it_459!=((void*)0)) {
        if(        !sType_equals(it_459->item,it2_460->item)) {
            return (_Bool)0;
        }
        it_459=it_459->next;
        it2_460=it2_460->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_461;
struct list_item$1charph* it2_462;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_461=left->head;
    it2_462=right->head;
    while(it_461!=((void*)0)) {
        if(        !charp_equals(it_461->item,it2_462->item)) {
            return (_Bool)0;
        }
        it_461=it_461->next;
        it2_462=it2_462->next;
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
struct list_item$1tuple2$2charphsTypephph* it_463;
struct list_item$1tuple2$2charphsTypephph* it2_464;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_463=left->head;
    it2_464=right->head;
    while(it_463!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_463->item,it2_464->item))) {
            return (_Bool)0;
        }
        it_463=it_463->next;
        it2_464=it2_464->next;
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
    if(    !list$1objectph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !bool_equals(left->mNoRefference,right->mNoRefference)) {
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
    if(    !int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
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
    if(    list$1objectph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    bool_operator_not_equals(left->mNoRefference,right->mNoRefference)) {
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
    if(    int_operator_not_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
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

static _Bool list$1objectph_operator_not_equals(struct list$1objectph* left, struct list$1objectph* right){
    return !list$1objectph_operator_equals(left,right);
}

static _Bool list$1objectph_operator_equals(struct list$1objectph* left, struct list$1objectph* right){
struct list_item$1objectph* it_465;
struct list_item$1objectph* it2_466;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_465=left->head;
    it2_466=right->head;
    while(it_465!=((void*)0)) {
        if(        !(object_operator_equals(it_465->item,it2_466->item))) {
            return (_Bool)0;
        }
        it_465=it_465->next;
        it2_466=it2_466->next;
    }
    return (_Bool)1;
}

static _Bool object_equals(struct object* left, struct object* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool object_operator_equals(struct object* left, struct object* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_467;
struct list_item$1sNodeph* it2_468;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_467=left->head;
    it2_468=right->head;
    while(it_467!=((void*)0)) {
        if(        !(sNode_operator_equals(it_467->item,it2_468->item))) {
            return (_Bool)0;
        }
        it_467=it_467->next;
        it2_468=it2_468->next;
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

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypeph_operator_equals(left,right);
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_469;
struct list_item$1sTypeph* it2_470;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_469=left->head;
    it2_470=right->head;
    while(it_469!=((void*)0)) {
        if(        !(sType_operator_equals(it_469->item,it2_470->item))) {
            return (_Bool)0;
        }
        it_469=it_469->next;
        it2_470=it2_470->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charph_operator_equals(left,right);
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_471;
struct list_item$1charph* it2_472;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_471=left->head;
    it2_472=right->head;
    while(it_471!=((void*)0)) {
        if(        !(string_operator_equals(it_471->item,it2_472->item))) {
            return (_Bool)0;
        }
        it_471=it_471->next;
        it2_472=it2_472->next;
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
struct list_item$1sRightValueObjectph* it_475;
struct list_item$1sRightValueObjectph* prev_it_476;
struct list$1sRightValueObjectph* __result295__;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer3(prev_it_476,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_479;
struct sVar* __result296__;
struct sVar* __result297__;
struct sVar* result_480;
struct sVar* __result298__;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(struct sVar*));
        __result296__ = gComeFunResultObject = __result_obj__ = result_479;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    self->it=self->head;
    if(    self->it) {
        __result297__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    memset(&result_480,0,sizeof(struct sVar*));
    __result298__ = gComeFunResultObject = __result_obj__ = result_480;
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_482;
struct sVar* __result299__;
struct sVar* __result300__;
struct sVar* result_483;
struct sVar* __result301__;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(struct sVar*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_482;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_483,0,sizeof(struct sVar*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_483;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_484;
struct list_item$1sVarph* prev_it_485;
    it_484=self->head;
    while(it_484!=((void*)0)) {
        prev_it_485=it_484;
        it_484=it_484->next;
        come_call_finalizer3(prev_it_485,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj184;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj184=self->item;
            come_call_finalizer3(__dec_obj184,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj185;
char* __dec_obj186;
struct sType* __dec_obj187;
char* __dec_obj188;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj185=self->mName;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj186=self->mCValueName;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj187=self->mType;
            come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj188=self->mFunName;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_486;
struct list_item$1sVarph* prev_it_487;
    it_486=self->head;
    while(it_486!=((void*)0)) {
        prev_it_487=it_486;
        it_486=it_486->next;
        come_call_finalizer3(prev_it_487,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_488;
_Bool dquort_489;
_Bool squort_490;
int sline_491;
int nest_492;
char* tail_493;
void* __right_value394 = (void*)0;
char* buf_494;
void* __right_value395 = (void*)0;
char* __result302__;
    head_488=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_489=(_Bool)0;
        squort_490=(_Bool)0;
        sline_491=0;
        nest_492=0;
        while(1) {
            if(            dquort_489) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_489=!dquort_489;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
            }
            else if(            squort_490) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_490=!squort_490;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_491);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_491=info->sline;
                info->p++;
                squort_490=!squort_490;
            }
            else if(            *info->p==34) {
                sline_491=info->sline;
                info->p++;
                dquort_489=!dquort_489;
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
                nest_492++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_492==0) {
                    break;
                }
                nest_492--;
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
    tail_493=info->p;
    buf_494=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_493-head_488+1)), "05function.c", 757, "char"));
    memcpy(buf_494,head_488,tail_493-head_488);
    buf_494[tail_493-head_488]=0;
    skip_spaces_and_lf(info);
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string(buf_494)));
    buf_494 = come_decrement_ref_count2(buf_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_495;
char* p3_496;
int i_497;
    terminated_495=(_Bool)0;
    p3_496=p;
    for(    i_497=0;    i_497<strlen(p2);    i_497++    ){
        if(        *p3_496==0) {
            terminated_495=(_Bool)1;
            break;
        }
        p3_496++;
    }
    return !terminated_495&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct buffer* asm_fun_name_498;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct buffer* result_499;
char* head_500;
int brace_num_501;
char* tail_502;
char* head_503;
int brace_num_504;
char* tail_505;
char* head_506;
char* tail_507;
char* head_508;
char* tail_509;
int len_510;
_Bool in_dquort_511;
int brace_num_512;
char* head_513;
char* tail_514;
char* head_515;
char* tail_516;
char* head_517;
char* tail_518;
char* head_519;
int nest_520;
char* tail_521;
char* head_522;
int nest_523;
char* tail_524;
char* head_525;
int nest_526;
char* tail_527;
char* head_528;
int nest_529;
char* tail_530;
char* head_531;
int nest_532;
char* tail_533;
char* head_534;
char* tail_535;
char* head_536;
char* tail_537;
char* head_538;
char* tail_539;
char* head_540;
char* tail_541;
char* head_542;
char* tail_543;
char* head_544;
int brace_num_545;
char* tail_546;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2charphcharph* __result304__;
    asm_fun_name_498=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "buffer"))));
    result_499=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 783, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_500=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_501=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_501++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_501--;
                        if(                        brace_num_501==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_502=info->p;
            buffer_append(result_499,head_500,tail_502-head_500);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_503=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_504=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_504++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_504--;
                        if(                        brace_num_504==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_505=info->p;
            buffer_append(result_499,head_503,tail_505-head_503);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_506=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_507=info->p;
            buffer_append(result_499,head_506,tail_507-head_506);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_508=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_509=info->p;
            buffer_append(result_499,head_508,tail_509-head_508);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_510=0;
            if(            *info->p==40) {
                in_dquort_511=(_Bool)0;
                brace_num_512=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_511=!in_dquort_511;
                    }
                    else if(                    in_dquort_511) {
                        buffer_append_char(asm_fun_name_498,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_512++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_512--;
                        if(                        brace_num_512==0) {
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
            head_513=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_514=info->p;
            buffer_append(result_499,head_513,tail_514-head_513);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_515=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_516=info->p;
            buffer_append(result_499,head_515,tail_516-head_515);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_517=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_518=info->p;
            buffer_append(result_499,head_517,tail_518-head_517);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_519=info->p;
            info->p+=strlen("__alloc_size2");
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
            tail_521=info->p;
            buffer_append(result_499,head_519,tail_521-head_519);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_522=info->p;
            info->p+=strlen("__alloc_size");
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
            tail_524=info->p;
            buffer_append(result_499,head_522,tail_524-head_522);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_525=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_526=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_526++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_526--;
                        if(                        nest_526==0) {
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
            tail_527=info->p;
            buffer_append(result_499,head_525,tail_527-head_525);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_528=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_529=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_529++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_529--;
                        if(                        nest_529==0) {
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
            tail_530=info->p;
            buffer_append(result_499,head_528,tail_530-head_528);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_531=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_532=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_532++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_532--;
                        if(                        nest_532==0) {
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
            tail_533=info->p;
            buffer_append(result_499,head_531,tail_533-head_531);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_534=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_535=info->p;
            buffer_append(result_499,head_534,tail_535-head_534);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_536=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_537=info->p;
            buffer_append(result_499,head_536,tail_537-head_536);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_538=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_539=info->p;
            buffer_append(result_499,head_538,tail_539-head_538);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_540=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_541=info->p;
            buffer_append(result_499,head_540,tail_541-head_540);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_542=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_543=info->p;
            buffer_append(result_499,head_542,tail_543-head_542);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_544=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_545=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_545++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_545--;
                        if(                        brace_num_545==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_546=info->p;
            buffer_append(result_499,head_544,tail_546-head_544);
        }
        else {
            break;
        }
    }
    __result304__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value403=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1197, "struct tuple2$2charphcharph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_498)),(char*)come_increment_ref_count(buffer_to_string(result_499)))));
    come_call_finalizer3(asm_fun_name_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_499,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value403,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj190;
char* __dec_obj191;
struct tuple2$2charphcharph* __result303__;
    __dec_obj190=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj191=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj192;
char* __dec_obj193;
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
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct buffer* asm_fun_name_547;
void* __right_value406 = (void*)0;
char* attribute_548;
int nest_549;
int nest_550;
int nest_551;
int nest_552;
int nest_553;
void* __right_value407 = (void*)0;
char* __dec_obj194;
int len_554;
_Bool in_dquort_555;
int brace_num_556;
int brace_num_557;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct tuple2$2charphcharph* __result305__;
    asm_fun_name_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1202, "buffer"))));
    attribute_548=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_549=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549--;
                        if(                        nest_549==0) {
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
                nest_550=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550--;
                        if(                        nest_550==0) {
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
                nest_551=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_551++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_551--;
                        if(                        nest_551==0) {
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
                nest_552=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_552++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_552--;
                        if(                        nest_552==0) {
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
                nest_553=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_553++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_553--;
                        if(                        nest_553==0) {
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
            __dec_obj194=attribute_548;
            attribute_548=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_554=0;
            if(            *info->p==40) {
                in_dquort_555=(_Bool)0;
                brace_num_556=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_555=!in_dquort_555;
                    }
                    else if(                    in_dquort_555) {
                        buffer_append_char(asm_fun_name_547,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_556++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_556--;
                        if(                        brace_num_556==0) {
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
                brace_num_557=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_557++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_557--;
                        if(                        brace_num_557==0) {
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
    __result305__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value410=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1471, "struct tuple2$2charphcharph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_547)),(char*)come_increment_ref_count(attribute_548))));
    come_call_finalizer3(asm_fun_name_547,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_548 = come_decrement_ref_count2(attribute_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value410,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value411 = (void*)0;
char* __dec_obj195;
char* head_558;
int head_sline_559;
void* __right_value412 = (void*)0;
char* buf_560;
void* __right_value413 = (void*)0;
struct sNode* node_561;
_Bool Value_562;
    while(*info->p) {
        __dec_obj195=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(string_clone(info->sname));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_558=info->p;
        head_sline_559=info->sline;
        buf_560=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_560 = come_decrement_ref_count2(buf_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_561=(struct sNode*)come_increment_ref_count(top_level_v99(buf_560,head_558,head_sline_559,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_561!=((void*)0)) {
            Value_562=node_compile(node_561,info);
            if(            !Value_562) {
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
            buf_560 = come_decrement_ref_count2(buf_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_561) { node_561 = come_decrement_ref_count2(node_561, ((struct sNode*)node_561)->finalize, ((struct sNode*)node_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_560 = come_decrement_ref_count2(buf_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_561) { node_561 = come_decrement_ref_count2(node_561, ((struct sNode*)node_561)->finalize, ((struct sNode*)node_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value414 = (void*)0;
char* name_563;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* result_type_564;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* __list_values1___565[5];
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1sTypeph* param_types_570;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __list_values2___571[5];
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* param_names_573;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1charph* param_default_parametors_574;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sFun* main_fun_575;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* name_597;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* result_type_598;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* __list_values3___599[1];
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1sTypeph* param_types_600;
void* __right_value463 = (void*)0;
char* __list_values4___601[1];
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* param_names_602;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1charph* param_default_parametors_603;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sFun* main_fun_604;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* name_605;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* result_type_606;
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
struct sType* __list_values5___607[7];
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct list$1sTypeph* param_types_608;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* __list_values6___609[7];
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1charph* param_names_610;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1charph* param_default_parametors_611;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sFun* main_fun_612;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* name_613;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* result_type_614;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __list_values7___615[5];
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1sTypeph* param_types_616;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __list_values8___617[5];
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1charph* param_names_618;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1charph* param_default_parametors_619;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sFun* main_fun_620;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* name_621;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* result_type_622;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __list_values9___623[1];
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1sTypeph* param_types_624;
void* __right_value550 = (void*)0;
char* __list_values10___625[1];
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1charph* param_names_626;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_default_parametors_627;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sFun* main_fun_628;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* name_629;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* result_type_630;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sType* __list_values11___631[4];
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sTypeph* param_types_632;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* __list_values12___633[4];
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct list$1charph* param_names_634;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct list$1charph* param_default_parametors_635;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sFun* main_fun_636;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
char* name_637;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* result_type_638;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* __list_values13___639[3];
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1sTypeph* param_types_640;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
char* __list_values14___641[3];
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct list$1charph* param_names_642;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1charph* param_default_parametors_643;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sFun* main_fun_644;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* name_645;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* result_type_646;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sType* __list_values15___647[1];
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct list$1sTypeph* param_types_648;
void* __right_value625 = (void*)0;
char* __list_values16___649[1];
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1charph* param_names_650;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1charph* param_default_parametors_651;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sFun* main_fun_652;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
char* name_653;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sType* result_type_654;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sType* __list_values17___655[3];
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1sTypeph* param_types_656;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
char* __list_values18___657[3];
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1charph* param_names_658;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1charph* param_default_parametors_659;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* main_fun_660;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
char* name_661;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* result_type_662;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1sTypeph* param_types_663;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1charph* param_names_664;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1charph* param_default_parametors_665;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sFun* main_fun_666;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
char* name_667;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* result_type_668;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sType* __list_values19___669[4];
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct list$1sTypeph* param_types_670;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* __list_values20___671[4];
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct list$1charph* param_names_672;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct list$1charph* param_default_parametors_673;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sFun* main_fun_674;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
char* name_675;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sType* result_type_676;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct list$1sTypeph* param_types_677;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1charph* param_names_678;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1charph* param_default_parametors_679;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sFun* fun_680;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
char* name_681;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sType* result_type_682;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct list$1sTypeph* param_types_683;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1charph* param_names_684;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct list$1charph* param_default_parametors_685;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sFun* fun_686;
void* __right_value737 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_563=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_564=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1527, "sType")),"void*",(_Bool)0,info));
        param_types_570=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___565[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value418=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___565[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___565[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"char*",(_Bool)0,info)))),
__list_values1___565[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___565[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1528, "struct list$1sTypeph")),5,__list_values1___565)));
        come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_573=(struct list$1charph*)come_increment_ref_count((__list_values2___571[0]=(char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("count")))),
__list_values2___571[1]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("size")))),
__list_values2___571[2]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("sname")))),
__list_values2___571[3]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("sline")))),
__list_values2___571[4]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1529, "struct list$1charph")),5,__list_values2___571)));
        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_574=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1530, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_574,((void*)0));
        list$1charph_push_back(param_default_parametors_574,((void*)0));
        list$1charph_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_575=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1536, "sFun")),(char*)come_increment_ref_count(name_563),(struct sType*)come_increment_ref_count(result_type_564),(struct list$1sTypeph*)come_increment_ref_count(param_types_570),(struct list$1charph*)come_increment_ref_count(param_names_573),(struct list$1charph*)come_increment_ref_count(param_default_parametors_574),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_563)),(struct sFun*)come_increment_ref_count(main_fun_575));
        name_563 = come_decrement_ref_count2(name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_564,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_570,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_573,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_574,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_575,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_597=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1547, "sType")),"void*",(_Bool)0,info));
        param_types_600=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___599[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value460=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1548, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1548, "struct list$1sTypeph")),1,__list_values3___599)));
        come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_602=(struct list$1charph*)come_increment_ref_count((__list_values4___601[0]=(char*)come_increment_ref_count(((char*)(__right_value463=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1549, "struct list$1charph")),1,__list_values4___601)));
        __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_603=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1550, "list$1charph"))));
        main_fun_604=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1551, "sFun")),(char*)come_increment_ref_count(name_597),(struct sType*)come_increment_ref_count(result_type_598),(struct list$1sTypeph*)come_increment_ref_count(param_types_600),(struct list$1charph*)come_increment_ref_count(param_names_602),(struct list$1charph*)come_increment_ref_count(param_default_parametors_603),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_597)),(struct sFun*)come_increment_ref_count(main_fun_604));
        name_597 = come_decrement_ref_count2(name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_602,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_603,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_604,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_605=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1562, "sType")),"void",(_Bool)0,info));
        param_types_608=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___607[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value479=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___607[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___607[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___607[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___607[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
__list_values5___607[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value489=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
__list_values5___607[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value491=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1563, "struct list$1sTypeph")),7,__list_values5___607)));
        come_call_finalizer3(__right_value479,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_610=(struct list$1charph*)come_increment_ref_count((__list_values6___609[0]=(char*)come_increment_ref_count(((char*)(__right_value494=__builtin_string("fun")))),
__list_values6___609[1]=(char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("mem")))),
__list_values6___609[2]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("protocol_fun")))),
__list_values6___609[3]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("protocol_obj")))),
__list_values6___609[4]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("call_finalizer_only")))),
__list_values6___609[5]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("no_decrement")))),
__list_values6___609[6]=(char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1564, "struct list$1charph")),7,__list_values6___609)));
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_611=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1565, "list$1charph"))));
        main_fun_612=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1566, "sFun")),(char*)come_increment_ref_count(name_605),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_610),(struct list$1charph*)come_increment_ref_count(param_default_parametors_611),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_605)),(struct sFun*)come_increment_ref_count(main_fun_612));
        name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_611,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_612,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_613=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_614=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1577, "sType")),"void*",(_Bool)0,info));
        param_types_616=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___615[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value516=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___615[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value518=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___615[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value520=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___615[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value522=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"bool",(_Bool)0,info)))),
__list_values7___615[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value524=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1578, "struct list$1sTypeph")),5,__list_values7___615)));
        come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value518,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_618=(struct list$1charph*)come_increment_ref_count((__list_values8___617[0]=(char*)come_increment_ref_count(((char*)(__right_value527=__builtin_string("mem")))),
__list_values8___617[1]=(char*)come_increment_ref_count(((char*)(__right_value528=__builtin_string("protocol_fun")))),
__list_values8___617[2]=(char*)come_increment_ref_count(((char*)(__right_value529=__builtin_string("protocol_obj")))),
__list_values8___617[3]=(char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("no_decrement")))),
__list_values8___617[4]=(char*)come_increment_ref_count(((char*)(__right_value531=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1579, "struct list$1charph")),5,__list_values8___617)));
        __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_619=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1580, "list$1charph"))));
        main_fun_620=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1581, "sFun")),(char*)come_increment_ref_count(name_613),(struct sType*)come_increment_ref_count(result_type_614),(struct list$1sTypeph*)come_increment_ref_count(param_types_616),(struct list$1charph*)come_increment_ref_count(param_names_618),(struct list$1charph*)come_increment_ref_count(param_default_parametors_619),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_613)),(struct sFun*)come_increment_ref_count(main_fun_620));
        name_613 = come_decrement_ref_count2(name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_616,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_619,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_620,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_621=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_622=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "sType")),"void",(_Bool)0,info));
        param_types_624=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___623[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value547=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1593, "struct list$1sTypeph")),1,__list_values9___623)));
        come_call_finalizer3(__right_value547,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_626=(struct list$1charph*)come_increment_ref_count((__list_values10___625[0]=(char*)come_increment_ref_count(((char*)(__right_value550=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1594, "struct list$1charph")),1,__list_values10___625)));
        __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_627=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1595, "list$1charph"))));
        main_fun_628=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1596, "sFun")),(char*)come_increment_ref_count(name_621),(struct sType*)come_increment_ref_count(result_type_622),(struct list$1sTypeph*)come_increment_ref_count(param_types_624),(struct list$1charph*)come_increment_ref_count(param_names_626),(struct list$1charph*)come_increment_ref_count(param_default_parametors_627),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_621)),(struct sFun*)come_increment_ref_count(main_fun_628));
        name_621 = come_decrement_ref_count2(name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_624,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_626,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_627,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_628,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_629=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_630=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "sType")),"void*",(_Bool)0,info));
        param_types_632=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___631[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value566=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"void*",(_Bool)0,info)))),
__list_values11___631[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value568=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"char*",(_Bool)0,info)))),
__list_values11___631[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"int",(_Bool)0,info)))),
__list_values11___631[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1608, "struct list$1sTypeph")),4,__list_values11___631)));
        come_call_finalizer3(__right_value566,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_634=(struct list$1charph*)come_increment_ref_count((__list_values12___633[0]=(char*)come_increment_ref_count(((char*)(__right_value575=__builtin_string("block")))),
__list_values12___633[1]=(char*)come_increment_ref_count(((char*)(__right_value576=__builtin_string("sname")))),
__list_values12___633[2]=(char*)come_increment_ref_count(((char*)(__right_value577=__builtin_string("sline")))),
__list_values12___633[3]=(char*)come_increment_ref_count(((char*)(__right_value578=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1609, "struct list$1charph")),4,__list_values12___633)));
        __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_635=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1610, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_635,((void*)0));
        list$1charph_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_636=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1615, "sFun")),(char*)come_increment_ref_count(name_629),(struct sType*)come_increment_ref_count(result_type_630),(struct list$1sTypeph*)come_increment_ref_count(param_types_632),(struct list$1charph*)come_increment_ref_count(param_names_634),(struct list$1charph*)come_increment_ref_count(param_default_parametors_635),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_629)),(struct sFun*)come_increment_ref_count(main_fun_636));
        name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_636,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_637=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_638=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1626, "sType")),"void*",(_Bool)0,info));
        param_types_640=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___639[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value597=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"void*",(_Bool)0,info)))),
__list_values13___639[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"int",(_Bool)0,info)))),
__list_values13___639[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value601=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1627, "struct list$1sTypeph")),3,__list_values13___639)));
        come_call_finalizer3(__right_value597,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_642=(struct list$1charph*)come_increment_ref_count((__list_values14___641[0]=(char*)come_increment_ref_count(((char*)(__right_value604=__builtin_string("b")))),
__list_values14___641[1]=(char*)come_increment_ref_count(((char*)(__right_value605=__builtin_string("c")))),
__list_values14___641[2]=(char*)come_increment_ref_count(((char*)(__right_value606=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1628, "struct list$1charph")),3,__list_values14___641)));
        __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_643=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1629, "list$1charph"))));
        main_fun_644=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1630, "sFun")),(char*)come_increment_ref_count(name_637),(struct sType*)come_increment_ref_count(result_type_638),(struct list$1sTypeph*)come_increment_ref_count(param_types_640),(struct list$1charph*)come_increment_ref_count(param_names_642),(struct list$1charph*)come_increment_ref_count(param_default_parametors_643),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_637)),(struct sFun*)come_increment_ref_count(main_fun_644));
        name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_642,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_644,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_645=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1641, "sType")),"char*",(_Bool)0,info));
        param_types_648=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___647[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value622=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1642, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1642, "struct list$1sTypeph")),1,__list_values15___647)));
        come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_650=(struct list$1charph*)come_increment_ref_count((__list_values16___649[0]=(char*)come_increment_ref_count(((char*)(__right_value625=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1643, "struct list$1charph")),1,__list_values16___649)));
        __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_651=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1644, "list$1charph"))));
        main_fun_652=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1645, "sFun")),(char*)come_increment_ref_count(name_645),(struct sType*)come_increment_ref_count(result_type_646),(struct list$1sTypeph*)come_increment_ref_count(param_types_648),(struct list$1charph*)come_increment_ref_count(param_names_650),(struct list$1charph*)come_increment_ref_count(param_default_parametors_651),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_645)),(struct sFun*)come_increment_ref_count(main_fun_652));
        name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_648,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_650,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_652,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_653=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_654=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1703, "sType")),"void",(_Bool)0,info));
        param_types_656=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___655[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value641=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
__list_values17___655[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value643=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
__list_values17___655[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value645=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1704, "struct list$1sTypeph")),3,__list_values17___655)));
        come_call_finalizer3(__right_value641,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value643,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value645,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_658=(struct list$1charph*)come_increment_ref_count((__list_values18___657[0]=(char*)come_increment_ref_count(((char*)(__right_value648=xsprintf("come_malloc")))),
__list_values18___657[1]=(char*)come_increment_ref_count(((char*)(__right_value649=xsprintf("come_debug")))),
__list_values18___657[2]=(char*)come_increment_ref_count(((char*)(__right_value650=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1705, "struct list$1charph")),3,__list_values18___657)));
        __right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_659=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1706, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_659,((void*)0));
        main_fun_660=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1708, "sFun")),(char*)come_increment_ref_count(name_653),(struct sType*)come_increment_ref_count(result_type_654),(struct list$1sTypeph*)come_increment_ref_count(param_types_656),(struct list$1charph*)come_increment_ref_count(param_names_658),(struct list$1charph*)come_increment_ref_count(param_default_parametors_659),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_653)),(struct sFun*)come_increment_ref_count(main_fun_660));
        name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_656,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_658,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_660,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_661=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_662=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1719, "sType")),"void",(_Bool)0,info));
        param_types_663=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1720, "list$1sTypeph"))));
        param_names_664=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1721, "list$1charph"))));
        param_default_parametors_665=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1722, "list$1charph"))));
        main_fun_666=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1723, "sFun")),(char*)come_increment_ref_count(name_661),(struct sType*)come_increment_ref_count(result_type_662),(struct list$1sTypeph*)come_increment_ref_count(param_types_663),(struct list$1charph*)come_increment_ref_count(param_names_664),(struct list$1charph*)come_increment_ref_count(param_default_parametors_665),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_661)),(struct sFun*)come_increment_ref_count(main_fun_666));
        name_661 = come_decrement_ref_count2(name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_663,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_664,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_666,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_667=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_668=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1734, "sType")),"void*",(_Bool)0,info));
        param_types_670=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___669[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value682=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"void*",(_Bool)0,info)))),
__list_values19___669[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value684=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"char*",(_Bool)0,info)))),
__list_values19___669[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value686=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"int",(_Bool)0,info)))),
__list_values19___669[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value688=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1735, "struct list$1sTypeph")),4,__list_values19___669)));
        come_call_finalizer3(__right_value682,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value686,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value688,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_672=(struct list$1charph*)come_increment_ref_count((__list_values20___671[0]=(char*)come_increment_ref_count(((char*)(__right_value691=__builtin_string("mem")))),
__list_values20___671[1]=(char*)come_increment_ref_count(((char*)(__right_value692=__builtin_string("sname")))),
__list_values20___671[2]=(char*)come_increment_ref_count(((char*)(__right_value693=__builtin_string("sline")))),
__list_values20___671[3]=(char*)come_increment_ref_count(((char*)(__right_value694=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1736, "struct list$1charph")),4,__list_values20___671)));
        __right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_673=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1737, "list$1charph"))));
        main_fun_674=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1738, "sFun")),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(result_type_668),(struct list$1sTypeph*)come_increment_ref_count(param_types_670),(struct list$1charph*)come_increment_ref_count(param_names_672),(struct list$1charph*)come_increment_ref_count(param_default_parametors_673),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_667)),(struct sFun*)come_increment_ref_count(main_fun_674));
        name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_670,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_672,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_673,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_674,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_675=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_676=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1749, "sType")),"void",(_Bool)0,info));
        param_types_677=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1750, "list$1sTypeph"))));
        param_names_678=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1751, "list$1charph"))));
        param_default_parametors_679=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1752, "list$1charph"))));
        fun_680=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1753, "sFun")),(char*)come_increment_ref_count(name_675),(struct sType*)come_increment_ref_count(result_type_676),(struct list$1sTypeph*)come_increment_ref_count(param_types_677),(struct list$1charph*)come_increment_ref_count(param_names_678),(struct list$1charph*)come_increment_ref_count(param_default_parametors_679),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_675)),(struct sFun*)come_increment_ref_count(fun_680));
        name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_677,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_678,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_679,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_680,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_681=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_682=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1781, "sType")),"void",(_Bool)0,info));
        param_types_683=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1782, "list$1sTypeph"))));
        param_names_684=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1783, "list$1charph"))));
        param_default_parametors_685=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1784, "list$1charph"))));
        fun_686=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1785, "sFun")),(char*)come_increment_ref_count(name_681),(struct sType*)come_increment_ref_count(result_type_682),(struct list$1sTypeph*)come_increment_ref_count(param_types_683),(struct list$1charph*)come_increment_ref_count(param_names_684),(struct list$1charph*)come_increment_ref_count(param_default_parametors_685),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_681)),(struct sFun*)come_increment_ref_count(fun_686));
        name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_683,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_684,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_685,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_686,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_566;
struct list$1sTypeph* __result307__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_566=0;    i_566<num_value;    i_566++    ){
        list$1sTypeph_push_back(self,values[i_566]);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
struct list_item$1sTypeph* litem_567;
struct sType* __dec_obj196;
void* __right_value428 = (void*)0;
struct list_item$1sTypeph* litem_568;
struct sType* __dec_obj197;
void* __right_value429 = (void*)0;
struct list_item$1sTypeph* litem_569;
struct sType* __dec_obj198;
struct list$1sTypeph* __result306__;
    if(    self->len==0) {
        litem_567=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value427=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_567->prev=((void*)0);
        litem_567->next=((void*)0);
        __dec_obj196=litem_567->item;
        litem_567->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_567;
        self->head=litem_567;
    }
    else if(    self->len==1) {
        litem_568=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value428=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_568->prev=self->head;
        litem_568->next=((void*)0);
        __dec_obj197=litem_568->item;
        litem_568->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_568;
        self->head->next=litem_568;
    }
    else {
        litem_569=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value429=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_569->prev=self->tail;
        litem_569->next=((void*)0);
        __dec_obj198=litem_569->item;
        litem_569->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_569;
        self->tail=litem_569;
    }
    self->len++;
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_572;
struct list$1charph* __result308__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_572=0;    i_572<num_value;    i_572++    ){
        list$1charph_push_back(self,values[i_572]);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_593;
unsigned int it_594;
_Bool same_key_exist_595;
char* it2_596;
struct map$2charphsFunph* __result319__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_593=charp_get_hash_key(key)%self->size;
    it_594=hash_593;
    while((_Bool)1) {
        if(        self->item_existance[it_594]) {
            if(            charp_equals(self->keys[it_594],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_594]);
                    self->keys[it_594] = come_decrement_ref_count2(self->keys[it_594], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_594]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_594]);
                    self->keys[it_594]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_594],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_594]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_594]=item;
                }
                break;
            }
            it_594++;
            if(            it_594>=self->size) {
                it_594=0;
            }
            else if(            it_594==hash_593) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_594]=(_Bool)1;
            if(            1) {
                self->keys[it_594]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_594]=key;
            }
            if(            1) {
                self->items[it_594]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_594]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_595=(_Bool)0;
    for(    it2_596=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_596=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_596,key)) {
            same_key_exist_595=(_Bool)1;
        }
    }
    if(    !same_key_exist_595) {
        list$1charp_push_back(self->key_list,key);
    }
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_576;
void* __right_value450 = (void*)0;
char** keys_577;
void* __right_value451 = (void*)0;
struct sFun** items_578;
void* __right_value452 = (void*)0;
_Bool* item_existance_579;
int len_580;
char* it_583;
struct sFun* default_value_586;
void* __right_value453 = (void*)0;
struct sFun* it2_587;
unsigned int hash_590;
int n_591;
struct sFun* default_value_592;
void* __right_value454 = (void*)0;
default_value_586 = (void*)0;
default_value_592 = (void*)0;
    size_576=self->size*10;
    keys_577=(char**)come_increment_ref_count(((char**)(__right_value450=(char**)come_calloc(1, sizeof(char*)*(1*(size_576)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_578=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value451=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_576)), "/usr/local/include/comelang.h", 2558, "sFun*%"))));
    item_existance_579=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value452=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_576)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_580=0;
    for(    it_583=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_583=map$2charphsFunph_next(self)    ){
        memset(&default_value_586,0,sizeof(struct sFun*));
        it2_587=((struct sFun*)(__right_value453=map$2charphsFunph_at(self,it_583,default_value_586)));
        come_call_finalizer3(__right_value453,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_590=charp_get_hash_key(it_583)%size_576;
        n_591=hash_590;
        while((_Bool)1) {
            if(            item_existance_579[n_591]) {
                n_591++;
                if(                n_591>=size_576) {
                    n_591=0;
                }
                else if(                n_591==hash_590) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_579[n_591]=(_Bool)1;
                keys_577[n_591]=it_583;
                items_578[n_591]=((struct sFun*)(__right_value454=map$2charphsFunph_at(self,it_583,default_value_592)));
                come_call_finalizer3(__right_value454,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_580++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_577;
    self->items=items_578;
    self->item_existance=item_existance_579;
    self->size=size_576;
    self->len=len_580;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_581;
char* __result309__;
char* __result310__;
char* result_582;
char* __result311__;
result_581 = (void*)0;
result_582 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_581,0,sizeof(char*));
        __result309__ = gComeFunResultObject = __result_obj__ = result_581;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result310__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    memset(&result_582,0,sizeof(char*));
    __result311__ = gComeFunResultObject = __result_obj__ = result_582;
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_584;
char* __result312__;
char* __result313__;
char* result_585;
char* __result314__;
result_584 = (void*)0;
result_585 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_584,0,sizeof(char*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_584;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_585,0,sizeof(char*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_585;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_588;
unsigned int it_589;
struct sFun* __result315__;
struct sFun* __result316__;
struct sFun* __result317__;
struct sFun* __result318__;
    hash_588=charp_get_hash_key(((char*)key))%self->size;
    it_589=hash_588;
    while((_Bool)1) {
        if(        self->item_existance[it_589]) {
            if(            charp_equals(self->keys[it_589],key)) {
                __result315__ = gComeFunResultObject = __result_obj__ = self->items[it_589];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result315__;
            }
            it_589++;
            if(            it_589>=self->size) {
                it_589=0;
            }
            else if(            it_589==hash_588) {
                __result316__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result316__;
            }
        }
        else {
            __result317__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result317__;
        }
    }
    __result318__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_687;
_Bool is_type_name_flag_688;
int sline_689;
_Bool define_struct_nobody_690;
char* p_691;
int sline_692;
void* __right_value738 = (void*)0;
char* word_693;
_Bool define_function_pointer_result_function_694;
_Bool define_variable_between_brace_695;
char* p_696;
void* __right_value739 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_697=0;
char* fun_name_698=0;
_Bool err_699=0;
void* __right_value740 = (void*)0;
char* word_700;
_Bool define_function_flag_701;
char* p_702;
void* __right_value741 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_703=0;
char* fun_name_704=0;
_Bool err_705=0;
char* word_706;
void* __right_value742 = (void*)0;
char* __dec_obj201;
void* __right_value743 = (void*)0;
char* __dec_obj202;
char* __dec_obj203;
void* __right_value744 = (void*)0;
char* __dec_obj204;
_Bool define_variable_707;
char* p_708;
void* __right_value745 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_709=0;
char* fun_name_710=0;
_Bool err_711=0;
void* __right_value746 = (void*)0;
char* word_712;
void* __right_value747 = (void*)0;
char* word_713;
char* p_714;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
char* word_715;
void* __right_value751 = (void*)0;
char* __dec_obj205;
void* __right_value752 = (void*)0;
char* word_716;
void* __right_value753 = (void*)0;
char* word_719;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct sNode* node_720;
struct sNode* __result321__;
void* __right_value756 = (void*)0;
struct sNode* __result322__;
char* header_head_721;
void* __right_value757 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_722=0;
char* fun_name_723=0;
_Bool err_724=0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1sTypeph* param_types_725;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1charph* param_names_726;
void* __right_value762 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_727=0;
char* param_name_728=0;
_Bool err_729=0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1sTypeph* param_types2_731;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct list$1charph* param_names2_732;
void* __right_value769 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_733=0;
char* param_name_734=0;
_Bool err_735=0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
char* header_tail_737;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sType* result_type2_738;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct tuple1$1sTypeph* __dec_obj207;
void* __right_value776 = (void*)0;
struct list$1sTypeph* __dec_obj208;
void* __right_value777 = (void*)0;
struct list$1charph* __dec_obj209;
_Bool var_args_739;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct buffer* header_buf_740;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct list$1charph* param_default_parametors_741;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sFun* fun_742;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sFun* fun2_746;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value839 = (void*)0;
struct sNode* __result352__;
void* __right_value840 = (void*)0;
struct sNode* node_782;
struct sNode* __result353__;
void* __right_value841 = (void*)0;
struct sNode* node_783;
struct sNode* __result354__;
void* __right_value842 = (void*)0;
struct sNode* node_784;
char* source_tail_785;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct buffer* header_786;
struct sNode* __result355__;
void* __right_value845 = (void*)0;
char* buf2_787;
void* __right_value846 = (void*)0;
struct sNode* __result356__;
    info->in_top_level=(_Bool)1;
    source_head_687=info->p;
    is_type_name_flag_688=is_type_name(buf,info);
    sline_689=info->sline;
    define_struct_nobody_690=(_Bool)0;
    {
        p_691=info->p;
        sline_692=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_693=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_690=(_Bool)1;
                }
                word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_692;
    }
    define_function_pointer_result_function_694=(_Bool)0;
    define_variable_between_brace_695=(_Bool)0;
    if(    is_type_name_flag_688) {
        p_696=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value739=backtrace_parse_type((_Bool)0,info)));
            result_type_697=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_698=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_699=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value739,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_694=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_700=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_700,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_695=(_Bool)1;
                            }
                        }
                        word_700 = come_decrement_ref_count2(word_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_697,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_698 = come_decrement_ref_count2(fun_name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_689;
    }
    define_function_flag_701=(_Bool)0;
    if(    is_type_name_flag_688&&!define_function_pointer_result_function_694&&charp_operator_not_equals(buf,"__typeof__")) {
        p_702=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value741=backtrace_parse_type((_Bool)0,info)));
            result_type_703=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_704=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_705=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value741,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_704 = come_decrement_ref_count2(fun_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_706=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj201=word_706;
                word_706=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_706,"extern")) {
                    __dec_obj202=word_706;
                    word_706=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj203=word_706;
                word_706=((void*)0);
                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_706) {
                if(                is_type_name(word_706,info)) {
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
                        __dec_obj204=word_706;
                        word_706=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_706)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_688) {
                        define_function_flag_701=(_Bool)1;
                    }
                }
            }
            word_706 = come_decrement_ref_count2(word_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_702;
        info->sline=sline_689;
    }
    define_variable_707=(_Bool)1;
    if(    is_type_name_flag_688&&!define_function_pointer_result_function_694) {
        p_708=info->p;
        info->p=head;
        if(        !is_type_name_flag_688) {
            define_variable_707=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value745=backtrace_parse_type((_Bool)0,info)));
            result_type_709=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_710=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_711=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value745,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_712=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_707=(_Bool)1;
                            }
                        }
                        word_712 = come_decrement_ref_count2(word_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_713=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_713,info)&&*info->p!=40) {
                            define_variable_707=(_Bool)1;
                        }
                    }
                    word_713 = come_decrement_ref_count2(word_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_710 = come_decrement_ref_count2(fun_name_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_707=(_Bool)0;
        }
        else if(        define_variable_707) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_707=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_707=(_Bool)0;
            }
        }
        info->p=p_708;
        info->sline=sline_689;
    }
    else {
        define_variable_707=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_694) {
        p_714=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value748=parse_struct_attribute(info)));
            __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value749=parse_word(info)));
                __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_715=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj205=word_715;
                        word_715=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_715,"extends")) {
                            define_variable_707=(_Bool)0;
                        }
                    }
                    word_715 = come_decrement_ref_count2(word_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_707=(_Bool)0;
        }
        else if(        define_variable_707) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_707=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_707=(_Bool)0;
            }
        }
        info->p=p_714;
        info->sline=sline_689;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_716=(char*)come_increment_ref_count(parse_word(info));
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
                    word_719=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_719)));
                    word_719 = come_decrement_ref_count2(word_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_720=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result321__ = gComeFunResultObject = __result_obj__ = node_720;
            if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_716 = come_decrement_ref_count2(word_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result321__;
            if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_716 = come_decrement_ref_count2(word_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_690) {
    }
    else if(    define_variable_between_brace_695) {
        info->p=head;
        info->sline=sline_689;
        __result322__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value756=parse_global_variable(info)));
        if(__right_value756) { __right_value756 = come_decrement_ref_count2(__right_value756, ((struct sNode*)__right_value756)->finalize, ((struct sNode*)__right_value756)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    else if(    define_function_pointer_result_function_694) {
        header_head_721=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value757=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_722=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_723=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_724=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value757,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_725=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2111, "list$1sTypeph"))));
            param_names_726=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2112, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value762=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_727=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_728=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_729=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value762,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_729) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_725,(struct sType*)come_increment_ref_count(param_type_727));
                    static int num_function_pointer_result_var_name_a_730=0;
                    list$1charph_push_back(param_names_726,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_730)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value764=parse_word(info)));
                        __right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_728 = come_decrement_ref_count2(param_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_728 = come_decrement_ref_count2(param_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_731=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2158, "list$1sTypeph"))));
                param_names2_732=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2159, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value769=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_733=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_734=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_735=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value769,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_735) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_731,(struct sType*)come_increment_ref_count(param_type_733));
                        static int num_function_pointer_result_var_name_b_736=0;
                        list$1charph_push_back(param_names2_732,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_736)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value771=parse_word(info)));
                            __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_733,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_734 = come_decrement_ref_count2(param_name_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_733,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_734 = come_decrement_ref_count2(param_name_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_737=info->p;
                result_type2_738=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2201, "sType")),"lambda",(_Bool)0,info));
                __dec_obj207=result_type2_738->mResultType;
                result_type2_738->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2203, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_722)));
                come_call_finalizer3(__dec_obj207,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj208=result_type2_738->mParamTypes;
                result_type2_738->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_731));
                come_call_finalizer3(__dec_obj208,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj209=result_type2_738->mParamNames;
                result_type2_738->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_732));
                come_call_finalizer3(__dec_obj209,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_738->mVarArgs=(_Bool)0;
                result_type2_738->mStatic=(_Bool)0;
                var_args_739=(_Bool)0;
                header_buf_740=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2211, "buffer"))));
                buffer_append(header_buf_740,header_head_721,header_tail_737-header_head_721);
                buffer_append_char(header_buf_740,0);
                param_default_parametors_741=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2215, "list$1charph"))));
                fun_742=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2217, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_723)),(struct sType*)come_increment_ref_count(result_type2_738),(struct list$1sTypeph*)come_increment_ref_count(param_types_725),(struct list$1charph*)come_increment_ref_count(param_names_726),(struct list$1charph*)come_increment_ref_count(param_default_parametors_741),(_Bool)1,var_args_739,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_740)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_746=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value789=__builtin_string(fun_name_723)))));
                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_746==((void*)0)||fun2_746->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_723)),(struct sFun*)come_increment_ref_count(fun_742));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2230, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value793=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2230, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_742),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result352__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value2));
                come_call_finalizer3(param_types2_731,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_732,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_738,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_741,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_742,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_746,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_725,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_723 = come_decrement_ref_count2(fun_name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value793,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result352__;
                come_call_finalizer3(param_types2_731,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_732,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_738,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_740,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_741,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_742,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_746,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_725,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_723 = come_decrement_ref_count2(fun_name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_689;
        node_782=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result353__ = gComeFunResultObject = __result_obj__ = node_782;
        if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result353__;
        if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_701) {
        info->p=head;
        info->sline=sline_689;
        node_783=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result354__ = gComeFunResultObject = __result_obj__ = node_783;
        if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result354__;
        if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_707) {
        info->p=head;
        info->sline=sline_689;
        node_784=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_785=info->p;
        header_786=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2262, "buffer"))));
        buffer_append(header_786,source_head_687,source_tail_785-source_head_687);
        __result355__ = gComeFunResultObject = __result_obj__ = node_784;
        if(node_784) { node_784 = come_decrement_ref_count2(node_784, ((struct sNode*)node_784)->finalize, ((struct sNode*)node_784)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result355__;
        if(node_784) { node_784 = come_decrement_ref_count2(node_784, ((struct sNode*)node_784)->finalize, ((struct sNode*)node_784)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_689;
    buf2_787=(char*)come_increment_ref_count(parse_word(info));
    __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value846=top_level_v98(buf2_787,head,head_sline,info)));
    buf2_787 = come_decrement_ref_count2(buf2_787, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value846) { __right_value846 = come_decrement_ref_count2(__right_value846, ((struct sNode*)__right_value846)->finalize, ((struct sNode*)__right_value846)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj199;
char* __dec_obj200;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj199=self->v1;
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj200=self->v2;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_717;
struct list_item$1charph* prev_it_718;
struct list$1charph* __result320__;
    it_717=self->head;
    while(it_717!=((void*)0)) {
        prev_it_718=it_717;
        it_717=it_717->next;
        come_call_finalizer3(prev_it_718,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj206;
struct tuple1$1sTypeph* __result323__;
    __dec_obj206=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_743;
unsigned int hash_744;
unsigned int it_745;
struct sFun* __result324__;
struct sFun* __result325__;
struct sFun* __result326__;
struct sFun* __result327__;
default_value_743 = (void*)0;
    memset(&default_value_743,0,sizeof(struct sFun*));
    hash_744=charp_get_hash_key(((char*)key))%self->size;
    it_745=hash_744;
    while((_Bool)1) {
        if(        self->item_existance[it_745]) {
            if(            charp_equals(self->keys[it_745],key)) {
                __result324__ = gComeFunResultObject = __result_obj__ = self->items[it_745];
                come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result324__;
            }
            it_745++;
            if(            it_745>=self->size) {
                it_745=0;
            }
            else if(            it_745==hash_744) {
                __result325__ = gComeFunResultObject = __result_obj__ = default_value_743;
                come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
        }
        else {
            __result326__ = gComeFunResultObject = __result_obj__ = default_value_743;
            come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result326__;
        }
    }
    __result327__ = gComeFunResultObject = __result_obj__ = default_value_743;
    come_call_finalizer3(default_value_743,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result329__;
void* __right_value796 = (void*)0;
struct sFun* result_748;
void* __right_value797 = (void*)0;
char* __dec_obj213;
void* __right_value798 = (void*)0;
struct sType* __dec_obj214;
void* __right_value799 = (void*)0;
struct list$1sTypeph* __dec_obj215;
void* __right_value800 = (void*)0;
struct list$1charph* __dec_obj216;
void* __right_value801 = (void*)0;
struct list$1charph* __dec_obj217;
void* __right_value802 = (void*)0;
struct sType* __dec_obj218;
void* __right_value829 = (void*)0;
struct sBlock* __dec_obj228;
void* __right_value830 = (void*)0;
struct buffer* __dec_obj229;
void* __right_value831 = (void*)0;
struct buffer* __dec_obj230;
void* __right_value832 = (void*)0;
struct buffer* __dec_obj231;
void* __right_value833 = (void*)0;
struct buffer* __dec_obj232;
void* __right_value834 = (void*)0;
char* __dec_obj233;
void* __right_value835 = (void*)0;
char* __dec_obj234;
void* __right_value836 = (void*)0;
char* __dec_obj235;
void* __right_value837 = (void*)0;
char* __dec_obj236;
struct sFun* __result350__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_748=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj213=result_748->mName;
        result_748->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj214=result_748->mResultType;
        result_748->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj215=result_748->mParamTypes;
        result_748->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj215,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj216=result_748->mParamNames;
        result_748->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj216,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj217=result_748->mParamDefaultParametors;
        result_748->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj217,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj218=result_748->mLambdaType;
        result_748->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj228=result_748->mBlock;
        result_748->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj228,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_748->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj229=result_748->mSource;
        result_748->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj229,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj230=result_748->mSourceHead;
        result_748->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj230,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj231=result_748->mSourceHead2;
        result_748->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj231,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj232=result_748->mSourceDefer;
        result_748->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj232,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_748->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_748->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj233=result_748->mComeHeader;
        result_748->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj234=result_748->mDeclareSName;
        result_748->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_748->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_748->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_748->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj235=result_748->mAttribute;
        result_748->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj236=result_748->mFunAttribute;
        result_748->mFunAttribute=(char*)come_increment_ref_count(string_clone(self->mFunAttribute));
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result350__ = gComeFunResultObject = __result_obj__ = result_748;
    come_call_finalizer3(result_748,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result330__;
void* __right_value803 = (void*)0;
struct sBlock* result_749;
void* __right_value804 = (void*)0;
struct list$1sNodeph* __dec_obj219;
void* __right_value828 = (void*)0;
struct sVarTable* __dec_obj227;
struct sBlock* __result349__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_749=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj219=result_749->mNodes;
        result_749->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj219,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj227=result_749->mVarTable;
        result_749->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj227,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_749->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_749;
    come_call_finalizer3(result_749,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result331__;
void* __right_value805 = (void*)0;
struct sVarTable* result_750;
void* __right_value827 = (void*)0;
struct map$2charphsVarph* __dec_obj226;
struct sVarTable* __result348__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_750=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj226=result_750->mVars;
        result_750->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj226,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_750->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_750->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_750->mID=self->mID;
    }
    __result348__ = gComeFunResultObject = __result_obj__ = result_750;
    come_call_finalizer3(result_750,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result332__;
void* __right_value806 = (void*)0;
void* __right_value812 = (void*)0;
struct map$2charphsVarph* result_754;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1charp* __dec_obj221;
char* it_757;
struct sVar* default_value_760;
void* __right_value815 = (void*)0;
struct sVar* it2_763;
void* __right_value826 = (void*)0;
struct map$2charphsVarph* __result347__;
default_value_760 = (void*)0;
    if(    self==((void*)0)) {
        __result332__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_754=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2400, "map$2charphsVarph"))));
    __dec_obj221=result_754->key_list;
    result_754->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2402, "list$1charp"))));
    come_call_finalizer3(__dec_obj221,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_757=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_757=map$2charphsVarph_next(self)    ){
        memset(&default_value_760,0,sizeof(struct sVar*));
        it2_763=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_757,default_value_760));
        map$2charphsVarph_put(result_754,it_757,(struct sVar*)come_increment_ref_count(sVar_clone(it2_763)));
        come_call_finalizer3(it2_763,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result347__ = gComeFunResultObject = __result_obj__ = result_754;
    come_call_finalizer3(result_754,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
int i_751;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1charp* __dec_obj220;
struct map$2charphsVarph* __result333__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value807=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2329, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value808=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2330, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value809=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2331, "bool"))));
    for(    i_751=0;    i_751<128;    i_751++    ){
        self->item_existance[i_751]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj220=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj220,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_752;
int i_753;
    for(    i_752=0;    i_752<self->size;    i_752++    ){
        if(        self->item_existance[i_752]) {
            if(            1) {
                come_call_finalizer3(self->items[i_752],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_753=0;    i_753<self->size;    i_753++    ){
        if(        self->item_existance[i_753]) {
            if(            1) {
                self->keys[i_753] = come_decrement_ref_count2(self->keys[i_753], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_755;
char* __result334__;
char* __result335__;
char* result_756;
char* __result336__;
result_755 = (void*)0;
result_756 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_755,0,sizeof(char*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_755;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_756,0,sizeof(char*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_756;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_758;
char* __result337__;
char* __result338__;
char* result_759;
char* __result339__;
result_758 = (void*)0;
result_759 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_758,0,sizeof(char*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_758;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_759,0,sizeof(char*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_759;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_761;
unsigned int it_762;
struct sVar* __result340__;
struct sVar* __result341__;
struct sVar* __result342__;
struct sVar* __result343__;
    hash_761=charp_get_hash_key(((char*)key))%self->size;
    it_762=hash_761;
    while((_Bool)1) {
        if(        self->item_existance[it_762]) {
            if(            charp_equals(self->keys[it_762],key)) {
                __result340__ = gComeFunResultObject = __result_obj__ = self->items[it_762];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result340__;
            }
            it_762++;
            if(            it_762>=self->size) {
                it_762=0;
            }
            else if(            it_762==hash_761) {
                __result341__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result341__;
            }
        }
        else {
            __result342__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result342__;
        }
    }
    __result343__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_775;
int it_776;
_Bool same_key_exist_777;
char* it2_778;
struct map$2charphsVarph* __result344__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_775=charp_get_hash_key(key)%self->size;
    it_776=hash_775;
    while((_Bool)1) {
        if(        self->item_existance[it_776]) {
            if(            charp_equals(self->keys[it_776],key)) {
                if(                1) {
                    self->keys[it_776] = come_decrement_ref_count2(self->keys[it_776], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_776]);
                    self->keys[it_776]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_776]);
                    self->keys[it_776]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_776],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_776]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_776]=item;
                }
                break;
            }
            it_776++;
            if(            it_776>=self->size) {
                it_776=0;
            }
            else if(            it_776==hash_775) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_776]=(_Bool)1;
            if(            1) {
                self->keys[it_776]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_776]=key;
            }
            if(            1) {
                self->items[it_776]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_776]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_777=(_Bool)0;
    for(    it2_778=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_778=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_778,key)) {
            same_key_exist_777=(_Bool)1;
        }
    }
    if(    !same_key_exist_777) {
        list$1charp_push_back(self->key_list,key);
    }
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_764;
void* __right_value816 = (void*)0;
char** keys_765;
void* __right_value817 = (void*)0;
struct sVar** items_766;
void* __right_value818 = (void*)0;
_Bool* item_existance_767;
int len_768;
char* it_769;
struct sVar* default_value_770;
void* __right_value819 = (void*)0;
struct sVar* it2_771;
unsigned int hash_772;
int n_773;
struct sVar* default_value_774;
void* __right_value820 = (void*)0;
default_value_770 = (void*)0;
default_value_774 = (void*)0;
    size_764=self->size*10;
    keys_765=(char**)come_increment_ref_count(((char**)(__right_value816=(char**)come_calloc(1, sizeof(char*)*(1*(size_764)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_766=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value817=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_764)), "/usr/local/include/comelang.h", 2558, "sVar*%"))));
    item_existance_767=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value818=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_764)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_768=0;
    for(    it_769=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_769=map$2charphsVarph_next(self)    ){
        memset(&default_value_770,0,sizeof(struct sVar*));
        it2_771=((struct sVar*)(__right_value819=map$2charphsVarph_at(self,it_769,default_value_770)));
        come_call_finalizer3(__right_value819,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_772=charp_get_hash_key(it_769)%size_764;
        n_773=hash_772;
        while((_Bool)1) {
            if(            item_existance_767[n_773]) {
                n_773++;
                if(                n_773>=size_764) {
                    n_773=0;
                }
                else if(                n_773==hash_772) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_767[n_773]=(_Bool)1;
                keys_765[n_773]=it_769;
                items_766[n_773]=((struct sVar*)(__right_value820=map$2charphsVarph_at(self,it_769,default_value_774)));
                come_call_finalizer3(__right_value820,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_768++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_765;
    self->items=items_766;
    self->item_existance=item_existance_767;
    self->size=size_764;
    self->len=len_768;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result345__;
void* __right_value821 = (void*)0;
struct sVar* result_779;
void* __right_value822 = (void*)0;
char* __dec_obj222;
void* __right_value823 = (void*)0;
char* __dec_obj223;
void* __right_value824 = (void*)0;
struct sType* __dec_obj224;
void* __right_value825 = (void*)0;
char* __dec_obj225;
struct sVar* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_779=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj222=result_779->mName;
        result_779->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj223=result_779->mCValueName;
        result_779->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj224=result_779->mType;
        result_779->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_779->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_779->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_779->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_779->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_779->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj225=result_779->mFunName;
        result_779->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_779;
    come_call_finalizer3(result_779,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_780;
int i_781;
    for(    i_780=0;    i_780<self->size;    i_780++    ){
        if(        self->item_existance[i_780]) {
            if(            1) {
                come_call_finalizer3(self->items[i_780],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_781=0;    i_781<self->size;    i_781++    ){
        if(        self->item_existance[i_781]) {
            if(            1) {
                self->keys[i_781] = come_decrement_ref_count2(self->keys[i_781], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_788;
int caller_line_789;
char* caller_sname_790;
_Bool comma_instead_of_semicolon_791;
char* last_code_792;
char* __dec_obj238;
char* last_code2_793;
char* __dec_obj239;
void* __right_value847 = (void*)0;
char* sname_top_794;
int sline_top_795;
void* __right_value848 = (void*)0;
struct sFun* funX_796;
_Bool __result357__;
void* __right_value849 = (void*)0;
struct sType* result_type_797;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct list$1sTypeph* param_types_798;
struct list$1sTypeph* o2_saved_799;
struct sType* it_802;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sType* param_type_805;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1charph* param_names_806;
void* __right_value856 = (void*)0;
struct list$1charph* param_default_parametors_807;
char* p_808;
int sline_809;
char* sname_810;
char* head_811;
struct buffer* source_812;
void* __right_value857 = (void*)0;
struct buffer* __dec_obj240;
struct sType* generics_type_saved_813;
void* __right_value858 = (void*)0;
struct sType* __dec_obj241;
struct list$1charph* method_generics_type_names_814;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct list$1charph* __dec_obj242;
struct list$1charph* o2_saved_815;
char* it_816;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1charph* __dec_obj243;
char* __dec_obj244;
void* __right_value863 = (void*)0;
struct sBlock* block_817;
struct buffer* __dec_obj245;
char* __dec_obj246;
_Bool var_args_818;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sFun* fun_819;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value877 = (void*)0;
struct sNode* node_820;
_Bool in_generics_fun_822;
_Bool Value_823;
void* __if_result__1_824 = (void*)0;
_Bool __result366__;
struct sType* __dec_obj251;
struct list$1charph* __dec_obj252;
void* __right_value878 = (void*)0;
char* __dec_obj253;
char* __dec_obj254;
char* __dec_obj255;
_Bool __result367__;
    caller_fun_788=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_789=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_790=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_791=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_792=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj238=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_793=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj239=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_794=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_795=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_796=((struct sFun*)(__right_value848=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value848,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_796) {
        __result357__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_792 = come_decrement_ref_count2(last_code_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_793 = come_decrement_ref_count2(last_code2_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_794 = come_decrement_ref_count2(sname_top_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result357__;
    }
    result_type_797=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_798=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2309, "list$1sTypeph"))));
    for(    o2_saved_799=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_802=list$1sTypeph_begin((o2_saved_799));    !list$1sTypeph_end((o2_saved_799));    it_802=list$1sTypeph_next((o2_saved_799))    ){
        param_type_805=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value852=sType_clone(it_802))),generics_type,info));
        come_call_finalizer3(__right_value852,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_805->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_798,(struct sType*)come_increment_ref_count(sType_clone(param_type_805)));
        come_call_finalizer3(param_type_805,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_799,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_806=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_807=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_808=info->p;
    sline_809=info->sline;
    sname_810=(char*)come_increment_ref_count(info->sname);
    head_811=info->head;
    source_812=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj240=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj240,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_813=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj241=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_814=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj242=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2336, "list$1charph"))));
    come_call_finalizer3(__dec_obj242,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_815=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_816=list$1charph_begin((o2_saved_815));    !list$1charph_end((o2_saved_815));    it_816=list$1charph_next((o2_saved_815))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_816)));
    }
    come_call_finalizer3(o2_saved_815,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj243=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj243,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj244=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_817=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_811;
    __dec_obj245=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_812);
    come_call_finalizer3(__dec_obj245,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_808;
    info->sline=sline_809;
    __dec_obj246=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_810);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_797->mInline=(_Bool)0;
    result_type_797->mStatic=(_Bool)0;
    result_type_797->mUniq=(_Bool)0;
    var_args_818=generics_fun->mVarArgs;
    fun_819=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2360, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_797),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_798)),(struct list$1charph*)come_increment_ref_count(param_names_806),(struct list$1charph*)come_increment_ref_count(param_default_parametors_807),(_Bool)0,var_args_818,(struct sBlock*)come_increment_ref_count(block_817),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_819));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2367, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value873=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2367, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_819),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_820=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value873,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_822=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_823=node_compile(node_820,info);
    if(    !Value_823) {
        __result366__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_792 = come_decrement_ref_count2(last_code_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_793 = come_decrement_ref_count2(last_code2_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_794 = come_decrement_ref_count2(sname_top_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_798,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_807,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_810 = come_decrement_ref_count2(sname_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_812,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_813,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_814,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_817,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_819,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result366__;
    }
    else {
        __if_result__1_824=(void*)(Value_823);
;
    }
    info->in_generics_fun=in_generics_fun_822;
    __dec_obj251=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_813);
    come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj252=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_814);
    come_call_finalizer3(__dec_obj252,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj253=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_794));
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_795;
    __dec_obj254=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_792);
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj255=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_793);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_788;
    info->caller_line=caller_line_789;
    info->caller_sname=caller_sname_790;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_791;
    __result367__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_792 = come_decrement_ref_count2(last_code_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_793 = come_decrement_ref_count2(last_code2_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_794 = come_decrement_ref_count2(sname_top_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_797,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_798,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_807,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_810 = come_decrement_ref_count2(sname_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_812,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_813,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_814,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_817,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_819,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_820) { node_820 = come_decrement_ref_count2(node_820, ((struct sNode*)node_820)->finalize, ((struct sNode*)node_820)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result367__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_800;
struct sType* __result358__;
struct sType* __result359__;
struct sType* result_801;
struct sType* __result360__;
result_800 = (void*)0;
result_801 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_800,0,sizeof(struct sType*));
        __result358__ = gComeFunResultObject = __result_obj__ = result_800;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    self->it=self->head;
    if(    self->it) {
        __result359__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    memset(&result_801,0,sizeof(struct sType*));
    __result360__ = gComeFunResultObject = __result_obj__ = result_801;
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_803;
struct sType* __result361__;
struct sType* __result362__;
struct sType* result_804;
struct sType* __result363__;
result_803 = (void*)0;
result_804 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_803,0,sizeof(struct sType*));
        __result361__ = gComeFunResultObject = __result_obj__ = result_803;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result362__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    memset(&result_804,0,sizeof(struct sType*));
    __result363__ = gComeFunResultObject = __result_obj__ = result_804;
    gComeFunResultObject = (void*)0;
    return __result363__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_825;
int caller_line_826;
char* caller_sname_827;
_Bool comma_instead_of_semicolon_828;
char* last_code_829;
char* __dec_obj256;
char* last_code2_830;
char* __dec_obj257;
void* __right_value879 = (void*)0;
char* sname_top_831;
int sline_top_832;
void* __right_value880 = (void*)0;
struct sFun* funX_833;
_Bool __result368__;
void* __right_value881 = (void*)0;
struct sType* result_type_834;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct list$1sTypeph* param_types_835;
struct list$1sTypeph* o2_saved_836;
struct sType* it_837;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct sType* param_type_838;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct list$1charph* param_names_839;
void* __right_value888 = (void*)0;
struct list$1charph* param_default_parametors_840;
char* p_841;
int sline_842;
char* sname_843;
char* head_844;
struct buffer* source_845;
void* __right_value889 = (void*)0;
struct buffer* __dec_obj258;
struct list$1charph* method_generics_type_names_846;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct list$1charph* __dec_obj259;
struct list$1charph* o2_saved_847;
char* it_848;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct list$1charph* __dec_obj260;
char* __dec_obj261;
void* __right_value894 = (void*)0;
struct sBlock* block_849;
struct buffer* __dec_obj262;
char* __dec_obj263;
_Bool var_args_850;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct sFun* fun_851;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value908 = (void*)0;
struct sNode* node_852;
_Bool Value_854;
void* __if_result__2_855 = (void*)0;
_Bool __result371__;
struct list$1charph* __dec_obj268;
void* __right_value909 = (void*)0;
char* __dec_obj269;
char* __dec_obj270;
char* __dec_obj271;
_Bool __result372__;
    caller_fun_825=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_826=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_827=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_828=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_829=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj256=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_830=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj257=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_831=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_832=info->sline;
    funX_833=((struct sFun*)(__right_value880=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value880,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_833) {
        __result368__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_829 = come_decrement_ref_count2(last_code_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_830 = come_decrement_ref_count2(last_code2_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_831 = come_decrement_ref_count2(sname_top_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result368__;
    }
    result_type_834=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_835=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2421, "list$1sTypeph"))));
    for(    o2_saved_836=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_837=list$1sTypeph_begin((o2_saved_836));    !list$1sTypeph_end((o2_saved_836));    it_837=list$1sTypeph_next((o2_saved_836))    ){
        param_type_838=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value884=sType_clone(it_837))),info));
        come_call_finalizer3(__right_value884,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_838->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_835,(struct sType*)come_increment_ref_count(sType_clone(param_type_838)));
        come_call_finalizer3(param_type_838,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_836,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_839=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_840=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_841=info->p;
    sline_842=info->sline;
    sname_843=(char*)come_increment_ref_count(info->sname);
    head_844=info->head;
    source_845=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj258=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj258,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_846=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj259=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2445, "list$1charph"))));
    come_call_finalizer3(__dec_obj259,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_847=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_848=list$1charph_begin((o2_saved_847));    !list$1charph_end((o2_saved_847));    it_848=list$1charph_next((o2_saved_847))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_848)));
    }
    come_call_finalizer3(o2_saved_847,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj260=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj260,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj261=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_849=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_844;
    __dec_obj262=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_845);
    come_call_finalizer3(__dec_obj262,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_841;
    info->sline=sline_842;
    __dec_obj263=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_843);
    __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_834->mInline=(_Bool)0;
    result_type_834->mStatic=(_Bool)0;
    result_type_834->mUniq=(_Bool)0;
    var_args_850=generics_fun->mVarArgs;
    fun_851=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2469, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_834),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_835)),(struct list$1charph*)come_increment_ref_count(param_names_839),(struct list$1charph*)come_increment_ref_count(param_default_parametors_840),(_Bool)0,var_args_850,(struct sBlock*)come_increment_ref_count(block_849),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_851));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2476, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value904=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2476, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_851),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_852=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value904,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_854=node_compile(node_852,info);
    if(    !Value_854) {
        __result371__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_829 = come_decrement_ref_count2(last_code_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_830 = come_decrement_ref_count2(last_code2_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_831 = come_decrement_ref_count2(sname_top_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_834,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_835,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_839,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_840,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_843 = come_decrement_ref_count2(sname_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_845,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_849,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_851,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result371__;
    }
    else {
        __if_result__2_855=(void*)(Value_854);
;
    }
    __dec_obj268=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_846);
    come_call_finalizer3(__dec_obj268,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj269=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_831));
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_832;
    __dec_obj270=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_829);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj271=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_830);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_825;
    info->caller_line=caller_line_826;
    info->caller_sname=caller_sname_827;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_828;
    __result372__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_829 = come_decrement_ref_count2(last_code_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_830 = come_decrement_ref_count2(last_code2_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_831 = come_decrement_ref_count2(sname_top_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_834,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_835,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_839,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_840,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_843 = come_decrement_ref_count2(sname_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_845,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_846,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_849,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_851,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result372__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_856;
char* source_head_857;
void* __right_value910 = (void*)0;
char* attribute_858;
struct sType* result_type_859;
char* var_name_860;
_Bool constructor__861;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct sType* __dec_obj272;
void* __right_value913 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_862=0;
char* var_name2_863=0;
_Bool err_864=0;
struct sType* __dec_obj273;
char* __dec_obj274;
_Bool method_definition_865;
char* p_866;
int sline_867;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct buffer* buf2_868;
char* fun_name_869;
char* base_fun_name_870;
void* __right_value916 = (void*)0;
char* __dec_obj275;
void* __right_value917 = (void*)0;
char* __dec_obj276;
void* __right_value918 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_871=0;
char* name_872=0;
_Bool err_873=0;
void* __right_value919 = (void*)0;
char* __dec_obj277;
void* __right_value920 = (void*)0;
char* __dec_obj278;
void* __right_value921 = (void*)0;
char* __dec_obj279;
void* __right_value922 = (void*)0;
char* __dec_obj280;
void* __right_value923 = (void*)0;
char* __dec_obj281;
void* __right_value924 = (void*)0;
char* __dec_obj282;
void* __right_value925 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_874=0;
struct list$1charph* param_names_875=0;
struct list$1charph* param_default_parametors_876=0;
_Bool var_args_877=0;
char* header_tail_878;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct buffer* header_buf_879;
int version_880;
int n_881;
_Bool in_top_level_882;
void* __right_value928 = (void*)0;
struct sBlock* block_883;
void* __right_value929 = (void*)0;
char* fun_name_885;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sFun* fun_886;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct sFun* fun2_887;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value944 = (void*)0;
struct sNode* __result375__;
void* __right_value945 = (void*)0;
char* none_generics_name_889;
void* __right_value946 = (void*)0;
char* generics_sname_890;
int generics_sline_891;
void* __right_value947 = (void*)0;
char* block_892;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct sGenericsFun* fun_893;
void* __right_value954 = (void*)0;
char* fun_name3_894;
void* __right_value960 = (void*)0;
struct sNode* __result387__;
void* __right_value961 = (void*)0;
char* generics_sname_916;
int generics_sline_917;
void* __right_value962 = (void*)0;
char* block_918;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct sGenericsFun* fun_919;
void* __right_value969 = (void*)0;
char* fun_name3_920;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct sNode* __result388__;
char* source_tail_921;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct buffer* header_922;
void* __right_value974 = (void*)0;
char* name_923;
void* __right_value975 = (void*)0;
char* name_924;
int i_925;
void* __right_value976 = (void*)0;
struct sType* param_type_926;
void* __right_value977 = (void*)0;
char* param_name_927;
void* __right_value978 = (void*)0;
char* default_parametor_928;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
char* impl_name_929;
void* __right_value982 = (void*)0;
char* result_type_name_930;
void* __right_value983 = (void*)0;
char* impl_name_931;
void* __right_value984 = (void*)0;
char* result_type_name_932;
int i_933;
void* __right_value985 = (void*)0;
struct sType* param_type_934;
void* __right_value986 = (void*)0;
char* param_name_935;
void* __right_value987 = (void*)0;
char* default_parametor_936;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sBlock* block_937;
_Bool static_fun_938;
_Bool inline_fun_939;
_Bool uniq_fun_940;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
char* new_fun_name_941;
void* __right_value994 = (void*)0;
char* __dec_obj288;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct sFun* fun_942;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct sFun* fun2_943;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1011 = (void*)0;
struct sNode* __result391__;
void* __right_value1012 = (void*)0;
char* new_fun_name_945;
void* __right_value1013 = (void*)0;
char* __dec_obj293;
char* source_tail_946;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct buffer* header_947;
_Bool result_type_static_948;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sFun* fun_949;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct sFun* fun2_950;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1031 = (void*)0;
struct sNode* __result394__;
void* __right_value1032 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_952=0;
char* fun_attribute_953=0;
void* __right_value1033 = (void*)0;
char* __dec_obj298;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct buffer* header_954;
char* source_tail_955;
_Bool result_type_static_956;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct sFun* fun_957;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sFun* fun2_958;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1050 = (void*)0;
struct sNode* __result397__;
struct sNode* __result398__;
fun_name_869 = (void*)0;
    header_head_856=info->p;
    source_head_857=info->p;
    attribute_858=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_859=((void*)0);
    var_name_860=((void*)0);
    constructor__861=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value911=parse_word(info)));
        __right_value911 = come_decrement_ref_count2(__right_value911, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj272=result_type_859;
        result_type_859=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_859->mHeap=(_Bool)1;
        constructor__861=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value913=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_862=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_863=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_864=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value913,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj273=result_type_859;
        result_type_859=(struct sType*)come_increment_ref_count(result_type2_862);
        come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj274=var_name_860;
        var_name_860=(char*)come_increment_ref_count(var_name2_863);
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_864) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_862,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_863 = come_decrement_ref_count2(var_name2_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_865=(_Bool)0;
    {
        p_866=info->p;
        sline_867=info->sline;
        buf2_868=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2542, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_868,*info->p);
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
        if(        buffer_length(buf2_868)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_865=(_Bool)1;
        }
        info->p=p_866;
        info->sline=sline_867;
        come_call_finalizer3(buf2_868,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_870=((void*)0);
    if(    constructor__861) {
        __dec_obj275=base_fun_name_870;
        base_fun_name_870=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj276=fun_name_869;
        fun_name_869=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_870,info,(_Bool)1));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_865) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value918=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_871=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_872=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_873=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value918,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_873) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj277=base_fun_name_870;
        base_fun_name_870=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj278=fun_name_869;
        fun_name_869=(char*)come_increment_ref_count(create_method_name(obj_type_871,(_Bool)0,base_fun_name_870,info,(_Bool)1));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_871,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_872 = come_decrement_ref_count2(name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj279=base_fun_name_870;
        base_fun_name_870=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj280=fun_name_869;
        fun_name_869=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_870,info,(_Bool)1));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj281=fun_name_869;
        fun_name_869=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj282=base_fun_name_870;
        base_fun_name_870=(char*)come_increment_ref_count(__builtin_string(fun_name_869));
        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_870,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value925=parse_params(info,constructor__861)));
    param_types_874=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_875=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_876=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_877=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value925,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_878=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_870,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_879=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2609, "buffer"))));
    buffer_append(header_buf_879,header_head_856,header_tail_878-header_head_856);
    buffer_append_char(header_buf_879,0);
    version_880=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_881=0;
        while(xisdigit(*info->p)) {
            n_881=n_881*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_880=n_881;
    }
    in_top_level_882=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_870,"lambda")) {
        block_883=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_884=0;
        lambda_num_884++;
        fun_name_885=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_884));
        result_type_859->mInline=(_Bool)0;
        result_type_859->mStatic=(_Bool)0;
        result_type_859->mUniq=(_Bool)0;
        fun_886=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2644, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_885)),(struct sType*)come_increment_ref_count(result_type_859),(struct list$1sTypeph*)come_increment_ref_count(param_types_874),(struct list$1charph*)come_increment_ref_count(param_names_875),(struct list$1charph*)come_increment_ref_count(param_default_parametors_876),(_Bool)0,var_args_877,(struct sBlock*)come_increment_ref_count(block_883),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_879)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_887=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value937=__builtin_string(fun_name_885)))));
        __right_value937 = come_decrement_ref_count2(__right_value937, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_887==((void*)0)||fun2_887->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_885)),(struct sFun*)come_increment_ref_count(fun_886));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2654, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value941=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2654, "sLambdaNode")),fun_886,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value944=_inf_value5));
        come_call_finalizer3(block_883,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_886,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_887,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_858 = come_decrement_ref_count2(attribute_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_860 = come_decrement_ref_count2(var_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_869 = come_decrement_ref_count2(fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_870 = come_decrement_ref_count2(base_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_874,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_876,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value941,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value944) { __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result375__;
        come_call_finalizer3(block_883,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_885 = come_decrement_ref_count2(fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_886,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_887,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_889=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_890=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_891=info->sline;
        block_892=(char*)come_increment_ref_count(skip_block(info));
        fun_893=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2664, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value949=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value950=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_869)),(struct sType*)come_increment_ref_count(result_type_859),(struct list$1sTypeph*)come_increment_ref_count(param_types_874),(struct list$1charph*)come_increment_ref_count(param_names_875),(struct list$1charph*)come_increment_ref_count(param_default_parametors_876),var_args_877,(char*)come_increment_ref_count(block_892),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_890)),generics_sline_891));
        come_call_finalizer3(__right_value949,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value950,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_894=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_889,base_fun_name_870));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_894)),(struct sGenericsFun*)come_increment_ref_count(fun_893));
        __result387__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_889 = come_decrement_ref_count2(none_generics_name_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_890 = come_decrement_ref_count2(generics_sname_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_892 = come_decrement_ref_count2(block_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_893,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_894 = come_decrement_ref_count2(fun_name3_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_858 = come_decrement_ref_count2(attribute_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_860 = come_decrement_ref_count2(var_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_869 = come_decrement_ref_count2(fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_870 = come_decrement_ref_count2(base_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_874,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_876,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result387__;
        none_generics_name_889 = come_decrement_ref_count2(none_generics_name_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_890 = come_decrement_ref_count2(generics_sname_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_892 = come_decrement_ref_count2(block_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_893,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_894 = come_decrement_ref_count2(fun_name3_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_916=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_917=info->sline;
        block_918=(char*)come_increment_ref_count(skip_block(info));
        fun_919=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2678, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value964=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value965=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_869)),(struct sType*)come_increment_ref_count(result_type_859),(struct list$1sTypeph*)come_increment_ref_count(param_types_874),(struct list$1charph*)come_increment_ref_count(param_names_875),(struct list$1charph*)come_increment_ref_count(param_default_parametors_876),var_args_877,(char*)come_increment_ref_count(block_918),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_916)),generics_sline_917));
        come_call_finalizer3(__right_value964,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value965,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_920=(char*)come_increment_ref_count(charp_clone(base_fun_name_870));
        if(        method_definition_865) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_869)),(struct sGenericsFun*)come_increment_ref_count(fun_919));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_920)),(struct sGenericsFun*)come_increment_ref_count(fun_919));
        }
        __result388__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_916 = come_decrement_ref_count2(generics_sname_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_918 = come_decrement_ref_count2(block_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_919,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_920 = come_decrement_ref_count2(fun_name3_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_858 = come_decrement_ref_count2(attribute_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_860 = come_decrement_ref_count2(var_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_869 = come_decrement_ref_count2(fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_870 = come_decrement_ref_count2(base_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_874,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_876,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result388__;
        generics_sname_916 = come_decrement_ref_count2(generics_sname_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_918 = come_decrement_ref_count2(block_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_919,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_920 = come_decrement_ref_count2(fun_name3_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_921=info->p-1;
        header_922=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2694, "buffer"))));
        if(        constructor__861) {
            if(            list$1sTypeph_length(param_types_874)==1) {
                name_923=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_922,"extern %s*%% %s*::initialize(%s*%% self);\n",name_923,name_923,name_923);
                name_923 = come_decrement_ref_count2(name_923, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_924=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_922,"extern %s*%% %s*::initialize(%s*%% self, ",name_924,name_924,name_924);
                for(                i_925=1;                i_925<list$1sTypeph_length(param_types_874);                i_925++                ){
                    param_type_926=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_874,i_925));
                    param_name_927=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_875,i_925));
                    default_parametor_928=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_876,i_925));
                    if(                    default_parametor_928) {
                        buffer_append_format(header_922,"extern %s %s=%s",((char*)(__right_value979=make_come_type_name_string_no_solved(param_type_926,(_Bool)0,info))),param_name_927,default_parametor_928);
                        __right_value979 = come_decrement_ref_count2(__right_value979, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_922,"extern %s %s",((char*)(__right_value980=make_come_type_name_string_no_solved(param_type_926,(_Bool)0,info))),param_name_927);
                        __right_value980 = come_decrement_ref_count2(__right_value980, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_925!=list$1sTypeph_length(param_types_874)-1) {
                        buffer_append_str(header_922,",");
                    }
                    come_call_finalizer3(param_type_926,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_927 = come_decrement_ref_count2(param_name_927, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_928 = come_decrement_ref_count2(default_parametor_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_922,");\n");
                name_924 = come_decrement_ref_count2(name_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_874)==1) {
                impl_name_929=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_930=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_859,(_Bool)0,info));
                buffer_append_format(header_922,"extern %s %s*::%s(%s* self);\n",result_type_name_930,impl_name_929,base_fun_name_870,impl_name_929);
                impl_name_929 = come_decrement_ref_count2(impl_name_929, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_930 = come_decrement_ref_count2(result_type_name_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_931=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_932=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_859,(_Bool)0,info));
                buffer_append_format(header_922,"extern %s %s*::%s(%s* self, ",result_type_name_932,impl_name_931,base_fun_name_870,impl_name_931);
                for(                i_933=1;                i_933<list$1sTypeph_length(param_types_874);                i_933++                ){
                    param_type_934=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_874,i_933));
                    param_name_935=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_875,i_933));
                    default_parametor_936=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_876,i_933));
                    if(                    default_parametor_936) {
                        buffer_append_format(header_922,"extern %s %s=%s",((char*)(__right_value988=make_come_type_name_string_no_solved(param_type_934,(_Bool)0,info))),param_name_935,default_parametor_936);
                        __right_value988 = come_decrement_ref_count2(__right_value988, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_922,"extern %s %s",((char*)(__right_value989=make_come_type_name_string_no_solved(param_type_934,(_Bool)0,info))),param_name_935);
                        __right_value989 = come_decrement_ref_count2(__right_value989, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_933!=list$1sTypeph_length(param_types_874)-1) {
                        buffer_append_str(header_922,",");
                    }
                    come_call_finalizer3(param_type_934,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_935 = come_decrement_ref_count2(param_name_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_936 = come_decrement_ref_count2(default_parametor_936, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_922,");\n");
                impl_name_931 = come_decrement_ref_count2(impl_name_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_932 = come_decrement_ref_count2(result_type_name_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_922,source_head_857,source_tail_921-source_head_857);
            buffer_append_str(header_922,";\n");
        }
        if(        !result_type_859->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value990=buffer_to_string(header_922))));
                __right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_937=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__861,(_Bool)1));
        static_fun_938=(_Bool)0;
        if(        result_type_859->mStatic) {
            result_type_859->mStatic=(_Bool)0;
            result_type_859->mUniq=(_Bool)0;
            static_fun_938=(_Bool)1;
        }
        inline_fun_939=(_Bool)0;
        if(        result_type_859->mInline) {
            result_type_859->mInline=(_Bool)0;
            result_type_859->mUniq=(_Bool)0;
            inline_fun_939=(_Bool)1;
        }
        uniq_fun_940=(_Bool)0;
        if(        result_type_859->mUniq) {
            result_type_859->mUniq=(_Bool)0;
            result_type_859->mInline=(_Bool)0;
            result_type_859->mStatic=(_Bool)0;
            uniq_fun_940=(_Bool)1;
        }
        if(        version_880>0) {
            new_fun_name_941=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value992=__builtin_string(fun_name_869))),version_880));
            __right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj288=fun_name_869;
            fun_name_869=(char*)come_increment_ref_count(__builtin_string(new_fun_name_941));
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_941 = come_decrement_ref_count2(new_fun_name_941, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_942=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2796, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_869)),(struct sType*)come_increment_ref_count(result_type_859),(struct list$1sTypeph*)come_increment_ref_count(param_types_874),(struct list$1charph*)come_increment_ref_count(param_names_875),(struct list$1charph*)come_increment_ref_count(param_default_parametors_876),(_Bool)0,var_args_877,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_937)),static_fun_938,(char*)come_increment_ref_count(buffer_to_string(header_buf_879)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_939,uniq_fun_940,(char*)come_increment_ref_count(attribute_858),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_869)),(struct sFun*)come_increment_ref_count(fun_942));
        }
        else {
            fun2_943=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1003=__builtin_string(fun_name_869)))));
            __right_value1003 = come_decrement_ref_count2(__right_value1003, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_943==((void*)0)||fun2_943->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_869)),(struct sFun*)come_increment_ref_count(fun_942));
            }
            come_call_finalizer3(fun2_943,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2816, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1007=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2816, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_942),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1011=_inf_value6));
        come_call_finalizer3(header_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_937,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_942,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_858 = come_decrement_ref_count2(attribute_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_860 = come_decrement_ref_count2(var_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_869 = come_decrement_ref_count2(fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_870 = come_decrement_ref_count2(base_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_874,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_876,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1007,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1011) { __right_value1011 = come_decrement_ref_count2(__right_value1011, ((struct sNode*)__right_value1011)->finalize, ((struct sNode*)__right_value1011)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
        come_call_finalizer3(header_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_937,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_942,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_880>0) {
            new_fun_name_945=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_869,version_880));
            __dec_obj293=fun_name_869;
            fun_name_869=(char*)come_increment_ref_count(__builtin_string(new_fun_name_945));
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_945 = come_decrement_ref_count2(new_fun_name_945, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_946=info->p;
            header_947=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2829, "buffer"))));
            buffer_append(header_947,source_head_857,source_tail_946-source_head_857);
            skip_spaces_and_lf(info);
            result_type_static_948=result_type_859->mStatic;
            result_type_859->mStatic=(_Bool)0;
            result_type_859->mUniq=(_Bool)0;
            result_type_859->mInline=(_Bool)0;
            fun_949=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2839, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_869)),(struct sType*)come_increment_ref_count(result_type_859),(struct list$1sTypeph*)come_increment_ref_count(param_types_874),(struct list$1charph*)come_increment_ref_count(param_names_875),(struct list$1charph*)come_increment_ref_count(param_default_parametors_876),(_Bool)1,var_args_877,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_879)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_858),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_950=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1022=__builtin_string(fun_name_869)))));
            __right_value1022 = come_decrement_ref_count2(__right_value1022, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_950==((void*)0)||fun2_950->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_869)),(struct sFun*)come_increment_ref_count(fun_949));
            }
            if(            !result_type_static_948) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1025=buffer_to_string(header_947))));
                    __right_value1025 = come_decrement_ref_count2(__right_value1025, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2858, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1027=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2858, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_949),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1031=_inf_value7));
            come_call_finalizer3(header_947,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_949,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_950,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_858 = come_decrement_ref_count2(attribute_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_860 = come_decrement_ref_count2(var_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_869 = come_decrement_ref_count2(fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_870 = come_decrement_ref_count2(base_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_874,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_876,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1027,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1031) { __right_value1031 = come_decrement_ref_count2(__right_value1031, ((struct sNode*)__right_value1031)->finalize, ((struct sNode*)__right_value1031)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result394__;
            come_call_finalizer3(header_947,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_949,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_950,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1032=parse_function_attribute(info)));
            asm_fun_952=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_953=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1032,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_952,"")) {
                __dec_obj298=fun_name_869;
                fun_name_869=(char*)come_increment_ref_count(__builtin_string(asm_fun_952));
                __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_954=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2867, "buffer"))));
            if(            *info->p==59) {
                info->p++;
                source_tail_955=info->p;
                buffer_append(header_954,source_head_857,source_tail_955-source_head_857);
                skip_spaces_and_lf(info);
            }
            result_type_static_956=result_type_859->mStatic;
            result_type_859->mStatic=(_Bool)0;
            result_type_859->mUniq=(_Bool)0;
            result_type_859->mInline=(_Bool)0;
            fun_957=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2880, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_869)),(struct sType*)come_increment_ref_count(result_type_859),(struct list$1sTypeph*)come_increment_ref_count(param_types_874),(struct list$1charph*)come_increment_ref_count(param_names_875),(struct list$1charph*)come_increment_ref_count(param_default_parametors_876),(_Bool)1,var_args_877,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_879)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_858),(char*)come_increment_ref_count(fun_attribute_953)));
            fun2_958=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1041=__builtin_string(fun_name_869)))));
            __right_value1041 = come_decrement_ref_count2(__right_value1041, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_958==((void*)0)||fun2_958->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_869)),(struct sFun*)come_increment_ref_count(fun_957));
            }
            if(            !result_type_static_956) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1044=buffer_to_string(header_954))));
                    __right_value1044 = come_decrement_ref_count2(__right_value1044, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2899, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1046=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2899, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_957),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result397__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1050=_inf_value8));
            asm_fun_952 = come_decrement_ref_count2(asm_fun_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_953 = come_decrement_ref_count2(fun_attribute_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_954,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_957,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_858 = come_decrement_ref_count2(attribute_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_860 = come_decrement_ref_count2(var_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_869 = come_decrement_ref_count2(fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_870 = come_decrement_ref_count2(base_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_874,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_876,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1046,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1050) { __right_value1050 = come_decrement_ref_count2(__right_value1050, ((struct sNode*)__right_value1050)->finalize, ((struct sNode*)__right_value1050)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result397__;
            asm_fun_952 = come_decrement_ref_count2(asm_fun_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_953 = come_decrement_ref_count2(fun_attribute_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_954,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_957,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_882;
    __result398__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_858 = come_decrement_ref_count2(attribute_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_860 = come_decrement_ref_count2(var_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_869 = come_decrement_ref_count2(fun_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_870 = come_decrement_ref_count2(base_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_874,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_875,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_876,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_879,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj283;
struct list$1charph* __dec_obj284;
struct list$1charph* __dec_obj285;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj283=self->v1;
            come_call_finalizer3(__dec_obj283,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj284=self->v2;
            come_call_finalizer3(__dec_obj284,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj285=self->v3;
            come_call_finalizer3(__dec_obj285,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj286;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj286=self->sname;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result373__;
void* __right_value942 = (void*)0;
struct sLambdaNode* result_888;
void* __right_value943 = (void*)0;
char* __dec_obj287;
struct sLambdaNode* __result374__;
    if(    self==(void*)0) {
        __result373__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    result_888=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_888->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_888->sname;
        result_888->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_888->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_888->mFun=self->mFun;
    }
    __result374__ = gComeFunResultObject = __result_obj__ = result_888;
    come_call_finalizer3(result_888,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_912;
unsigned int it_913;
_Bool same_key_exist_914;
char* it2_915;
struct map$2charphsGenericsFunph* __result386__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_912=charp_get_hash_key(key)%self->size;
    it_913=hash_912;
    while((_Bool)1) {
        if(        self->item_existance[it_913]) {
            if(            charp_equals(self->keys[it_913],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_913]);
                    self->keys[it_913] = come_decrement_ref_count2(self->keys[it_913], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_913]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_913]);
                    self->keys[it_913]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_913],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_913]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_913]=item;
                }
                break;
            }
            it_913++;
            if(            it_913>=self->size) {
                it_913=0;
            }
            else if(            it_913==hash_912) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_913]=(_Bool)1;
            if(            1) {
                self->keys[it_913]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_913]=key;
            }
            if(            1) {
                self->items[it_913]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_913]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_914=(_Bool)0;
    for(    it2_915=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_915=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_915,key)) {
            same_key_exist_914=(_Bool)1;
        }
    }
    if(    !same_key_exist_914) {
        list$1charp_push_back(self->key_list,key);
    }
    __result386__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_895;
void* __right_value955 = (void*)0;
char** keys_896;
void* __right_value956 = (void*)0;
struct sGenericsFun** items_897;
void* __right_value957 = (void*)0;
_Bool* item_existance_898;
int len_899;
char* it_902;
struct sGenericsFun* default_value_905;
void* __right_value958 = (void*)0;
struct sGenericsFun* it2_906;
unsigned int hash_909;
int n_910;
struct sGenericsFun* default_value_911;
void* __right_value959 = (void*)0;
default_value_905 = (void*)0;
default_value_911 = (void*)0;
    size_895=self->size*10;
    keys_896=(char**)come_increment_ref_count(((char**)(__right_value955=(char**)come_calloc(1, sizeof(char*)*(1*(size_895)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_897=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value956=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_895)), "/usr/local/include/comelang.h", 2558, "sGenericsFun*%"))));
    item_existance_898=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value957=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_895)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_899=0;
    for(    it_902=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_902=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_905,0,sizeof(struct sGenericsFun*));
        it2_906=((struct sGenericsFun*)(__right_value958=map$2charphsGenericsFunph_at(self,it_902,default_value_905)));
        come_call_finalizer3(__right_value958,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_909=charp_get_hash_key(it_902)%size_895;
        n_910=hash_909;
        while((_Bool)1) {
            if(            item_existance_898[n_910]) {
                n_910++;
                if(                n_910>=size_895) {
                    n_910=0;
                }
                else if(                n_910==hash_909) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_898[n_910]=(_Bool)1;
                keys_896[n_910]=it_902;
                items_897[n_910]=((struct sGenericsFun*)(__right_value959=map$2charphsGenericsFunph_at(self,it_902,default_value_911)));
                come_call_finalizer3(__right_value959,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_899++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_896;
    self->items=items_897;
    self->item_existance=item_existance_898;
    self->size=size_895;
    self->len=len_899;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_900;
char* __result376__;
char* __result377__;
char* result_901;
char* __result378__;
result_900 = (void*)0;
result_901 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_900,0,sizeof(char*));
        __result376__ = gComeFunResultObject = __result_obj__ = result_900;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result377__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    memset(&result_901,0,sizeof(char*));
    __result378__ = gComeFunResultObject = __result_obj__ = result_901;
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_903;
char* __result379__;
char* __result380__;
char* result_904;
char* __result381__;
result_903 = (void*)0;
result_904 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_903,0,sizeof(char*));
        __result379__ = gComeFunResultObject = __result_obj__ = result_903;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result380__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    memset(&result_904,0,sizeof(char*));
    __result381__ = gComeFunResultObject = __result_obj__ = result_904;
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_907;
unsigned int it_908;
struct sGenericsFun* __result382__;
struct sGenericsFun* __result383__;
struct sGenericsFun* __result384__;
struct sGenericsFun* __result385__;
    hash_907=charp_get_hash_key(((char*)key))%self->size;
    it_908=hash_907;
    while((_Bool)1) {
        if(        self->item_existance[it_908]) {
            if(            charp_equals(self->keys[it_908],key)) {
                __result382__ = gComeFunResultObject = __result_obj__ = self->items[it_908];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result382__;
            }
            it_908++;
            if(            it_908>=self->size) {
                it_908=0;
            }
            else if(            it_908==hash_907) {
                __result383__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result383__;
            }
        }
        else {
            __result384__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result384__;
        }
    }
    __result385__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_960;
char* __dec_obj303;
char* last_code2_961;
char* __dec_obj304;
_Bool comma_instead_of_semicolon_962;
struct sClass* current_stack_frame_struct_963;
struct sFun* finalizer_964;
void* __right_value1051 = (void*)0;
char* real_fun_name_965;
void* __right_value1052 = (void*)0;
char* user_real_fun_name_966;
void* __right_value1053 = (void*)0;
struct sFun* user_finalizer_967;
void* __right_value1054 = (void*)0;
struct sType* type2_968;
struct sClass* klass_969;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct buffer* source_970;
void* __right_value1057 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_979;
struct tuple2$2charphsTypeph* it_982;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_985=0;
struct sType* field_type_986=0;
char* p_989;
int sline_990;
char* sname_991;
char* head_992;
struct buffer* source3_993;
struct buffer* __dec_obj313;
void* __right_value1058 = (void*)0;
char* __dec_obj314;
void* __right_value1059 = (void*)0;
struct sBlock* block_994;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct sType* result_type_995;
void* __right_value1062 = (void*)0;
char* name_996;
void* __right_value1063 = (void*)0;
struct sType* self_type_997;
struct sType* __list_values21___998[1];
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
struct list$1sTypeph* param_types_999;
void* __right_value1066 = (void*)0;
char* __list_values22___1000[1];
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct list$1charph* param_names_1001;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct list$1charph* param_default_parametors_1002;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct buffer* header_buf_1003;
void* __right_value1073 = (void*)0;
int i_1004;
void* __right_value1074 = (void*)0;
struct sType* param_type_1005;
void* __right_value1075 = (void*)0;
char* param_name_1006;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct sFun* fun2_1007;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
struct sFun* fun_1008;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1091 = (void*)0;
struct sNode* node_1009;
_Bool Value_1011;
struct buffer* __dec_obj319;
char* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
    last_code_960=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_961=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_962=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_963=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_964=((void*)0);
    real_fun_name_965=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_966=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_967=((struct sFun*)(__right_value1053=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_966)));
    come_call_finalizer3(__right_value1053,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_968=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_968;
    klass_969=type->mClass;
    if(    type->mPointerNum>0&&klass_969->mStruct||type->mAllocaValue) {
        source_970=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2940, "buffer"))));
        buffer_append_char(source_970,123);
        if(        user_finalizer_967) {
            char source2_971[1024];
            memset(&source2_971, 0, sizeof(char)            *(1024)            );
            snprintf(source2_971,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_966);
            buffer_append_str(source_970,source2_971);
        }
        klass_969=((struct sClass*)(__right_value1057=map$2charphsClassphp_operator_load_element(info->classes,klass_969->mName)));
        come_call_finalizer3(__right_value1057,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_979=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_969->mFields)),it_982=list$1tuple2$2charphsTypephph_begin((o2_saved_979));        !list$1tuple2$2charphsTypephph_end((o2_saved_979));        it_982=list$1tuple2$2charphsTypephph_next((o2_saved_979))        ){
            multiple_assign_var11=it_982;
            name_985=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_986=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_986->mClass->mName)&&type->mPointerNum==field_type_986->mPointerNum&&field_type_986->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_986->mHeap) {
                char source2_987[1024];
                memset(&source2_987, 0, sizeof(char)                *(1024)                );
                snprintf(source2_987,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_985,name_985,name_985,name_985);
                buffer_append_str(source_970,source2_987);
            }
            else if(            field_type_986->mChannel) {
                char source2_988[1024];
                memset(&source2_988, 0, sizeof(char)                *(1024)                );
                snprintf(source2_988,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_985,name_985);
                buffer_append_str(source_970,source2_988);
                snprintf(source2_988,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_985,name_985);
                buffer_append_str(source_970,source2_988);
            }
            name_985 = come_decrement_ref_count2(name_985, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_986,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_979,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_970,125);
        p_989=info->p;
        sline_990=info->sline;
        sname_991=(char*)come_increment_ref_count(info->sname);
        head_992=info->head;
        source3_993=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj313=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_970);
        come_call_finalizer3(__dec_obj313,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_970->buf;
        info->head=source_970->buf;
        __dec_obj314=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_965));
        __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_994=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_995=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2995, "sType")),"void",(_Bool)0,info));
        name_996=(char*)come_increment_ref_count(string_clone(real_fun_name_965));
        self_type_997=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_997->mHeap=(_Bool)0;
        if(        self_type_997->mPointerNum==0) {
            self_type_997->mPointerNum=1;
        }
        if(        self_type_997->mPointerNum>1) {
            self_type_997->mPointerNum=1;
        }
        param_types_999=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___998[0]=(struct sType*)come_increment_ref_count(self_type_997),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3005, "struct list$1sTypeph")),1,__list_values21___998)));
        param_names_1001=(struct list$1charph*)come_increment_ref_count((__list_values22___1000[0]=(char*)come_increment_ref_count(((char*)(__right_value1066=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3006, "struct list$1charph")),1,__list_values22___1000)));
        __right_value1066 = come_decrement_ref_count2(__right_value1066, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1002=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3007, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1002,((void*)0));
        header_buf_1003=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3010, "buffer"))));
        buffer_append_str(header_buf_1003,((char*)(__right_value1073=make_come_type_name_string(result_type_995,info))));
        __right_value1073 = come_decrement_ref_count2(__right_value1073, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1003," ");
        buffer_append_str(header_buf_1003,real_fun_name_965);
        buffer_append_str(header_buf_1003,"(");
        for(        i_1004=0;        i_1004<list$1sTypeph_length(param_types_999);        i_1004++        ){
            param_type_1005=((struct sType*)come_null_check(((struct sType*)(__right_value1074=list$1sTypephp_operator_load_element(param_types_999,i_1004))), "05function.c", 3018, 7));
            come_call_finalizer3(__right_value1074,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1006=((char*)come_null_check(((char*)(__right_value1075=list$1charphp_operator_load_element(param_names_1001,i_1004))), "05function.c", 3019, 8));
            __right_value1075 = come_decrement_ref_count2(__right_value1075, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1003,((char*)(__right_value1076=make_come_type_name_string(param_type_1005,info))));
            __right_value1076 = come_decrement_ref_count2(__right_value1076, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1003," ");
            buffer_append_str(header_buf_1003,param_name_1006);
            if(            i_1004!=list$1sTypeph_length(param_types_999)-1) {
                buffer_append_str(header_buf_1003,",");
            }
        }
        buffer_append_str(header_buf_1003,")");
        result_type_995->mStatic=(_Bool)0;
        result_type_995->mUniq=(_Bool)0;
        result_type_995->mInline=(_Bool)0;
        fun2_1007=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1077=__builtin_string(fun_name)))));
        __right_value1077 = come_decrement_ref_count2(__right_value1077, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1007==((void*)0)||fun2_1007->mExternal) {
            fun_1008=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3037, "sFun")),(char*)come_increment_ref_count(name_996),(struct sType*)come_increment_ref_count(result_type_995),(struct list$1sTypeph*)come_increment_ref_count(param_types_999),(struct list$1charph*)come_increment_ref_count(param_names_1001),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1002),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_994),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1003)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_996)),(struct sFun*)come_increment_ref_count(fun_1008));
            finalizer_964=fun_1008;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3049, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1087=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3049, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1008),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            node_1009=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value1087,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1011=node_compile(node_1009,info);
            if(            !Value_1011) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1008,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1009) { node_1009 = come_decrement_ref_count2(node_1009, ((struct sNode*)node_1009)->finalize, ((struct sNode*)node_1009)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            finalizer_964=fun2_1007;
        }
        __dec_obj319=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_993);
        come_call_finalizer3(__dec_obj319,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_989;
        info->head=head_992;
        info->sline=sline_990;
        __dec_obj320=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_991);
        __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_970,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_991 = come_decrement_ref_count2(sname_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_993,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_994,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_995,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_996 = come_decrement_ref_count2(name_996, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_997,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_999,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1001,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1002,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1003,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1007,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_963;
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_960);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_961);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_962;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1093=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3073, "struct tuple2$2sFunpcharph")),finalizer_964,(char*)come_increment_ref_count(real_fun_name_965))));
    last_code_960 = come_decrement_ref_count2(last_code_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_961 = come_decrement_ref_count2(last_code2_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_965 = come_decrement_ref_count2(real_fun_name_965, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_966 = come_decrement_ref_count2(user_real_fun_name_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_968,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1093,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_972;
unsigned int hash_973;
unsigned int it_974;
struct sClass* __result399__;
struct sClass* __result400__;
struct sClass* __result401__;
struct sClass* __result402__;
default_value_972 = (void*)0;
    memset(&default_value_972,0,sizeof(struct sClass*));
    hash_973=charp_get_hash_key(((char*)key))%self->size;
    it_974=hash_973;
    while((_Bool)1) {
        if(        self->item_existance[it_974]) {
            if(            charp_equals(self->keys[it_974],key)) {
                __result399__ = gComeFunResultObject = __result_obj__ = self->items[it_974];
                come_call_finalizer3(default_value_972,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result399__;
            }
            it_974++;
            if(            it_974>=self->size) {
                it_974=0;
            }
            else if(            it_974==hash_973) {
                __result400__ = gComeFunResultObject = __result_obj__ = default_value_972;
                come_call_finalizer3(default_value_972,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result400__;
            }
        }
        else {
            __result401__ = gComeFunResultObject = __result_obj__ = default_value_972;
            come_call_finalizer3(default_value_972,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result401__;
        }
    }
    __result402__ = gComeFunResultObject = __result_obj__ = default_value_972;
    come_call_finalizer3(default_value_972,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj305;
struct list$1tuple2$2charphsTypephph* __dec_obj306;
char* __dec_obj310;
char* __dec_obj311;
char* __dec_obj312;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj305=self->mName;
            __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj306=self->mFields;
            come_call_finalizer3(__dec_obj306,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj310=self->mDeclareSName;
            __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj311=self->mParentClassName;
            __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj312=self->mAttribute;
            __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_975;
struct list_item$1tuple2$2charphsTypephph* prev_it_976;
    it_975=self->head;
    while(it_975!=((void*)0)) {
        prev_it_976=it_975;
        it_975=it_975->next;
        come_call_finalizer3(prev_it_976,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj307;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj307=self->item;
            come_call_finalizer3(__dec_obj307,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj308;
struct sType* __dec_obj309;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj308=self->v1;
            __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj309=self->v2;
            come_call_finalizer3(__dec_obj309,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_977;
struct list_item$1tuple2$2charphsTypephph* prev_it_978;
    it_977=self->head;
    while(it_977!=((void*)0)) {
        prev_it_978=it_977;
        it_977=it_977->next;
        come_call_finalizer3(prev_it_978,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_980;
struct tuple2$2charphsTypeph* __result403__;
struct tuple2$2charphsTypeph* __result404__;
struct tuple2$2charphsTypeph* result_981;
struct tuple2$2charphsTypeph* __result405__;
result_980 = (void*)0;
result_981 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_980,0,sizeof(struct tuple2$2charphsTypeph*));
        __result403__ = gComeFunResultObject = __result_obj__ = result_980;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    self->it=self->head;
    if(    self->it) {
        __result404__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result404__;
    }
    memset(&result_981,0,sizeof(struct tuple2$2charphsTypeph*));
    __result405__ = gComeFunResultObject = __result_obj__ = result_981;
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_983;
struct tuple2$2charphsTypeph* __result406__;
struct tuple2$2charphsTypeph* __result407__;
struct tuple2$2charphsTypeph* result_984;
struct tuple2$2charphsTypeph* __result408__;
result_983 = (void*)0;
result_984 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_983,0,sizeof(struct tuple2$2charphsTypeph*));
        __result406__ = gComeFunResultObject = __result_obj__ = result_983;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result407__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result407__;
    }
    memset(&result_984,0,sizeof(struct tuple2$2charphsTypeph*));
    __result408__ = gComeFunResultObject = __result_obj__ = result_984;
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj323;
struct tuple2$2sFunpcharph* __result411__;
    self->v1=v1;
    __dec_obj323=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result411__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj324;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj324=self->v2;
            __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1012;
char* __dec_obj325;
char* last_code2_1013;
char* __dec_obj326;
_Bool comma_instead_of_semicolon_1014;
struct sClass* current_stack_frame_struct_1015;
struct sFun* equaler_1016;
void* __right_value1094 = (void*)0;
char* real_fun_name_1017;
void* __right_value1095 = (void*)0;
struct sType* type2_1018;
struct sClass* klass_1019;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
struct buffer* source_1020;
char* name_1021;
void* __right_value1098 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1023;
struct tuple2$2charphsTypeph* it_1024;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1025=0;
struct sType* field_type_1026=0;
char* p_1028;
int sline_1029;
char* sname_1030;
char* head_1031;
struct buffer* source3_1032;
struct buffer* __dec_obj327;
void* __right_value1099 = (void*)0;
char* __dec_obj328;
void* __right_value1100 = (void*)0;
struct sBlock* block_1033;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
struct sType* result_type_1034;
void* __right_value1103 = (void*)0;
char* name_1035;
void* __right_value1104 = (void*)0;
struct sType* left_type_1036;
void* __right_value1105 = (void*)0;
struct sType* right_type_1037;
struct sType* __list_values23___1038[2];
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
struct list$1sTypeph* param_types_1039;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
char* __list_values24___1040[2];
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
struct list$1charph* param_names_1041;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct list$1charph* param_default_parametors_1042;
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
struct buffer* header_buf_1043;
void* __right_value1116 = (void*)0;
int i_1044;
void* __right_value1117 = (void*)0;
struct sType* param_type_1045;
void* __right_value1118 = (void*)0;
char* param_name_1046;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
struct sFun* fun2_1047;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct sFun* fun_1048;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
void* __right_value1130 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1134 = (void*)0;
struct sNode* node_1049;
_Bool Value_1051;
struct buffer* __dec_obj333;
char* __dec_obj334;
char* __dec_obj335;
char* __dec_obj336;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct tuple2$2sFunpcharph* __result415__;
    last_code_1012=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj325=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1013=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj326=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1014=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1015=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1016=((void*)0);
    real_fun_name_1017=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1018=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1018;
    klass_1019=type->mClass;
    if(    type->mPointerNum>0&&!klass_1019->mNumber) {
        source_1020=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3099, "buffer"))));
        buffer_append_char(source_1020,123);
        if(        klass_1019->mProtocol) {
            name_1021="_protocol_obj";
            char source2_1022[1024];
            memset(&source2_1022, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1022,1024,"return left.%s.equals(right.%s);\n",name_1021,name_1021);
            buffer_append_str(source_1020,source2_1022);
        }
        else {
            klass_1019=((struct sClass*)(__right_value1098=map$2charphsClassphp_operator_load_element(info->classes,klass_1019->mName)));
            come_call_finalizer3(__right_value1098,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1023=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1019->mFields)),it_1024=list$1tuple2$2charphsTypephph_begin((o2_saved_1023));            !list$1tuple2$2charphsTypephph_end((o2_saved_1023));            it_1024=list$1tuple2$2charphsTypephph_next((o2_saved_1023))            ){
                multiple_assign_var12=it_1024;
                name_1025=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1026=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1026->mClass->mName)&&type->mPointerNum==field_type_1026->mPointerNum&&field_type_1026->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1027[1024];
                memset(&source2_1027, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1027,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1025,name_1025,name_1025);
                buffer_append_str(source_1020,source2_1027);
                name_1025 = come_decrement_ref_count2(name_1025, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1026,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1023,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1020,"return true;");
        buffer_append_char(source_1020,125);
        p_1028=info->p;
        sline_1029=info->sline;
        sname_1030=(char*)come_increment_ref_count(info->sname);
        head_1031=info->head;
        source3_1032=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj327=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1020);
        come_call_finalizer3(__dec_obj327,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1020->buf;
        info->head=source_1020->buf;
        __dec_obj328=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1017));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1033=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1034=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3145, "sType")),"bool",(_Bool)0,info));
        name_1035=(char*)come_increment_ref_count(string_clone(real_fun_name_1017));
        left_type_1036=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1036->mHeap=(_Bool)0;
        right_type_1037=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1037->mHeap=(_Bool)0;
        param_types_1039=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1038[0]=(struct sType*)come_increment_ref_count(left_type_1036),
__list_values23___1038[1]=(struct sType*)come_increment_ref_count(right_type_1037),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3151, "struct list$1sTypeph")),2,__list_values23___1038)));
        param_names_1041=(struct list$1charph*)come_increment_ref_count((__list_values24___1040[0]=(char*)come_increment_ref_count(((char*)(__right_value1108=__builtin_string("left")))),
__list_values24___1040[1]=(char*)come_increment_ref_count(((char*)(__right_value1109=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3152, "struct list$1charph")),2,__list_values24___1040)));
        __right_value1108 = come_decrement_ref_count2(__right_value1108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1109 = come_decrement_ref_count2(__right_value1109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1042=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3153, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1042,((void*)0));
        list$1charph_push_back(param_default_parametors_1042,((void*)0));
        header_buf_1043=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3157, "buffer"))));
        buffer_append_str(header_buf_1043,((char*)(__right_value1116=make_come_type_name_string(result_type_1034,info))));
        __right_value1116 = come_decrement_ref_count2(__right_value1116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1043," ");
        buffer_append_str(header_buf_1043,real_fun_name_1017);
        buffer_append_str(header_buf_1043,"(");
        for(        i_1044=0;        i_1044<list$1sTypeph_length(param_types_1039);        i_1044++        ){
            param_type_1045=((struct sType*)come_null_check(((struct sType*)(__right_value1117=list$1sTypephp_operator_load_element(param_types_1039,i_1044))), "05function.c", 3165, 9));
            come_call_finalizer3(__right_value1117,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1046=((char*)come_null_check(((char*)(__right_value1118=list$1charphp_operator_load_element(param_names_1041,i_1044))), "05function.c", 3166, 10));
            __right_value1118 = come_decrement_ref_count2(__right_value1118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1043,((char*)(__right_value1119=make_come_type_name_string(param_type_1045,info))));
            __right_value1119 = come_decrement_ref_count2(__right_value1119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1043," ");
            buffer_append_str(header_buf_1043,param_name_1046);
            if(            i_1044!=list$1sTypeph_length(param_types_1039)-1) {
                buffer_append_str(header_buf_1043,",");
            }
        }
        buffer_append_str(header_buf_1043,")");
        result_type_1034->mStatic=(_Bool)0;
        result_type_1034->mUniq=(_Bool)0;
        result_type_1034->mInline=(_Bool)0;
        fun2_1047=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1120=__builtin_string(fun_name)))));
        __right_value1120 = come_decrement_ref_count2(__right_value1120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1047==((void*)0)||fun2_1047->mExternal) {
            fun_1048=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3184, "sFun")),(char*)come_increment_ref_count(name_1035),(struct sType*)come_increment_ref_count(result_type_1034),(struct list$1sTypeph*)come_increment_ref_count(param_types_1039),(struct list$1charph*)come_increment_ref_count(param_names_1041),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1042),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1033),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1043)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1035)),(struct sFun*)come_increment_ref_count(fun_1048));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3194, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1130=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3194, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1048),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1049=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1130,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1051=node_compile(node_1049,info);
            if(            !Value_1051) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1016=fun_1048;
            come_call_finalizer3(fun_1048,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1049) { node_1049 = come_decrement_ref_count2(node_1049, ((struct sNode*)node_1049)->finalize, ((struct sNode*)node_1049)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1016=fun2_1047;
        }
        __dec_obj333=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1032);
        come_call_finalizer3(__dec_obj333,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1028;
        info->head=head_1031;
        info->sline=sline_1029;
        __dec_obj334=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1030);
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1020,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1030 = come_decrement_ref_count2(sname_1030, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1032,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1033,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1034,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1035 = come_decrement_ref_count2(name_1035, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1036,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1037,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1039,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1041,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1042,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1043,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1047,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1015;
    __dec_obj335=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1012);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj336=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1013);
    __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1014;
    __result415__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1136=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3220, "struct tuple2$2sFunpcharph")),equaler_1016,(char*)come_increment_ref_count(real_fun_name_1017))));
    last_code_1012 = come_decrement_ref_count2(last_code_1012, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1013 = come_decrement_ref_count2(last_code2_1013, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1017 = come_decrement_ref_count2(real_fun_name_1017, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1018,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1136,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1052;
char* __dec_obj337;
char* last_code2_1053;
char* __dec_obj338;
_Bool comma_instead_of_semicolon_1054;
struct sClass* current_stack_frame_struct_1055;
struct sFun* equaler_1056;
void* __right_value1137 = (void*)0;
char* real_fun_name_1057;
void* __right_value1138 = (void*)0;
struct sType* type2_1058;
struct sClass* klass_1059;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct buffer* source_1060;
char* name_1061;
int i_1064;
void* __right_value1141 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1065;
struct tuple2$2charphsTypeph* it_1066;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1067=0;
struct sType* field_type_1068=0;
char* p_1072;
int sline_1073;
char* sname_1074;
char* head_1075;
struct buffer* source3_1076;
struct buffer* __dec_obj339;
void* __right_value1142 = (void*)0;
char* __dec_obj340;
void* __right_value1143 = (void*)0;
struct sBlock* block_1077;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
struct sType* result_type_1078;
void* __right_value1146 = (void*)0;
char* name_1079;
void* __right_value1147 = (void*)0;
struct sType* left_type_1080;
void* __right_value1148 = (void*)0;
struct sType* right_type_1081;
struct sType* __list_values25___1082[2];
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct list$1sTypeph* param_types_1083;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
char* __list_values26___1084[2];
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct list$1charph* param_names_1085;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
struct list$1charph* param_default_parametors_1086;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct buffer* header_buf_1087;
void* __right_value1159 = (void*)0;
int i_1088;
void* __right_value1160 = (void*)0;
struct sType* param_type_1089;
void* __right_value1161 = (void*)0;
char* param_name_1090;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
struct sFun* fun2_1091;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
struct sFun* fun_1092;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1177 = (void*)0;
struct sNode* node_1093;
_Bool Value_1095;
struct buffer* __dec_obj345;
char* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
void* __right_value1178 = (void*)0;
void* __right_value1179 = (void*)0;
struct tuple2$2sFunpcharph* __result418__;
    last_code_1052=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj337=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1053=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj338=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1054=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1055=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1056=((void*)0);
    real_fun_name_1057=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1058=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1058;
    klass_1059=type->mClass;
    if(    type->mPointerNum>0&&!klass_1059->mNumber) {
        source_1060=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3245, "buffer"))));
        buffer_append_char(source_1060,123);
        if(        klass_1059->mProtocol) {
            name_1061="_protocol_obj";
            char source2_1062[1024];
            memset(&source2_1062, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1062,1024,"return left.%s !== right.%s;\n",name_1061,name_1061);
            buffer_append_str(source_1060,source2_1062);
        }
        else {
            char source2_1063[1024];
            memset(&source2_1063, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1063,1024,"return !(");
            buffer_append_str(source_1060,source2_1063);
            snprintf(source2_1063,1024,"( ");
            buffer_append_str(source_1060,source2_1063);
            i_1064=0;
            klass_1059=((struct sClass*)(__right_value1141=map$2charphsClassphp_operator_load_element(info->classes,klass_1059->mName)));
            come_call_finalizer3(__right_value1141,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1065=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1059->mFields)),it_1066=list$1tuple2$2charphsTypephph_begin((o2_saved_1065));            !list$1tuple2$2charphsTypephph_end((o2_saved_1065));            it_1066=list$1tuple2$2charphsTypephph_next((o2_saved_1065))            ){
                multiple_assign_var13=it_1066;
                name_1067=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1068=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1068->mClass->mName)&&type->mPointerNum==field_type_1068->mPointerNum&&field_type_1068->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1069[1024];
                memset(&source2_1069, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1069,1024,"(left.%s === right.%s)",name_1067,name_1067,name_1067);
                buffer_append_str(source_1060,source2_1069);
                if(                i_1064==list$1tuple2$2charphsTypephph_length(klass_1059->mFields)-1) {
                    char source2_1070[1024];
                    memset(&source2_1070, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1070,1024,"));");
                    buffer_append_str(source_1060,source2_1070);
                }
                else {
                    char source2_1071[1024];
                    memset(&source2_1071, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1071,1024," && ");
                    buffer_append_str(source_1060,source2_1071);
                }
                i_1064++;
                name_1067 = come_decrement_ref_count2(name_1067, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1068,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1065,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1060,125);
        p_1072=info->p;
        sline_1073=info->sline;
        sname_1074=(char*)come_increment_ref_count(info->sname);
        head_1075=info->head;
        source3_1076=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1060);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1060->buf;
        info->head=source_1060->buf;
        __dec_obj340=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1057));
        __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1077=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1078=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3311, "sType")),"bool",(_Bool)0,info));
        name_1079=(char*)come_increment_ref_count(string_clone(real_fun_name_1057));
        left_type_1080=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1080->mHeap=(_Bool)0;
        right_type_1081=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1081->mHeap=(_Bool)0;
        param_types_1083=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1082[0]=(struct sType*)come_increment_ref_count(left_type_1080),
__list_values25___1082[1]=(struct sType*)come_increment_ref_count(right_type_1081),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3317, "struct list$1sTypeph")),2,__list_values25___1082)));
        param_names_1085=(struct list$1charph*)come_increment_ref_count((__list_values26___1084[0]=(char*)come_increment_ref_count(((char*)(__right_value1151=__builtin_string("left")))),
__list_values26___1084[1]=(char*)come_increment_ref_count(((char*)(__right_value1152=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3318, "struct list$1charph")),2,__list_values26___1084)));
        __right_value1151 = come_decrement_ref_count2(__right_value1151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1152 = come_decrement_ref_count2(__right_value1152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1086=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3319, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1086,((void*)0));
        list$1charph_push_back(param_default_parametors_1086,((void*)0));
        header_buf_1087=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3323, "buffer"))));
        buffer_append_str(header_buf_1087,((char*)(__right_value1159=make_come_type_name_string(result_type_1078,info))));
        __right_value1159 = come_decrement_ref_count2(__right_value1159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1087," ");
        buffer_append_str(header_buf_1087,real_fun_name_1057);
        buffer_append_str(header_buf_1087,"(");
        for(        i_1088=0;        i_1088<list$1sTypeph_length(param_types_1083);        i_1088++        ){
            param_type_1089=((struct sType*)come_null_check(((struct sType*)(__right_value1160=list$1sTypephp_operator_load_element(param_types_1083,i_1088))), "05function.c", 3331, 11));
            come_call_finalizer3(__right_value1160,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1090=((char*)come_null_check(((char*)(__right_value1161=list$1charphp_operator_load_element(param_names_1085,i_1088))), "05function.c", 3332, 12));
            __right_value1161 = come_decrement_ref_count2(__right_value1161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1087,((char*)(__right_value1162=make_come_type_name_string(param_type_1089,info))));
            __right_value1162 = come_decrement_ref_count2(__right_value1162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1087," ");
            buffer_append_str(header_buf_1087,param_name_1090);
            if(            i_1088!=list$1sTypeph_length(param_types_1083)-1) {
                buffer_append_str(header_buf_1087,",");
            }
        }
        buffer_append_str(header_buf_1087,")");
        result_type_1078->mStatic=(_Bool)0;
        result_type_1078->mUniq=(_Bool)0;
        result_type_1078->mInline=(_Bool)0;
        fun2_1091=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1163=__builtin_string(fun_name)))));
        __right_value1163 = come_decrement_ref_count2(__right_value1163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1091==((void*)0)||fun2_1091->mExternal) {
            fun_1092=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3350, "sFun")),(char*)come_increment_ref_count(name_1079),(struct sType*)come_increment_ref_count(result_type_1078),(struct list$1sTypeph*)come_increment_ref_count(param_types_1083),(struct list$1charph*)come_increment_ref_count(param_names_1085),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1086),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1077),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1087)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1079)),(struct sFun*)come_increment_ref_count(fun_1092));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3360, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1173=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3360, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1092),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1093=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1173,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1095=node_compile(node_1093,info);
            if(            !Value_1095) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1056=fun_1092;
            come_call_finalizer3(fun_1092,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1093) { node_1093 = come_decrement_ref_count2(node_1093, ((struct sNode*)node_1093)->finalize, ((struct sNode*)node_1093)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1056=fun2_1091;
        }
        __dec_obj345=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1076);
        come_call_finalizer3(__dec_obj345,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1072;
        info->head=head_1075;
        info->sline=sline_1073;
        __dec_obj346=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1074);
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1060,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1074 = come_decrement_ref_count2(sname_1074, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1076,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1077,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1078,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1079 = come_decrement_ref_count2(name_1079, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1080,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1081,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1083,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1085,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1086,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1087,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1091,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1055;
    __dec_obj347=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1052);
    __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj348=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1053);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1054;
    __result418__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1179=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3386, "struct tuple2$2sFunpcharph")),equaler_1056,(char*)come_increment_ref_count(real_fun_name_1057))));
    last_code_1052 = come_decrement_ref_count2(last_code_1052, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1053 = come_decrement_ref_count2(last_code2_1053, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1057 = come_decrement_ref_count2(real_fun_name_1057, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1058,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1179,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1096;
char* __dec_obj349;
char* last_code2_1097;
char* __dec_obj350;
_Bool comma_instead_of_semicolon_1098;
struct sClass* current_stack_frame_struct_1099;
struct sFun* equaler_1100;
void* __right_value1180 = (void*)0;
char* real_fun_name_1101;
void* __right_value1181 = (void*)0;
struct sType* type2_1102;
struct sClass* klass_1103;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
struct buffer* source_1104;
char* name_1105;
int i_1108;
void* __right_value1184 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1109;
struct tuple2$2charphsTypeph* it_1110;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1111=0;
struct sType* field_type_1112=0;
char* p_1116;
int sline_1117;
char* sname_1118;
char* head_1119;
struct buffer* source3_1120;
struct buffer* __dec_obj351;
void* __right_value1185 = (void*)0;
char* __dec_obj352;
void* __right_value1186 = (void*)0;
struct sBlock* block_1121;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
struct sType* result_type_1122;
void* __right_value1189 = (void*)0;
char* name_1123;
void* __right_value1190 = (void*)0;
struct sType* left_type_1124;
void* __right_value1191 = (void*)0;
struct sType* right_type_1125;
struct sType* __list_values27___1126[2];
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct list$1sTypeph* param_types_1127;
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
char* __list_values28___1128[2];
void* __right_value1196 = (void*)0;
void* __right_value1197 = (void*)0;
struct list$1charph* param_names_1129;
void* __right_value1198 = (void*)0;
void* __right_value1199 = (void*)0;
struct list$1charph* param_default_parametors_1130;
void* __right_value1200 = (void*)0;
void* __right_value1201 = (void*)0;
struct buffer* header_buf_1131;
void* __right_value1202 = (void*)0;
int i_1132;
void* __right_value1203 = (void*)0;
struct sType* param_type_1133;
void* __right_value1204 = (void*)0;
char* param_name_1134;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct sFun* fun2_1135;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
void* __right_value1213 = (void*)0;
struct sFun* fun_1136;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1220 = (void*)0;
struct sNode* node_1137;
_Bool Value_1139;
struct buffer* __dec_obj357;
char* __dec_obj358;
char* __dec_obj359;
char* __dec_obj360;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
struct tuple2$2sFunpcharph* __result421__;
    last_code_1096=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj349=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1097=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj350=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1098=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1099=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1100=((void*)0);
    real_fun_name_1101=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1102=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1102;
    klass_1103=type->mClass;
    if(    type->mPointerNum>0&&!klass_1103->mNumber) {
        source_1104=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3411, "buffer"))));
        buffer_append_char(source_1104,123);
        if(        klass_1103->mProtocol) {
            name_1105="_protocol_obj";
            char source2_1106[1024];
            memset(&source2_1106, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1106,1024,"return !left.%s.equals(right.%s);\n",name_1105,name_1105);
            buffer_append_str(source_1104,source2_1106);
        }
        else {
            char source2_1107[1024];
            memset(&source2_1107, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1107,1024,"return !(");
            buffer_append_str(source_1104,source2_1107);
            i_1108=0;
            klass_1103=((struct sClass*)(__right_value1184=map$2charphsClassphp_operator_load_element(info->classes,klass_1103->mName)));
            come_call_finalizer3(__right_value1184,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1109=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1103->mFields)),it_1110=list$1tuple2$2charphsTypephph_begin((o2_saved_1109));            !list$1tuple2$2charphsTypephph_end((o2_saved_1109));            it_1110=list$1tuple2$2charphsTypephph_next((o2_saved_1109))            ){
                multiple_assign_var14=it_1110;
                name_1111=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1112=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1112->mClass->mName)&&type->mPointerNum==field_type_1112->mPointerNum&&field_type_1112->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1113[1024];
                memset(&source2_1113, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1113,1024,"left.%s.equals(right.%s)",name_1111,name_1111);
                buffer_append_str(source_1104,source2_1113);
                if(                i_1108==list$1tuple2$2charphsTypephph_length(klass_1103->mFields)-1) {
                    char source2_1114[1024];
                    memset(&source2_1114, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1114,1024,");");
                    buffer_append_str(source_1104,source2_1114);
                }
                else {
                    char source2_1115[1024];
                    memset(&source2_1115, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1115,1024," && ");
                    buffer_append_str(source_1104,source2_1115);
                }
                i_1108++;
                name_1111 = come_decrement_ref_count2(name_1111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1112,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1109,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1104,125);
        p_1116=info->p;
        sline_1117=info->sline;
        sname_1118=(char*)come_increment_ref_count(info->sname);
        head_1119=info->head;
        source3_1120=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj351=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1104);
        come_call_finalizer3(__dec_obj351,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1104->buf;
        info->head=source_1104->buf;
        __dec_obj352=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1101));
        __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1121=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1122=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3474, "sType")),"bool",(_Bool)0,info));
        name_1123=(char*)come_increment_ref_count(string_clone(real_fun_name_1101));
        left_type_1124=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1124->mHeap=(_Bool)0;
        right_type_1125=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1125->mHeap=(_Bool)0;
        param_types_1127=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1126[0]=(struct sType*)come_increment_ref_count(left_type_1124),
__list_values27___1126[1]=(struct sType*)come_increment_ref_count(right_type_1125),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3480, "struct list$1sTypeph")),2,__list_values27___1126)));
        param_names_1129=(struct list$1charph*)come_increment_ref_count((__list_values28___1128[0]=(char*)come_increment_ref_count(((char*)(__right_value1194=__builtin_string("left")))),
__list_values28___1128[1]=(char*)come_increment_ref_count(((char*)(__right_value1195=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3481, "struct list$1charph")),2,__list_values28___1128)));
        __right_value1194 = come_decrement_ref_count2(__right_value1194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1195 = come_decrement_ref_count2(__right_value1195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1130=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3482, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1130,((void*)0));
        list$1charph_push_back(param_default_parametors_1130,((void*)0));
        header_buf_1131=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3486, "buffer"))));
        buffer_append_str(header_buf_1131,((char*)(__right_value1202=make_come_type_name_string(result_type_1122,info))));
        __right_value1202 = come_decrement_ref_count2(__right_value1202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1131," ");
        buffer_append_str(header_buf_1131,real_fun_name_1101);
        buffer_append_str(header_buf_1131,"(");
        for(        i_1132=0;        i_1132<list$1sTypeph_length(param_types_1127);        i_1132++        ){
            param_type_1133=((struct sType*)come_null_check(((struct sType*)(__right_value1203=list$1sTypephp_operator_load_element(param_types_1127,i_1132))), "05function.c", 3494, 13));
            come_call_finalizer3(__right_value1203,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1134=((char*)come_null_check(((char*)(__right_value1204=list$1charphp_operator_load_element(param_names_1129,i_1132))), "05function.c", 3495, 14));
            __right_value1204 = come_decrement_ref_count2(__right_value1204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1131,((char*)(__right_value1205=make_come_type_name_string(param_type_1133,info))));
            __right_value1205 = come_decrement_ref_count2(__right_value1205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1131," ");
            buffer_append_str(header_buf_1131,param_name_1134);
            if(            i_1132!=list$1sTypeph_length(param_types_1127)-1) {
                buffer_append_str(header_buf_1131,",");
            }
        }
        buffer_append_str(header_buf_1131,")");
        result_type_1122->mStatic=(_Bool)0;
        result_type_1122->mUniq=(_Bool)0;
        result_type_1122->mInline=(_Bool)0;
        fun2_1135=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1206=__builtin_string(fun_name)))));
        __right_value1206 = come_decrement_ref_count2(__right_value1206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1135==((void*)0)||fun2_1135->mExternal) {
            fun_1136=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3513, "sFun")),(char*)come_increment_ref_count(name_1123),(struct sType*)come_increment_ref_count(result_type_1122),(struct list$1sTypeph*)come_increment_ref_count(param_types_1127),(struct list$1charph*)come_increment_ref_count(param_names_1129),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1130),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1121),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1131)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1123)),(struct sFun*)come_increment_ref_count(fun_1136));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3523, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1216=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3523, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1136),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1137=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1216,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1139=node_compile(node_1137,info);
            if(            !Value_1139) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1100=fun_1136;
            come_call_finalizer3(fun_1136,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1137) { node_1137 = come_decrement_ref_count2(node_1137, ((struct sNode*)node_1137)->finalize, ((struct sNode*)node_1137)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1100=fun2_1135;
        }
        __dec_obj357=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1120);
        come_call_finalizer3(__dec_obj357,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1116;
        info->head=head_1119;
        info->sline=sline_1117;
        __dec_obj358=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1118);
        __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1104,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1118 = come_decrement_ref_count2(sname_1118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1120,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1121,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1122,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1123 = come_decrement_ref_count2(name_1123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1124,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1125,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1127,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1129,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1130,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1131,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1135,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1099;
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1096);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1097);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1098;
    __result421__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1222=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3549, "struct tuple2$2sFunpcharph")),equaler_1100,(char*)come_increment_ref_count(real_fun_name_1101))));
    last_code_1096 = come_decrement_ref_count2(last_code_1096, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1097 = come_decrement_ref_count2(last_code2_1097, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1101 = come_decrement_ref_count2(real_fun_name_1101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1102,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1222,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1140;
char* __dec_obj361;
char* last_code2_1141;
char* __dec_obj362;
_Bool comma_instead_of_semicolon_1142;
struct sClass* current_stack_frame_struct_1143;
struct sFun* equaler_1144;
void* __right_value1223 = (void*)0;
char* real_fun_name_1145;
void* __right_value1224 = (void*)0;
struct sType* type2_1146;
struct sClass* klass_1147;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct buffer* source_1148;
char* name_1149;
void* __right_value1227 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1152;
struct tuple2$2charphsTypeph* it_1153;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1154=0;
struct sType* field_type_1155=0;
char* p_1157;
int sline_1158;
char* sname_1159;
char* head_1160;
struct buffer* source3_1161;
struct buffer* __dec_obj363;
void* __right_value1228 = (void*)0;
char* __dec_obj364;
void* __right_value1229 = (void*)0;
struct sBlock* block_1162;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct sType* result_type_1163;
void* __right_value1232 = (void*)0;
char* name_1164;
void* __right_value1233 = (void*)0;
struct sType* left_type_1165;
void* __right_value1234 = (void*)0;
struct sType* right_type_1166;
struct sType* __list_values29___1167[2];
void* __right_value1235 = (void*)0;
void* __right_value1236 = (void*)0;
struct list$1sTypeph* param_types_1168;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
char* __list_values30___1169[2];
void* __right_value1239 = (void*)0;
void* __right_value1240 = (void*)0;
struct list$1charph* param_names_1170;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
struct list$1charph* param_default_parametors_1171;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
struct buffer* header_buf_1172;
void* __right_value1245 = (void*)0;
int i_1173;
void* __right_value1246 = (void*)0;
struct sType* param_type_1174;
void* __right_value1247 = (void*)0;
char* param_name_1175;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
struct sFun* fun2_1176;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
struct sFun* fun_1177;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
void* __right_value1259 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1263 = (void*)0;
struct sNode* node_1178;
_Bool Value_1180;
struct buffer* __dec_obj369;
char* __dec_obj370;
char* __dec_obj371;
char* __dec_obj372;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
struct tuple2$2sFunpcharph* __result424__;
    last_code_1140=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj361=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1141=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj362=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1142=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1143=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1144=((void*)0);
    real_fun_name_1145=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1146=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1146;
    klass_1147=type->mClass;
    if(    type->mPointerNum>0&&!klass_1147->mNumber) {
        source_1148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3574, "buffer"))));
        buffer_append_char(source_1148,123);
        if(        klass_1147->mProtocol) {
            name_1149="_protocol_obj";
            char source2_1150[1024];
            memset(&source2_1150, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1150,1024,"return left.%s === right.%s;\n",name_1149,name_1149);
            buffer_append_str(source_1148,source2_1150);
        }
        else {
            char source2_1151[1024];
            memset(&source2_1151, 0, sizeof(char)            *(1024)            );
            klass_1147=((struct sClass*)(__right_value1227=map$2charphsClassphp_operator_load_element(info->classes,klass_1147->mName)));
            come_call_finalizer3(__right_value1227,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1152=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1147->mFields)),it_1153=list$1tuple2$2charphsTypephph_begin((o2_saved_1152));            !list$1tuple2$2charphsTypephph_end((o2_saved_1152));            it_1153=list$1tuple2$2charphsTypephph_next((o2_saved_1152))            ){
                multiple_assign_var15=it_1153;
                name_1154=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1155=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1155->mClass->mName)&&type->mPointerNum==field_type_1155->mPointerNum&&field_type_1155->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1156[1024];
                memset(&source2_1156, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1156,1024,"if(left.%s !== right.%s) { return false; }\n",name_1154,name_1154,name_1154);
                buffer_append_str(source_1148,source2_1156);
                name_1154 = come_decrement_ref_count2(name_1154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1155,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1152,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1148,"return true;\n");
        buffer_append_char(source_1148,125);
        p_1157=info->p;
        sline_1158=info->sline;
        sname_1159=(char*)come_increment_ref_count(info->sname);
        head_1160=info->head;
        source3_1161=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj363=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1148);
        come_call_finalizer3(__dec_obj363,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1148->buf;
        info->head=source_1148->buf;
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1145));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1162=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1163=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3622, "sType")),"bool",(_Bool)0,info));
        name_1164=(char*)come_increment_ref_count(string_clone(real_fun_name_1145));
        left_type_1165=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1165->mHeap=(_Bool)0;
        right_type_1166=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1166->mHeap=(_Bool)0;
        param_types_1168=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1167[0]=(struct sType*)come_increment_ref_count(left_type_1165),
__list_values29___1167[1]=(struct sType*)come_increment_ref_count(right_type_1166),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3628, "struct list$1sTypeph")),2,__list_values29___1167)));
        param_names_1170=(struct list$1charph*)come_increment_ref_count((__list_values30___1169[0]=(char*)come_increment_ref_count(((char*)(__right_value1237=__builtin_string("left")))),
__list_values30___1169[1]=(char*)come_increment_ref_count(((char*)(__right_value1238=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3629, "struct list$1charph")),2,__list_values30___1169)));
        __right_value1237 = come_decrement_ref_count2(__right_value1237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1238 = come_decrement_ref_count2(__right_value1238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1171=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3630, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1171,((void*)0));
        list$1charph_push_back(param_default_parametors_1171,((void*)0));
        header_buf_1172=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3634, "buffer"))));
        buffer_append_str(header_buf_1172,((char*)(__right_value1245=make_come_type_name_string(result_type_1163,info))));
        __right_value1245 = come_decrement_ref_count2(__right_value1245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1172," ");
        buffer_append_str(header_buf_1172,real_fun_name_1145);
        buffer_append_str(header_buf_1172,"(");
        for(        i_1173=0;        i_1173<list$1sTypeph_length(param_types_1168);        i_1173++        ){
            param_type_1174=((struct sType*)come_null_check(((struct sType*)(__right_value1246=list$1sTypephp_operator_load_element(param_types_1168,i_1173))), "05function.c", 3642, 15));
            come_call_finalizer3(__right_value1246,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1175=((char*)come_null_check(((char*)(__right_value1247=list$1charphp_operator_load_element(param_names_1170,i_1173))), "05function.c", 3643, 16));
            __right_value1247 = come_decrement_ref_count2(__right_value1247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1172,((char*)(__right_value1248=make_come_type_name_string(param_type_1174,info))));
            __right_value1248 = come_decrement_ref_count2(__right_value1248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1172," ");
            buffer_append_str(header_buf_1172,param_name_1175);
            if(            i_1173!=list$1sTypeph_length(param_types_1168)-1) {
                buffer_append_str(header_buf_1172,",");
            }
        }
        buffer_append_str(header_buf_1172,")");
        result_type_1163->mStatic=(_Bool)0;
        result_type_1163->mUniq=(_Bool)0;
        result_type_1163->mInline=(_Bool)0;
        fun2_1176=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1249=__builtin_string(fun_name)))));
        __right_value1249 = come_decrement_ref_count2(__right_value1249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1176==((void*)0)||fun2_1176->mExternal) {
            fun_1177=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3661, "sFun")),(char*)come_increment_ref_count(name_1164),(struct sType*)come_increment_ref_count(result_type_1163),(struct list$1sTypeph*)come_increment_ref_count(param_types_1168),(struct list$1charph*)come_increment_ref_count(param_names_1170),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1171),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1162),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1172)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1164)),(struct sFun*)come_increment_ref_count(fun_1177));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3671, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1259=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3671, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1177),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1178=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1259,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1180=node_compile(node_1178,info);
            if(            !Value_1180) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1144=fun_1177;
            come_call_finalizer3(fun_1177,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1178) { node_1178 = come_decrement_ref_count2(node_1178, ((struct sNode*)node_1178)->finalize, ((struct sNode*)node_1178)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1144=fun2_1176;
        }
        __dec_obj369=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1161);
        come_call_finalizer3(__dec_obj369,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1157;
        info->head=head_1160;
        info->sline=sline_1158;
        __dec_obj370=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1159);
        __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1148,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1159 = come_decrement_ref_count2(sname_1159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1161,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1162,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1163,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1164 = come_decrement_ref_count2(name_1164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1165,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1166,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1168,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1170,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1171,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1172,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1176,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1143;
    __dec_obj371=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1140);
    __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj372=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1141);
    __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1142;
    __result424__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1265=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3697, "struct tuple2$2sFunpcharph")),equaler_1144,(char*)come_increment_ref_count(real_fun_name_1145))));
    last_code_1140 = come_decrement_ref_count2(last_code_1140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1141 = come_decrement_ref_count2(last_code2_1141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1145 = come_decrement_ref_count2(real_fun_name_1145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1146,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1265,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1181;
char* __dec_obj373;
char* last_code2_1182;
char* __dec_obj374;
_Bool comma_instead_of_semicolon_1183;
struct sClass* current_stack_frame_struct_1184;
struct sFun* cloner_1185;
void* __right_value1266 = (void*)0;
char* real_fun_name_1186;
void* __right_value1267 = (void*)0;
struct sType* type2_1187;
struct sClass* klass_1188;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
struct buffer* source_1189;
void* __right_value1270 = (void*)0;
char* name_1190;
void* __right_value1271 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1192;
struct tuple2$2charphsTypeph* it_1193;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1194=0;
struct sType* field_type_1195=0;
void* __right_value1272 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1198;
struct tuple2$2charphsTypeph* it_1199;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1200=0;
struct sType* field_type_1201=0;
char* p_1205;
int sline_1206;
char* sname_1207;
struct buffer* source3_1208;
char* head_1209;
struct buffer* __dec_obj375;
void* __right_value1273 = (void*)0;
char* __dec_obj376;
void* __right_value1274 = (void*)0;
struct sBlock* block_1210;
void* __right_value1275 = (void*)0;
struct sType* result_type_1211;
void* __right_value1276 = (void*)0;
char* name_1212;
void* __right_value1277 = (void*)0;
struct sType* self_type_1213;
struct sType* __list_values31___1214[1];
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
struct list$1sTypeph* param_types_1215;
void* __right_value1280 = (void*)0;
char* __list_values32___1216[1];
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
struct list$1charph* param_names_1217;
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
struct list$1charph* param_default_parametors_1218;
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
struct buffer* header_buf_1219;
void* __right_value1287 = (void*)0;
int i_1220;
void* __right_value1288 = (void*)0;
struct sType* param_type_1221;
void* __right_value1289 = (void*)0;
char* param_name_1222;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
void* __right_value1292 = (void*)0;
struct sFun* fun2_1223;
void* __right_value1293 = (void*)0;
void* __right_value1294 = (void*)0;
void* __right_value1295 = (void*)0;
void* __right_value1296 = (void*)0;
void* __right_value1297 = (void*)0;
void* __right_value1298 = (void*)0;
struct sFun* fun_1224;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1305 = (void*)0;
struct sNode* node_1225;
_Bool Value_1227;
char* __dec_obj381;
struct buffer* __dec_obj382;
char* __dec_obj383;
char* __dec_obj384;
void* __right_value1306 = (void*)0;
void* __right_value1307 = (void*)0;
struct tuple2$2sFunpcharph* __result427__;
    last_code_1181=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj373=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1182=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj374=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1183=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1184=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1185=((void*)0);
    real_fun_name_1186=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1187=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1187;
    klass_1188=type->mClass;
    if(    type->mPointerNum>0&&!klass_1188->mNumber) {
        source_1189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3722, "buffer"))));
        buffer_append_str(source_1189,"{\n");
        buffer_append_str(source_1189,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1189,"var result = new %s;\n",((char*)(__right_value1270=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1270 = come_decrement_ref_count2(__right_value1270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1188->mProtocol) {
            name_1190="_protocol_obj";
            char source2_1191[1024];
            memset(&source2_1191, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1191,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1189,source2_1191);
            klass_1188=((struct sClass*)(__right_value1271=map$2charphsClassphp_operator_load_element(info->classes,klass_1188->mName)));
            come_call_finalizer3(__right_value1271,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1192=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1188->mFields)),it_1193=list$1tuple2$2charphsTypephph_begin((o2_saved_1192));            !list$1tuple2$2charphsTypephph_end((o2_saved_1192));            it_1193=list$1tuple2$2charphsTypephph_next((o2_saved_1192))            ){
                multiple_assign_var16=it_1193;
                name_1194=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1195=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1195->mClass->mName)&&type->mPointerNum==field_type_1195->mPointerNum&&field_type_1195->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_1194,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1195->mArrayNum)>0) {
                    char source2_1196[1024];
                    memset(&source2_1196, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1196,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1194,name_1194,name_1194);
                    buffer_append_str(source_1189,source2_1196);
                }
                else {
                    char source2_1197[1024];
                    memset(&source2_1197, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1197,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1194,name_1194);
                    buffer_append_str(source_1189,source2_1197);
                }
                name_1194 = come_decrement_ref_count2(name_1194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1195,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1192,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1188=((struct sClass*)(__right_value1272=map$2charphsClassphp_operator_load_element(info->classes,klass_1188->mName)));
            come_call_finalizer3(__right_value1272,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1198=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1188->mFields)),it_1199=list$1tuple2$2charphsTypephph_begin((o2_saved_1198));            !list$1tuple2$2charphsTypephph_end((o2_saved_1198));            it_1199=list$1tuple2$2charphsTypephph_next((o2_saved_1198))            ){
                multiple_assign_var17=it_1199;
                name_1200=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1201=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1201->mClass->mName)&&type->mPointerNum==field_type_1201->mPointerNum&&field_type_1201->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_1201->mHeap) {
                    char source2_1202[1024];
                    memset(&source2_1202, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1202,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1200,name_1200,name_1200);
                    buffer_append_str(source_1189,source2_1202);
                }
                else if(                list$1sNodeph_length(field_type_1201->mArrayNum)>0) {
                    char source2_1203[1024];
                    memset(&source2_1203, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1203,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1200,name_1200,name_1200);
                    buffer_append_str(source_1189,source2_1203);
                }
                else {
                    char source2_1204[1024];
                    memset(&source2_1204, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1204,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1200,name_1200);
                    buffer_append_str(source_1189,source2_1204);
                }
                name_1200 = come_decrement_ref_count2(name_1200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1201,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1198,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1189,"return result;");
        buffer_append_char(source_1189,125);
        p_1205=info->p;
        sline_1206=info->sline;
        sname_1207=(char*)come_increment_ref_count(info->sname);
        source3_1208=(struct buffer*)come_increment_ref_count(info->source);
        head_1209=info->head;
        __dec_obj375=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1189);
        come_call_finalizer3(__dec_obj375,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj376=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1186));
        __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1210=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1211=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1212=(char*)come_increment_ref_count(string_clone(real_fun_name_1186));
        self_type_1213=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1213->mHeap=(_Bool)0;
        param_types_1215=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1214[0]=(struct sType*)come_increment_ref_count(self_type_1213),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3816, "struct list$1sTypeph")),1,__list_values31___1214)));
        param_names_1217=(struct list$1charph*)come_increment_ref_count((__list_values32___1216[0]=(char*)come_increment_ref_count(((char*)(__right_value1280=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3817, "struct list$1charph")),1,__list_values32___1216)));
        __right_value1280 = come_decrement_ref_count2(__right_value1280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1218=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3818, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1218,((void*)0));
        header_buf_1219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3821, "buffer"))));
        buffer_append_str(header_buf_1219,((char*)(__right_value1287=make_come_type_name_string(result_type_1211,info))));
        __right_value1287 = come_decrement_ref_count2(__right_value1287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1219," ");
        buffer_append_str(header_buf_1219,real_fun_name_1186);
        buffer_append_str(header_buf_1219,"(");
        for(        i_1220=0;        i_1220<list$1sTypeph_length(param_types_1215);        i_1220++        ){
            param_type_1221=((struct sType*)come_null_check(((struct sType*)(__right_value1288=list$1sTypephp_operator_load_element(param_types_1215,i_1220))), "05function.c", 3829, 17));
            come_call_finalizer3(__right_value1288,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1222=((char*)come_null_check(((char*)(__right_value1289=list$1charphp_operator_load_element(param_names_1217,i_1220))), "05function.c", 3830, 18));
            __right_value1289 = come_decrement_ref_count2(__right_value1289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1219,((char*)(__right_value1290=make_come_type_name_string(param_type_1221,info))));
            __right_value1290 = come_decrement_ref_count2(__right_value1290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1219," ");
            buffer_append_str(header_buf_1219,param_name_1222);
            if(            i_1220!=list$1sTypeph_length(param_types_1215)-1) {
                buffer_append_str(header_buf_1219,",");
            }
        }
        buffer_append_str(header_buf_1219,")");
        result_type_1211->mStatic=(_Bool)0;
        result_type_1211->mUniq=(_Bool)0;
        result_type_1211->mInline=(_Bool)0;
        fun2_1223=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1291=__builtin_string(fun_name)))));
        __right_value1291 = come_decrement_ref_count2(__right_value1291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1223==((void*)0)||fun2_1223->mExternal) {
            fun_1224=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3848, "sFun")),(char*)come_increment_ref_count(name_1212),(struct sType*)come_increment_ref_count(result_type_1211),(struct list$1sTypeph*)come_increment_ref_count(param_types_1215),(struct list$1charph*)come_increment_ref_count(param_names_1217),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1218),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1210),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1219)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1224->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1212)),(struct sFun*)come_increment_ref_count(fun_1224));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3860, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1301=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3860, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1224),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1225=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1301,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1227=node_compile(node_1225,info);
            if(            !Value_1227) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1185=fun_1224;
            come_call_finalizer3(fun_1224,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1225) { node_1225 = come_decrement_ref_count2(node_1225, ((struct sNode*)node_1225)->finalize, ((struct sNode*)node_1225)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1185=fun2_1223;
        }
        __dec_obj381=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1207);
        __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1206;
        __dec_obj382=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1208);
        come_call_finalizer3(__dec_obj382,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1205;
        info->head=head_1209;
        info->sline=sline_1206;
        come_call_finalizer3(source_1189,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1207 = come_decrement_ref_count2(sname_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1210,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1211,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1212 = come_decrement_ref_count2(name_1212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1213,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1215,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1217,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1218,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1219,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1223,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1184;
    __dec_obj383=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1181);
    __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj384=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1182);
    __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1183;
    __result427__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1307=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3888, "struct tuple2$2sFunpcharph")),cloner_1185,(char*)come_increment_ref_count(real_fun_name_1186))));
    last_code_1181 = come_decrement_ref_count2(last_code_1181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1182 = come_decrement_ref_count2(last_code2_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1186 = come_decrement_ref_count2(real_fun_name_1186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1187,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1307,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result427__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1228;
char* __dec_obj385;
char* last_code2_1229;
char* __dec_obj386;
_Bool comma_instead_of_semicolon_1230;
struct sClass* current_stack_frame_struct_1231;
struct sFun* cloner_1232;
void* __right_value1308 = (void*)0;
char* real_fun_name_1233;
void* __right_value1309 = (void*)0;
struct sType* type2_1234;
struct sClass* klass_1235;
void* __right_value1310 = (void*)0;
void* __right_value1311 = (void*)0;
struct buffer* source_1236;
int i_1237;
void* __right_value1312 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1238;
struct tuple2$2charphsTypeph* it_1239;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1240=0;
struct sType* field_type_1241=0;
char* p_1244;
int sline_1245;
char* sname_1246;
struct buffer* source3_1247;
char* head_1248;
struct buffer* __dec_obj387;
void* __right_value1313 = (void*)0;
char* __dec_obj388;
void* __right_value1314 = (void*)0;
struct sBlock* block_1249;
void* __right_value1315 = (void*)0;
void* __right_value1316 = (void*)0;
struct sType* result_type_1250;
void* __right_value1317 = (void*)0;
char* name_1251;
void* __right_value1318 = (void*)0;
struct sType* self_type_1252;
struct sType* __list_values33___1253[1];
void* __right_value1319 = (void*)0;
void* __right_value1320 = (void*)0;
struct list$1sTypeph* param_types_1254;
void* __right_value1321 = (void*)0;
char* __list_values34___1255[1];
void* __right_value1322 = (void*)0;
void* __right_value1323 = (void*)0;
struct list$1charph* param_names_1256;
void* __right_value1324 = (void*)0;
void* __right_value1325 = (void*)0;
struct list$1charph* param_default_parametors_1257;
void* __right_value1326 = (void*)0;
void* __right_value1327 = (void*)0;
struct buffer* header_buf_1258;
void* __right_value1328 = (void*)0;
int i_1259;
void* __right_value1329 = (void*)0;
struct sType* param_type_1260;
void* __right_value1330 = (void*)0;
char* param_name_1261;
void* __right_value1331 = (void*)0;
void* __right_value1332 = (void*)0;
void* __right_value1333 = (void*)0;
struct sFun* fun2_1262;
void* __right_value1334 = (void*)0;
void* __right_value1335 = (void*)0;
void* __right_value1336 = (void*)0;
void* __right_value1337 = (void*)0;
void* __right_value1338 = (void*)0;
void* __right_value1339 = (void*)0;
struct sFun* fun_1263;
void* __right_value1340 = (void*)0;
void* __right_value1341 = (void*)0;
void* __right_value1342 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1346 = (void*)0;
struct sNode* node_1264;
_Bool Value_1266;
char* __dec_obj393;
struct buffer* __dec_obj394;
char* __dec_obj395;
char* __dec_obj396;
void* __right_value1347 = (void*)0;
void* __right_value1348 = (void*)0;
struct tuple2$2sFunpcharph* __result430__;
    last_code_1228=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj385=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1229=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj386=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj386 = come_decrement_ref_count2(__dec_obj386, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1230=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1231=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1232=((void*)0);
    real_fun_name_1233=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1234=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1234;
    klass_1235=type->mClass;
    if(    type->mPointerNum>0&&!klass_1235->mNumber) {
        source_1236=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3913, "buffer"))));
        buffer_append_str(source_1236,"{\n");
        buffer_append_str(source_1236,"var result = new buffer();\n");
        buffer_append_format(source_1236,"result.append_str(\"%s {\");\n",klass_1235->mName);
        i_1237=0;
        klass_1235=((struct sClass*)(__right_value1312=map$2charphsClassphp_operator_load_element(info->classes,klass_1235->mName)));
        come_call_finalizer3(__right_value1312,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1238=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1235->mFields)),it_1239=list$1tuple2$2charphsTypephph_begin((o2_saved_1238));        !list$1tuple2$2charphsTypephph_end((o2_saved_1238));        it_1239=list$1tuple2$2charphsTypephph_next((o2_saved_1238))        ){
            multiple_assign_var18=it_1239;
            name_1240=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1241=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_1241->mClass->mName)&&type->mPointerNum==field_type_1241->mPointerNum&&field_type_1241->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_1237==list$1tuple2$2charphsTypephph_length(klass_1235->mFields)-1) {
                char source2_1242[1024];
                memset(&source2_1242, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1242,1024,"result.append_str(\"%s:\");\n",name_1240);
                buffer_append_str(source_1236,source2_1242);
                snprintf(source2_1242,1024,"result.append_str(self.%s.to_string());\n",name_1240);
                buffer_append_str(source_1236,source2_1242);
            }
            else {
                char source2_1243[1024];
                memset(&source2_1243, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1243,1024,"result.append_str(\"%s:\");\n",name_1240);
                buffer_append_str(source_1236,source2_1243);
                snprintf(source2_1243,1024,"result.append_str(self.%s.to_string());\n",name_1240);
                buffer_append_str(source_1236,source2_1243);
                snprintf(source2_1243,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1236,source2_1243);
            }
            i_1237++;
            name_1240 = come_decrement_ref_count2(name_1240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1238,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1236,"result.append_str(\"}\");\n");
        buffer_append_format(source_1236,"return result.to_string();\n");
        buffer_append_char(source_1236,125);
        p_1244=info->p;
        sline_1245=info->sline;
        sname_1246=(char*)come_increment_ref_count(info->sname);
        source3_1247=(struct buffer*)come_increment_ref_count(info->source);
        head_1248=info->head;
        __dec_obj387=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1236);
        come_call_finalizer3(__dec_obj387,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj388=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1233));
        __dec_obj388 = come_decrement_ref_count2(__dec_obj388, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1249=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1250=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3980, "sType")),"char*",(_Bool)0,info));
        result_type_1250->mHeap=(_Bool)1;
        name_1251=(char*)come_increment_ref_count(string_clone(real_fun_name_1233));
        self_type_1252=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1252->mHeap=(_Bool)0;
        param_types_1254=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1253[0]=(struct sType*)come_increment_ref_count(self_type_1252),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3985, "struct list$1sTypeph")),1,__list_values33___1253)));
        param_names_1256=(struct list$1charph*)come_increment_ref_count((__list_values34___1255[0]=(char*)come_increment_ref_count(((char*)(__right_value1321=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3986, "struct list$1charph")),1,__list_values34___1255)));
        __right_value1321 = come_decrement_ref_count2(__right_value1321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1257=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3987, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1257,((void*)0));
        header_buf_1258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3990, "buffer"))));
        buffer_append_str(header_buf_1258,((char*)(__right_value1328=make_come_type_name_string(result_type_1250,info))));
        __right_value1328 = come_decrement_ref_count2(__right_value1328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1258," ");
        buffer_append_str(header_buf_1258,real_fun_name_1233);
        buffer_append_str(header_buf_1258,"(");
        for(        i_1259=0;        i_1259<list$1sTypeph_length(param_types_1254);        i_1259++        ){
            param_type_1260=((struct sType*)come_null_check(((struct sType*)(__right_value1329=list$1sTypephp_operator_load_element(param_types_1254,i_1259))), "05function.c", 3998, 19));
            come_call_finalizer3(__right_value1329,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1261=((char*)come_null_check(((char*)(__right_value1330=list$1charphp_operator_load_element(param_names_1256,i_1259))), "05function.c", 3999, 20));
            __right_value1330 = come_decrement_ref_count2(__right_value1330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1258,((char*)(__right_value1331=make_come_type_name_string(param_type_1260,info))));
            __right_value1331 = come_decrement_ref_count2(__right_value1331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1258," ");
            buffer_append_str(header_buf_1258,param_name_1261);
            if(            i_1259!=list$1sTypeph_length(param_types_1254)-1) {
                buffer_append_str(header_buf_1258,",");
            }
        }
        buffer_append_str(header_buf_1258,")");
        result_type_1250->mStatic=(_Bool)0;
        result_type_1250->mUniq=(_Bool)0;
        result_type_1250->mInline=(_Bool)0;
        fun2_1262=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1332=__builtin_string(fun_name)))));
        __right_value1332 = come_decrement_ref_count2(__right_value1332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1262==((void*)0)||fun2_1262->mExternal) {
            fun_1263=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4017, "sFun")),(char*)come_increment_ref_count(name_1251),(struct sType*)come_increment_ref_count(result_type_1250),(struct list$1sTypeph*)come_increment_ref_count(param_types_1254),(struct list$1charph*)come_increment_ref_count(param_names_1256),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1257),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1249),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1258)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1263->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1251)),(struct sFun*)come_increment_ref_count(fun_1263));
            cloner_1232=fun_1263;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4031, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1342=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4031, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1263),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1264=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1342,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1266=node_compile(node_1264,info);
            if(            !Value_1266) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1263,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1264) { node_1264 = come_decrement_ref_count2(node_1264, ((struct sNode*)node_1264)->finalize, ((struct sNode*)node_1264)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1232=fun2_1262;
        }
        __dec_obj393=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1246);
        __dec_obj393 = come_decrement_ref_count2(__dec_obj393, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1245;
        __dec_obj394=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1247);
        come_call_finalizer3(__dec_obj394,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1244;
        info->head=head_1248;
        info->sline=sline_1245;
        come_call_finalizer3(source_1236,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1246 = come_decrement_ref_count2(sname_1246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1247,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1249,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1250,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1251 = come_decrement_ref_count2(name_1251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1252,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1254,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1256,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1257,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1258,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1262,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1231;
    __dec_obj395=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1228);
    __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj396=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1229);
    __dec_obj396 = come_decrement_ref_count2(__dec_obj396, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1230;
    __result430__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1348=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4057, "struct tuple2$2sFunpcharph")),cloner_1232,(char*)come_increment_ref_count(real_fun_name_1233))));
    last_code_1228 = come_decrement_ref_count2(last_code_1228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1229 = come_decrement_ref_count2(last_code2_1229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1233 = come_decrement_ref_count2(real_fun_name_1233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1234,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1348,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj389;
struct sFun* __dec_obj390;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj389=self->sname;
            __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj390=self->mFun;
            come_call_finalizer3(__dec_obj390,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result428__;
void* __right_value1343 = (void*)0;
struct sFunNode* result_1265;
void* __right_value1344 = (void*)0;
char* __dec_obj391;
void* __right_value1345 = (void*)0;
struct sFun* __dec_obj392;
struct sFunNode* __result429__;
    if(    self==(void*)0) {
        __result428__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    result_1265=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1265->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj391=result_1265->sname;
        result_1265->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1265->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj392=result_1265->mFun;
        result_1265->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj392,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result429__ = gComeFunResultObject = __result_obj__ = result_1265;
    come_call_finalizer3(result_1265,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

