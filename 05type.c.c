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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1objectph_finalize(struct list$1objectph* self);
static void list_item$1objectphp_finalize(struct list_item$1objectph* self);
static void list$1objectphp_finalize(struct list$1objectph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value249 = (void*)0;
struct sClass* klass_266;
void* __right_value250 = (void*)0;
struct sType* type_274;
void* __right_value251 = (void*)0;
struct sClass* generics_class_288;
void* __right_value252 = (void*)0;
_Bool generics_type_name_289;
void* __right_value253 = (void*)0;
_Bool mgenerics_type_name_295;
    klass_266=((struct sClass*)(__right_value249=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value249,sClass_finalize, 0, 1, 0, 0, (void*)0);
    type_274=((struct sType*)(__right_value250=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
    generics_class_288=((struct sClass*)(__right_value251=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer3(__right_value251,sClass_finalize, 0, 1, 0, 0, (void*)0);
    generics_type_name_289=list$1charph_contained(info->generics_type_names,((char*)(__right_value252=__builtin_string(buf))));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_295=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value253=__builtin_string(buf))));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_274&&type_274->mTypedef)||(klass_266&&klass_266->mNumber)||(klass_266&&klass_266->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_288||generics_type_name_289||mgenerics_type_name_295||klass_266||type_274||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_267;
unsigned int hash_268;
unsigned int it_269;
struct sClass* __result207__;
struct sClass* __result208__;
struct sClass* __result209__;
struct sClass* __result210__;
default_value_267 = (void*)0;
    memset(&default_value_267,0,sizeof(struct sClass*));
    hash_268=charp_get_hash_key(((char*)key))%self->size;
    it_269=hash_268;
    while((_Bool)1) {
        if(        self->item_existance[it_269]) {
            if(            charp_equals(self->keys[it_269],key)) {
                __result207__ = gComeFunResultObject = __result_obj__ = self->items[it_269];
                come_call_finalizer3(default_value_267,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result207__;
            }
            it_269++;
            if(            it_269>=self->size) {
                it_269=0;
            }
            else if(            it_269==hash_268) {
                __result208__ = gComeFunResultObject = __result_obj__ = default_value_267;
                come_call_finalizer3(default_value_267,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result208__;
            }
        }
        else {
            __result209__ = gComeFunResultObject = __result_obj__ = default_value_267;
            come_call_finalizer3(default_value_267,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result209__;
        }
    }
    __result210__ = gComeFunResultObject = __result_obj__ = default_value_267;
    come_call_finalizer3(default_value_267,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj32;
struct list$1objectph* __dec_obj33;
char* __dec_obj35;
char* __dec_obj36;
char* __dec_obj37;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj32=self->mName;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj33=self->mFields;
            come_call_finalizer3(__dec_obj33,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj35=self->mDeclareSName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj36=self->mParentClassName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj37=self->mAttribute;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct object* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct object*)__dec_obj34)->finalize, ((struct object*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
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

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_275;
unsigned int hash_276;
unsigned int it_277;
struct sType* __result211__;
struct sType* __result212__;
struct sType* __result213__;
struct sType* __result214__;
default_value_275 = (void*)0;
    memset(&default_value_275,0,sizeof(struct sType*));
    hash_276=charp_get_hash_key(((char*)key))%self->size;
    it_277=hash_276;
    while((_Bool)1) {
        if(        self->item_existance[it_277]) {
            if(            charp_equals(self->keys[it_277],key)) {
                __result211__ = gComeFunResultObject = __result_obj__ = self->items[it_277];
                come_call_finalizer3(default_value_275,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result211__;
            }
            it_277++;
            if(            it_277>=self->size) {
                it_277=0;
            }
            else if(            it_277==hash_276) {
                __result212__ = gComeFunResultObject = __result_obj__ = default_value_275;
                come_call_finalizer3(default_value_275,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result212__;
            }
        }
        else {
            __result213__ = gComeFunResultObject = __result_obj__ = default_value_275;
            come_call_finalizer3(default_value_275,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result213__;
        }
    }
    __result214__ = gComeFunResultObject = __result_obj__ = default_value_275;
    come_call_finalizer3(default_value_275,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj40;
struct tuple1$1sTypeph* __dec_obj42;
char* __dec_obj44;
char* __dec_obj45;
struct list$1sTypeph* __dec_obj46;
struct list$1sNodeph* __dec_obj48;
struct list$1sTypeph* __dec_obj50;
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
            __dec_obj38=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj38,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj40=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj40,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj42=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj42,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj44=self->mInterfaceName;
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj45=self->mGenericsName;
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj46=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj48=self->mArrayNum;
            come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj50=self->mParamTypes;
            come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sTypeph* it_280;
struct list_item$1sTypeph* prev_it_281;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        come_call_finalizer3(prev_it_281,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_282;
struct list_item$1sNodeph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj49;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj49=self->item;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_284;
struct list_item$1sNodeph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer3(prev_it_285,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_286;
struct list_item$1charph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_292;
    for(    it_292=list$1charph_begin(self);    !list$1charph_end(self);    it_292=list$1charph_next(self)    ){
        if(        charp_equals(it_292,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_290;
char* __result215__;
char* __result216__;
char* result_291;
char* __result217__;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_290,0,sizeof(char*));
        __result215__ = gComeFunResultObject = __result_obj__ = result_290;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    self->it=self->head;
    if(    self->it) {
        __result216__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    memset(&result_291,0,sizeof(char*));
    __result217__ = gComeFunResultObject = __result_obj__ = result_291;
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_293;
char* __result218__;
char* __result219__;
char* result_294;
char* __result220__;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_293,0,sizeof(char*));
        __result218__ = gComeFunResultObject = __result_obj__ = result_293;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result219__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    memset(&result_294,0,sizeof(char*));
    __result220__ = gComeFunResultObject = __result_obj__ = result_294;
    gComeFunResultObject = (void*)0;
    return __result220__;
}

void skip_paren(struct sInfo* info){
int nest_296;
    nest_296=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_296++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_296--;
            if(            nest_296==0) {
                break;
            }
        }
        else if(        *info->p==0) {
            err_msg(info,"invalid the source end. require )");
            break;
        }
        else {
            info->p++;
        }
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_297;
    c_297=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_297==59||c_297==32||c_297==9||c_297==10||c_297==10||c_297==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* buf_298;
void* __right_value256 = (void*)0;
_Bool _if_conditional1;
void* __right_value257 = (void*)0;
char* __result221__;
void* __right_value258 = (void*)0;
char* result_299;
void* __right_value259 = (void*)0;
_Bool _if_conditional2;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __result226__;
char* __result227__;
    buf_298=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 92, "buffer"))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_298,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value256=buffer_to_string(buf_298))))==0)),    (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line);
        __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string("")));
        come_call_finalizer3(buf_298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_299=(char*)come_increment_ref_count(buffer_to_string(buf_298));
    if(    (_if_conditional2=(info->module_params&&((char*)(__right_value259=map$2charphcharphp_operator_load_element(info->module_params,result_299))))),    (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional2) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string(((char*)come_null_check(((char*)(__right_value260=map$2charphcharphp_operator_load_element(info->module_params,result_299))), "05type.c", 110, 0)))));
        come_call_finalizer3(buf_298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_299 = come_decrement_ref_count2(result_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_299;
    come_call_finalizer3(buf_298,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_299 = come_decrement_ref_count2(result_299, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_300;
unsigned int hash_301;
unsigned int it_302;
char* __result222__;
char* __result223__;
char* __result224__;
char* __result225__;
default_value_300 = (void*)0;
    memset(&default_value_300,0,sizeof(char*));
    hash_301=charp_get_hash_key(((char*)key))%self->size;
    it_302=hash_301;
    while((_Bool)1) {
        if(        self->item_existance[it_302]) {
            if(            charp_equals(self->keys[it_302],key)) {
                __result222__ = gComeFunResultObject = __result_obj__ = self->items[it_302];
                default_value_300 = come_decrement_ref_count2(default_value_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result222__;
            }
            it_302++;
            if(            it_302>=self->size) {
                it_302=0;
            }
            else if(            it_302==hash_301) {
                __result223__ = gComeFunResultObject = __result_obj__ = default_value_300;
                default_value_300 = come_decrement_ref_count2(default_value_300, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result223__;
            }
        }
        else {
            __result224__ = gComeFunResultObject = __result_obj__ = default_value_300;
            default_value_300 = come_decrement_ref_count2(default_value_300, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result224__;
        }
    }
    __result225__ = gComeFunResultObject = __result_obj__ = default_value_300;
    default_value_300 = come_decrement_ref_count2(default_value_300, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_303;
int sline_304;
char* buf_305;
void* __right_value262 = (void*)0;
char* __dec_obj62;
void* __right_value263 = (void*)0;
char* __dec_obj63;
char* __result228__;
buf_305 = (void*)0;
    p_303=info->p;
    sline_304=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj62=buf_305;
        buf_305=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj63=buf_305;
        buf_305=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_303;
    info->sline=sline_304;
    __result228__ = gComeFunResultObject = __result_obj__ = buf_305;
    buf_305 = come_decrement_ref_count2(buf_305, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
}

void skip_spaces_and_lf2(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_306;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* fname_307;
void* __right_value266 = (void*)0;
char* __dec_obj64;
int nest_308;
    while(1) {
        if(        *info->p==35) {
            skip_spaces_and_lf2(info);
            info->p++;
            skip_spaces_and_lf2(info);
            if(            strmemcmp(info->p,"pragma")) {
                while(*info->p) {
                    if(                    *info->p==10) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            else if(            xisdigit(*info->p)) {
                line_306=0;
                fname_307=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 191, "buffer"))));
                while(xisdigit(*info->p)) {
                    line_306=line_306*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_307,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_306;
                __dec_obj64=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_307));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_307,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            *info->p==34) {
                info->p++;
                while(*info->p!=34) {
                    info->p++;
                }
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            skip_spaces_and_lf2(info);
        }
        else if(        *info->p==47&&*(info->p+1)==42) {
            nest_308=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_308++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_308--;
                    if(                    nest_308==0) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        *info->p==47&&*(info->p+1)==47) {
            info->p+=2;
            while(1) {
                if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    skip_spaces_and_lf2(info);
                    break;
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        strmemcmp(info->p,"__extension__")) {
            info->p+=strlen("__extension__");
            skip_spaces_and_lf2(info);
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sTypeph* o2_saved_309;
struct sType* it_312;
_Bool __result235__;
    for(    o2_saved_309=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_312=list$1sTypeph_begin((o2_saved_309));    !list$1sTypeph_end((o2_saved_309));    it_312=list$1sTypeph_next((o2_saved_309))    ){
        if(        is_contained_generics_class(it_312,info)) {
            __result235__ = (_Bool)1;
            come_call_finalizer3(o2_saved_309,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result235__;
        }
    }
    come_call_finalizer3(o2_saved_309,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_310;
struct sType* __result229__;
struct sType* __result230__;
struct sType* result_311;
struct sType* __result231__;
result_310 = (void*)0;
result_311 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_310,0,sizeof(struct sType*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_310;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->it=self->head;
    if(    self->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_311,0,sizeof(struct sType*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_311;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_313;
struct sType* __result232__;
struct sType* __result233__;
struct sType* result_314;
struct sType* __result234__;
result_313 = (void*)0;
result_314 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_313,0,sizeof(struct sType*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_313;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_314,0,sizeof(struct sType*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_314;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* param_types_315;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1charph* param_names_316;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charph* param_default_parametors_317;
_Bool var_args_318;
void* __right_value276 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* type__322;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
_Bool void_param_338;
char* p_339;
int sline_340;
void* __right_value316 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_341=0;
char* param_name_342=0;
_Bool err_343=0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result254__;
void* __right_value319 = (void*)0;
struct sType* param_type2_344;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* p_348;
_Bool no_comma_349;
void* __right_value325 = (void*)0;
struct sNode* node_350;
char* p2_351;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result257__;
    param_types_315=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 320, "list$1sTypeph"))));
    param_names_316=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 321, "list$1charph"))));
    param_default_parametors_317=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 322, "list$1charph"))));
    var_args_318=(_Bool)0;
    if(    in_constructor_) {
        list$1charph_add(param_names_316,(char*)come_increment_ref_count(xsprintf("self")));
        type__322=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        type__322->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_315,(struct sType*)come_increment_ref_count(type__322));
        list$1charph_add(param_default_parametors_317,((void*)0));
        come_call_finalizer3(type__322,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charph_add(param_names_316,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sTypeph_add(param_types_315,(struct sType*)come_increment_ref_count(sType_clone(info->impl_type)));
        list$1charph_add(param_default_parametors_317,((void*)0));
    }
    expected_next_character(40,info);
    void_param_338=(_Bool)0;
    {
        p_339=info->p;
        sline_340=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_338=(_Bool)1;
            }
        }
        info->p=p_339;
        info->sline=sline_340;
    }
    if(    void_param_338) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value316=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_341=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_342=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_343=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value316,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_343) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result254__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value318=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 384, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_315,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_316,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value318,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
            param_type2_344=(struct sType*)come_increment_ref_count(solve_generics(param_type_341,info->generics_type,info));
            param_type2_344->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_315,(struct sType*)come_increment_ref_count(sType_clone(param_type2_344)));
            list$1charph_push_back(param_names_316,(char*)come_increment_ref_count(string_clone(param_name_342)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_348=info->p;
                no_comma_349=info->no_comma;
                info->no_comma=(_Bool)1;
                node_350=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_349;
                p2_351=info->p;
                char buf_352[p2_351-p_348+1];
                memset(&buf_352, 0, sizeof(char)                *(p2_351-p_348+1)                );
                memcpy(buf_352,p_348,p2_351-p_348);
                buf_352[p2_351-p_348]=0;
                list$1charph_push_back(param_default_parametors_317,(char*)come_increment_ref_count(__builtin_string(buf_352)));
                if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_317,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_318=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_344,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_344,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_344,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value328=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 444, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")),(struct list$1sTypeph*)come_increment_ref_count(param_types_315),(struct list$1charph*)come_increment_ref_count(param_names_316),(struct list$1charph*)come_increment_ref_count(param_default_parametors_317),var_args_318)));
    come_call_finalizer3(param_types_315,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_316,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value328,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result236__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1charph* litem_319;
char* __dec_obj65;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_320;
char* __dec_obj66;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_321;
char* __dec_obj67;
struct list$1charph* __result237__;
    if(    self->len==0) {
        litem_319=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value273=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        __dec_obj65=litem_319->item;
        litem_319->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1) {
        litem_320=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        __dec_obj66=litem_320->item;
        litem_320->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        __dec_obj67=litem_321->item;
        litem_321->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result238__;
void* __right_value277 = (void*)0;
struct sType* result_323;
void* __right_value280 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value283 = (void*)0;
char* __dec_obj73;
void* __right_value284 = (void*)0;
char* __dec_obj74;
void* __right_value291 = (void*)0;
struct list$1sTypeph* __dec_obj78;
void* __right_value299 = (void*)0;
struct list$1sNodeph* __dec_obj82;
void* __right_value300 = (void*)0;
struct list$1sTypeph* __dec_obj83;
void* __right_value304 = (void*)0;
struct list$1charph* __dec_obj84;
void* __right_value305 = (void*)0;
struct tuple1$1sTypeph* __dec_obj85;
void* __right_value306 = (void*)0;
struct sNode* __dec_obj86;
void* __right_value307 = (void*)0;
struct tuple1$1sTypeph* __dec_obj87;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj88;
void* __right_value309 = (void*)0;
char* __dec_obj89;
void* __right_value310 = (void*)0;
char* __dec_obj90;
void* __right_value311 = (void*)0;
char* __dec_obj91;
void* __right_value312 = (void*)0;
char* __dec_obj92;
struct sType* __result252__;
    if(    self==(void*)0) {
        __result238__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_323=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_323->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj70=result_323->mNoSolvedGenericsType;
        result_323->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj71=result_323->mOriginalLoadVarType;
        result_323->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj72=result_323->mRefferenceOriginalType;
        result_323->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj73=result_323->mInterfaceName;
        result_323->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj74=result_323->mGenericsName;
        result_323->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj78=result_323->mGenericsTypes;
        result_323->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj78,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj82=result_323->mArrayNum;
        result_323->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_323->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj83=result_323->mParamTypes;
        result_323->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj83,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj84=result_323->mParamNames;
        result_323->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj85=result_323->mResultType;
        result_323->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj85,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_323->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj86=result_323->mAlignas;
        result_323->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj87=result_323->mChannelType;
        result_323->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj87,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_323->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_323->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_323->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_323->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_323->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_323->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_323->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_323->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_323->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_323->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_323->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_323->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_323->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_323->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_323->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_323->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_323->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_323->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_323->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_323->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_323->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_323->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_323->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_323->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_323->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_323->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj88=result_323->mSizeNum;
        result_323->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_323->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj89=result_323->mOriginalTypeName;
        result_323->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_323->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_323->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_323->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_323->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_323->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_323->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_323->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_323->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj90=result_323->mAsmName;
        result_323->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_323->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_323->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_323->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_323->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_323->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_323->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj91=result_323->mTupleName;
        result_323->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj92=result_323->mAttribute;
        result_323->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_323->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_323;
    come_call_finalizer3(result_323,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result239__;
void* __right_value278 = (void*)0;
struct tuple1$1sTypeph* result_324;
void* __right_value279 = (void*)0;
struct sType* __dec_obj68;
struct tuple1$1sTypeph* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_324=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj68=result_324->v1;
        result_324->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_324;
    come_call_finalizer3(result_324,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj69;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj69=self->v1;
            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result241__;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sTypeph* result_325;
struct list_item$1sTypeph* it_326;
void* __right_value290 = (void*)0;
struct list$1sTypeph* __result243__;
    if(    self==((void*)0)) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_325=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_326=self->head;
    while(it_326!=((void*)0)) {
        list$1sTypeph_add(result_325,(struct sType*)come_increment_ref_count(sType_clone(it_326->item)));
        it_326=it_326->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_325;
    come_call_finalizer3(result_325,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
struct list_item$1sTypeph* litem_327;
struct sType* __dec_obj75;
void* __right_value288 = (void*)0;
struct list_item$1sTypeph* litem_328;
struct sType* __dec_obj76;
void* __right_value289 = (void*)0;
struct list_item$1sTypeph* litem_329;
struct sType* __dec_obj77;
struct list$1sTypeph* __result242__;
    if(    self->len==0) {
        litem_327=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value287=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_327->prev=((void*)0);
        litem_327->next=((void*)0);
        __dec_obj75=litem_327->item;
        litem_327->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_327;
        self->head=litem_327;
    }
    else if(    self->len==1) {
        litem_328=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value288=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_328->prev=self->head;
        litem_328->next=((void*)0);
        __dec_obj76=litem_328->item;
        litem_328->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_328;
        self->head->next=litem_328;
    }
    else {
        litem_329=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_329->prev=self->tail;
        litem_329->next=((void*)0);
        __dec_obj77=litem_329->item;
        litem_329->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_329;
        self->tail=litem_329;
    }
    self->len++;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result244__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1sNodeph* result_330;
struct list_item$1sNodeph* it_331;
void* __right_value298 = (void*)0;
struct list$1sNodeph* __result249__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_330=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_331=self->head;
    while(it_331!=((void*)0)) {
        list$1sNodeph_add(result_330,(struct sNode*)come_increment_ref_count(sNode_clone(it_331->item)));
        it_331=it_331->next;
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_330;
    come_call_finalizer3(result_330,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result245__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1sNodeph* litem_332;
struct sNode* __dec_obj79;
void* __right_value295 = (void*)0;
struct list_item$1sNodeph* litem_333;
struct sNode* __dec_obj80;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_334;
struct sNode* __dec_obj81;
struct list$1sNodeph* __result246__;
    if(    self->len==0) {
        litem_332=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_332->prev=((void*)0);
        litem_332->next=((void*)0);
        __dec_obj79=litem_332->item;
        litem_332->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_332;
        self->head=litem_332;
    }
    else if(    self->len==1) {
        litem_333=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_333->prev=self->head;
        litem_333->next=((void*)0);
        __dec_obj80=litem_333->item;
        litem_333->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_333;
        self->head->next=litem_333;
    }
    else {
        litem_334=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_334->prev=self->tail;
        litem_334->next=((void*)0);
        __dec_obj81=litem_334->item;
        litem_334->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_334;
        self->tail=litem_334;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result247__;
void* __right_value297 = (void*)0;
struct sNode* result_335;
struct sNode* __result248__;
    if(    self==(void*)0) {
        __result247__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_335=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_335->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_335->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_335->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_335->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_335->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_335->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_335->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_335->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_335->kind=self->kind;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_335;
    if(result_335) { result_335 = come_decrement_ref_count2(result_335, ((struct sNode*)result_335)->finalize, ((struct sNode*)result_335)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result250__;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* result_336;
struct list_item$1charph* it_337;
void* __right_value303 = (void*)0;
struct list$1charph* __result251__;
    if(    self==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_336=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_337=self->head;
    while(it_337!=((void*)0)) {
        list$1charph_add(result_336,(char*)come_increment_ref_count(string_clone(it_337->item)));
        it_337=it_337->next;
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_336;
    come_call_finalizer3(result_336,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj93;
char* __dec_obj94;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj93=self->v1;
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj94=self->v2;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result253__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct list_item$1sTypeph* litem_345;
struct sType* __dec_obj95;
void* __right_value321 = (void*)0;
struct list_item$1sTypeph* litem_346;
struct sType* __dec_obj96;
void* __right_value322 = (void*)0;
struct list_item$1sTypeph* litem_347;
struct sType* __dec_obj97;
struct list$1sTypeph* __result255__;
    if(    self->len==0) {
        litem_345=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value320=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_345->prev=((void*)0);
        litem_345->next=((void*)0);
        __dec_obj95=litem_345->item;
        litem_345->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_345;
        self->head=litem_345;
    }
    else if(    self->len==1) {
        litem_346=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value321=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_346->prev=self->head;
        litem_346->next=((void*)0);
        __dec_obj96=litem_346->item;
        litem_346->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_346;
        self->head->next=litem_346;
    }
    else {
        litem_347=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value322=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_347->prev=self->tail;
        litem_347->next=((void*)0);
        __dec_obj97=litem_347->item;
        litem_347->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_347;
        self->tail=litem_347;
    }
    self->len++;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj98;
struct list$1charph* __dec_obj99;
struct list$1charph* __dec_obj100;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result256__;
    __dec_obj98=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj98,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj99=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj100=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj101;
struct list$1charph* __dec_obj102;
struct list$1charph* __dec_obj103;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj101=self->v1;
            come_call_finalizer3(__dec_obj101,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj102=self->v2;
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj103=self->v3;
            come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value329 = (void*)0;
struct sType* right_type2_353;
struct sType* left_no_solved_generics_type_354;
struct sType* right_no_solved_generics_type_355;
struct sClass* left_class_356;
struct sClass* right_class_357;
_Bool parent_class_358;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* left_type_name_359;
void* __right_value332 = (void*)0;
char* __dec_obj104;
void* __right_value333 = (void*)0;
struct sType* __dec_obj105;
void* __right_value334 = (void*)0;
struct sType* __dec_obj106;
void* __right_value335 = (void*)0;
char* left_type_name_360;
void* __right_value336 = (void*)0;
char* __dec_obj107;
void* __right_value337 = (void*)0;
struct sType* __dec_obj108;
void* __right_value338 = (void*)0;
struct sType* __dec_obj109;
_Bool __result258__;
int i_361;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* left_type_name_365;
void* __right_value342 = (void*)0;
char* __dec_obj110;
void* __right_value343 = (void*)0;
struct sType* __dec_obj111;
void* __right_value344 = (void*)0;
struct sType* __dec_obj112;
void* __right_value345 = (void*)0;
char* left_type_name_366;
void* __right_value346 = (void*)0;
char* __dec_obj113;
void* __right_value347 = (void*)0;
struct sType* __dec_obj114;
void* __right_value348 = (void*)0;
struct sType* __dec_obj115;
void* __right_value349 = (void*)0;
char* __dec_obj116;
void* __right_value350 = (void*)0;
struct sType* __dec_obj117;
void* __right_value351 = (void*)0;
struct sType* __dec_obj118;
void* __right_value352 = (void*)0;
char* left_type_name_367;
void* __right_value353 = (void*)0;
char* __dec_obj119;
void* __right_value354 = (void*)0;
struct sType* __dec_obj120;
void* __right_value355 = (void*)0;
struct sType* __dec_obj121;
void* __right_value356 = (void*)0;
char* left_type_name_368;
void* __right_value357 = (void*)0;
char* __dec_obj122;
void* __right_value358 = (void*)0;
struct sType* __dec_obj123;
void* __right_value359 = (void*)0;
struct sType* __dec_obj124;
_Bool __result261__;
_Bool __result262__;
_Bool __result263__;
_Bool __result264__;
_Bool __result265__;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct buffer* buf2_369;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __dec_obj125;
void* __right_value368 = (void*)0;
struct sType* __dec_obj126;
void* __right_value369 = (void*)0;
struct sType* __dec_obj127;
_Bool __result266__;
_Bool __result267__;
_Bool __result268__;
_Bool __result269__;
void* __right_value370 = (void*)0;
char* tmp_370;
void* __right_value371 = (void*)0;
char* __dec_obj128;
void* __right_value372 = (void*)0;
struct sType* __dec_obj129;
void* __right_value373 = (void*)0;
struct sType* __dec_obj130;
_Bool __result270__;
_Bool __result271__;
void* __right_value374 = (void*)0;
char* tmp_371;
void* __right_value375 = (void*)0;
char* __dec_obj131;
void* __right_value376 = (void*)0;
struct sType* __dec_obj132;
_Bool __result272__;
int i_372;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
_Bool __result273__;
    right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_354=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_355=right_type2_353->mNoSolvedGenericsType->v1;
    left_class_356=left_type->mClass;
    right_class_357=right_type2_353->mClass;
    parent_class_358=(_Bool)0;
    if(    string_operator_not_equals(left_class_356->mName,right_class_357->mName)) {
        while(left_class_356&&right_class_357) {
            if(            string_operator_equals(left_class_356->mName,right_class_357->mName)) {
                parent_class_358=(_Bool)1;
            }
            if(            right_class_357->mParentClassName) {
                right_class_357=((struct sClass*)(__right_value330=map$2charphsClassphp_operator_load_element(info->classes,right_class_357->mParentClassName)));
                come_call_finalizer3(__right_value330,sClass_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_357=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
        }
        else if(        left_type->mPointerNum>0&&right_type->mPointerNum>0) {
            if(            string_operator_equals(left_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_354&&right_no_solved_generics_type_355) {
        if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes),left_no_solved_generics_type_354->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_355->mGenericsTypes),right_no_solved_generics_type_355->mClass->mName,right_type2_353->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_359=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj104=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_359,come_value->c_value));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj105=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj106=right_type2_353;
                right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_359 = come_decrement_ref_count2(left_type_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes),left_no_solved_generics_type_354->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_355->mGenericsTypes),right_no_solved_generics_type_355->mClass->mName,right_type2_353->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_360=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj107=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_360,come_value->c_value));
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj108=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj109=right_type2_353;
                right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_360 = come_decrement_ref_count2(left_type_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_353->mClass->mName)&&left_type->mPointerNum==right_type2_353->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_353->mClass->mName)&&(left_type->mPointerNum!=right_type2_353->mPointerNum||left_type->mHeap!=right_type2_353->mHeap)) {
            err_msg(info,"poinetr num err");
            printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes),left_no_solved_generics_type_354->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_355->mGenericsTypes),right_no_solved_generics_type_355->mClass->mName,right_type2_353->mClass->mName);
            exit(2);
        }
        else if(        list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_354->mClass->mName,"void")&&left_no_solved_generics_type_354->mPointerNum>0&&right_no_solved_generics_type_355->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_355->mClass->mName,"void")&&right_no_solved_generics_type_355->mPointerNum>0&&left_no_solved_generics_type_354->mPointerNum>0)) {
            }
            else {
                if(                list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_355->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes),left_no_solved_generics_type_354->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_355->mGenericsTypes),right_no_solved_generics_type_355->mClass->mName,right_type2_353->mClass->mName);
                        exit(2);
                    }
                    __result258__ = (_Bool)0;
                    come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result258__;
                }
                for(                i_361=0;                i_361<list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes);                i_361++                ){
                    check_assign_type(msg,((struct sType*)come_null_check(((struct sType*)(__right_value339=list$1sTypephp_operator_load_element(left_no_solved_generics_type_354->mGenericsTypes,i_361))), "05type.c", 568, 1)),((struct sType*)come_null_check(((struct sType*)(__right_value340=list$1sTypephp_operator_load_element(right_no_solved_generics_type_355->mGenericsTypes,i_361))), "05type.c", 568, 2)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    come_call_finalizer3(__right_value339,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value340,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_354,right_no_solved_generics_type_355,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes),left_no_solved_generics_type_354->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_355->mGenericsTypes),right_no_solved_generics_type_355->mClass->mName,right_type2_353->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_365=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj110=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_365,come_value->c_value));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj111=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj112=right_type2_353;
            right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_365 = come_decrement_ref_count2(left_type_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_354->mGenericsTypes),left_no_solved_generics_type_354->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_355->mGenericsTypes),right_no_solved_generics_type_355->mClass->mName,right_type2_353->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_366=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj113=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_366,come_value->c_value));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj114=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj115=right_type2_353;
            right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_366 = come_decrement_ref_count2(left_type_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_353->mHeap&&left_type->mPointerNum>0&&right_type2_353->mPointerNum>0&&string_operator_not_equals(right_type2_353->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum,right_type2_353->mHeap);
        exit(2);
    }
    else if(    parent_class_358&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj116=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj117=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj118=right_type2_353;
        right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_367=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj119=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_367,come_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj121=right_type2_353;
            right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_367 = come_decrement_ref_count2(left_type_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_368=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj122=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_368,come_value->c_value));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj123=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj124=right_type2_353;
            right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_368 = come_decrement_ref_count2(left_type_name_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_353->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_353->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_353->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_353->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                        exit(2);
                    }
                    __result261__ = (_Bool)0;
                    come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result261__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                    exit(2);
                }
                __result262__ = (_Bool)0;
                come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result262__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_353->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result263__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result263__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_353->mPointerNum==0&&string_operator_equals(right_type2_353->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_353->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result264__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result264__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_353->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_353->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_353->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_353->mClass->mName,"void")&&right_type2_353->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result265__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result265__;
        }
        else {
            buf2_369=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 726, "buffer"))));
            buffer_append_str(buf2_369,((char*)(__right_value366=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value362=string_to_string(come_value->c_value))),((char*)(__right_value363=string_to_string(info->sname))),((char*)(__right_value364=int_to_string(info->sline))),((char*)(__right_value365=int_to_string(gComeDebugStackFrameID++)))))));
            __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj125=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_369));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj127=right_type2_353;
            right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_369,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_353->mClass->mName,"char")&&right_type2_353->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_353->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_353->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_353->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result266__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result266__;
        }
        else if(        string_operator_equals(right_type2_353->mClass->mName,"void")&&right_type2_353->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_353->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result267__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result267__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_353->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_353->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result268__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result268__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_353->mClass->mName,"void")&&right_type2_353->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_353->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_353->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_353->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_353->mClass->mName,"void")&&right_type2_353->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_353->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result269__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result269__;
        }
        else if(        right_type2_353->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_370=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj128=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_370));
                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj129=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj130=right_type2_353;
                right_type2_353=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
                tmp_370 = come_decrement_ref_count2(tmp_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_353->mPointerNum>0||(right_type2_353->mPointerNum==0&&right_type2_353->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_353->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_353->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_353->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                    exit(2);
                }
                __result270__ = (_Bool)0;
                come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result270__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_353->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
            }
            else if(            list$1sNodeph_length(right_type2_353->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum,list$1sNodeph_length(right_type2_353->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_353->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_353->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_353->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_353->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_353->mPointerNum==0&&string_operator_equals(right_type2_353->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            __result271__ = (_Bool)0;
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result271__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_353->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_353->mPointerNum==0) {
            tmp_371=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj131=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_371));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj132=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result272__ = (_Bool)1;
            tmp_371 = come_decrement_ref_count2(tmp_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result272__;
            tmp_371 = come_decrement_ref_count2(tmp_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1sTypeph_length(left_type->mGenericsTypes)>0) {
            if(            list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_353->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_353->mClass->mName,right_type2_353->mPointerNum);
                exit(2);
            }
            for(            i_372=0;            i_372<list$1sTypeph_length(left_type->mGenericsTypes);            i_372++            ){
                check_assign_type(msg,((struct sType*)come_null_check(((struct sType*)(__right_value377=list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_372))), "05type.c", 881, 3)),((struct sType*)come_null_check(((struct sType*)(__right_value378=list$1sTypephp_operator_load_element(right_type2_353->mGenericsTypes,i_372))), "05type.c", 881, 4)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                come_call_finalizer3(__right_value377,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
    }
    __result273__ = (_Bool)1;
    come_call_finalizer3(right_type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result273__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_362;
int i_363;
struct sType* __result259__;
struct sType* default_value_364;
struct sType* __result260__;
default_value_364 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_362=self->head;
    i_363=0;
    while(it_362!=((void*)0)) {
        if(        position==i_363) {
            __result259__ = gComeFunResultObject = __result_obj__ = it_362->item;
            gComeFunResultObject = (void*)0;
            return __result259__;
        }
        it_362=it_362->next;
        i_363++;
    }
    memset(&default_value_364,0,sizeof(struct sType*));
    __result260__ = gComeFunResultObject = __result_obj__ = default_value_364;
    come_call_finalizer3(default_value_364,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
struct sType* result_type_373;
char* var_name_374;
char* p_375;
int sline_376;
void* __right_value380 = (void*)0;
char* word_377;
_Bool between_brace_378;
char* p_379;
int sline_380;
void* __right_value381 = (void*)0;
char* word_381;
void* __right_value382 = (void*)0;
char* __dec_obj133;
void* __right_value383 = (void*)0;
char* __dec_obj134;
_Bool no_comma_383;
void* __right_value384 = (void*)0;
struct sNode* node_384;
struct sNode* __dec_obj135;
char* p_385;
int sline_386;
void* __right_value385 = (void*)0;
char* word_387;
void* __right_value386 = (void*)0;
struct sNode* node_388;
void* __right_value390 = (void*)0;
char* attribute_392;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* __dec_obj139;
char* __dec_obj140;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct tuple2$2sTypephcharph* __result276__;
    result_type_373=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first) {
        result_type_373->mPointerNum=result_type_373->mTypedefOriginalPointerNum;
    }
    var_name_374=((void*)0);
    {
        p_375=info->p;
        sline_376=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_377=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_377,"const")||string_operator_equals(word_377,"__restrict")||string_operator_equals(word_377,"restrict")||string_operator_equals(word_377,"__user")||string_operator_equals(word_377,"volatile")||string_operator_equals(word_377,"_Nonnull")||string_operator_equals(word_377,"_Nullable")||string_operator_equals(word_377,"_Null_unspecified")||string_operator_equals(word_377,"__user")||string_operator_equals(word_377,"_Addr")) {
            }
            else {
                info->p=p_375;
                info->sline=sline_376;
            }
            word_377 = come_decrement_ref_count2(word_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_375;
            info->sline=sline_376;
        }
    }
    between_brace_378=(_Bool)0;
    {
        p_379=info->p;
        sline_380=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_381=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_381,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_378=(_Bool)1;
                    }
                }
                word_381 = come_decrement_ref_count2(word_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_379;
        info->sline=sline_380;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_373->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_378&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj133=var_name_374;
        var_name_374=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_382=0;
        num_anonymous_var_name_382++;
        __dec_obj134=var_name_374;
        var_name_374=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_382));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_378&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_383=info->no_comma;
        info->no_comma=(_Bool)1;
        node_384=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_383;
        __dec_obj135=result_type_373->mSizeNum;
        result_type_373->mSizeNum=(struct sNode*)come_increment_ref_count(node_384);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_385=info->p;
            sline_386=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_387=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_387,"const")||string_operator_equals(word_387,"__restrict")||string_operator_equals(word_387,"restrict")||string_operator_equals(word_387,"__user")||string_operator_equals(word_387,"volatile")||string_operator_equals(word_387,"_Nonnull")||string_operator_equals(word_387,"_Nullable")||string_operator_equals(word_387,"_Null_unspecified")||string_operator_equals(word_387,"__user")||string_operator_equals(word_387,"_Addr")) {
                }
                else {
                    info->p=p_385;
                    info->sline=sline_386;
                }
                word_387 = come_decrement_ref_count2(word_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_385;
                info->sline=sline_386;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_373->mArrayPointerType=(_Bool)1;
            result_type_373->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_388=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(result_type_373->mArrayNum,(struct sNode*)come_increment_ref_count(node_388));
        parse_sharp_v5(info);
        result_type_373->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_388) { node_388 = come_decrement_ref_count2(node_388, ((struct sNode*)node_388)->finalize, ((struct sNode*)node_388)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    attribute_392=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_392,"")) {
        if(        result_type_373->mAttribute) {
            __dec_obj139=result_type_373->mAttribute;
            result_type_373->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_373->mAttribute,((char*)(__right_value391=charp_operator_add(" ",attribute_392)))));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj140=result_type_373->mAttribute;
            result_type_373->mAttribute=(char*)come_increment_ref_count(attribute_392);
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value393=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value393,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result276__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value395=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1048, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_373),(char*)come_increment_ref_count(var_name_374))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_374 = come_decrement_ref_count2(var_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute_392 = come_decrement_ref_count2(attribute_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value395,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct list_item$1sNodeph* litem_389;
struct sNode* __dec_obj136;
void* __right_value388 = (void*)0;
struct list_item$1sNodeph* litem_390;
struct sNode* __dec_obj137;
void* __right_value389 = (void*)0;
struct list_item$1sNodeph* litem_391;
struct sNode* __dec_obj138;
struct list$1sNodeph* __result274__;
    if(    self->len==0) {
        litem_389=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value387=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sNodeph"))));
        litem_389->prev=((void*)0);
        litem_389->next=((void*)0);
        __dec_obj136=litem_389->item;
        litem_389->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_389;
        self->head=litem_389;
    }
    else if(    self->len==1) {
        litem_390=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value388=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sNodeph"))));
        litem_390->prev=self->head;
        litem_390->next=((void*)0);
        __dec_obj137=litem_390->item;
        litem_390->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_390;
        self->head->next=litem_390;
    }
    else {
        litem_391=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value389=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sNodeph"))));
        litem_391->prev=self->tail;
        litem_391->next=((void*)0);
        __dec_obj138=litem_391->item;
        litem_391->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_391;
        self->tail=litem_391;
    }
    self->len++;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj141;
char* __dec_obj142;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj141=self->v1;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj142=self->v2;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj143;
char* __dec_obj144;
struct tuple2$2sTypephcharph* __result275__;
    __dec_obj143=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj144=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj145=self->v1;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj146=self->v2;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_393;
int sline_394;
void* __right_value396 = (void*)0;
char* word_395;
int nest_396;
    p_393=info->p;
    sline_394=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_395=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_395,"__attribute")||string_operator_equals(word_395,"__attribute__"))&&*info->p==40) {
            nest_396=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_396++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_396--;
                    if(                    nest_396==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_395,"const")||string_operator_equals(word_395,"__restrict")||string_operator_equals(word_395,"restrict")||string_operator_equals(word_395,"__user")||string_operator_equals(word_395,"volatile")||string_operator_equals(word_395,"_Nonnull")||string_operator_equals(word_395,"_Nullable")||string_operator_equals(word_395,"__nonnull")||string_operator_equals(word_395,"_Null_unspecified")||string_operator_equals(word_395,"__user")||string_operator_equals(word_395,"_Addr")||string_operator_equals(word_395,"__noreturn")||string_operator_equals(word_395,"_noreturn")||string_operator_equals(word_395,"_Noreturn")) {
        }
        else {
            info->p=p_393;
            info->sline=sline_394;
        }
        word_395 = come_decrement_ref_count2(word_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_393;
        info->sline=sline_394;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_397;
void* __right_value397 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_398=0;
char* name_399=0;
_Bool err_400=0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple3$3sTypephcharphbool* __result278__;
    no_output_err_397=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value397=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_398=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_399=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_400=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value397,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_397;
    __result278__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value399=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1105, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_398),(char*)come_increment_ref_count(name_399),err_400)));
    come_call_finalizer3(type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_399 = come_decrement_ref_count2(name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value399,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj147;
char* __dec_obj148;
struct tuple3$3sTypephcharphbool* __result277__;
    __dec_obj147=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj148=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_401;
int head_sline_402;
void* __right_value400 = (void*)0;
char* type_name_403;
_Bool record__404;
_Bool exception__405;
_Bool constant_406;
_Bool static__407;
_Bool volatile__408;
_Bool register__409;
_Bool unsigned__410;
_Bool long__411;
_Bool long_long_412;
_Bool short__413;
_Bool restrict__414;
_Bool struct__415;
_Bool union__416;
_Bool enum__417;
_Bool no_heap_418;
_Bool extern__419;
_Bool inline__420;
_Bool uniq__421;
_Bool tuple__422;
struct sNode* alignas__423;
_Bool anonymous_type_424;
_Bool anonymous_name_425;
_Bool atomic__426;
_Bool object_interface_427;
void* __right_value401 = (void*)0;
char* __dec_obj149;
void* __right_value402 = (void*)0;
char* __dec_obj150;
void* __right_value403 = (void*)0;
char* __dec_obj151;
int brace_num_428;
void* __right_value404 = (void*)0;
char* __dec_obj152;
int brace_num_429;
void* __right_value405 = (void*)0;
char* __dec_obj153;
void* __right_value406 = (void*)0;
char* __dec_obj154;
void* __right_value407 = (void*)0;
char* __dec_obj155;
void* __right_value408 = (void*)0;
char* __dec_obj156;
void* __right_value409 = (void*)0;
char* __dec_obj157;
void* __right_value410 = (void*)0;
struct sNode* exp_430;
struct sNode* __dec_obj158;
void* __right_value411 = (void*)0;
char* __dec_obj159;
void* __right_value412 = (void*)0;
char* __dec_obj160;
void* __right_value413 = (void*)0;
char* __dec_obj161;
void* __right_value414 = (void*)0;
char* __dec_obj162;
void* __right_value415 = (void*)0;
char* __dec_obj163;
void* __right_value416 = (void*)0;
char* __dec_obj164;
void* __right_value417 = (void*)0;
char* __dec_obj165;
void* __right_value418 = (void*)0;
char* __dec_obj166;
void* __right_value419 = (void*)0;
char* __dec_obj167;
char* p_431;
int sline_432;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj168;
void* __right_value422 = (void*)0;
char* __dec_obj169;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
char* __dec_obj170;
char* p_433;
int sline_434;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct tuple3$3sTypephcharphbool* __result279__;
char* p_435;
int sline_436;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple3$3sTypephcharphbool* __result280__;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* node_437;
_Bool Value_438;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct tuple3$3sTypephcharphbool* __result281__;
char* p_439;
int sline_440;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
char* __dec_obj171;
void* __right_value438 = (void*)0;
char* __dec_obj172;
void* __right_value439 = (void*)0;
char* __dec_obj173;
char* p_441;
int sline_442;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple3$3sTypephcharphbool* __result282__;
void* __right_value443 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_443=0;
char* name_444=0;
_Bool err_445=0;
char* p_446;
int sline_447;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct tuple3$3sTypephcharphbool* __result283__;
void* __right_value448 = (void*)0;
char* __dec_obj174;
void* __right_value449 = (void*)0;
char* __dec_obj175;
void* __right_value450 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_448=0;
char* name_449=0;
_Bool err_450=0;
char* p_451;
int sline_452;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct tuple3$3sTypephcharphbool* __result284__;
char* p_453;
int sline_454;
void* __right_value454 = (void*)0;
char* __dec_obj176;
void* __right_value455 = (void*)0;
char* __dec_obj177;
void* __right_value456 = (void*)0;
char* __dec_obj178;
void* __right_value457 = (void*)0;
char* __dec_obj179;
void* __right_value458 = (void*)0;
char* __dec_obj180;
void* __right_value459 = (void*)0;
char* __dec_obj181;
void* __right_value460 = (void*)0;
char* __dec_obj182;
char* p_455;
int sline_456;
void* __right_value461 = (void*)0;
char* __dec_obj183;
char* p_457;
int sline_458;
void* __right_value462 = (void*)0;
char* __dec_obj184;
void* __right_value463 = (void*)0;
char* __dec_obj185;
void* __right_value464 = (void*)0;
char* __dec_obj186;
char* p_459;
int sline_460;
void* __right_value465 = (void*)0;
char* __dec_obj187;
void* __right_value466 = (void*)0;
char* __dec_obj188;
void* __right_value467 = (void*)0;
char* __dec_obj189;
void* __right_value468 = (void*)0;
char* __dec_obj190;
void* __right_value469 = (void*)0;
char* __dec_obj191;
void* __right_value470 = (void*)0;
char* __dec_obj192;
void* __right_value471 = (void*)0;
char* __dec_obj193;
void* __right_value472 = (void*)0;
char* __dec_obj194;
void* __right_value473 = (void*)0;
char* __dec_obj195;
void* __right_value474 = (void*)0;
char* __dec_obj196;
void* __right_value475 = (void*)0;
char* __dec_obj197;
char* p_461;
int sline_462;
void* __right_value476 = (void*)0;
char* __dec_obj198;
void* __right_value477 = (void*)0;
char* __dec_obj199;
void* __right_value478 = (void*)0;
char* attribute_463;
int pointer_num_464;
_Bool heap_465;
_Bool refference_466;
_Bool no_refference_467;
_Bool channel_468;
char* tuple_name_469;
void* __right_value479 = (void*)0;
char* __dec_obj200;
_Bool lambda_flag_470;
char* pX_471;
int slineX_472;
void* __right_value480 = (void*)0;
struct sType* type_473;
char* var_name_474;
_Bool function_pointer_flag_475;
char* p_476;
int sline_477;
void* __right_value481 = (void*)0;
char* word_478;
_Bool var_name_between_brace_479;
char* p_480;
int sline_481;
void* __right_value482 = (void*)0;
char* word_482;
void* __right_value483 = (void*)0;
char* __dec_obj201;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sNode* node_484;
_Bool Value_485;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple3$3sTypephcharphbool* __result285__;
int pointer_num_486;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj202;
void* __right_value490 = (void*)0;
char* __dec_obj203;
void* __right_value491 = (void*)0;
struct sNode* node_487;
_Bool Value_488;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct tuple3$3sTypephcharphbool* __result286__;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj204;
void* __right_value496 = (void*)0;
char* __dec_obj205;
void* __right_value497 = (void*)0;
struct sNode* node_489;
_Bool Value_490;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct tuple3$3sTypephcharphbool* __result287__;
int pointer_num_491;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj206;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple3$3sTypephcharphbool* __result288__;
void* __right_value504 = (void*)0;
char* attribute_492;
char* __dec_obj207;
void* __right_value505 = (void*)0;
char* __dec_obj208;
void* __right_value506 = (void*)0;
char* __dec_obj209;
void* __right_value507 = (void*)0;
char* __dec_obj210;
void* __right_value508 = (void*)0;
char* __dec_obj211;
_Bool no_comma_495;
void* __right_value509 = (void*)0;
struct sNode* node_496;
struct sNode* __dec_obj212;
void* __right_value510 = (void*)0;
char* attribute2_497;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __dec_obj213;
char* __dec_obj214;
struct sType* result_type_498;
void* __right_value513 = (void*)0;
_Bool _if_conditional3;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj215;
void* __right_value516 = (void*)0;
int i_499;
void* __right_value517 = (void*)0;
_Bool _if_conditional4;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj216;
int i_503;
void* __right_value521 = (void*)0;
_Bool _if_conditional5;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj217;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj218;
struct sNode* __dec_obj219;
void* __right_value527 = (void*)0;
char* __dec_obj220;
void* __right_value528 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1sTypeph* param_types_504=0;
struct list$1charph* param_names_505=0;
struct list$1charph* param_default_parametors_506=0;
_Bool var_args_507=0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj221;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct tuple1$1sTypeph* __dec_obj223;
struct list$1sTypeph* __dec_obj224;
struct list$1charph* __dec_obj225;
int function_pointer_num_508;
struct sType* result_type_509;
void* __right_value533 = (void*)0;
_Bool _if_conditional6;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj226;
void* __right_value536 = (void*)0;
int i_510;
void* __right_value537 = (void*)0;
_Bool _if_conditional7;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj227;
int i_511;
void* __right_value541 = (void*)0;
_Bool _if_conditional8;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj228;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __dec_obj229;
struct sNode* __dec_obj230;
void* __right_value547 = (void*)0;
char* __dec_obj231;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct tuple3$3sTypephcharphbool* __result292__;
void* __right_value550 = (void*)0;
char* __dec_obj232;
_Bool function_pointer_array_513;
int function_pointer_array_num_514;
int n_515;
void* __right_value551 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1sTypeph* param_types_516=0;
struct list$1charph* param_names_517=0;
struct list$1charph* param_default_parametors_518=0;
_Bool var_args_519=0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj233;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct tuple1$1sTypeph* __dec_obj234;
struct list$1sTypeph* __dec_obj235;
struct list$1charph* __dec_obj236;
void* __right_value557 = (void*)0;
struct sNode* exp_520;
_Bool Value_521;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct tuple3$3sTypephcharphbool* __result294__;
void* __right_value560 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value561 = (void*)0;
struct sType* __dec_obj239;
void* __right_value562 = (void*)0;
char* attribute_523;
char* __dec_obj240;
void* __right_value563 = (void*)0;
char* __dec_obj241;
void* __right_value564 = (void*)0;
char* __dec_obj242;
void* __right_value565 = (void*)0;
char* __dec_obj243;
void* __right_value566 = (void*)0;
char* __dec_obj244;
_Bool no_comma_526;
void* __right_value567 = (void*)0;
struct sNode* node_527;
struct sNode* __dec_obj245;
void* __right_value568 = (void*)0;
char* attribute2_528;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
char* __dec_obj246;
char* __dec_obj247;
void* __right_value571 = (void*)0;
_Bool _if_conditional9;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj251;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* __dec_obj252;
struct sNode* __dec_obj253;
char* __dec_obj254;
int i_529;
void* __right_value576 = (void*)0;
_Bool _if_conditional10;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj255;
struct sNode* __dec_obj256;
char* __dec_obj257;
int i_530;
void* __right_value580 = (void*)0;
_Bool _if_conditional11;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj258;
struct sNode* __dec_obj259;
char* __dec_obj260;
void* __right_value584 = (void*)0;
_Bool _if_conditional12;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct tuple3$3sTypephcharphbool* __result295__;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* __dec_obj261;
void* __right_value589 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_531=0;
char* var_name_532=0;
_Bool err_533=0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct tuple3$3sTypephcharphbool* __result296__;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct tuple3$3sTypephcharphbool* __result297__;
void* __right_value594 = (void*)0;
struct sType* __dec_obj262;
void* __right_value595 = (void*)0;
char* new_name_534;
struct sNode* __dec_obj263;
char* __dec_obj264;
char* __dec_obj265;
void* __right_value596 = (void*)0;
struct sClass* klass_535;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sClass* klass_577;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* __dec_obj266;
struct sNode* __dec_obj267;
char* __dec_obj268;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1sTypeph* types_578;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_579=0;
char* name_580=0;
_Bool err_581=0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct tuple3$3sTypephcharphbool* __result319__;
void* __right_value615 = (void*)0;
int num_tuples_582;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sType* __dec_obj269;
struct list$1sTypeph* o2_saved_583;
struct sType* it_584;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* __dec_obj270;
void* __right_value621 = (void*)0;
char* new_name_585;
char* __dec_obj271;
void* __right_value622 = (void*)0;
char* attribute_586;
char* __dec_obj272;
void* __right_value623 = (void*)0;
char* __dec_obj273;
void* __right_value624 = (void*)0;
char* __dec_obj274;
void* __right_value625 = (void*)0;
char* __dec_obj275;
void* __right_value626 = (void*)0;
char* __dec_obj276;
_Bool no_comma_589;
void* __right_value627 = (void*)0;
struct sNode* node_590;
struct sNode* __dec_obj277;
void* __right_value628 = (void*)0;
char* attribute2_591;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
char* __dec_obj278;
char* __dec_obj279;
void* __right_value631 = (void*)0;
struct sNode* node_592;
void* __right_value632 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var9 = (void*)0;
char* asm_name_593=0;
char* attribute2_594=0;
char* __dec_obj280;
char* __dec_obj281;
void* __right_value633 = (void*)0;
struct sType* type_before_595;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sType* __dec_obj282;
void* __right_value636 = (void*)0;
struct sNode* __list_values1___596[1];
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1sNodeph* __dec_obj283;
void* __right_value639 = (void*)0;
struct tuple1$1sTypeph* __dec_obj284;
struct sType* __dec_obj285;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sType* type2_598;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* type3_604;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sType* type4_605;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct tuple3$3sTypephcharphbool* __result323__;
struct sType* refference_type_606;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* __dec_obj287;
void* __right_value656 = (void*)0;
struct tuple1$1sTypeph* __dec_obj288;
struct sType* __dec_obj289;
char* __dec_obj290;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct tuple3$3sTypephcharphbool* __result324__;
type_473 = (void*)0;
var_name_474 = (void*)0;
result_type_498 = (void*)0;
result_type_509 = (void*)0;
    head_401=info->p;
    head_sline_402=info->sline;
    info->define_struct=(_Bool)0;
    type_name_403=(char*)come_increment_ref_count(parse_word(info));
    record__404=(_Bool)0;
    exception__405=(_Bool)0;
    constant_406=(_Bool)0;
    static__407=(_Bool)0;
    volatile__408=(_Bool)0;
    register__409=(_Bool)0;
    unsigned__410=(_Bool)0;
    long__411=(_Bool)0;
    long_long_412=(_Bool)0;
    short__413=(_Bool)0;
    restrict__414=(_Bool)0;
    struct__415=(_Bool)0;
    union__416=(_Bool)0;
    enum__417=(_Bool)0;
    no_heap_418=(_Bool)0;
    extern__419=(_Bool)0;
    inline__420=(_Bool)0;
    uniq__421=(_Bool)0;
    tuple__422=(_Bool)0;
    alignas__423=((void*)0);
    anonymous_type_424=(_Bool)0;
    anonymous_name_425=(_Bool)0;
    atomic__426=(_Bool)0;
    object_interface_427=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_403,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_427=(_Bool)1;
            __dec_obj149=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj150=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__426=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_403,"__extension__")) {
            __dec_obj151=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_428=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_428++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_428--;
                        if(                        brace_num_428==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj152=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"__declspec")) {
            if(            *info->p==40) {
                brace_num_429=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_429++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_429--;
                        if(                        brace_num_429==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj153=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"_Noreturn")) {
            __dec_obj154=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"__noreturn")) {
            __dec_obj155=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"_Nullable")) {
            __dec_obj156=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"_noreturn")) {
            __dec_obj157=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"_Alignas")) {
            expected_next_character(40,info);
            exp_430=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj158=alignas__423;
            alignas__423=(struct sNode*)come_increment_ref_count(exp_430);
            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj159=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_430) { exp_430 = come_decrement_ref_count2(exp_430, ((struct sNode*)exp_430)->finalize, ((struct sNode*)exp_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_403,"const")) {
            constant_406=(_Bool)1;
            __dec_obj160=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"static")) {
            static__407=(_Bool)1;
            __dec_obj161=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"uniq")) {
            uniq__421=(_Bool)1;
            __dec_obj162=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"record")) {
            record__404=(_Bool)1;
            __dec_obj163=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"exception")) {
            exception__405=(_Bool)1;
            __dec_obj164=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"extern")) {
            extern__419=(_Bool)1;
            __dec_obj165=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"inline")||string_operator_equals(type_name_403,"__inline")||string_operator_equals(type_name_403,"__inline__")||string_operator_equals(type_name_403,"__always_inline")||string_operator_equals(type_name_403,"__forceinline")) {
            inline__420=(_Bool)1;
            __dec_obj166=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"volatile")) {
            volatile__408=(_Bool)1;
            __dec_obj167=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"struct")) {
            struct__415=(_Bool)1;
            if(            *info->p==123) {
                p_431=info->p;
                sline_432=info->sline;
                ((char*)(__right_value420=skip_block(info)));
                __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_425=(_Bool)1;
                    anonymous_type_424=(_Bool)1;
                    __dec_obj168=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_431;
                    info->sline=sline_432;
                    break;
                }
                else {
                    anonymous_type_424=(_Bool)1;
                    __dec_obj169=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_431;
                    info->sline=sline_432;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value423=parse_struct_attribute(info)));
                __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj170=type_name_403;
                type_name_403=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_433=info->p;
                    sline_434=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_433;
                                info->sline=sline_434;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result279__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value426=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1334, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value426,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result279__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_435=info->p;
                    sline_436=info->sline;
                    ((char*)(__right_value427=skip_block(info)));
                    __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (void)((char*)(__right_value428=parse_struct_attribute(info)));
                    __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        info->p=head_401;
                        info->sline=head_sline_402;
                        info->define_struct=(_Bool)1;
                        __result280__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value430=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1354, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value430,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result280__;
                    }
                    else {
                        info->p=p_435;
                        info->sline=sline_436;
                        node_437=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_403),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_438=node_compile(node_437,info);
                        if(                        !Value_438) {
                            __result281__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value434=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1366, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value434,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result281__;
                        }
                        else {
                        }
                        if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_403,"union")) {
            union__416=(_Bool)1;
            if(            *info->p==123) {
                p_439=info->p;
                sline_440=info->sline;
                ((char*)(__right_value435=skip_block(info)));
                __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value436=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value436,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_401;
                    info->sline=head_sline_402;
                    info->define_struct=(_Bool)0;
                    anonymous_type_424=(_Bool)1;
                    __dec_obj171=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_439;
                    info->sline=sline_440;
                    break;
                }
                else {
                    anonymous_type_424=(_Bool)1;
                    __dec_obj172=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_439;
                    info->sline=sline_440;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj173=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_441=info->p;
                sline_442=info->sline;
                ((char*)(__right_value440=skip_block(info)));
                __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_401;
                    info->sline=head_sline_402;
                    info->define_struct=(_Bool)1;
                    __result282__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value442=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1423, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value442,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result282__;
                }
                else {
                    anonymous_type_424=(_Bool)1;
                    info->p=p_441;
                    info->sline=sline_442;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_403,"enum")) {
            enum__417=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value443=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_443=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_444=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_445=multiple_assign_var3->v3;
                come_call_finalizer3(__right_value443,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_444 = come_decrement_ref_count2(name_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_446=info->p;
                sline_447=info->sline;
                ((char*)(__right_value444=skip_block(info)));
                __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value445=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value445,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_401;
                    info->sline=head_sline_402;
                    info->define_struct=(_Bool)1;
                    __result283__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value447=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1461, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value447,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result283__;
                }
                else {
                    anonymous_type_424=(_Bool)1;
                    __dec_obj174=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_446;
                    info->sline=sline_447;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj175=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value450=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_448=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_449=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_450=multiple_assign_var4->v3;
                come_call_finalizer3(__right_value450,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_449 = come_decrement_ref_count2(name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_451=info->p;
                sline_452=info->sline;
                ((char*)(__right_value451=skip_block(info)));
                __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_401;
                    info->sline=head_sline_402;
                    info->define_struct=(_Bool)1;
                    __result284__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value453=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1497, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value453,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result284__;
                }
                else {
                    anonymous_type_424=(_Bool)1;
                    info->p=p_451;
                    info->sline=sline_452;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_403,"long")) {
            {
                p_453=info->p;
                sline_454=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_453;
                    info->sline=sline_454;
                    __dec_obj176=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj177=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_403,"unsigned")) {
                        __dec_obj178=type_name_403;
                        type_name_403=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_403,"int")) {
                            long__411=(_Bool)1;
                            unsigned__410=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_403,"signed")) {
                        __dec_obj179=type_name_403;
                        type_name_403=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_403,"int")) {
                            long__411=(_Bool)1;
                            unsigned__410=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_403,"long")) {
                        p_453=info->p;
                        sline_454=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_412=(_Bool)1;
                            __dec_obj180=type_name_403;
                            type_name_403=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__411=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_403,"int")) {
                            long_long_412=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_403,info)) {
                            __dec_obj181=type_name_403;
                            type_name_403=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_412=(_Bool)1;
                            info->p=p_453;
                            info->sline=sline_454;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_403,info)) {
                        if(                        long__411) {
                            long_long_412=(_Bool)1;
                            long__411=(_Bool)0;
                        }
                        else {
                            long__411=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_453;
                        info->sline=sline_454;
                        __dec_obj182=type_name_403;
                        type_name_403=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_403,"unsigned")) {
            unsigned__410=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_455=info->p;
                sline_456=info->sline;
                __dec_obj183=type_name_403;
                type_name_403=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_403,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_457=info->p;
                        sline_458=info->sline;
                        __dec_obj184=type_name_403;
                        type_name_403=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_403,info)) {
                            short__413=(_Bool)1;
                        }
                        else {
                            short__413=(_Bool)1;
                            __dec_obj185=type_name_403;
                            type_name_403=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_457;
                            info->sline=sline_458;
                        }
                    }
                    else {
                        short__413=(_Bool)1;
                        __dec_obj186=type_name_403;
                        type_name_403=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_403,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_459=info->p;
                        sline_460=info->sline;
                        __dec_obj187=type_name_403;
                        type_name_403=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_403,info)) {
                            long__411=(_Bool)1;
                        }
                        else {
                            long__411=(_Bool)1;
                            __dec_obj188=type_name_403;
                            type_name_403=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_459;
                            info->sline=sline_460;
                        }
                    }
                    else {
                        long__411=(_Bool)1;
                        __dec_obj189=type_name_403;
                        type_name_403=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_403,info)) {
                    __dec_obj190=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_455;
                    info->sline=sline_456;
                    break;
                }
            }
            else {
                __dec_obj191=type_name_403;
                type_name_403=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_403,"signed")||string_operator_equals(type_name_403,"__signed__")) {
            unsigned__410=(_Bool)0;
            __dec_obj192=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"register")) {
            register__409=(_Bool)1;
            __dec_obj193=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"restrict")) {
            restrict__414=(_Bool)1;
            __dec_obj194=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"_Addr")) {
            __dec_obj195=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"__restrict")) {
            restrict__414=(_Bool)1;
            __dec_obj196=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_403,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj197=type_name_403;
            type_name_403=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__422=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_403,"short")) {
            short__413=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_461=info->p;
                sline_462=info->sline;
                __dec_obj198=type_name_403;
                type_name_403=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_403,"int")) {
                    short__413=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_403,"short")) {
                    short__413=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_403,info)) {
                    info->p=p_461;
                    info->sline=sline_462;
                }
                else {
                    __dec_obj199=type_name_403;
                    type_name_403=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_461;
                    info->sline=sline_462;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_463=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_464=0;
    heap_465=(_Bool)0;
    refference_466=(_Bool)0;
    no_refference_467=(_Bool)0;
    channel_468=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_464++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            no_refference_467=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            refference_466=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_465=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_468=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_469=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__422) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj200=tuple_name_469;
        tuple_name_469=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__426) {
        expected_next_character(41,info);
    }
    lambda_flag_470=(_Bool)0;
    {
        pX_471=info->p;
        slineX_472=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value480=parse_word(info)));
            __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_470=(_Bool)1;
            }
        }
        info->p=pX_471;
        info->sline=slineX_472;
    }
    function_pointer_flag_475=(_Bool)0;
    {
        p_476=info->p;
        sline_477=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_475=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_478=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_475=(_Bool)1;
                    }
                }
                word_478 = come_decrement_ref_count2(word_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_476;
        info->sline=sline_477;
    }
    var_name_between_brace_479=(_Bool)0;
    {
        p_480=info->p;
        sline_481=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_482=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_482,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_479=(_Bool)1;
                    }
                }
                word_482 = come_decrement_ref_count2(word_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_480;
        info->sline=sline_481;
    }
    if(    anonymous_type_424&&*info->p==123) {
        static int anonymous_num_483=0;
        if(        struct__415) {
            if(            string_operator_equals(type_name_403,"")) {
                __dec_obj201=type_name_403;
                type_name_403=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_483));
                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_484=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_403),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_485=node_compile(node_484,info);
            if(            !Value_485) {
                err_msg(info,"parse_struct is failed");
                __result285__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value487=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1909, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_484) { node_484 = come_decrement_ref_count2(node_484, ((struct sNode*)node_484)->finalize, ((struct sNode*)node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value487,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result285__;
            }
            else {
            }
            pointer_num_486=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_486++;
            }
            __dec_obj202=type_473;
            type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1922, "sType")),type_name_403,(_Bool)0,info));
            come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_473->mPointerNum=pointer_num_486;
            if(node_484) { node_484 = come_decrement_ref_count2(node_484, ((struct sNode*)node_484)->finalize, ((struct sNode*)node_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__417) {
            if(            string_operator_equals(type_name_403,"")) {
                __dec_obj203=type_name_403;
                type_name_403=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_483));
                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_487=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_403),info));
            if(            !info->no_output_err) {
                Value_488=node_compile(node_487,info);
                if(                !Value_488) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result286__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value493=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1936, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_487) { node_487 = come_decrement_ref_count2(node_487, ((struct sNode*)node_487)->finalize, ((struct sNode*)node_487)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value493,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result286__;
                }
                else {
                }
            }
            __dec_obj204=type_473;
            type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1940, "sType")),type_name_403,(_Bool)0,info));
            come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_487) { node_487 = come_decrement_ref_count2(node_487, ((struct sNode*)node_487)->finalize, ((struct sNode*)node_487)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__416) {
            if(            string_operator_equals(type_name_403,"")) {
                __dec_obj205=type_name_403;
                type_name_403=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_483));
                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_489=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_403),info));
            Value_490=node_compile(node_489,info);
            if(            !Value_490) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result287__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value499=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1952, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_489) { node_489 = come_decrement_ref_count2(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value499,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result287__;
            }
            else {
            }
            pointer_num_491=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_491++;
            }
            __dec_obj206=type_473;
            type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1966, "sType")),type_name_403,(_Bool)0,info));
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_473->mPointerNum=pointer_num_491;
            if(node_489) { node_489 = come_decrement_ref_count2(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result288__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value503=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1972, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value503,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
        attribute_492=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_492,"")) {
            __dec_obj207=type_473->mAttribute;
            type_473->mAttribute=(char*)come_increment_ref_count(attribute_492);
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_479&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj208=var_name_474;
                var_name_474=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_425) {
                static int num_anonymous_var_name_493=0;
                num_anonymous_var_name_493++;
                __dec_obj209=var_name_474;
                var_name_474=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_493));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj210=var_name_474;
                var_name_474=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_494=0;
                num_anonymous_var_name_494++;
                __dec_obj211=var_name_474;
                var_name_474=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_494));
                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_479&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_495=info->no_comma;
                info->no_comma=(_Bool)1;
                node_496=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_495;
                __dec_obj212=type_473->mSizeNum;
                type_473->mSizeNum=(struct sNode*)come_increment_ref_count(node_496);
                if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_496) { node_496 = come_decrement_ref_count2(node_496, ((struct sNode*)node_496)->finalize, ((struct sNode*)node_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_497=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_492,"")&&string_operator_not_equals(attribute2_497,"")) {
                __dec_obj213=type_473->mAttribute;
                type_473->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_492,((char*)(__right_value511=charp_operator_add(" ",attribute2_497)))));
                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_497,"")) {
                __dec_obj214=type_473->mAttribute;
                type_473->mAttribute=(char*)come_increment_ref_count(attribute2_497);
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_497 = come_decrement_ref_count2(attribute2_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_492 = come_decrement_ref_count2(attribute_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    lambda_flag_470) {
        if(        (_if_conditional3=(((struct sType*)(__right_value513=map$2charphsTypephp_operator_load_element(info->types,type_name_403))))),        come_call_finalizer3(__right_value513,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional3) {
            __dec_obj215=result_type_498;
            result_type_498=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value514=map$2charphsTypephp_operator_load_element(info->types,type_name_403)))));
            come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_498->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value516=map$2charphsClassphp_operator_load_element(info->classes,result_type_498->mClass->mName))), "05type.c", 2035, 5));
            come_call_finalizer3(__right_value516,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_403)) {
            for(            i_499=0;            i_499<list$1charph_length(info->generics_type_names);            i_499++            ){
                if(                (_if_conditional4=(string_operator_equals(((char*)come_null_check(((char*)(__right_value517=list$1charphp_operator_load_element(info->generics_type_names,i_499))), "05type.c", 2039, 6)),type_name_403))),                (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional4) {
                    __dec_obj216=result_type_498;
                    result_type_498=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2040, "sType")),((char*)(__right_value519=xsprintf("generics_type%d",i_499))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_403)) {
            for(            i_503=0;            i_503<list$1charph_length(info->method_generics_type_names);            i_503++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)come_null_check(((char*)(__right_value521=list$1charphp_operator_load_element(info->method_generics_type_names,i_503))), "05type.c", 2046, 7)),type_name_403))),                (__right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional5) {
                    __dec_obj217=result_type_498;
                    result_type_498=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2047, "sType")),((char*)(__right_value523=xsprintf("mgenerics_type%d",i_503))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj218=result_type_498;
            result_type_498=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2052, "sType")),type_name_403,(_Bool)0,info));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_498->mAtomic=result_type_498->mAtomic||atomic__426;
        result_type_498->mConstant=result_type_498->mConstant||constant_406;
        __dec_obj219=result_type_498->mAlignas;
        result_type_498->mAlignas=(struct sNode*)come_increment_ref_count(alignas__423);
        if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_498->mRegister=register__409;
        result_type_498->mUnsigned=result_type_498->mUnsigned||unsigned__410;
        result_type_498->mVolatile=volatile__408;
        result_type_498->mRecord=result_type_498->mRecord||record__404;
        result_type_498->mUniq=result_type_498->mUniq||uniq__421;
        result_type_498->mStatic=(result_type_498->mStatic||static__407)&&!result_type_498->mUniq;
        result_type_498->mException=result_type_498->mException||exception__405;
        result_type_498->mExtern=result_type_498->mExtern||extern__419;
        result_type_498->mInline=result_type_498->mInline||inline__420;
        result_type_498->mRestrict=result_type_498->mRestrict||restrict__414;
        result_type_498->mLongLong=result_type_498->mLongLong||long_long_412;
        result_type_498->mLong=result_type_498->mLong||long__411;
        result_type_498->mShort=result_type_498->mShort||short__413;
        result_type_498->mPointerNum=pointer_num_464;
        result_type_498->mHeap=result_type_498->mHeap||heap_465;
        result_type_498->mRefference=result_type_498->mRefference||refference_466;
        result_type_498->mNoRefference=result_type_498->mNoRefference||no_refference_467;
        result_type_498->mChannel=result_type_498->mChannel||channel_468;
        __dec_obj220=var_name_474;
        var_name_474=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value528=parse_params(info,(_Bool)0)));
        param_types_504=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_505=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_506=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_507=multiple_assign_var5->v4;
        come_call_finalizer3(__right_value528,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj221=type_473;
        type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2081, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj223=type_473->mResultType;
        type_473->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2083, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_498)));
        come_call_finalizer3(__dec_obj223,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj224=type_473->mParamTypes;
        type_473->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_504);
        come_call_finalizer3(__dec_obj224,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj225=type_473->mParamNames;
        type_473->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_505);
        come_call_finalizer3(__dec_obj225,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_473->mVarArgs=var_args_507;
        type_473->mExtern=extern__419;
        come_call_finalizer3(result_type_498,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_504,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_506,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_475) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_508=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_508++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional6=(((struct sType*)(__right_value533=map$2charphsTypephp_operator_load_element(info->types,type_name_403))))),        come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional6) {
            __dec_obj226=result_type_509;
            result_type_509=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value534=map$2charphsTypephp_operator_load_element(info->types,type_name_403)))));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value534,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_509->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value536=map$2charphsClassphp_operator_load_element(info->classes,result_type_509->mClass->mName))), "05type.c", 2108, 8));
            come_call_finalizer3(__right_value536,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_403)) {
            for(            i_510=0;            i_510<list$1charph_length(info->generics_type_names);            i_510++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)come_null_check(((char*)(__right_value537=list$1charphp_operator_load_element(info->generics_type_names,i_510))), "05type.c", 2113, 9)),type_name_403))),                (__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional7) {
                    __dec_obj227=result_type_509;
                    result_type_509=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2114, "sType")),((char*)(__right_value539=xsprintf("generics_type%d",i_510))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_403)) {
            for(            i_511=0;            i_511<list$1charph_length(info->method_generics_type_names);            i_511++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)come_null_check(((char*)(__right_value541=list$1charphp_operator_load_element(info->method_generics_type_names,i_511))), "05type.c", 2120, 10)),type_name_403))),                (__right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional8) {
                    __dec_obj228=result_type_509;
                    result_type_509=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2121, "sType")),((char*)(__right_value543=xsprintf("mgenerics_type%d",i_511))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj229=result_type_509;
            result_type_509=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2126, "sType")),type_name_403,(_Bool)0,info));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_509->mConstant=result_type_509->mConstant||constant_406;
        result_type_509->mAtomic=result_type_509->mAtomic||atomic__426;
        __dec_obj230=result_type_509->mAlignas;
        result_type_509->mAlignas=(struct sNode*)come_increment_ref_count(alignas__423);
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_509->mRegister=register__409;
        result_type_509->mUnsigned=result_type_509->mUnsigned||unsigned__410;
        result_type_509->mVolatile=volatile__408;
        result_type_509->mUniq=result_type_509->mUniq||uniq__421;
        result_type_509->mStatic=(result_type_509->mStatic||static__407)&&!result_type_509->mUniq;
        result_type_509->mRecord=result_type_509->mRecord||record__404;
        result_type_509->mException=result_type_509->mException||exception__405;
        result_type_509->mExtern=result_type_509->mExtern||extern__419;
        result_type_509->mInline=result_type_509->mInline||inline__420;
        result_type_509->mRestrict=result_type_509->mRestrict||restrict__414;
        result_type_509->mLongLong=result_type_509->mLongLong||long_long_412;
        result_type_509->mLong=result_type_509->mLong||long__411;
        result_type_509->mShort=result_type_509->mShort||short__413;
        result_type_509->mPointerNum+=pointer_num_464;
        result_type_509->mHeap=result_type_509->mHeap||heap_465;
        result_type_509->mRefference=result_type_509->mRefference||refference_466;
        result_type_509->mNoRefference=result_type_509->mNoRefference||no_refference_467;
        result_type_509->mChannel=result_type_509->mChannel||channel_468;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj231=var_name_474;
            var_name_474=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result292__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value549=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2154, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(result_type_509),(char*)come_increment_ref_count(var_name_474),(_Bool)0)));
                come_call_finalizer3(result_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value549,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
        }
        else {
            static int num_anonymous_var_name_512=0;
            num_anonymous_var_name_512++;
            __dec_obj232=var_name_474;
            var_name_474=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_512));
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_513=(_Bool)0;
        function_pointer_array_num_514=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_515=0;
            while(xisdigit(*info->p)) {
                n_515=n_515*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_514=n_515;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_513=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value551=parse_params(info,(_Bool)0)));
        param_types_516=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_517=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_518=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_519=multiple_assign_var6->v4;
        come_call_finalizer3(__right_value551,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj233=type_473;
        type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2186, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj234=type_473->mResultType;
        type_473->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2188, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(sType_clone(result_type_509))));
        come_call_finalizer3(__dec_obj234,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj235=type_473->mParamTypes;
        type_473->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_516);
        come_call_finalizer3(__dec_obj235,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj236=type_473->mParamNames;
        type_473->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_517);
        come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_473->mVarArgs=var_args_519;
        type_473->mExtern=extern__419;
        if(        function_pointer_array_513) {
            type_473->mLambdaArray=(_Bool)1;
            type_473->mLambdaArrayNum=function_pointer_array_num_514;
        }
        type_473->mFunctionPointerNum=function_pointer_num_508;
        come_call_finalizer3(result_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_517,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_518,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_403,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_520=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_521=node_compile(exp_520,info);
        if(        !Value_521) {
            err_msg(info,"invalid __typeof__ expression");
            __result294__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(__right_value559=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count((struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 2210, "struct tuple3$3sTypepcharphbool")),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_520) { exp_520 = come_decrement_ref_count2(exp_520, ((struct sNode*)exp_520)->finalize, ((struct sNode*)exp_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
            type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value559,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result294__;
        }
        else {
        }
        come_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj239=type_473;
        type_473=(struct sType*)come_increment_ref_count(sType_clone(come_value_522->type));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        attribute_523=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_523,"")) {
            __dec_obj240=type_473->mAttribute;
            type_473->mAttribute=(char*)come_increment_ref_count(attribute_523);
            __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_479&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj241=var_name_474;
                var_name_474=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_425) {
                static int num_anonymous_var_name_524=0;
                num_anonymous_var_name_524++;
                __dec_obj242=var_name_474;
                var_name_474=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_524));
                __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj243=var_name_474;
                var_name_474=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_525=0;
                num_anonymous_var_name_525++;
                __dec_obj244=var_name_474;
                var_name_474=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_525));
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_479&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_526=info->no_comma;
                info->no_comma=(_Bool)1;
                node_527=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_526;
                __dec_obj245=type_473->mSizeNum;
                type_473->mSizeNum=(struct sNode*)come_increment_ref_count(node_527);
                if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_527) { node_527 = come_decrement_ref_count2(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_528=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_523,"")&&string_operator_not_equals(attribute2_528,"")) {
                __dec_obj246=type_473->mAttribute;
                type_473->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_523,((char*)(__right_value569=charp_operator_add(" ",attribute2_528)))));
                __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_528,"")) {
                __dec_obj247=type_473->mAttribute;
                type_473->mAttribute=(char*)come_increment_ref_count(attribute2_528);
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_528 = come_decrement_ref_count2(attribute2_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(exp_520) { exp_520 = come_decrement_ref_count2(exp_520, ((struct sNode*)exp_520)->finalize, ((struct sNode*)exp_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        attribute_523 = come_decrement_ref_count2(attribute_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        (_if_conditional9=(((struct sType*)(__right_value571=map$2charphsTypephp_operator_load_element(info->types,type_name_403))))),        come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            __dec_obj251=type_473;
            type_473=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value572=map$2charphsTypephp_operator_load_element(info->types,type_name_403)))));
            come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_473->mTypedefOriginalPointerNum=type_473->mPointerNum;
            type_473->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value574=map$2charphsClassphp_operator_load_element(info->classes,type_473->mClass->mName))), "05type.c", 2278, 11));
            come_call_finalizer3(__right_value574,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj252=type_473->mOriginalTypeName;
            type_473->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_403));
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_473->mOriginalTypeNamePointerNum=pointer_num_464;
            type_473->mOriginalTypeNameHeap=heap_465;
            type_473->mConstant=type_473->mConstant||constant_406;
            type_473->mAtomic=type_473->mAtomic||atomic__426;
            __dec_obj253=type_473->mAlignas;
            type_473->mAlignas=(struct sNode*)come_increment_ref_count(alignas__423);
            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
            type_473->mRegister=register__409;
            type_473->mUnsigned=type_473->mUnsigned||unsigned__410;
            type_473->mVolatile=volatile__408;
            type_473->mUniq=type_473->mUniq||uniq__421;
            type_473->mStatic=(type_473->mStatic||static__407)&&!type_473->mUniq;
            type_473->mRecord=type_473->mRecord||record__404;
            type_473->mException=type_473->mException||exception__405;
            type_473->mExtern=type_473->mExtern||extern__419;
            type_473->mInline=type_473->mInline||inline__420;
            type_473->mRestrict=type_473->mRestrict||restrict__414;
            type_473->mLongLong=type_473->mLongLong||long_long_412;
            type_473->mLong=type_473->mLong||long__411;
            type_473->mShort=type_473->mShort||short__413;
            type_473->mPointerNum+=pointer_num_464;
            type_473->mHeap=type_473->mHeap||heap_465;
            type_473->mRefference=type_473->mRefference||refference_466;
            type_473->mNoRefference=type_473->mNoRefference||no_refference_467;
            type_473->mChannel=type_473->mChannel||channel_468;
            __dec_obj254=type_473->mTupleName;
            type_473->mTupleName=(char*)come_increment_ref_count(tuple_name_469);
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_403)) {
            for(            i_529=0;            i_529<list$1charph_length(info->generics_type_names);            i_529++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)come_null_check(((char*)(__right_value576=list$1charphp_operator_load_element(info->generics_type_names,i_529))), "05type.c", 2308, 12)),type_name_403))),                (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional10) {
                    __dec_obj255=type_473;
                    type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2309, "sType")),((char*)(__right_value578=xsprintf("generics_type%d",i_529))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_473->mConstant=type_473->mConstant||constant_406;
            type_473->mAtomic=type_473->mAtomic||atomic__426;
            __dec_obj256=type_473->mAlignas;
            type_473->mAlignas=(struct sNode*)come_increment_ref_count(alignas__423);
            if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
            type_473->mRegister=register__409;
            type_473->mUnsigned=type_473->mUnsigned||unsigned__410;
            type_473->mVolatile=volatile__408;
            type_473->mUniq=type_473->mUniq||uniq__421;
            type_473->mStatic=(type_473->mStatic||static__407)&&!type_473->mUniq;
            type_473->mRecord=type_473->mRecord||record__404;
            type_473->mException=type_473->mException||exception__405;
            type_473->mExtern=type_473->mExtern||extern__419;
            type_473->mInline=type_473->mInline||inline__420;
            type_473->mRestrict=type_473->mRestrict||restrict__414;
            type_473->mLongLong=type_473->mLongLong||long_long_412;
            type_473->mLong=type_473->mLong||long__411;
            type_473->mShort=type_473->mShort||short__413;
            type_473->mPointerNum+=pointer_num_464;
            type_473->mHeap=type_473->mHeap||heap_465;
            type_473->mRefference=type_473->mRefference||refference_466;
            type_473->mNoRefference=type_473->mNoRefference||no_refference_467;
            type_473->mChannel=type_473->mChannel||channel_468;
            __dec_obj257=type_473->mTupleName;
            type_473->mTupleName=(char*)come_increment_ref_count(tuple_name_469);
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_403)) {
            for(            i_530=0;            i_530<list$1charph_length(info->method_generics_type_names);            i_530++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)come_null_check(((char*)(__right_value580=list$1charphp_operator_load_element(info->method_generics_type_names,i_530))), "05type.c", 2338, 13)),type_name_403))),                (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional11) {
                    __dec_obj258=type_473;
                    type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2339, "sType")),((char*)(__right_value582=xsprintf("mgenerics_type%d",i_530))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_473->mConstant=type_473->mConstant||constant_406;
            type_473->mAtomic=type_473->mAtomic||atomic__426;
            __dec_obj259=type_473->mAlignas;
            type_473->mAlignas=(struct sNode*)come_increment_ref_count(alignas__423);
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
            type_473->mRegister=register__409;
            type_473->mUnsigned=type_473->mUnsigned||unsigned__410;
            type_473->mVolatile=volatile__408;
            type_473->mUniq=type_473->mUniq||uniq__421;
            type_473->mStatic=(type_473->mStatic||static__407)&&!type_473->mUniq;
            type_473->mRecord=type_473->mRecord||record__404;
            type_473->mException=type_473->mException||exception__405;
            type_473->mExtern=type_473->mExtern||extern__419;
            type_473->mInline=type_473->mInline||inline__420;
            type_473->mRestrict=type_473->mRestrict||restrict__414;
            type_473->mLongLong=type_473->mLongLong||long_long_412;
            type_473->mLong=type_473->mLong||long__411;
            type_473->mShort=type_473->mShort||short__413;
            type_473->mPointerNum+=pointer_num_464;
            type_473->mHeap=type_473->mHeap||heap_465;
            type_473->mRefference=type_473->mRefference||refference_466;
            type_473->mNoRefference=type_473->mNoRefference||no_refference_467;
            type_473->mChannel=type_473->mChannel||channel_468;
            __dec_obj260=type_473->mTupleName;
            type_473->mTupleName=(char*)come_increment_ref_count(tuple_name_469);
            __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional12=(((struct sClass*)(__right_value584=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_403)))==((void*)0))),            come_call_finalizer3(__right_value584,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional12) {
                __result295__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value586=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2372, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value586,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result295__;
            }
            __dec_obj261=type_473;
            type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2375, "sType")),type_name_403,(_Bool)0,info));
            come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value589=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_531=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_532=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_533=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value589,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_533) {
                    __result296__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value591=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2381, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_532 = come_decrement_ref_count2(var_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value591,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result296__;
                }
                list$1sTypeph_push_back(type_473->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_531));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_532 = come_decrement_ref_count2(var_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2));
                    __result297__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value593=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2398, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_532 = come_decrement_ref_count2(var_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value593,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result297__;
                }
                come_call_finalizer3(generics_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_532 = come_decrement_ref_count2(var_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_473,info)) {
                __dec_obj262=type_473;
                type_473=(struct sType*)come_increment_ref_count(solve_generics(type_473,info->generics_type,info));
                come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_473,type_473,info)) {
                    new_name_534=(char*)come_increment_ref_count(create_generics_name(type_473,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_534);
                    exit(7);
                    new_name_534 = come_decrement_ref_count2(new_name_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_473->mConstant=type_473->mConstant||constant_406;
            type_473->mAtomic=type_473->mAtomic||atomic__426;
            __dec_obj263=type_473->mAlignas;
            type_473->mAlignas=(struct sNode*)come_increment_ref_count(alignas__423);
            if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
            type_473->mRegister=register__409;
            type_473->mUnsigned=type_473->mUnsigned||unsigned__410;
            type_473->mVolatile=volatile__408;
            type_473->mUniq=type_473->mUniq||uniq__421;
            type_473->mStatic=(type_473->mStatic||static__407)&&!type_473->mUniq;
            type_473->mRecord=type_473->mRecord||record__404;
            type_473->mException=type_473->mException||exception__405;
            type_473->mExtern=type_473->mExtern||extern__419;
            type_473->mInline=type_473->mInline||inline__420;
            type_473->mRestrict=type_473->mRestrict||restrict__414;
            type_473->mLongLong=type_473->mLongLong||long_long_412;
            type_473->mLong=type_473->mLong||long__411;
            type_473->mShort=type_473->mShort||short__413;
            type_473->mPointerNum+=pointer_num_464;
            type_473->mHeap=type_473->mHeap||heap_465;
            type_473->mRefference=type_473->mRefference||refference_466;
            type_473->mNoRefference=type_473->mNoRefference||no_refference_467;
            type_473->mChannel=type_473->mChannel||channel_468;
            __dec_obj264=type_473->mTupleName;
            type_473->mTupleName=(char*)come_increment_ref_count(tuple_name_469);
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj265=type_name_403;
            type_name_403=(char*)come_increment_ref_count(type_473->mClass->mName);
            __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__415) {
                klass_535=((struct sClass*)(__right_value596=map$2charphsClassphp_operator_load_element(info->classes,type_name_403)));
                come_call_finalizer3(__right_value596,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_535==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_403),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2444, "sClass")),type_name_403,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__416) {
                klass_577=((struct sClass*)(__right_value604=map$2charphsClassphp_operator_load_element(info->classes,type_name_403)));
                come_call_finalizer3(__right_value604,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_577==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_403),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2451, "sClass")),type_name_403,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj266=type_473;
            type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2455, "sType")),type_name_403,(_Bool)0,info));
            come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_473->mConstant=type_473->mConstant||constant_406;
            type_473->mAtomic=type_473->mAtomic||atomic__426;
            __dec_obj267=type_473->mAlignas;
            type_473->mAlignas=(struct sNode*)come_increment_ref_count(alignas__423);
            if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
            type_473->mRegister=register__409;
            type_473->mUnsigned=type_473->mUnsigned||unsigned__410;
            type_473->mVolatile=volatile__408;
            type_473->mUniq=type_473->mUniq||uniq__421;
            type_473->mStatic=(type_473->mStatic||static__407)&&!type_473->mUniq;
            type_473->mRecord=type_473->mRecord||record__404;
            type_473->mException=type_473->mException||exception__405;
            type_473->mExtern=type_473->mExtern||extern__419;
            type_473->mInline=type_473->mInline||inline__420;
            type_473->mRestrict=type_473->mRestrict||restrict__414;
            type_473->mLongLong=type_473->mLongLong||long_long_412;
            type_473->mLong=type_473->mLong||long__411;
            type_473->mShort=type_473->mShort||short__413;
            type_473->mPointerNum+=pointer_num_464;
            type_473->mHeap=type_473->mHeap||heap_465;
            type_473->mRefference=type_473->mRefference||refference_466;
            type_473->mNoRefference=type_473->mNoRefference||no_refference_467;
            type_473->mChannel=type_473->mChannel||channel_468;
            __dec_obj268=type_473->mTupleName;
            type_473->mTupleName=(char*)come_increment_ref_count(tuple_name_469);
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_473->mPointerNum++;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_473->mHeap=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                type_473->mNoRefference=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mNoRefference=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_473->mRefference=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_473->mNoHeap=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_473->mGuardValue=(_Bool)1;
                }
                else {
                    type_473->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_473->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_473->mPointerNum++;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_473->mHeap=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                type_473->mNoRefference=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mNoRefference=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_473->mRefference=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_473->mChannel=(_Bool)1;
                if(                type_473->mNoSolvedGenericsType->v1) {
                    type_473->mNoSolvedGenericsType->v1->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_578=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2613, "list$1sTypeph"))));
            list$1sTypeph_push_back(types_578,(struct sType*)come_increment_ref_count(sType_clone(type_473)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value612=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_579=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_580=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_581=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value612,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_581) {
                    __result319__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value614=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2624, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_580 = come_decrement_ref_count2(name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(types_578,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value614,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result319__;
                }
                list$1sTypeph_push_back(types_578,(struct sType*)come_increment_ref_count(sType_clone(type2_579)));
                come_call_finalizer3(type2_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_580 = come_decrement_ref_count2(name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_582=list$1sTypeph_length(types_578);
            __dec_obj269=type_473;
            type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2637, "sType")),((char*)(__right_value617=xsprintf("tuple%d",num_tuples_582))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_473->mPointerNum++;
            type_473->mHeap=(_Bool)1;
            for(            o2_saved_583=(struct list$1sTypeph*)come_increment_ref_count((types_578)),it_584=list$1sTypeph_begin((o2_saved_583));            !list$1sTypeph_end((o2_saved_583));            it_584=list$1sTypeph_next((o2_saved_583))            ){
                list$1sTypeph_push_back(type_473->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value619=sType_clone(it_584))))));
                come_call_finalizer3(__right_value619,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_583,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_473->mPointerNum++;
                    if(                    type_473->mNoSolvedGenericsType->v1) {
                        type_473->mNoSolvedGenericsType->v1->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_473->mHeap=(_Bool)1;
                    if(                    type_473->mNoSolvedGenericsType->v1) {
                        type_473->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    type_473->mNoRefference=(_Bool)1;
                    if(                    type_473->mNoSolvedGenericsType->v1) {
                        type_473->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_473->mRefference=(_Bool)1;
                    if(                    type_473->mNoSolvedGenericsType->v1) {
                        type_473->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_473->mChannel=(_Bool)1;
                    if(                    type_473->mNoSolvedGenericsType->v1) {
                        type_473->mNoSolvedGenericsType->v1->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_473,info)) {
                __dec_obj270=type_473;
                type_473=(struct sType*)come_increment_ref_count(solve_generics(type_473,info->generics_type,info));
                come_call_finalizer3(__dec_obj270,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_473,type_473,info)) {
                    new_name_585=(char*)come_increment_ref_count(create_generics_name(type_473,info));
                    printf("output generics is failed(%s)\n",new_name_585);
                    exit(9);
                    new_name_585 = come_decrement_ref_count2(new_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_473->mMultipleTypes=(_Bool)1;
            __dec_obj271=type_name_403;
            type_name_403=(char*)come_increment_ref_count(type_473->mClass->mName);
            __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_578,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_586=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_586,"")) {
            __dec_obj272=type_473->mAttribute;
            type_473->mAttribute=(char*)come_increment_ref_count(attribute_586);
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_479&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj273=var_name_474;
                var_name_474=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_425) {
                static int num_anonymous_var_name_587=0;
                num_anonymous_var_name_587++;
                __dec_obj274=var_name_474;
                var_name_474=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_587));
                __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj275=var_name_474;
                var_name_474=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_588=0;
                num_anonymous_var_name_588++;
                __dec_obj276=var_name_474;
                var_name_474=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_588));
                __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_479&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_589=info->no_comma;
                info->no_comma=(_Bool)1;
                node_590=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_589;
                __dec_obj277=type_473->mSizeNum;
                type_473->mSizeNum=(struct sNode*)come_increment_ref_count(node_590);
                if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_590) { node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_591=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_586,"")&&string_operator_not_equals(attribute2_591,"")) {
                __dec_obj278=type_473->mAttribute;
                type_473->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_586,((char*)(__right_value629=charp_operator_add(" ",attribute2_591)))));
                __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_591,"")) {
                __dec_obj279=type_473->mAttribute;
                type_473->mAttribute=(char*)come_increment_ref_count(attribute2_591);
                __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_591 = come_decrement_ref_count2(attribute2_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_586 = come_decrement_ref_count2(attribute_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_473->mArrayPointerType=(_Bool)1;
            type_473->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_592=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(type_473->mArrayNum,(struct sNode*)come_increment_ref_count(node_592));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_592) { node_592 = come_decrement_ref_count2(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    multiple_assign_var9=((struct tuple2$2charphcharph*)(__right_value632=parse_attribute(info,(_Bool)0)));
    asm_name_593=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_594=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer3(__right_value632,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_594,"")) {
        __dec_obj280=type_473->mAttribute;
        type_473->mAttribute=(char*)come_increment_ref_count(attribute2_594);
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj281=type_473->mAsmName;
    type_473->mAsmName=(char*)come_increment_ref_count(asm_name_593);
    __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_473->mChannel) {
        type_before_595=(struct sType*)come_increment_ref_count(sType_clone(type_473));
        __dec_obj282=type_473;
        type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2808, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj282,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj283=type_473->mArrayNum;
        type_473->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___596[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value636=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2809, "struct list$1sNodeph")),1,__list_values1___596)));
        come_call_finalizer3(__dec_obj283,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value636) { __right_value636 = come_decrement_ref_count2(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj284=type_473->mChannelType;
        type_473->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2810, "tuple1$1sTypeph"));
        come_call_finalizer3(__dec_obj284,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj285=type_473->mChannelType->v1;
        type_473->mChannelType->v1=(struct sType*)come_increment_ref_count(type_before_595);
        come_call_finalizer3(__dec_obj285,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_473->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_595,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_473->mException) {
        type2_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2815, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type2_598->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2816, "sType")),"generics_type0",(_Bool)0,info)));
        list$1sTypephp_operator_store_element(type2_598->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2817, "sType")),"generics_type1",(_Bool)0,info)));
        type2_598->mPointerNum=1;
        type2_598->mHeap=(_Bool)1;
        type3_604=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2821, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type3_604->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_473));
        list$1sTypephp_operator_store_element(type3_604->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2823, "sType")),"char*",(_Bool)0,info)));
        ((struct sType*)come_null_check(((struct sType*)(__right_value650=list$1sTypephp_operator_load_element(type3_604->mGenericsTypes,1))), "05type.c", 2824, 14))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value650,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type4_605=(struct sType*)come_increment_ref_count(solve_generics(type2_598,type3_604,info));
        type4_605->mException=(_Bool)1;
        type4_605->mUniq=type_473->mUniq;
        __result323__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value653=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2831, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type4_605),(char*)come_increment_ref_count(var_name_474),(_Bool)1)));
        come_call_finalizer3(type2_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_604,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_605,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
        attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_593 = come_decrement_ref_count2(asm_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute2_594 = come_decrement_ref_count2(attribute2_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value653,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result323__;
        come_call_finalizer3(type2_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_604,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_605,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    object_interface_427) {
        refference_type_606=(struct sType*)come_increment_ref_count(type_473);
        __dec_obj287=type_473;
        type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2836, "sType")),"object",(_Bool)0,info));
        come_call_finalizer3(__dec_obj287,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_473->mPointerNum++;
        type_473->mHeap=(_Bool)1;
        __dec_obj288=type_473->mRefferenceOriginalType;
        type_473->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2840, "tuple1$1sTypeph"));
        come_call_finalizer3(__dec_obj288,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj289=type_473->mRefferenceOriginalType->v1;
        type_473->mRefferenceOriginalType->v1=(struct sType*)come_increment_ref_count(refference_type_606);
        come_call_finalizer3(__dec_obj289,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(refference_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_463,"")) {
        __dec_obj290=type_473->mAttribute;
        type_473->mAttribute=(char*)come_increment_ref_count(attribute_463);
        __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result324__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value658=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2848, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_473),(char*)come_increment_ref_count(var_name_474),(_Bool)1)));
    type_name_403 = come_decrement_ref_count2(type_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__423) { alignas__423 = come_decrement_ref_count2(alignas__423, ((struct sNode*)alignas__423)->finalize, ((struct sNode*)alignas__423)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute_463 = come_decrement_ref_count2(attribute_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    tuple_name_469 = come_decrement_ref_count2(tuple_name_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_474 = come_decrement_ref_count2(var_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_593 = come_decrement_ref_count2(asm_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute2_594 = come_decrement_ref_count2(attribute2_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value658,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_500;
int i_501;
char* __result289__;
char* default_value_502;
char* __result290__;
default_value_502 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_500=self->head;
    i_501=0;
    while(it_500!=((void*)0)) {
        if(        position==i_501) {
            __result289__ = gComeFunResultObject = __result_obj__ = it_500->item;
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
        it_500=it_500->next;
        i_501++;
    }
    memset(&default_value_502,0,sizeof(char*));
    __result290__ = gComeFunResultObject = __result_obj__ = default_value_502;
    default_value_502 = come_decrement_ref_count2(default_value_502, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj222;
struct tuple1$1sTypeph* __result291__;
    __dec_obj222=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
char* __dec_obj237;
struct tuple3$3sTypepcharphbool* __result293__;
    self->v1=v1;
    __dec_obj237=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
char* __dec_obj238;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj238=self->v2;
            __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj248;
struct sType* __dec_obj249;
char* __dec_obj250;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj248=self->c_value;
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj249=self->type;
            come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj250=self->c_value_without_right_value_objects;
            __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_553;
unsigned int it_554;
_Bool same_key_exist_571;
char* it2_574;
struct map$2charphsClassph* __result318__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_553=charp_get_hash_key(key)%self->size;
    it_554=hash_553;
    while((_Bool)1) {
        if(        self->item_existance[it_554]) {
            if(            charp_equals(self->keys[it_554],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_554]);
                    self->keys[it_554] = come_decrement_ref_count2(self->keys[it_554], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_554]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_554]);
                    self->keys[it_554]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_554],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_554]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_554]=item;
                }
                break;
            }
            it_554++;
            if(            it_554>=self->size) {
                it_554=0;
            }
            else if(            it_554==hash_553) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_554]=(_Bool)1;
            if(            1) {
                self->keys[it_554]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_554]=key;
            }
            if(            1) {
                self->items[it_554]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_554]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_571=(_Bool)0;
    for(    it2_574=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_574=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_574,key)) {
            same_key_exist_571=(_Bool)1;
        }
    }
    if(    !same_key_exist_571) {
        list$1charp_push_back(self->key_list,key);
    }
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_536;
void* __right_value597 = (void*)0;
char** keys_537;
void* __right_value598 = (void*)0;
struct sClass** items_538;
void* __right_value599 = (void*)0;
_Bool* item_existance_539;
int len_540;
char* it_543;
struct sClass* default_value_546;
void* __right_value600 = (void*)0;
struct sClass* it2_547;
unsigned int hash_550;
int n_551;
struct sClass* default_value_552;
void* __right_value601 = (void*)0;
default_value_546 = (void*)0;
default_value_552 = (void*)0;
    size_536=self->size*10;
    keys_537=(char**)come_increment_ref_count(((char**)(__right_value597=(char**)come_calloc(1, sizeof(char*)*(1*(size_536)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_538=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value598=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_536)), "/usr/local/include/comelang.h", 2558, "sClass*%"))));
    item_existance_539=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value599=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_536)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_540=0;
    for(    it_543=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_543=map$2charphsClassph_next(self)    ){
        memset(&default_value_546,0,sizeof(struct sClass*));
        it2_547=((struct sClass*)(__right_value600=map$2charphsClassph_at(self,it_543,default_value_546)));
        come_call_finalizer3(__right_value600,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_550=charp_get_hash_key(it_543)%size_536;
        n_551=hash_550;
        while((_Bool)1) {
            if(            item_existance_539[n_551]) {
                n_551++;
                if(                n_551>=size_536) {
                    n_551=0;
                }
                else if(                n_551==hash_550) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_539[n_551]=(_Bool)1;
                keys_537[n_551]=it_543;
                items_538[n_551]=((struct sClass*)(__right_value601=map$2charphsClassph_at(self,it_543,default_value_552)));
                come_call_finalizer3(__right_value601,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_540++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_537;
    self->items=items_538;
    self->item_existance=item_existance_539;
    self->size=size_536;
    self->len=len_540;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_541;
char* __result298__;
char* __result299__;
char* result_542;
char* __result300__;
result_541 = (void*)0;
result_542 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_541,0,sizeof(char*));
        __result298__ = gComeFunResultObject = __result_obj__ = result_541;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result299__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    memset(&result_542,0,sizeof(char*));
    __result300__ = gComeFunResultObject = __result_obj__ = result_542;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_544;
char* __result301__;
char* __result302__;
char* result_545;
char* __result303__;
result_544 = (void*)0;
result_545 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_544,0,sizeof(char*));
        __result301__ = gComeFunResultObject = __result_obj__ = result_544;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result302__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    memset(&result_545,0,sizeof(char*));
    __result303__ = gComeFunResultObject = __result_obj__ = result_545;
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_548;
unsigned int it_549;
struct sClass* __result304__;
struct sClass* __result305__;
struct sClass* __result306__;
struct sClass* __result307__;
    hash_548=charp_get_hash_key(((char*)key))%self->size;
    it_549=hash_548;
    while((_Bool)1) {
        if(        self->item_existance[it_549]) {
            if(            charp_equals(self->keys[it_549],key)) {
                __result304__ = gComeFunResultObject = __result_obj__ = self->items[it_549];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
            it_549++;
            if(            it_549>=self->size) {
                it_549=0;
            }
            else if(            it_549==hash_548) {
                __result305__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result305__;
            }
        }
        else {
            __result306__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result306__;
        }
    }
    __result307__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_555;
struct list_item$1charp* it_556;
struct list$1charp* __result311__;
    it2_555=0;
    it_556=self->head;
    while(it_556!=((void*)0)) {
        if(        charp_equals(it_556->item,item)) {
            list$1charp_delete(self,it2_555,it2_555+1);
            break;
        }
        it2_555++;
        it_556=it_556->next;
    }
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_557;
struct list$1charp* __result308__;
struct list_item$1charp* it_560;
int i_561;
struct list_item$1charp* prev_it_562;
struct list_item$1charp* it_563;
int i_564;
struct list_item$1charp* prev_it_565;
struct list_item$1charp* it_566;
struct list_item$1charp* head_prev_it_567;
struct list_item$1charp* tail_it_568;
int i_569;
struct list_item$1charp* prev_it_570;
struct list$1charp* __result310__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_557=tail;
        tail=head;
        head=tmp_557;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result308__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_560=self->head;
        i_561=0;
        while(it_560!=((void*)0)) {
            if(            i_561<tail) {
                prev_it_562=it_560;
                it_560=it_560->next;
                i_561++;
                come_call_finalizer3(prev_it_562,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_561==tail) {
                self->head=it_560;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_560=it_560->next;
                i_561++;
            }
        }
    }
    else if(    tail==self->len) {
        it_563=self->head;
        i_564=0;
        while(it_563!=((void*)0)) {
            if(            i_564==head) {
                self->tail=it_563->prev;
                self->tail->next=((void*)0);
            }
            if(            i_564>=head) {
                prev_it_565=it_563;
                it_563=it_563->next;
                i_564++;
                come_call_finalizer3(prev_it_565,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_563=it_563->next;
                i_564++;
            }
        }
    }
    else {
        it_566=self->head;
        head_prev_it_567=((void*)0);
        tail_it_568=((void*)0);
        i_569=0;
        while(it_566!=((void*)0)) {
            if(            i_569==head) {
                head_prev_it_567=it_566->prev;
            }
            if(            i_569==tail) {
                tail_it_568=it_566;
            }
            if(            i_569>=head&&i_569<tail) {
                prev_it_570=it_566;
                it_566=it_566->next;
                i_569++;
                come_call_finalizer3(prev_it_570,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_566=it_566->next;
                i_569++;
            }
        }
        if(        head_prev_it_567!=((void*)0)) {
            head_prev_it_567->next=tail_it_568;
        }
        if(        tail_it_568!=((void*)0)) {
            tail_it_568->prev=head_prev_it_567;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_558;
struct list_item$1charp* prev_it_559;
struct list$1charp* __result309__;
    it_558=self->head;
    while(it_558!=((void*)0)) {
        prev_it_559=it_558;
        it_558=it_558->next;
        come_call_finalizer3(prev_it_559,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_572;
char* __result312__;
char* __result313__;
char* result_573;
char* __result314__;
result_572 = (void*)0;
result_573 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_572,0,sizeof(char*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_572;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->it=self->head;
    if(    self->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_573,0,sizeof(char*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_573;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_575;
char* __result315__;
char* __result316__;
char* result_576;
char* __result317__;
result_575 = (void*)0;
result_576 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_575,0,sizeof(char*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_575;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_576,0,sizeof(char*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_576;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_597;
struct list$1sNodeph* __result320__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_597=0;    i_597<num_value;    i_597++    ){
        list$1sNodeph_push_back(self,values[i_597]);
    }
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_599;
int i_600;
struct sType* default_value_601;
struct list$1sTypeph* __result321__;
struct list_item$1sTypeph* it_602;
int i_603;
struct sType* __dec_obj286;
struct list$1sTypeph* __result322__;
default_value_601 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_599=self->len;
        for(        i_600=0;        i_600<position-len_599;        i_600++        ){
            memset(&default_value_601,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_601));
            come_call_finalizer3(default_value_601,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result321__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    it_602=self->head;
    i_603=0;
    while(it_602!=((void*)0)) {
        if(        position==i_603) {
            __dec_obj286=it_602->item;
            it_602->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj286,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_602=it_602->next;
        i_603++;
    }
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

