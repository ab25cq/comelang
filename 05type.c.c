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
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
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
static struct object* list$1objectph_begin(struct list$1objectph* self);
static _Bool list$1objectph_end(struct list$1objectph* self);
static struct object* list$1objectph_next(struct list$1objectph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
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
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1objectph_length(struct list$1objectph* self);
static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position);
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
static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static void list$1objectphp_operator_store_element(struct list$1objectph* self, int position, struct object* item);
static struct list$1objectph* list$1objectph_replace(struct list$1objectph* self, int position, struct object* item);
static void sType_finalize(struct sType* self);
static struct sType* sType_clone(struct sType* self);
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
struct sType* type_288;
void* __right_value251 = (void*)0;
struct sClass* generics_class_292;
void* __right_value252 = (void*)0;
_Bool generics_type_name_293;
void* __right_value253 = (void*)0;
_Bool mgenerics_type_name_299;
    klass_266=((struct sClass*)(__right_value249=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value249,sClass_finalize, 0, 1, 0, 0, (void*)0);
    type_288=((struct sType*)(__right_value250=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
    generics_class_292=((struct sClass*)(__right_value251=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer3(__right_value251,sClass_finalize, 0, 1, 0, 0, (void*)0);
    generics_type_name_293=list$1charph_contained(info->generics_type_names,((char*)(__right_value252=__builtin_string(buf))));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_299=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value253=__builtin_string(buf))));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_288&&type_288->mTypedef)||(klass_266&&klass_266->mNumber)||(klass_266&&klass_266->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_292||generics_type_name_293||mgenerics_type_name_299||klass_266||type_288||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
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
struct list$1tuple2$2charphsTypephph* __dec_obj33;
char* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
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
            come_call_finalizer3(__dec_obj33,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj62=self->mDeclareSName;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj63=self->mParentClassName;
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj64=self->mAttribute;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_270;
struct list_item$1tuple2$2charphsTypephph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer3(prev_it_271,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            come_call_finalizer3(__dec_obj34,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj35;
struct sType* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj36=self->v2;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_286;
struct list_item$1tuple2$2charphsTypephph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_289;
unsigned int hash_290;
unsigned int it_291;
struct sType* __result211__;
struct sType* __result212__;
struct sType* __result213__;
struct sType* __result214__;
default_value_289 = (void*)0;
    memset(&default_value_289,0,sizeof(struct sType*));
    hash_290=charp_get_hash_key(((char*)key))%self->size;
    it_291=hash_290;
    while((_Bool)1) {
        if(        self->item_existance[it_291]) {
            if(            charp_equals(self->keys[it_291],key)) {
                __result211__ = gComeFunResultObject = __result_obj__ = self->items[it_291];
                come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result211__;
            }
            it_291++;
            if(            it_291>=self->size) {
                it_291=0;
            }
            else if(            it_291==hash_290) {
                __result212__ = gComeFunResultObject = __result_obj__ = default_value_289;
                come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result212__;
            }
        }
        else {
            __result213__ = gComeFunResultObject = __result_obj__ = default_value_289;
            come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result213__;
        }
    }
    __result214__ = gComeFunResultObject = __result_obj__ = default_value_289;
    come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_296;
    for(    it_296=list$1charph_begin(self);    !list$1charph_end(self);    it_296=list$1charph_next(self)    ){
        if(        charp_equals(it_296,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_294;
char* __result215__;
char* __result216__;
char* result_295;
char* __result217__;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_294,0,sizeof(char*));
        __result215__ = gComeFunResultObject = __result_obj__ = result_294;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    self->it=self->head;
    if(    self->it) {
        __result216__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    memset(&result_295,0,sizeof(char*));
    __result217__ = gComeFunResultObject = __result_obj__ = result_295;
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_297;
char* __result218__;
char* __result219__;
char* result_298;
char* __result220__;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_297,0,sizeof(char*));
        __result218__ = gComeFunResultObject = __result_obj__ = result_297;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result219__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    memset(&result_298,0,sizeof(char*));
    __result220__ = gComeFunResultObject = __result_obj__ = result_298;
    gComeFunResultObject = (void*)0;
    return __result220__;
}

void skip_paren(struct sInfo* info){
int nest_300;
    nest_300=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_300++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_300--;
            if(            nest_300==0) {
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
char c_301;
    c_301=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_301==59||c_301==32||c_301==9||c_301==10||c_301==10||c_301==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* buf_302;
void* __right_value256 = (void*)0;
_Bool _if_conditional1;
void* __right_value257 = (void*)0;
char* __result221__;
void* __right_value258 = (void*)0;
char* result_303;
void* __right_value259 = (void*)0;
_Bool _if_conditional2;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __result226__;
char* __result227__;
    buf_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 92, "buffer"))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_302,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value256=buffer_to_string(buf_302))))==0)),    (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line);
        __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string("")));
        come_call_finalizer3(buf_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_303=(char*)come_increment_ref_count(buffer_to_string(buf_302));
    if(    (_if_conditional2=(info->module_params&&((char*)(__right_value259=map$2charphcharphp_operator_load_element(info->module_params,result_303))))),    (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional2) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string(((char*)come_null_check(((char*)(__right_value260=map$2charphcharphp_operator_load_element(info->module_params,result_303))), "05type.c", 110, 0)))));
        come_call_finalizer3(buf_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_303 = come_decrement_ref_count2(result_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(buf_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_303 = come_decrement_ref_count2(result_303, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_304;
unsigned int hash_305;
unsigned int it_306;
char* __result222__;
char* __result223__;
char* __result224__;
char* __result225__;
default_value_304 = (void*)0;
    memset(&default_value_304,0,sizeof(char*));
    hash_305=charp_get_hash_key(((char*)key))%self->size;
    it_306=hash_305;
    while((_Bool)1) {
        if(        self->item_existance[it_306]) {
            if(            charp_equals(self->keys[it_306],key)) {
                __result222__ = gComeFunResultObject = __result_obj__ = self->items[it_306];
                default_value_304 = come_decrement_ref_count2(default_value_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result222__;
            }
            it_306++;
            if(            it_306>=self->size) {
                it_306=0;
            }
            else if(            it_306==hash_305) {
                __result223__ = gComeFunResultObject = __result_obj__ = default_value_304;
                default_value_304 = come_decrement_ref_count2(default_value_304, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result223__;
            }
        }
        else {
            __result224__ = gComeFunResultObject = __result_obj__ = default_value_304;
            default_value_304 = come_decrement_ref_count2(default_value_304, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result224__;
        }
    }
    __result225__ = gComeFunResultObject = __result_obj__ = default_value_304;
    default_value_304 = come_decrement_ref_count2(default_value_304, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_307;
int sline_308;
char* buf_309;
void* __right_value262 = (void*)0;
char* __dec_obj65;
void* __right_value263 = (void*)0;
char* __dec_obj66;
char* __result228__;
buf_309 = (void*)0;
    p_307=info->p;
    sline_308=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj65=buf_309;
        buf_309=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj66=buf_309;
        buf_309=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_307;
    info->sline=sline_308;
    __result228__ = gComeFunResultObject = __result_obj__ = buf_309;
    buf_309 = come_decrement_ref_count2(buf_309, (void*)0, (void*)0, 0, 1, 0, (void*)0);
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
int line_310;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* fname_311;
void* __right_value266 = (void*)0;
char* __dec_obj67;
int nest_312;
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
                line_310=0;
                fname_311=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 191, "buffer"))));
                while(xisdigit(*info->p)) {
                    line_310=line_310*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_311,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_310;
                __dec_obj67=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_311));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_311,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            nest_312=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_312++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_312--;
                    if(                    nest_312==0) {
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
struct list$1objectph* o2_saved_313;
struct object* it_316;
struct object* __tmp_infY1;
_Bool __result235__;
    for(    o2_saved_313=(struct list$1objectph*)come_increment_ref_count((type->mGenericsTypes)),it_316=list$1objectph_begin((o2_saved_313));    !list$1objectph_end((o2_saved_313));    it_316=list$1objectph_next((o2_saved_313))    ){
        if(        is_contained_generics_class(((__tmp_infY1=it_316),((struct sType*)(__tmp_infY1 ? __tmp_infY1->_protocol_obj:(void*)0))),info)) {
            __result235__ = (_Bool)1;
            come_call_finalizer3(o2_saved_313,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result235__;
        }
    }
    come_call_finalizer3(o2_saved_313,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct object* list$1objectph_begin(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct object* result_314;
struct object* __result229__;
struct object* __result230__;
struct object* result_315;
struct object* __result231__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(struct object*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->it=self->head;
    if(    self->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_315,0,sizeof(struct object*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static _Bool list$1objectph_end(struct list$1objectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct object* list$1objectph_next(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct object* result_317;
struct object* __result232__;
struct object* __result233__;
struct object* result_318;
struct object* __result234__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_317,0,sizeof(struct object*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_318,0,sizeof(struct object*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* param_types_319;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1charph* param_names_320;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charph* param_default_parametors_321;
_Bool var_args_322;
void* __right_value276 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* type__326;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
_Bool void_param_348;
char* p_349;
int sline_350;
void* __right_value323 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_351=0;
char* param_name_352=0;
_Bool err_353=0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result260__;
void* __right_value326 = (void*)0;
struct sType* param_type2_354;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* p_358;
_Bool no_comma_359;
void* __right_value332 = (void*)0;
struct sNode* node_360;
char* p2_361;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result263__;
    param_types_319=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 320, "list$1sTypeph"))));
    param_names_320=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 321, "list$1charph"))));
    param_default_parametors_321=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 322, "list$1charph"))));
    var_args_322=(_Bool)0;
    if(    in_constructor_) {
        list$1charph_add(param_names_320,(char*)come_increment_ref_count(xsprintf("self")));
        type__326=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        type__326->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_319,(struct sType*)come_increment_ref_count(type__326));
        list$1charph_add(param_default_parametors_321,((void*)0));
        come_call_finalizer3(type__326,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charph_add(param_names_320,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sTypeph_add(param_types_319,(struct sType*)come_increment_ref_count(sType_clone(info->impl_type)));
        list$1charph_add(param_default_parametors_321,((void*)0));
    }
    expected_next_character(40,info);
    void_param_348=(_Bool)0;
    {
        p_349=info->p;
        sline_350=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_348=(_Bool)1;
            }
        }
        info->p=p_349;
        info->sline=sline_350;
    }
    if(    void_param_348) {
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
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value323=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_351=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_352=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_353=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value323,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_353) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result260__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value325=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 384, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_352 = come_decrement_ref_count2(param_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_319,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_320,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_321,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value325,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
            param_type2_354=(struct sType*)come_increment_ref_count(solve_generics(param_type_351,info->generics_type,info));
            param_type2_354->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_319,(struct sType*)come_increment_ref_count(sType_clone(param_type2_354)));
            list$1charph_push_back(param_names_320,(char*)come_increment_ref_count(string_clone(param_name_352)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_358=info->p;
                no_comma_359=info->no_comma;
                info->no_comma=(_Bool)1;
                node_360=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_359;
                p2_361=info->p;
                char buf_362[p2_361-p_358+1];
                memset(&buf_362, 0, sizeof(char)                *(p2_361-p_358+1)                );
                memcpy(buf_362,p_358,p2_361-p_358);
                buf_362[p2_361-p_358]=0;
                list$1charph_push_back(param_default_parametors_321,(char*)come_increment_ref_count(__builtin_string(buf_362)));
                if(node_360) { node_360 = come_decrement_ref_count2(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_321,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_322=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_352 = come_decrement_ref_count2(param_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_352 = come_decrement_ref_count2(param_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_352 = come_decrement_ref_count2(param_name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result263__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value335=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 444, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")),(struct list$1sTypeph*)come_increment_ref_count(param_types_319),(struct list$1charph*)come_increment_ref_count(param_names_320),(struct list$1charph*)come_increment_ref_count(param_default_parametors_321),var_args_322)));
    come_call_finalizer3(param_types_319,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_320,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_321,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value335,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result263__;
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
struct list_item$1charph* litem_323;
char* __dec_obj68;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_324;
char* __dec_obj69;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_325;
char* __dec_obj70;
struct list$1charph* __result237__;
    if(    self->len==0) {
        litem_323=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value273=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_323->prev=((void*)0);
        litem_323->next=((void*)0);
        __dec_obj68=litem_323->item;
        litem_323->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_323;
        self->head=litem_323;
    }
    else if(    self->len==1) {
        litem_324=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_324->prev=self->head;
        litem_324->next=((void*)0);
        __dec_obj69=litem_324->item;
        litem_324->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_324;
        self->head->next=litem_324;
    }
    else {
        litem_325=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_325->prev=self->tail;
        litem_325->next=((void*)0);
        __dec_obj70=litem_325->item;
        litem_325->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_325;
        self->tail=litem_325;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result239__;
void* __right_value278 = (void*)0;
struct tuple1$1sTypeph* result_328;
void* __right_value279 = (void*)0;
struct sType* __dec_obj71;
struct tuple1$1sTypeph* __result240__;
    if(    self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_328=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj71=result_328->v1;
        result_328->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj72;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj72=self->v1;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result241__;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1objectph* result_329;
struct list_item$1objectph* it_330;
void* __right_value291 = (void*)0;
struct list$1objectph* __result246__;
    if(    self==((void*)0)) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_329=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_330=self->head;
    while(it_330!=((void*)0)) {
        list$1objectph_add(result_329,(struct object*)come_increment_ref_count(object_clone(it_330->item)));
        it_330=it_330->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_329;
    come_call_finalizer3(result_329,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result242__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
struct list_item$1objectph* litem_331;
struct object* __dec_obj78;
void* __right_value288 = (void*)0;
struct list_item$1objectph* litem_332;
struct object* __dec_obj79;
void* __right_value289 = (void*)0;
struct list_item$1objectph* litem_333;
struct object* __dec_obj80;
struct list$1objectph* __result243__;
    if(    self->len==0) {
        litem_331=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value287=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj78=litem_331->item;
        litem_331->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct object*)__dec_obj78)->finalize, ((struct object*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value288=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj79=litem_332->item;
        litem_332->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct object*)__dec_obj79)->finalize, ((struct object*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value289=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj80=litem_333->item;
        litem_333->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct object*)__dec_obj80)->finalize, ((struct object*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct object* object_clone(struct object* self){
void* __result_obj__=(void*)0;
struct object* __result244__;
void* __right_value290 = (void*)0;
struct object* result_334;
struct object* __result245__;
    if(    self==(void*)0) {
        __result244__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_334=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_334->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_334->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_334->clone=self->clone;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_334;
    if(result_334) { result_334 = come_decrement_ref_count2(result_334, ((struct object*)result_334)->finalize, ((struct object*)result_334)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result247__;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1sNodeph* result_335;
struct list_item$1sNodeph* it_336;
void* __right_value299 = (void*)0;
struct list$1sNodeph* __result252__;
    if(    self==((void*)0)) {
        __result247__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    result_335=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_336=self->head;
    while(it_336!=((void*)0)) {
        list$1sNodeph_add(result_335,(struct sNode*)come_increment_ref_count(sNode_clone(it_336->item)));
        it_336=it_336->next;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_335;
    come_call_finalizer3(result_335,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result248__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
struct list_item$1sNodeph* litem_337;
struct sNode* __dec_obj82;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_338;
struct sNode* __dec_obj83;
void* __right_value297 = (void*)0;
struct list_item$1sNodeph* litem_339;
struct sNode* __dec_obj84;
struct list$1sNodeph* __result249__;
    if(    self->len==0) {
        litem_337=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj82=litem_337->item;
        litem_337->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj83=litem_338->item;
        litem_338->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value297=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj84=litem_339->item;
        litem_339->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result250__;
void* __right_value298 = (void*)0;
struct sNode* result_340;
struct sNode* __result251__;
    if(    self==(void*)0) {
        __result250__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_340=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_340->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_340->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_340->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_340->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_340->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_340->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_340->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_340->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_340->kind=self->kind;
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_340;
    if(result_340) { result_340 = come_decrement_ref_count2(result_340, ((struct sNode*)result_340)->finalize, ((struct sNode*)result_340)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result253__;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1sTypeph* result_341;
struct list_item$1sTypeph* it_342;
void* __right_value306 = (void*)0;
struct list$1sTypeph* __result255__;
    if(    self==((void*)0)) {
        __result253__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    result_341=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_342=self->head;
    while(it_342!=((void*)0)) {
        list$1sTypeph_add(result_341,(struct sType*)come_increment_ref_count(sType_clone(it_342->item)));
        it_342=it_342->next;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_341;
    come_call_finalizer3(result_341,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct list_item$1sTypeph* litem_343;
struct sType* __dec_obj86;
void* __right_value304 = (void*)0;
struct list_item$1sTypeph* litem_344;
struct sType* __dec_obj87;
void* __right_value305 = (void*)0;
struct list_item$1sTypeph* litem_345;
struct sType* __dec_obj88;
struct list$1sTypeph* __result254__;
    if(    self->len==0) {
        litem_343=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value303=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_343->prev=((void*)0);
        litem_343->next=((void*)0);
        __dec_obj86=litem_343->item;
        litem_343->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_343;
        self->head=litem_343;
    }
    else if(    self->len==1) {
        litem_344=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value304=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_344->prev=self->head;
        litem_344->next=((void*)0);
        __dec_obj87=litem_344->item;
        litem_344->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_344;
        self->head->next=litem_344;
    }
    else {
        litem_345=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value305=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_345->prev=self->tail;
        litem_345->next=((void*)0);
        __dec_obj88=litem_345->item;
        litem_345->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_345;
        self->tail=litem_345;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result256__;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1charph* result_346;
struct list_item$1charph* it_347;
void* __right_value310 = (void*)0;
struct list$1charph* __result257__;
    if(    self==((void*)0)) {
        __result256__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_346=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_347=self->head;
    while(it_347!=((void*)0)) {
        list$1charph_add(result_346,(char*)come_increment_ref_count(string_clone(it_347->item)));
        it_347=it_347->next;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_346;
    come_call_finalizer3(result_346,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj99;
char* __dec_obj100;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj99=self->v1;
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj100=self->v2;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result259__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct list_item$1sTypeph* litem_355;
struct sType* __dec_obj101;
void* __right_value328 = (void*)0;
struct list_item$1sTypeph* litem_356;
struct sType* __dec_obj102;
void* __right_value329 = (void*)0;
struct list_item$1sTypeph* litem_357;
struct sType* __dec_obj103;
struct list$1sTypeph* __result261__;
    if(    self->len==0) {
        litem_355=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value327=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj101=litem_355->item;
        litem_355->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head=litem_355;
    }
    else if(    self->len==1) {
        litem_356=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value328=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_356->prev=self->head;
        litem_356->next=((void*)0);
        __dec_obj102=litem_356->item;
        litem_356->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_356;
        self->head->next=litem_356;
    }
    else {
        litem_357=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value329=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_357->prev=self->tail;
        litem_357->next=((void*)0);
        __dec_obj103=litem_357->item;
        litem_357->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_357;
        self->tail=litem_357;
    }
    self->len++;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj104;
struct list$1charph* __dec_obj105;
struct list$1charph* __dec_obj106;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result262__;
    __dec_obj104=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj104,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj105=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj106=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj106,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj107;
struct list$1charph* __dec_obj108;
struct list$1charph* __dec_obj109;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj107=self->v1;
            come_call_finalizer3(__dec_obj107,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj108=self->v2;
            come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj109=self->v3;
            come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value336 = (void*)0;
struct sType* right_type2_363;
struct sType* left_no_solved_generics_type_364;
struct sType* right_no_solved_generics_type_365;
struct sClass* left_class_366;
struct sClass* right_class_367;
_Bool parent_class_368;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* left_type_name_369;
void* __right_value339 = (void*)0;
char* __dec_obj110;
void* __right_value340 = (void*)0;
struct sType* __dec_obj111;
void* __right_value341 = (void*)0;
struct sType* __dec_obj112;
void* __right_value342 = (void*)0;
char* left_type_name_370;
void* __right_value343 = (void*)0;
char* __dec_obj113;
void* __right_value344 = (void*)0;
struct sType* __dec_obj114;
void* __right_value345 = (void*)0;
struct sType* __dec_obj115;
_Bool __result264__;
int i_371;
void* __right_value346 = (void*)0;
struct object* __tmp_infY2;
void* __right_value347 = (void*)0;
struct object* __tmp_infY3;
void* __right_value348 = (void*)0;
char* left_type_name_375;
void* __right_value349 = (void*)0;
char* __dec_obj116;
void* __right_value350 = (void*)0;
struct sType* __dec_obj117;
void* __right_value351 = (void*)0;
struct sType* __dec_obj118;
void* __right_value352 = (void*)0;
char* left_type_name_376;
void* __right_value353 = (void*)0;
char* __dec_obj119;
void* __right_value354 = (void*)0;
struct sType* __dec_obj120;
void* __right_value355 = (void*)0;
struct sType* __dec_obj121;
void* __right_value356 = (void*)0;
char* __dec_obj122;
void* __right_value357 = (void*)0;
struct sType* __dec_obj123;
void* __right_value358 = (void*)0;
struct sType* __dec_obj124;
void* __right_value359 = (void*)0;
char* left_type_name_377;
void* __right_value360 = (void*)0;
char* __dec_obj125;
void* __right_value361 = (void*)0;
struct sType* __dec_obj126;
void* __right_value362 = (void*)0;
struct sType* __dec_obj127;
void* __right_value363 = (void*)0;
char* left_type_name_378;
void* __right_value364 = (void*)0;
char* __dec_obj128;
void* __right_value365 = (void*)0;
struct sType* __dec_obj129;
void* __right_value366 = (void*)0;
struct sType* __dec_obj130;
_Bool __result267__;
_Bool __result268__;
_Bool __result269__;
_Bool __result270__;
_Bool __result271__;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct buffer* buf2_379;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* __dec_obj131;
void* __right_value375 = (void*)0;
struct sType* __dec_obj132;
void* __right_value376 = (void*)0;
struct sType* __dec_obj133;
_Bool __result272__;
_Bool __result273__;
_Bool __result274__;
_Bool __result275__;
void* __right_value377 = (void*)0;
char* tmp_380;
void* __right_value378 = (void*)0;
char* __dec_obj134;
void* __right_value379 = (void*)0;
struct sType* __dec_obj135;
void* __right_value380 = (void*)0;
struct sType* __dec_obj136;
_Bool __result276__;
_Bool __result277__;
void* __right_value381 = (void*)0;
char* tmp_381;
void* __right_value382 = (void*)0;
char* __dec_obj137;
void* __right_value383 = (void*)0;
struct sType* __dec_obj138;
_Bool __result278__;
int i_382;
void* __right_value384 = (void*)0;
struct object* __tmp_infY4;
void* __right_value385 = (void*)0;
struct object* __tmp_infY5;
_Bool __result279__;
    right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_364=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_365=right_type2_363->mNoSolvedGenericsType->v1;
    left_class_366=left_type->mClass;
    right_class_367=right_type2_363->mClass;
    parent_class_368=(_Bool)0;
    if(    string_operator_not_equals(left_class_366->mName,right_class_367->mName)) {
        while(left_class_366&&right_class_367) {
            if(            string_operator_equals(left_class_366->mName,right_class_367->mName)) {
                parent_class_368=(_Bool)1;
            }
            if(            right_class_367->mParentClassName) {
                right_class_367=((struct sClass*)(__right_value337=map$2charphsClassphp_operator_load_element(info->classes,right_class_367->mParentClassName)));
                come_call_finalizer3(__right_value337,sClass_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_367=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
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
                    printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_364&&right_no_solved_generics_type_365) {
        if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes),left_no_solved_generics_type_364->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(right_no_solved_generics_type_365->mGenericsTypes),right_no_solved_generics_type_365->mClass->mName,right_type2_363->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_369=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj110=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_369,come_value->c_value));
                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj111=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj112=right_type2_363;
                right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_369 = come_decrement_ref_count2(left_type_name_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes),left_no_solved_generics_type_364->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(right_no_solved_generics_type_365->mGenericsTypes),right_no_solved_generics_type_365->mClass->mName,right_type2_363->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_370=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj113=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_370,come_value->c_value));
                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj114=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj115=right_type2_363;
                right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_370 = come_decrement_ref_count2(left_type_name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_363->mClass->mName)&&left_type->mPointerNum==right_type2_363->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_363->mClass->mName)&&(left_type->mPointerNum!=right_type2_363->mPointerNum||left_type->mHeap!=right_type2_363->mHeap)) {
            err_msg(info,"poinetr num err");
            printf("left type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes),left_no_solved_generics_type_364->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(right_no_solved_generics_type_365->mGenericsTypes),right_no_solved_generics_type_365->mClass->mName,right_type2_363->mClass->mName);
            exit(2);
        }
        else if(        list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_364->mClass->mName,"void")&&left_no_solved_generics_type_364->mPointerNum>0&&right_no_solved_generics_type_365->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_365->mClass->mName,"void")&&right_no_solved_generics_type_365->mPointerNum>0&&left_no_solved_generics_type_364->mPointerNum>0)) {
            }
            else {
                if(                list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes)!=list$1objectph_length(right_no_solved_generics_type_365->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        printf("left type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes),left_no_solved_generics_type_364->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(right_no_solved_generics_type_365->mGenericsTypes),right_no_solved_generics_type_365->mClass->mName,right_type2_363->mClass->mName);
                        exit(2);
                    }
                    __result264__ = (_Bool)0;
                    come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result264__;
                }
                for(                i_371=0;                i_371<list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes);                i_371++                ){
                    check_assign_type(msg,((__tmp_infY2=((struct object*)come_null_check(((struct object*)(__right_value346=list$1objectphp_operator_load_element(left_no_solved_generics_type_364->mGenericsTypes,i_371))), "05type.c", 568, 1))),((struct sType*)(__tmp_infY2 ? __tmp_infY2->_protocol_obj:(void*)0))),((__tmp_infY3=((struct object*)come_null_check(((struct object*)(__right_value347=list$1objectphp_operator_load_element(right_no_solved_generics_type_365->mGenericsTypes,i_371))), "05type.c", 568, 2))),((struct sType*)(__tmp_infY3 ? __tmp_infY3->_protocol_obj:(void*)0))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    if(__right_value346) { __right_value346 = come_decrement_ref_count2(__right_value346, ((struct object*)__right_value346)->finalize, ((struct object*)__right_value346)->_protocol_obj, 1, 0, 0, (void*)0); } 
                    if(__right_value347) { __right_value347 = come_decrement_ref_count2(__right_value347, ((struct object*)__right_value347)->finalize, ((struct object*)__right_value347)->_protocol_obj, 1, 0, 0, (void*)0); } 
                }
                check_assign_type(msg,left_no_solved_generics_type_364,right_no_solved_generics_type_365,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes),left_no_solved_generics_type_364->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(right_no_solved_generics_type_365->mGenericsTypes),right_no_solved_generics_type_365->mClass->mName,right_type2_363->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_375=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj116=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_375,come_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj117=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj118=right_type2_363;
            right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_375 = come_decrement_ref_count2(left_type_name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(left_no_solved_generics_type_364->mGenericsTypes),left_no_solved_generics_type_364->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1objectph_length(right_no_solved_generics_type_365->mGenericsTypes),right_no_solved_generics_type_365->mClass->mName,right_type2_363->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_376=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj119=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_376,come_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj121=right_type2_363;
            right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_376 = come_decrement_ref_count2(left_type_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_363->mHeap&&left_type->mPointerNum>0&&right_type2_363->mPointerNum>0&&string_operator_not_equals(right_type2_363->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum,right_type2_363->mHeap);
        exit(2);
    }
    else if(    parent_class_368&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj122=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj123=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj124=right_type2_363;
        right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_377=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj125=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_377,come_value->c_value));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj127=right_type2_363;
            right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_377 = come_decrement_ref_count2(left_type_name_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_378=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj128=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_378,come_value->c_value));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj130=right_type2_363;
            right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_378 = come_decrement_ref_count2(left_type_name_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_363->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_363->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_363->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_363->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                        exit(2);
                    }
                    __result267__ = (_Bool)0;
                    come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result267__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                    exit(2);
                }
                __result268__ = (_Bool)0;
                come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result268__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_363->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result269__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result269__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_363->mPointerNum==0&&string_operator_equals(right_type2_363->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_363->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result270__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result270__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_363->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_363->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_363->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_363->mClass->mName,"void")&&right_type2_363->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result271__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result271__;
        }
        else {
            buf2_379=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 726, "buffer"))));
            buffer_append_str(buf2_379,((char*)(__right_value373=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value369=string_to_string(come_value->c_value))),((char*)(__right_value370=string_to_string(info->sname))),((char*)(__right_value371=int_to_string(info->sline))),((char*)(__right_value372=int_to_string(gComeDebugStackFrameID++)))))));
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj131=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_379));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj132=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj133=right_type2_363;
            right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_379,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_363->mClass->mName,"char")&&right_type2_363->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_363->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_363->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_363->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result272__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result272__;
        }
        else if(        string_operator_equals(right_type2_363->mClass->mName,"void")&&right_type2_363->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_363->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result273__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result273__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_363->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_363->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result274__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result274__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_363->mClass->mName,"void")&&right_type2_363->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_363->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_363->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_363->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_363->mClass->mName,"void")&&right_type2_363->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_363->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result275__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result275__;
        }
        else if(        right_type2_363->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_380=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj134=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_380));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj135=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj136=right_type2_363;
                right_type2_363=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                tmp_380 = come_decrement_ref_count2(tmp_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_363->mPointerNum>0||(right_type2_363->mPointerNum==0&&right_type2_363->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_363->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_363->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_363->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                    exit(2);
                }
                __result276__ = (_Bool)0;
                come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result276__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_363->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
            }
            else if(            list$1sNodeph_length(right_type2_363->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum,list$1sNodeph_length(right_type2_363->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_363->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_363->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_363->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_363->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_363->mPointerNum==0&&string_operator_equals(right_type2_363->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            __result277__ = (_Bool)0;
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result277__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_363->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_363->mPointerNum==0) {
            tmp_381=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj137=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_381));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj138=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result278__ = (_Bool)1;
            tmp_381 = come_decrement_ref_count2(tmp_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result278__;
            tmp_381 = come_decrement_ref_count2(tmp_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1objectph_length(left_type->mGenericsTypes)>0) {
            if(            list$1objectph_length(left_type->mGenericsTypes)!=list$1objectph_length(right_type2_363->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_363->mClass->mName,right_type2_363->mPointerNum);
                exit(2);
            }
            for(            i_382=0;            i_382<list$1objectph_length(left_type->mGenericsTypes);            i_382++            ){
                check_assign_type(msg,((__tmp_infY4=((struct object*)come_null_check(((struct object*)(__right_value384=list$1objectphp_operator_load_element(left_type->mGenericsTypes,i_382))), "05type.c", 881, 3))),((struct sType*)(__tmp_infY4 ? __tmp_infY4->_protocol_obj:(void*)0))),((__tmp_infY5=((struct object*)come_null_check(((struct object*)(__right_value385=list$1objectphp_operator_load_element(right_type2_363->mGenericsTypes,i_382))), "05type.c", 881, 4))),((struct sType*)(__tmp_infY5 ? __tmp_infY5->_protocol_obj:(void*)0))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                if(__right_value384) { __right_value384 = come_decrement_ref_count2(__right_value384, ((struct object*)__right_value384)->finalize, ((struct object*)__right_value384)->_protocol_obj, 1, 0, 0, (void*)0); } 
                if(__right_value385) { __right_value385 = come_decrement_ref_count2(__right_value385, ((struct object*)__right_value385)->finalize, ((struct object*)__right_value385)->_protocol_obj, 1, 0, 0, (void*)0); } 
            }
        }
    }
    __result279__ = (_Bool)1;
    come_call_finalizer3(right_type2_363,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result279__;
}

static int list$1objectph_length(struct list$1objectph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1objectph* it_372;
int i_373;
struct object* __result265__;
struct object* default_value_374;
struct object* __result266__;
default_value_374 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_372=self->head;
    i_373=0;
    while(it_372!=((void*)0)) {
        if(        position==i_373) {
            __result265__ = gComeFunResultObject = __result_obj__ = it_372->item;
            gComeFunResultObject = (void*)0;
            return __result265__;
        }
        it_372=it_372->next;
        i_373++;
    }
    memset(&default_value_374,0,sizeof(struct object*));
    __result266__ = gComeFunResultObject = __result_obj__ = default_value_374;
    if(default_value_374) { default_value_374 = come_decrement_ref_count2(default_value_374, ((struct object*)default_value_374)->finalize, ((struct object*)default_value_374)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result266__;
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
void* __right_value386 = (void*)0;
struct sType* result_type_383;
char* var_name_384;
char* p_385;
int sline_386;
void* __right_value387 = (void*)0;
char* word_387;
_Bool between_brace_388;
char* p_389;
int sline_390;
void* __right_value388 = (void*)0;
char* word_391;
void* __right_value389 = (void*)0;
char* __dec_obj139;
void* __right_value390 = (void*)0;
char* __dec_obj140;
_Bool no_comma_393;
void* __right_value391 = (void*)0;
struct sNode* node_394;
struct sNode* __dec_obj141;
char* p_395;
int sline_396;
void* __right_value392 = (void*)0;
char* word_397;
void* __right_value393 = (void*)0;
struct sNode* node_398;
void* __right_value397 = (void*)0;
char* attribute_402;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
char* __dec_obj145;
char* __dec_obj146;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct tuple2$2sTypephcharph* __result282__;
    result_type_383=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first) {
        result_type_383->mPointerNum=result_type_383->mTypedefOriginalPointerNum;
    }
    var_name_384=((void*)0);
    {
        p_385=info->p;
        sline_386=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_387=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_387,"const")||string_operator_equals(word_387,"__restrict")||string_operator_equals(word_387,"restrict")||string_operator_equals(word_387,"__user")||string_operator_equals(word_387,"volatile")||string_operator_equals(word_387,"_Nonnull")||string_operator_equals(word_387,"_Nullable")||string_operator_equals(word_387,"_Null_unspecified")||string_operator_equals(word_387,"__user")||string_operator_equals(word_387,"_Addr")) {
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
    between_brace_388=(_Bool)0;
    {
        p_389=info->p;
        sline_390=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_391=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_391,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_388=(_Bool)1;
                    }
                }
                word_391 = come_decrement_ref_count2(word_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_389;
        info->sline=sline_390;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_383->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_388&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj139=var_name_384;
        var_name_384=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_392=0;
        num_anonymous_var_name_392++;
        __dec_obj140=var_name_384;
        var_name_384=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_392));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_388&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_393=info->no_comma;
        info->no_comma=(_Bool)1;
        node_394=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_393;
        __dec_obj141=result_type_383->mSizeNum;
        result_type_383->mSizeNum=(struct sNode*)come_increment_ref_count(node_394);
        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_394) { node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_395=info->p;
            sline_396=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_397=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_397,"const")||string_operator_equals(word_397,"__restrict")||string_operator_equals(word_397,"restrict")||string_operator_equals(word_397,"__user")||string_operator_equals(word_397,"volatile")||string_operator_equals(word_397,"_Nonnull")||string_operator_equals(word_397,"_Nullable")||string_operator_equals(word_397,"_Null_unspecified")||string_operator_equals(word_397,"__user")||string_operator_equals(word_397,"_Addr")) {
                }
                else {
                    info->p=p_395;
                    info->sline=sline_396;
                }
                word_397 = come_decrement_ref_count2(word_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_395;
                info->sline=sline_396;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_383->mArrayPointerType=(_Bool)1;
            result_type_383->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_398=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(result_type_383->mArrayNum,(struct sNode*)come_increment_ref_count(node_398));
        parse_sharp_v5(info);
        result_type_383->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    attribute_402=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_402,"")) {
        if(        result_type_383->mAttribute) {
            __dec_obj145=result_type_383->mAttribute;
            result_type_383->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_383->mAttribute,((char*)(__right_value398=charp_operator_add(" ",attribute_402)))));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj146=result_type_383->mAttribute;
            result_type_383->mAttribute=(char*)come_increment_ref_count(attribute_402);
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value400=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value400,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result282__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value402=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1048, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_383),(char*)come_increment_ref_count(var_name_384))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_384 = come_decrement_ref_count2(var_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute_402 = come_decrement_ref_count2(attribute_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value402,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
struct list_item$1sNodeph* litem_399;
struct sNode* __dec_obj142;
void* __right_value395 = (void*)0;
struct list_item$1sNodeph* litem_400;
struct sNode* __dec_obj143;
void* __right_value396 = (void*)0;
struct list_item$1sNodeph* litem_401;
struct sNode* __dec_obj144;
struct list$1sNodeph* __result280__;
    if(    self->len==0) {
        litem_399=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value394=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sNodeph"))));
        litem_399->prev=((void*)0);
        litem_399->next=((void*)0);
        __dec_obj142=litem_399->item;
        litem_399->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_399;
        self->head=litem_399;
    }
    else if(    self->len==1) {
        litem_400=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value395=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sNodeph"))));
        litem_400->prev=self->head;
        litem_400->next=((void*)0);
        __dec_obj143=litem_400->item;
        litem_400->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_400;
        self->head->next=litem_400;
    }
    else {
        litem_401=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value396=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sNodeph"))));
        litem_401->prev=self->tail;
        litem_401->next=((void*)0);
        __dec_obj144=litem_401->item;
        litem_401->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_401;
        self->tail=litem_401;
    }
    self->len++;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj147;
char* __dec_obj148;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj147=self->v1;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj148=self->v2;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj149;
char* __dec_obj150;
struct tuple2$2sTypephcharph* __result281__;
    __dec_obj149=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj150=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj151;
char* __dec_obj152;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj151=self->v1;
            come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj152=self->v2;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_403;
int sline_404;
void* __right_value403 = (void*)0;
char* word_405;
int nest_406;
    p_403=info->p;
    sline_404=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_405=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_405,"__attribute")||string_operator_equals(word_405,"__attribute__"))&&*info->p==40) {
            nest_406=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_406++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_406--;
                    if(                    nest_406==0) {
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
        else if(        string_operator_equals(word_405,"const")||string_operator_equals(word_405,"__restrict")||string_operator_equals(word_405,"restrict")||string_operator_equals(word_405,"__user")||string_operator_equals(word_405,"volatile")||string_operator_equals(word_405,"_Nonnull")||string_operator_equals(word_405,"_Nullable")||string_operator_equals(word_405,"__nonnull")||string_operator_equals(word_405,"_Null_unspecified")||string_operator_equals(word_405,"__user")||string_operator_equals(word_405,"_Addr")||string_operator_equals(word_405,"__noreturn")||string_operator_equals(word_405,"_noreturn")||string_operator_equals(word_405,"_Noreturn")) {
        }
        else {
            info->p=p_403;
            info->sline=sline_404;
        }
        word_405 = come_decrement_ref_count2(word_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_403;
        info->sline=sline_404;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_407;
void* __right_value404 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_408=0;
char* name_409=0;
_Bool err_410=0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple3$3sTypephcharphbool* __result284__;
    no_output_err_407=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value404=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_408=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_409=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_410=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value404,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_407;
    __result284__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value406=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1105, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_408),(char*)come_increment_ref_count(name_409),err_410)));
    come_call_finalizer3(type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_409 = come_decrement_ref_count2(name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value406,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj153;
char* __dec_obj154;
struct tuple3$3sTypephcharphbool* __result283__;
    __dec_obj153=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj154=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_411;
int head_sline_412;
void* __right_value407 = (void*)0;
char* type_name_413;
_Bool record__414;
_Bool exception__415;
_Bool constant_416;
_Bool static__417;
_Bool volatile__418;
_Bool register__419;
_Bool unsigned__420;
_Bool long__421;
_Bool long_long_422;
_Bool short__423;
_Bool restrict__424;
_Bool struct__425;
_Bool union__426;
_Bool enum__427;
_Bool no_heap_428;
_Bool extern__429;
_Bool inline__430;
_Bool uniq__431;
_Bool tuple__432;
struct sNode* alignas__433;
_Bool anonymous_type_434;
_Bool anonymous_name_435;
_Bool atomic__436;
void* __right_value408 = (void*)0;
char* __dec_obj155;
void* __right_value409 = (void*)0;
char* __dec_obj156;
int brace_num_437;
void* __right_value410 = (void*)0;
char* __dec_obj157;
int brace_num_438;
void* __right_value411 = (void*)0;
char* __dec_obj158;
void* __right_value412 = (void*)0;
char* __dec_obj159;
void* __right_value413 = (void*)0;
char* __dec_obj160;
void* __right_value414 = (void*)0;
char* __dec_obj161;
void* __right_value415 = (void*)0;
char* __dec_obj162;
void* __right_value416 = (void*)0;
struct sNode* exp_439;
struct sNode* __dec_obj163;
void* __right_value417 = (void*)0;
char* __dec_obj164;
void* __right_value418 = (void*)0;
char* __dec_obj165;
void* __right_value419 = (void*)0;
char* __dec_obj166;
void* __right_value420 = (void*)0;
char* __dec_obj167;
void* __right_value421 = (void*)0;
char* __dec_obj168;
void* __right_value422 = (void*)0;
char* __dec_obj169;
void* __right_value423 = (void*)0;
char* __dec_obj170;
void* __right_value424 = (void*)0;
char* __dec_obj171;
void* __right_value425 = (void*)0;
char* __dec_obj172;
char* p_440;
int sline_441;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
char* __dec_obj173;
void* __right_value428 = (void*)0;
char* __dec_obj174;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
char* __dec_obj175;
char* p_442;
int sline_443;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple3$3sTypephcharphbool* __result285__;
char* p_444;
int sline_445;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct tuple3$3sTypephcharphbool* __result286__;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sNode* node_446;
_Bool Value_447;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple3$3sTypephcharphbool* __result287__;
char* p_448;
int sline_449;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __dec_obj176;
void* __right_value444 = (void*)0;
char* __dec_obj177;
void* __right_value445 = (void*)0;
char* __dec_obj178;
char* p_450;
int sline_451;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct tuple3$3sTypephcharphbool* __result288__;
void* __right_value449 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_452=0;
char* name_453=0;
_Bool err_454=0;
char* p_455;
int sline_456;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct tuple3$3sTypephcharphbool* __result289__;
void* __right_value454 = (void*)0;
char* __dec_obj179;
void* __right_value455 = (void*)0;
char* __dec_obj180;
void* __right_value456 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_457=0;
char* name_458=0;
_Bool err_459=0;
char* p_460;
int sline_461;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct tuple3$3sTypephcharphbool* __result290__;
char* p_462;
int sline_463;
void* __right_value460 = (void*)0;
char* __dec_obj181;
void* __right_value461 = (void*)0;
char* __dec_obj182;
void* __right_value462 = (void*)0;
char* __dec_obj183;
void* __right_value463 = (void*)0;
char* __dec_obj184;
void* __right_value464 = (void*)0;
char* __dec_obj185;
void* __right_value465 = (void*)0;
char* __dec_obj186;
void* __right_value466 = (void*)0;
char* __dec_obj187;
char* p_464;
int sline_465;
void* __right_value467 = (void*)0;
char* __dec_obj188;
char* p_466;
int sline_467;
void* __right_value468 = (void*)0;
char* __dec_obj189;
void* __right_value469 = (void*)0;
char* __dec_obj190;
void* __right_value470 = (void*)0;
char* __dec_obj191;
char* p_468;
int sline_469;
void* __right_value471 = (void*)0;
char* __dec_obj192;
void* __right_value472 = (void*)0;
char* __dec_obj193;
void* __right_value473 = (void*)0;
char* __dec_obj194;
void* __right_value474 = (void*)0;
char* __dec_obj195;
void* __right_value475 = (void*)0;
char* __dec_obj196;
void* __right_value476 = (void*)0;
char* __dec_obj197;
void* __right_value477 = (void*)0;
char* __dec_obj198;
void* __right_value478 = (void*)0;
char* __dec_obj199;
void* __right_value479 = (void*)0;
char* __dec_obj200;
void* __right_value480 = (void*)0;
char* __dec_obj201;
void* __right_value481 = (void*)0;
char* __dec_obj202;
char* p_470;
int sline_471;
void* __right_value482 = (void*)0;
char* __dec_obj203;
void* __right_value483 = (void*)0;
char* __dec_obj204;
void* __right_value484 = (void*)0;
char* attribute_472;
int pointer_num_473;
_Bool heap_474;
_Bool refference_475;
_Bool channel_476;
_Bool object_interface_477;
char* type_name2_478;
void* __right_value485 = (void*)0;
char* __dec_obj205;
char* tuple_name_479;
void* __right_value486 = (void*)0;
char* __dec_obj206;
_Bool lambda_flag_480;
char* pX_481;
int slineX_482;
void* __right_value487 = (void*)0;
struct sType* type_483;
char* var_name_484;
_Bool function_pointer_flag_485;
char* p_486;
int sline_487;
void* __right_value488 = (void*)0;
char* word_488;
_Bool var_name_between_brace_489;
char* p_490;
int sline_491;
void* __right_value489 = (void*)0;
char* word_492;
void* __right_value490 = (void*)0;
char* __dec_obj207;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* node_494;
_Bool Value_495;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple3$3sTypephcharphbool* __result291__;
int pointer_num_496;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj208;
void* __right_value497 = (void*)0;
char* __dec_obj209;
void* __right_value498 = (void*)0;
struct sNode* node_497;
_Bool Value_498;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct tuple3$3sTypephcharphbool* __result292__;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj210;
void* __right_value503 = (void*)0;
char* __dec_obj211;
void* __right_value504 = (void*)0;
struct sNode* node_499;
_Bool Value_500;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct tuple3$3sTypephcharphbool* __result293__;
int pointer_num_501;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj212;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct tuple3$3sTypephcharphbool* __result294__;
void* __right_value511 = (void*)0;
char* attribute_502;
char* __dec_obj213;
void* __right_value512 = (void*)0;
char* __dec_obj214;
void* __right_value513 = (void*)0;
char* __dec_obj215;
void* __right_value514 = (void*)0;
char* __dec_obj216;
void* __right_value515 = (void*)0;
char* __dec_obj217;
_Bool no_comma_505;
void* __right_value516 = (void*)0;
struct sNode* node_506;
struct sNode* __dec_obj218;
void* __right_value517 = (void*)0;
char* attribute2_507;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* __dec_obj219;
char* __dec_obj220;
struct sType* result_type_508;
void* __right_value520 = (void*)0;
_Bool _if_conditional3;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj221;
void* __right_value523 = (void*)0;
int i_509;
void* __right_value524 = (void*)0;
_Bool _if_conditional4;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj222;
int i_513;
void* __right_value528 = (void*)0;
_Bool _if_conditional5;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj223;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj224;
struct sNode* __dec_obj225;
void* __right_value534 = (void*)0;
char* __dec_obj226;
void* __right_value535 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1sTypeph* param_types_514=0;
struct list$1charph* param_names_515=0;
struct list$1charph* param_default_parametors_516=0;
_Bool var_args_517=0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj227;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct tuple1$1sTypeph* __dec_obj229;
struct list$1sTypeph* __dec_obj230;
struct list$1charph* __dec_obj231;
int function_pointer_num_518;
struct sType* result_type_519;
void* __right_value540 = (void*)0;
_Bool _if_conditional6;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj232;
void* __right_value543 = (void*)0;
int i_520;
void* __right_value544 = (void*)0;
_Bool _if_conditional7;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* __dec_obj233;
int i_521;
void* __right_value548 = (void*)0;
_Bool _if_conditional8;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj234;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj235;
struct sNode* __dec_obj236;
void* __right_value554 = (void*)0;
char* __dec_obj237;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct tuple3$3sTypephcharphbool* __result298__;
void* __right_value557 = (void*)0;
char* __dec_obj238;
_Bool function_pointer_array_523;
int function_pointer_array_num_524;
int n_525;
void* __right_value558 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1sTypeph* param_types_526=0;
struct list$1charph* param_names_527=0;
struct list$1charph* param_default_parametors_528=0;
_Bool var_args_529=0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* __dec_obj239;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct tuple1$1sTypeph* __dec_obj240;
struct list$1sTypeph* __dec_obj241;
struct list$1charph* __dec_obj242;
void* __right_value564 = (void*)0;
struct sNode* exp_530;
_Bool Value_531;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct tuple3$3sTypephcharphbool* __result300__;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_532;
void* __right_value568 = (void*)0;
struct sType* __dec_obj245;
void* __right_value569 = (void*)0;
char* attribute_533;
char* __dec_obj246;
void* __right_value570 = (void*)0;
char* __dec_obj247;
void* __right_value571 = (void*)0;
char* __dec_obj248;
void* __right_value572 = (void*)0;
char* __dec_obj249;
void* __right_value573 = (void*)0;
char* __dec_obj250;
_Bool no_comma_536;
void* __right_value574 = (void*)0;
struct sNode* node_537;
struct sNode* __dec_obj251;
void* __right_value575 = (void*)0;
char* attribute2_538;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* __dec_obj252;
char* __dec_obj253;
void* __right_value578 = (void*)0;
_Bool _if_conditional9;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* __dec_obj257;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
char* __dec_obj258;
struct sNode* __dec_obj259;
char* __dec_obj260;
int i_539;
void* __right_value583 = (void*)0;
_Bool _if_conditional10;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj261;
struct sNode* __dec_obj262;
char* __dec_obj263;
int i_540;
void* __right_value587 = (void*)0;
_Bool _if_conditional11;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sType* __dec_obj264;
struct sNode* __dec_obj265;
char* __dec_obj266;
void* __right_value591 = (void*)0;
_Bool _if_conditional12;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct tuple3$3sTypephcharphbool* __result301__;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* __dec_obj267;
void* __right_value596 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_541=0;
char* var_name_542=0;
_Bool err_543=0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct tuple3$3sTypephcharphbool* __result302__;
struct object* _inf_value1;
struct sType* _inf_obj_value1;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct tuple3$3sTypephcharphbool* __result306__;
void* __right_value623 = (void*)0;
struct sType* __dec_obj305;
void* __right_value624 = (void*)0;
char* new_name_548;
struct sNode* __dec_obj306;
char* __dec_obj307;
void* __right_value625 = (void*)0;
struct sClass* klass_549;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sClass* klass_591;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sType* __dec_obj308;
struct sNode* __dec_obj309;
char* __dec_obj310;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1sTypeph* types_592;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_593=0;
char* name_594=0;
_Bool err_595=0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct tuple3$3sTypephcharphbool* __result328__;
void* __right_value644 = (void*)0;
int num_tuples_596;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* __dec_obj311;
struct list$1sTypeph* o2_saved_597;
struct sType* it_600;
void* __right_value648 = (void*)0;
struct object* _inf_value2;
struct sType* _inf_obj_value2;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* __dec_obj346;
void* __right_value669 = (void*)0;
char* new_name_604;
void* __right_value670 = (void*)0;
char* attribute_605;
char* __dec_obj347;
void* __right_value671 = (void*)0;
char* __dec_obj348;
void* __right_value672 = (void*)0;
char* __dec_obj349;
void* __right_value673 = (void*)0;
char* __dec_obj350;
void* __right_value674 = (void*)0;
char* __dec_obj351;
_Bool no_comma_608;
void* __right_value675 = (void*)0;
struct sNode* node_609;
struct sNode* __dec_obj352;
void* __right_value676 = (void*)0;
char* attribute2_610;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
char* __dec_obj353;
char* __dec_obj354;
void* __right_value679 = (void*)0;
struct sNode* node_611;
void* __right_value680 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var9 = (void*)0;
char* asm_name_612=0;
char* attribute2_613=0;
char* __dec_obj355;
char* __dec_obj356;
void* __right_value681 = (void*)0;
struct sType* type_before_614;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sType* __dec_obj357;
void* __right_value684 = (void*)0;
struct sNode* __list_values1___615[1];
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1sNodeph* __dec_obj358;
void* __right_value687 = (void*)0;
struct tuple1$1sTypeph* __dec_obj359;
struct sType* __dec_obj360;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sType* type2_617;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct object* _inf_value3;
struct sType* _inf_obj_value3;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct object* _inf_value4;
struct sType* _inf_obj_value4;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct sType* type3_625;
struct object* _inf_value5;
struct sType* _inf_obj_value5;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct object* _inf_value6;
struct sType* _inf_obj_value6;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct object* __tmp_infY6;
void* __right_value775 = (void*)0;
struct sType* type4_628;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct tuple3$3sTypephcharphbool* __result348__;
char* __dec_obj498;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sType* __dec_obj499;
void* __right_value780 = (void*)0;
char* __dec_obj500;
void* __right_value781 = (void*)0;
struct tuple1$1sTypeph* __dec_obj501;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sType* __dec_obj502;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct tuple3$3sTypephcharphbool* __result349__;
type_483 = (void*)0;
var_name_484 = (void*)0;
result_type_508 = (void*)0;
result_type_519 = (void*)0;
    head_411=info->p;
    head_sline_412=info->sline;
    info->define_struct=(_Bool)0;
    type_name_413=(char*)come_increment_ref_count(parse_word(info));
    record__414=(_Bool)0;
    exception__415=(_Bool)0;
    constant_416=(_Bool)0;
    static__417=(_Bool)0;
    volatile__418=(_Bool)0;
    register__419=(_Bool)0;
    unsigned__420=(_Bool)0;
    long__421=(_Bool)0;
    long_long_422=(_Bool)0;
    short__423=(_Bool)0;
    restrict__424=(_Bool)0;
    struct__425=(_Bool)0;
    union__426=(_Bool)0;
    enum__427=(_Bool)0;
    no_heap_428=(_Bool)0;
    extern__429=(_Bool)0;
    inline__430=(_Bool)0;
    uniq__431=(_Bool)0;
    tuple__432=(_Bool)0;
    alignas__433=((void*)0);
    anonymous_type_434=(_Bool)0;
    anonymous_name_435=(_Bool)0;
    atomic__436=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_413,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj155=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__436=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_413,"__extension__")) {
            __dec_obj156=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_437=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_437++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_437--;
                        if(                        brace_num_437==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj157=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"__declspec")) {
            if(            *info->p==40) {
                brace_num_438=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_438++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_438--;
                        if(                        brace_num_438==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj158=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"_Noreturn")) {
            __dec_obj159=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"__noreturn")) {
            __dec_obj160=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"_Nullable")) {
            __dec_obj161=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"_noreturn")) {
            __dec_obj162=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"_Alignas")) {
            expected_next_character(40,info);
            exp_439=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj163=alignas__433;
            alignas__433=(struct sNode*)come_increment_ref_count(exp_439);
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj164=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_439) { exp_439 = come_decrement_ref_count2(exp_439, ((struct sNode*)exp_439)->finalize, ((struct sNode*)exp_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_413,"const")) {
            constant_416=(_Bool)1;
            __dec_obj165=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"static")) {
            static__417=(_Bool)1;
            __dec_obj166=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"uniq")) {
            uniq__431=(_Bool)1;
            __dec_obj167=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"record")) {
            record__414=(_Bool)1;
            __dec_obj168=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"exception")) {
            exception__415=(_Bool)1;
            __dec_obj169=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"extern")) {
            extern__429=(_Bool)1;
            __dec_obj170=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"inline")||string_operator_equals(type_name_413,"__inline")||string_operator_equals(type_name_413,"__inline__")||string_operator_equals(type_name_413,"__always_inline")||string_operator_equals(type_name_413,"__forceinline")) {
            inline__430=(_Bool)1;
            __dec_obj171=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"volatile")) {
            volatile__418=(_Bool)1;
            __dec_obj172=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"struct")) {
            struct__425=(_Bool)1;
            if(            *info->p==123) {
                p_440=info->p;
                sline_441=info->sline;
                ((char*)(__right_value426=skip_block(info)));
                __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_435=(_Bool)1;
                    anonymous_type_434=(_Bool)1;
                    __dec_obj173=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_440;
                    info->sline=sline_441;
                    break;
                }
                else {
                    anonymous_type_434=(_Bool)1;
                    __dec_obj174=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_440;
                    info->sline=sline_441;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value429=parse_struct_attribute(info)));
                __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj175=type_name_413;
                type_name_413=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_442=info->p;
                    sline_443=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_442;
                                info->sline=sline_443;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result285__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value432=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1323, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value432,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result285__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_444=info->p;
                    sline_445=info->sline;
                    ((char*)(__right_value433=skip_block(info)));
                    __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (void)((char*)(__right_value434=parse_struct_attribute(info)));
                    __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        info->p=head_411;
                        info->sline=head_sline_412;
                        info->define_struct=(_Bool)1;
                        __result286__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value436=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1343, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value436,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result286__;
                    }
                    else {
                        info->p=p_444;
                        info->sline=sline_445;
                        node_446=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_413),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_447=node_compile(node_446,info);
                        if(                        !Value_447) {
                            __result287__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value440=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1355, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_446) { node_446 = come_decrement_ref_count2(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value440,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result287__;
                        }
                        else {
                        }
                        if(node_446) { node_446 = come_decrement_ref_count2(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_446) { node_446 = come_decrement_ref_count2(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_413,"union")) {
            union__426=(_Bool)1;
            if(            *info->p==123) {
                p_448=info->p;
                sline_449=info->sline;
                ((char*)(__right_value441=skip_block(info)));
                __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value442=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value442,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_411;
                    info->sline=head_sline_412;
                    info->define_struct=(_Bool)0;
                    anonymous_type_434=(_Bool)1;
                    __dec_obj176=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_448;
                    info->sline=sline_449;
                    break;
                }
                else {
                    anonymous_type_434=(_Bool)1;
                    __dec_obj177=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_448;
                    info->sline=sline_449;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj178=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_450=info->p;
                sline_451=info->sline;
                ((char*)(__right_value446=skip_block(info)));
                __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_411;
                    info->sline=head_sline_412;
                    info->define_struct=(_Bool)1;
                    __result288__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value448=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1412, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value448,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result288__;
                }
                else {
                    anonymous_type_434=(_Bool)1;
                    info->p=p_450;
                    info->sline=sline_451;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_413,"enum")) {
            enum__427=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value449=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_452=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_453=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_454=multiple_assign_var3->v3;
                come_call_finalizer3(__right_value449,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_453 = come_decrement_ref_count2(name_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_455=info->p;
                sline_456=info->sline;
                ((char*)(__right_value450=skip_block(info)));
                __right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value451=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value451,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_411;
                    info->sline=head_sline_412;
                    info->define_struct=(_Bool)1;
                    __result289__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value453=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1450, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value453,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result289__;
                }
                else {
                    anonymous_type_434=(_Bool)1;
                    __dec_obj179=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_455;
                    info->sline=sline_456;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj180=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value456=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_457=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_458=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_459=multiple_assign_var4->v3;
                come_call_finalizer3(__right_value456,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_460=info->p;
                sline_461=info->sline;
                ((char*)(__right_value457=skip_block(info)));
                __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_411;
                    info->sline=head_sline_412;
                    info->define_struct=(_Bool)1;
                    __result290__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value459=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1486, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value459,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result290__;
                }
                else {
                    anonymous_type_434=(_Bool)1;
                    info->p=p_460;
                    info->sline=sline_461;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_413,"long")) {
            {
                p_462=info->p;
                sline_463=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_462;
                    info->sline=sline_463;
                    __dec_obj181=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj182=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_413,"unsigned")) {
                        __dec_obj183=type_name_413;
                        type_name_413=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_413,"int")) {
                            long__421=(_Bool)1;
                            unsigned__420=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_413,"signed")) {
                        __dec_obj184=type_name_413;
                        type_name_413=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_413,"int")) {
                            long__421=(_Bool)1;
                            unsigned__420=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_413,"long")) {
                        p_462=info->p;
                        sline_463=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_422=(_Bool)1;
                            __dec_obj185=type_name_413;
                            type_name_413=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__421=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_413,"int")) {
                            long_long_422=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_413,info)) {
                            __dec_obj186=type_name_413;
                            type_name_413=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_422=(_Bool)1;
                            info->p=p_462;
                            info->sline=sline_463;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_413,info)) {
                        if(                        long__421) {
                            long_long_422=(_Bool)1;
                            long__421=(_Bool)0;
                        }
                        else {
                            long__421=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_462;
                        info->sline=sline_463;
                        __dec_obj187=type_name_413;
                        type_name_413=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_413,"unsigned")) {
            unsigned__420=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_464=info->p;
                sline_465=info->sline;
                __dec_obj188=type_name_413;
                type_name_413=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_413,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_466=info->p;
                        sline_467=info->sline;
                        __dec_obj189=type_name_413;
                        type_name_413=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_413,info)) {
                            short__423=(_Bool)1;
                        }
                        else {
                            short__423=(_Bool)1;
                            __dec_obj190=type_name_413;
                            type_name_413=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_466;
                            info->sline=sline_467;
                        }
                    }
                    else {
                        short__423=(_Bool)1;
                        __dec_obj191=type_name_413;
                        type_name_413=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_413,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_468=info->p;
                        sline_469=info->sline;
                        __dec_obj192=type_name_413;
                        type_name_413=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_413,info)) {
                            long__421=(_Bool)1;
                        }
                        else {
                            long__421=(_Bool)1;
                            __dec_obj193=type_name_413;
                            type_name_413=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_468;
                            info->sline=sline_469;
                        }
                    }
                    else {
                        long__421=(_Bool)1;
                        __dec_obj194=type_name_413;
                        type_name_413=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_413,info)) {
                    __dec_obj195=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_464;
                    info->sline=sline_465;
                    break;
                }
            }
            else {
                __dec_obj196=type_name_413;
                type_name_413=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_413,"signed")||string_operator_equals(type_name_413,"__signed__")) {
            unsigned__420=(_Bool)0;
            __dec_obj197=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"register")) {
            register__419=(_Bool)1;
            __dec_obj198=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"restrict")) {
            restrict__424=(_Bool)1;
            __dec_obj199=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"_Addr")) {
            __dec_obj200=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"__restrict")) {
            restrict__424=(_Bool)1;
            __dec_obj201=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_413,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj202=type_name_413;
            type_name_413=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__432=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_413,"short")) {
            short__423=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_470=info->p;
                sline_471=info->sline;
                __dec_obj203=type_name_413;
                type_name_413=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_413,"int")) {
                    short__423=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_413,"short")) {
                    short__423=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_413,info)) {
                    info->p=p_470;
                    info->sline=sline_471;
                }
                else {
                    __dec_obj204=type_name_413;
                    type_name_413=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_470;
                    info->sline=sline_471;
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
    attribute_472=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_473=0;
    heap_474=(_Bool)0;
    refference_475=(_Bool)0;
    channel_476=(_Bool)0;
    object_interface_477=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_473++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            refference_475=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_477=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_474=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_476=(_Bool)1;
        }
        else {
            break;
        }
    }
    type_name2_478=((void*)0);
    if(    memcmp(info->p,"as",strlen("as"))==0&&(*(info->p+2)==32||*(info->p+2)==9||*(info->p+2)==10)) {
        info->p+=2;
        skip_spaces_and_lf(info);
        __dec_obj205=type_name2_478;
        type_name2_478=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        pointer_num_473=1;
        heap_474=1;
    }
    skip_pointer_attribute(info);
    tuple_name_479=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__432) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj206=tuple_name_479;
        tuple_name_479=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__436) {
        expected_next_character(41,info);
    }
    lambda_flag_480=(_Bool)0;
    {
        pX_481=info->p;
        slineX_482=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value487=parse_word(info)));
            __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_480=(_Bool)1;
            }
        }
        info->p=pX_481;
        info->sline=slineX_482;
    }
    function_pointer_flag_485=(_Bool)0;
    {
        p_486=info->p;
        sline_487=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_485=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_488=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_485=(_Bool)1;
                    }
                }
                word_488 = come_decrement_ref_count2(word_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_486;
        info->sline=sline_487;
    }
    var_name_between_brace_489=(_Bool)0;
    {
        p_490=info->p;
        sline_491=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_492=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_492,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_489=(_Bool)1;
                    }
                }
                word_492 = come_decrement_ref_count2(word_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_490;
        info->sline=sline_491;
    }
    if(    anonymous_type_434&&*info->p==123) {
        static int anonymous_num_493=0;
        if(        struct__425) {
            if(            string_operator_equals(type_name_413,"")) {
                __dec_obj207=type_name_413;
                type_name_413=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_493));
                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_494=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_413),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_495=node_compile(node_494,info);
            if(            !Value_495) {
                err_msg(info,"parse_struct is failed");
                __result291__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value494=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1907, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value494,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result291__;
            }
            else {
            }
            pointer_num_496=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_496++;
            }
            __dec_obj208=type_483;
            type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1920, "sType")),type_name_413,(_Bool)0,info));
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_483->mPointerNum=pointer_num_496;
            if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__427) {
            if(            string_operator_equals(type_name_413,"")) {
                __dec_obj209=type_name_413;
                type_name_413=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_493));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_497=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_413),info));
            if(            !info->no_output_err) {
                Value_498=node_compile(node_497,info);
                if(                !Value_498) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result292__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value500=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1934, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_497) { node_497 = come_decrement_ref_count2(node_497, ((struct sNode*)node_497)->finalize, ((struct sNode*)node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value500,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result292__;
                }
                else {
                }
            }
            __dec_obj210=type_483;
            type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1938, "sType")),type_name_413,(_Bool)0,info));
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_497) { node_497 = come_decrement_ref_count2(node_497, ((struct sNode*)node_497)->finalize, ((struct sNode*)node_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__426) {
            if(            string_operator_equals(type_name_413,"")) {
                __dec_obj211=type_name_413;
                type_name_413=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_493));
                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_499=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_413),info));
            Value_500=node_compile(node_499,info);
            if(            !Value_500) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result293__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value506=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1950, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_499) { node_499 = come_decrement_ref_count2(node_499, ((struct sNode*)node_499)->finalize, ((struct sNode*)node_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value506,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
            else {
            }
            pointer_num_501=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_501++;
            }
            __dec_obj212=type_483;
            type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1964, "sType")),type_name_413,(_Bool)0,info));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_483->mPointerNum=pointer_num_501;
            if(node_499) { node_499 = come_decrement_ref_count2(node_499, ((struct sNode*)node_499)->finalize, ((struct sNode*)node_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result294__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value510=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1970, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value510,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result294__;
        }
        attribute_502=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_502,"")) {
            __dec_obj213=type_483->mAttribute;
            type_483->mAttribute=(char*)come_increment_ref_count(attribute_502);
            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_489&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj214=var_name_484;
                var_name_484=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_435) {
                static int num_anonymous_var_name_503=0;
                num_anonymous_var_name_503++;
                __dec_obj215=var_name_484;
                var_name_484=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_503));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj216=var_name_484;
                var_name_484=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_504=0;
                num_anonymous_var_name_504++;
                __dec_obj217=var_name_484;
                var_name_484=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_504));
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_489&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_505=info->no_comma;
                info->no_comma=(_Bool)1;
                node_506=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_505;
                __dec_obj218=type_483->mSizeNum;
                type_483->mSizeNum=(struct sNode*)come_increment_ref_count(node_506);
                if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_506) { node_506 = come_decrement_ref_count2(node_506, ((struct sNode*)node_506)->finalize, ((struct sNode*)node_506)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_507=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_502,"")&&string_operator_not_equals(attribute2_507,"")) {
                __dec_obj219=type_483->mAttribute;
                type_483->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_502,((char*)(__right_value518=charp_operator_add(" ",attribute2_507)))));
                __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_507,"")) {
                __dec_obj220=type_483->mAttribute;
                type_483->mAttribute=(char*)come_increment_ref_count(attribute2_507);
                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_507 = come_decrement_ref_count2(attribute2_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_502 = come_decrement_ref_count2(attribute_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    lambda_flag_480) {
        if(        (_if_conditional3=(((struct sType*)(__right_value520=map$2charphsTypephp_operator_load_element(info->types,type_name_413))))),        come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional3) {
            __dec_obj221=result_type_508;
            result_type_508=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value521=map$2charphsTypephp_operator_load_element(info->types,type_name_413)))));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value521,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_508->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value523=map$2charphsClassphp_operator_load_element(info->classes,result_type_508->mClass->mName))), "05type.c", 2033, 5));
            come_call_finalizer3(__right_value523,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_413)) {
            for(            i_509=0;            i_509<list$1charph_length(info->generics_type_names);            i_509++            ){
                if(                (_if_conditional4=(string_operator_equals(((char*)come_null_check(((char*)(__right_value524=list$1charphp_operator_load_element(info->generics_type_names,i_509))), "05type.c", 2037, 6)),type_name_413))),                (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional4) {
                    __dec_obj222=result_type_508;
                    result_type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2038, "sType")),((char*)(__right_value526=xsprintf("generics_type%d",i_509))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_413)) {
            for(            i_513=0;            i_513<list$1charph_length(info->method_generics_type_names);            i_513++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)come_null_check(((char*)(__right_value528=list$1charphp_operator_load_element(info->method_generics_type_names,i_513))), "05type.c", 2044, 7)),type_name_413))),                (__right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional5) {
                    __dec_obj223=result_type_508;
                    result_type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2045, "sType")),((char*)(__right_value530=xsprintf("mgenerics_type%d",i_513))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj224=result_type_508;
            result_type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2050, "sType")),type_name_413,(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_508->mAtomic=result_type_508->mAtomic||atomic__436;
        result_type_508->mConstant=result_type_508->mConstant||constant_416;
        __dec_obj225=result_type_508->mAlignas;
        result_type_508->mAlignas=(struct sNode*)come_increment_ref_count(alignas__433);
        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_508->mRegister=register__419;
        result_type_508->mUnsigned=result_type_508->mUnsigned||unsigned__420;
        result_type_508->mVolatile=volatile__418;
        result_type_508->mRecord=result_type_508->mRecord||record__414;
        result_type_508->mUniq=result_type_508->mUniq||uniq__431;
        result_type_508->mStatic=(result_type_508->mStatic||static__417)&&!result_type_508->mUniq;
        result_type_508->mException=result_type_508->mException||exception__415;
        result_type_508->mExtern=result_type_508->mExtern||extern__429;
        result_type_508->mInline=result_type_508->mInline||inline__430;
        result_type_508->mRestrict=result_type_508->mRestrict||restrict__424;
        result_type_508->mLongLong=result_type_508->mLongLong||long_long_422;
        result_type_508->mLong=result_type_508->mLong||long__421;
        result_type_508->mShort=result_type_508->mShort||short__423;
        result_type_508->mPointerNum=pointer_num_473;
        result_type_508->mHeap=result_type_508->mHeap||heap_474;
        result_type_508->mRefference=result_type_508->mRefference||refference_475;
        result_type_508->mChannel=result_type_508->mChannel||channel_476;
        __dec_obj226=var_name_484;
        var_name_484=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value535=parse_params(info,(_Bool)0)));
        param_types_514=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_515=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_516=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_517=multiple_assign_var5->v4;
        come_call_finalizer3(__right_value535,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj227=type_483;
        type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2078, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj229=type_483->mResultType;
        type_483->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2080, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_508)));
        come_call_finalizer3(__dec_obj229,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj230=type_483->mParamTypes;
        type_483->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_514);
        come_call_finalizer3(__dec_obj230,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj231=type_483->mParamNames;
        type_483->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_515);
        come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_483->mVarArgs=var_args_517;
        type_483->mExtern=extern__429;
        come_call_finalizer3(result_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_514,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_515,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_516,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_485) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_518=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_518++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional6=(((struct sType*)(__right_value540=map$2charphsTypephp_operator_load_element(info->types,type_name_413))))),        come_call_finalizer3(__right_value540,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional6) {
            __dec_obj232=result_type_519;
            result_type_519=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value541=map$2charphsTypephp_operator_load_element(info->types,type_name_413)))));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value541,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_519->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value543=map$2charphsClassphp_operator_load_element(info->classes,result_type_519->mClass->mName))), "05type.c", 2105, 8));
            come_call_finalizer3(__right_value543,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_413)) {
            for(            i_520=0;            i_520<list$1charph_length(info->generics_type_names);            i_520++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)come_null_check(((char*)(__right_value544=list$1charphp_operator_load_element(info->generics_type_names,i_520))), "05type.c", 2110, 9)),type_name_413))),                (__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional7) {
                    __dec_obj233=result_type_519;
                    result_type_519=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2111, "sType")),((char*)(__right_value546=xsprintf("generics_type%d",i_520))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_413)) {
            for(            i_521=0;            i_521<list$1charph_length(info->method_generics_type_names);            i_521++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)come_null_check(((char*)(__right_value548=list$1charphp_operator_load_element(info->method_generics_type_names,i_521))), "05type.c", 2117, 10)),type_name_413))),                (__right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional8) {
                    __dec_obj234=result_type_519;
                    result_type_519=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2118, "sType")),((char*)(__right_value550=xsprintf("mgenerics_type%d",i_521))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj235=result_type_519;
            result_type_519=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2123, "sType")),type_name_413,(_Bool)0,info));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_519->mConstant=result_type_519->mConstant||constant_416;
        result_type_519->mAtomic=result_type_519->mAtomic||atomic__436;
        __dec_obj236=result_type_519->mAlignas;
        result_type_519->mAlignas=(struct sNode*)come_increment_ref_count(alignas__433);
        if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_519->mRegister=register__419;
        result_type_519->mUnsigned=result_type_519->mUnsigned||unsigned__420;
        result_type_519->mVolatile=volatile__418;
        result_type_519->mUniq=result_type_519->mUniq||uniq__431;
        result_type_519->mStatic=(result_type_519->mStatic||static__417)&&!result_type_519->mUniq;
        result_type_519->mRecord=result_type_519->mRecord||record__414;
        result_type_519->mException=result_type_519->mException||exception__415;
        result_type_519->mExtern=result_type_519->mExtern||extern__429;
        result_type_519->mInline=result_type_519->mInline||inline__430;
        result_type_519->mRestrict=result_type_519->mRestrict||restrict__424;
        result_type_519->mLongLong=result_type_519->mLongLong||long_long_422;
        result_type_519->mLong=result_type_519->mLong||long__421;
        result_type_519->mShort=result_type_519->mShort||short__423;
        result_type_519->mPointerNum+=pointer_num_473;
        result_type_519->mHeap=result_type_519->mHeap||heap_474;
        result_type_519->mRefference=result_type_519->mRefference||refference_475;
        result_type_519->mChannel=result_type_519->mChannel||channel_476;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj237=var_name_484;
            var_name_484=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result298__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value556=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2150, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(result_type_519),(char*)come_increment_ref_count(var_name_484),(_Bool)0)));
                come_call_finalizer3(result_type_519,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value556,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
        }
        else {
            static int num_anonymous_var_name_522=0;
            num_anonymous_var_name_522++;
            __dec_obj238=var_name_484;
            var_name_484=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_522));
            __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_523=(_Bool)0;
        function_pointer_array_num_524=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_525=0;
            while(xisdigit(*info->p)) {
                n_525=n_525*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_524=n_525;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_523=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value558=parse_params(info,(_Bool)0)));
        param_types_526=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_527=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_528=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_529=multiple_assign_var6->v4;
        come_call_finalizer3(__right_value558,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj239=type_483;
        type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2182, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj240=type_483->mResultType;
        type_483->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2184, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(sType_clone(result_type_519))));
        come_call_finalizer3(__dec_obj240,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj241=type_483->mParamTypes;
        type_483->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_526);
        come_call_finalizer3(__dec_obj241,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj242=type_483->mParamNames;
        type_483->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_527);
        come_call_finalizer3(__dec_obj242,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_483->mVarArgs=var_args_529;
        type_483->mExtern=extern__429;
        if(        function_pointer_array_523) {
            type_483->mLambdaArray=(_Bool)1;
            type_483->mLambdaArrayNum=function_pointer_array_num_524;
        }
        type_483->mFunctionPointerNum=function_pointer_num_518;
        come_call_finalizer3(result_type_519,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_526,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_527,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_528,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_413,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_530=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_531=node_compile(exp_530,info);
        if(        !Value_531) {
            err_msg(info,"invalid __typeof__ expression");
            __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(__right_value566=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count((struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 2206, "struct tuple3$3sTypepcharphbool")),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_530) { exp_530 = come_decrement_ref_count2(exp_530, ((struct sNode*)exp_530)->finalize, ((struct sNode*)exp_530)->_protocol_obj, 0, 0, 0, (void*)0); } 
            type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value566,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result300__;
        }
        else {
        }
        come_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj245=type_483;
        type_483=(struct sType*)come_increment_ref_count(sType_clone(come_value_532->type));
        come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
        attribute_533=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_533,"")) {
            __dec_obj246=type_483->mAttribute;
            type_483->mAttribute=(char*)come_increment_ref_count(attribute_533);
            __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_489&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj247=var_name_484;
                var_name_484=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_435) {
                static int num_anonymous_var_name_534=0;
                num_anonymous_var_name_534++;
                __dec_obj248=var_name_484;
                var_name_484=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_534));
                __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj249=var_name_484;
                var_name_484=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_535=0;
                num_anonymous_var_name_535++;
                __dec_obj250=var_name_484;
                var_name_484=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_535));
                __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_489&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_536=info->no_comma;
                info->no_comma=(_Bool)1;
                node_537=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_536;
                __dec_obj251=type_483->mSizeNum;
                type_483->mSizeNum=(struct sNode*)come_increment_ref_count(node_537);
                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_537) { node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_538=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_533,"")&&string_operator_not_equals(attribute2_538,"")) {
                __dec_obj252=type_483->mAttribute;
                type_483->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_533,((char*)(__right_value576=charp_operator_add(" ",attribute2_538)))));
                __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_538,"")) {
                __dec_obj253=type_483->mAttribute;
                type_483->mAttribute=(char*)come_increment_ref_count(attribute2_538);
                __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_538 = come_decrement_ref_count2(attribute2_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(exp_530) { exp_530 = come_decrement_ref_count2(exp_530, ((struct sNode*)exp_530)->finalize, ((struct sNode*)exp_530)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        attribute_533 = come_decrement_ref_count2(attribute_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        (_if_conditional9=(((struct sType*)(__right_value578=map$2charphsTypephp_operator_load_element(info->types,type_name_413))))),        come_call_finalizer3(__right_value578,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            __dec_obj257=type_483;
            type_483=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value579=map$2charphsTypephp_operator_load_element(info->types,type_name_413)))));
            come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value579,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_483->mTypedefOriginalPointerNum=type_483->mPointerNum;
            type_483->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value581=map$2charphsClassphp_operator_load_element(info->classes,type_483->mClass->mName))), "05type.c", 2274, 11));
            come_call_finalizer3(__right_value581,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj258=type_483->mOriginalTypeName;
            type_483->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_413));
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_483->mOriginalTypeNamePointerNum=pointer_num_473;
            type_483->mOriginalTypeNameHeap=heap_474;
            type_483->mConstant=type_483->mConstant||constant_416;
            type_483->mAtomic=type_483->mAtomic||atomic__436;
            __dec_obj259=type_483->mAlignas;
            type_483->mAlignas=(struct sNode*)come_increment_ref_count(alignas__433);
            if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
            type_483->mRegister=register__419;
            type_483->mUnsigned=type_483->mUnsigned||unsigned__420;
            type_483->mVolatile=volatile__418;
            type_483->mUniq=type_483->mUniq||uniq__431;
            type_483->mStatic=(type_483->mStatic||static__417)&&!type_483->mUniq;
            type_483->mRecord=type_483->mRecord||record__414;
            type_483->mException=type_483->mException||exception__415;
            type_483->mExtern=type_483->mExtern||extern__429;
            type_483->mInline=type_483->mInline||inline__430;
            type_483->mRestrict=type_483->mRestrict||restrict__424;
            type_483->mLongLong=type_483->mLongLong||long_long_422;
            type_483->mLong=type_483->mLong||long__421;
            type_483->mShort=type_483->mShort||short__423;
            type_483->mPointerNum+=pointer_num_473;
            type_483->mHeap=type_483->mHeap||heap_474;
            type_483->mRefference=type_483->mRefference||refference_475;
            type_483->mChannel=type_483->mChannel||channel_476;
            __dec_obj260=type_483->mTupleName;
            type_483->mTupleName=(char*)come_increment_ref_count(tuple_name_479);
            __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_413)) {
            for(            i_539=0;            i_539<list$1charph_length(info->generics_type_names);            i_539++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)come_null_check(((char*)(__right_value583=list$1charphp_operator_load_element(info->generics_type_names,i_539))), "05type.c", 2303, 12)),type_name_413))),                (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional10) {
                    __dec_obj261=type_483;
                    type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2304, "sType")),((char*)(__right_value585=xsprintf("generics_type%d",i_539))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_483->mConstant=type_483->mConstant||constant_416;
            type_483->mAtomic=type_483->mAtomic||atomic__436;
            __dec_obj262=type_483->mAlignas;
            type_483->mAlignas=(struct sNode*)come_increment_ref_count(alignas__433);
            if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
            type_483->mRegister=register__419;
            type_483->mUnsigned=type_483->mUnsigned||unsigned__420;
            type_483->mVolatile=volatile__418;
            type_483->mUniq=type_483->mUniq||uniq__431;
            type_483->mStatic=(type_483->mStatic||static__417)&&!type_483->mUniq;
            type_483->mRecord=type_483->mRecord||record__414;
            type_483->mException=type_483->mException||exception__415;
            type_483->mExtern=type_483->mExtern||extern__429;
            type_483->mInline=type_483->mInline||inline__430;
            type_483->mRestrict=type_483->mRestrict||restrict__424;
            type_483->mLongLong=type_483->mLongLong||long_long_422;
            type_483->mLong=type_483->mLong||long__421;
            type_483->mShort=type_483->mShort||short__423;
            type_483->mPointerNum+=pointer_num_473;
            type_483->mHeap=type_483->mHeap||heap_474;
            type_483->mRefference=type_483->mRefference||refference_475;
            type_483->mChannel=type_483->mChannel||channel_476;
            __dec_obj263=type_483->mTupleName;
            type_483->mTupleName=(char*)come_increment_ref_count(tuple_name_479);
            __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_413)) {
            for(            i_540=0;            i_540<list$1charph_length(info->method_generics_type_names);            i_540++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)come_null_check(((char*)(__right_value587=list$1charphp_operator_load_element(info->method_generics_type_names,i_540))), "05type.c", 2332, 13)),type_name_413))),                (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional11) {
                    __dec_obj264=type_483;
                    type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2333, "sType")),((char*)(__right_value589=xsprintf("mgenerics_type%d",i_540))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_483->mConstant=type_483->mConstant||constant_416;
            type_483->mAtomic=type_483->mAtomic||atomic__436;
            __dec_obj265=type_483->mAlignas;
            type_483->mAlignas=(struct sNode*)come_increment_ref_count(alignas__433);
            if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
            type_483->mRegister=register__419;
            type_483->mUnsigned=type_483->mUnsigned||unsigned__420;
            type_483->mVolatile=volatile__418;
            type_483->mUniq=type_483->mUniq||uniq__431;
            type_483->mStatic=(type_483->mStatic||static__417)&&!type_483->mUniq;
            type_483->mRecord=type_483->mRecord||record__414;
            type_483->mException=type_483->mException||exception__415;
            type_483->mExtern=type_483->mExtern||extern__429;
            type_483->mInline=type_483->mInline||inline__430;
            type_483->mRestrict=type_483->mRestrict||restrict__424;
            type_483->mLongLong=type_483->mLongLong||long_long_422;
            type_483->mLong=type_483->mLong||long__421;
            type_483->mShort=type_483->mShort||short__423;
            type_483->mPointerNum+=pointer_num_473;
            type_483->mHeap=type_483->mHeap||heap_474;
            type_483->mRefference=type_483->mRefference||refference_475;
            type_483->mChannel=type_483->mChannel||channel_476;
            __dec_obj266=type_483->mTupleName;
            type_483->mTupleName=(char*)come_increment_ref_count(tuple_name_479);
            __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional12=(((struct sClass*)(__right_value591=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_413)))==((void*)0))),            come_call_finalizer3(__right_value591,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional12) {
                __result301__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value593=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2365, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value593,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
            __dec_obj267=type_483;
            type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2368, "sType")),type_name_413,(_Bool)0,info));
            come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value596=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_541=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_542=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_543=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value596,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_543) {
                    __result302__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value598=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2374, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_542 = come_decrement_ref_count2(var_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value598,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result302__;
                }
                _inf_value1=(struct object*)come_calloc(1, sizeof(struct object), "05type.c", 2377, "struct object");
                _inf_obj_value1=(struct sType*)come_increment_ref_count(generics_type_541);
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sType_finalize;
                _inf_value1->clone=(void*)sType_clone;
                list$1objectph_push_back(type_483->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value1));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_542 = come_decrement_ref_count2(var_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2));
                    __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value622=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2391, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_542 = come_decrement_ref_count2(var_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value622,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result306__;
                }
                come_call_finalizer3(generics_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_542 = come_decrement_ref_count2(var_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_483,info)) {
                __dec_obj305=type_483;
                type_483=(struct sType*)come_increment_ref_count(solve_generics(type_483,info->generics_type,info));
                come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_483,type_483,info)) {
                    new_name_548=(char*)come_increment_ref_count(create_generics_name(type_483,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_548);
                    exit(7);
                    new_name_548 = come_decrement_ref_count2(new_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_483->mConstant=type_483->mConstant||constant_416;
            type_483->mAtomic=type_483->mAtomic||atomic__436;
            __dec_obj306=type_483->mAlignas;
            type_483->mAlignas=(struct sNode*)come_increment_ref_count(alignas__433);
            if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
            type_483->mRegister=register__419;
            type_483->mUnsigned=type_483->mUnsigned||unsigned__420;
            type_483->mVolatile=volatile__418;
            type_483->mUniq=type_483->mUniq||uniq__431;
            type_483->mStatic=(type_483->mStatic||static__417)&&!type_483->mUniq;
            type_483->mRecord=type_483->mRecord||record__414;
            type_483->mException=type_483->mException||exception__415;
            type_483->mExtern=type_483->mExtern||extern__429;
            type_483->mInline=type_483->mInline||inline__430;
            type_483->mRestrict=type_483->mRestrict||restrict__424;
            type_483->mLongLong=type_483->mLongLong||long_long_422;
            type_483->mLong=type_483->mLong||long__421;
            type_483->mShort=type_483->mShort||short__423;
            type_483->mPointerNum+=pointer_num_473;
            type_483->mHeap=type_483->mHeap||heap_474;
            type_483->mRefference=type_483->mRefference||refference_475;
            type_483->mChannel=type_483->mChannel||channel_476;
            __dec_obj307=type_483->mTupleName;
            type_483->mTupleName=(char*)come_increment_ref_count(tuple_name_479);
            __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__425) {
                klass_549=((struct sClass*)(__right_value625=map$2charphsClassphp_operator_load_element(info->classes,type_name_413)));
                come_call_finalizer3(__right_value625,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_549==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_413),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2434, "sClass")),type_name_413,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__426) {
                klass_591=((struct sClass*)(__right_value633=map$2charphsClassphp_operator_load_element(info->classes,type_name_413)));
                come_call_finalizer3(__right_value633,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_591==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_413),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2441, "sClass")),type_name_413,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj308=type_483;
            type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2445, "sType")),type_name_413,(_Bool)0,info));
            come_call_finalizer3(__dec_obj308,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_483->mConstant=type_483->mConstant||constant_416;
            type_483->mAtomic=type_483->mAtomic||atomic__436;
            __dec_obj309=type_483->mAlignas;
            type_483->mAlignas=(struct sNode*)come_increment_ref_count(alignas__433);
            if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
            type_483->mRegister=register__419;
            type_483->mUnsigned=type_483->mUnsigned||unsigned__420;
            type_483->mVolatile=volatile__418;
            type_483->mUniq=type_483->mUniq||uniq__431;
            type_483->mStatic=(type_483->mStatic||static__417)&&!type_483->mUniq;
            type_483->mRecord=type_483->mRecord||record__414;
            type_483->mException=type_483->mException||exception__415;
            type_483->mExtern=type_483->mExtern||extern__429;
            type_483->mInline=type_483->mInline||inline__430;
            type_483->mRestrict=type_483->mRestrict||restrict__424;
            type_483->mLongLong=type_483->mLongLong||long_long_422;
            type_483->mLong=type_483->mLong||long__421;
            type_483->mShort=type_483->mShort||short__423;
            type_483->mPointerNum+=pointer_num_473;
            type_483->mHeap=type_483->mHeap||heap_474;
            type_483->mRefference=type_483->mRefference||refference_475;
            type_483->mChannel=type_483->mChannel||channel_476;
            __dec_obj310=type_483->mTupleName;
            type_483->mTupleName=(char*)come_increment_ref_count(tuple_name_479);
            __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_483->mPointerNum++;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_483->mHeap=(_Bool)1;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                type_483->mRefference=(_Bool)1;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                object_interface_477=(_Bool)1;
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_483->mNoHeap=(_Bool)1;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_483->mGuardValue=(_Bool)1;
                }
                else {
                    type_483->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_483->mNoCallingDestructor=(_Bool)1;
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
                type_483->mPointerNum++;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_483->mHeap=(_Bool)1;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                type_483->mRefference=(_Bool)1;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                object_interface_477=(_Bool)1;
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_483->mChannel=(_Bool)1;
                if(                type_483->mNoSolvedGenericsType->v1) {
                    type_483->mNoSolvedGenericsType->v1->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_592=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2596, "list$1sTypeph"))));
            list$1sTypeph_push_back(types_592,(struct sType*)come_increment_ref_count(sType_clone(type_483)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value641=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_593=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_594=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_595=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value641,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_595) {
                    __result328__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value643=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2607, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_594 = come_decrement_ref_count2(name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(types_592,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value643,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result328__;
                }
                list$1sTypeph_push_back(types_592,(struct sType*)come_increment_ref_count(sType_clone(type2_593)));
                come_call_finalizer3(type2_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_594 = come_decrement_ref_count2(name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_596=list$1sTypeph_length(types_592);
            __dec_obj311=type_483;
            type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2620, "sType")),((char*)(__right_value646=xsprintf("tuple%d",num_tuples_596))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj311,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_483->mPointerNum++;
            type_483->mHeap=(_Bool)1;
            for(            o2_saved_597=(struct list$1sTypeph*)come_increment_ref_count((types_592)),it_600=list$1sTypeph_begin((o2_saved_597));            !list$1sTypeph_end((o2_saved_597));            it_600=list$1sTypeph_next((o2_saved_597))            ){
                _inf_value2=(struct object*)come_calloc(1, sizeof(struct object), "05type.c", 2625, "struct object");
                _inf_obj_value2=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value648=sType_clone(it_600)))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sType_finalize;
                _inf_value2->clone=(void*)sType_clone;
                list$1objectph_push_back(type_483->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value2));
                come_call_finalizer3(__right_value648,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_597,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            if(            is_contained_generics_class(type_483,info)) {
                __dec_obj346=type_483;
                type_483=(struct sType*)come_increment_ref_count(solve_generics(type_483,info->generics_type,info));
                come_call_finalizer3(__dec_obj346,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_483,type_483,info)) {
                    new_name_604=(char*)come_increment_ref_count(create_generics_name(type_483,info));
                    printf("output generics is failed(%s)\n",new_name_604);
                    exit(9);
                    new_name_604 = come_decrement_ref_count2(new_name_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_483->mMultipleTypes=(_Bool)1;
            come_call_finalizer3(types_592,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_605=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_605,"")) {
            __dec_obj347=type_483->mAttribute;
            type_483->mAttribute=(char*)come_increment_ref_count(attribute_605);
            __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_489&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj348=var_name_484;
                var_name_484=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_435) {
                static int num_anonymous_var_name_606=0;
                num_anonymous_var_name_606++;
                __dec_obj349=var_name_484;
                var_name_484=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_606));
                __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj350=var_name_484;
                var_name_484=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_607=0;
                num_anonymous_var_name_607++;
                __dec_obj351=var_name_484;
                var_name_484=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_607));
                __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_489&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_608=info->no_comma;
                info->no_comma=(_Bool)1;
                node_609=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_608;
                __dec_obj352=type_483->mSizeNum;
                type_483->mSizeNum=(struct sNode*)come_increment_ref_count(node_609);
                if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_610=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_605,"")&&string_operator_not_equals(attribute2_610,"")) {
                __dec_obj353=type_483->mAttribute;
                type_483->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_605,((char*)(__right_value677=charp_operator_add(" ",attribute2_610)))));
                __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_610,"")) {
                __dec_obj354=type_483->mAttribute;
                type_483->mAttribute=(char*)come_increment_ref_count(attribute2_610);
                __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_610 = come_decrement_ref_count2(attribute2_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_605 = come_decrement_ref_count2(attribute_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            type_483->mArrayPointerType=(_Bool)1;
            type_483->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_611=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(type_483->mArrayNum,(struct sNode*)come_increment_ref_count(node_611));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_611) { node_611 = come_decrement_ref_count2(node_611, ((struct sNode*)node_611)->finalize, ((struct sNode*)node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    multiple_assign_var9=((struct tuple2$2charphcharph*)(__right_value680=parse_attribute(info,(_Bool)0)));
    asm_name_612=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_613=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer3(__right_value680,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_613,"")) {
        __dec_obj355=type_483->mAttribute;
        type_483->mAttribute=(char*)come_increment_ref_count(attribute2_613);
        __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj356=type_483->mAsmName;
    type_483->mAsmName=(char*)come_increment_ref_count(asm_name_612);
    __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_483->mChannel) {
        type_before_614=(struct sType*)come_increment_ref_count(sType_clone(type_483));
        __dec_obj357=type_483;
        type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2735, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj357,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj358=type_483->mArrayNum;
        type_483->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___615[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value684=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2736, "struct list$1sNodeph")),1,__list_values1___615)));
        come_call_finalizer3(__dec_obj358,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value684) { __right_value684 = come_decrement_ref_count2(__right_value684, ((struct sNode*)__right_value684)->finalize, ((struct sNode*)__right_value684)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj359=type_483->mChannelType;
        type_483->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2737, "tuple1$1sTypeph"));
        come_call_finalizer3(__dec_obj359,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj360=type_483->mChannelType->v1;
        type_483->mChannelType->v1=(struct sType*)come_increment_ref_count(type_before_614);
        come_call_finalizer3(__dec_obj360,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_483->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_614,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_483->mException) {
        type2_617=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2742, "sType")),"tuple2",(_Bool)0,info));
        _inf_value3=(struct object*)come_calloc(1, sizeof(struct object), "05type.c", 2743, "struct object");
        _inf_obj_value3=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value691=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2743, "sType")),"generics_type0",(_Bool)0,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sType_finalize;
        _inf_value3->clone=(void*)sType_clone;
        list$1objectphp_operator_store_element(type2_617->mGenericsTypes,0,(struct object*)come_increment_ref_count(_inf_value3));
        come_call_finalizer3(__right_value691,sType_finalize, 0, 1, 0, 0, __result_obj__);
        _inf_value4=(struct object*)come_calloc(1, sizeof(struct object), "05type.c", 2744, "struct object");
        _inf_obj_value4=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value712=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2744, "sType")),"generics_type1",(_Bool)0,info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sType_finalize;
        _inf_value4->clone=(void*)sType_clone;
        list$1objectphp_operator_store_element(type2_617->mGenericsTypes,1,(struct object*)come_increment_ref_count(_inf_value4));
        come_call_finalizer3(__right_value712,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type2_617->mPointerNum=1;
        type2_617->mHeap=(_Bool)1;
        type3_625=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2748, "sType")),"tuple2",(_Bool)0,info));
        _inf_value5=(struct object*)come_calloc(1, sizeof(struct object), "05type.c", 2749, "struct object");
        _inf_obj_value5=(struct sType*)come_increment_ref_count(type_483);
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sType_finalize;
        _inf_value5->clone=(void*)sType_clone;
        list$1objectphp_operator_store_element(type3_625->mGenericsTypes,0,(struct object*)come_increment_ref_count(_inf_value5));
        _inf_value6=(struct object*)come_calloc(1, sizeof(struct object), "05type.c", 2750, "struct object");
        _inf_obj_value6=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value754=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2750, "sType")),"char*",(_Bool)0,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sType_finalize;
        _inf_value6->clone=(void*)sType_clone;
        list$1objectphp_operator_store_element(type3_625->mGenericsTypes,1,(struct object*)come_increment_ref_count(_inf_value6));
        come_call_finalizer3(__right_value754,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((__tmp_infY6=((struct object*)come_null_check(((struct object*)(__right_value774=list$1objectphp_operator_load_element(type3_625->mGenericsTypes,1))), "05type.c", 2751, 14))),((struct sType*)(__tmp_infY6 ? __tmp_infY6->_protocol_obj:(void*)0)))->mHeap=(_Bool)1;
        if(__right_value774) { __right_value774 = come_decrement_ref_count2(__right_value774, ((struct object*)__right_value774)->finalize, ((struct object*)__right_value774)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        type4_628=(struct sType*)come_increment_ref_count(solve_generics(type2_617,type3_625,info));
        type4_628->mException=(_Bool)1;
        type4_628->mUniq=type_483->mUniq;
        __result348__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value777=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2758, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type4_628),(char*)come_increment_ref_count(var_name_484),(_Bool)1)));
        come_call_finalizer3(type2_617,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_625,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_628,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
        attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_612 = come_decrement_ref_count2(asm_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute2_613 = come_decrement_ref_count2(attribute2_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value777,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result348__;
        come_call_finalizer3(type2_617,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_625,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_628,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_472,"")) {
        __dec_obj498=type_483->mAttribute;
        type_483->mAttribute=(char*)come_increment_ref_count(attribute_472);
        __dec_obj498 = come_decrement_ref_count2(__dec_obj498, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    object_interface_477) {
        __dec_obj499=type_483;
        type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2766, "sType")),"object",(_Bool)0,info));
        come_call_finalizer3(__dec_obj499,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_483->mPointerNum++;
        type_483->mHeap=(_Bool)1;
        __dec_obj500=type_name2_478;
        type_name2_478=(char*)come_increment_ref_count(__builtin_string(type_name_413));
        __dec_obj500 = come_decrement_ref_count2(__dec_obj500, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    type_name2_478) {
        __dec_obj501=type_483->mRefferenceOriginalType;
        type_483->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2773, "tuple1$1sTypeph"));
        come_call_finalizer3(__dec_obj501,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj502=type_483->mRefferenceOriginalType->v1;
        type_483->mRefferenceOriginalType->v1=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2774, "sType")),type_name2_478,(_Bool)0,info));
        come_call_finalizer3(__dec_obj502,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_483->mRefferenceOriginalType->v1->mHeap=(_Bool)1;
        type_483->mRefferenceOriginalType->v1->mPointerNum=1;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value785=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2779, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_483),(char*)come_increment_ref_count(var_name_484),(_Bool)1)));
    type_name_413 = come_decrement_ref_count2(type_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__433) { alignas__433 = come_decrement_ref_count2(alignas__433, ((struct sNode*)alignas__433)->finalize, ((struct sNode*)alignas__433)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute_472 = come_decrement_ref_count2(attribute_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_478 = come_decrement_ref_count2(type_name2_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    tuple_name_479 = come_decrement_ref_count2(tuple_name_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_484 = come_decrement_ref_count2(var_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_612 = come_decrement_ref_count2(asm_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute2_613 = come_decrement_ref_count2(attribute2_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value785,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_510;
int i_511;
char* __result295__;
char* default_value_512;
char* __result296__;
default_value_512 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_510=self->head;
    i_511=0;
    while(it_510!=((void*)0)) {
        if(        position==i_511) {
            __result295__ = gComeFunResultObject = __result_obj__ = it_510->item;
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
        it_510=it_510->next;
        i_511++;
    }
    memset(&default_value_512,0,sizeof(char*));
    __result296__ = gComeFunResultObject = __result_obj__ = default_value_512;
    default_value_512 = come_decrement_ref_count2(default_value_512, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj228;
struct tuple1$1sTypeph* __result297__;
    __dec_obj228=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
char* __dec_obj243;
struct tuple3$3sTypepcharphbool* __result299__;
    self->v1=v1;
    __dec_obj243=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
char* __dec_obj244;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj244=self->v2;
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj254;
struct sType* __dec_obj255;
char* __dec_obj256;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj254=self->c_value;
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj255=self->type;
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj256=self->c_value_without_right_value_objects;
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value599 = (void*)0;
struct list_item$1objectph* litem_544;
struct object* __dec_obj268;
void* __right_value600 = (void*)0;
struct list_item$1objectph* litem_545;
struct object* __dec_obj269;
void* __right_value601 = (void*)0;
struct list_item$1objectph* litem_546;
struct object* __dec_obj270;
struct list$1objectph* __result303__;
    if(    self->len==0) {
        litem_544=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value599=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1objectph"))));
        litem_544->prev=((void*)0);
        litem_544->next=((void*)0);
        __dec_obj268=litem_544->item;
        litem_544->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct object*)__dec_obj268)->finalize, ((struct object*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_544;
        self->head=litem_544;
    }
    else if(    self->len==1) {
        litem_545=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value600=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1objectph"))));
        litem_545->prev=self->head;
        litem_545->next=((void*)0);
        __dec_obj269=litem_545->item;
        litem_545->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct object*)__dec_obj269)->finalize, ((struct object*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_545;
        self->head->next=litem_545;
    }
    else {
        litem_546=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value601=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1objectph"))));
        litem_546->prev=self->tail;
        litem_546->next=((void*)0);
        __dec_obj270=litem_546->item;
        litem_546->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct object*)__dec_obj270)->finalize, ((struct object*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_546;
        self->tail=litem_546;
    }
    self->len++;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_567;
unsigned int it_568;
_Bool same_key_exist_585;
char* it2_588;
struct map$2charphsClassph* __result327__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
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
                    come_call_finalizer3(self->items[it_568],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_568]=(struct sClass*)come_increment_ref_count(item);
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
                self->items[it_568]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_568]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_585=(_Bool)0;
    for(    it2_588=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_588=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_588,key)) {
            same_key_exist_585=(_Bool)1;
        }
    }
    if(    !same_key_exist_585) {
        list$1charp_push_back(self->key_list,key);
    }
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_550;
void* __right_value626 = (void*)0;
char** keys_551;
void* __right_value627 = (void*)0;
struct sClass** items_552;
void* __right_value628 = (void*)0;
_Bool* item_existance_553;
int len_554;
char* it_557;
struct sClass* default_value_560;
void* __right_value629 = (void*)0;
struct sClass* it2_561;
unsigned int hash_564;
int n_565;
struct sClass* default_value_566;
void* __right_value630 = (void*)0;
default_value_560 = (void*)0;
default_value_566 = (void*)0;
    size_550=self->size*10;
    keys_551=(char**)come_increment_ref_count(((char**)(__right_value626=(char**)come_calloc(1, sizeof(char*)*(1*(size_550)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_552=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value627=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_550)), "/usr/local/include/comelang.h", 2558, "sClass*%"))));
    item_existance_553=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value628=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_550)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_554=0;
    for(    it_557=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_557=map$2charphsClassph_next(self)    ){
        memset(&default_value_560,0,sizeof(struct sClass*));
        it2_561=((struct sClass*)(__right_value629=map$2charphsClassph_at(self,it_557,default_value_560)));
        come_call_finalizer3(__right_value629,sClass_finalize, 0, 1, 0, 0, (void*)0);
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
                items_552[n_565]=((struct sClass*)(__right_value630=map$2charphsClassph_at(self,it_557,default_value_566)));
                come_call_finalizer3(__right_value630,sClass_finalize, 0, 1, 0, 0, (void*)0);
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

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_555;
char* __result307__;
char* __result308__;
char* result_556;
char* __result309__;
result_555 = (void*)0;
result_556 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_555,0,sizeof(char*));
        __result307__ = gComeFunResultObject = __result_obj__ = result_555;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result308__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    memset(&result_556,0,sizeof(char*));
    __result309__ = gComeFunResultObject = __result_obj__ = result_556;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_558;
char* __result310__;
char* __result311__;
char* result_559;
char* __result312__;
result_558 = (void*)0;
result_559 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_558,0,sizeof(char*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_558;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_559,0,sizeof(char*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_559;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_562;
unsigned int it_563;
struct sClass* __result313__;
struct sClass* __result314__;
struct sClass* __result315__;
struct sClass* __result316__;
    hash_562=charp_get_hash_key(((char*)key))%self->size;
    it_563=hash_562;
    while((_Bool)1) {
        if(        self->item_existance[it_563]) {
            if(            charp_equals(self->keys[it_563],key)) {
                __result313__ = gComeFunResultObject = __result_obj__ = self->items[it_563];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result313__;
            }
            it_563++;
            if(            it_563>=self->size) {
                it_563=0;
            }
            else if(            it_563==hash_562) {
                __result314__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result314__;
            }
        }
        else {
            __result315__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
    }
    __result316__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_569;
struct list_item$1charp* it_570;
struct list$1charp* __result320__;
    it2_569=0;
    it_570=self->head;
    while(it_570!=((void*)0)) {
        if(        charp_equals(it_570->item,item)) {
            list$1charp_delete(self,it2_569,it2_569+1);
            break;
        }
        it2_569++;
        it_570=it_570->next;
    }
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_571;
struct list$1charp* __result317__;
struct list_item$1charp* it_574;
int i_575;
struct list_item$1charp* prev_it_576;
struct list_item$1charp* it_577;
int i_578;
struct list_item$1charp* prev_it_579;
struct list_item$1charp* it_580;
struct list_item$1charp* head_prev_it_581;
struct list_item$1charp* tail_it_582;
int i_583;
struct list_item$1charp* prev_it_584;
struct list$1charp* __result319__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_571=tail;
        tail=head;
        head=tmp_571;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result317__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_574=self->head;
        i_575=0;
        while(it_574!=((void*)0)) {
            if(            i_575<tail) {
                prev_it_576=it_574;
                it_574=it_574->next;
                i_575++;
                come_call_finalizer3(prev_it_576,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_575==tail) {
                self->head=it_574;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_574=it_574->next;
                i_575++;
            }
        }
    }
    else if(    tail==self->len) {
        it_577=self->head;
        i_578=0;
        while(it_577!=((void*)0)) {
            if(            i_578==head) {
                self->tail=it_577->prev;
                self->tail->next=((void*)0);
            }
            if(            i_578>=head) {
                prev_it_579=it_577;
                it_577=it_577->next;
                i_578++;
                come_call_finalizer3(prev_it_579,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_577=it_577->next;
                i_578++;
            }
        }
    }
    else {
        it_580=self->head;
        head_prev_it_581=((void*)0);
        tail_it_582=((void*)0);
        i_583=0;
        while(it_580!=((void*)0)) {
            if(            i_583==head) {
                head_prev_it_581=it_580->prev;
            }
            if(            i_583==tail) {
                tail_it_582=it_580;
            }
            if(            i_583>=head&&i_583<tail) {
                prev_it_584=it_580;
                it_580=it_580->next;
                i_583++;
                come_call_finalizer3(prev_it_584,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_580=it_580->next;
                i_583++;
            }
        }
        if(        head_prev_it_581!=((void*)0)) {
            head_prev_it_581->next=tail_it_582;
        }
        if(        tail_it_582!=((void*)0)) {
            tail_it_582->prev=head_prev_it_581;
        }
    }
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_572;
struct list_item$1charp* prev_it_573;
struct list$1charp* __result318__;
    it_572=self->head;
    while(it_572!=((void*)0)) {
        prev_it_573=it_572;
        it_572=it_572->next;
        come_call_finalizer3(prev_it_573,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_586;
char* __result321__;
char* __result322__;
char* result_587;
char* __result323__;
result_586 = (void*)0;
result_587 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_586,0,sizeof(char*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_586;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->head;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_587,0,sizeof(char*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_587;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_589;
char* __result324__;
char* __result325__;
char* result_590;
char* __result326__;
result_589 = (void*)0;
result_590 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_589,0,sizeof(char*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_589;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_590,0,sizeof(char*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_590;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_598;
struct sType* __result329__;
struct sType* __result330__;
struct sType* result_599;
struct sType* __result331__;
result_598 = (void*)0;
result_599 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_598,0,sizeof(struct sType*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_598;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->it=self->head;
    if(    self->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_599,0,sizeof(struct sType*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_599;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_601;
struct sType* __result332__;
struct sType* __result333__;
struct sType* result_602;
struct sType* __result334__;
result_601 = (void*)0;
result_602 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_601,0,sizeof(struct sType*));
        __result332__ = gComeFunResultObject = __result_obj__ = result_601;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result333__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    memset(&result_602,0,sizeof(struct sType*));
    __result334__ = gComeFunResultObject = __result_obj__ = result_602;
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_616;
struct list$1sNodeph* __result337__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_616=0;    i_616<num_value;    i_616++    ){
        list$1sNodeph_push_back(self,values[i_616]);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static void list$1objectphp_operator_store_element(struct list$1objectph* self, int position, struct object* item){
    list$1objectph_replace(self,position,(struct object*)come_increment_ref_count(item));
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct list$1objectph* list$1objectph_replace(struct list$1objectph* self, int position, struct object* item){
void* __result_obj__=(void*)0;
int len_618;
int i_619;
struct object* default_value_620;
struct list$1objectph* __result338__;
struct list_item$1objectph* it_621;
int i_622;
struct object* __dec_obj361;
struct list$1objectph* __result339__;
default_value_620 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_618=self->len;
        for(        i_619=0;        i_619<position-len_618;        i_619++        ){
            memset(&default_value_620,0,sizeof(struct object*));
            list$1objectph_push_back(self,(struct object*)come_increment_ref_count(default_value_620));
            if(default_value_620) { default_value_620 = come_decrement_ref_count2(default_value_620, ((struct object*)default_value_620)->finalize, ((struct object*)default_value_620)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        list$1objectph_push_back(self,(struct object*)come_increment_ref_count(item));
        __result338__ = gComeFunResultObject = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    it_621=self->head;
    i_622=0;
    while(it_621!=((void*)0)) {
        if(        position==i_622) {
            __dec_obj361=it_621->item;
            it_621->item=(struct object*)come_increment_ref_count(item);
            if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct object*)__dec_obj361)->finalize, ((struct object*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
            break;
        }
        it_621=it_621->next;
        i_622++;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj464;
struct tuple1$1sTypeph* __dec_obj465;
struct tuple1$1sTypeph* __dec_obj466;
char* __dec_obj467;
char* __dec_obj468;
struct list$1objectph* __dec_obj469;
struct list$1sNodeph* __dec_obj470;
struct list$1sTypeph* __dec_obj471;
struct list$1charph* __dec_obj472;
struct tuple1$1sTypeph* __dec_obj473;
struct sNode* __dec_obj474;
struct tuple1$1sTypeph* __dec_obj475;
struct sNode* __dec_obj476;
char* __dec_obj477;
char* __dec_obj478;
char* __dec_obj479;
char* __dec_obj480;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj464=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj464,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj465=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj465,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj466=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj466,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj467=self->mInterfaceName;
            __dec_obj467 = come_decrement_ref_count2(__dec_obj467, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj468=self->mGenericsName;
            __dec_obj468 = come_decrement_ref_count2(__dec_obj468, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj469=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj469,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj470=self->mArrayNum;
            come_call_finalizer3(__dec_obj470,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj471=self->mParamTypes;
            come_call_finalizer3(__dec_obj471,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj472=self->mParamNames;
            come_call_finalizer3(__dec_obj472,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj473=self->mResultType;
            come_call_finalizer3(__dec_obj473,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj474=self->mAlignas;
            if(__dec_obj474) { __dec_obj474 = come_decrement_ref_count2(__dec_obj474, ((struct sNode*)__dec_obj474)->finalize, ((struct sNode*)__dec_obj474)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj475=self->mChannelType;
            come_call_finalizer3(__dec_obj475,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj476=self->mSizeNum;
            if(__dec_obj476) { __dec_obj476 = come_decrement_ref_count2(__dec_obj476, ((struct sNode*)__dec_obj476)->finalize, ((struct sNode*)__dec_obj476)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj477=self->mOriginalTypeName;
            __dec_obj477 = come_decrement_ref_count2(__dec_obj477, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj478=self->mAsmName;
            __dec_obj478 = come_decrement_ref_count2(__dec_obj478, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj479=self->mTupleName;
            __dec_obj479 = come_decrement_ref_count2(__dec_obj479, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj480=self->mAttribute;
            __dec_obj480 = come_decrement_ref_count2(__dec_obj480, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result346__;
void* __right_value755 = (void*)0;
struct sType* result_627;
void* __right_value756 = (void*)0;
struct tuple1$1sTypeph* __dec_obj481;
void* __right_value757 = (void*)0;
struct tuple1$1sTypeph* __dec_obj482;
void* __right_value758 = (void*)0;
struct tuple1$1sTypeph* __dec_obj483;
void* __right_value759 = (void*)0;
char* __dec_obj484;
void* __right_value760 = (void*)0;
char* __dec_obj485;
void* __right_value761 = (void*)0;
struct list$1objectph* __dec_obj486;
void* __right_value762 = (void*)0;
struct list$1sNodeph* __dec_obj487;
void* __right_value763 = (void*)0;
struct list$1sTypeph* __dec_obj488;
void* __right_value764 = (void*)0;
struct list$1charph* __dec_obj489;
void* __right_value765 = (void*)0;
struct tuple1$1sTypeph* __dec_obj490;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj491;
void* __right_value767 = (void*)0;
struct tuple1$1sTypeph* __dec_obj492;
void* __right_value768 = (void*)0;
struct sNode* __dec_obj493;
void* __right_value769 = (void*)0;
char* __dec_obj494;
void* __right_value770 = (void*)0;
char* __dec_obj495;
void* __right_value771 = (void*)0;
char* __dec_obj496;
void* __right_value772 = (void*)0;
char* __dec_obj497;
struct sType* __result347__;
    if(    self==(void*)0) {
        __result346__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    result_627=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_627->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj481=result_627->mNoSolvedGenericsType;
        result_627->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj481,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj482=result_627->mOriginalLoadVarType;
        result_627->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj482,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj483=result_627->mRefferenceOriginalType;
        result_627->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj483,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj484=result_627->mInterfaceName;
        result_627->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj484 = come_decrement_ref_count2(__dec_obj484, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj485=result_627->mGenericsName;
        result_627->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj485 = come_decrement_ref_count2(__dec_obj485, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj486=result_627->mGenericsTypes;
        result_627->mGenericsTypes=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj486,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj487=result_627->mArrayNum;
        result_627->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj487,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj488=result_627->mParamTypes;
        result_627->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj488,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj489=result_627->mParamNames;
        result_627->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj489,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj490=result_627->mResultType;
        result_627->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj490,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj491=result_627->mAlignas;
        result_627->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj491) { __dec_obj491 = come_decrement_ref_count2(__dec_obj491, ((struct sNode*)__dec_obj491)->finalize, ((struct sNode*)__dec_obj491)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj492=result_627->mChannelType;
        result_627->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj492,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_627->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_627->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_627->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_627->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_627->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_627->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_627->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_627->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_627->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_627->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_627->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_627->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_627->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_627->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_627->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_627->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_627->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_627->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_627->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_627->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_627->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_627->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_627->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_627->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_627->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj493=result_627->mSizeNum;
        result_627->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj493) { __dec_obj493 = come_decrement_ref_count2(__dec_obj493, ((struct sNode*)__dec_obj493)->finalize, ((struct sNode*)__dec_obj493)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_627->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj494=result_627->mOriginalTypeName;
        result_627->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj494 = come_decrement_ref_count2(__dec_obj494, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_627->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_627->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_627->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_627->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_627->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_627->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_627->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj495=result_627->mAsmName;
        result_627->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj495 = come_decrement_ref_count2(__dec_obj495, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_627->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_627->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_627->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_627->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_627->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj496=result_627->mTupleName;
        result_627->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj496 = come_decrement_ref_count2(__dec_obj496, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj497=result_627->mAttribute;
        result_627->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj497 = come_decrement_ref_count2(__dec_obj497, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result347__ = gComeFunResultObject = __result_obj__ = result_627;
    come_call_finalizer3(result_627,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

