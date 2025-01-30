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
    struct list$1objectph* mFields;
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
static _Bool list$1objectph_equals(struct list$1objectph* left, struct list$1objectph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1objectphp_operator_not_equals(struct list$1objectph* left, struct list$1objectph* right);
static _Bool list$1objectph_operator_equals(struct list$1objectph* left, struct list$1objectph* right);
static _Bool object_equals(struct object* left, struct object* right);
static _Bool object_operator_equals(struct object* left, struct object* right);
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
static void list$1objectph_finalize(struct list$1objectph* self);
static void list_item$1objectphp_finalize(struct list_item$1objectph* self);
static void list$1objectphp_finalize(struct list$1objectph* self);
static struct object* list$1objectph_begin(struct list$1objectph* self);
static _Bool list$1objectph_end(struct list$1objectph* self);
static struct object* list$1objectph_next(struct list$1objectph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1objectph_length(struct list$1objectph* self);
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
void* __right_value298 = (void*)0;
struct sType* __dec_obj88;
_Bool __result229__;
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
    __dec_obj88=come_value_269->type;
    come_value_269->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_269->var=((void*)0);
    add_come_last_code(info,"%s",come_value_269->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_269));
    info->come_fun=come_fun_266;
    __result229__ = (_Bool)1;
    come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_269,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result229__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result211__;
void* __right_value259 = (void*)0;
struct sType* result_270;
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
struct sType* __result227__;
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
        __dec_obj62=result_270->mNoSolvedGenericsType;
        result_270->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj63=result_270->mOriginalLoadVarType;
        result_270->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj64=result_270->mRefferenceOriginalType;
        result_270->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj65=result_270->mInterfaceName;
        result_270->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj66=result_270->mGenericsName;
        result_270->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj70=result_270->mGenericsTypes;
        result_270->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj74=result_270->mArrayNum;
        result_270->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj74,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj75=result_270->mParamTypes;
        result_270->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj75,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj79=result_270->mParamNames;
        result_270->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj80=result_270->mResultType;
        result_270->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj81=result_270->mAlignas;
        result_270->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj82=result_270->mChannelType;
        result_270->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
        __dec_obj83=result_270->mSizeNum;
        result_270->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_270->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj84=result_270->mOriginalTypeName;
        result_270->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj85=result_270->mAsmName;
        result_270->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj86=result_270->mTupleName;
        result_270->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj87=result_270->mAttribute;
        result_270->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_270->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_270;
    come_call_finalizer3(result_270,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
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
struct list_item$1sTypeph* it_272;
struct list_item$1sTypeph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        come_call_finalizer3(prev_it_273,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_274;
struct list_item$1sTypeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_280;
struct list_item$1charph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1sTypeph* __result214__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* result_282;
struct list_item$1sTypeph* it_283;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __result217__;
    if(    self==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_282=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_283=self->head;
    while(it_283!=((void*)0)) {
        list$1sTypeph_add(result_282,(struct sType*)come_increment_ref_count(sType_clone(it_283->item)));
        it_283=it_283->next;
    }
    __result217__ = gComeFunResultObject = __result_obj__ = result_282;
    come_call_finalizer3(result_282,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result215__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_284;
struct sType* __dec_obj67;
void* __right_value270 = (void*)0;
struct list_item$1sTypeph* litem_285;
struct sType* __dec_obj68;
void* __right_value271 = (void*)0;
struct list_item$1sTypeph* litem_286;
struct sType* __dec_obj69;
struct list$1sTypeph* __result216__;
    if(    self->len==0) {
        litem_284=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_284->prev=((void*)0);
        litem_284->next=((void*)0);
        __dec_obj67=litem_284->item;
        litem_284->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_284;
        self->head=litem_284;
    }
    else if(    self->len==1) {
        litem_285=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value270=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_285->prev=self->head;
        litem_285->next=((void*)0);
        __dec_obj68=litem_285->item;
        litem_285->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_285;
        self->head->next=litem_285;
    }
    else {
        litem_286=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value271=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_286->prev=self->tail;
        litem_286->next=((void*)0);
        __dec_obj69=litem_286->item;
        litem_286->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_286;
        self->tail=litem_286;
    }
    self->len++;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result218__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sNodeph* result_287;
struct list_item$1sNodeph* it_288;
void* __right_value280 = (void*)0;
struct list$1sNodeph* __result223__;
    if(    self==((void*)0)) {
        __result218__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    result_287=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_288=self->head;
    while(it_288!=((void*)0)) {
        list$1sNodeph_add(result_287,(struct sNode*)come_increment_ref_count(sNode_clone(it_288->item)));
        it_288=it_288->next;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_287;
    come_call_finalizer3(result_287,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_289;
struct sNode* __dec_obj71;
void* __right_value277 = (void*)0;
struct list_item$1sNodeph* litem_290;
struct sNode* __dec_obj72;
void* __right_value278 = (void*)0;
struct list_item$1sNodeph* litem_291;
struct sNode* __dec_obj73;
struct list$1sNodeph* __result220__;
    if(    self->len==0) {
        litem_289=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_289->prev=((void*)0);
        litem_289->next=((void*)0);
        __dec_obj71=litem_289->item;
        litem_289->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_289;
        self->head=litem_289;
    }
    else if(    self->len==1) {
        litem_290=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value277=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_290->prev=self->head;
        litem_290->next=((void*)0);
        __dec_obj72=litem_290->item;
        litem_290->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_290;
        self->head->next=litem_290;
    }
    else {
        litem_291=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value278=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_291->prev=self->tail;
        litem_291->next=((void*)0);
        __dec_obj73=litem_291->item;
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_291;
        self->tail=litem_291;
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
void* __right_value279 = (void*)0;
struct sNode* result_292;
struct sNode* __result222__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_292=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_292->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_292->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_292->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_292->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_292->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_292->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_292->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_292->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_292->kind=self->kind;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_292;
    if(result_292) { result_292 = come_decrement_ref_count2(result_292, ((struct sNode*)result_292)->finalize, ((struct sNode*)result_292)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result224__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* result_293;
struct list_item$1charph* it_294;
void* __right_value288 = (void*)0;
struct list$1charph* __result226__;
    if(    self==((void*)0)) {
        __result224__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_293=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_294=self->head;
    while(it_294!=((void*)0)) {
        list$1charph_add(result_293,(char*)come_increment_ref_count(string_clone(it_294->item)));
        it_294=it_294->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_293;
    come_call_finalizer3(result_293,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_295;
char* __dec_obj76;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_296;
char* __dec_obj77;
void* __right_value287 = (void*)0;
struct list_item$1charph* litem_297;
char* __dec_obj78;
struct list$1charph* __result225__;
    if(    self->len==0) {
        litem_295=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj76=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj77=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value287=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj78=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_298;
struct CVALUE* __dec_obj89;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_299;
struct CVALUE* __dec_obj93;
void* __right_value301 = (void*)0;
struct list_item$1CVALUEph* litem_300;
struct CVALUE* __dec_obj94;
struct list$1CVALUEph* __result228__;
    if(    self->len==0) {
        litem_298=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj89=litem_298->item;
        litem_298->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj93=litem_299->item;
        litem_299->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value301=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj94=litem_300->item;
        litem_300->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
    }
    self->len++;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
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
struct sFunNode* __result230__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj95,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sFunNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_301;
char* come_fun_name_302;
void* __right_value304 = (void*)0;
char* __dec_obj115;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* result_type_303;
void* __right_value307 = (void*)0;
int block_level_304;
void* __right_value308 = (void*)0;
char* __dec_obj116;
_Bool __result232__;
    come_fun_301=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_302=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj115=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_303=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value307=make_define_var(result_type_303,"__result_obj__",(_Bool)0,info))));
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_304=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_304;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value308=xsprintf("come_heap_final();\n"))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_301;
    __dec_obj116=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_302);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result232__ = (_Bool)1;
    come_fun_name_302 = come_decrement_ref_count2(come_fun_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result232__;
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
struct sBlock* __result233__;
    __dec_obj117=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj117,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
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
struct sGenericsFun* __result234__;
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
    __result234__ = gComeFunResultObject = __result_obj__ = self;
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
    return __result234__;
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
struct sBlock* result_305;
int sline_top_306;
int block_level_307;
char* p_saved_308;
int sline_saved_309;
char* sname_saved_310;
void* __right_value317 = (void*)0;
char* __dec_obj138;
char* __dec_obj139;
struct map$2charphcharph* __dec_obj140;
char* p_313;
int sline_314;
char* sname_315;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* module_name_316;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1charph* params_317;
void* __right_value322 = (void*)0;
char* word_318;
void* __right_value323 = (void*)0;
char* __dec_obj141;
void* __right_value324 = (void*)0;
char* __dec_obj142;
void* __right_value325 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result239__;
void* __right_value326 = (void*)0;
struct sClassModule* module_322;
void* __right_value327 = (void*)0;
void* __right_value333 = (void*)0;
struct map$2charphcharph* __dec_obj148;
int i_326;
struct list$1charph* o2_saved_327;
char* it_330;
void* __right_value334 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* __dec_obj149;
void* __right_value343 = (void*)0;
struct sNode* node_377;
void* __right_value344 = (void*)0;
char* __dec_obj150;
_Bool omit_semicolon_381;
void* __right_value348 = (void*)0;
char* __dec_obj154;
char* head_396;
void* __right_value349 = (void*)0;
struct sNode* value_397;
char* tail_398;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj155;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* node_400;
void* __right_value353 = (void*)0;
char* __dec_obj156;
struct sNode* node_401;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj160;
_Bool omit_semicolon_403;
char* p_404;
char* head_405;
void* __right_value360 = (void*)0;
char* source_406;
void* __right_value361 = (void*)0;
struct sNode* node_407;
struct sBlock* __result277__;
node_401 = (void*)0;
    result_305=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_306=info->sline_top;
    info->sline_top=info->sline;
    block_level_307=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_308=((void*)0);
        sline_saved_309=0;
        sname_saved_310=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_308) {
                if(                *info->p==0) {
                    info->p=p_saved_308;
                    info->sline=sline_saved_309;
                    __dec_obj138=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_310));
                    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_308=((void*)0);
                    sline_saved_309=0;
                    __dec_obj139=sname_saved_310;
                    sname_saved_310=((void*)0);
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
            p_313=info->p;
            sline_314=info->sline;
            sname_315=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_314;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value318=parse_word(info)));
                __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_316=(char*)come_increment_ref_count(parse_word(info));
                params_317=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 215, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_318=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_317,(char*)come_increment_ref_count(word_318));
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
                            word_318 = come_decrement_ref_count2(word_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_318 = come_decrement_ref_count2(word_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_308=info->p;
                sline_saved_309=info->sline;
                __dec_obj141=sname_saved_310;
                sname_saved_310=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj142=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_316));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value325=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_316)))==((void*)0))),                come_call_finalizer3(__right_value325,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result239__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_316 = come_decrement_ref_count2(module_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_310 = come_decrement_ref_count2(sname_saved_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_305,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result239__;
                }
                module_322=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value326=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_316))), "05function.c", 262, 0));
                come_call_finalizer3(__right_value326,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_322->mParams)!=list$1charph_length(params_317)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj148=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj148,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_326=0;
                for(                o2_saved_327=(struct list$1charph*)come_increment_ref_count((module_322->mParams)),it_330=list$1charph_begin((o2_saved_327));                !list$1charph_end((o2_saved_327));                it_330=list$1charph_next((o2_saved_327))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_330)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value340=list$1charphp_operator_load_element(params_317,i_326))), "05function.c", 273, 1)))));
                    __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_326++;
                }
                come_call_finalizer3(o2_saved_327,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_322->mText;
                info->sline=module_322->mSLine;
                __dec_obj149=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_322->mSName));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_316 = come_decrement_ref_count2(module_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_377=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj150=info->sname;
            info->sname=(char*)come_increment_ref_count(node_377->sname(node_377->_protocol_obj));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_377->sline(node_377->_protocol_obj);
            if(            node_377==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_305->mNodes,(struct sNode*)come_increment_ref_count(node_377));
            parse_sharp_v5(info);
            if(            node_377->terminated(node_377->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_381=(_Bool)1;
            if(            node_377->terminated(node_377->_protocol_obj)) {
                omit_semicolon_381=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_381=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_305->mOmitSemicolon=omit_semicolon_381;
                if(                omit_semicolon_381&&in_function) {
                    list$1sNodeph_delete(result_305->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_313;
                    info->sline=sline_314;
                    __dec_obj154=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_315));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_396=info->p;
                    value_397=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_398=info->p;
                    __dec_obj155=value_397;
                    value_397=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_397),info));
                    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_399[tail_398-head_396+1];
                    memset(&buf_399, 0, sizeof(char)                    *(tail_398-head_396+1)                    );
                    memcpy(buf_399,head_396,tail_398-head_396);
                    buf_399[tail_398-head_396]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_400=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_397),(char*)come_increment_ref_count(__builtin_string(buf_399)),info));
                    list$1sNodeph_push_back(result_305->mNodes,(struct sNode*)come_increment_ref_count(node_400));
                    if(value_397) { value_397 = come_decrement_ref_count2(value_397, ((struct sNode*)value_397)->finalize, ((struct sNode*)value_397)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_377) { node_377 = come_decrement_ref_count2(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_397) { value_397 = come_decrement_ref_count2(value_397, ((struct sNode*)value_397)->finalize, ((struct sNode*)value_397)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_377) { node_377 = come_decrement_ref_count2(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_377) { node_377 = come_decrement_ref_count2(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_308) {
            if(            info->p==0) {
                info->p=p_saved_308;
                info->sline=sline_saved_309;
                __dec_obj156=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_310));
                __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_308=((void*)0);
                sline_saved_309=0;
            }
        }
        sname_saved_310 = come_decrement_ref_count2(sname_saved_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 373, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value355=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 373, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj159=node_401;
            node_401=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value355,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_305->mNodes,(struct sNode*)come_increment_ref_count(node_401));
        }
        else {
            __dec_obj160=node_401;
            node_401=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_401==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_401->terminated(node_401->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_403=(_Bool)1;
            if(            node_401->terminated(node_401->_protocol_obj)) {
                omit_semicolon_403=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_403=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_305->mOmitSemicolon=omit_semicolon_403;
            list$1sNodeph_push_back(result_305->mNodes,(struct sNode*)come_increment_ref_count(node_401));
        }
        if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_404=info->p;
        head_405=info->head;
        source_406=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_406;
        info->head=source_406;
        node_407=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_407==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_305->mNodes,(struct sNode*)come_increment_ref_count(node_407));
        info->p=p_404;
        info->head=head_405;
        source_406 = come_decrement_ref_count2(source_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_407) { node_407 = come_decrement_ref_count2(node_407, ((struct sNode*)node_407)->finalize, ((struct sNode*)node_407)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_307;
    __result277__ = gComeFunResultObject = __result_obj__ = result_305;
    come_call_finalizer3(result_305,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_311;
int i_312;
    for(    i_311=0;    i_311<self->size;    i_311++    ){
        if(        self->item_existance[i_311]) {
            if(            1) {
                self->items[i_311] = come_decrement_ref_count2(self->items[i_311], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_312=0;    i_312<self->size;    i_312++    ){
        if(        self->item_existance[i_312]) {
            if(            1) {
                self->keys[i_312] = come_decrement_ref_count2(self->keys[i_312], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_319;
unsigned int hash_320;
unsigned int it_321;
struct sClassModule* __result235__;
struct sClassModule* __result236__;
struct sClassModule* __result237__;
struct sClassModule* __result238__;
default_value_319 = (void*)0;
    memset(&default_value_319,0,sizeof(struct sClassModule*));
    hash_320=charp_get_hash_key(((char*)key))%self->size;
    it_321=hash_320;
    while((_Bool)1) {
        if(        self->item_existance[it_321]) {
            if(            charp_equals(self->keys[it_321],key)) {
                __result235__ = gComeFunResultObject = __result_obj__ = self->items[it_321];
                come_call_finalizer3(default_value_319,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            it_321++;
            if(            it_321>=self->size) {
                it_321=0;
            }
            else if(            it_321==hash_320) {
                __result236__ = gComeFunResultObject = __result_obj__ = default_value_319;
                come_call_finalizer3(default_value_319,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
        }
        else {
            __result237__ = gComeFunResultObject = __result_obj__ = default_value_319;
            come_call_finalizer3(default_value_319,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = default_value_319;
    come_call_finalizer3(default_value_319,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
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
int i_323;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charp* __dec_obj147;
struct map$2charphcharph* __result241__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2329, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value329=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2330, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value330=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2331, "bool"))));
    for(    i_323=0;    i_323<128;    i_323++    ){
        self->item_existance[i_323]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj147=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj147,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result240__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_324;
int i_325;
    for(    i_324=0;    i_324<self->size;    i_324++    ){
        if(        self->item_existance[i_324]) {
            if(            1) {
                self->items[i_324] = come_decrement_ref_count2(self->items[i_324], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_325=0;    i_325<self->size;    i_325++    ){
        if(        self->item_existance[i_325]) {
            if(            1) {
                self->keys[i_325] = come_decrement_ref_count2(self->keys[i_325], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_350;
unsigned int it_351;
_Bool same_key_exist_368;
char* it2_371;
struct map$2charphcharph* __result268__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_350=charp_get_hash_key(key)%self->size;
    it_351=hash_350;
    while((_Bool)1) {
        if(        self->item_existance[it_351]) {
            if(            charp_equals(self->keys[it_351],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_351]);
                    self->keys[it_351] = come_decrement_ref_count2(self->keys[it_351], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_351]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_351]);
                    self->keys[it_351]=key;
                }
                if(                1) {
                    self->items[it_351] = come_decrement_ref_count2(self->items[it_351], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_351]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_351]=item;
                }
                break;
            }
            it_351++;
            if(            it_351>=self->size) {
                it_351=0;
            }
            else if(            it_351==hash_350) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_351]=(_Bool)1;
            if(            1) {
                self->keys[it_351]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_351]=key;
            }
            if(            1) {
                self->items[it_351]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_351]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_368=(_Bool)0;
    for(    it2_371=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_371=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_371,key)) {
            same_key_exist_368=(_Bool)1;
        }
    }
    if(    !same_key_exist_368) {
        list$1charp_push_back(self->key_list,key);
    }
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_333;
void* __right_value335 = (void*)0;
char** keys_334;
void* __right_value336 = (void*)0;
char** items_335;
void* __right_value337 = (void*)0;
_Bool* item_existance_336;
int len_337;
char* it_340;
char* default_value_343;
void* __right_value338 = (void*)0;
char* it2_344;
unsigned int hash_347;
int n_348;
char* default_value_349;
void* __right_value339 = (void*)0;
default_value_343 = (void*)0;
default_value_349 = (void*)0;
    size_333=self->size*10;
    keys_334=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(size_333)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_335=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(size_333)), "/usr/local/include/comelang.h", 2558, "char*%"))));
    item_existance_336=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value337=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_333)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_337=0;
    for(    it_340=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_340=map$2charphcharph_next(self)    ){
        memset(&default_value_343,0,sizeof(char*));
        it2_344=((char*)(__right_value338=map$2charphcharph_at(self,it_340,default_value_343)));
        __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_347=charp_get_hash_key(it_340)%size_333;
        n_348=hash_347;
        while((_Bool)1) {
            if(            item_existance_336[n_348]) {
                n_348++;
                if(                n_348>=size_333) {
                    n_348=0;
                }
                else if(                n_348==hash_347) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_336[n_348]=(_Bool)1;
                keys_334[n_348]=it_340;
                items_335[n_348]=((char*)(__right_value339=map$2charphcharph_at(self,it_340,default_value_349)));
                __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_337++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_334;
    self->items=items_335;
    self->item_existance=item_existance_336;
    self->size=size_333;
    self->len=len_337;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
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
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_339,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_341;
char* __result251__;
char* __result252__;
char* result_342;
char* __result253__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_342,0,sizeof(char*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_345;
unsigned int it_346;
char* __result254__;
char* __result255__;
char* __result256__;
char* __result257__;
    hash_345=charp_get_hash_key(((char*)key))%self->size;
    it_346=hash_345;
    while((_Bool)1) {
        if(        self->item_existance[it_346]) {
            if(            charp_equals(self->keys[it_346],key)) {
                __result254__ = gComeFunResultObject = __result_obj__ = self->items[it_346];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
            it_346++;
            if(            it_346>=self->size) {
                it_346=0;
            }
            else if(            it_346==hash_345) {
                __result255__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
        }
        else {
            __result256__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result256__;
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_352;
struct list_item$1charp* it_353;
struct list$1charp* __result261__;
    it2_352=0;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        if(        charp_equals(it_353->item,item)) {
            list$1charp_delete(self,it2_352,it2_352+1);
            break;
        }
        it2_352++;
        it_353=it_353->next;
    }
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_354;
struct list$1charp* __result258__;
struct list_item$1charp* it_357;
int i_358;
struct list_item$1charp* prev_it_359;
struct list_item$1charp* it_360;
int i_361;
struct list_item$1charp* prev_it_362;
struct list_item$1charp* it_363;
struct list_item$1charp* head_prev_it_364;
struct list_item$1charp* tail_it_365;
int i_366;
struct list_item$1charp* prev_it_367;
struct list$1charp* __result260__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_354=tail;
        tail=head;
        head=tmp_354;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result258__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_357=self->head;
        i_358=0;
        while(it_357!=((void*)0)) {
            if(            i_358<tail) {
                prev_it_359=it_357;
                it_357=it_357->next;
                i_358++;
                come_call_finalizer3(prev_it_359,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_358==tail) {
                self->head=it_357;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_357=it_357->next;
                i_358++;
            }
        }
    }
    else if(    tail==self->len) {
        it_360=self->head;
        i_361=0;
        while(it_360!=((void*)0)) {
            if(            i_361==head) {
                self->tail=it_360->prev;
                self->tail->next=((void*)0);
            }
            if(            i_361>=head) {
                prev_it_362=it_360;
                it_360=it_360->next;
                i_361++;
                come_call_finalizer3(prev_it_362,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_360=it_360->next;
                i_361++;
            }
        }
    }
    else {
        it_363=self->head;
        head_prev_it_364=((void*)0);
        tail_it_365=((void*)0);
        i_366=0;
        while(it_363!=((void*)0)) {
            if(            i_366==head) {
                head_prev_it_364=it_363->prev;
            }
            if(            i_366==tail) {
                tail_it_365=it_363;
            }
            if(            i_366>=head&&i_366<tail) {
                prev_it_367=it_363;
                it_363=it_363->next;
                i_366++;
                come_call_finalizer3(prev_it_367,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_363=it_363->next;
                i_366++;
            }
        }
        if(        head_prev_it_364!=((void*)0)) {
            head_prev_it_364->next=tail_it_365;
        }
        if(        tail_it_365!=((void*)0)) {
            tail_it_365->prev=head_prev_it_364;
        }
    }
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_355;
struct list_item$1charp* prev_it_356;
struct list$1charp* __result259__;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_369;
char* __result262__;
char* __result263__;
char* result_370;
char* __result264__;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_369,0,sizeof(char*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_369;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->head;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_370,0,sizeof(char*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_370;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_372;
char* __result265__;
char* __result266__;
char* result_373;
char* __result267__;
result_372 = (void*)0;
result_373 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_372,0,sizeof(char*));
        __result265__ = gComeFunResultObject = __result_obj__ = result_372;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result266__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    memset(&result_373,0,sizeof(char*));
    __result267__ = gComeFunResultObject = __result_obj__ = result_373;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_374;
int i_375;
char* __result269__;
char* default_value_376;
char* __result270__;
default_value_376 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_374=self->head;
    i_375=0;
    while(it_374!=((void*)0)) {
        if(        position==i_375) {
            __result269__ = gComeFunResultObject = __result_obj__ = it_374->item;
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
        it_374=it_374->next;
        i_375++;
    }
    memset(&default_value_376,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = default_value_376;
    default_value_376 = come_decrement_ref_count2(default_value_376, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
struct list_item$1sNodeph* litem_378;
struct sNode* __dec_obj151;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_379;
struct sNode* __dec_obj152;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_380;
struct sNode* __dec_obj153;
struct list$1sNodeph* __result271__;
    if(    self->len==0) {
        litem_378=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sNodeph"))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj151=litem_378->item;
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sNodeph"))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj152=litem_379->item;
        litem_379->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sNodeph"))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj153=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_382;
struct list$1sNodeph* __result272__;
struct list_item$1sNodeph* it_385;
int i_386;
struct list_item$1sNodeph* prev_it_387;
struct list_item$1sNodeph* it_388;
int i_389;
struct list_item$1sNodeph* prev_it_390;
struct list_item$1sNodeph* it_391;
struct list_item$1sNodeph* head_prev_it_392;
struct list_item$1sNodeph* tail_it_393;
int i_394;
struct list_item$1sNodeph* prev_it_395;
struct list$1sNodeph* __result274__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_382=tail;
        tail=head;
        head=tmp_382;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result272__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_385=self->head;
        i_386=0;
        while(it_385!=((void*)0)) {
            if(            i_386<tail) {
                prev_it_387=it_385;
                it_385=it_385->next;
                i_386++;
                come_call_finalizer3(prev_it_387,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_386==tail) {
                self->head=it_385;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_385=it_385->next;
                i_386++;
            }
        }
    }
    else if(    tail==self->len) {
        it_388=self->head;
        i_389=0;
        while(it_388!=((void*)0)) {
            if(            i_389==head) {
                self->tail=it_388->prev;
                self->tail->next=((void*)0);
            }
            if(            i_389>=head) {
                prev_it_390=it_388;
                it_388=it_388->next;
                i_389++;
                come_call_finalizer3(prev_it_390,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_388=it_388->next;
                i_389++;
            }
        }
    }
    else {
        it_391=self->head;
        head_prev_it_392=((void*)0);
        tail_it_393=((void*)0);
        i_394=0;
        while(it_391!=((void*)0)) {
            if(            i_394==head) {
                head_prev_it_392=it_391->prev;
            }
            if(            i_394==tail) {
                tail_it_393=it_391;
            }
            if(            i_394>=head&&i_394<tail) {
                prev_it_395=it_391;
                it_391=it_391->next;
                i_394++;
                come_call_finalizer3(prev_it_395,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_391=it_391->next;
                i_394++;
            }
        }
        if(        head_prev_it_392!=((void*)0)) {
            head_prev_it_392->next=tail_it_393;
        }
        if(        tail_it_393!=((void*)0)) {
            tail_it_393->prev=head_prev_it_392;
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_383;
struct list_item$1sNodeph* prev_it_384;
struct list$1sNodeph* __result273__;
    it_383=self->head;
    while(it_383!=((void*)0)) {
        prev_it_384=it_383;
        it_383=it_383->next;
        come_call_finalizer3(prev_it_384,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result273__;
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
struct sSemicolonNode* __result275__;
void* __right_value356 = (void*)0;
struct sSemicolonNode* result_402;
void* __right_value357 = (void*)0;
char* __dec_obj158;
struct sSemicolonNode* __result276__;
    if(    self==(void*)0) {
        __result275__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_402=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_402->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj158=result_402->sname;
        result_402->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_402->sline_real=self->sline_real;
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_402;
    come_call_finalizer3(result_402,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_408;
struct sVarTable* old_table_409;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sVarTable* __dec_obj161;
struct sVarTable* current_loop_vtable_410;
struct list$1sTypeph* param_types__411;
struct list$1charph* param_names__412;
int i_413;
struct list$1charph* o2_saved_414;
char* name_415;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* type_416;
void* __right_value366 = (void*)0;
int block_level_420;
int i_421;
struct list$1sNodeph* o2_saved_422;
struct sNode* node_425;
struct list$1sRightValueObjectph* right_value_objects_428;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj166;
char* __dec_obj167;
char* __dec_obj168;
int stack_num_before_433;
int sline_434;
void* __right_value369 = (void*)0;
char* sname_435;
void* __right_value370 = (void*)0;
char* __dec_obj169;
_Bool Value_436;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value376 = (void*)0;
struct CVALUE* come_value2_438;
void* __right_value377 = (void*)0;
char* __dec_obj173;
void* __right_value378 = (void*)0;
struct CVALUE* come_value2_440;
struct sVar* var__441;
void* __right_value379 = (void*)0;
struct CVALUE* come_value3_442;
void* __right_value380 = (void*)0;
_Bool _if_conditional2;
void* __right_value381 = (void*)0;
struct sType* __dec_obj174;
void* __right_value382 = (void*)0;
char* c_value_447;
void* __right_value383 = (void*)0;
char* __dec_obj175;
void* __right_value384 = (void*)0;
char* __dec_obj176;
void* __right_value385 = (void*)0;
char* __dec_obj177;
_Bool Value_448;
void* __right_value386 = (void*)0;
char* __dec_obj178;
struct list$1sRightValueObjectph* __dec_obj179;
void* __if_result__0_451 = (void*)0;
struct list$1sVarph* o2_saved_452;
struct sVar* it_455;
struct list$1sVarph* __dec_obj185;
memset(&i_413, 0, sizeof(int));
memset(&i_421, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_408=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_409=info->lv_table;
    if(    !no_var_table) {
        __dec_obj161=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "sVarTable")),(_Bool)0,old_table_409));
        come_call_finalizer3(__dec_obj161,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_410=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__411=info->param_types;
    param_names__412=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_414=(param_names),name_415=list$1charph_begin((o2_saved_414));        !list$1charph_end((o2_saved_414));        name_415=list$1charph_next((o2_saved_414))        ){
            type_416=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value364=list$1sTypephp_operator_load_element(param_types,i_413))), "05function.c", 465, 2))));
            come_call_finalizer3(__right_value364,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_416->mFunctionParam=(_Bool)1;
            type_416->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_415,(struct sType*)come_increment_ref_count(sType_clone(type_416)),info);
            i_413++;
            come_call_finalizer3(type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_420=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_422=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_425=list$1sNodeph_begin((o2_saved_422));        !list$1sNodeph_end((o2_saved_422));        node_425=list$1sNodeph_next((o2_saved_422))        ){
            right_value_objects_428=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj166=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj166,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj167=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj168=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_433=list$1CVALUEph_length(info->stack);
            sline_434=info->sline;
            sname_435=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_425->sline(node_425->_protocol_obj);
            __dec_obj169=info->sname;
            info->sname=(char*)come_increment_ref_count(node_425->sname(node_425->_protocol_obj));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_421==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_436=node_compile(node_425,info);
                if(                !Value_436) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_433+1) {
                    come_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_437->type->mClass->mName,"void")&&come_value_437->type->mPointerNum==0) {
                        come_value2_438=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_437));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_438));
                        __dec_obj173=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_438->c_value));
                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_440=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_437));
                        var__441=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__441) {
                            come_value3_442=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "CVALUE"));
                            if(                            var__441->mType->mClass=="void"&&var__441->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__441->mType,((struct sType*)(__right_value380=sType_clone(come_value_437->type))),come_value3_442,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj174=var__441->mType;
                            var__441->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_437->type));
                            come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_437->type->mHeap) {
                                c_value_447=(char*)come_increment_ref_count(increment_ref_count_object(come_value_437->type,come_value_437->c_value,info));
                                __dec_obj175=come_value2_440->c_value;
                                come_value2_440->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__441->mCValueName,c_value_447));
                                __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_447 = come_decrement_ref_count2(c_value_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj176=come_value2_440->c_value;
                                come_value2_440->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__441->mCValueName,come_value_437->c_value));
                                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_440));
                        __dec_obj177=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_440->c_value));
                        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_448=node_compile(node_425,info);
                if(                !Value_448) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_434;
            __dec_obj178=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_435));
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_433);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj179=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_428);
            come_call_finalizer3(__dec_obj179,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_421++;
            come_call_finalizer3(right_value_objects_428,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_435 = come_decrement_ref_count2(sname_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_422,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_420==0) {
            for(            o2_saved_452=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_455=list$1sVarph_begin((o2_saved_452));            !list$1sVarph_end((o2_saved_452));            it_455=list$1sVarph_next((o2_saved_452))            ){
                free_object(it_455->mType,it_455->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_452,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj185=info->match_it_var;
            __if_result__0_451=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj185,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_451,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_409;
    info->block_level=block_level_420;
    info->param_types=param_types__411;
    info->param_names=param_names__412;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_410;
    info->inhibits_output_code=inhibits_output_code_408;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_417;
int i_418;
struct sType* __result278__;
struct sType* default_value_419;
struct sType* __result279__;
default_value_419 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_417=self->head;
    i_418=0;
    while(it_417!=((void*)0)) {
        if(        position==i_418) {
            __result278__ = gComeFunResultObject = __result_obj__ = it_417->item;
            gComeFunResultObject = (void*)0;
            return __result278__;
        }
        it_417=it_417->next;
        i_418++;
    }
    memset(&default_value_419,0,sizeof(struct sType*));
    __result279__ = gComeFunResultObject = __result_obj__ = default_value_419;
    come_call_finalizer3(default_value_419,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_423;
struct sNode* __result280__;
struct sNode* __result281__;
struct sNode* result_424;
struct sNode* __result282__;
result_423 = (void*)0;
result_424 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_423,0,sizeof(struct sNode*));
        __result280__ = gComeFunResultObject = __result_obj__ = result_423;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    self->it=self->head;
    if(    self->it) {
        __result281__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    memset(&result_424,0,sizeof(struct sNode*));
    __result282__ = gComeFunResultObject = __result_obj__ = result_424;
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_426;
struct sNode* __result283__;
struct sNode* __result284__;
struct sNode* result_427;
struct sNode* __result285__;
result_426 = (void*)0;
result_427 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_426,0,sizeof(struct sNode*));
        __result283__ = gComeFunResultObject = __result_obj__ = result_426;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result284__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    memset(&result_427,0,sizeof(struct sNode*));
    __result285__ = gComeFunResultObject = __result_obj__ = result_427;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result286__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_429;
struct list_item$1sRightValueObjectph* prev_it_430;
    it_429=self->head;
    while(it_429!=((void*)0)) {
        prev_it_430=it_429;
        it_429=it_429->next;
        come_call_finalizer3(prev_it_430,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_431;
struct list_item$1sRightValueObjectph* prev_it_432;
    it_431=self->head;
    while(it_431!=((void*)0)) {
        prev_it_432=it_431;
        it_431=it_431->next;
        come_call_finalizer3(prev_it_432,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result287__;
void* __right_value372 = (void*)0;
struct CVALUE* result_439;
void* __right_value373 = (void*)0;
char* __dec_obj170;
void* __right_value374 = (void*)0;
struct sType* __dec_obj171;
void* __right_value375 = (void*)0;
char* __dec_obj172;
struct CVALUE* __result288__;
    if(    self==(void*)0) {
        __result287__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    result_439=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj170=result_439->c_value;
        result_439->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj171=result_439->type;
        result_439->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_439->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj172=result_439->c_value_without_right_value_objects;
        result_439->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_439;
    come_call_finalizer3(result_439,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
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
    if(    !list$1objectph_equals(left->mFields,right->mFields)) {
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

static _Bool list$1objectph_equals(struct list$1objectph* left, struct list$1objectph* right){
struct list_item$1objectph* it_443;
struct list_item$1objectph* it2_444;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_443=left->head;
    it2_444=right->head;
    while(it_443!=((void*)0)) {
        if(        !object_equals(it_443->item,it2_444->item)) {
            return (_Bool)0;
        }
        it_443=it_443->next;
        it2_444=it2_444->next;
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
    if(    list$1objectphp_operator_not_equals(left->mFields,right->mFields)) {
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

static _Bool list$1objectphp_operator_not_equals(struct list$1objectph* left, struct list$1objectph* right){
    return !list$1objectph_operator_equals(left,right);
}

static _Bool list$1objectph_operator_equals(struct list$1objectph* left, struct list$1objectph* right){
struct list_item$1objectph* it_445;
struct list_item$1objectph* it2_446;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_445=left->head;
    it2_446=right->head;
    while(it_445!=((void*)0)) {
        if(        !(object_operator_equals(it_445->item,it2_446->item))) {
            return (_Bool)0;
        }
        it_445=it_445->next;
        it2_446=it2_446->next;
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

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_449;
struct list_item$1sRightValueObjectph* prev_it_450;
struct list$1sRightValueObjectph* __result289__;
    it_449=self->head;
    while(it_449!=((void*)0)) {
        prev_it_450=it_449;
        it_449=it_449->next;
        come_call_finalizer3(prev_it_450,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_453;
struct sVar* __result290__;
struct sVar* __result291__;
struct sVar* result_454;
struct sVar* __result292__;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_453,0,sizeof(struct sVar*));
        __result290__ = gComeFunResultObject = __result_obj__ = result_453;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    self->it=self->head;
    if(    self->it) {
        __result291__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    memset(&result_454,0,sizeof(struct sVar*));
    __result292__ = gComeFunResultObject = __result_obj__ = result_454;
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_456;
struct sVar* __result293__;
struct sVar* __result294__;
struct sVar* result_457;
struct sVar* __result295__;
result_456 = (void*)0;
result_457 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_456,0,sizeof(struct sVar*));
        __result293__ = gComeFunResultObject = __result_obj__ = result_456;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result294__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    memset(&result_457,0,sizeof(struct sVar*));
    __result295__ = gComeFunResultObject = __result_obj__ = result_457;
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_458;
struct list_item$1sVarph* prev_it_459;
    it_458=self->head;
    while(it_458!=((void*)0)) {
        prev_it_459=it_458;
        it_458=it_458->next;
        come_call_finalizer3(prev_it_459,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sVarph* it_460;
struct list_item$1sVarph* prev_it_461;
    it_460=self->head;
    while(it_460!=((void*)0)) {
        prev_it_461=it_460;
        it_460=it_460->next;
        come_call_finalizer3(prev_it_461,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_462;
_Bool dquort_463;
_Bool squort_464;
int sline_465;
int nest_466;
char* tail_467;
void* __right_value387 = (void*)0;
char* buf_468;
void* __right_value388 = (void*)0;
char* __result296__;
    head_462=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_463=(_Bool)0;
        squort_464=(_Bool)0;
        sline_465=0;
        nest_466=0;
        while(1) {
            if(            dquort_463) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_463=!dquort_463;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465);
                        exit(2);
                    }
                }
            }
            else if(            squort_464) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_464=!squort_464;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_465=info->sline;
                info->p++;
                squort_464=!squort_464;
            }
            else if(            *info->p==34) {
                sline_465=info->sline;
                info->p++;
                dquort_463=!dquort_463;
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
                nest_466++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_466==0) {
                    break;
                }
                nest_466--;
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
    tail_467=info->p;
    buf_468=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_467-head_462+1)), "05function.c", 757, "char"));
    memcpy(buf_468,head_462,tail_467-head_462);
    buf_468[tail_467-head_462]=0;
    skip_spaces_and_lf(info);
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string(buf_468)));
    buf_468 = come_decrement_ref_count2(buf_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_469;
char* p3_470;
int i_471;
    terminated_469=(_Bool)0;
    p3_470=p;
    for(    i_471=0;    i_471<strlen(p2);    i_471++    ){
        if(        *p3_470==0) {
            terminated_469=(_Bool)1;
            break;
        }
        p3_470++;
    }
    return !terminated_469&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* asm_fun_name_472;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* result_473;
char* head_474;
int brace_num_475;
char* tail_476;
char* head_477;
int brace_num_478;
char* tail_479;
char* head_480;
char* tail_481;
char* head_482;
char* tail_483;
int len_484;
_Bool in_dquort_485;
int brace_num_486;
char* head_487;
char* tail_488;
char* head_489;
char* tail_490;
char* head_491;
char* tail_492;
char* head_493;
int nest_494;
char* tail_495;
char* head_496;
int nest_497;
char* tail_498;
char* head_499;
int nest_500;
char* tail_501;
char* head_502;
int nest_503;
char* tail_504;
char* head_505;
int nest_506;
char* tail_507;
char* head_508;
char* tail_509;
char* head_510;
char* tail_511;
char* head_512;
char* tail_513;
char* head_514;
char* tail_515;
char* head_516;
char* tail_517;
char* head_518;
int brace_num_519;
char* tail_520;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple2$2charphcharph* __result298__;
    asm_fun_name_472=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "buffer"))));
    result_473=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 783, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_474=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_475=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_475++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_475--;
                        if(                        brace_num_475==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_476=info->p;
            buffer_append(result_473,head_474,tail_476-head_474);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_477=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_478=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_478++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_478--;
                        if(                        brace_num_478==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_479=info->p;
            buffer_append(result_473,head_477,tail_479-head_477);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_480=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_481=info->p;
            buffer_append(result_473,head_480,tail_481-head_480);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_482=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_483=info->p;
            buffer_append(result_473,head_482,tail_483-head_482);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_484=0;
            if(            *info->p==40) {
                in_dquort_485=(_Bool)0;
                brace_num_486=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_485=!in_dquort_485;
                    }
                    else if(                    in_dquort_485) {
                        buffer_append_char(asm_fun_name_472,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
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
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_487=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_488=info->p;
            buffer_append(result_473,head_487,tail_488-head_487);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_489=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_490=info->p;
            buffer_append(result_473,head_489,tail_490-head_489);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_491=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_492=info->p;
            buffer_append(result_473,head_491,tail_492-head_491);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_493=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_494=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_494++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_494--;
                        if(                        nest_494==0) {
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
            tail_495=info->p;
            buffer_append(result_473,head_493,tail_495-head_493);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_496=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_497=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_497++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_497--;
                        if(                        nest_497==0) {
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
            tail_498=info->p;
            buffer_append(result_473,head_496,tail_498-head_496);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_499=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_500=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_500++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_500--;
                        if(                        nest_500==0) {
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
            tail_501=info->p;
            buffer_append(result_473,head_499,tail_501-head_499);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_502=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_503=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_503++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_503--;
                        if(                        nest_503==0) {
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
            tail_504=info->p;
            buffer_append(result_473,head_502,tail_504-head_502);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_505=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_506=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_506++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_506--;
                        if(                        nest_506==0) {
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
            tail_507=info->p;
            buffer_append(result_473,head_505,tail_507-head_505);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_508=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_509=info->p;
            buffer_append(result_473,head_508,tail_509-head_508);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_510=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_511=info->p;
            buffer_append(result_473,head_510,tail_511-head_510);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_512=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_513=info->p;
            buffer_append(result_473,head_512,tail_513-head_512);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_514=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_515=info->p;
            buffer_append(result_473,head_514,tail_515-head_514);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_516=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_517=info->p;
            buffer_append(result_473,head_516,tail_517-head_516);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_518=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_519=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_519++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_519--;
                        if(                        brace_num_519==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_520=info->p;
            buffer_append(result_473,head_518,tail_520-head_518);
        }
        else {
            break;
        }
    }
    __result298__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value396=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1197, "struct tuple2$2charphcharph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_472)),(char*)come_increment_ref_count(buffer_to_string(result_473)))));
    come_call_finalizer3(asm_fun_name_472,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_473,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value396,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj186;
char* __dec_obj187;
struct tuple2$2charphcharph* __result297__;
    __dec_obj186=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj187=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
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
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct buffer* asm_fun_name_521;
void* __right_value399 = (void*)0;
char* attribute_522;
int nest_523;
int nest_524;
int nest_525;
int nest_526;
int nest_527;
void* __right_value400 = (void*)0;
char* __dec_obj190;
int len_528;
_Bool in_dquort_529;
int brace_num_530;
int brace_num_531;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2charphcharph* __result299__;
    asm_fun_name_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1202, "buffer"))));
    attribute_522=(char*)come_increment_ref_count(xsprintf(""));
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
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_524=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524--;
                        if(                        nest_524==0) {
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
                nest_525=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_525++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_525--;
                        if(                        nest_525==0) {
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
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_527=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_527++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_527--;
                        if(                        nest_527==0) {
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
            __dec_obj190=attribute_522;
            attribute_522=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_528=0;
            if(            *info->p==40) {
                in_dquort_529=(_Bool)0;
                brace_num_530=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_529=!in_dquort_529;
                    }
                    else if(                    in_dquort_529) {
                        buffer_append_char(asm_fun_name_521,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_530++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_530--;
                        if(                        brace_num_530==0) {
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
                brace_num_531=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_531++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_531--;
                        if(                        brace_num_531==0) {
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
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value403=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1471, "struct tuple2$2charphcharph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_521)),(char*)come_increment_ref_count(attribute_522))));
    come_call_finalizer3(asm_fun_name_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_522 = come_decrement_ref_count2(attribute_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value403,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value404 = (void*)0;
char* __dec_obj191;
char* head_532;
int head_sline_533;
void* __right_value405 = (void*)0;
char* buf_534;
void* __right_value406 = (void*)0;
struct sNode* node_535;
_Bool Value_536;
    while(*info->p) {
        __dec_obj191=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(string_clone(info->sname));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_532=info->p;
        head_sline_533=info->sline;
        buf_534=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_534 = come_decrement_ref_count2(buf_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_535=(struct sNode*)come_increment_ref_count(top_level_v99(buf_534,head_532,head_sline_533,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_535!=((void*)0)) {
            Value_536=node_compile(node_535,info);
            if(            !Value_536) {
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
            buf_534 = come_decrement_ref_count2(buf_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_534 = come_decrement_ref_count2(buf_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_535) { node_535 = come_decrement_ref_count2(node_535, ((struct sNode*)node_535)->finalize, ((struct sNode*)node_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value407 = (void*)0;
char* name_537;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* result_type_538;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sType* __list_values1___539[5];
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1sTypeph* param_types_544;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
char* __list_values2___545[5];
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1charph* param_names_547;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1charph* param_default_parametors_548;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sFun* main_fun_549;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* name_571;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sType* result_type_572;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* __list_values3___573[1];
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1sTypeph* param_types_574;
void* __right_value456 = (void*)0;
char* __list_values4___575[1];
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1charph* param_names_576;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1charph* param_default_parametors_577;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sFun* main_fun_578;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* name_579;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* result_type_580;
void* __right_value471 = (void*)0;
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
struct sType* __list_values5___581[7];
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1sTypeph* param_types_582;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
char* __list_values6___583[7];
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct list$1charph* param_names_584;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1charph* param_default_parametors_585;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sFun* main_fun_586;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
char* name_587;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* result_type_588;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __list_values7___589[5];
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1sTypeph* param_types_590;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __list_values8___591[5];
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1charph* param_names_592;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1charph* param_default_parametors_593;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sFun* main_fun_594;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
char* name_595;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* result_type_596;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __list_values9___597[1];
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1sTypeph* param_types_598;
void* __right_value543 = (void*)0;
char* __list_values10___599[1];
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1charph* param_names_600;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1charph* param_default_parametors_601;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sFun* main_fun_602;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
char* name_603;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* result_type_604;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* __list_values11___605[4];
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1sTypeph* param_types_606;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
char* __list_values12___607[4];
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct list$1charph* param_names_608;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct list$1charph* param_default_parametors_609;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sFun* main_fun_610;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
char* name_611;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* result_type_612;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* __list_values13___613[3];
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct list$1sTypeph* param_types_614;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
char* __list_values14___615[3];
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1charph* param_names_616;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1charph* param_default_parametors_617;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sFun* main_fun_618;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
char* name_619;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sType* result_type_620;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __list_values15___621[1];
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1sTypeph* param_types_622;
void* __right_value618 = (void*)0;
char* __list_values16___623[1];
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct list$1charph* param_names_624;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct list$1charph* param_default_parametors_625;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sFun* main_fun_626;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
char* name_627;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sType* result_type_628;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sType* __list_values17___629[3];
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct list$1sTypeph* param_types_630;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
char* __list_values18___631[3];
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1charph* param_names_632;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1charph* param_default_parametors_633;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sFun* main_fun_634;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* name_635;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* result_type_636;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct list$1sTypeph* param_types_637;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* param_names_638;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1charph* param_default_parametors_639;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sFun* main_fun_640;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
char* name_641;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sType* result_type_642;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sType* __list_values19___643[4];
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1sTypeph* param_types_644;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
char* __list_values20___645[4];
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct list$1charph* param_names_646;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct list$1charph* param_default_parametors_647;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sFun* main_fun_648;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
char* name_649;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sType* result_type_650;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct list$1sTypeph* param_types_651;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1charph* param_names_652;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct list$1charph* param_default_parametors_653;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sFun* fun_654;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
char* name_655;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sType* result_type_656;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct list$1sTypeph* param_types_657;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1charph* param_names_658;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1charph* param_default_parametors_659;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* fun_660;
void* __right_value730 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_537=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_538=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1527, "sType")),"void*",(_Bool)0,info));
        param_types_544=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___539[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value411=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___539[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value413=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___539[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value415=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"char*",(_Bool)0,info)))),
__list_values1___539[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value417=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"int",(_Bool)0,info)))),
__list_values1___539[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value419=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1528, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1528, "struct list$1sTypeph")),5,__list_values1___539)));
        come_call_finalizer3(__right_value411,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value413,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value415,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value417,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_547=(struct list$1charph*)come_increment_ref_count((__list_values2___545[0]=(char*)come_increment_ref_count(((char*)(__right_value425=__builtin_string("count")))),
__list_values2___545[1]=(char*)come_increment_ref_count(((char*)(__right_value426=__builtin_string("size")))),
__list_values2___545[2]=(char*)come_increment_ref_count(((char*)(__right_value427=__builtin_string("sname")))),
__list_values2___545[3]=(char*)come_increment_ref_count(((char*)(__right_value428=__builtin_string("sline")))),
__list_values2___545[4]=(char*)come_increment_ref_count(((char*)(__right_value429=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1529, "struct list$1charph")),5,__list_values2___545)));
        __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_548=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1530, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_548,((void*)0));
        list$1charph_push_back(param_default_parametors_548,((void*)0));
        list$1charph_push_back(param_default_parametors_548,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_548,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_548,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_549=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1536, "sFun")),(char*)come_increment_ref_count(name_537),(struct sType*)come_increment_ref_count(result_type_538),(struct list$1sTypeph*)come_increment_ref_count(param_types_544),(struct list$1charph*)come_increment_ref_count(param_names_547),(struct list$1charph*)come_increment_ref_count(param_default_parametors_548),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_537)),(struct sFun*)come_increment_ref_count(main_fun_549));
        name_537 = come_decrement_ref_count2(name_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_547,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_548,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_549,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_571=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_572=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1547, "sType")),"void*",(_Bool)0,info));
        param_types_574=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___573[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value453=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1548, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1548, "struct list$1sTypeph")),1,__list_values3___573)));
        come_call_finalizer3(__right_value453,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_576=(struct list$1charph*)come_increment_ref_count((__list_values4___575[0]=(char*)come_increment_ref_count(((char*)(__right_value456=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1549, "struct list$1charph")),1,__list_values4___575)));
        __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_577=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1550, "list$1charph"))));
        main_fun_578=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1551, "sFun")),(char*)come_increment_ref_count(name_571),(struct sType*)come_increment_ref_count(result_type_572),(struct list$1sTypeph*)come_increment_ref_count(param_types_574),(struct list$1charph*)come_increment_ref_count(param_names_576),(struct list$1charph*)come_increment_ref_count(param_default_parametors_577),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_571)),(struct sFun*)come_increment_ref_count(main_fun_578));
        name_571 = come_decrement_ref_count2(name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_574,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_576,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_577,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_578,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_579=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_580=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1562, "sType")),"void",(_Bool)0,info));
        param_types_582=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___581[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value472=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___581[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value474=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___581[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value476=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___581[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value478=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"void*",(_Bool)0,info)))),
__list_values5___581[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value480=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
__list_values5___581[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
__list_values5___581[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1563, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1563, "struct list$1sTypeph")),7,__list_values5___581)));
        come_call_finalizer3(__right_value472,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value474,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value476,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value478,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value480,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_584=(struct list$1charph*)come_increment_ref_count((__list_values6___583[0]=(char*)come_increment_ref_count(((char*)(__right_value487=__builtin_string("fun")))),
__list_values6___583[1]=(char*)come_increment_ref_count(((char*)(__right_value488=__builtin_string("mem")))),
__list_values6___583[2]=(char*)come_increment_ref_count(((char*)(__right_value489=__builtin_string("protocol_fun")))),
__list_values6___583[3]=(char*)come_increment_ref_count(((char*)(__right_value490=__builtin_string("protocol_obj")))),
__list_values6___583[4]=(char*)come_increment_ref_count(((char*)(__right_value491=__builtin_string("call_finalizer_only")))),
__list_values6___583[5]=(char*)come_increment_ref_count(((char*)(__right_value492=__builtin_string("no_decrement")))),
__list_values6___583[6]=(char*)come_increment_ref_count(((char*)(__right_value493=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1564, "struct list$1charph")),7,__list_values6___583)));
        __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_585=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1565, "list$1charph"))));
        main_fun_586=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1566, "sFun")),(char*)come_increment_ref_count(name_579),(struct sType*)come_increment_ref_count(result_type_580),(struct list$1sTypeph*)come_increment_ref_count(param_types_582),(struct list$1charph*)come_increment_ref_count(param_names_584),(struct list$1charph*)come_increment_ref_count(param_default_parametors_585),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_579)),(struct sFun*)come_increment_ref_count(main_fun_586));
        name_579 = come_decrement_ref_count2(name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_582,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_584,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_585,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_586,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_587=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_588=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1577, "sType")),"void*",(_Bool)0,info));
        param_types_590=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___589[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value509=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___589[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value511=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___589[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value513=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"void*",(_Bool)0,info)))),
__list_values7___589[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value515=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"bool",(_Bool)0,info)))),
__list_values7___589[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value517=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1578, "struct list$1sTypeph")),5,__list_values7___589)));
        come_call_finalizer3(__right_value509,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value511,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value513,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value515,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_592=(struct list$1charph*)come_increment_ref_count((__list_values8___591[0]=(char*)come_increment_ref_count(((char*)(__right_value520=__builtin_string("mem")))),
__list_values8___591[1]=(char*)come_increment_ref_count(((char*)(__right_value521=__builtin_string("protocol_fun")))),
__list_values8___591[2]=(char*)come_increment_ref_count(((char*)(__right_value522=__builtin_string("protocol_obj")))),
__list_values8___591[3]=(char*)come_increment_ref_count(((char*)(__right_value523=__builtin_string("no_decrement")))),
__list_values8___591[4]=(char*)come_increment_ref_count(((char*)(__right_value524=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1579, "struct list$1charph")),5,__list_values8___591)));
        __right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_593=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1580, "list$1charph"))));
        main_fun_594=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1581, "sFun")),(char*)come_increment_ref_count(name_587),(struct sType*)come_increment_ref_count(result_type_588),(struct list$1sTypeph*)come_increment_ref_count(param_types_590),(struct list$1charph*)come_increment_ref_count(param_names_592),(struct list$1charph*)come_increment_ref_count(param_default_parametors_593),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_587)),(struct sFun*)come_increment_ref_count(main_fun_594));
        name_587 = come_decrement_ref_count2(name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_590,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_592,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_593,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_594,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_595=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_596=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "sType")),"void",(_Bool)0,info));
        param_types_598=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___597[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value540=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1593, "struct list$1sTypeph")),1,__list_values9___597)));
        come_call_finalizer3(__right_value540,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_600=(struct list$1charph*)come_increment_ref_count((__list_values10___599[0]=(char*)come_increment_ref_count(((char*)(__right_value543=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1594, "struct list$1charph")),1,__list_values10___599)));
        __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_601=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1595, "list$1charph"))));
        main_fun_602=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1596, "sFun")),(char*)come_increment_ref_count(name_595),(struct sType*)come_increment_ref_count(result_type_596),(struct list$1sTypeph*)come_increment_ref_count(param_types_598),(struct list$1charph*)come_increment_ref_count(param_names_600),(struct list$1charph*)come_increment_ref_count(param_default_parametors_601),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_595)),(struct sFun*)come_increment_ref_count(main_fun_602));
        name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_596,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_598,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_600,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_601,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_602,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_603=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_604=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1607, "sType")),"void*",(_Bool)0,info));
        param_types_606=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___605[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value559=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"void*",(_Bool)0,info)))),
__list_values11___605[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value561=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"char*",(_Bool)0,info)))),
__list_values11___605[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value563=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"int",(_Bool)0,info)))),
__list_values11___605[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value565=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1608, "struct list$1sTypeph")),4,__list_values11___605)));
        come_call_finalizer3(__right_value559,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value561,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value563,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value565,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_608=(struct list$1charph*)come_increment_ref_count((__list_values12___607[0]=(char*)come_increment_ref_count(((char*)(__right_value568=__builtin_string("block")))),
__list_values12___607[1]=(char*)come_increment_ref_count(((char*)(__right_value569=__builtin_string("sname")))),
__list_values12___607[2]=(char*)come_increment_ref_count(((char*)(__right_value570=__builtin_string("sline")))),
__list_values12___607[3]=(char*)come_increment_ref_count(((char*)(__right_value571=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1609, "struct list$1charph")),4,__list_values12___607)));
        __right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_609=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1610, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_609,((void*)0));
        list$1charph_push_back(param_default_parametors_609,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_609,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_609,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_610=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1615, "sFun")),(char*)come_increment_ref_count(name_603),(struct sType*)come_increment_ref_count(result_type_604),(struct list$1sTypeph*)come_increment_ref_count(param_types_606),(struct list$1charph*)come_increment_ref_count(param_names_608),(struct list$1charph*)come_increment_ref_count(param_default_parametors_609),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_603)),(struct sFun*)come_increment_ref_count(main_fun_610));
        name_603 = come_decrement_ref_count2(name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_606,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_608,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_609,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_610,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_611=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_612=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1626, "sType")),"void*",(_Bool)0,info));
        param_types_614=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___613[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value590=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"void*",(_Bool)0,info)))),
__list_values13___613[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value592=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"int",(_Bool)0,info)))),
__list_values13___613[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value594=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1627, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1627, "struct list$1sTypeph")),3,__list_values13___613)));
        come_call_finalizer3(__right_value590,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value592,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value594,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_616=(struct list$1charph*)come_increment_ref_count((__list_values14___615[0]=(char*)come_increment_ref_count(((char*)(__right_value597=__builtin_string("b")))),
__list_values14___615[1]=(char*)come_increment_ref_count(((char*)(__right_value598=__builtin_string("c")))),
__list_values14___615[2]=(char*)come_increment_ref_count(((char*)(__right_value599=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1628, "struct list$1charph")),3,__list_values14___615)));
        __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_617=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1629, "list$1charph"))));
        main_fun_618=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1630, "sFun")),(char*)come_increment_ref_count(name_611),(struct sType*)come_increment_ref_count(result_type_612),(struct list$1sTypeph*)come_increment_ref_count(param_types_614),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_611)),(struct sFun*)come_increment_ref_count(main_fun_618));
        name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_614,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_618,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_619=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_620=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1641, "sType")),"char*",(_Bool)0,info));
        param_types_622=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___621[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value615=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1642, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1642, "struct list$1sTypeph")),1,__list_values15___621)));
        come_call_finalizer3(__right_value615,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_624=(struct list$1charph*)come_increment_ref_count((__list_values16___623[0]=(char*)come_increment_ref_count(((char*)(__right_value618=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1643, "struct list$1charph")),1,__list_values16___623)));
        __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_625=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1644, "list$1charph"))));
        main_fun_626=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1645, "sFun")),(char*)come_increment_ref_count(name_619),(struct sType*)come_increment_ref_count(result_type_620),(struct list$1sTypeph*)come_increment_ref_count(param_types_622),(struct list$1charph*)come_increment_ref_count(param_names_624),(struct list$1charph*)come_increment_ref_count(param_default_parametors_625),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_619)),(struct sFun*)come_increment_ref_count(main_fun_626));
        name_619 = come_decrement_ref_count2(name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_622,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_624,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_625,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_626,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_627=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_628=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1703, "sType")),"void",(_Bool)0,info));
        param_types_630=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___629[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value634=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
__list_values17___629[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value636=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
__list_values17___629[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value638=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1704, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1704, "struct list$1sTypeph")),3,__list_values17___629)));
        come_call_finalizer3(__right_value634,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value636,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value638,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_632=(struct list$1charph*)come_increment_ref_count((__list_values18___631[0]=(char*)come_increment_ref_count(((char*)(__right_value641=xsprintf("come_malloc")))),
__list_values18___631[1]=(char*)come_increment_ref_count(((char*)(__right_value642=xsprintf("come_debug")))),
__list_values18___631[2]=(char*)come_increment_ref_count(((char*)(__right_value643=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1705, "struct list$1charph")),3,__list_values18___631)));
        __right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_633=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1706, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_633,((void*)0));
        main_fun_634=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1708, "sFun")),(char*)come_increment_ref_count(name_627),(struct sType*)come_increment_ref_count(result_type_628),(struct list$1sTypeph*)come_increment_ref_count(param_types_630),(struct list$1charph*)come_increment_ref_count(param_names_632),(struct list$1charph*)come_increment_ref_count(param_default_parametors_633),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_627)),(struct sFun*)come_increment_ref_count(main_fun_634));
        name_627 = come_decrement_ref_count2(name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_628,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_630,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_632,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_633,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_634,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_635=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_636=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1719, "sType")),"void",(_Bool)0,info));
        param_types_637=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1720, "list$1sTypeph"))));
        param_names_638=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1721, "list$1charph"))));
        param_default_parametors_639=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1722, "list$1charph"))));
        main_fun_640=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1723, "sFun")),(char*)come_increment_ref_count(name_635),(struct sType*)come_increment_ref_count(result_type_636),(struct list$1sTypeph*)come_increment_ref_count(param_types_637),(struct list$1charph*)come_increment_ref_count(param_names_638),(struct list$1charph*)come_increment_ref_count(param_default_parametors_639),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_635)),(struct sFun*)come_increment_ref_count(main_fun_640));
        name_635 = come_decrement_ref_count2(name_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_637,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_638,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_639,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_640,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_641=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_642=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1734, "sType")),"void*",(_Bool)0,info));
        param_types_644=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___643[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value675=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"void*",(_Bool)0,info)))),
__list_values19___643[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value677=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"char*",(_Bool)0,info)))),
__list_values19___643[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value679=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"int",(_Bool)0,info)))),
__list_values19___643[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value681=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1735, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1735, "struct list$1sTypeph")),4,__list_values19___643)));
        come_call_finalizer3(__right_value675,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value677,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value679,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value681,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_646=(struct list$1charph*)come_increment_ref_count((__list_values20___645[0]=(char*)come_increment_ref_count(((char*)(__right_value684=__builtin_string("mem")))),
__list_values20___645[1]=(char*)come_increment_ref_count(((char*)(__right_value685=__builtin_string("sname")))),
__list_values20___645[2]=(char*)come_increment_ref_count(((char*)(__right_value686=__builtin_string("sline")))),
__list_values20___645[3]=(char*)come_increment_ref_count(((char*)(__right_value687=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1736, "struct list$1charph")),4,__list_values20___645)));
        __right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value685 = come_decrement_ref_count2(__right_value685, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value686 = come_decrement_ref_count2(__right_value686, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_647=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1737, "list$1charph"))));
        main_fun_648=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1738, "sFun")),(char*)come_increment_ref_count(name_641),(struct sType*)come_increment_ref_count(result_type_642),(struct list$1sTypeph*)come_increment_ref_count(param_types_644),(struct list$1charph*)come_increment_ref_count(param_names_646),(struct list$1charph*)come_increment_ref_count(param_default_parametors_647),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_641)),(struct sFun*)come_increment_ref_count(main_fun_648));
        name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_644,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_646,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_647,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_648,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_649=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_650=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1749, "sType")),"void",(_Bool)0,info));
        param_types_651=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1750, "list$1sTypeph"))));
        param_names_652=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1751, "list$1charph"))));
        param_default_parametors_653=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1752, "list$1charph"))));
        fun_654=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1753, "sFun")),(char*)come_increment_ref_count(name_649),(struct sType*)come_increment_ref_count(result_type_650),(struct list$1sTypeph*)come_increment_ref_count(param_types_651),(struct list$1charph*)come_increment_ref_count(param_names_652),(struct list$1charph*)come_increment_ref_count(param_default_parametors_653),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_649)),(struct sFun*)come_increment_ref_count(fun_654));
        name_649 = come_decrement_ref_count2(name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_650,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_651,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_652,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_653,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_654,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_655=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_656=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1781, "sType")),"void",(_Bool)0,info));
        param_types_657=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1782, "list$1sTypeph"))));
        param_names_658=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1783, "list$1charph"))));
        param_default_parametors_659=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1784, "list$1charph"))));
        fun_660=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1785, "sFun")),(char*)come_increment_ref_count(name_655),(struct sType*)come_increment_ref_count(result_type_656),(struct list$1sTypeph*)come_increment_ref_count(param_types_657),(struct list$1charph*)come_increment_ref_count(param_names_658),(struct list$1charph*)come_increment_ref_count(param_default_parametors_659),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_655)),(struct sFun*)come_increment_ref_count(fun_660));
        name_655 = come_decrement_ref_count2(name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_656,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_657,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_658,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_660,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_540;
struct list$1sTypeph* __result301__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_540=0;    i_540<num_value;    i_540++    ){
        list$1sTypeph_push_back(self,values[i_540]);
    }
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
struct list_item$1sTypeph* litem_541;
struct sType* __dec_obj192;
void* __right_value421 = (void*)0;
struct list_item$1sTypeph* litem_542;
struct sType* __dec_obj193;
void* __right_value422 = (void*)0;
struct list_item$1sTypeph* litem_543;
struct sType* __dec_obj194;
struct list$1sTypeph* __result300__;
    if(    self->len==0) {
        litem_541=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value420=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_541->prev=((void*)0);
        litem_541->next=((void*)0);
        __dec_obj192=litem_541->item;
        litem_541->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_541;
        self->head=litem_541;
    }
    else if(    self->len==1) {
        litem_542=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value421=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_542->prev=self->head;
        litem_542->next=((void*)0);
        __dec_obj193=litem_542->item;
        litem_542->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_542;
        self->head->next=litem_542;
    }
    else {
        litem_543=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value422=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_543->prev=self->tail;
        litem_543->next=((void*)0);
        __dec_obj194=litem_543->item;
        litem_543->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_543;
        self->tail=litem_543;
    }
    self->len++;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_546;
struct list$1charph* __result302__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_546=0;    i_546<num_value;    i_546++    ){
        list$1charph_push_back(self,values[i_546]);
    }
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_567;
unsigned int it_568;
_Bool same_key_exist_569;
char* it2_570;
struct map$2charphsFunph* __result313__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_567=charp_get_hash_key(key)%self->size;
    it_568=hash_567;
    while((_Bool)1) {
        if(        self->item_existance[it_568]) {
            if(            charp_equals(self->keys[it_568],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_568]);
                    self->keys[it_568] = come_decrement_ref_count2(self->keys[it_568], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_568]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_568]);
                    self->keys[it_568]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_568],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_568]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_568]=item;
                }
                break;
            }
            it_568++;
            if(            it_568>=self->size) {
                it_568=0;
            }
            else if(            it_568==hash_567) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_568]=(_Bool)1;
            if(            1) {
                self->keys[it_568]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_568]=key;
            }
            if(            1) {
                self->items[it_568]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_568]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_569=(_Bool)0;
    for(    it2_570=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_570=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_570,key)) {
            same_key_exist_569=(_Bool)1;
        }
    }
    if(    !same_key_exist_569) {
        list$1charp_push_back(self->key_list,key);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_550;
void* __right_value443 = (void*)0;
char** keys_551;
void* __right_value444 = (void*)0;
struct sFun** items_552;
void* __right_value445 = (void*)0;
_Bool* item_existance_553;
int len_554;
char* it_557;
struct sFun* default_value_560;
void* __right_value446 = (void*)0;
struct sFun* it2_561;
unsigned int hash_564;
int n_565;
struct sFun* default_value_566;
void* __right_value447 = (void*)0;
default_value_560 = (void*)0;
default_value_566 = (void*)0;
    size_550=self->size*10;
    keys_551=(char**)come_increment_ref_count(((char**)(__right_value443=(char**)come_calloc(1, sizeof(char*)*(1*(size_550)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_552=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value444=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_550)), "/usr/local/include/comelang.h", 2558, "sFun*%"))));
    item_existance_553=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value445=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_550)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_554=0;
    for(    it_557=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_557=map$2charphsFunph_next(self)    ){
        memset(&default_value_560,0,sizeof(struct sFun*));
        it2_561=((struct sFun*)(__right_value446=map$2charphsFunph_at(self,it_557,default_value_560)));
        come_call_finalizer3(__right_value446,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_564=charp_get_hash_key(it_557)%size_550;
        n_565=hash_564;
        while((_Bool)1) {
            if(            item_existance_553[n_565]) {
                n_565++;
                if(                n_565>=size_550) {
                    n_565=0;
                }
                else if(                n_565==hash_564) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_553[n_565]=(_Bool)1;
                keys_551[n_565]=it_557;
                items_552[n_565]=((struct sFun*)(__right_value447=map$2charphsFunph_at(self,it_557,default_value_566)));
                come_call_finalizer3(__right_value447,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_554++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_551;
    self->items=items_552;
    self->item_existance=item_existance_553;
    self->size=size_550;
    self->len=len_554;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_555;
char* __result303__;
char* __result304__;
char* result_556;
char* __result305__;
result_555 = (void*)0;
result_556 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_555,0,sizeof(char*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_555;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_556,0,sizeof(char*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_556;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_558;
char* __result306__;
char* __result307__;
char* result_559;
char* __result308__;
result_558 = (void*)0;
result_559 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_558,0,sizeof(char*));
        __result306__ = gComeFunResultObject = __result_obj__ = result_558;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result307__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    memset(&result_559,0,sizeof(char*));
    __result308__ = gComeFunResultObject = __result_obj__ = result_559;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_562;
unsigned int it_563;
struct sFun* __result309__;
struct sFun* __result310__;
struct sFun* __result311__;
struct sFun* __result312__;
    hash_562=charp_get_hash_key(((char*)key))%self->size;
    it_563=hash_562;
    while((_Bool)1) {
        if(        self->item_existance[it_563]) {
            if(            charp_equals(self->keys[it_563],key)) {
                __result309__ = gComeFunResultObject = __result_obj__ = self->items[it_563];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result309__;
            }
            it_563++;
            if(            it_563>=self->size) {
                it_563=0;
            }
            else if(            it_563==hash_562) {
                __result310__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result310__;
            }
        }
        else {
            __result311__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result311__;
        }
    }
    __result312__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_661;
_Bool is_type_name_flag_662;
int sline_663;
_Bool define_struct_nobody_664;
char* p_665;
int sline_666;
void* __right_value731 = (void*)0;
char* word_667;
_Bool define_function_pointer_result_function_668;
_Bool define_variable_between_brace_669;
char* p_670;
void* __right_value732 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_671=0;
char* fun_name_672=0;
_Bool err_673=0;
void* __right_value733 = (void*)0;
char* word_674;
_Bool define_function_flag_675;
char* p_676;
void* __right_value734 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_677=0;
char* fun_name_678=0;
_Bool err_679=0;
char* word_680;
void* __right_value735 = (void*)0;
char* __dec_obj197;
void* __right_value736 = (void*)0;
char* __dec_obj198;
char* __dec_obj199;
void* __right_value737 = (void*)0;
char* __dec_obj200;
_Bool define_variable_681;
char* p_682;
void* __right_value738 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_683=0;
char* fun_name_684=0;
_Bool err_685=0;
void* __right_value739 = (void*)0;
char* word_686;
void* __right_value740 = (void*)0;
char* word_687;
char* p_688;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
char* word_689;
void* __right_value744 = (void*)0;
char* __dec_obj201;
void* __right_value745 = (void*)0;
char* word_690;
void* __right_value746 = (void*)0;
char* word_693;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct sNode* node_694;
struct sNode* __result315__;
void* __right_value749 = (void*)0;
struct sNode* __result316__;
char* header_head_695;
void* __right_value750 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_696=0;
char* fun_name_697=0;
_Bool err_698=0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1sTypeph* param_types_699;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct list$1charph* param_names_700;
void* __right_value755 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_701=0;
char* param_name_702=0;
_Bool err_703=0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1sTypeph* param_types2_705;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1charph* param_names2_706;
void* __right_value762 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_707=0;
char* param_name_708=0;
_Bool err_709=0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
char* header_tail_711;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sType* result_type2_712;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct tuple1$1sTypeph* __dec_obj203;
void* __right_value769 = (void*)0;
struct list$1sTypeph* __dec_obj204;
void* __right_value770 = (void*)0;
struct list$1charph* __dec_obj205;
_Bool var_args_713;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct buffer* header_buf_714;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct list$1charph* param_default_parametors_715;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sFun* fun_716;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sFun* fun2_720;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value832 = (void*)0;
struct sNode* __result346__;
void* __right_value833 = (void*)0;
struct sNode* node_756;
struct sNode* __result347__;
void* __right_value834 = (void*)0;
struct sNode* node_757;
struct sNode* __result348__;
void* __right_value835 = (void*)0;
struct sNode* node_758;
char* source_tail_759;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct buffer* header_760;
struct sNode* __result349__;
void* __right_value838 = (void*)0;
char* buf2_761;
void* __right_value839 = (void*)0;
struct sNode* __result350__;
    info->in_top_level=(_Bool)1;
    source_head_661=info->p;
    is_type_name_flag_662=is_type_name(buf,info);
    sline_663=info->sline;
    define_struct_nobody_664=(_Bool)0;
    {
        p_665=info->p;
        sline_666=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_667=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_664=(_Bool)1;
                }
                word_667 = come_decrement_ref_count2(word_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_666;
    }
    define_function_pointer_result_function_668=(_Bool)0;
    define_variable_between_brace_669=(_Bool)0;
    if(    is_type_name_flag_662) {
        p_670=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value732=backtrace_parse_type((_Bool)0,info)));
            result_type_671=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_672=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_673=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value732,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_668=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_674=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_674,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_669=(_Bool)1;
                            }
                        }
                        word_674 = come_decrement_ref_count2(word_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_672 = come_decrement_ref_count2(fun_name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_663;
    }
    define_function_flag_675=(_Bool)0;
    if(    is_type_name_flag_662&&!define_function_pointer_result_function_668&&charp_operator_not_equals(buf,"__typeof__")) {
        p_676=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value734=backtrace_parse_type((_Bool)0,info)));
            result_type_677=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_678=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_679=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value734,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_678 = come_decrement_ref_count2(fun_name_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_680=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj197=word_680;
                word_680=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_680,"extern")) {
                    __dec_obj198=word_680;
                    word_680=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj199=word_680;
                word_680=((void*)0);
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_680) {
                if(                is_type_name(word_680,info)) {
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
                        __dec_obj200=word_680;
                        word_680=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_680)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_662) {
                        define_function_flag_675=(_Bool)1;
                    }
                }
            }
            word_680 = come_decrement_ref_count2(word_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_676;
        info->sline=sline_663;
    }
    define_variable_681=(_Bool)1;
    if(    is_type_name_flag_662&&!define_function_pointer_result_function_668) {
        p_682=info->p;
        info->p=head;
        if(        !is_type_name_flag_662) {
            define_variable_681=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value738=backtrace_parse_type((_Bool)0,info)));
            result_type_683=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_684=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_685=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value738,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_686=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_681=(_Bool)1;
                            }
                        }
                        word_686 = come_decrement_ref_count2(word_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_687=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_687,info)&&*info->p!=40) {
                            define_variable_681=(_Bool)1;
                        }
                    }
                    word_687 = come_decrement_ref_count2(word_687, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_683,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_684 = come_decrement_ref_count2(fun_name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_681=(_Bool)0;
        }
        else if(        define_variable_681) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_681=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_681=(_Bool)0;
            }
        }
        info->p=p_682;
        info->sline=sline_663;
    }
    else {
        define_variable_681=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_668) {
        p_688=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value741=parse_struct_attribute(info)));
            __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value742=parse_word(info)));
                __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_689=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj201=word_689;
                        word_689=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_689,"extends")) {
                            define_variable_681=(_Bool)0;
                        }
                    }
                    word_689 = come_decrement_ref_count2(word_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_681=(_Bool)0;
        }
        else if(        define_variable_681) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_681=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_681=(_Bool)0;
            }
        }
        info->p=p_688;
        info->sline=sline_663;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_690=(char*)come_increment_ref_count(parse_word(info));
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
                    word_693=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_693)));
                    word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_694=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result315__ = gComeFunResultObject = __result_obj__ = node_694;
            if(node_694) { node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_690 = come_decrement_ref_count2(word_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result315__;
            if(node_694) { node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_690 = come_decrement_ref_count2(word_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_664) {
    }
    else if(    define_variable_between_brace_669) {
        info->p=head;
        info->sline=sline_663;
        __result316__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value749=parse_global_variable(info)));
        if(__right_value749) { __right_value749 = come_decrement_ref_count2(__right_value749, ((struct sNode*)__right_value749)->finalize, ((struct sNode*)__right_value749)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    else if(    define_function_pointer_result_function_668) {
        header_head_695=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value750=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_696=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_697=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_698=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value750,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_699=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2111, "list$1sTypeph"))));
            param_names_700=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2112, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value755=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_701=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_702=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_703=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value755,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_703) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_699,(struct sType*)come_increment_ref_count(param_type_701));
                    static int num_function_pointer_result_var_name_a_704=0;
                    list$1charph_push_back(param_names_700,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_704)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value757=parse_word(info)));
                        __right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_702 = come_decrement_ref_count2(param_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_702 = come_decrement_ref_count2(param_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_705=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2158, "list$1sTypeph"))));
                param_names2_706=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2159, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value762=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_707=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_708=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_709=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value762,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_709) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_705,(struct sType*)come_increment_ref_count(param_type_707));
                        static int num_function_pointer_result_var_name_b_710=0;
                        list$1charph_push_back(param_names2_706,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_710)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value764=parse_word(info)));
                            __right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_707,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_708 = come_decrement_ref_count2(param_name_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_707,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_708 = come_decrement_ref_count2(param_name_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_711=info->p;
                result_type2_712=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2201, "sType")),"lambda",(_Bool)0,info));
                __dec_obj203=result_type2_712->mResultType;
                result_type2_712->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2203, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_696)));
                come_call_finalizer3(__dec_obj203,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj204=result_type2_712->mParamTypes;
                result_type2_712->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_705));
                come_call_finalizer3(__dec_obj204,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj205=result_type2_712->mParamNames;
                result_type2_712->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_706));
                come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_712->mVarArgs=(_Bool)0;
                result_type2_712->mStatic=(_Bool)0;
                var_args_713=(_Bool)0;
                header_buf_714=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2211, "buffer"))));
                buffer_append(header_buf_714,header_head_695,header_tail_711-header_head_695);
                buffer_append_char(header_buf_714,0);
                param_default_parametors_715=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2215, "list$1charph"))));
                fun_716=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2217, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_697)),(struct sType*)come_increment_ref_count(result_type2_712),(struct list$1sTypeph*)come_increment_ref_count(param_types_699),(struct list$1charph*)come_increment_ref_count(param_names_700),(struct list$1charph*)come_increment_ref_count(param_default_parametors_715),(_Bool)1,var_args_713,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_714)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_720=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value782=__builtin_string(fun_name_697)))));
                __right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_720==((void*)0)||fun2_720->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_697)),(struct sFun*)come_increment_ref_count(fun_716));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2230, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value786=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2230, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_716),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result346__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value832=_inf_value2));
                come_call_finalizer3(param_types2_705,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_706,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_712,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_715,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_716,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_720,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_699,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_700,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_696,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_697 = come_decrement_ref_count2(fun_name_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value786,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value832) { __right_value832 = come_decrement_ref_count2(__right_value832, ((struct sNode*)__right_value832)->finalize, ((struct sNode*)__right_value832)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result346__;
                come_call_finalizer3(param_types2_705,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_706,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_712,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_715,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_716,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_720,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_699,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_700,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_696,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_697 = come_decrement_ref_count2(fun_name_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_663;
        node_756=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result347__ = gComeFunResultObject = __result_obj__ = node_756;
        if(node_756) { node_756 = come_decrement_ref_count2(node_756, ((struct sNode*)node_756)->finalize, ((struct sNode*)node_756)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result347__;
        if(node_756) { node_756 = come_decrement_ref_count2(node_756, ((struct sNode*)node_756)->finalize, ((struct sNode*)node_756)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_675) {
        info->p=head;
        info->sline=sline_663;
        node_757=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result348__ = gComeFunResultObject = __result_obj__ = node_757;
        if(node_757) { node_757 = come_decrement_ref_count2(node_757, ((struct sNode*)node_757)->finalize, ((struct sNode*)node_757)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result348__;
        if(node_757) { node_757 = come_decrement_ref_count2(node_757, ((struct sNode*)node_757)->finalize, ((struct sNode*)node_757)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_681) {
        info->p=head;
        info->sline=sline_663;
        node_758=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_759=info->p;
        header_760=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2262, "buffer"))));
        buffer_append(header_760,source_head_661,source_tail_759-source_head_661);
        __result349__ = gComeFunResultObject = __result_obj__ = node_758;
        if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_760,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result349__;
        if(node_758) { node_758 = come_decrement_ref_count2(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_760,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_663;
    buf2_761=(char*)come_increment_ref_count(parse_word(info));
    __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=top_level_v98(buf2_761,head,head_sline,info)));
    buf2_761 = come_decrement_ref_count2(buf2_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value839) { __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result350__;
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
struct list_item$1charph* it_691;
struct list_item$1charph* prev_it_692;
struct list$1charph* __result314__;
    it_691=self->head;
    while(it_691!=((void*)0)) {
        prev_it_692=it_691;
        it_691=it_691->next;
        come_call_finalizer3(prev_it_692,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj202;
struct tuple1$1sTypeph* __result317__;
    __dec_obj202=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_717;
unsigned int hash_718;
unsigned int it_719;
struct sFun* __result318__;
struct sFun* __result319__;
struct sFun* __result320__;
struct sFun* __result321__;
default_value_717 = (void*)0;
    memset(&default_value_717,0,sizeof(struct sFun*));
    hash_718=charp_get_hash_key(((char*)key))%self->size;
    it_719=hash_718;
    while((_Bool)1) {
        if(        self->item_existance[it_719]) {
            if(            charp_equals(self->keys[it_719],key)) {
                __result318__ = gComeFunResultObject = __result_obj__ = self->items[it_719];
                come_call_finalizer3(default_value_717,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result318__;
            }
            it_719++;
            if(            it_719>=self->size) {
                it_719=0;
            }
            else if(            it_719==hash_718) {
                __result319__ = gComeFunResultObject = __result_obj__ = default_value_717;
                come_call_finalizer3(default_value_717,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result319__;
            }
        }
        else {
            __result320__ = gComeFunResultObject = __result_obj__ = default_value_717;
            come_call_finalizer3(default_value_717,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result320__;
        }
    }
    __result321__ = gComeFunResultObject = __result_obj__ = default_value_717;
    come_call_finalizer3(default_value_717,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result323__;
void* __right_value789 = (void*)0;
struct sFun* result_722;
void* __right_value790 = (void*)0;
char* __dec_obj209;
void* __right_value791 = (void*)0;
struct sType* __dec_obj210;
void* __right_value792 = (void*)0;
struct list$1sTypeph* __dec_obj211;
void* __right_value793 = (void*)0;
struct list$1charph* __dec_obj212;
void* __right_value794 = (void*)0;
struct list$1charph* __dec_obj213;
void* __right_value795 = (void*)0;
struct sType* __dec_obj214;
void* __right_value822 = (void*)0;
struct sBlock* __dec_obj224;
void* __right_value823 = (void*)0;
struct buffer* __dec_obj225;
void* __right_value824 = (void*)0;
struct buffer* __dec_obj226;
void* __right_value825 = (void*)0;
struct buffer* __dec_obj227;
void* __right_value826 = (void*)0;
struct buffer* __dec_obj228;
void* __right_value827 = (void*)0;
char* __dec_obj229;
void* __right_value828 = (void*)0;
char* __dec_obj230;
void* __right_value829 = (void*)0;
char* __dec_obj231;
void* __right_value830 = (void*)0;
char* __dec_obj232;
struct sFun* __result344__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_722=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj209=result_722->mName;
        result_722->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj210=result_722->mResultType;
        result_722->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj211=result_722->mParamTypes;
        result_722->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj211,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj212=result_722->mParamNames;
        result_722->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj213=result_722->mParamDefaultParametors;
        result_722->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj213,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj214=result_722->mLambdaType;
        result_722->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj224=result_722->mBlock;
        result_722->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj224,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_722->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_722->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj225=result_722->mSource;
        result_722->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj226=result_722->mSourceHead;
        result_722->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj226,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj227=result_722->mSourceHead2;
        result_722->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj227,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj228=result_722->mSourceDefer;
        result_722->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj228,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_722->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_722->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_722->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj229=result_722->mComeHeader;
        result_722->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_722->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj230=result_722->mDeclareSName;
        result_722->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_722->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_722->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_722->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj231=result_722->mAttribute;
        result_722->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj232=result_722->mFunAttribute;
        result_722->mFunAttribute=(char*)come_increment_ref_count(string_clone(self->mFunAttribute));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result344__ = gComeFunResultObject = __result_obj__ = result_722;
    come_call_finalizer3(result_722,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result324__;
void* __right_value796 = (void*)0;
struct sBlock* result_723;
void* __right_value797 = (void*)0;
struct list$1sNodeph* __dec_obj215;
void* __right_value821 = (void*)0;
struct sVarTable* __dec_obj223;
struct sBlock* __result343__;
    if(    self==(void*)0) {
        __result324__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    result_723=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj215=result_723->mNodes;
        result_723->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj215,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj223=result_723->mVarTable;
        result_723->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj223,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_723->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_723;
    come_call_finalizer3(result_723,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result325__;
void* __right_value798 = (void*)0;
struct sVarTable* result_724;
void* __right_value820 = (void*)0;
struct map$2charphsVarph* __dec_obj222;
struct sVarTable* __result342__;
    if(    self==(void*)0) {
        __result325__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    result_724=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj222=result_724->mVars;
        result_724->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj222,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_724->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_724->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_724->mID=self->mID;
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_724;
    come_call_finalizer3(result_724,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result326__;
void* __right_value799 = (void*)0;
void* __right_value805 = (void*)0;
struct map$2charphsVarph* result_728;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1charp* __dec_obj217;
char* it_731;
struct sVar* default_value_734;
void* __right_value808 = (void*)0;
struct sVar* it2_737;
void* __right_value819 = (void*)0;
struct map$2charphsVarph* __result341__;
default_value_734 = (void*)0;
    if(    self==((void*)0)) {
        __result326__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_728=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2400, "map$2charphsVarph"))));
    __dec_obj217=result_728->key_list;
    result_728->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2402, "list$1charp"))));
    come_call_finalizer3(__dec_obj217,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_731=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_731=map$2charphsVarph_next(self)    ){
        memset(&default_value_734,0,sizeof(struct sVar*));
        it2_737=(struct sVar*)come_increment_ref_count(map$2charphsVarph_at(self,it_731,default_value_734));
        map$2charphsVarph_put(result_728,it_731,(struct sVar*)come_increment_ref_count(sVar_clone(it2_737)));
        come_call_finalizer3(it2_737,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result341__ = gComeFunResultObject = __result_obj__ = result_728;
    come_call_finalizer3(result_728,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
int i_725;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct list$1charp* __dec_obj216;
struct map$2charphsVarph* __result327__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value800=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2329, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value801=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2330, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value802=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2331, "bool"))));
    for(    i_725=0;    i_725<128;    i_725++    ){
        self->item_existance[i_725]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj216=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj216,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_726;
int i_727;
    for(    i_726=0;    i_726<self->size;    i_726++    ){
        if(        self->item_existance[i_726]) {
            if(            1) {
                come_call_finalizer3(self->items[i_726],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_727=0;    i_727<self->size;    i_727++    ){
        if(        self->item_existance[i_727]) {
            if(            1) {
                self->keys[i_727] = come_decrement_ref_count2(self->keys[i_727], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_729;
char* __result328__;
char* __result329__;
char* result_730;
char* __result330__;
result_729 = (void*)0;
result_730 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_729,0,sizeof(char*));
        __result328__ = gComeFunResultObject = __result_obj__ = result_729;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result329__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    memset(&result_730,0,sizeof(char*));
    __result330__ = gComeFunResultObject = __result_obj__ = result_730;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_732;
char* __result331__;
char* __result332__;
char* result_733;
char* __result333__;
result_732 = (void*)0;
result_733 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_732,0,sizeof(char*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_732;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_733,0,sizeof(char*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_733;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_735;
unsigned int it_736;
struct sVar* __result334__;
struct sVar* __result335__;
struct sVar* __result336__;
struct sVar* __result337__;
    hash_735=charp_get_hash_key(((char*)key))%self->size;
    it_736=hash_735;
    while((_Bool)1) {
        if(        self->item_existance[it_736]) {
            if(            charp_equals(self->keys[it_736],key)) {
                __result334__ = gComeFunResultObject = __result_obj__ = self->items[it_736];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result334__;
            }
            it_736++;
            if(            it_736>=self->size) {
                it_736=0;
            }
            else if(            it_736==hash_735) {
                __result335__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result335__;
            }
        }
        else {
            __result336__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result336__;
        }
    }
    __result337__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_749;
int it_750;
_Bool same_key_exist_751;
char* it2_752;
struct map$2charphsVarph* __result338__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_749=charp_get_hash_key(key)%self->size;
    it_750=hash_749;
    while((_Bool)1) {
        if(        self->item_existance[it_750]) {
            if(            charp_equals(self->keys[it_750],key)) {
                if(                1) {
                    self->keys[it_750] = come_decrement_ref_count2(self->keys[it_750], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_750]);
                    self->keys[it_750]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_750]);
                    self->keys[it_750]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_750],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_750]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_750]=item;
                }
                break;
            }
            it_750++;
            if(            it_750>=self->size) {
                it_750=0;
            }
            else if(            it_750==hash_749) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_750]=(_Bool)1;
            if(            1) {
                self->keys[it_750]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_750]=key;
            }
            if(            1) {
                self->items[it_750]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_750]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_751=(_Bool)0;
    for(    it2_752=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_752=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_752,key)) {
            same_key_exist_751=(_Bool)1;
        }
    }
    if(    !same_key_exist_751) {
        list$1charp_push_back(self->key_list,key);
    }
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_738;
void* __right_value809 = (void*)0;
char** keys_739;
void* __right_value810 = (void*)0;
struct sVar** items_740;
void* __right_value811 = (void*)0;
_Bool* item_existance_741;
int len_742;
char* it_743;
struct sVar* default_value_744;
void* __right_value812 = (void*)0;
struct sVar* it2_745;
unsigned int hash_746;
int n_747;
struct sVar* default_value_748;
void* __right_value813 = (void*)0;
default_value_744 = (void*)0;
default_value_748 = (void*)0;
    size_738=self->size*10;
    keys_739=(char**)come_increment_ref_count(((char**)(__right_value809=(char**)come_calloc(1, sizeof(char*)*(1*(size_738)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_740=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value810=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_738)), "/usr/local/include/comelang.h", 2558, "sVar*%"))));
    item_existance_741=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value811=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_738)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_742=0;
    for(    it_743=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_743=map$2charphsVarph_next(self)    ){
        memset(&default_value_744,0,sizeof(struct sVar*));
        it2_745=((struct sVar*)(__right_value812=map$2charphsVarph_at(self,it_743,default_value_744)));
        come_call_finalizer3(__right_value812,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_746=charp_get_hash_key(it_743)%size_738;
        n_747=hash_746;
        while((_Bool)1) {
            if(            item_existance_741[n_747]) {
                n_747++;
                if(                n_747>=size_738) {
                    n_747=0;
                }
                else if(                n_747==hash_746) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_741[n_747]=(_Bool)1;
                keys_739[n_747]=it_743;
                items_740[n_747]=((struct sVar*)(__right_value813=map$2charphsVarph_at(self,it_743,default_value_748)));
                come_call_finalizer3(__right_value813,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_742++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_739;
    self->items=items_740;
    self->item_existance=item_existance_741;
    self->size=size_738;
    self->len=len_742;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result339__;
void* __right_value814 = (void*)0;
struct sVar* result_753;
void* __right_value815 = (void*)0;
char* __dec_obj218;
void* __right_value816 = (void*)0;
char* __dec_obj219;
void* __right_value817 = (void*)0;
struct sType* __dec_obj220;
void* __right_value818 = (void*)0;
char* __dec_obj221;
struct sVar* __result340__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_753=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj218=result_753->mName;
        result_753->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj219=result_753->mCValueName;
        result_753->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj220=result_753->mType;
        result_753->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_753->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_753->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_753->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_753->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_753->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj221=result_753->mFunName;
        result_753->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result340__ = gComeFunResultObject = __result_obj__ = result_753;
    come_call_finalizer3(result_753,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_754;
int i_755;
    for(    i_754=0;    i_754<self->size;    i_754++    ){
        if(        self->item_existance[i_754]) {
            if(            1) {
                come_call_finalizer3(self->items[i_754],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_755=0;    i_755<self->size;    i_755++    ){
        if(        self->item_existance[i_755]) {
            if(            1) {
                self->keys[i_755] = come_decrement_ref_count2(self->keys[i_755], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_762;
int caller_line_763;
char* caller_sname_764;
_Bool comma_instead_of_semicolon_765;
char* last_code_766;
char* __dec_obj234;
char* last_code2_767;
char* __dec_obj235;
void* __right_value840 = (void*)0;
char* sname_top_768;
int sline_top_769;
void* __right_value841 = (void*)0;
struct sFun* funX_770;
_Bool __result351__;
void* __right_value842 = (void*)0;
struct sType* result_type_771;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct list$1sTypeph* param_types_772;
struct list$1sTypeph* o2_saved_773;
struct sType* it_776;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sType* param_type_779;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct list$1charph* param_names_780;
void* __right_value849 = (void*)0;
struct list$1charph* param_default_parametors_781;
char* p_782;
int sline_783;
char* sname_784;
char* head_785;
struct buffer* source_786;
void* __right_value850 = (void*)0;
struct buffer* __dec_obj236;
struct sType* generics_type_saved_787;
void* __right_value851 = (void*)0;
struct sType* __dec_obj237;
struct list$1charph* method_generics_type_names_788;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct list$1charph* __dec_obj238;
struct list$1charph* o2_saved_789;
char* it_790;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1charph* __dec_obj239;
char* __dec_obj240;
void* __right_value856 = (void*)0;
struct sBlock* block_791;
struct buffer* __dec_obj241;
char* __dec_obj242;
_Bool var_args_792;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sFun* fun_793;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value870 = (void*)0;
struct sNode* node_794;
_Bool in_generics_fun_796;
_Bool Value_797;
void* __if_result__1_798 = (void*)0;
_Bool __result360__;
struct sType* __dec_obj247;
struct list$1charph* __dec_obj248;
void* __right_value871 = (void*)0;
char* __dec_obj249;
char* __dec_obj250;
char* __dec_obj251;
_Bool __result361__;
    caller_fun_762=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_763=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_764=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_765=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_766=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj234=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_767=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj235=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_768=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_769=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_770=((struct sFun*)(__right_value841=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value841,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_770) {
        __result351__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_766 = come_decrement_ref_count2(last_code_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_767 = come_decrement_ref_count2(last_code2_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_768 = come_decrement_ref_count2(sname_top_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result351__;
    }
    result_type_771=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_772=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2309, "list$1sTypeph"))));
    for(    o2_saved_773=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_776=list$1sTypeph_begin((o2_saved_773));    !list$1sTypeph_end((o2_saved_773));    it_776=list$1sTypeph_next((o2_saved_773))    ){
        param_type_779=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value845=sType_clone(it_776))),generics_type,info));
        come_call_finalizer3(__right_value845,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_779->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_772,(struct sType*)come_increment_ref_count(sType_clone(param_type_779)));
        come_call_finalizer3(param_type_779,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_773,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_780=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_781=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_782=info->p;
    sline_783=info->sline;
    sname_784=(char*)come_increment_ref_count(info->sname);
    head_785=info->head;
    source_786=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj236=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj236,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_787=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj237=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_788=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj238=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2336, "list$1charph"))));
    come_call_finalizer3(__dec_obj238,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_789=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_790=list$1charph_begin((o2_saved_789));    !list$1charph_end((o2_saved_789));    it_790=list$1charph_next((o2_saved_789))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_790)));
    }
    come_call_finalizer3(o2_saved_789,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj239=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj239,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj240=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_791=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_785;
    __dec_obj241=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_786);
    come_call_finalizer3(__dec_obj241,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_782;
    info->sline=sline_783;
    __dec_obj242=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_784);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_771->mInline=(_Bool)0;
    result_type_771->mStatic=(_Bool)0;
    result_type_771->mUniq=(_Bool)0;
    var_args_792=generics_fun->mVarArgs;
    fun_793=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2360, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_772)),(struct list$1charph*)come_increment_ref_count(param_names_780),(struct list$1charph*)come_increment_ref_count(param_default_parametors_781),(_Bool)0,var_args_792,(struct sBlock*)come_increment_ref_count(block_791),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_793));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2367, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value866=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2367, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_793),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_794=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value866,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_796=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_797=node_compile(node_794,info);
    if(    !Value_797) {
        __result360__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_766 = come_decrement_ref_count2(last_code_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_767 = come_decrement_ref_count2(last_code2_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_768 = come_decrement_ref_count2(sname_top_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_771,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_772,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_780,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_781,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_784 = come_decrement_ref_count2(sname_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_787,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_788,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_791,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_793,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result360__;
    }
    else {
        __if_result__1_798=(void*)(Value_797);
;
    }
    info->in_generics_fun=in_generics_fun_796;
    __dec_obj247=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_787);
    come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj248=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_788);
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj249=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_768));
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_769;
    __dec_obj250=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_766);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj251=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_767);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_762;
    info->caller_line=caller_line_763;
    info->caller_sname=caller_sname_764;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_765;
    __result361__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_766 = come_decrement_ref_count2(last_code_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_767 = come_decrement_ref_count2(last_code2_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_768 = come_decrement_ref_count2(sname_top_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_771,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_772,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_780,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_781,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_784 = come_decrement_ref_count2(sname_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_786,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_787,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_788,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_791,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_793,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result361__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_774;
struct sType* __result352__;
struct sType* __result353__;
struct sType* result_775;
struct sType* __result354__;
result_774 = (void*)0;
result_775 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_774,0,sizeof(struct sType*));
        __result352__ = gComeFunResultObject = __result_obj__ = result_774;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    self->it=self->head;
    if(    self->it) {
        __result353__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    memset(&result_775,0,sizeof(struct sType*));
    __result354__ = gComeFunResultObject = __result_obj__ = result_775;
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_777;
struct sType* __result355__;
struct sType* __result356__;
struct sType* result_778;
struct sType* __result357__;
result_777 = (void*)0;
result_778 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_777,0,sizeof(struct sType*));
        __result355__ = gComeFunResultObject = __result_obj__ = result_777;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result356__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    memset(&result_778,0,sizeof(struct sType*));
    __result357__ = gComeFunResultObject = __result_obj__ = result_778;
    gComeFunResultObject = (void*)0;
    return __result357__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_799;
int caller_line_800;
char* caller_sname_801;
_Bool comma_instead_of_semicolon_802;
char* last_code_803;
char* __dec_obj252;
char* last_code2_804;
char* __dec_obj253;
void* __right_value872 = (void*)0;
char* sname_top_805;
int sline_top_806;
void* __right_value873 = (void*)0;
struct sFun* funX_807;
_Bool __result362__;
void* __right_value874 = (void*)0;
struct sType* result_type_808;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct list$1sTypeph* param_types_809;
struct list$1sTypeph* o2_saved_810;
struct sType* it_811;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sType* param_type_812;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct list$1charph* param_names_813;
void* __right_value881 = (void*)0;
struct list$1charph* param_default_parametors_814;
char* p_815;
int sline_816;
char* sname_817;
char* head_818;
struct buffer* source_819;
void* __right_value882 = (void*)0;
struct buffer* __dec_obj254;
struct list$1charph* method_generics_type_names_820;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct list$1charph* __dec_obj255;
struct list$1charph* o2_saved_821;
char* it_822;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct list$1charph* __dec_obj256;
char* __dec_obj257;
void* __right_value887 = (void*)0;
struct sBlock* block_823;
struct buffer* __dec_obj258;
char* __dec_obj259;
_Bool var_args_824;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sFun* fun_825;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value901 = (void*)0;
struct sNode* node_826;
_Bool Value_828;
void* __if_result__2_829 = (void*)0;
_Bool __result365__;
struct list$1charph* __dec_obj264;
void* __right_value902 = (void*)0;
char* __dec_obj265;
char* __dec_obj266;
char* __dec_obj267;
_Bool __result366__;
    caller_fun_799=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_800=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_801=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_802=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_803=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj252=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_804=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj253=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_805=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_806=info->sline;
    funX_807=((struct sFun*)(__right_value873=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value873,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_807) {
        __result362__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_803 = come_decrement_ref_count2(last_code_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_804 = come_decrement_ref_count2(last_code2_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_805 = come_decrement_ref_count2(sname_top_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result362__;
    }
    result_type_808=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_809=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2421, "list$1sTypeph"))));
    for(    o2_saved_810=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_811=list$1sTypeph_begin((o2_saved_810));    !list$1sTypeph_end((o2_saved_810));    it_811=list$1sTypeph_next((o2_saved_810))    ){
        param_type_812=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value877=sType_clone(it_811))),info));
        come_call_finalizer3(__right_value877,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_812->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_809,(struct sType*)come_increment_ref_count(sType_clone(param_type_812)));
        come_call_finalizer3(param_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_810,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_813=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_814=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_815=info->p;
    sline_816=info->sline;
    sname_817=(char*)come_increment_ref_count(info->sname);
    head_818=info->head;
    source_819=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj254=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj254,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_820=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj255=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2445, "list$1charph"))));
    come_call_finalizer3(__dec_obj255,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_821=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_822=list$1charph_begin((o2_saved_821));    !list$1charph_end((o2_saved_821));    it_822=list$1charph_next((o2_saved_821))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_822)));
    }
    come_call_finalizer3(o2_saved_821,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj256=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj256,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj257=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_823=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_818;
    __dec_obj258=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_819);
    come_call_finalizer3(__dec_obj258,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_815;
    info->sline=sline_816;
    __dec_obj259=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_817);
    __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_808->mInline=(_Bool)0;
    result_type_808->mStatic=(_Bool)0;
    result_type_808->mUniq=(_Bool)0;
    var_args_824=generics_fun->mVarArgs;
    fun_825=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2469, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_808),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_809)),(struct list$1charph*)come_increment_ref_count(param_names_813),(struct list$1charph*)come_increment_ref_count(param_default_parametors_814),(_Bool)0,var_args_824,(struct sBlock*)come_increment_ref_count(block_823),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_825));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2476, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value897=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2476, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_825),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_826=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value897,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_828=node_compile(node_826,info);
    if(    !Value_828) {
        __result365__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_803 = come_decrement_ref_count2(last_code_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_804 = come_decrement_ref_count2(last_code2_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_805 = come_decrement_ref_count2(sname_top_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_808,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_809,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_813,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_814,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_817 = come_decrement_ref_count2(sname_817, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_819,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_820,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_823,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_825,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result365__;
    }
    else {
        __if_result__2_829=(void*)(Value_828);
;
    }
    __dec_obj264=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_820);
    come_call_finalizer3(__dec_obj264,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj265=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_805));
    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_806;
    __dec_obj266=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_803);
    __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj267=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_804);
    __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_799;
    info->caller_line=caller_line_800;
    info->caller_sname=caller_sname_801;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_802;
    __result366__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_803 = come_decrement_ref_count2(last_code_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_804 = come_decrement_ref_count2(last_code2_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_805 = come_decrement_ref_count2(sname_top_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_808,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_809,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_813,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_814,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_817 = come_decrement_ref_count2(sname_817, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_819,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_820,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_823,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_825,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result366__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_830;
char* source_head_831;
void* __right_value903 = (void*)0;
char* attribute_832;
struct sType* result_type_833;
char* var_name_834;
_Bool constructor__835;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sType* __dec_obj268;
void* __right_value906 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_836=0;
char* var_name2_837=0;
_Bool err_838=0;
struct sType* __dec_obj269;
char* __dec_obj270;
_Bool method_definition_839;
char* p_840;
int sline_841;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct buffer* buf2_842;
char* fun_name_843;
char* base_fun_name_844;
void* __right_value909 = (void*)0;
char* __dec_obj271;
void* __right_value910 = (void*)0;
char* __dec_obj272;
void* __right_value911 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_845=0;
char* name_846=0;
_Bool err_847=0;
void* __right_value912 = (void*)0;
char* __dec_obj273;
void* __right_value913 = (void*)0;
char* __dec_obj274;
void* __right_value914 = (void*)0;
char* __dec_obj275;
void* __right_value915 = (void*)0;
char* __dec_obj276;
void* __right_value916 = (void*)0;
char* __dec_obj277;
void* __right_value917 = (void*)0;
char* __dec_obj278;
void* __right_value918 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_848=0;
struct list$1charph* param_names_849=0;
struct list$1charph* param_default_parametors_850=0;
_Bool var_args_851=0;
char* header_tail_852;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct buffer* header_buf_853;
int version_854;
int n_855;
_Bool in_top_level_856;
void* __right_value921 = (void*)0;
struct sBlock* block_857;
void* __right_value922 = (void*)0;
char* fun_name_859;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sFun* fun_860;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sFun* fun2_861;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value937 = (void*)0;
struct sNode* __result369__;
void* __right_value938 = (void*)0;
char* none_generics_name_863;
void* __right_value939 = (void*)0;
char* generics_sname_864;
int generics_sline_865;
void* __right_value940 = (void*)0;
char* block_866;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sGenericsFun* fun_867;
void* __right_value947 = (void*)0;
char* fun_name3_868;
void* __right_value953 = (void*)0;
struct sNode* __result381__;
void* __right_value954 = (void*)0;
char* generics_sname_890;
int generics_sline_891;
void* __right_value955 = (void*)0;
char* block_892;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sGenericsFun* fun_893;
void* __right_value962 = (void*)0;
char* fun_name3_894;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sNode* __result382__;
char* source_tail_895;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct buffer* header_896;
void* __right_value967 = (void*)0;
char* name_897;
void* __right_value968 = (void*)0;
char* name_898;
int i_899;
void* __right_value969 = (void*)0;
struct sType* param_type_900;
void* __right_value970 = (void*)0;
char* param_name_901;
void* __right_value971 = (void*)0;
char* default_parametor_902;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
char* impl_name_903;
void* __right_value975 = (void*)0;
char* result_type_name_904;
void* __right_value976 = (void*)0;
char* impl_name_905;
void* __right_value977 = (void*)0;
char* result_type_name_906;
int i_907;
void* __right_value978 = (void*)0;
struct sType* param_type_908;
void* __right_value979 = (void*)0;
char* param_name_909;
void* __right_value980 = (void*)0;
char* default_parametor_910;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sBlock* block_911;
_Bool static_fun_912;
_Bool inline_fun_913;
_Bool uniq_fun_914;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
char* new_fun_name_915;
void* __right_value987 = (void*)0;
char* __dec_obj284;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sFun* fun_916;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sFun* fun2_917;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1004 = (void*)0;
struct sNode* __result385__;
void* __right_value1005 = (void*)0;
char* new_fun_name_919;
void* __right_value1006 = (void*)0;
char* __dec_obj289;
char* source_tail_920;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct buffer* header_921;
_Bool result_type_static_922;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sFun* fun_923;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct sFun* fun2_924;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1024 = (void*)0;
struct sNode* __result388__;
void* __right_value1025 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_926=0;
char* fun_attribute_927=0;
void* __right_value1026 = (void*)0;
char* __dec_obj294;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct buffer* header_928;
char* source_tail_929;
_Bool result_type_static_930;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct sFun* fun_931;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct sFun* fun2_932;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1043 = (void*)0;
struct sNode* __result391__;
struct sNode* __result392__;
fun_name_843 = (void*)0;
    header_head_830=info->p;
    source_head_831=info->p;
    attribute_832=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_833=((void*)0);
    var_name_834=((void*)0);
    constructor__835=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value904=parse_word(info)));
        __right_value904 = come_decrement_ref_count2(__right_value904, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj268=result_type_833;
        result_type_833=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_833->mHeap=(_Bool)1;
        constructor__835=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value906=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_836=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_837=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_838=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value906,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj269=result_type_833;
        result_type_833=(struct sType*)come_increment_ref_count(result_type2_836);
        come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj270=var_name_834;
        var_name_834=(char*)come_increment_ref_count(var_name2_837);
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_838) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_836,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_837 = come_decrement_ref_count2(var_name2_837, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_839=(_Bool)0;
    {
        p_840=info->p;
        sline_841=info->sline;
        buf2_842=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2542, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_842,*info->p);
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
        if(        buffer_length(buf2_842)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_839=(_Bool)1;
        }
        info->p=p_840;
        info->sline=sline_841;
        come_call_finalizer3(buf2_842,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_844=((void*)0);
    if(    constructor__835) {
        __dec_obj271=base_fun_name_844;
        base_fun_name_844=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj272=fun_name_843;
        fun_name_843=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_844,info,(_Bool)1));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_839) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value911=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_845=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_846=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_847=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value911,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_847) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj273=base_fun_name_844;
        base_fun_name_844=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj274=fun_name_843;
        fun_name_843=(char*)come_increment_ref_count(create_method_name(obj_type_845,(_Bool)0,base_fun_name_844,info,(_Bool)1));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_845,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_846 = come_decrement_ref_count2(name_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj275=base_fun_name_844;
        base_fun_name_844=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj276=fun_name_843;
        fun_name_843=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_844,info,(_Bool)1));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj277=fun_name_843;
        fun_name_843=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj278=base_fun_name_844;
        base_fun_name_844=(char*)come_increment_ref_count(__builtin_string(fun_name_843));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_844,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value918=parse_params(info,constructor__835)));
    param_types_848=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_849=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_850=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_851=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value918,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_852=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_844,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_853=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2609, "buffer"))));
    buffer_append(header_buf_853,header_head_830,header_tail_852-header_head_830);
    buffer_append_char(header_buf_853,0);
    version_854=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_855=0;
        while(xisdigit(*info->p)) {
            n_855=n_855*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_854=n_855;
    }
    in_top_level_856=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_844,"lambda")) {
        block_857=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_858=0;
        lambda_num_858++;
        fun_name_859=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_858));
        result_type_833->mInline=(_Bool)0;
        result_type_833->mStatic=(_Bool)0;
        result_type_833->mUniq=(_Bool)0;
        fun_860=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2644, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_859)),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1sTypeph*)come_increment_ref_count(param_types_848),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),(_Bool)0,var_args_851,(struct sBlock*)come_increment_ref_count(block_857),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_853)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_861=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value930=__builtin_string(fun_name_859)))));
        __right_value930 = come_decrement_ref_count2(__right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_861==((void*)0)||fun2_861->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_859)),(struct sFun*)come_increment_ref_count(fun_860));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2654, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value934=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2654, "sLambdaNode")),fun_860,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result369__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value937=_inf_value5));
        come_call_finalizer3(block_857,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_860,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_861,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_832 = come_decrement_ref_count2(attribute_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_834 = come_decrement_ref_count2(var_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_843 = come_decrement_ref_count2(fun_name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_844 = come_decrement_ref_count2(base_fun_name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_848,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value934,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value937) { __right_value937 = come_decrement_ref_count2(__right_value937, ((struct sNode*)__right_value937)->finalize, ((struct sNode*)__right_value937)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(block_857,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_859 = come_decrement_ref_count2(fun_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_860,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_861,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_863=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_864=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_865=info->sline;
        block_866=(char*)come_increment_ref_count(skip_block(info));
        fun_867=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2664, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value942=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value943=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_843)),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1sTypeph*)come_increment_ref_count(param_types_848),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),var_args_851,(char*)come_increment_ref_count(block_866),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_864)),generics_sline_865));
        come_call_finalizer3(__right_value942,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value943,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_868=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_863,base_fun_name_844));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_868)),(struct sGenericsFun*)come_increment_ref_count(fun_867));
        __result381__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_863 = come_decrement_ref_count2(none_generics_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_864 = come_decrement_ref_count2(generics_sname_864, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_866 = come_decrement_ref_count2(block_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_867,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_868 = come_decrement_ref_count2(fun_name3_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_832 = come_decrement_ref_count2(attribute_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_834 = come_decrement_ref_count2(var_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_843 = come_decrement_ref_count2(fun_name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_844 = come_decrement_ref_count2(base_fun_name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_848,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result381__;
        none_generics_name_863 = come_decrement_ref_count2(none_generics_name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_864 = come_decrement_ref_count2(generics_sname_864, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_866 = come_decrement_ref_count2(block_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_867,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_868 = come_decrement_ref_count2(fun_name3_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_890=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_891=info->sline;
        block_892=(char*)come_increment_ref_count(skip_block(info));
        fun_893=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2678, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value957=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value958=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_843)),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1sTypeph*)come_increment_ref_count(param_types_848),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),var_args_851,(char*)come_increment_ref_count(block_892),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_890)),generics_sline_891));
        come_call_finalizer3(__right_value957,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value958,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_894=(char*)come_increment_ref_count(charp_clone(base_fun_name_844));
        if(        method_definition_839) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_843)),(struct sGenericsFun*)come_increment_ref_count(fun_893));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_894)),(struct sGenericsFun*)come_increment_ref_count(fun_893));
        }
        __result382__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_890 = come_decrement_ref_count2(generics_sname_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_892 = come_decrement_ref_count2(block_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_893,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_894 = come_decrement_ref_count2(fun_name3_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_832 = come_decrement_ref_count2(attribute_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_834 = come_decrement_ref_count2(var_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_843 = come_decrement_ref_count2(fun_name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_844 = come_decrement_ref_count2(base_fun_name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_848,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result382__;
        generics_sname_890 = come_decrement_ref_count2(generics_sname_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_892 = come_decrement_ref_count2(block_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_893,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_894 = come_decrement_ref_count2(fun_name3_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_895=info->p-1;
        header_896=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2694, "buffer"))));
        if(        constructor__835) {
            if(            list$1sTypeph_length(param_types_848)==1) {
                name_897=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_896,"extern %s*%% %s*::initialize(%s*%% self);\n",name_897,name_897,name_897);
                name_897 = come_decrement_ref_count2(name_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_898=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_896,"extern %s*%% %s*::initialize(%s*%% self, ",name_898,name_898,name_898);
                for(                i_899=1;                i_899<list$1sTypeph_length(param_types_848);                i_899++                ){
                    param_type_900=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_848,i_899));
                    param_name_901=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_849,i_899));
                    default_parametor_902=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_850,i_899));
                    if(                    default_parametor_902) {
                        buffer_append_format(header_896,"extern %s %s=%s",((char*)(__right_value972=make_come_type_name_string_no_solved(param_type_900,(_Bool)0,info))),param_name_901,default_parametor_902);
                        __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_896,"extern %s %s",((char*)(__right_value973=make_come_type_name_string_no_solved(param_type_900,(_Bool)0,info))),param_name_901);
                        __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_899!=list$1sTypeph_length(param_types_848)-1) {
                        buffer_append_str(header_896,",");
                    }
                    come_call_finalizer3(param_type_900,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_901 = come_decrement_ref_count2(param_name_901, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_902 = come_decrement_ref_count2(default_parametor_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_896,");\n");
                name_898 = come_decrement_ref_count2(name_898, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_848)==1) {
                impl_name_903=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_904=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_833,(_Bool)0,info));
                buffer_append_format(header_896,"extern %s %s*::%s(%s* self);\n",result_type_name_904,impl_name_903,base_fun_name_844,impl_name_903);
                impl_name_903 = come_decrement_ref_count2(impl_name_903, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_904 = come_decrement_ref_count2(result_type_name_904, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_905=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_906=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_833,(_Bool)0,info));
                buffer_append_format(header_896,"extern %s %s*::%s(%s* self, ",result_type_name_906,impl_name_905,base_fun_name_844,impl_name_905);
                for(                i_907=1;                i_907<list$1sTypeph_length(param_types_848);                i_907++                ){
                    param_type_908=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_848,i_907));
                    param_name_909=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_849,i_907));
                    default_parametor_910=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_850,i_907));
                    if(                    default_parametor_910) {
                        buffer_append_format(header_896,"extern %s %s=%s",((char*)(__right_value981=make_come_type_name_string_no_solved(param_type_908,(_Bool)0,info))),param_name_909,default_parametor_910);
                        __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_896,"extern %s %s",((char*)(__right_value982=make_come_type_name_string_no_solved(param_type_908,(_Bool)0,info))),param_name_909);
                        __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_907!=list$1sTypeph_length(param_types_848)-1) {
                        buffer_append_str(header_896,",");
                    }
                    come_call_finalizer3(param_type_908,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_909 = come_decrement_ref_count2(param_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_910 = come_decrement_ref_count2(default_parametor_910, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_896,");\n");
                impl_name_905 = come_decrement_ref_count2(impl_name_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_906 = come_decrement_ref_count2(result_type_name_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_896,source_head_831,source_tail_895-source_head_831);
            buffer_append_str(header_896,";\n");
        }
        if(        !result_type_833->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value983=buffer_to_string(header_896))));
                __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_911=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__835,(_Bool)1));
        static_fun_912=(_Bool)0;
        if(        result_type_833->mStatic) {
            result_type_833->mStatic=(_Bool)0;
            result_type_833->mUniq=(_Bool)0;
            static_fun_912=(_Bool)1;
        }
        inline_fun_913=(_Bool)0;
        if(        result_type_833->mInline) {
            result_type_833->mInline=(_Bool)0;
            result_type_833->mUniq=(_Bool)0;
            inline_fun_913=(_Bool)1;
        }
        uniq_fun_914=(_Bool)0;
        if(        result_type_833->mUniq) {
            result_type_833->mUniq=(_Bool)0;
            result_type_833->mInline=(_Bool)0;
            result_type_833->mStatic=(_Bool)0;
            uniq_fun_914=(_Bool)1;
        }
        if(        version_854>0) {
            new_fun_name_915=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value985=__builtin_string(fun_name_843))),version_854));
            __right_value985 = come_decrement_ref_count2(__right_value985, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj284=fun_name_843;
            fun_name_843=(char*)come_increment_ref_count(__builtin_string(new_fun_name_915));
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_915 = come_decrement_ref_count2(new_fun_name_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_916=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2796, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_843)),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1sTypeph*)come_increment_ref_count(param_types_848),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),(_Bool)0,var_args_851,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_911)),static_fun_912,(char*)come_increment_ref_count(buffer_to_string(header_buf_853)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_913,uniq_fun_914,(char*)come_increment_ref_count(attribute_832),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_843)),(struct sFun*)come_increment_ref_count(fun_916));
        }
        else {
            fun2_917=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value996=__builtin_string(fun_name_843)))));
            __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_917==((void*)0)||fun2_917->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_843)),(struct sFun*)come_increment_ref_count(fun_916));
            }
            come_call_finalizer3(fun2_917,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2816, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1000=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2816, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_916),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1004=_inf_value6));
        come_call_finalizer3(header_896,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_911,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_916,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_832 = come_decrement_ref_count2(attribute_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_834 = come_decrement_ref_count2(var_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_843 = come_decrement_ref_count2(fun_name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_844 = come_decrement_ref_count2(base_fun_name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_848,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1000,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1004) { __right_value1004 = come_decrement_ref_count2(__right_value1004, ((struct sNode*)__right_value1004)->finalize, ((struct sNode*)__right_value1004)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result385__;
        come_call_finalizer3(header_896,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_911,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_916,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_854>0) {
            new_fun_name_919=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_843,version_854));
            __dec_obj289=fun_name_843;
            fun_name_843=(char*)come_increment_ref_count(__builtin_string(new_fun_name_919));
            __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_919 = come_decrement_ref_count2(new_fun_name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_920=info->p;
            header_921=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2829, "buffer"))));
            buffer_append(header_921,source_head_831,source_tail_920-source_head_831);
            skip_spaces_and_lf(info);
            result_type_static_922=result_type_833->mStatic;
            result_type_833->mStatic=(_Bool)0;
            result_type_833->mUniq=(_Bool)0;
            result_type_833->mInline=(_Bool)0;
            fun_923=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2839, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_843)),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1sTypeph*)come_increment_ref_count(param_types_848),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),(_Bool)1,var_args_851,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_853)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_832),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_924=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1015=__builtin_string(fun_name_843)))));
            __right_value1015 = come_decrement_ref_count2(__right_value1015, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_924==((void*)0)||fun2_924->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_843)),(struct sFun*)come_increment_ref_count(fun_923));
            }
            if(            !result_type_static_922) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1018=buffer_to_string(header_921))));
                    __right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2858, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1020=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2858, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_923),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1024=_inf_value7));
            come_call_finalizer3(header_921,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_923,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_924,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_832 = come_decrement_ref_count2(attribute_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_834 = come_decrement_ref_count2(var_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_843 = come_decrement_ref_count2(fun_name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_844 = come_decrement_ref_count2(base_fun_name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_848,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1020,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1024) { __right_value1024 = come_decrement_ref_count2(__right_value1024, ((struct sNode*)__right_value1024)->finalize, ((struct sNode*)__right_value1024)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result388__;
            come_call_finalizer3(header_921,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_923,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_924,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1025=parse_function_attribute(info)));
            asm_fun_926=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_927=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1025,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_926,"")) {
                __dec_obj294=fun_name_843;
                fun_name_843=(char*)come_increment_ref_count(__builtin_string(asm_fun_926));
                __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_928=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2867, "buffer"))));
            if(            *info->p==59) {
                info->p++;
                source_tail_929=info->p;
                buffer_append(header_928,source_head_831,source_tail_929-source_head_831);
                skip_spaces_and_lf(info);
            }
            result_type_static_930=result_type_833->mStatic;
            result_type_833->mStatic=(_Bool)0;
            result_type_833->mUniq=(_Bool)0;
            result_type_833->mInline=(_Bool)0;
            fun_931=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2880, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_843)),(struct sType*)come_increment_ref_count(result_type_833),(struct list$1sTypeph*)come_increment_ref_count(param_types_848),(struct list$1charph*)come_increment_ref_count(param_names_849),(struct list$1charph*)come_increment_ref_count(param_default_parametors_850),(_Bool)1,var_args_851,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_853)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_832),(char*)come_increment_ref_count(fun_attribute_927)));
            fun2_932=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1034=__builtin_string(fun_name_843)))));
            __right_value1034 = come_decrement_ref_count2(__right_value1034, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_932==((void*)0)||fun2_932->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_843)),(struct sFun*)come_increment_ref_count(fun_931));
            }
            if(            !result_type_static_930) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1037=buffer_to_string(header_928))));
                    __right_value1037 = come_decrement_ref_count2(__right_value1037, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2899, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1039=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2899, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_931),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1043=_inf_value8));
            asm_fun_926 = come_decrement_ref_count2(asm_fun_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_927 = come_decrement_ref_count2(fun_attribute_927, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_928,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_931,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_932,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_832 = come_decrement_ref_count2(attribute_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_834 = come_decrement_ref_count2(var_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_843 = come_decrement_ref_count2(fun_name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_844 = come_decrement_ref_count2(base_fun_name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_848,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1039,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1043) { __right_value1043 = come_decrement_ref_count2(__right_value1043, ((struct sNode*)__right_value1043)->finalize, ((struct sNode*)__right_value1043)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result391__;
            asm_fun_926 = come_decrement_ref_count2(asm_fun_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_927 = come_decrement_ref_count2(fun_attribute_927, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_928,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_931,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_932,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_856;
    __result392__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_832 = come_decrement_ref_count2(attribute_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_833,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_834 = come_decrement_ref_count2(var_name_834, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_843 = come_decrement_ref_count2(fun_name_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_844 = come_decrement_ref_count2(base_fun_name_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_848,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_850,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
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
struct sLambdaNode* __result367__;
void* __right_value935 = (void*)0;
struct sLambdaNode* result_862;
void* __right_value936 = (void*)0;
char* __dec_obj283;
struct sLambdaNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_862=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_862->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_862->sname;
        result_862->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_862->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_862->mFun=self->mFun;
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_862;
    come_call_finalizer3(result_862,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_886;
unsigned int it_887;
_Bool same_key_exist_888;
char* it2_889;
struct map$2charphsGenericsFunph* __result380__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_886=charp_get_hash_key(key)%self->size;
    it_887=hash_886;
    while((_Bool)1) {
        if(        self->item_existance[it_887]) {
            if(            charp_equals(self->keys[it_887],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_887]);
                    self->keys[it_887] = come_decrement_ref_count2(self->keys[it_887], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_887]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_887]);
                    self->keys[it_887]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_887],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_887]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_887]=item;
                }
                break;
            }
            it_887++;
            if(            it_887>=self->size) {
                it_887=0;
            }
            else if(            it_887==hash_886) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_887]=(_Bool)1;
            if(            1) {
                self->keys[it_887]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_887]=key;
            }
            if(            1) {
                self->items[it_887]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_887]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_888=(_Bool)0;
    for(    it2_889=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_889=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_889,key)) {
            same_key_exist_888=(_Bool)1;
        }
    }
    if(    !same_key_exist_888) {
        list$1charp_push_back(self->key_list,key);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_869;
void* __right_value948 = (void*)0;
char** keys_870;
void* __right_value949 = (void*)0;
struct sGenericsFun** items_871;
void* __right_value950 = (void*)0;
_Bool* item_existance_872;
int len_873;
char* it_876;
struct sGenericsFun* default_value_879;
void* __right_value951 = (void*)0;
struct sGenericsFun* it2_880;
unsigned int hash_883;
int n_884;
struct sGenericsFun* default_value_885;
void* __right_value952 = (void*)0;
default_value_879 = (void*)0;
default_value_885 = (void*)0;
    size_869=self->size*10;
    keys_870=(char**)come_increment_ref_count(((char**)(__right_value948=(char**)come_calloc(1, sizeof(char*)*(1*(size_869)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_871=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value949=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_869)), "/usr/local/include/comelang.h", 2558, "sGenericsFun*%"))));
    item_existance_872=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value950=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_869)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_873=0;
    for(    it_876=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_876=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_879,0,sizeof(struct sGenericsFun*));
        it2_880=((struct sGenericsFun*)(__right_value951=map$2charphsGenericsFunph_at(self,it_876,default_value_879)));
        come_call_finalizer3(__right_value951,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_883=charp_get_hash_key(it_876)%size_869;
        n_884=hash_883;
        while((_Bool)1) {
            if(            item_existance_872[n_884]) {
                n_884++;
                if(                n_884>=size_869) {
                    n_884=0;
                }
                else if(                n_884==hash_883) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_872[n_884]=(_Bool)1;
                keys_870[n_884]=it_876;
                items_871[n_884]=((struct sGenericsFun*)(__right_value952=map$2charphsGenericsFunph_at(self,it_876,default_value_885)));
                come_call_finalizer3(__right_value952,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_873++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_870;
    self->items=items_871;
    self->item_existance=item_existance_872;
    self->size=size_869;
    self->len=len_873;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_874;
char* __result370__;
char* __result371__;
char* result_875;
char* __result372__;
result_874 = (void*)0;
result_875 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_874,0,sizeof(char*));
        __result370__ = gComeFunResultObject = __result_obj__ = result_874;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result371__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    memset(&result_875,0,sizeof(char*));
    __result372__ = gComeFunResultObject = __result_obj__ = result_875;
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_877;
char* __result373__;
char* __result374__;
char* result_878;
char* __result375__;
result_877 = (void*)0;
result_878 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_877,0,sizeof(char*));
        __result373__ = gComeFunResultObject = __result_obj__ = result_877;
        gComeFunResultObject = (void*)0;
        return __result373__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result374__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    memset(&result_878,0,sizeof(char*));
    __result375__ = gComeFunResultObject = __result_obj__ = result_878;
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_881;
unsigned int it_882;
struct sGenericsFun* __result376__;
struct sGenericsFun* __result377__;
struct sGenericsFun* __result378__;
struct sGenericsFun* __result379__;
    hash_881=charp_get_hash_key(((char*)key))%self->size;
    it_882=hash_881;
    while((_Bool)1) {
        if(        self->item_existance[it_882]) {
            if(            charp_equals(self->keys[it_882],key)) {
                __result376__ = gComeFunResultObject = __result_obj__ = self->items[it_882];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result376__;
            }
            it_882++;
            if(            it_882>=self->size) {
                it_882=0;
            }
            else if(            it_882==hash_881) {
                __result377__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result377__;
            }
        }
        else {
            __result378__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result378__;
        }
    }
    __result379__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_934;
char* __dec_obj299;
char* last_code2_935;
char* __dec_obj300;
_Bool comma_instead_of_semicolon_936;
struct sClass* current_stack_frame_struct_937;
struct sFun* finalizer_938;
void* __right_value1044 = (void*)0;
char* real_fun_name_939;
void* __right_value1045 = (void*)0;
char* user_real_fun_name_940;
void* __right_value1046 = (void*)0;
struct sFun* user_finalizer_941;
void* __right_value1047 = (void*)0;
struct sType* type2_942;
struct sClass* klass_943;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct buffer* source_944;
void* __right_value1050 = (void*)0;
struct list$1objectph* o2_saved_953;
struct object* __tmp_inf1;
struct tuple2$2charphsTypeph* it_956;
struct object* __tmp_inf2;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_959=0;
struct sType* field_type_960=0;
char* p_963;
int sline_964;
char* sname_965;
char* head_966;
struct buffer* source3_967;
struct buffer* __dec_obj307;
void* __right_value1051 = (void*)0;
char* __dec_obj308;
void* __right_value1052 = (void*)0;
struct sBlock* block_968;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct sType* result_type_969;
void* __right_value1055 = (void*)0;
char* name_970;
void* __right_value1056 = (void*)0;
struct sType* self_type_971;
struct sType* __list_values21___972[1];
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct list$1sTypeph* param_types_973;
void* __right_value1059 = (void*)0;
char* __list_values22___974[1];
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct list$1charph* param_names_975;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct list$1charph* param_default_parametors_976;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
struct buffer* header_buf_977;
void* __right_value1066 = (void*)0;
int i_978;
void* __right_value1067 = (void*)0;
struct sType* param_type_979;
void* __right_value1068 = (void*)0;
char* param_name_980;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct sFun* fun2_981;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct sFun* fun_982;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1084 = (void*)0;
struct sNode* node_983;
_Bool Value_985;
struct buffer* __dec_obj313;
char* __dec_obj314;
char* __dec_obj315;
char* __dec_obj316;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct tuple2$2sFunpcharph* __result406__;
    last_code_934=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj299=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_935=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj300=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_936=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_937=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_938=((void*)0);
    real_fun_name_939=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_940=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_941=((struct sFun*)(__right_value1046=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_940)));
    come_call_finalizer3(__right_value1046,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_942=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_942;
    klass_943=type->mClass;
    if(    type->mPointerNum>0&&klass_943->mStruct||type->mAllocaValue) {
        source_944=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2940, "buffer"))));
        buffer_append_char(source_944,123);
        if(        user_finalizer_941) {
            char source2_945[1024];
            memset(&source2_945, 0, sizeof(char)            *(1024)            );
            snprintf(source2_945,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_940);
            buffer_append_str(source_944,source2_945);
        }
        klass_943=((struct sClass*)(__right_value1050=map$2charphsClassphp_operator_load_element(info->classes,klass_943->mName)));
        come_call_finalizer3(__right_value1050,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_953=(struct list$1objectph*)come_increment_ref_count((klass_943->mFields)),it_956=((__tmp_inf1=list$1objectph_begin((o2_saved_953))),((struct tuple2$2charphsTypeph*)(__tmp_inf1 ? __tmp_inf1->_protocol_obj:(void*)0)));        !list$1objectph_end((o2_saved_953));        it_956=((__tmp_inf2=list$1objectph_next((o2_saved_953))),((struct tuple2$2charphsTypeph*)(__tmp_inf2 ? __tmp_inf2->_protocol_obj:(void*)0)))        ){
            multiple_assign_var11=it_956;
            name_959=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_960=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            field_type_960->mHeap) {
                char source2_961[1024];
                memset(&source2_961, 0, sizeof(char)                *(1024)                );
                snprintf(source2_961,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_959,name_959,name_959,name_959);
                buffer_append_str(source_944,source2_961);
            }
            else if(            field_type_960->mChannel) {
                char source2_962[1024];
                memset(&source2_962, 0, sizeof(char)                *(1024)                );
                snprintf(source2_962,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_959,name_959);
                buffer_append_str(source_944,source2_962);
                snprintf(source2_962,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_959,name_959);
                buffer_append_str(source_944,source2_962);
            }
            name_959 = come_decrement_ref_count2(name_959, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_960,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_953,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_944,125);
        p_963=info->p;
        sline_964=info->sline;
        sname_965=(char*)come_increment_ref_count(info->sname);
        head_966=info->head;
        source3_967=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_944);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_944->buf;
        info->head=source_944->buf;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_939));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_968=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_969=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2997, "sType")),"void",(_Bool)0,info));
        name_970=(char*)come_increment_ref_count(string_clone(real_fun_name_939));
        self_type_971=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_971->mHeap=(_Bool)0;
        if(        self_type_971->mPointerNum==0) {
            self_type_971->mPointerNum=1;
        }
        if(        self_type_971->mPointerNum>1) {
            self_type_971->mPointerNum=1;
        }
        param_types_973=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___972[0]=(struct sType*)come_increment_ref_count(self_type_971),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3007, "struct list$1sTypeph")),1,__list_values21___972)));
        param_names_975=(struct list$1charph*)come_increment_ref_count((__list_values22___974[0]=(char*)come_increment_ref_count(((char*)(__right_value1059=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3008, "struct list$1charph")),1,__list_values22___974)));
        __right_value1059 = come_decrement_ref_count2(__right_value1059, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_976=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3009, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_976,((void*)0));
        header_buf_977=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3012, "buffer"))));
        buffer_append_str(header_buf_977,((char*)(__right_value1066=make_come_type_name_string(result_type_969,info))));
        __right_value1066 = come_decrement_ref_count2(__right_value1066, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_977," ");
        buffer_append_str(header_buf_977,real_fun_name_939);
        buffer_append_str(header_buf_977,"(");
        for(        i_978=0;        i_978<list$1sTypeph_length(param_types_973);        i_978++        ){
            param_type_979=((struct sType*)come_null_check(((struct sType*)(__right_value1067=list$1sTypephp_operator_load_element(param_types_973,i_978))), "05function.c", 3020, 7));
            come_call_finalizer3(__right_value1067,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_980=((char*)come_null_check(((char*)(__right_value1068=list$1charphp_operator_load_element(param_names_975,i_978))), "05function.c", 3021, 8));
            __right_value1068 = come_decrement_ref_count2(__right_value1068, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_977,((char*)(__right_value1069=make_come_type_name_string(param_type_979,info))));
            __right_value1069 = come_decrement_ref_count2(__right_value1069, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_977," ");
            buffer_append_str(header_buf_977,param_name_980);
            if(            i_978!=list$1sTypeph_length(param_types_973)-1) {
                buffer_append_str(header_buf_977,",");
            }
        }
        buffer_append_str(header_buf_977,")");
        result_type_969->mStatic=(_Bool)0;
        result_type_969->mUniq=(_Bool)0;
        result_type_969->mInline=(_Bool)0;
        fun2_981=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1070=__builtin_string(fun_name)))));
        __right_value1070 = come_decrement_ref_count2(__right_value1070, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_981==((void*)0)||fun2_981->mExternal) {
            fun_982=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3039, "sFun")),(char*)come_increment_ref_count(name_970),(struct sType*)come_increment_ref_count(result_type_969),(struct list$1sTypeph*)come_increment_ref_count(param_types_973),(struct list$1charph*)come_increment_ref_count(param_names_975),(struct list$1charph*)come_increment_ref_count(param_default_parametors_976),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_968),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_977)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_970)),(struct sFun*)come_increment_ref_count(fun_982));
            finalizer_938=fun_982;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3051, "struct sNode");
            _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1080=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3051, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_982),info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sFunNode_finalize;
            _inf_value9->clone=(void*)sFunNode_clone;
            _inf_value9->compile=(void*)sFunNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sFunNode_kind;
            node_983=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value1080,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_985=node_compile(node_983,info);
            if(            !Value_985) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_982,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_983) { node_983 = come_decrement_ref_count2(node_983, ((struct sNode*)node_983)->finalize, ((struct sNode*)node_983)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            finalizer_938=fun2_981;
        }
        __dec_obj313=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_967);
        come_call_finalizer3(__dec_obj313,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_963;
        info->head=head_966;
        info->sline=sline_964;
        __dec_obj314=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_965);
        __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_944,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_965 = come_decrement_ref_count2(sname_965, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_967,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_968,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_969,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_970 = come_decrement_ref_count2(name_970, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_971,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_973,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_975,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_976,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_977,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_981,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_937;
    __dec_obj315=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_934);
    __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj316=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_935);
    __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_936;
    __result406__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1086=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3075, "struct tuple2$2sFunpcharph")),finalizer_938,(char*)come_increment_ref_count(real_fun_name_939))));
    last_code_934 = come_decrement_ref_count2(last_code_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_935 = come_decrement_ref_count2(last_code2_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_939 = come_decrement_ref_count2(real_fun_name_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_940 = come_decrement_ref_count2(user_real_fun_name_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_942,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1086,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_946;
unsigned int hash_947;
unsigned int it_948;
struct sClass* __result393__;
struct sClass* __result394__;
struct sClass* __result395__;
struct sClass* __result396__;
default_value_946 = (void*)0;
    memset(&default_value_946,0,sizeof(struct sClass*));
    hash_947=charp_get_hash_key(((char*)key))%self->size;
    it_948=hash_947;
    while((_Bool)1) {
        if(        self->item_existance[it_948]) {
            if(            charp_equals(self->keys[it_948],key)) {
                __result393__ = gComeFunResultObject = __result_obj__ = self->items[it_948];
                come_call_finalizer3(default_value_946,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result393__;
            }
            it_948++;
            if(            it_948>=self->size) {
                it_948=0;
            }
            else if(            it_948==hash_947) {
                __result394__ = gComeFunResultObject = __result_obj__ = default_value_946;
                come_call_finalizer3(default_value_946,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result394__;
            }
        }
        else {
            __result395__ = gComeFunResultObject = __result_obj__ = default_value_946;
            come_call_finalizer3(default_value_946,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result395__;
        }
    }
    __result396__ = gComeFunResultObject = __result_obj__ = default_value_946;
    come_call_finalizer3(default_value_946,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj301;
struct list$1objectph* __dec_obj302;
char* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
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
            come_call_finalizer3(__dec_obj302,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj304=self->mDeclareSName;
            __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj305=self->mParentClassName;
            __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj306=self->mAttribute;
            __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_949;
struct list_item$1objectph* prev_it_950;
    it_949=self->head;
    while(it_949!=((void*)0)) {
        prev_it_950=it_949;
        it_949=it_949->next;
        come_call_finalizer3(prev_it_950,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj303;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj303=self->item;
            if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct object*)__dec_obj303)->finalize, ((struct object*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_951;
struct list_item$1objectph* prev_it_952;
    it_951=self->head;
    while(it_951!=((void*)0)) {
        prev_it_952=it_951;
        it_951=it_951->next;
        come_call_finalizer3(prev_it_952,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct object* list$1objectph_begin(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct object* result_954;
struct object* __result397__;
struct object* __result398__;
struct object* result_955;
struct object* __result399__;
result_954 = (void*)0;
result_955 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_954,0,sizeof(struct object*));
        __result397__ = gComeFunResultObject = __result_obj__ = result_954;
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    self->it=self->head;
    if(    self->it) {
        __result398__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result398__;
    }
    memset(&result_955,0,sizeof(struct object*));
    __result399__ = gComeFunResultObject = __result_obj__ = result_955;
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static _Bool list$1objectph_end(struct list$1objectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct object* list$1objectph_next(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct object* result_957;
struct object* __result400__;
struct object* __result401__;
struct object* result_958;
struct object* __result402__;
result_957 = (void*)0;
result_958 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_957,0,sizeof(struct object*));
        __result400__ = gComeFunResultObject = __result_obj__ = result_957;
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result401__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result401__;
    }
    memset(&result_958,0,sizeof(struct object*));
    __result402__ = gComeFunResultObject = __result_obj__ = result_958;
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj317;
struct tuple2$2sFunpcharph* __result405__;
    self->v1=v1;
    __dec_obj317=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result405__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj318;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj318=self->v2;
            __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_986;
char* __dec_obj319;
char* last_code2_987;
char* __dec_obj320;
_Bool comma_instead_of_semicolon_988;
struct sClass* current_stack_frame_struct_989;
struct sFun* equaler_990;
void* __right_value1087 = (void*)0;
char* real_fun_name_991;
void* __right_value1088 = (void*)0;
struct sType* type2_992;
struct sClass* klass_993;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct buffer* source_994;
char* name_995;
void* __right_value1091 = (void*)0;
struct list$1objectph* o2_saved_997;
struct object* __tmp_inf3;
struct tuple2$2charphsTypeph* it_998;
struct object* __tmp_inf4;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_999=0;
struct sType* field_type_1000=0;
char* p_1002;
int sline_1003;
char* sname_1004;
char* head_1005;
struct buffer* source3_1006;
struct buffer* __dec_obj321;
void* __right_value1092 = (void*)0;
char* __dec_obj322;
void* __right_value1093 = (void*)0;
struct sBlock* block_1007;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
struct sType* result_type_1008;
void* __right_value1096 = (void*)0;
char* name_1009;
void* __right_value1097 = (void*)0;
struct sType* left_type_1010;
void* __right_value1098 = (void*)0;
struct sType* right_type_1011;
struct sType* __list_values23___1012[2];
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
struct list$1sTypeph* param_types_1013;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
char* __list_values24___1014[2];
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct list$1charph* param_names_1015;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
struct list$1charph* param_default_parametors_1016;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct buffer* header_buf_1017;
void* __right_value1109 = (void*)0;
int i_1018;
void* __right_value1110 = (void*)0;
struct sType* param_type_1019;
void* __right_value1111 = (void*)0;
char* param_name_1020;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct sFun* fun2_1021;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
struct sFun* fun_1022;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1127 = (void*)0;
struct sNode* node_1023;
_Bool Value_1025;
struct buffer* __dec_obj327;
char* __dec_obj328;
char* __dec_obj329;
char* __dec_obj330;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
struct tuple2$2sFunpcharph* __result409__;
    last_code_986=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_987=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_988=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_989=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_990=((void*)0);
    real_fun_name_991=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_992=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_992;
    klass_993=type->mClass;
    if(    type->mPointerNum>0&&!klass_993->mNumber) {
        source_994=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3101, "buffer"))));
        buffer_append_char(source_994,123);
        if(        klass_993->mProtocol) {
            name_995="_protocol_obj";
            char source2_996[1024];
            memset(&source2_996, 0, sizeof(char)            *(1024)            );
            snprintf(source2_996,1024,"return left.%s.equals(right.%s);\n",name_995,name_995);
            buffer_append_str(source_994,source2_996);
        }
        else {
            klass_993=((struct sClass*)(__right_value1091=map$2charphsClassphp_operator_load_element(info->classes,klass_993->mName)));
            come_call_finalizer3(__right_value1091,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_997=(struct list$1objectph*)come_increment_ref_count((klass_993->mFields)),it_998=((__tmp_inf3=list$1objectph_begin((o2_saved_997))),((struct tuple2$2charphsTypeph*)(__tmp_inf3 ? __tmp_inf3->_protocol_obj:(void*)0)));            !list$1objectph_end((o2_saved_997));            it_998=((__tmp_inf4=list$1objectph_next((o2_saved_997))),((struct tuple2$2charphsTypeph*)(__tmp_inf4 ? __tmp_inf4->_protocol_obj:(void*)0)))            ){
                multiple_assign_var12=it_998;
                name_999=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1000=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                char source2_1001[1024];
                memset(&source2_1001, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1001,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_999,name_999,name_999);
                buffer_append_str(source_994,source2_1001);
                name_999 = come_decrement_ref_count2(name_999, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1000,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_997,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_994,"return true;");
        buffer_append_char(source_994,125);
        p_1002=info->p;
        sline_1003=info->sline;
        sname_1004=(char*)come_increment_ref_count(info->sname);
        head_1005=info->head;
        source3_1006=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj321=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_994);
        come_call_finalizer3(__dec_obj321,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_994->buf;
        info->head=source_994->buf;
        __dec_obj322=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_991));
        __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1007=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1008=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3149, "sType")),"bool",(_Bool)0,info));
        name_1009=(char*)come_increment_ref_count(string_clone(real_fun_name_991));
        left_type_1010=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1010->mHeap=(_Bool)0;
        right_type_1011=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1011->mHeap=(_Bool)0;
        param_types_1013=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1012[0]=(struct sType*)come_increment_ref_count(left_type_1010),
__list_values23___1012[1]=(struct sType*)come_increment_ref_count(right_type_1011),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3155, "struct list$1sTypeph")),2,__list_values23___1012)));
        param_names_1015=(struct list$1charph*)come_increment_ref_count((__list_values24___1014[0]=(char*)come_increment_ref_count(((char*)(__right_value1101=__builtin_string("left")))),
__list_values24___1014[1]=(char*)come_increment_ref_count(((char*)(__right_value1102=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3156, "struct list$1charph")),2,__list_values24___1014)));
        __right_value1101 = come_decrement_ref_count2(__right_value1101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1016=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3157, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1016,((void*)0));
        list$1charph_push_back(param_default_parametors_1016,((void*)0));
        header_buf_1017=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3161, "buffer"))));
        buffer_append_str(header_buf_1017,((char*)(__right_value1109=make_come_type_name_string(result_type_1008,info))));
        __right_value1109 = come_decrement_ref_count2(__right_value1109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1017," ");
        buffer_append_str(header_buf_1017,real_fun_name_991);
        buffer_append_str(header_buf_1017,"(");
        for(        i_1018=0;        i_1018<list$1sTypeph_length(param_types_1013);        i_1018++        ){
            param_type_1019=((struct sType*)come_null_check(((struct sType*)(__right_value1110=list$1sTypephp_operator_load_element(param_types_1013,i_1018))), "05function.c", 3169, 9));
            come_call_finalizer3(__right_value1110,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1020=((char*)come_null_check(((char*)(__right_value1111=list$1charphp_operator_load_element(param_names_1015,i_1018))), "05function.c", 3170, 10));
            __right_value1111 = come_decrement_ref_count2(__right_value1111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1017,((char*)(__right_value1112=make_come_type_name_string(param_type_1019,info))));
            __right_value1112 = come_decrement_ref_count2(__right_value1112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1017," ");
            buffer_append_str(header_buf_1017,param_name_1020);
            if(            i_1018!=list$1sTypeph_length(param_types_1013)-1) {
                buffer_append_str(header_buf_1017,",");
            }
        }
        buffer_append_str(header_buf_1017,")");
        result_type_1008->mStatic=(_Bool)0;
        result_type_1008->mUniq=(_Bool)0;
        result_type_1008->mInline=(_Bool)0;
        fun2_1021=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1113=__builtin_string(fun_name)))));
        __right_value1113 = come_decrement_ref_count2(__right_value1113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1021==((void*)0)||fun2_1021->mExternal) {
            fun_1022=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3188, "sFun")),(char*)come_increment_ref_count(name_1009),(struct sType*)come_increment_ref_count(result_type_1008),(struct list$1sTypeph*)come_increment_ref_count(param_types_1013),(struct list$1charph*)come_increment_ref_count(param_names_1015),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1016),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1007),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1017)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1009)),(struct sFun*)come_increment_ref_count(fun_1022));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3198, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1123=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3198, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1022),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1023=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1123,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1025=node_compile(node_1023,info);
            if(            !Value_1025) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_990=fun_1022;
            come_call_finalizer3(fun_1022,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1023) { node_1023 = come_decrement_ref_count2(node_1023, ((struct sNode*)node_1023)->finalize, ((struct sNode*)node_1023)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_990=fun2_1021;
        }
        __dec_obj327=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1006);
        come_call_finalizer3(__dec_obj327,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1002;
        info->head=head_1005;
        info->sline=sline_1003;
        __dec_obj328=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1004);
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_994,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1004 = come_decrement_ref_count2(sname_1004, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1006,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1007,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1008,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1009 = come_decrement_ref_count2(name_1009, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1010,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1011,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1013,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1015,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1016,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1017,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1021,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_989;
    __dec_obj329=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_986);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj330=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_987);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_988;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1129=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3224, "struct tuple2$2sFunpcharph")),equaler_990,(char*)come_increment_ref_count(real_fun_name_991))));
    last_code_986 = come_decrement_ref_count2(last_code_986, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_987 = come_decrement_ref_count2(last_code2_987, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_991 = come_decrement_ref_count2(real_fun_name_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_992,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1129,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1026;
char* __dec_obj331;
char* last_code2_1027;
char* __dec_obj332;
_Bool comma_instead_of_semicolon_1028;
struct sClass* current_stack_frame_struct_1029;
struct sFun* equaler_1030;
void* __right_value1130 = (void*)0;
char* real_fun_name_1031;
void* __right_value1131 = (void*)0;
struct sType* type2_1032;
struct sClass* klass_1033;
void* __right_value1132 = (void*)0;
void* __right_value1133 = (void*)0;
struct buffer* source_1034;
char* name_1035;
int i_1038;
void* __right_value1134 = (void*)0;
struct list$1objectph* o2_saved_1039;
struct object* __tmp_inf5;
struct tuple2$2charphsTypeph* it_1040;
struct object* __tmp_inf6;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1041=0;
struct sType* field_type_1042=0;
char* p_1046;
int sline_1047;
char* sname_1048;
char* head_1049;
struct buffer* source3_1050;
struct buffer* __dec_obj333;
void* __right_value1135 = (void*)0;
char* __dec_obj334;
void* __right_value1136 = (void*)0;
struct sBlock* block_1051;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct sType* result_type_1052;
void* __right_value1139 = (void*)0;
char* name_1053;
void* __right_value1140 = (void*)0;
struct sType* left_type_1054;
void* __right_value1141 = (void*)0;
struct sType* right_type_1055;
struct sType* __list_values25___1056[2];
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
struct list$1sTypeph* param_types_1057;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
char* __list_values26___1058[2];
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
struct list$1charph* param_names_1059;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
struct list$1charph* param_default_parametors_1060;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
struct buffer* header_buf_1061;
void* __right_value1152 = (void*)0;
int i_1062;
void* __right_value1153 = (void*)0;
struct sType* param_type_1063;
void* __right_value1154 = (void*)0;
char* param_name_1064;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
void* __right_value1157 = (void*)0;
struct sFun* fun2_1065;
void* __right_value1158 = (void*)0;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct sFun* fun_1066;
void* __right_value1164 = (void*)0;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1170 = (void*)0;
struct sNode* node_1067;
_Bool Value_1069;
struct buffer* __dec_obj339;
char* __dec_obj340;
char* __dec_obj341;
char* __dec_obj342;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
    last_code_1026=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj331=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1027=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj332=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1028=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1029=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1030=((void*)0);
    real_fun_name_1031=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1032=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1032;
    klass_1033=type->mClass;
    if(    type->mPointerNum>0&&!klass_1033->mNumber) {
        source_1034=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3249, "buffer"))));
        buffer_append_char(source_1034,123);
        if(        klass_1033->mProtocol) {
            name_1035="_protocol_obj";
            char source2_1036[1024];
            memset(&source2_1036, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1036,1024,"return left.%s !== right.%s;\n",name_1035,name_1035);
            buffer_append_str(source_1034,source2_1036);
        }
        else {
            char source2_1037[1024];
            memset(&source2_1037, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1037,1024,"return !(");
            buffer_append_str(source_1034,source2_1037);
            snprintf(source2_1037,1024,"( ");
            buffer_append_str(source_1034,source2_1037);
            i_1038=0;
            klass_1033=((struct sClass*)(__right_value1134=map$2charphsClassphp_operator_load_element(info->classes,klass_1033->mName)));
            come_call_finalizer3(__right_value1134,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1039=(struct list$1objectph*)come_increment_ref_count((klass_1033->mFields)),it_1040=((__tmp_inf5=list$1objectph_begin((o2_saved_1039))),((struct tuple2$2charphsTypeph*)(__tmp_inf5 ? __tmp_inf5->_protocol_obj:(void*)0)));            !list$1objectph_end((o2_saved_1039));            it_1040=((__tmp_inf6=list$1objectph_next((o2_saved_1039))),((struct tuple2$2charphsTypeph*)(__tmp_inf6 ? __tmp_inf6->_protocol_obj:(void*)0)))            ){
                multiple_assign_var13=it_1040;
                name_1041=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1042=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1043[1024];
                memset(&source2_1043, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1043,1024,"(left.%s === right.%s)",name_1041,name_1041,name_1041);
                buffer_append_str(source_1034,source2_1043);
                if(                i_1038==list$1objectph_length(klass_1033->mFields)-1) {
                    char source2_1044[1024];
                    memset(&source2_1044, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1044,1024,"));");
                    buffer_append_str(source_1034,source2_1044);
                }
                else {
                    char source2_1045[1024];
                    memset(&source2_1045, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1045,1024," && ");
                    buffer_append_str(source_1034,source2_1045);
                }
                i_1038++;
                name_1041 = come_decrement_ref_count2(name_1041, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1042,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1039,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1034,125);
        p_1046=info->p;
        sline_1047=info->sline;
        sname_1048=(char*)come_increment_ref_count(info->sname);
        head_1049=info->head;
        source3_1050=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj333=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1034);
        come_call_finalizer3(__dec_obj333,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1034->buf;
        info->head=source_1034->buf;
        __dec_obj334=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1031));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1051=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1052=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3317, "sType")),"bool",(_Bool)0,info));
        name_1053=(char*)come_increment_ref_count(string_clone(real_fun_name_1031));
        left_type_1054=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1054->mHeap=(_Bool)0;
        right_type_1055=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1055->mHeap=(_Bool)0;
        param_types_1057=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1056[0]=(struct sType*)come_increment_ref_count(left_type_1054),
__list_values25___1056[1]=(struct sType*)come_increment_ref_count(right_type_1055),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3323, "struct list$1sTypeph")),2,__list_values25___1056)));
        param_names_1059=(struct list$1charph*)come_increment_ref_count((__list_values26___1058[0]=(char*)come_increment_ref_count(((char*)(__right_value1144=__builtin_string("left")))),
__list_values26___1058[1]=(char*)come_increment_ref_count(((char*)(__right_value1145=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3324, "struct list$1charph")),2,__list_values26___1058)));
        __right_value1144 = come_decrement_ref_count2(__right_value1144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1145 = come_decrement_ref_count2(__right_value1145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1060=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3325, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1060,((void*)0));
        list$1charph_push_back(param_default_parametors_1060,((void*)0));
        header_buf_1061=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3329, "buffer"))));
        buffer_append_str(header_buf_1061,((char*)(__right_value1152=make_come_type_name_string(result_type_1052,info))));
        __right_value1152 = come_decrement_ref_count2(__right_value1152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1061," ");
        buffer_append_str(header_buf_1061,real_fun_name_1031);
        buffer_append_str(header_buf_1061,"(");
        for(        i_1062=0;        i_1062<list$1sTypeph_length(param_types_1057);        i_1062++        ){
            param_type_1063=((struct sType*)come_null_check(((struct sType*)(__right_value1153=list$1sTypephp_operator_load_element(param_types_1057,i_1062))), "05function.c", 3337, 11));
            come_call_finalizer3(__right_value1153,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1064=((char*)come_null_check(((char*)(__right_value1154=list$1charphp_operator_load_element(param_names_1059,i_1062))), "05function.c", 3338, 12));
            __right_value1154 = come_decrement_ref_count2(__right_value1154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1061,((char*)(__right_value1155=make_come_type_name_string(param_type_1063,info))));
            __right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1061," ");
            buffer_append_str(header_buf_1061,param_name_1064);
            if(            i_1062!=list$1sTypeph_length(param_types_1057)-1) {
                buffer_append_str(header_buf_1061,",");
            }
        }
        buffer_append_str(header_buf_1061,")");
        result_type_1052->mStatic=(_Bool)0;
        result_type_1052->mUniq=(_Bool)0;
        result_type_1052->mInline=(_Bool)0;
        fun2_1065=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1156=__builtin_string(fun_name)))));
        __right_value1156 = come_decrement_ref_count2(__right_value1156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1065==((void*)0)||fun2_1065->mExternal) {
            fun_1066=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3356, "sFun")),(char*)come_increment_ref_count(name_1053),(struct sType*)come_increment_ref_count(result_type_1052),(struct list$1sTypeph*)come_increment_ref_count(param_types_1057),(struct list$1charph*)come_increment_ref_count(param_names_1059),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1060),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1051),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1061)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1053)),(struct sFun*)come_increment_ref_count(fun_1066));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3366, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1166=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3366, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1066),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1067=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1166,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1069=node_compile(node_1067,info);
            if(            !Value_1069) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1030=fun_1066;
            come_call_finalizer3(fun_1066,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1067) { node_1067 = come_decrement_ref_count2(node_1067, ((struct sNode*)node_1067)->finalize, ((struct sNode*)node_1067)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1030=fun2_1065;
        }
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1050);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1046;
        info->head=head_1049;
        info->sline=sline_1047;
        __dec_obj340=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1048);
        __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1034,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1048 = come_decrement_ref_count2(sname_1048, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1050,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1051,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1052,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1053 = come_decrement_ref_count2(name_1053, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1054,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1055,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1057,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1059,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1060,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1061,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1065,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1029;
    __dec_obj341=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1026);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj342=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1027);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1028;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1172=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3392, "struct tuple2$2sFunpcharph")),equaler_1030,(char*)come_increment_ref_count(real_fun_name_1031))));
    last_code_1026 = come_decrement_ref_count2(last_code_1026, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1027 = come_decrement_ref_count2(last_code2_1027, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1031 = come_decrement_ref_count2(real_fun_name_1031, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1032,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1172,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static int list$1objectph_length(struct list$1objectph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1070;
char* __dec_obj343;
char* last_code2_1071;
char* __dec_obj344;
_Bool comma_instead_of_semicolon_1072;
struct sClass* current_stack_frame_struct_1073;
struct sFun* equaler_1074;
void* __right_value1173 = (void*)0;
char* real_fun_name_1075;
void* __right_value1174 = (void*)0;
struct sType* type2_1076;
struct sClass* klass_1077;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct buffer* source_1078;
char* name_1079;
int i_1082;
void* __right_value1177 = (void*)0;
struct list$1objectph* o2_saved_1083;
struct object* __tmp_inf7;
struct tuple2$2charphsTypeph* it_1084;
struct object* __tmp_inf8;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1085=0;
struct sType* field_type_1086=0;
char* p_1090;
int sline_1091;
char* sname_1092;
char* head_1093;
struct buffer* source3_1094;
struct buffer* __dec_obj345;
void* __right_value1178 = (void*)0;
char* __dec_obj346;
void* __right_value1179 = (void*)0;
struct sBlock* block_1095;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct sType* result_type_1096;
void* __right_value1182 = (void*)0;
char* name_1097;
void* __right_value1183 = (void*)0;
struct sType* left_type_1098;
void* __right_value1184 = (void*)0;
struct sType* right_type_1099;
struct sType* __list_values27___1100[2];
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
struct list$1sTypeph* param_types_1101;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
char* __list_values28___1102[2];
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct list$1charph* param_names_1103;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
struct list$1charph* param_default_parametors_1104;
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
struct buffer* header_buf_1105;
void* __right_value1195 = (void*)0;
int i_1106;
void* __right_value1196 = (void*)0;
struct sType* param_type_1107;
void* __right_value1197 = (void*)0;
char* param_name_1108;
void* __right_value1198 = (void*)0;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
struct sFun* fun2_1109;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct sFun* fun_1110;
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1213 = (void*)0;
struct sNode* node_1111;
_Bool Value_1113;
struct buffer* __dec_obj351;
char* __dec_obj352;
char* __dec_obj353;
char* __dec_obj354;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
struct tuple2$2sFunpcharph* __result415__;
    last_code_1070=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj343=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1071=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj344=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1072=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1073=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1074=((void*)0);
    real_fun_name_1075=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1076=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1076;
    klass_1077=type->mClass;
    if(    type->mPointerNum>0&&!klass_1077->mNumber) {
        source_1078=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3417, "buffer"))));
        buffer_append_char(source_1078,123);
        if(        klass_1077->mProtocol) {
            name_1079="_protocol_obj";
            char source2_1080[1024];
            memset(&source2_1080, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1080,1024,"return !left.%s.equals(right.%s);\n",name_1079,name_1079);
            buffer_append_str(source_1078,source2_1080);
        }
        else {
            char source2_1081[1024];
            memset(&source2_1081, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1081,1024,"return !(");
            buffer_append_str(source_1078,source2_1081);
            i_1082=0;
            klass_1077=((struct sClass*)(__right_value1177=map$2charphsClassphp_operator_load_element(info->classes,klass_1077->mName)));
            come_call_finalizer3(__right_value1177,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1083=(struct list$1objectph*)come_increment_ref_count((klass_1077->mFields)),it_1084=((__tmp_inf7=list$1objectph_begin((o2_saved_1083))),((struct tuple2$2charphsTypeph*)(__tmp_inf7 ? __tmp_inf7->_protocol_obj:(void*)0)));            !list$1objectph_end((o2_saved_1083));            it_1084=((__tmp_inf8=list$1objectph_next((o2_saved_1083))),((struct tuple2$2charphsTypeph*)(__tmp_inf8 ? __tmp_inf8->_protocol_obj:(void*)0)))            ){
                multiple_assign_var14=it_1084;
                name_1085=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1086=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1087[1024];
                memset(&source2_1087, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1087,1024,"left.%s.equals(right.%s)",name_1085,name_1085);
                buffer_append_str(source_1078,source2_1087);
                if(                i_1082==list$1objectph_length(klass_1077->mFields)-1) {
                    char source2_1088[1024];
                    memset(&source2_1088, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1088,1024,");");
                    buffer_append_str(source_1078,source2_1088);
                }
                else {
                    char source2_1089[1024];
                    memset(&source2_1089, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1089,1024," && ");
                    buffer_append_str(source_1078,source2_1089);
                }
                i_1082++;
                name_1085 = come_decrement_ref_count2(name_1085, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1086,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1083,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1078,125);
        p_1090=info->p;
        sline_1091=info->sline;
        sname_1092=(char*)come_increment_ref_count(info->sname);
        head_1093=info->head;
        source3_1094=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj345=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1078);
        come_call_finalizer3(__dec_obj345,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1078->buf;
        info->head=source_1078->buf;
        __dec_obj346=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1075));
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1095=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1096=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3482, "sType")),"bool",(_Bool)0,info));
        name_1097=(char*)come_increment_ref_count(string_clone(real_fun_name_1075));
        left_type_1098=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1098->mHeap=(_Bool)0;
        right_type_1099=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1099->mHeap=(_Bool)0;
        param_types_1101=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1100[0]=(struct sType*)come_increment_ref_count(left_type_1098),
__list_values27___1100[1]=(struct sType*)come_increment_ref_count(right_type_1099),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3488, "struct list$1sTypeph")),2,__list_values27___1100)));
        param_names_1103=(struct list$1charph*)come_increment_ref_count((__list_values28___1102[0]=(char*)come_increment_ref_count(((char*)(__right_value1187=__builtin_string("left")))),
__list_values28___1102[1]=(char*)come_increment_ref_count(((char*)(__right_value1188=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3489, "struct list$1charph")),2,__list_values28___1102)));
        __right_value1187 = come_decrement_ref_count2(__right_value1187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1188 = come_decrement_ref_count2(__right_value1188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1104=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3490, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1104,((void*)0));
        list$1charph_push_back(param_default_parametors_1104,((void*)0));
        header_buf_1105=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3494, "buffer"))));
        buffer_append_str(header_buf_1105,((char*)(__right_value1195=make_come_type_name_string(result_type_1096,info))));
        __right_value1195 = come_decrement_ref_count2(__right_value1195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1105," ");
        buffer_append_str(header_buf_1105,real_fun_name_1075);
        buffer_append_str(header_buf_1105,"(");
        for(        i_1106=0;        i_1106<list$1sTypeph_length(param_types_1101);        i_1106++        ){
            param_type_1107=((struct sType*)come_null_check(((struct sType*)(__right_value1196=list$1sTypephp_operator_load_element(param_types_1101,i_1106))), "05function.c", 3502, 13));
            come_call_finalizer3(__right_value1196,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1108=((char*)come_null_check(((char*)(__right_value1197=list$1charphp_operator_load_element(param_names_1103,i_1106))), "05function.c", 3503, 14));
            __right_value1197 = come_decrement_ref_count2(__right_value1197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1105,((char*)(__right_value1198=make_come_type_name_string(param_type_1107,info))));
            __right_value1198 = come_decrement_ref_count2(__right_value1198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1105," ");
            buffer_append_str(header_buf_1105,param_name_1108);
            if(            i_1106!=list$1sTypeph_length(param_types_1101)-1) {
                buffer_append_str(header_buf_1105,",");
            }
        }
        buffer_append_str(header_buf_1105,")");
        result_type_1096->mStatic=(_Bool)0;
        result_type_1096->mUniq=(_Bool)0;
        result_type_1096->mInline=(_Bool)0;
        fun2_1109=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1199=__builtin_string(fun_name)))));
        __right_value1199 = come_decrement_ref_count2(__right_value1199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1109==((void*)0)||fun2_1109->mExternal) {
            fun_1110=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3521, "sFun")),(char*)come_increment_ref_count(name_1097),(struct sType*)come_increment_ref_count(result_type_1096),(struct list$1sTypeph*)come_increment_ref_count(param_types_1101),(struct list$1charph*)come_increment_ref_count(param_names_1103),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1104),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1095),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1105)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1097)),(struct sFun*)come_increment_ref_count(fun_1110));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3531, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1209=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3531, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1110),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1111=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1209,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1113=node_compile(node_1111,info);
            if(            !Value_1113) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1074=fun_1110;
            come_call_finalizer3(fun_1110,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1111) { node_1111 = come_decrement_ref_count2(node_1111, ((struct sNode*)node_1111)->finalize, ((struct sNode*)node_1111)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1074=fun2_1109;
        }
        __dec_obj351=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1094);
        come_call_finalizer3(__dec_obj351,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1090;
        info->head=head_1093;
        info->sline=sline_1091;
        __dec_obj352=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1092);
        __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1078,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1092 = come_decrement_ref_count2(sname_1092, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1094,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1095,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1096,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1097 = come_decrement_ref_count2(name_1097, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1098,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1099,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1101,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1103,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1104,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1105,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1109,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1073;
    __dec_obj353=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1070);
    __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj354=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1071);
    __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1072;
    __result415__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1215=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3557, "struct tuple2$2sFunpcharph")),equaler_1074,(char*)come_increment_ref_count(real_fun_name_1075))));
    last_code_1070 = come_decrement_ref_count2(last_code_1070, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1071 = come_decrement_ref_count2(last_code2_1071, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1075 = come_decrement_ref_count2(real_fun_name_1075, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1076,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1215,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1114;
char* __dec_obj355;
char* last_code2_1115;
char* __dec_obj356;
_Bool comma_instead_of_semicolon_1116;
struct sClass* current_stack_frame_struct_1117;
struct sFun* equaler_1118;
void* __right_value1216 = (void*)0;
char* real_fun_name_1119;
void* __right_value1217 = (void*)0;
struct sType* type2_1120;
struct sClass* klass_1121;
void* __right_value1218 = (void*)0;
void* __right_value1219 = (void*)0;
struct buffer* source_1122;
char* name_1123;
void* __right_value1220 = (void*)0;
struct list$1objectph* o2_saved_1126;
struct object* __tmp_inf9;
struct tuple2$2charphsTypeph* it_1127;
struct object* __tmp_inf10;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1128=0;
struct sType* field_type_1129=0;
char* p_1131;
int sline_1132;
char* sname_1133;
char* head_1134;
struct buffer* source3_1135;
struct buffer* __dec_obj357;
void* __right_value1221 = (void*)0;
char* __dec_obj358;
void* __right_value1222 = (void*)0;
struct sBlock* block_1136;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
struct sType* result_type_1137;
void* __right_value1225 = (void*)0;
char* name_1138;
void* __right_value1226 = (void*)0;
struct sType* left_type_1139;
void* __right_value1227 = (void*)0;
struct sType* right_type_1140;
struct sType* __list_values29___1141[2];
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
struct list$1sTypeph* param_types_1142;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
char* __list_values30___1143[2];
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct list$1charph* param_names_1144;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct list$1charph* param_default_parametors_1145;
void* __right_value1236 = (void*)0;
void* __right_value1237 = (void*)0;
struct buffer* header_buf_1146;
void* __right_value1238 = (void*)0;
int i_1147;
void* __right_value1239 = (void*)0;
struct sType* param_type_1148;
void* __right_value1240 = (void*)0;
char* param_name_1149;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
void* __right_value1243 = (void*)0;
struct sFun* fun2_1150;
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
struct sFun* fun_1151;
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1256 = (void*)0;
struct sNode* node_1152;
_Bool Value_1154;
struct buffer* __dec_obj363;
char* __dec_obj364;
char* __dec_obj365;
char* __dec_obj366;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct tuple2$2sFunpcharph* __result418__;
    last_code_1114=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj355=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1115=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj356=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1116=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1117=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1118=((void*)0);
    real_fun_name_1119=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1120=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1120;
    klass_1121=type->mClass;
    if(    type->mPointerNum>0&&!klass_1121->mNumber) {
        source_1122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3582, "buffer"))));
        buffer_append_char(source_1122,123);
        if(        klass_1121->mProtocol) {
            name_1123="_protocol_obj";
            char source2_1124[1024];
            memset(&source2_1124, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1124,1024,"return left.%s === right.%s;\n",name_1123,name_1123);
            buffer_append_str(source_1122,source2_1124);
        }
        else {
            char source2_1125[1024];
            memset(&source2_1125, 0, sizeof(char)            *(1024)            );
            klass_1121=((struct sClass*)(__right_value1220=map$2charphsClassphp_operator_load_element(info->classes,klass_1121->mName)));
            come_call_finalizer3(__right_value1220,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1126=(struct list$1objectph*)come_increment_ref_count((klass_1121->mFields)),it_1127=((__tmp_inf9=list$1objectph_begin((o2_saved_1126))),((struct tuple2$2charphsTypeph*)(__tmp_inf9 ? __tmp_inf9->_protocol_obj:(void*)0)));            !list$1objectph_end((o2_saved_1126));            it_1127=((__tmp_inf10=list$1objectph_next((o2_saved_1126))),((struct tuple2$2charphsTypeph*)(__tmp_inf10 ? __tmp_inf10->_protocol_obj:(void*)0)))            ){
                multiple_assign_var15=it_1127;
                name_1128=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1129=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1130[1024];
                memset(&source2_1130, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1130,1024,"if(left.%s !== right.%s) { return false; }\n",name_1128,name_1128,name_1128);
                buffer_append_str(source_1122,source2_1130);
                name_1128 = come_decrement_ref_count2(name_1128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1129,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1126,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1122,"return true;\n");
        buffer_append_char(source_1122,125);
        p_1131=info->p;
        sline_1132=info->sline;
        sname_1133=(char*)come_increment_ref_count(info->sname);
        head_1134=info->head;
        source3_1135=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj357=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1122);
        come_call_finalizer3(__dec_obj357,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1122->buf;
        info->head=source_1122->buf;
        __dec_obj358=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1119));
        __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1136=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1137=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3632, "sType")),"bool",(_Bool)0,info));
        name_1138=(char*)come_increment_ref_count(string_clone(real_fun_name_1119));
        left_type_1139=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1139->mHeap=(_Bool)0;
        right_type_1140=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1140->mHeap=(_Bool)0;
        param_types_1142=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1141[0]=(struct sType*)come_increment_ref_count(left_type_1139),
__list_values29___1141[1]=(struct sType*)come_increment_ref_count(right_type_1140),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3638, "struct list$1sTypeph")),2,__list_values29___1141)));
        param_names_1144=(struct list$1charph*)come_increment_ref_count((__list_values30___1143[0]=(char*)come_increment_ref_count(((char*)(__right_value1230=__builtin_string("left")))),
__list_values30___1143[1]=(char*)come_increment_ref_count(((char*)(__right_value1231=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3639, "struct list$1charph")),2,__list_values30___1143)));
        __right_value1230 = come_decrement_ref_count2(__right_value1230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1231 = come_decrement_ref_count2(__right_value1231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1145=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3640, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1145,((void*)0));
        list$1charph_push_back(param_default_parametors_1145,((void*)0));
        header_buf_1146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3644, "buffer"))));
        buffer_append_str(header_buf_1146,((char*)(__right_value1238=make_come_type_name_string(result_type_1137,info))));
        __right_value1238 = come_decrement_ref_count2(__right_value1238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1146," ");
        buffer_append_str(header_buf_1146,real_fun_name_1119);
        buffer_append_str(header_buf_1146,"(");
        for(        i_1147=0;        i_1147<list$1sTypeph_length(param_types_1142);        i_1147++        ){
            param_type_1148=((struct sType*)come_null_check(((struct sType*)(__right_value1239=list$1sTypephp_operator_load_element(param_types_1142,i_1147))), "05function.c", 3652, 15));
            come_call_finalizer3(__right_value1239,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1149=((char*)come_null_check(((char*)(__right_value1240=list$1charphp_operator_load_element(param_names_1144,i_1147))), "05function.c", 3653, 16));
            __right_value1240 = come_decrement_ref_count2(__right_value1240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1146,((char*)(__right_value1241=make_come_type_name_string(param_type_1148,info))));
            __right_value1241 = come_decrement_ref_count2(__right_value1241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1146," ");
            buffer_append_str(header_buf_1146,param_name_1149);
            if(            i_1147!=list$1sTypeph_length(param_types_1142)-1) {
                buffer_append_str(header_buf_1146,",");
            }
        }
        buffer_append_str(header_buf_1146,")");
        result_type_1137->mStatic=(_Bool)0;
        result_type_1137->mUniq=(_Bool)0;
        result_type_1137->mInline=(_Bool)0;
        fun2_1150=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1242=__builtin_string(fun_name)))));
        __right_value1242 = come_decrement_ref_count2(__right_value1242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1150==((void*)0)||fun2_1150->mExternal) {
            fun_1151=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3671, "sFun")),(char*)come_increment_ref_count(name_1138),(struct sType*)come_increment_ref_count(result_type_1137),(struct list$1sTypeph*)come_increment_ref_count(param_types_1142),(struct list$1charph*)come_increment_ref_count(param_names_1144),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1145),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1136),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1146)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1138)),(struct sFun*)come_increment_ref_count(fun_1151));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3681, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1252=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3681, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1151),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1152=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1252,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1154=node_compile(node_1152,info);
            if(            !Value_1154) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1118=fun_1151;
            come_call_finalizer3(fun_1151,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1152) { node_1152 = come_decrement_ref_count2(node_1152, ((struct sNode*)node_1152)->finalize, ((struct sNode*)node_1152)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1118=fun2_1150;
        }
        __dec_obj363=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1135);
        come_call_finalizer3(__dec_obj363,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1131;
        info->head=head_1134;
        info->sline=sline_1132;
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1133);
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1122,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1133 = come_decrement_ref_count2(sname_1133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1135,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1136,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1137,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1138 = come_decrement_ref_count2(name_1138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1139,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1140,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1142,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1144,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1145,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1146,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1150,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1117;
    __dec_obj365=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1114);
    __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj366=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1115);
    __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1116;
    __result418__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1258=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3707, "struct tuple2$2sFunpcharph")),equaler_1118,(char*)come_increment_ref_count(real_fun_name_1119))));
    last_code_1114 = come_decrement_ref_count2(last_code_1114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1115 = come_decrement_ref_count2(last_code2_1115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1119 = come_decrement_ref_count2(real_fun_name_1119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1120,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1258,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1155;
char* __dec_obj367;
char* last_code2_1156;
char* __dec_obj368;
_Bool comma_instead_of_semicolon_1157;
struct sClass* current_stack_frame_struct_1158;
struct sFun* cloner_1159;
void* __right_value1259 = (void*)0;
char* real_fun_name_1160;
void* __right_value1260 = (void*)0;
struct sType* type2_1161;
struct sClass* klass_1162;
void* __right_value1261 = (void*)0;
void* __right_value1262 = (void*)0;
struct buffer* source_1163;
void* __right_value1263 = (void*)0;
char* name_1164;
void* __right_value1264 = (void*)0;
struct list$1objectph* o2_saved_1166;
struct object* __tmp_inf11;
struct tuple2$2charphsTypeph* it_1167;
struct object* __tmp_inf12;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1168=0;
struct sType* field_type_1169=0;
void* __right_value1265 = (void*)0;
struct list$1objectph* o2_saved_1172;
struct object* __tmp_inf13;
struct tuple2$2charphsTypeph* it_1173;
struct object* __tmp_inf14;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1174=0;
struct sType* field_type_1175=0;
char* p_1179;
int sline_1180;
char* sname_1181;
struct buffer* source3_1182;
char* head_1183;
struct buffer* __dec_obj369;
void* __right_value1266 = (void*)0;
char* __dec_obj370;
void* __right_value1267 = (void*)0;
struct sBlock* block_1184;
void* __right_value1268 = (void*)0;
struct sType* result_type_1185;
void* __right_value1269 = (void*)0;
char* name_1186;
void* __right_value1270 = (void*)0;
struct sType* self_type_1187;
struct sType* __list_values31___1188[1];
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
struct list$1sTypeph* param_types_1189;
void* __right_value1273 = (void*)0;
char* __list_values32___1190[1];
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct list$1charph* param_names_1191;
void* __right_value1276 = (void*)0;
void* __right_value1277 = (void*)0;
struct list$1charph* param_default_parametors_1192;
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
struct buffer* header_buf_1193;
void* __right_value1280 = (void*)0;
int i_1194;
void* __right_value1281 = (void*)0;
struct sType* param_type_1195;
void* __right_value1282 = (void*)0;
char* param_name_1196;
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
void* __right_value1285 = (void*)0;
struct sFun* fun2_1197;
void* __right_value1286 = (void*)0;
void* __right_value1287 = (void*)0;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct sFun* fun_1198;
void* __right_value1292 = (void*)0;
void* __right_value1293 = (void*)0;
void* __right_value1294 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1298 = (void*)0;
struct sNode* node_1199;
_Bool Value_1201;
char* __dec_obj375;
struct buffer* __dec_obj376;
char* __dec_obj377;
char* __dec_obj378;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
struct tuple2$2sFunpcharph* __result421__;
    last_code_1155=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj367=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1156=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj368=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1157=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1158=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1159=((void*)0);
    real_fun_name_1160=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1161=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1161;
    klass_1162=type->mClass;
    if(    type->mPointerNum>0&&!klass_1162->mNumber) {
        source_1163=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3732, "buffer"))));
        buffer_append_str(source_1163,"{\n");
        buffer_append_str(source_1163,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1163,"var result = new %s;\n",((char*)(__right_value1263=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1263 = come_decrement_ref_count2(__right_value1263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1162->mProtocol) {
            name_1164="_protocol_obj";
            char source2_1165[1024];
            memset(&source2_1165, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1165,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1163,source2_1165);
            klass_1162=((struct sClass*)(__right_value1264=map$2charphsClassphp_operator_load_element(info->classes,klass_1162->mName)));
            come_call_finalizer3(__right_value1264,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1166=(struct list$1objectph*)come_increment_ref_count((klass_1162->mFields)),it_1167=((__tmp_inf11=list$1objectph_begin((o2_saved_1166))),((struct tuple2$2charphsTypeph*)(__tmp_inf11 ? __tmp_inf11->_protocol_obj:(void*)0)));            !list$1objectph_end((o2_saved_1166));            it_1167=((__tmp_inf12=list$1objectph_next((o2_saved_1166))),((struct tuple2$2charphsTypeph*)(__tmp_inf12 ? __tmp_inf12->_protocol_obj:(void*)0)))            ){
                multiple_assign_var16=it_1167;
                name_1168=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1169=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(name_1168,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1169->mArrayNum)>0) {
                    char source2_1170[1024];
                    memset(&source2_1170, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1170,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1168,name_1168,name_1168);
                    buffer_append_str(source_1163,source2_1170);
                }
                else {
                    char source2_1171[1024];
                    memset(&source2_1171, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1171,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1168,name_1168);
                    buffer_append_str(source_1163,source2_1171);
                }
                name_1168 = come_decrement_ref_count2(name_1168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1169,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1166,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1162=((struct sClass*)(__right_value1265=map$2charphsClassphp_operator_load_element(info->classes,klass_1162->mName)));
            come_call_finalizer3(__right_value1265,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1172=(struct list$1objectph*)come_increment_ref_count((klass_1162->mFields)),it_1173=((__tmp_inf13=list$1objectph_begin((o2_saved_1172))),((struct tuple2$2charphsTypeph*)(__tmp_inf13 ? __tmp_inf13->_protocol_obj:(void*)0)));            !list$1objectph_end((o2_saved_1172));            it_1173=((__tmp_inf14=list$1objectph_next((o2_saved_1172))),((struct tuple2$2charphsTypeph*)(__tmp_inf14 ? __tmp_inf14->_protocol_obj:(void*)0)))            ){
                multiple_assign_var17=it_1173;
                name_1174=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1175=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                field_type_1175->mHeap) {
                    char source2_1176[1024];
                    memset(&source2_1176, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1176,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1174,name_1174,name_1174);
                    buffer_append_str(source_1163,source2_1176);
                }
                else if(                list$1sNodeph_length(field_type_1175->mArrayNum)>0) {
                    char source2_1177[1024];
                    memset(&source2_1177, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1177,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1174,name_1174,name_1174);
                    buffer_append_str(source_1163,source2_1177);
                }
                else {
                    char source2_1178[1024];
                    memset(&source2_1178, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1178,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1174,name_1174);
                    buffer_append_str(source_1163,source2_1178);
                }
                name_1174 = come_decrement_ref_count2(name_1174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1175,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1172,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1163,"return result;");
        buffer_append_char(source_1163,125);
        p_1179=info->p;
        sline_1180=info->sline;
        sname_1181=(char*)come_increment_ref_count(info->sname);
        source3_1182=(struct buffer*)come_increment_ref_count(info->source);
        head_1183=info->head;
        __dec_obj369=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1163);
        come_call_finalizer3(__dec_obj369,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj370=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1160));
        __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1184=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1185=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1186=(char*)come_increment_ref_count(string_clone(real_fun_name_1160));
        self_type_1187=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1187->mHeap=(_Bool)0;
        param_types_1189=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1188[0]=(struct sType*)come_increment_ref_count(self_type_1187),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3830, "struct list$1sTypeph")),1,__list_values31___1188)));
        param_names_1191=(struct list$1charph*)come_increment_ref_count((__list_values32___1190[0]=(char*)come_increment_ref_count(((char*)(__right_value1273=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3831, "struct list$1charph")),1,__list_values32___1190)));
        __right_value1273 = come_decrement_ref_count2(__right_value1273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1192=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3832, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1192,((void*)0));
        header_buf_1193=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3835, "buffer"))));
        buffer_append_str(header_buf_1193,((char*)(__right_value1280=make_come_type_name_string(result_type_1185,info))));
        __right_value1280 = come_decrement_ref_count2(__right_value1280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1193," ");
        buffer_append_str(header_buf_1193,real_fun_name_1160);
        buffer_append_str(header_buf_1193,"(");
        for(        i_1194=0;        i_1194<list$1sTypeph_length(param_types_1189);        i_1194++        ){
            param_type_1195=((struct sType*)come_null_check(((struct sType*)(__right_value1281=list$1sTypephp_operator_load_element(param_types_1189,i_1194))), "05function.c", 3843, 17));
            come_call_finalizer3(__right_value1281,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1196=((char*)come_null_check(((char*)(__right_value1282=list$1charphp_operator_load_element(param_names_1191,i_1194))), "05function.c", 3844, 18));
            __right_value1282 = come_decrement_ref_count2(__right_value1282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1193,((char*)(__right_value1283=make_come_type_name_string(param_type_1195,info))));
            __right_value1283 = come_decrement_ref_count2(__right_value1283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1193," ");
            buffer_append_str(header_buf_1193,param_name_1196);
            if(            i_1194!=list$1sTypeph_length(param_types_1189)-1) {
                buffer_append_str(header_buf_1193,",");
            }
        }
        buffer_append_str(header_buf_1193,")");
        result_type_1185->mStatic=(_Bool)0;
        result_type_1185->mUniq=(_Bool)0;
        result_type_1185->mInline=(_Bool)0;
        fun2_1197=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1284=__builtin_string(fun_name)))));
        __right_value1284 = come_decrement_ref_count2(__right_value1284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1197==((void*)0)||fun2_1197->mExternal) {
            fun_1198=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3862, "sFun")),(char*)come_increment_ref_count(name_1186),(struct sType*)come_increment_ref_count(result_type_1185),(struct list$1sTypeph*)come_increment_ref_count(param_types_1189),(struct list$1charph*)come_increment_ref_count(param_names_1191),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1192),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1184),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1193)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1198->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1186)),(struct sFun*)come_increment_ref_count(fun_1198));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3874, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1294=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3874, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1198),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1199=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1294,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1201=node_compile(node_1199,info);
            if(            !Value_1201) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1159=fun_1198;
            come_call_finalizer3(fun_1198,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1199) { node_1199 = come_decrement_ref_count2(node_1199, ((struct sNode*)node_1199)->finalize, ((struct sNode*)node_1199)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1159=fun2_1197;
        }
        __dec_obj375=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1181);
        __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1180;
        __dec_obj376=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1182);
        come_call_finalizer3(__dec_obj376,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1179;
        info->head=head_1183;
        info->sline=sline_1180;
        come_call_finalizer3(source_1163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1181 = come_decrement_ref_count2(sname_1181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1182,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1184,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1185,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1186 = come_decrement_ref_count2(name_1186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1189,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1191,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1192,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1193,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1197,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1158;
    __dec_obj377=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1155);
    __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj378=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1156);
    __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1157;
    __result421__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1300=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3902, "struct tuple2$2sFunpcharph")),cloner_1159,(char*)come_increment_ref_count(real_fun_name_1160))));
    last_code_1155 = come_decrement_ref_count2(last_code_1155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1156 = come_decrement_ref_count2(last_code2_1156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1160 = come_decrement_ref_count2(real_fun_name_1160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1161,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1300,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1202;
char* __dec_obj379;
char* last_code2_1203;
char* __dec_obj380;
_Bool comma_instead_of_semicolon_1204;
struct sClass* current_stack_frame_struct_1205;
struct sFun* cloner_1206;
void* __right_value1301 = (void*)0;
char* real_fun_name_1207;
void* __right_value1302 = (void*)0;
struct sType* type2_1208;
struct sClass* klass_1209;
void* __right_value1303 = (void*)0;
void* __right_value1304 = (void*)0;
struct buffer* source_1210;
int i_1211;
void* __right_value1305 = (void*)0;
struct list$1objectph* o2_saved_1212;
struct object* __tmp_inf15;
struct tuple2$2charphsTypeph* it_1213;
struct object* __tmp_inf16;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1214=0;
struct sType* field_type_1215=0;
char* p_1218;
int sline_1219;
char* sname_1220;
struct buffer* source3_1221;
char* head_1222;
struct buffer* __dec_obj381;
void* __right_value1306 = (void*)0;
char* __dec_obj382;
void* __right_value1307 = (void*)0;
struct sBlock* block_1223;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
struct sType* result_type_1224;
void* __right_value1310 = (void*)0;
char* name_1225;
void* __right_value1311 = (void*)0;
struct sType* self_type_1226;
struct sType* __list_values33___1227[1];
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
struct list$1sTypeph* param_types_1228;
void* __right_value1314 = (void*)0;
char* __list_values34___1229[1];
void* __right_value1315 = (void*)0;
void* __right_value1316 = (void*)0;
struct list$1charph* param_names_1230;
void* __right_value1317 = (void*)0;
void* __right_value1318 = (void*)0;
struct list$1charph* param_default_parametors_1231;
void* __right_value1319 = (void*)0;
void* __right_value1320 = (void*)0;
struct buffer* header_buf_1232;
void* __right_value1321 = (void*)0;
int i_1233;
void* __right_value1322 = (void*)0;
struct sType* param_type_1234;
void* __right_value1323 = (void*)0;
char* param_name_1235;
void* __right_value1324 = (void*)0;
void* __right_value1325 = (void*)0;
void* __right_value1326 = (void*)0;
struct sFun* fun2_1236;
void* __right_value1327 = (void*)0;
void* __right_value1328 = (void*)0;
void* __right_value1329 = (void*)0;
void* __right_value1330 = (void*)0;
void* __right_value1331 = (void*)0;
void* __right_value1332 = (void*)0;
struct sFun* fun_1237;
void* __right_value1333 = (void*)0;
void* __right_value1334 = (void*)0;
void* __right_value1335 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1339 = (void*)0;
struct sNode* node_1238;
_Bool Value_1240;
char* __dec_obj387;
struct buffer* __dec_obj388;
char* __dec_obj389;
char* __dec_obj390;
void* __right_value1340 = (void*)0;
void* __right_value1341 = (void*)0;
struct tuple2$2sFunpcharph* __result424__;
    last_code_1202=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj379=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1203=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj380=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj380 = come_decrement_ref_count2(__dec_obj380, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1204=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1205=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1206=((void*)0);
    real_fun_name_1207=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1208=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1208;
    klass_1209=type->mClass;
    if(    type->mPointerNum>0&&!klass_1209->mNumber) {
        source_1210=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3927, "buffer"))));
        buffer_append_str(source_1210,"{\n");
        buffer_append_str(source_1210,"var result = new buffer();\n");
        buffer_append_format(source_1210,"result.append_str(\"%s {\");\n",klass_1209->mName);
        i_1211=0;
        klass_1209=((struct sClass*)(__right_value1305=map$2charphsClassphp_operator_load_element(info->classes,klass_1209->mName)));
        come_call_finalizer3(__right_value1305,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1212=(struct list$1objectph*)come_increment_ref_count((klass_1209->mFields)),it_1213=((__tmp_inf15=list$1objectph_begin((o2_saved_1212))),((struct tuple2$2charphsTypeph*)(__tmp_inf15 ? __tmp_inf15->_protocol_obj:(void*)0)));        !list$1objectph_end((o2_saved_1212));        it_1213=((__tmp_inf16=list$1objectph_next((o2_saved_1212))),((struct tuple2$2charphsTypeph*)(__tmp_inf16 ? __tmp_inf16->_protocol_obj:(void*)0)))        ){
            multiple_assign_var18=it_1213;
            name_1214=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1215=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            i_1211==list$1objectph_length(klass_1209->mFields)-1) {
                char source2_1216[1024];
                memset(&source2_1216, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1216,1024,"result.append_str(\"%s:\");\n",name_1214);
                buffer_append_str(source_1210,source2_1216);
                snprintf(source2_1216,1024,"result.append_str(self.%s.to_string());\n",name_1214);
                buffer_append_str(source_1210,source2_1216);
            }
            else {
                char source2_1217[1024];
                memset(&source2_1217, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1217,1024,"result.append_str(\"%s:\");\n",name_1214);
                buffer_append_str(source_1210,source2_1217);
                snprintf(source2_1217,1024,"result.append_str(self.%s.to_string());\n",name_1214);
                buffer_append_str(source_1210,source2_1217);
                snprintf(source2_1217,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1210,source2_1217);
            }
            i_1211++;
            name_1214 = come_decrement_ref_count2(name_1214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1215,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1212,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1210,"result.append_str(\"}\");\n");
        buffer_append_format(source_1210,"return result.to_string();\n");
        buffer_append_char(source_1210,125);
        p_1218=info->p;
        sline_1219=info->sline;
        sname_1220=(char*)come_increment_ref_count(info->sname);
        source3_1221=(struct buffer*)come_increment_ref_count(info->source);
        head_1222=info->head;
        __dec_obj381=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1210);
        come_call_finalizer3(__dec_obj381,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj382=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1207));
        __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1223=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1224=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3996, "sType")),"char*",(_Bool)0,info));
        result_type_1224->mHeap=(_Bool)1;
        name_1225=(char*)come_increment_ref_count(string_clone(real_fun_name_1207));
        self_type_1226=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1226->mHeap=(_Bool)0;
        param_types_1228=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1227[0]=(struct sType*)come_increment_ref_count(self_type_1226),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4001, "struct list$1sTypeph")),1,__list_values33___1227)));
        param_names_1230=(struct list$1charph*)come_increment_ref_count((__list_values34___1229[0]=(char*)come_increment_ref_count(((char*)(__right_value1314=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4002, "struct list$1charph")),1,__list_values34___1229)));
        __right_value1314 = come_decrement_ref_count2(__right_value1314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1231=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4003, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1231,((void*)0));
        header_buf_1232=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4006, "buffer"))));
        buffer_append_str(header_buf_1232,((char*)(__right_value1321=make_come_type_name_string(result_type_1224,info))));
        __right_value1321 = come_decrement_ref_count2(__right_value1321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1232," ");
        buffer_append_str(header_buf_1232,real_fun_name_1207);
        buffer_append_str(header_buf_1232,"(");
        for(        i_1233=0;        i_1233<list$1sTypeph_length(param_types_1228);        i_1233++        ){
            param_type_1234=((struct sType*)come_null_check(((struct sType*)(__right_value1322=list$1sTypephp_operator_load_element(param_types_1228,i_1233))), "05function.c", 4014, 19));
            come_call_finalizer3(__right_value1322,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1235=((char*)come_null_check(((char*)(__right_value1323=list$1charphp_operator_load_element(param_names_1230,i_1233))), "05function.c", 4015, 20));
            __right_value1323 = come_decrement_ref_count2(__right_value1323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1232,((char*)(__right_value1324=make_come_type_name_string(param_type_1234,info))));
            __right_value1324 = come_decrement_ref_count2(__right_value1324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1232," ");
            buffer_append_str(header_buf_1232,param_name_1235);
            if(            i_1233!=list$1sTypeph_length(param_types_1228)-1) {
                buffer_append_str(header_buf_1232,",");
            }
        }
        buffer_append_str(header_buf_1232,")");
        result_type_1224->mStatic=(_Bool)0;
        result_type_1224->mUniq=(_Bool)0;
        result_type_1224->mInline=(_Bool)0;
        fun2_1236=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1325=__builtin_string(fun_name)))));
        __right_value1325 = come_decrement_ref_count2(__right_value1325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1236==((void*)0)||fun2_1236->mExternal) {
            fun_1237=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4033, "sFun")),(char*)come_increment_ref_count(name_1225),(struct sType*)come_increment_ref_count(result_type_1224),(struct list$1sTypeph*)come_increment_ref_count(param_types_1228),(struct list$1charph*)come_increment_ref_count(param_names_1230),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1231),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1223),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1232)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1237->mCloner=(_Bool)1;
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1225)),(struct sFun*)come_increment_ref_count(fun_1237));
            cloner_1206=fun_1237;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4047, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1335=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4047, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1237),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1238=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1335,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1240=node_compile(node_1238,info);
            if(            !Value_1240) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1237,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1238) { node_1238 = come_decrement_ref_count2(node_1238, ((struct sNode*)node_1238)->finalize, ((struct sNode*)node_1238)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1206=fun2_1236;
        }
        __dec_obj387=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1220);
        __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1219;
        __dec_obj388=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1221);
        come_call_finalizer3(__dec_obj388,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1218;
        info->head=head_1222;
        info->sline=sline_1219;
        come_call_finalizer3(source_1210,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1220 = come_decrement_ref_count2(sname_1220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1221,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1223,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1224,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1225 = come_decrement_ref_count2(name_1225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1226,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1228,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1230,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1231,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1232,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1236,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1205;
    __dec_obj389=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1202);
    __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj390=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1203);
    __dec_obj390 = come_decrement_ref_count2(__dec_obj390, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1204;
    __result424__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1341=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4073, "struct tuple2$2sFunpcharph")),cloner_1206,(char*)come_increment_ref_count(real_fun_name_1207))));
    last_code_1202 = come_decrement_ref_count2(last_code_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1203 = come_decrement_ref_count2(last_code2_1203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1207 = come_decrement_ref_count2(real_fun_name_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1208,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1341,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result424__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj383;
struct sFun* __dec_obj384;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj383=self->sname;
            __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj384=self->mFun;
            come_call_finalizer3(__dec_obj384,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result422__;
void* __right_value1336 = (void*)0;
struct sFunNode* result_1239;
void* __right_value1337 = (void*)0;
char* __dec_obj385;
void* __right_value1338 = (void*)0;
struct sFun* __dec_obj386;
struct sFunNode* __result423__;
    if(    self==(void*)0) {
        __result422__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result422__;
    }
    result_1239=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1239->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj385=result_1239->sname;
        result_1239->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj385 = come_decrement_ref_count2(__dec_obj385, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1239->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj386=result_1239->mFun;
        result_1239->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj386,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result423__ = gComeFunResultObject = __result_obj__ = result_1239;
    come_call_finalizer3(result_1239,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

