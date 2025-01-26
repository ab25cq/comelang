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
struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNodeph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static void sType_finalize(struct sType* self);
static struct sType* sType_clone(struct sType* self);
struct sNode* expression_node_v96(struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_none(struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj33;
struct sStrNode* __result207__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sStrNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* come_value_266;
void* __right_value254 = (void*)0;
char* __dec_obj36;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sType* __dec_obj37;
_Bool __result210__;
    come_value_266=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))));
    __dec_obj36=come_value_266->c_value;
    come_value_266->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj37=come_value_266->type;
    come_value_266->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_266->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_266));
    add_come_last_code(info,"%s",come_value_266->c_value);
    __result210__ = (_Bool)1;
    come_call_finalizer3(come_value_266,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result210__;
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

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_267;
struct list_item$1objectph* prev_it_268;
    it_267=self->head;
    while(it_267!=((void*)0)) {
        prev_it_268=it_267;
        it_267=it_267->next;
        come_call_finalizer3(prev_it_268,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct object*)__dec_obj47)->finalize, ((struct object*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_269;
struct list_item$1objectph* prev_it_270;
    it_269=self->head;
    while(it_269!=((void*)0)) {
        prev_it_270=it_269;
        it_269=it_269->next;
        come_call_finalizer3(prev_it_270,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_271;
struct list_item$1sNodeph* prev_it_272;
    it_271=self->head;
    while(it_271!=((void*)0)) {
        prev_it_272=it_271;
        it_271=it_271->next;
        come_call_finalizer3(prev_it_272,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_273;
struct list_item$1sNodeph* prev_it_274;
    it_273=self->head;
    while(it_273!=((void*)0)) {
        prev_it_274=it_273;
        it_273=it_273->next;
        come_call_finalizer3(prev_it_274,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_275;
struct list_item$1sTypeph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        come_call_finalizer3(prev_it_276,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj51;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj51=self->item;
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_277;
struct list_item$1sTypeph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        come_call_finalizer3(prev_it_278,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_279;
struct list_item$1charph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        come_call_finalizer3(prev_it_280,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
struct list_item$1CVALUEph* litem_281;
struct CVALUE* __dec_obj63;
void* __right_value258 = (void*)0;
struct list_item$1CVALUEph* litem_282;
struct CVALUE* __dec_obj67;
void* __right_value259 = (void*)0;
struct list_item$1CVALUEph* litem_283;
struct CVALUE* __dec_obj68;
struct list$1CVALUEph* __result209__;
    if(    self->len==0) {
        litem_281=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value257=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_281->prev=((void*)0);
        litem_281->next=((void*)0);
        __dec_obj63=litem_281->item;
        litem_281->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_281;
        self->head=litem_281;
    }
    else if(    self->len==1) {
        litem_282=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value258=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_282->prev=self->head;
        litem_282->next=((void*)0);
        __dec_obj67=litem_282->item;
        litem_282->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head->next=litem_282;
    }
    else {
        litem_283=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value259=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_283->prev=self->tail;
        litem_283->next=((void*)0);
        __dec_obj68=litem_283->item;
        litem_283->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_283;
        self->tail=litem_283;
    }
    self->len++;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj64;
struct sType* __dec_obj65;
char* __dec_obj66;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj64=self->c_value;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj65=self->type;
            come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj66=self->c_value_without_right_value_objects;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct buffer* __dec_obj69;
struct sBufferNode* __result211__;
    ((struct sNodeBase*)(__right_value260=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value260,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj69=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj69,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
char* __result212__;
    __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string("sBufferNode")));
    __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_284;
unsigned long  int size_285;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_286;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* buf_287;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* type2_288;
void* __right_value269 = (void*)0;
char* __dec_obj72;
void* __right_value316 = (void*)0;
struct sType* __dec_obj104;
_Bool __result236__;
    value_284=(struct buffer*)come_increment_ref_count(self->value);
    size_285=self->size;
    come_value_286=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "CVALUE"))));
    buf_287=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "buffer"))));
    buffer_append_format(buf_287,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s, %ld)",info->sname,info->sline,((char*)(__right_value266=buffer_to_string(value_284))),size_285);
    __right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type2_288=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 60, "sType")),"buffer*",(_Bool)0,info));
    type2_288->mHeap=(_Bool)1;
    __dec_obj72=come_value_286->c_value;
    come_value_286->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_287));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj104=come_value_286->type;
    come_value_286->type=(struct sType*)come_increment_ref_count(sType_clone(type2_288));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_286->var=((void*)0);
    append_object_to_right_values2(come_value_286,(struct sType*)come_increment_ref_count(type2_288),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_286));
    add_come_last_code(info,"%s",come_value_286->c_value);
    __result236__ = (_Bool)1;
    come_call_finalizer3(value_284,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_286,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_287,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_288,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result236__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result214__;
void* __right_value271 = (void*)0;
struct tuple1$1sTypeph* result_290;
void* __right_value272 = (void*)0;
struct sType* __dec_obj73;
struct tuple1$1sTypeph* __result215__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_290=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj73=result_290->v1;
        result_290->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_290;
    come_call_finalizer3(result_290,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj74;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj74=self->v1;
            come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result216__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1objectph* result_291;
struct list_item$1objectph* it_292;
void* __right_value284 = (void*)0;
struct list$1objectph* __result221__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_291=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_292=self->head;
    while(it_292!=((void*)0)) {
        list$1objectph_add(result_291,(struct object*)come_increment_ref_count(object_clone(it_292->item)));
        it_292=it_292->next;
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value280 = (void*)0;
struct list_item$1objectph* litem_293;
struct object* __dec_obj80;
void* __right_value281 = (void*)0;
struct list_item$1objectph* litem_294;
struct object* __dec_obj81;
void* __right_value282 = (void*)0;
struct list_item$1objectph* litem_295;
struct object* __dec_obj82;
struct list$1objectph* __result218__;
    if(    self->len==0) {
        litem_293=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value280=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_293->prev=((void*)0);
        litem_293->next=((void*)0);
        __dec_obj80=litem_293->item;
        litem_293->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct object*)__dec_obj80)->finalize, ((struct object*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_293;
        self->head=litem_293;
    }
    else if(    self->len==1) {
        litem_294=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value281=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_294->prev=self->head;
        litem_294->next=((void*)0);
        __dec_obj81=litem_294->item;
        litem_294->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct object*)__dec_obj81)->finalize, ((struct object*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_294;
        self->head->next=litem_294;
    }
    else {
        litem_295=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value282=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_295->prev=self->tail;
        litem_295->next=((void*)0);
        __dec_obj82=litem_295->item;
        litem_295->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct object*)__dec_obj82)->finalize, ((struct object*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_295;
        self->tail=litem_295;
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
void* __right_value283 = (void*)0;
struct object* result_296;
struct object* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_296=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_296->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_296->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_296->clone=self->clone;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_296;
    if(result_296) { result_296 = come_decrement_ref_count2(result_296, ((struct object*)result_296)->finalize, ((struct object*)result_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result222__;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sNodeph* result_297;
struct list_item$1sNodeph* it_298;
void* __right_value292 = (void*)0;
struct list$1sNodeph* __result227__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_297=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_298=self->head;
    while(it_298!=((void*)0)) {
        list$1sNodeph_add(result_297,(struct sNode*)come_increment_ref_count(sNode_clone(it_298->item)));
        it_298=it_298->next;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_297;
    come_call_finalizer3(result_297,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value288 = (void*)0;
struct list_item$1sNodeph* litem_299;
struct sNode* __dec_obj84;
void* __right_value289 = (void*)0;
struct list_item$1sNodeph* litem_300;
struct sNode* __dec_obj85;
void* __right_value290 = (void*)0;
struct list_item$1sNodeph* litem_301;
struct sNode* __dec_obj86;
struct list$1sNodeph* __result224__;
    if(    self->len==0) {
        litem_299=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value288=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj84=litem_299->item;
        litem_299->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value289=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj85=litem_300->item;
        litem_300->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value290=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj86=litem_301->item;
        litem_301->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_301;
        self->tail=litem_301;
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
void* __right_value291 = (void*)0;
struct sNode* result_302;
struct sNode* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_302=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_302->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_302->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_302->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_302->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_302->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_302->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_302->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_302->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_302->kind=self->kind;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_302;
    if(result_302) { result_302 = come_decrement_ref_count2(result_302, ((struct sNode*)result_302)->finalize, ((struct sNode*)result_302)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result228__;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sTypeph* result_303;
struct list_item$1sTypeph* it_304;
void* __right_value299 = (void*)0;
struct list$1sTypeph* __result231__;
    if(    self==((void*)0)) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    result_303=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        list$1sTypeph_add(result_303,(struct sType*)come_increment_ref_count(sType_clone(it_304->item)));
        it_304=it_304->next;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(result_303,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value296 = (void*)0;
struct list_item$1sTypeph* litem_305;
struct sType* __dec_obj88;
void* __right_value297 = (void*)0;
struct list_item$1sTypeph* litem_306;
struct sType* __dec_obj89;
void* __right_value298 = (void*)0;
struct list_item$1sTypeph* litem_307;
struct sType* __dec_obj90;
struct list$1sTypeph* __result230__;
    if(    self->len==0) {
        litem_305=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value296=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj88=litem_305->item;
        litem_305->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value297=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj89=litem_306->item;
        litem_306->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value298=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj90=litem_307->item;
        litem_307->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
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
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* result_308;
struct list_item$1charph* it_309;
void* __right_value306 = (void*)0;
struct list$1charph* __result234__;
    if(    self==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_308=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_309=self->head;
    while(it_309!=((void*)0)) {
        list$1charph_add(result_308,(char*)come_increment_ref_count(string_clone(it_309->item)));
        it_309=it_309->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_308;
    come_call_finalizer3(result_308,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct list_item$1charph* litem_310;
char* __dec_obj92;
void* __right_value304 = (void*)0;
struct list_item$1charph* litem_311;
char* __dec_obj93;
void* __right_value305 = (void*)0;
struct list_item$1charph* litem_312;
char* __dec_obj94;
struct list$1charph* __result233__;
    if(    self->len==0) {
        litem_310=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value303=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_310->prev=((void*)0);
        litem_310->next=((void*)0);
        __dec_obj92=litem_310->item;
        litem_310->item=(char*)come_increment_ref_count(item);
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_310;
        self->head=litem_310;
    }
    else if(    self->len==1) {
        litem_311=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value304=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_311->prev=self->head;
        litem_311->next=((void*)0);
        __dec_obj93=litem_311->item;
        litem_311->item=(char*)come_increment_ref_count(item);
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_311;
        self->head->next=litem_311;
    }
    else {
        litem_312=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_312->prev=self->tail;
        litem_312->next=((void*)0);
        __dec_obj94=litem_312->item;
        litem_312->item=(char*)come_increment_ref_count(item);
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_312;
        self->tail=litem_312;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* __dec_obj105;
void* __right_value319 = (void*)0;
struct list$1sNodeph* __dec_obj106;
struct sSStringNode* __result237__;
    ((struct sNodeBase*)(__right_value317=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value317,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(exps));
    come_call_finalizer3(__dec_obj106,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value320=__builtin_string("sSStringNode")));
    __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* come_value_313;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct buffer* buf_314;
struct list$1sNodeph* o2_saved_315;
struct sNode* it_318;
void* __right_value325 = (void*)0;
struct sNode* obj_321;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_322;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* node_328;
_Bool Value_329;
_Bool __result248__;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_330;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* type2_331;
void* __right_value339 = (void*)0;
char* __dec_obj124;
void* __right_value340 = (void*)0;
struct sType* __dec_obj125;
_Bool __result249__;
    come_value_313=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 94, "CVALUE"))));
    buf_314=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 96, "buffer"))));
    buffer_append_str(buf_314,"xsprintf(\"");
    buffer_append_str(buf_314,self->value);
    buffer_append_str(buf_314,"\"");
    if(    list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_315=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_318=list$1sNodeph_begin((o2_saved_315));        !list$1sNodeph_end((o2_saved_315));        it_318=list$1sNodeph_next((o2_saved_315))        ){
            obj_321=(struct sNode*)come_increment_ref_count(sNode_clone(it_318));
            params_322=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 106, "list$1tuple2$2charphsNodephph"))));
            list$1tuple2$2charphsNodephph_add(params_322,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 107, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it_318)))));
            node_328=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_321),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_322),((void*)0),0,((void*)0),info));
            Value_329=node_compile(node_328,info);
            if(            !Value_329) {
                __result248__ = (_Bool)0;
                if(obj_321) { obj_321 = come_decrement_ref_count2(obj_321, ((struct sNode*)obj_321)->finalize, ((struct sNode*)obj_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_322,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_313,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result248__;
            }
            else {
            }
            come_value_330=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_314,",");
            buffer_append_str(buf_314,come_value_330->c_value);
            if(obj_321) { obj_321 = come_decrement_ref_count2(obj_321, ((struct sNode*)obj_321)->finalize, ((struct sNode*)obj_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_322,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_330,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_314,")");
    type2_331=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 125, "sType")),"char*",(_Bool)0,info));
    type2_331->mHeap=(_Bool)1;
    __dec_obj124=come_value_313->c_value;
    come_value_313->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_314));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj125=come_value_313->type;
    come_value_313->type=(struct sType*)come_increment_ref_count(sType_clone(type2_331));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_313->var=((void*)0);
    append_object_to_right_values2(come_value_313,(struct sType*)come_increment_ref_count(type2_331),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_313));
    add_come_last_code(info,"%s",come_value_313->c_value);
    __result249__ = (_Bool)1;
    come_call_finalizer3(come_value_313,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_331,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct sNode* result_316;
struct sNode* __result239__;
struct sNode* __result240__;
struct sNode* result_317;
struct sNode* __result241__;
result_316 = (void*)0;
result_317 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_316,0,sizeof(struct sNode*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_316;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->it=self->head;
    if(    self->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_317,0,sizeof(struct sNode*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_317;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_319;
struct sNode* __result242__;
struct sNode* __result243__;
struct sNode* result_320;
struct sNode* __result244__;
result_319 = (void*)0;
result_320 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_319,0,sizeof(struct sNode*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_319;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_320,0,sizeof(struct sNode*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_320;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result245__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_323;
struct list_item$1tuple2$2charphsNodephph* prev_it_324;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        come_call_finalizer3(prev_it_324,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj110;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj110=self->item;
            come_call_finalizer3(__dec_obj110,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_325;
struct tuple2$2charphsNodeph* __dec_obj113;
void* __right_value329 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_326;
struct tuple2$2charphsNodeph* __dec_obj116;
void* __right_value330 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_327;
struct tuple2$2charphsNodeph* __dec_obj119;
struct list$1tuple2$2charphsNodephph* __result246__;
    if(    self->len==0) {
        litem_325=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value328=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2charphsNodephph"))));
        litem_325->prev=((void*)0);
        litem_325->next=((void*)0);
        __dec_obj113=litem_325->item;
        litem_325->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_325;
        self->head=litem_325;
    }
    else if(    self->len==1) {
        litem_326=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value329=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2charphsNodephph"))));
        litem_326->prev=self->head;
        litem_326->next=((void*)0);
        __dec_obj116=litem_326->item;
        litem_326->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_326;
        self->head->next=litem_326;
    }
    else {
        litem_327=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value330=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2charphsNodephph"))));
        litem_327->prev=self->tail;
        litem_327->next=((void*)0);
        __dec_obj119=litem_327->item;
        litem_327->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_327;
        self->tail=litem_327;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj122;
struct sNode* __dec_obj123;
struct tuple2$2charphsNodeph* __result247__;
    __dec_obj122=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj123=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
struct sCharNode* __result250__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sCharNode")));
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_332;
void* __right_value345 = (void*)0;
char* __dec_obj127;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj128;
_Bool __result252__;
    come_value_332=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 158, "CVALUE"))));
    __dec_obj127=come_value_332->c_value;
    come_value_332->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj128=come_value_332->type;
    come_value_332->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 161, "sType")),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_332->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_332));
    add_come_last_code(info,"%s",come_value_332->c_value);
    __result252__ = (_Bool)1;
    come_call_finalizer3(come_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result252__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct sWCharNode* __result253__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result254__;
    __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sWCharNode")));
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_333;
void* __right_value352 = (void*)0;
char* __dec_obj130;
void* __right_value353 = (void*)0;
char* __dec_obj131;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __dec_obj132;
_Bool __result255__;
    come_value_333=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 189, "CVALUE"))));
    if(    self->quote) {
        __dec_obj130=come_value_333->c_value;
        come_value_333->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj131=come_value_333->c_value;
        come_value_333->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj132=come_value_333->type;
    come_value_333->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 197, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_333->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_333));
    add_come_last_code(info,"%s",come_value_333->c_value);
    __result255__ = (_Bool)1;
    come_call_finalizer3(come_value_333,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result255__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
int* __dec_obj133;
struct sWStringNode* __result256__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj133=self->value;
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result257__;
    __result257__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sWStringNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_334;
void* __right_value360 = (void*)0;
char* __dec_obj136;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj137;
_Bool __result258__;
    come_value_334=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 224, "CVALUE"))));
    __dec_obj136=come_value_334->c_value;
    come_value_334->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj137=come_value_334->type;
    come_value_334->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 227, "sType")),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_334->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_334));
    add_come_last_code(info,"%s",come_value_334->c_value);
    __result258__ = (_Bool)1;
    come_call_finalizer3(come_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result258__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* __dec_obj138;
struct sRegexNode* __result259__;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value363,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj138=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result260__;
    __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sRegexNode")));
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value371 = (void*)0;
struct sNode* obj_node_335;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_337;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
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
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* node_338;
_Bool Value_339;
_Bool __result263__;
_Bool __result264__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 256, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value367=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 256, "sStrNode")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_335=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value367,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_337=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 258, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 260, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_335))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 261, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 262, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 263, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 264, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 265, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 266, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 267, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_337,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 268, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_338=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_335),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_337),((void*)0),info->sline,((void*)0),info));
    Value_339=node_compile(node_338,info);
    if(    !Value_339) {
        __result263__ = (_Bool)0;
        if(obj_node_335) { obj_node_335 = come_decrement_ref_count2(obj_node_335, ((struct sNode*)obj_node_335)->finalize, ((struct sNode*)obj_node_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_337,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_338) { node_338 = come_decrement_ref_count2(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result263__;
    }
    else {
    }
    __result264__ = (_Bool)1;
    if(obj_node_335) { obj_node_335 = come_decrement_ref_count2(obj_node_335, ((struct sNode*)obj_node_335)->finalize, ((struct sNode*)obj_node_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params_337,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_338) { node_338 = come_decrement_ref_count2(node_338, ((struct sNode*)node_338)->finalize, ((struct sNode*)node_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result264__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj139;
char* __dec_obj140;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj140=self->str;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
struct list$1sNodeph* __dec_obj145;
struct sListNode* __result265__;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value410,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj145=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj145,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result266__;
    __result266__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sListNode")));
    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_340;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1CVALUEph* params_341;
struct sType* list_element_type_344;
int n_345;
struct list$1sNodeph* o2_saved_346;
struct sNode* it_347;
void* __right_value414 = (void*)0;
_Bool _if_conditional1;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* value_node_348;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_349;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* exp_350;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj149;
_Bool Value_351;
_Bool __result268__;
_Bool Value_352;
_Bool __result269__;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_353;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __dec_obj150;
void* __right_value432 = (void*)0;
struct sType* type_values_354;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
char* var_name_359;
void* __right_value438 = (void*)0;
struct sVar* var__360;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* source_361;
int i_362;
struct list$1CVALUEph* o2_saved_363;
struct CVALUE* it_366;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* c_value_369;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sType* list_type_373;
void* __right_value451 = (void*)0;
struct object* _inf_value2;
struct sType* _inf_obj_value2;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* obj_type_378;
char* fun_name_379;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* generics_fun_name_380;
void* __right_value475 = (void*)0;
struct sFun* fun_381;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* __dec_obj208;
void* __right_value478 = (void*)0;
_Bool __result286__;
void* __right_value479 = (void*)0;
struct sType* result_type_384;
struct sType* type_385;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct CVALUE* obj_value_386;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct buffer* num_string_387;
void* __right_value484 = (void*)0;
struct sType* type2_388;
void* __right_value485 = (void*)0;
char* type_name_389;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
char* __dec_obj209;
void* __right_value488 = (void*)0;
struct sType* type3_390;
void* __right_value489 = (void*)0;
struct sType* __dec_obj210;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct list$1CVALUEph* come_params_391;
void* __right_value492 = (void*)0;
_Bool _if_conditional2;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct CVALUE* come_value2_395;
void* __right_value496 = (void*)0;
char* __dec_obj211;
struct sType* __dec_obj212;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct CVALUE* come_value3_396;
void* __right_value499 = (void*)0;
char* __dec_obj213;
struct sType* __dec_obj214;
int j_397;
struct list$1CVALUEph* o2_saved_398;
struct CVALUE* it_399;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct CVALUE* come_value4_400;
void* __right_value502 = (void*)0;
char* __dec_obj215;
void* __right_value503 = (void*)0;
struct sType* __dec_obj216;
_Bool __result289__;
    list_elements_340=self->list_elements;
    params_341=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 300, "list$1CVALUEph"))));
    list_element_type_344=((void*)0);
    n_345=0;
    for(    o2_saved_346=(list_elements_340),it_347=list$1sNodeph_begin((o2_saved_346));    !list$1sNodeph_end((o2_saved_346));    it_347=list$1sNodeph_next((o2_saved_346))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value414=it_347->kind(it_347->_protocol_obj))),"sWildCard"))),        (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            value_node_348=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value415=xsprintf("Value"))),info));
            __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_349=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 308, "list$1tuple2$2charphsNodephph"))));
            list$1tuple2$2charphsNodephph_add(params_349,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 309, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_348))));
            list$1tuple2$2charphsNodephph_add(params_349,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 310, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_345,info)))));
            exp_350=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value426=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_348),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_349),((void*)0),0,((void*)0),info));
            __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj149=exp_350;
            exp_350=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_350,info));
            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
            Value_351=node_compile(exp_350,info);
            if(            !Value_351) {
                __result268__ = (_Bool)0;
                if(value_node_348) { value_node_348 = come_decrement_ref_count2(value_node_348, ((struct sNode*)value_node_348)->finalize, ((struct sNode*)value_node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_349,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_350) { exp_350 = come_decrement_ref_count2(exp_350, ((struct sNode*)exp_350)->finalize, ((struct sNode*)exp_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_341,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result268__;
            }
            else {
            }
            if(value_node_348) { value_node_348 = come_decrement_ref_count2(value_node_348, ((struct sNode*)value_node_348)->finalize, ((struct sNode*)value_node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_349,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_350) { exp_350 = come_decrement_ref_count2(exp_350, ((struct sNode*)exp_350)->finalize, ((struct sNode*)exp_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_352=node_compile(it_347,info);
            if(            !Value_352) {
                __result269__ = (_Bool)0;
                come_call_finalizer3(params_341,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result269__;
            }
            else {
            }
        }
        come_value_353=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_344) {
            check_assign_type(((char*)(__right_value430=xsprintf("invalid list element type"))),list_element_type_344,come_value_353->type,come_value_353,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_341,(struct CVALUE*)come_increment_ref_count(come_value_353));
        __dec_obj150=list_element_type_344;
        list_element_type_344=(struct sType*)come_increment_ref_count(sType_clone(come_value_353->type));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_345++;
        come_call_finalizer3(come_value_353,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_354=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_344));
    list$1sNodeph_push_back(type_values_354->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(params_341),info)));
    type_values_354->mHeap=(_Bool)0;
    static int list_value_num_358=0;
    var_name_359=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_358));
    add_variable_to_table(var_name_359,(struct sType*)come_increment_ref_count(sType_clone(type_values_354)),info);
    var__360=get_variable_from_table(info->lv_table,var_name_359);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value439=make_define_var(type_values_354,var__360->mCValueName,(_Bool)0,info))));
    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_361=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 351, "buffer"))));
    buffer_append_str(source_361,"(");
    i_362=0;
    for(    o2_saved_363=(struct list$1CVALUEph*)come_increment_ref_count((params_341)),it_366=list$1CVALUEph_begin((o2_saved_363));    !list$1CVALUEph_end((o2_saved_363));    it_366=list$1CVALUEph_next((o2_saved_363))    ){
        if(        list_element_type_344->mHeap) {
            c_value_369=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value442=list$1CVALUEphp_operator_load_element(params_341,i_362))), "06str.c", 358, 0))->type,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value443=list$1CVALUEphp_operator_load_element(params_341,i_362))), "06str.c", 358, 1))->c_value,info));
            come_call_finalizer3(__right_value442,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value443,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_361,"%s[%d]=%s,\n",var__360->mCValueName,i_362,c_value_369);
            c_value_369 = come_decrement_ref_count2(c_value_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_361,"%s[%d]=%s,\n",var__360->mCValueName,i_362,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value445=list$1CVALUEphp_operator_load_element(params_341,i_362))), "06str.c", 362, 2))->c_value);
            come_call_finalizer3(__right_value445,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_362++;
    }
    come_call_finalizer3(o2_saved_363,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_373=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 371, "sType")),"list",(_Bool)0,info));
    _inf_value2=(struct object*)come_calloc(1, sizeof(struct object), "06str.c", 372, "struct object");
    _inf_obj_value2=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value451=sType_clone(list_element_type_344)))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sType_finalize;
    _inf_value2->clone=(void*)sType_clone;
    list$1objectph_push_back(list_type_373->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value2));
    come_call_finalizer3(__right_value451,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_378=(struct sType*)come_increment_ref_count(sType_clone(list_type_373));
    fun_name_379="initialize_with_values";
    generics_fun_name_380=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value473=make_generics_function(obj_type_378,(char*)come_increment_ref_count(__builtin_string(fun_name_379)),info,(_Bool)1)))));
    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_381=((struct sFun*)(__right_value475=map$2charphsFunph_at(info->funcs,generics_fun_name_380,((void*)0))));
    come_call_finalizer3(__right_value475,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_381==((void*)0)) {
        __dec_obj208=generics_fun_name_380;
        generics_fun_name_380=(char*)come_increment_ref_count(create_method_name(obj_type_378,(_Bool)0,((char*)(__right_value476=__builtin_string(fun_name_379))),info,(_Bool)1));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_381=((struct sFun*)(__right_value478=map$2charphsFunph_at(info->funcs,generics_fun_name_380,((void*)0))));
        come_call_finalizer3(__right_value478,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_381==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_380,info->come_fun->mName);
            __result286__ = (_Bool)1;
            come_call_finalizer3(params_341,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_354,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_359 = come_decrement_ref_count2(var_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_361,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_380 = come_decrement_ref_count2(generics_fun_name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result286__;
        }
    }
    result_type_384=(struct sType*)come_increment_ref_count(sType_clone(fun_381->mResultType));
    result_type_384->mStatic=(_Bool)0;
    type_385=list_type_373;
    obj_value_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 397, "CVALUE"))));
    num_string_387=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 399, "buffer"))));
    buffer_append_str(num_string_387,"1");
    type2_388=(struct sType*)come_increment_ref_count(solve_generics(type_385,type_385,info));
    type_name_389=(char*)come_increment_ref_count(make_type_name_string(type2_388,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj209=obj_value_386->c_value;
    obj_value_386->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_389,type_name_389,((char*)(__right_value486=buffer_to_string(num_string_387))),info->sname,info->sline,type_name_389));
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_390=(struct sType*)come_increment_ref_count(sType_clone(type2_388));
    type3_390->mPointerNum++;
    type3_390->mHeap=(_Bool)1;
    type2_388->mHeap=(_Bool)1;
    __dec_obj210=obj_value_386->type;
    obj_value_386->type=(struct sType*)come_increment_ref_count(sType_clone(type2_388));
    come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_386->type->mPointerNum++;
    obj_value_386->var=((void*)0);
    append_object_to_right_values2(obj_value_386,(struct sType*)come_increment_ref_count(type3_390),info,(_Bool)0);
    come_params_391=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 419, "list$1CVALUEph"))));
    if(    (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value492=list$1sTypephp_operator_load_element(fun_381->mParamTypes,0))), "06str.c", 421, 3))->mHeap&&obj_value_386->type->mHeap)),    come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value493=list$1sTypephp_operator_load_element(fun_381->mParamTypes,0))), "06str.c", 422, 4)),obj_value_386->type,obj_value_386,info,(_Bool)1);
        come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_391,(struct CVALUE*)come_increment_ref_count(obj_value_386));
    come_value2_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 426, "CVALUE"))));
    __dec_obj211=come_value2_395->c_value;
    come_value2_395->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_341)));
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj212=come_value2_395->type;
    come_value2_395->type=((void*)0);
    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_395->var=((void*)0);
    list$1CVALUEph_push_back(come_params_391,(struct CVALUE*)come_increment_ref_count(come_value2_395));
    come_value3_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 434, "CVALUE"))));
    __dec_obj213=come_value3_396->c_value;
    come_value3_396->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__360->mCValueName));
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj214=come_value3_396->type;
    come_value3_396->type=((void*)0);
    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_396->var=((void*)0);
    list$1CVALUEph_push_back(come_params_391,(struct CVALUE*)come_increment_ref_count(come_value3_396));
    buffer_append_str(source_361,generics_fun_name_380);
    buffer_append_str(source_361,"(");
    j_397=0;
    for(    o2_saved_398=(struct list$1CVALUEph*)come_increment_ref_count((come_params_391)),it_399=list$1CVALUEph_begin((o2_saved_398));    !list$1CVALUEph_end((o2_saved_398));    it_399=list$1CVALUEph_next((o2_saved_398))    ){
        buffer_append_str(source_361,it_399->c_value);
        if(        j_397!=list$1CVALUEph_length(come_params_391)-1) {
            buffer_append_str(source_361,",");
        }
        j_397++;
    }
    come_call_finalizer3(o2_saved_398,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_361,")");
    buffer_append_str(source_361,")");
    come_value4_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 460, "CVALUE"))));
    __dec_obj215=come_value4_400->c_value;
    come_value4_400->c_value=(char*)come_increment_ref_count(buffer_to_string(source_361));
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj216=come_value4_400->type;
    come_value4_400->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_384));
    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_400->type->mStatic=(_Bool)0;
    come_value4_400->var=((void*)0);
    if(    result_type_384->mHeap) {
        append_object_to_right_values2(come_value4_400,(struct sType*)come_increment_ref_count(result_type_384),info,(_Bool)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_400));
    add_come_last_code(info,"%s",come_value4_400->c_value);
    __result289__ = (_Bool)1;
    come_call_finalizer3(params_341,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_354,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_359 = come_decrement_ref_count2(var_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_361,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_380 = come_decrement_ref_count2(generics_fun_name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_384,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_389 = come_decrement_ref_count2(type_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_390,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_391,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result289__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result267__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_342;
struct list_item$1CVALUEph* prev_it_343;
    it_342=self->head;
    while(it_342!=((void*)0)) {
        prev_it_343=it_342;
        it_342=it_342->next;
        come_call_finalizer3(prev_it_343,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj148;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj148=self->item;
            come_call_finalizer3(__dec_obj148,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
struct list_item$1sNodeph* litem_355;
struct sNode* __dec_obj151;
void* __right_value434 = (void*)0;
struct list_item$1sNodeph* litem_356;
struct sNode* __dec_obj152;
void* __right_value435 = (void*)0;
struct list_item$1sNodeph* litem_357;
struct sNode* __dec_obj153;
struct list$1sNodeph* __result270__;
    if(    self->len==0) {
        litem_355=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value433=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sNodeph"))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj151=litem_355->item;
        litem_355->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_355;
        self->head=litem_355;
    }
    else if(    self->len==1) {
        litem_356=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value434=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sNodeph"))));
        litem_356->prev=self->head;
        litem_356->next=((void*)0);
        __dec_obj152=litem_356->item;
        litem_356->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_356;
        self->head->next=litem_356;
    }
    else {
        litem_357=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value435=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sNodeph"))));
        litem_357->prev=self->tail;
        litem_357->next=((void*)0);
        __dec_obj153=litem_357->item;
        litem_357->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_357;
        self->tail=litem_357;
    }
    self->len++;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_364;
struct CVALUE* __result271__;
struct CVALUE* __result272__;
struct CVALUE* result_365;
struct CVALUE* __result273__;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_364,0,sizeof(struct CVALUE*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_364;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->it=self->head;
    if(    self->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_365,0,sizeof(struct CVALUE*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_365;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_367;
struct CVALUE* __result274__;
struct CVALUE* __result275__;
struct CVALUE* result_368;
struct CVALUE* __result276__;
result_367 = (void*)0;
result_368 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_367,0,sizeof(struct CVALUE*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_367;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_368,0,sizeof(struct CVALUE*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_368;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_370;
int i_371;
struct CVALUE* __result277__;
struct CVALUE* default_value_372;
struct CVALUE* __result278__;
default_value_372 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_370=self->head;
    i_371=0;
    while(it_370!=((void*)0)) {
        if(        position==i_371) {
            __result277__ = gComeFunResultObject = __result_obj__ = it_370->item;
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
        it_370=it_370->next;
        i_371++;
    }
    memset(&default_value_372,0,sizeof(struct CVALUE*));
    __result278__ = gComeFunResultObject = __result_obj__ = default_value_372;
    come_call_finalizer3(default_value_372,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1objectph* list$1objectph_push_back(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value448 = (void*)0;
struct list_item$1objectph* litem_374;
struct object* __dec_obj154;
void* __right_value449 = (void*)0;
struct list_item$1objectph* litem_375;
struct object* __dec_obj155;
void* __right_value450 = (void*)0;
struct list_item$1objectph* litem_376;
struct object* __dec_obj156;
struct list$1objectph* __result279__;
    if(    self->len==0) {
        litem_374=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value448=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1objectph"))));
        litem_374->prev=((void*)0);
        litem_374->next=((void*)0);
        __dec_obj154=litem_374->item;
        litem_374->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct object*)__dec_obj154)->finalize, ((struct object*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_374;
        self->head=litem_374;
    }
    else if(    self->len==1) {
        litem_375=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value449=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1objectph"))));
        litem_375->prev=self->head;
        litem_375->next=((void*)0);
        __dec_obj155=litem_375->item;
        litem_375->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct object*)__dec_obj155)->finalize, ((struct object*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_375;
        self->head->next=litem_375;
    }
    else {
        litem_376=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value450=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1objectph"))));
        litem_376->prev=self->tail;
        litem_376->next=((void*)0);
        __dec_obj156=litem_376->item;
        litem_376->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct object*)__dec_obj156)->finalize, ((struct object*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_376;
        self->tail=litem_376;
    }
    self->len++;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_382;
unsigned int it_383;
struct sFun* __result282__;
struct sFun* __result283__;
struct sFun* __result284__;
struct sFun* __result285__;
    hash_382=charp_get_hash_key(((char*)key))%self->size;
    it_383=hash_382;
    while((_Bool)1) {
        if(        self->item_existance[it_383]) {
            if(            charp_equals(self->keys[it_383],key)) {
                __result282__ = gComeFunResultObject = __result_obj__ = self->items[it_383];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result282__;
            }
            it_383++;
            if(            it_383>=self->size) {
                it_383=0;
            }
            else if(            it_383==hash_382) {
                __result283__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
        }
        else {
            __result284__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
    }
    __result285__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
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

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_392;
int i_393;
struct sType* __result287__;
struct sType* default_value_394;
struct sType* __result288__;
default_value_394 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_392=self->head;
    i_393=0;
    while(it_392!=((void*)0)) {
        if(        position==i_393) {
            __result287__ = gComeFunResultObject = __result_obj__ = it_392->item;
            gComeFunResultObject = (void*)0;
            return __result287__;
        }
        it_392=it_392->next;
        i_393++;
    }
    memset(&default_value_394,0,sizeof(struct sType*));
    __result288__ = gComeFunResultObject = __result_obj__ = default_value_394;
    come_call_finalizer3(default_value_394,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value504 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj217;
struct sTupleNode* __result290__;
    ((struct sNodeBase*)(__right_value504=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value504,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj217=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj217,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
char* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value505=__builtin_string("sTupleNode")));
    __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_403;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1sTypeph* tuple_types_404;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1CVALUEph* tuple_values_405;
int n_406;
struct list$1tuple2$2charphsNodephph* o2_saved_407;
struct tuple2$2charphsNodeph* it_410;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* name_413=0;
struct sNode* node_414=0;
void* __right_value510 = (void*)0;
_Bool _if_conditional3;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sNode* value_node_415;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sNode* exp_416;
_Bool Value_417;
_Bool __result298__;
_Bool Value_418;
_Bool __result299__;
void* __right_value515 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* type_421;
char* __dec_obj223;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* type_425;
struct list$1sTypeph* o2_saved_426;
struct sType* it_429;
void* __right_value528 = (void*)0;
struct object* _inf_value3;
struct sType* _inf_obj_value3;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* obj_value_433;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct buffer* num_string_434;
void* __right_value552 = (void*)0;
struct sType* type2_435;
void* __right_value553 = (void*)0;
char* type_name_436;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
char* __dec_obj261;
void* __right_value556 = (void*)0;
struct sType* type3_437;
void* __right_value557 = (void*)0;
struct sType* __dec_obj262;
void* __right_value558 = (void*)0;
struct sType* obj_type_438;
char* fun_name_439;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
char* generics_fun_name_440;
void* __right_value562 = (void*)0;
struct sFun* fun_441;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
char* __dec_obj263;
void* __right_value565 = (void*)0;
_Bool __result311__;
void* __right_value566 = (void*)0;
struct sType* result_type_442;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct list$1CVALUEph* come_params_443;
void* __right_value569 = (void*)0;
_Bool _if_conditional4;
void* __right_value570 = (void*)0;
int i_444;
struct list$1CVALUEph* o2_saved_445;
struct CVALUE* it_446;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
_Bool _if_conditional5;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct buffer* buf_448;
int j_449;
struct list$1CVALUEph* o2_saved_450;
struct CVALUE* it_451;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct CVALUE* come_value2_452;
void* __right_value579 = (void*)0;
char* __dec_obj264;
void* __right_value580 = (void*)0;
struct sType* __dec_obj265;
_Bool __result312__;
    tuple_elements_403=self->tuple_elements;
    tuple_types_404=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 497, "list$1sTypeph"))));
    tuple_values_405=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 498, "list$1CVALUEph"))));
    n_406=0;
    for(    o2_saved_407=(tuple_elements_403),it_410=list$1tuple2$2charphsNodephph_begin((o2_saved_407));    !list$1tuple2$2charphsNodephph_end((o2_saved_407));    it_410=list$1tuple2$2charphsNodephph_next((o2_saved_407))    ){
        multiple_assign_var1=it_410;
        name_413=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        node_414=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value510=node_414->kind(node_414->_protocol_obj))),"sWildCard"))),        (__right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            value_node_415=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value511=xsprintf("Value"))),info));
            __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_416=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_415),(char*)come_increment_ref_count(xsprintf("v%d",n_406+1)),info));
            Value_417=node_compile(exp_416,info);
            if(            !Value_417) {
                __result298__ = (_Bool)0;
                if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_416) { exp_416 = come_decrement_ref_count2(exp_416, ((struct sNode*)exp_416)->finalize, ((struct sNode*)exp_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
                name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result298__;
            }
            else {
            }
            if(value_node_415) { value_node_415 = come_decrement_ref_count2(value_node_415, ((struct sNode*)value_node_415)->finalize, ((struct sNode*)value_node_415)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_416) { exp_416 = come_decrement_ref_count2(exp_416, ((struct sNode*)exp_416)->finalize, ((struct sNode*)exp_416)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_418=node_compile(node_414,info);
            if(            !Value_418) {
                __result299__ = (_Bool)0;
                name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result299__;
            }
            else {
            }
        }
        come_value_419=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_405,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_419)));
        type_421=(struct sType*)come_increment_ref_count(sType_clone(come_value_419->type));
        __dec_obj223=type_421->mTupleName;
        type_421->mTupleName=(char*)come_increment_ref_count(name_413);
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1sTypeph_push_back(tuple_types_404,(struct sType*)come_increment_ref_count(type_421));
        n_406++;
        name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_414) { node_414 = come_decrement_ref_count2(node_414, ((struct sNode*)node_414)->finalize, ((struct sNode*)node_414)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_425=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 528, "sType")),((char*)(__right_value526=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_404)))),(_Bool)0,info));
    __right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_426=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_404)),it_429=list$1sTypeph_begin((o2_saved_426));    !list$1sTypeph_end((o2_saved_426));    it_429=list$1sTypeph_next((o2_saved_426))    ){
        _inf_value3=(struct object*)come_calloc(1, sizeof(struct object), "06str.c", 531, "struct object");
        _inf_obj_value3=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value528=sType_clone(it_429)))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sType_finalize;
        _inf_value3->clone=(void*)sType_clone;
        list$1objectph_push_back(type_425->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value3));
        come_call_finalizer3(__right_value528,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_426,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_433=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 534, "CVALUE"))));
    num_string_434=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 536, "buffer"))));
    buffer_append_str(num_string_434,"1");
    type2_435=(struct sType*)come_increment_ref_count(solve_generics(type_425,type_425,info));
    type_name_436=(char*)come_increment_ref_count(make_type_name_string(type2_435,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj261=obj_value_433->c_value;
    obj_value_433->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_436,type_name_436,((char*)(__right_value554=buffer_to_string(num_string_434))),info->sname,info->sline,type_name_436));
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_437=(struct sType*)come_increment_ref_count(sType_clone(type2_435));
    type3_437->mPointerNum++;
    type3_437->mHeap=(_Bool)1;
    type2_435->mHeap=(_Bool)1;
    __dec_obj262=obj_value_433->type;
    obj_value_433->type=(struct sType*)come_increment_ref_count(sType_clone(type2_435));
    come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_433->type->mPointerNum++;
    obj_value_433->var=((void*)0);
    append_object_to_right_values2(obj_value_433,(struct sType*)come_increment_ref_count(type3_437),info,(_Bool)0);
    obj_type_438=(struct sType*)come_increment_ref_count(sType_clone(type2_435));
    fun_name_439="initialize";
    generics_fun_name_440=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value560=make_generics_function(obj_type_438,(char*)come_increment_ref_count(__builtin_string(fun_name_439)),info,(_Bool)1)))));
    __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_441=((struct sFun*)(__right_value562=map$2charphsFunph_at(info->funcs,generics_fun_name_440,((void*)0))));
    come_call_finalizer3(__right_value562,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_441==((void*)0)) {
        __dec_obj263=generics_fun_name_440;
        generics_fun_name_440=(char*)come_increment_ref_count(create_method_name(obj_type_438,(_Bool)0,((char*)(__right_value563=__builtin_string(fun_name_439))),info,(_Bool)1));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_441=((struct sFun*)(__right_value565=map$2charphsFunph_at(info->funcs,generics_fun_name_440,((void*)0))));
        come_call_finalizer3(__right_value565,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_441==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_440,info->come_fun->mName);
            __result311__ = (_Bool)1;
            come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_433,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_434,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_435,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_437,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_440 = come_decrement_ref_count2(generics_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result311__;
        }
    }
    result_type_442=(struct sType*)come_increment_ref_count(sType_clone(fun_441->mResultType));
    result_type_442->mStatic=(_Bool)0;
    come_params_443=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 577, "list$1CVALUEph"))));
    if(    (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value569=list$1sTypephp_operator_load_element(fun_441->mParamTypes,0))), "06str.c", 579, 5))->mHeap&&obj_value_433->type->mHeap)),    come_call_finalizer3(__right_value569,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value570=list$1sTypephp_operator_load_element(fun_441->mParamTypes,0))), "06str.c", 580, 6)),obj_value_433->type,obj_value_433,info,(_Bool)1);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_443,(struct CVALUE*)come_increment_ref_count(obj_value_433));
    i_444=1;
    for(    o2_saved_445=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_405)),it_446=list$1CVALUEph_begin((o2_saved_445));    !list$1CVALUEph_end((o2_saved_445));    it_446=list$1CVALUEph_next((o2_saved_445))    ){
        come_value_447=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_446));
        if(        (_if_conditional5=(((struct sType*)come_null_check(((struct sType*)(__right_value572=list$1sTypephp_operator_load_element(fun_441->mParamTypes,i_444))), "06str.c", 588, 7))&&((struct sType*)come_null_check(((struct sType*)(__right_value573=list$1sTypephp_operator_load_element(fun_441->mParamTypes,i_444))), "06str.c", 588, 8))->mHeap&&come_value_447->type->mHeap)),        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional5) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value574=list$1sTypephp_operator_load_element(fun_441->mParamTypes,i_444))), "06str.c", 589, 9)),come_value_447->type,come_value_447,info,(_Bool)1);
            come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(come_params_443,(struct CVALUE*)come_increment_ref_count(come_value_447));
        i_444++;
        come_call_finalizer3(come_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_445,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_448=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 596, "buffer"))));
    buffer_append_str(buf_448,generics_fun_name_440);
    buffer_append_str(buf_448,"(");
    j_449=0;
    for(    o2_saved_450=(struct list$1CVALUEph*)come_increment_ref_count((come_params_443)),it_451=list$1CVALUEph_begin((o2_saved_450));    !list$1CVALUEph_end((o2_saved_450));    it_451=list$1CVALUEph_next((o2_saved_450))    ){
        buffer_append_str(buf_448,it_451->c_value);
        if(        j_449!=list$1CVALUEph_length(come_params_443)-1) {
            buffer_append_str(buf_448,",");
        }
        j_449++;
    }
    come_call_finalizer3(o2_saved_450,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_448,")");
    come_value2_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 613, "CVALUE"))));
    __dec_obj264=come_value2_452->c_value;
    come_value2_452->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_448));
    __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj265=come_value2_452->type;
    come_value2_452->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_442));
    come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_452->type->mStatic=(_Bool)0;
    come_value2_452->var=((void*)0);
    if(    result_type_442->mHeap) {
        append_object_to_right_values2(come_value2_452,(struct sType*)come_increment_ref_count(result_type_442),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_452->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_452));
    __result312__ = (_Bool)1;
    come_call_finalizer3(tuple_types_404,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_405,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_425,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_433,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_434,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_435,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_437,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_440 = come_decrement_ref_count2(generics_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_448,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result312__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_401;
struct list_item$1tuple2$2charphsNodephph* prev_it_402;
    it_401=self->head;
    while(it_401!=((void*)0)) {
        prev_it_402=it_401;
        it_401=it_401->next;
        come_call_finalizer3(prev_it_402,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_408;
struct tuple2$2charphsNodeph* __result292__;
struct tuple2$2charphsNodeph* __result293__;
struct tuple2$2charphsNodeph* result_409;
struct tuple2$2charphsNodeph* __result294__;
result_408 = (void*)0;
result_409 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_408,0,sizeof(struct tuple2$2charphsNodeph*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_408;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->head;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_409,0,sizeof(struct tuple2$2charphsNodeph*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_409;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_411;
struct tuple2$2charphsNodeph* __result295__;
struct tuple2$2charphsNodeph* __result296__;
struct tuple2$2charphsNodeph* result_412;
struct tuple2$2charphsNodeph* __result297__;
result_411 = (void*)0;
result_412 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_411,0,sizeof(struct tuple2$2charphsNodeph*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_411;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_412,0,sizeof(struct tuple2$2charphsNodeph*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_412;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result300__;
void* __right_value516 = (void*)0;
struct CVALUE* result_420;
void* __right_value517 = (void*)0;
char* __dec_obj220;
void* __right_value518 = (void*)0;
struct sType* __dec_obj221;
void* __right_value519 = (void*)0;
char* __dec_obj222;
struct CVALUE* __result301__;
    if(    self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_420=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj220=result_420->c_value;
        result_420->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj221=result_420->type;
        result_420->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_420->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj222=result_420->c_value_without_right_value_objects;
        result_420->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result301__ = gComeFunResultObject = __result_obj__ = result_420;
    come_call_finalizer3(result_420,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value522 = (void*)0;
struct list_item$1sTypeph* litem_422;
struct sType* __dec_obj224;
void* __right_value523 = (void*)0;
struct list_item$1sTypeph* litem_423;
struct sType* __dec_obj225;
void* __right_value524 = (void*)0;
struct list_item$1sTypeph* litem_424;
struct sType* __dec_obj226;
struct list$1sTypeph* __result302__;
    if(    self->len==0) {
        litem_422=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value522=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_422->prev=((void*)0);
        litem_422->next=((void*)0);
        __dec_obj224=litem_422->item;
        litem_422->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_422;
        self->head=litem_422;
    }
    else if(    self->len==1) {
        litem_423=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value523=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_423->prev=self->head;
        litem_423->next=((void*)0);
        __dec_obj225=litem_423->item;
        litem_423->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_423;
        self->head->next=litem_423;
    }
    else {
        litem_424=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value524=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_424->prev=self->tail;
        litem_424->next=((void*)0);
        __dec_obj226=litem_424->item;
        litem_424->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_424;
        self->tail=litem_424;
    }
    self->len++;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_427;
struct sType* __result303__;
struct sType* __result304__;
struct sType* result_428;
struct sType* __result305__;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_427,0,sizeof(struct sType*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_427;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->head;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_428,0,sizeof(struct sType*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_428;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_430;
struct sType* __result306__;
struct sType* __result307__;
struct sType* result_431;
struct sType* __result308__;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_430,0,sizeof(struct sType*));
        __result306__ = gComeFunResultObject = __result_obj__ = result_430;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result307__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    memset(&result_431,0,sizeof(struct sType*));
    __result308__ = gComeFunResultObject = __result_obj__ = result_431;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value581 = (void*)0;
struct list$1sNodeph* __dec_obj266;
struct sSomeNode* __result313__;
    ((struct sNodeBase*)(__right_value581=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value581,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj266=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj266,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value582 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value582=__builtin_string("sSomeNode")));
    __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_453;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct list$1sTypeph* tuple_types_454;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1CVALUEph* tuple_values_455;
struct list$1sNodeph* o2_saved_456;
struct sNode* it_457;
_Bool Value_458;
_Bool __result315__;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_459;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sType* type_460;
struct list$1sTypeph* o2_saved_461;
struct sType* it_462;
void* __right_value593 = (void*)0;
struct object* _inf_value4;
struct sType* _inf_obj_value4;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct CVALUE* obj_value_464;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct buffer* num_string_465;
void* __right_value617 = (void*)0;
struct sType* type2_466;
void* __right_value618 = (void*)0;
char* type_name_467;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
char* __dec_obj303;
void* __right_value621 = (void*)0;
struct sType* type3_468;
void* __right_value622 = (void*)0;
struct sType* __dec_obj304;
void* __right_value623 = (void*)0;
struct sType* obj_type_469;
char* fun_name_470;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
char* generics_fun_name_471;
void* __right_value627 = (void*)0;
struct sFun* fun_472;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
char* __dec_obj305;
void* __right_value630 = (void*)0;
_Bool __result318__;
void* __right_value631 = (void*)0;
struct sType* result_type_473;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1CVALUEph* come_params_474;
void* __right_value634 = (void*)0;
_Bool _if_conditional6;
void* __right_value635 = (void*)0;
int i_475;
struct list$1CVALUEph* o2_saved_476;
struct CVALUE* it_477;
void* __right_value636 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
_Bool _if_conditional7;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct buffer* buf_479;
int j_480;
struct list$1CVALUEph* o2_saved_481;
struct CVALUE* it_482;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value2_483;
void* __right_value644 = (void*)0;
char* __dec_obj306;
void* __right_value645 = (void*)0;
struct sType* __dec_obj307;
_Bool __result319__;
    tuple_elements_453=self->tuple_elements;
    tuple_types_454=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 650, "list$1sTypeph"))));
    tuple_values_455=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 651, "list$1CVALUEph"))));
    for(    o2_saved_456=(tuple_elements_453),it_457=list$1sNodeph_begin((o2_saved_456));    !list$1sNodeph_end((o2_saved_456));    it_457=list$1sNodeph_next((o2_saved_456))    ){
        Value_458=node_compile(it_457,info);
        if(        !Value_458) {
            __result315__ = (_Bool)0;
            come_call_finalizer3(tuple_types_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_455,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result315__;
        }
        else {
        }
        come_value_459=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_455,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_459)));
        list$1sTypeph_push_back(tuple_types_454,(struct sType*)come_increment_ref_count(sType_clone(come_value_459->type)));
        come_call_finalizer3(come_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_460=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 665, "sType")),((char*)(__right_value591=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_454)))),(_Bool)0,info));
    __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_461=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_454)),it_462=list$1sTypeph_begin((o2_saved_461));    !list$1sTypeph_end((o2_saved_461));    it_462=list$1sTypeph_next((o2_saved_461))    ){
        _inf_value4=(struct object*)come_calloc(1, sizeof(struct object), "06str.c", 668, "struct object");
        _inf_obj_value4=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value593=sType_clone(it_462)))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sType_finalize;
        _inf_value4->clone=(void*)sType_clone;
        list$1objectph_push_back(type_460->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value4));
        come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_461,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_464=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 671, "CVALUE"))));
    num_string_465=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 673, "buffer"))));
    buffer_append_str(num_string_465,"1");
    type2_466=(struct sType*)come_increment_ref_count(solve_generics(type_460,type_460,info));
    type_name_467=(char*)come_increment_ref_count(make_type_name_string(type2_466,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj303=obj_value_464->c_value;
    obj_value_464->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_467,type_name_467,((char*)(__right_value619=buffer_to_string(num_string_465))),info->sname,info->sline,type_name_467));
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_468=(struct sType*)come_increment_ref_count(sType_clone(type2_466));
    type3_468->mPointerNum++;
    type3_468->mHeap=(_Bool)1;
    type2_466->mHeap=(_Bool)1;
    __dec_obj304=obj_value_464->type;
    obj_value_464->type=(struct sType*)come_increment_ref_count(sType_clone(type2_466));
    come_call_finalizer3(__dec_obj304,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_464->type->mPointerNum++;
    obj_value_464->var=((void*)0);
    append_object_to_right_values2(obj_value_464,(struct sType*)come_increment_ref_count(type3_468),info,(_Bool)0);
    obj_type_469=(struct sType*)come_increment_ref_count(sType_clone(type2_466));
    fun_name_470="initialize";
    generics_fun_name_471=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value625=make_generics_function(obj_type_469,(char*)come_increment_ref_count(__builtin_string(fun_name_470)),info,(_Bool)1)))));
    __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_472=((struct sFun*)(__right_value627=map$2charphsFunph_at(info->funcs,generics_fun_name_471,((void*)0))));
    come_call_finalizer3(__right_value627,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_472==((void*)0)) {
        __dec_obj305=generics_fun_name_471;
        generics_fun_name_471=(char*)come_increment_ref_count(create_method_name(obj_type_469,(_Bool)0,((char*)(__right_value628=__builtin_string(fun_name_470))),info,(_Bool)1));
        __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_472=((struct sFun*)(__right_value630=map$2charphsFunph_at(info->funcs,generics_fun_name_471,((void*)0))));
        come_call_finalizer3(__right_value630,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_472==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_471,info->come_fun->mName);
            __result318__ = (_Bool)1;
            come_call_finalizer3(tuple_types_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_455,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_466,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_468,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_471 = come_decrement_ref_count2(generics_fun_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result318__;
        }
    }
    result_type_473=(struct sType*)come_increment_ref_count(sType_clone(fun_472->mResultType));
    result_type_473->mStatic=(_Bool)0;
    come_params_474=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 714, "list$1CVALUEph"))));
    if(    (_if_conditional6=(((struct sType*)come_null_check(((struct sType*)(__right_value634=list$1sTypephp_operator_load_element(fun_472->mParamTypes,0))), "06str.c", 716, 10))->mHeap&&obj_value_464->type->mHeap)),    come_call_finalizer3(__right_value634,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional6) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value635=list$1sTypephp_operator_load_element(fun_472->mParamTypes,0))), "06str.c", 717, 11)),obj_value_464->type,obj_value_464,info,(_Bool)1);
        come_call_finalizer3(__right_value635,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_474,(struct CVALUE*)come_increment_ref_count(obj_value_464));
    i_475=1;
    for(    o2_saved_476=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_455)),it_477=list$1CVALUEph_begin((o2_saved_476));    !list$1CVALUEph_end((o2_saved_476));    it_477=list$1CVALUEph_next((o2_saved_476))    ){
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_477));
        if(        (_if_conditional7=(((struct sType*)come_null_check(((struct sType*)(__right_value637=list$1sTypephp_operator_load_element(fun_472->mParamTypes,i_475))), "06str.c", 725, 12))&&((struct sType*)come_null_check(((struct sType*)(__right_value638=list$1sTypephp_operator_load_element(fun_472->mParamTypes,i_475))), "06str.c", 725, 13))->mHeap&&come_value_478->type->mHeap)),        come_call_finalizer3(__right_value637,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value638,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional7) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value639=list$1sTypephp_operator_load_element(fun_472->mParamTypes,i_475))), "06str.c", 726, 14)),come_value_478->type,come_value_478,info,(_Bool)1);
            come_call_finalizer3(__right_value639,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(come_params_474,(struct CVALUE*)come_increment_ref_count(come_value_478));
        i_475++;
        come_call_finalizer3(come_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_479=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 733, "buffer"))));
    buffer_append_str(buf_479,generics_fun_name_471);
    buffer_append_str(buf_479,"(");
    j_480=0;
    for(    o2_saved_481=(struct list$1CVALUEph*)come_increment_ref_count((come_params_474)),it_482=list$1CVALUEph_begin((o2_saved_481));    !list$1CVALUEph_end((o2_saved_481));    it_482=list$1CVALUEph_next((o2_saved_481))    ){
        buffer_append_str(buf_479,it_482->c_value);
        if(        j_480!=list$1CVALUEph_length(come_params_474)-1) {
            buffer_append_str(buf_479,",");
        }
        j_480++;
    }
    come_call_finalizer3(o2_saved_481,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_479,")");
    come_value2_483=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 750, "CVALUE"))));
    __dec_obj306=come_value2_483->c_value;
    come_value2_483->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_479));
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj307=come_value2_483->type;
    come_value2_483->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_473));
    come_call_finalizer3(__dec_obj307,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_483->type->mStatic=(_Bool)0;
    come_value2_483->var=((void*)0);
    if(    result_type_473->mHeap) {
        append_object_to_right_values2(come_value2_483,(struct sType*)come_increment_ref_count(result_type_473),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_483->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_483));
    __result319__ = (_Bool)1;
    come_call_finalizer3(tuple_types_454,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_455,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_464,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_466,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_467 = come_decrement_ref_count2(type_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_468,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_471 = come_decrement_ref_count2(generics_fun_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_474,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_479,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result319__;
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value646 = (void*)0;
struct sNullReturnValue* __result320__;
    ((struct sNodeBase*)(__right_value646=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value646,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value647 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value647=__builtin_string("sNullReturnValue")));
    __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct CVALUE* come_value_484;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct buffer* buf_485;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* var_name_487;
void* __right_value654 = (void*)0;
struct sType* result_type_488;
void* __right_value655 = (void*)0;
struct sType* result_type2_489;
struct sType* left_type_490;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct CVALUE* come_value2_491;
char* __dec_obj309;
struct sType* __dec_obj310;
    if(    info->come_fun) {
        come_value_484=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 785, "CVALUE"))));
        buf_485=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 787, "buffer"))));
        static int num_486=0;
        num_486++;
        var_name_487=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value652=int_to_string(num_486)))));
        __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_488=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_489=(struct sType*)come_increment_ref_count(solve_generics(result_type_488,info->generics_type,info));
        left_type_490=(struct sType*)come_increment_ref_count(result_type2_489);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value656=make_define_var(left_type_490,var_name_487,(_Bool)0,info))));
        __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_487,((char*)(__right_value657=make_type_name_string(left_type_490,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_491=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 803, "CVALUE"))));
        __dec_obj309=come_value2_491->c_value;
        come_value2_491->c_value=(char*)come_increment_ref_count(var_name_487);
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj310=come_value2_491->type;
        come_value2_491->type=(struct sType*)come_increment_ref_count(result_type2_489);
        come_call_finalizer3(__dec_obj310,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_491->type->mStatic=(_Bool)0;
        come_value2_491->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_491));
        come_call_finalizer3(come_value_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_485,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_488,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_489,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value5;
struct sNullReturnValue* _inf_obj_value5;
void* __right_value664 = (void*)0;
struct sNode* __result324__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 820, "struct sNode");
    _inf_obj_value5=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value661=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 820, "sNullReturnValue")),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sNullReturnValue_finalize;
    _inf_value5->clone=(void*)sNullReturnValue_clone;
    _inf_value5->compile=(void*)sNullReturnValue_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sNullReturnValue_kind;
    __result324__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value664=_inf_value5));
    come_call_finalizer3(__right_value661,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value664) { __right_value664 = come_decrement_ref_count2(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj311;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj311=self->sname;
            __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result322__;
void* __right_value662 = (void*)0;
struct sNullReturnValue* result_492;
void* __right_value663 = (void*)0;
char* __dec_obj312;
struct sNullReturnValue* __result323__;
    if(    self==(void*)0) {
        __result322__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_492=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "sNullReturnValue"));
    if(    self!=((void*)0)) {
        result_492->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_492->sname;
        result_492->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_492->sline_real=self->sline_real;
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_492;
    come_call_finalizer3(result_492,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value665 = (void*)0;
struct sNullReturnValueOfException* __result325__;
    ((struct sNodeBase*)(__right_value665=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value665,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value666 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value666=__builtin_string("sNullReturnValue")));
    __right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct CVALUE* come_value_493;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct buffer* buf_494;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
char* var_name_496;
void* __right_value673 = (void*)0;
struct sType* result_type_497;
void* __right_value674 = (void*)0;
struct sType* result_type2_498;
struct sType* __dec_obj314;
void* __right_value675 = (void*)0;
struct object* __tmp_infY1;
void* __right_value676 = (void*)0;
struct sType* left_type_499;
_Bool __result329__;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct CVALUE* come_value2_503;
char* __dec_obj315;
struct sType* __dec_obj316;
    if(    info->come_fun) {
        come_value_493=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 838, "CVALUE"))));
        buf_494=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 840, "buffer"))));
        static int num_495=0;
        num_495++;
        var_name_496=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value671=int_to_string(num_495)))));
        __right_value671 = come_decrement_ref_count2(__right_value671, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_497=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_498=(struct sType*)come_increment_ref_count(solve_generics(result_type_497,info->generics_type,info));
        if(        result_type2_498->mNoSolvedGenericsType->v1) {
            __dec_obj314=result_type2_498;
            result_type2_498=(struct sType*)come_increment_ref_count(result_type2_498->mNoSolvedGenericsType->v1);
            come_call_finalizer3(__dec_obj314,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_499=(struct sType*)come_increment_ref_count(sType_clone(((__tmp_infY1=((struct object*)(__right_value675=list$1objectphp_operator_load_element(result_type2_498->mGenericsTypes,0)))),((struct sType*)(__tmp_infY1 ? __tmp_infY1->_protocol_obj:(void*)0)))));
        if(__right_value675) { __right_value675 = come_decrement_ref_count2(__right_value675, ((struct object*)__right_value675)->finalize, ((struct object*)__right_value675)->_protocol_obj, 1, 0, 0, (void*)0); } 
        if(        left_type_499==((void*)0)||string_operator_not_equals(result_type2_498->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result329__ = (_Bool)0;
            come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_494,buffer_finalize, 0, 0, 0, 0, (void*)0);
            var_name_496 = come_decrement_ref_count2(var_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_498,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_499,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result329__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value677=make_define_var(left_type_499,var_name_496,(_Bool)0,info))));
        __right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_496,((char*)(__right_value678=make_type_name_string(left_type_499,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value678 = come_decrement_ref_count2(__right_value678, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_503=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 865, "CVALUE"))));
        __dec_obj315=come_value2_503->c_value;
        come_value2_503->c_value=(char*)come_increment_ref_count(var_name_496);
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj316=come_value2_503->type;
        come_value2_503->type=(struct sType*)come_increment_ref_count(left_type_499);
        come_call_finalizer3(__dec_obj316,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_503->type->mStatic=(_Bool)0;
        come_value2_503->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_503));
        come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_494,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_496 = come_decrement_ref_count2(var_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_498,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_499,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_503,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1objectph* it_500;
int i_501;
struct object* __result327__;
struct object* default_value_502;
struct object* __result328__;
default_value_502 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_500=self->head;
    i_501=0;
    while(it_500!=((void*)0)) {
        if(        position==i_501) {
            __result327__ = gComeFunResultObject = __result_obj__ = it_500->item;
            gComeFunResultObject = (void*)0;
            return __result327__;
        }
        it_500=it_500->next;
        i_501++;
    }
    memset(&default_value_502,0,sizeof(struct object*));
    __result328__ = gComeFunResultObject = __result_obj__ = default_value_502;
    if(default_value_502) { default_value_502 = come_decrement_ref_count2(default_value_502, ((struct object*)default_value_502)->finalize, ((struct object*)default_value_502)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sNode* _inf_value6;
struct sNullReturnValueOfException* _inf_obj_value6;
void* __right_value685 = (void*)0;
struct sNode* __result332__;
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 882, "struct sNode");
    _inf_obj_value6=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value682=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 882, "sNullReturnValueOfException")),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value6->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value6->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sNodeBase_terminated;
    _inf_value6->kind=(void*)sNullReturnValueOfException_kind;
    __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value685=_inf_value6));
    come_call_finalizer3(__right_value682,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value685) { __right_value685 = come_decrement_ref_count2(__right_value685, ((struct sNode*)__right_value685)->finalize, ((struct sNode*)__right_value685)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj317;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj317=self->sname;
            __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result330__;
void* __right_value683 = (void*)0;
struct sNullReturnValueOfException* result_504;
void* __right_value684 = (void*)0;
char* __dec_obj318;
struct sNullReturnValueOfException* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_504=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "sNullReturnValueOfException"));
    if(    self!=((void*)0)) {
        result_504->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj318=result_504->sname;
        result_504->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_504->sline_real=self->sline_real;
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_504;
    come_call_finalizer3(result_504,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value686 = (void*)0;
struct sType* __dec_obj319;
struct sNullValue* __result333__;
    ((struct sNodeBase*)(__right_value686=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value686,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj319=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj319,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value687 = (void*)0;
char* __result334__;
    __result334__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value687=__builtin_string("sNullValue")));
    __right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct buffer* buf_506;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
char* var_name_508;
struct sType* left_type_509;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct CVALUE* come_value2_510;
char* __dec_obj322;
struct sType* __dec_obj323;
_Bool __result335__;
    come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 901, "CVALUE"))));
    buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 903, "buffer"))));
    static int num_507=0;
    num_507++;
    var_name_508=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value692=int_to_string(num_507)))));
    __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_509=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value694=make_define_var(left_type_509,var_name_508,(_Bool)0,info))));
    __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_508,((char*)(__right_value695=make_type_name_string(left_type_509,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_510=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 915, "CVALUE"))));
    __dec_obj322=come_value2_510->c_value;
    come_value2_510->c_value=(char*)come_increment_ref_count(var_name_508);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj323=come_value2_510->type;
    come_value2_510->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj323,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_510->type->mStatic=(_Bool)0;
    come_value2_510->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_510));
    __result335__ = (_Bool)1;
    come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
    var_name_508 = come_decrement_ref_count2(var_name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_510,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result335__;
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sNode* _inf_value7;
struct sNullValue* _inf_obj_value7;
void* __right_value703 = (void*)0;
struct sNode* __result338__;
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 931, "struct sNode");
    _inf_obj_value7=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value699=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 931, "sNullValue")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sNullValue_finalize;
    _inf_value7->clone=(void*)sNullValue_clone;
    _inf_value7->compile=(void*)sNullValue_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sNodeBase_terminated;
    _inf_value7->kind=(void*)sNullValue_kind;
    __result338__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value703=_inf_value7));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value699,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value703) { __right_value703 = come_decrement_ref_count2(__right_value703, ((struct sNode*)__right_value703)->finalize, ((struct sNode*)__right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj324;
struct sType* __dec_obj325;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj324=self->sname;
            __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj325=self->type;
            come_call_finalizer3(__dec_obj325,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result336__;
void* __right_value700 = (void*)0;
struct sNullValue* result_511;
void* __right_value701 = (void*)0;
char* __dec_obj326;
void* __right_value702 = (void*)0;
struct sType* __dec_obj327;
struct sNullValue* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_511=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "sNullValue"));
    if(    self!=((void*)0)) {
        result_511->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj326=result_511->sname;
        result_511->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_511->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj327=result_511->type;
        result_511->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj327,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_511;
    come_call_finalizer3(result_511,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value704 = (void*)0;
struct list$1sNodeph* __dec_obj328;
struct sNoneNode* __result339__;
    ((struct sNodeBase*)(__right_value704=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value704,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj328=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj328,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value705 = (void*)0;
char* __result340__;
    __result340__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value705=__builtin_string("sNoneNode")));
    __right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_512;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct list$1sTypeph* tuple_types_513;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1CVALUEph* tuple_values_514;
int i_515;
struct list$1sNodeph* o2_saved_516;
struct sNode* it_517;
_Bool Value_518;
_Bool __result341__;
void* __right_value710 = (void*)0;
struct CVALUE* come_value_519;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sType* string_type_520;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sType* type_521;
struct list$1sTypeph* o2_saved_522;
struct sType* it_523;
void* __right_value719 = (void*)0;
struct object* _inf_value8;
struct sType* _inf_obj_value8;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct CVALUE* obj_value_525;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct buffer* num_string_526;
void* __right_value743 = (void*)0;
struct sType* type2_527;
void* __right_value744 = (void*)0;
char* type_name_528;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
char* __dec_obj365;
void* __right_value747 = (void*)0;
struct sType* type3_529;
void* __right_value748 = (void*)0;
struct sType* __dec_obj366;
void* __right_value749 = (void*)0;
struct sType* obj_type_530;
char* fun_name_531;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
char* generics_fun_name_532;
void* __right_value753 = (void*)0;
struct sFun* fun_533;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
char* __dec_obj367;
void* __right_value756 = (void*)0;
_Bool __result344__;
void* __right_value757 = (void*)0;
struct sType* result_type_534;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1CVALUEph* come_params_535;
void* __right_value760 = (void*)0;
_Bool _if_conditional8;
void* __right_value761 = (void*)0;
struct list$1CVALUEph* o2_saved_536;
struct CVALUE* it_537;
void* __right_value762 = (void*)0;
struct CVALUE* come_value_538;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
_Bool _if_conditional9;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct buffer* buf_539;
int j_540;
struct list$1CVALUEph* o2_saved_541;
struct CVALUE* it_542;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct CVALUE* come_value2_543;
void* __right_value770 = (void*)0;
char* __dec_obj368;
void* __right_value771 = (void*)0;
struct sType* __dec_obj369;
_Bool __result345__;
    tuple_elements_512=self->tuple_elements;
    tuple_types_513=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 951, "list$1sTypeph"))));
    tuple_values_514=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 952, "list$1CVALUEph"))));
    i_515=0;
    for(    o2_saved_516=(tuple_elements_512),it_517=list$1sNodeph_begin((o2_saved_516));    !list$1sNodeph_end((o2_saved_516));    it_517=list$1sNodeph_next((o2_saved_516))    ){
        Value_518=node_compile(it_517,info);
        if(        !Value_518) {
            __result341__ = (_Bool)0;
            come_call_finalizer3(tuple_types_513,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result341__;
        }
        else {
        }
        come_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_514,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_519)));
        list$1sTypeph_push_back(tuple_types_513,(struct sType*)come_increment_ref_count(sType_clone(come_value_519->type)));
        if(        i_515==1) {
            string_type_520=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 967, "sType")),"char*",(_Bool)0,info));
            string_type_520->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value715=xsprintf("invalid none type"))),string_type_520,come_value_519->type,come_value_519,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(string_type_520,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_515++;
        come_call_finalizer3(come_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_521=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 975, "sType")),((char*)(__right_value717=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_513)))),(_Bool)0,info));
    __right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_522=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_513)),it_523=list$1sTypeph_begin((o2_saved_522));    !list$1sTypeph_end((o2_saved_522));    it_523=list$1sTypeph_next((o2_saved_522))    ){
        _inf_value8=(struct object*)come_calloc(1, sizeof(struct object), "06str.c", 978, "struct object");
        _inf_obj_value8=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value719=sType_clone(it_523)))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sType_finalize;
        _inf_value8->clone=(void*)sType_clone;
        list$1objectph_push_back(type_521->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value8));
        come_call_finalizer3(__right_value719,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_522,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_525=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 981, "CVALUE"))));
    num_string_526=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 983, "buffer"))));
    buffer_append_str(num_string_526,"1");
    type2_527=(struct sType*)come_increment_ref_count(solve_generics(type_521,type_521,info));
    type_name_528=(char*)come_increment_ref_count(make_type_name_string(type2_527,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj365=obj_value_525->c_value;
    obj_value_525->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_528,type_name_528,((char*)(__right_value745=buffer_to_string(num_string_526))),info->sname,info->sline,type_name_528));
    __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_529=(struct sType*)come_increment_ref_count(sType_clone(type2_527));
    type3_529->mPointerNum++;
    type3_529->mHeap=(_Bool)1;
    type2_527->mHeap=(_Bool)1;
    __dec_obj366=obj_value_525->type;
    obj_value_525->type=(struct sType*)come_increment_ref_count(sType_clone(type2_527));
    come_call_finalizer3(__dec_obj366,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_525->type->mPointerNum++;
    obj_value_525->var=((void*)0);
    append_object_to_right_values2(obj_value_525,(struct sType*)come_increment_ref_count(type3_529),info,(_Bool)0);
    obj_type_530=(struct sType*)come_increment_ref_count(sType_clone(type2_527));
    fun_name_531="initialize";
    generics_fun_name_532=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value751=make_generics_function(obj_type_530,(char*)come_increment_ref_count(__builtin_string(fun_name_531)),info,(_Bool)1)))));
    __right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_533=((struct sFun*)(__right_value753=map$2charphsFunph_at(info->funcs,generics_fun_name_532,((void*)0))));
    come_call_finalizer3(__right_value753,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_533==((void*)0)) {
        __dec_obj367=generics_fun_name_532;
        generics_fun_name_532=(char*)come_increment_ref_count(create_method_name(obj_type_530,(_Bool)0,((char*)(__right_value754=__builtin_string(fun_name_531))),info,(_Bool)1));
        __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_533=((struct sFun*)(__right_value756=map$2charphsFunph_at(info->funcs,generics_fun_name_532,((void*)0))));
        come_call_finalizer3(__right_value756,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_533==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_532,info->come_fun->mName);
            __result344__ = (_Bool)1;
            come_call_finalizer3(tuple_types_513,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_527,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_528 = come_decrement_ref_count2(type_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_529,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_532 = come_decrement_ref_count2(generics_fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result344__;
        }
    }
    result_type_534=(struct sType*)come_increment_ref_count(sType_clone(fun_533->mResultType));
    result_type_534->mStatic=(_Bool)0;
    come_params_535=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1024, "list$1CVALUEph"))));
    if(    (_if_conditional8=(((struct sType*)come_null_check(((struct sType*)(__right_value760=list$1sTypephp_operator_load_element(fun_533->mParamTypes,0))), "06str.c", 1026, 15))->mHeap&&obj_value_525->type->mHeap)),    come_call_finalizer3(__right_value760,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional8) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value761=list$1sTypephp_operator_load_element(fun_533->mParamTypes,0))), "06str.c", 1027, 16)),obj_value_525->type,obj_value_525,info,(_Bool)1);
        come_call_finalizer3(__right_value761,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_535,(struct CVALUE*)come_increment_ref_count(obj_value_525));
    i_515=1;
    for(    o2_saved_536=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_514)),it_537=list$1CVALUEph_begin((o2_saved_536));    !list$1CVALUEph_end((o2_saved_536));    it_537=list$1CVALUEph_next((o2_saved_536))    ){
        come_value_538=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_537));
        if(        (_if_conditional9=(((struct sType*)come_null_check(((struct sType*)(__right_value763=list$1sTypephp_operator_load_element(fun_533->mParamTypes,i_515))), "06str.c", 1035, 17))&&((struct sType*)come_null_check(((struct sType*)(__right_value764=list$1sTypephp_operator_load_element(fun_533->mParamTypes,i_515))), "06str.c", 1035, 18))->mHeap&&come_value_538->type->mHeap)),        come_call_finalizer3(__right_value763,sType_finalize, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value764,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional9) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value765=list$1sTypephp_operator_load_element(fun_533->mParamTypes,i_515))), "06str.c", 1036, 19)),come_value_538->type,come_value_538,info,(_Bool)1);
            come_call_finalizer3(__right_value765,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(come_params_535,(struct CVALUE*)come_increment_ref_count(come_value_538));
        i_515++;
        come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_536,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_539=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1043, "buffer"))));
    buffer_append_str(buf_539,generics_fun_name_532);
    buffer_append_str(buf_539,"(");
    j_540=0;
    for(    o2_saved_541=(struct list$1CVALUEph*)come_increment_ref_count((come_params_535)),it_542=list$1CVALUEph_begin((o2_saved_541));    !list$1CVALUEph_end((o2_saved_541));    it_542=list$1CVALUEph_next((o2_saved_541))    ){
        buffer_append_str(buf_539,it_542->c_value);
        if(        j_540!=list$1CVALUEph_length(come_params_535)-1) {
            buffer_append_str(buf_539,",");
        }
        j_540++;
    }
    come_call_finalizer3(o2_saved_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_539,")");
    come_value2_543=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1060, "CVALUE"))));
    __dec_obj368=come_value2_543->c_value;
    come_value2_543->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_539));
    __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj369=come_value2_543->type;
    come_value2_543->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_534));
    come_call_finalizer3(__dec_obj369,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_543->type->mStatic=(_Bool)0;
    come_value2_543->var=((void*)0);
    if(    result_type_534->mHeap) {
        append_object_to_right_values2(come_value2_543,(struct sType*)come_increment_ref_count(result_type_534),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_543->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_543));
    __result345__ = (_Bool)1;
    come_call_finalizer3(tuple_types_513,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_527,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_528 = come_decrement_ref_count2(type_name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_532 = come_decrement_ref_count2(generics_fun_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_535,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_539,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_543,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result345__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value772 = (void*)0;
struct list$1sNodeph* __dec_obj370;
struct list$1sNodeph* __dec_obj371;
struct sMapNode* __result346__;
    ((struct sNodeBase*)(__right_value772=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value772,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj370=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj370,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj371=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj371,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value773 = (void*)0;
char* __result347__;
    __result347__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value773=__builtin_string("sMapNode")));
    __right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_544;
struct list$1sNodeph* map_elements_545;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct list$1CVALUEph* key_params_546;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct list$1CVALUEph* element_params_547;
struct sType* map_key_type_548;
struct sType* map_element_type_549;
int i_550;
void* __right_value778 = (void*)0;
struct sNode* key_elements_551;
void* __right_value779 = (void*)0;
struct sNode* elements_555;
void* __right_value780 = (void*)0;
_Bool _if_conditional10;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* value_node_556;
struct sNode* exp_557;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_558;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct sNode* __dec_obj375;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_559;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj376;
void* __right_value801 = (void*)0;
struct sNode* __dec_obj377;
_Bool Value_560;
_Bool __result350__;
void* __right_value802 = (void*)0;
struct CVALUE* come_value_561;
void* __right_value803 = (void*)0;
struct sType* __dec_obj378;
_Bool Value_562;
_Bool __result351__;
void* __right_value804 = (void*)0;
struct CVALUE* come_value_563;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sType* __dec_obj379;
void* __right_value807 = (void*)0;
_Bool _if_conditional11;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* value_node_564;
struct sNode* exp2_565;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_566;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sNode* __dec_obj380;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_567;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sNode* __dec_obj381;
void* __right_value828 = (void*)0;
struct sNode* __dec_obj382;
_Bool Value_568;
_Bool __result352__;
void* __right_value829 = (void*)0;
struct CVALUE* come_value2_569;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sType* __dec_obj383;
_Bool Value_570;
_Bool __result353__;
void* __right_value832 = (void*)0;
struct CVALUE* come_value2_571;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sType* __dec_obj384;
void* __right_value835 = (void*)0;
struct sType* key_type_values_573;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
char* var_name_574;
void* __right_value838 = (void*)0;
struct sVar* var__575;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct sType* element_type_values_576;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
char* var_name2_577;
void* __right_value843 = (void*)0;
struct sVar* var2__578;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct buffer* source_579;
int i_580;
void* __right_value847 = (void*)0;
struct CVALUE* key_param_581;
void* __right_value848 = (void*)0;
struct CVALUE* element_param_582;
void* __right_value849 = (void*)0;
char* c_value_583;
void* __right_value850 = (void*)0;
char* c_value_584;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sType* map_type_585;
void* __right_value853 = (void*)0;
struct object* _inf_value9;
struct sType* _inf_obj_value9;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct object* _inf_value10;
struct sType* _inf_obj_value10;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sType* obj_type_588;
char* fun_name_589;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
char* generics_fun_name_590;
void* __right_value897 = (void*)0;
struct sFun* fun_591;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
char* __dec_obj453;
void* __right_value900 = (void*)0;
_Bool __result358__;
void* __right_value901 = (void*)0;
struct sType* result_type_592;
struct sType* type_593;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct CVALUE* obj_value_594;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct buffer* num_string_595;
void* __right_value906 = (void*)0;
struct sType* type2_596;
void* __right_value907 = (void*)0;
char* type_name_597;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
char* __dec_obj454;
void* __right_value910 = (void*)0;
struct sType* type3_598;
void* __right_value911 = (void*)0;
struct sType* __dec_obj455;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct list$1CVALUEph* come_params_599;
void* __right_value914 = (void*)0;
_Bool _if_conditional12;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct CVALUE* come_value2_600;
void* __right_value918 = (void*)0;
char* __dec_obj456;
struct sType* __dec_obj457;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct CVALUE* come_value3_601;
void* __right_value921 = (void*)0;
char* __dec_obj458;
struct sType* __dec_obj459;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct CVALUE* come_value4_602;
void* __right_value924 = (void*)0;
char* __dec_obj460;
struct sType* __dec_obj461;
int j_603;
struct list$1CVALUEph* o2_saved_604;
struct CVALUE* it_605;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct CVALUE* come_value5_606;
void* __right_value927 = (void*)0;
char* __dec_obj462;
void* __right_value928 = (void*)0;
struct sType* __dec_obj463;
_Bool __result359__;
exp_557 = (void*)0;
exp2_565 = (void*)0;
    map_key_elements_544=self->map_key_elements;
    map_elements_545=self->map_elements;
    key_params_546=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1100, "list$1CVALUEph"))));
    element_params_547=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1101, "list$1CVALUEph"))));
    map_key_type_548=((void*)0);
    map_element_type_549=((void*)0);
    for(    i_550=0;    i_550<list$1sNodeph_length(map_key_elements_544);    i_550++    ){
        key_elements_551=((struct sNode*)come_null_check(((struct sNode*)(__right_value778=list$1sNodephp_operator_load_element(map_key_elements_544,i_550))), "06str.c", 1106, 20));
        if(__right_value778) { __right_value778 = come_decrement_ref_count2(__right_value778, ((struct sNode*)__right_value778)->finalize, ((struct sNode*)__right_value778)->_protocol_obj, 1, 0, 0, (void*)0); } 
        elements_555=((struct sNode*)come_null_check(((struct sNode*)(__right_value779=list$1sNodephp_operator_load_element(map_elements_545,i_550))), "06str.c", 1107, 21));
        if(__right_value779) { __right_value779 = come_decrement_ref_count2(__right_value779, ((struct sNode*)__right_value779)->finalize, ((struct sNode*)__right_value779)->_protocol_obj, 1, 0, 0, (void*)0); } 
        if(        (_if_conditional10=(string_operator_equals(((char*)(__right_value780=key_elements_551->kind(key_elements_551->_protocol_obj))),"sWildCard"))),        (__right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional10) {
            value_node_556=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value781=xsprintf("Value"))),info));
            __right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_558=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1114, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_558,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1115, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_556))));
                __dec_obj375=exp_557;
                exp_557=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value788=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_556),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_558),((void*)0),0,((void*)0),info));
                if(__dec_obj375) { __dec_obj375 = come_decrement_ref_count2(__dec_obj375, ((struct sNode*)__dec_obj375)->finalize, ((struct sNode*)__dec_obj375)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_558,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_559=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1120, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_559,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1121, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_557))));
                list$1tuple2$2charphsNodephph_add(params_559,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1122, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_550,info)))));
                __dec_obj376=exp_557;
                exp_557=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value799=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_557),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_559),((void*)0),0,((void*)0),info));
                if(__dec_obj376) { __dec_obj376 = come_decrement_ref_count2(__dec_obj376, ((struct sNode*)__dec_obj376)->finalize, ((struct sNode*)__dec_obj376)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value799 = come_decrement_ref_count2(__right_value799, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj377=exp_557;
                exp_557=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_557,info));
                if(__dec_obj377) { __dec_obj377 = come_decrement_ref_count2(__dec_obj377, ((struct sNode*)__dec_obj377)->finalize, ((struct sNode*)__dec_obj377)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_559,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_560=node_compile(exp_557,info);
            if(            !Value_560) {
                __result350__ = (_Bool)0;
                if(value_node_556) { value_node_556 = come_decrement_ref_count2(value_node_556, ((struct sNode*)value_node_556)->finalize, ((struct sNode*)value_node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_557) { exp_557 = come_decrement_ref_count2(exp_557, ((struct sNode*)exp_557)->finalize, ((struct sNode*)exp_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result350__;
            }
            else {
            }
            come_value_561=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(key_params_546,(struct CVALUE*)come_increment_ref_count(come_value_561));
            __dec_obj378=map_key_type_548;
            map_key_type_548=(struct sType*)come_increment_ref_count(sType_clone(come_value_561->type));
            come_call_finalizer3(__dec_obj378,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_556) { value_node_556 = come_decrement_ref_count2(value_node_556, ((struct sNode*)value_node_556)->finalize, ((struct sNode*)value_node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_557) { exp_557 = come_decrement_ref_count2(exp_557, ((struct sNode*)exp_557)->finalize, ((struct sNode*)exp_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_562=node_compile(key_elements_551,info);
            if(            !Value_562) {
                __result351__ = (_Bool)0;
                come_call_finalizer3(key_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result351__;
            }
            else {
            }
            come_value_563=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_548) {
                check_assign_type(((char*)(__right_value805=xsprintf("invalid map key type"))),map_key_type_548,come_value_563->type,come_value_563,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value805 = come_decrement_ref_count2(__right_value805, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(key_params_546,(struct CVALUE*)come_increment_ref_count(come_value_563));
            __dec_obj379=map_key_type_548;
            map_key_type_548=(struct sType*)come_increment_ref_count(sType_clone(come_value_563->type));
            come_call_finalizer3(__dec_obj379,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional11=(string_operator_equals(((char*)(__right_value807=elements_555->kind(elements_555->_protocol_obj))),"sWildCard"))),        (__right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional11) {
            value_node_564=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value808=xsprintf("Value"))),info));
            __right_value808 = come_decrement_ref_count2(__right_value808, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_566=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1158, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_566,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1159, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_564))));
                __dec_obj380=exp2_565;
                exp2_565=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value815=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_564),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_566),((void*)0),0,((void*)0),info));
                if(__dec_obj380) { __dec_obj380 = come_decrement_ref_count2(__dec_obj380, ((struct sNode*)__dec_obj380)->finalize, ((struct sNode*)__dec_obj380)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value815 = come_decrement_ref_count2(__right_value815, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_566,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_567=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1164, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_567,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1165, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_565))));
                list$1tuple2$2charphsNodephph_add(params_567,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1166, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_550,info)))));
                __dec_obj381=exp2_565;
                exp2_565=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value826=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_565),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_567),((void*)0),0,((void*)0),info));
                if(__dec_obj381) { __dec_obj381 = come_decrement_ref_count2(__dec_obj381, ((struct sNode*)__dec_obj381)->finalize, ((struct sNode*)__dec_obj381)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value826 = come_decrement_ref_count2(__right_value826, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj382=exp2_565;
                exp2_565=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_565,info));
                if(__dec_obj382) { __dec_obj382 = come_decrement_ref_count2(__dec_obj382, ((struct sNode*)__dec_obj382)->finalize, ((struct sNode*)__dec_obj382)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_567,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_568=node_compile(exp2_565,info);
            if(            !Value_568) {
                __result352__ = (_Bool)0;
                if(value_node_564) { value_node_564 = come_decrement_ref_count2(value_node_564, ((struct sNode*)value_node_564)->finalize, ((struct sNode*)value_node_564)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_565) { exp2_565 = come_decrement_ref_count2(exp2_565, ((struct sNode*)exp2_565)->finalize, ((struct sNode*)exp2_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result352__;
            }
            else {
            }
            come_value2_569=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_549) {
                check_assign_type(((char*)(__right_value830=xsprintf("invalid map element type"))),map_element_type_549,come_value2_569->type,come_value2_569,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value830 = come_decrement_ref_count2(__right_value830, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_547,(struct CVALUE*)come_increment_ref_count(come_value2_569));
            __dec_obj383=map_element_type_549;
            map_element_type_549=(struct sType*)come_increment_ref_count(sType_clone(come_value2_569->type));
            come_call_finalizer3(__dec_obj383,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_564) { value_node_564 = come_decrement_ref_count2(value_node_564, ((struct sNode*)value_node_564)->finalize, ((struct sNode*)value_node_564)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_565) { exp2_565 = come_decrement_ref_count2(exp2_565, ((struct sNode*)exp2_565)->finalize, ((struct sNode*)exp2_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_570=node_compile(elements_555,info);
            if(            !Value_570) {
                __result353__ = (_Bool)0;
                come_call_finalizer3(key_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result353__;
            }
            else {
            }
            come_value2_571=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_549) {
                check_assign_type(((char*)(__right_value833=xsprintf("invalid map element type"))),map_element_type_549,come_value2_571->type,come_value2_571,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value833 = come_decrement_ref_count2(__right_value833, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_547,(struct CVALUE*)come_increment_ref_count(come_value2_571));
            __dec_obj384=map_element_type_549;
            map_element_type_549=(struct sType*)come_increment_ref_count(sType_clone(come_value2_571->type));
            come_call_finalizer3(__dec_obj384,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_571,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_572=0;
    key_type_values_573=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_548));
    list$1sNodeph_push_back(key_type_values_573->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(key_params_546),info)));
    key_type_values_573->mHeap=(_Bool)0;
    var_name_574=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_572));
    add_variable_to_table(var_name_574,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_573)),info);
    var__575=get_variable_from_table(info->lv_table,var_name_574);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value839=make_define_var(key_type_values_573,var__575->mCValueName,(_Bool)0,info))));
    __right_value839 = come_decrement_ref_count2(__right_value839, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_576=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_549));
    list$1sNodeph_push_back(element_type_values_576->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(element_params_547),info)));
    element_type_values_576->mHeap=(_Bool)0;
    var_name2_577=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_572));
    add_variable_to_table(var_name2_577,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_576)),info);
    var2__578=get_variable_from_table(info->lv_table,var_name2_577);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value844=make_define_var(element_type_values_576,var2__578->mCValueName,(_Bool)0,info))));
    __right_value844 = come_decrement_ref_count2(__right_value844, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_579=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1227, "buffer"))));
    buffer_append_str(source_579,"(");
    for(    i_580=0;    i_580<list$1CVALUEph_length(key_params_546);    i_580++    ){
        key_param_581=((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value847=list$1CVALUEphp_operator_load_element(key_params_546,i_580))), "06str.c", 1232, 22));
        come_call_finalizer3(__right_value847,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_582=((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value848=list$1CVALUEphp_operator_load_element(element_params_547,i_580))), "06str.c", 1233, 23));
        come_call_finalizer3(__right_value848,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_548->mHeap) {
            c_value_583=(char*)come_increment_ref_count(increment_ref_count_object(key_param_581->type,key_param_581->c_value,info));
            buffer_append_format(source_579,"%s[%d]=%s,\n",var__575->mCValueName,i_580,c_value_583);
            c_value_583 = come_decrement_ref_count2(c_value_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_579,"%s[%d]=%s,\n",var__575->mCValueName,i_580,key_param_581->c_value);
        }
        if(        map_element_type_549->mHeap) {
            c_value_584=(char*)come_increment_ref_count(increment_ref_count_object(element_param_582->type,element_param_582->c_value,info));
            buffer_append_format(source_579,"%s[%d]=%s,\n",var2__578->mCValueName,i_580,c_value_584);
            c_value_584 = come_decrement_ref_count2(c_value_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_579,"%s[%d]=%s,\n",var2__578->mCValueName,i_580,element_param_582->c_value);
        }
    }
    map_type_585=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1252, "sType")),"map",(_Bool)0,info));
    _inf_value9=(struct object*)come_calloc(1, sizeof(struct object), "06str.c", 1253, "struct object");
    _inf_obj_value9=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value853=sType_clone(map_key_type_548)))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sType_finalize;
    _inf_value9->clone=(void*)sType_clone;
    list$1objectph_push_back(map_type_585->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value9));
    come_call_finalizer3(__right_value853,sType_finalize, 0, 1, 0, 0, (void*)0);
    _inf_value10=(struct object*)come_calloc(1, sizeof(struct object), "06str.c", 1254, "struct object");
    _inf_obj_value10=(struct sType*)come_increment_ref_count((((struct sType*)(__right_value873=sType_clone(map_element_type_549)))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sType_finalize;
    _inf_value10->clone=(void*)sType_clone;
    list$1objectph_push_back(map_type_585->mGenericsTypes,(struct object*)come_increment_ref_count(_inf_value10));
    come_call_finalizer3(__right_value873,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_588=(struct sType*)come_increment_ref_count(sType_clone(map_type_585));
    fun_name_589="initialize_with_values";
    generics_fun_name_590=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value895=make_generics_function(obj_type_588,(char*)come_increment_ref_count(__builtin_string(fun_name_589)),info,(_Bool)1)))));
    __right_value895 = come_decrement_ref_count2(__right_value895, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_591=((struct sFun*)(__right_value897=map$2charphsFunph_at(info->funcs,generics_fun_name_590,((void*)0))));
    come_call_finalizer3(__right_value897,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_591==((void*)0)) {
        __dec_obj453=generics_fun_name_590;
        generics_fun_name_590=(char*)come_increment_ref_count(create_method_name(obj_type_588,(_Bool)0,((char*)(__right_value898=__builtin_string(fun_name_589))),info,(_Bool)1));
        __dec_obj453 = come_decrement_ref_count2(__dec_obj453, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_591=((struct sFun*)(__right_value900=map$2charphsFunph_at(info->funcs,generics_fun_name_590,((void*)0))));
        come_call_finalizer3(__right_value900,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_591==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_590,info->come_fun->mName);
            __result358__ = (_Bool)1;
            come_call_finalizer3(key_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_573,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_574 = come_decrement_ref_count2(var_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_576,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_577 = come_decrement_ref_count2(var_name2_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_579,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_590 = come_decrement_ref_count2(generics_fun_name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result358__;
        }
    }
    result_type_592=(struct sType*)come_increment_ref_count(sType_clone(fun_591->mResultType));
    result_type_592->mStatic=(_Bool)0;
    type_593=map_type_585;
    obj_value_594=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1279, "CVALUE"))));
    num_string_595=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1281, "buffer"))));
    buffer_append_str(num_string_595,"1");
    type2_596=(struct sType*)come_increment_ref_count(solve_generics(type_593,type_593,info));
    type_name_597=(char*)come_increment_ref_count(make_type_name_string(type2_596,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj454=obj_value_594->c_value;
    obj_value_594->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_597,type_name_597,((char*)(__right_value908=buffer_to_string(num_string_595))),info->sname,info->sline,type_name_597));
    __dec_obj454 = come_decrement_ref_count2(__dec_obj454, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value908 = come_decrement_ref_count2(__right_value908, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_598=(struct sType*)come_increment_ref_count(sType_clone(type2_596));
    type3_598->mPointerNum++;
    type3_598->mHeap=(_Bool)1;
    type2_596->mHeap=(_Bool)1;
    __dec_obj455=obj_value_594->type;
    obj_value_594->type=(struct sType*)come_increment_ref_count(sType_clone(type2_596));
    come_call_finalizer3(__dec_obj455,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_594->type->mPointerNum++;
    obj_value_594->var=((void*)0);
    append_object_to_right_values2(obj_value_594,(struct sType*)come_increment_ref_count(type3_598),info,(_Bool)0);
    come_params_599=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1301, "list$1CVALUEph"))));
    if(    (_if_conditional12=(((struct sType*)come_null_check(((struct sType*)(__right_value914=list$1sTypephp_operator_load_element(fun_591->mParamTypes,0))), "06str.c", 1303, 24))->mHeap&&obj_value_594->type->mHeap)),    come_call_finalizer3(__right_value914,sType_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional12) {
        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value915=list$1sTypephp_operator_load_element(fun_591->mParamTypes,0))), "06str.c", 1304, 25)),obj_value_594->type,obj_value_594,info,(_Bool)1);
        come_call_finalizer3(__right_value915,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(come_params_599,(struct CVALUE*)come_increment_ref_count(obj_value_594));
    come_value2_600=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1308, "CVALUE"))));
    __dec_obj456=come_value2_600->c_value;
    come_value2_600->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_546)));
    __dec_obj456 = come_decrement_ref_count2(__dec_obj456, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj457=come_value2_600->type;
    come_value2_600->type=((void*)0);
    come_call_finalizer3(__dec_obj457,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_600->var=((void*)0);
    list$1CVALUEph_push_back(come_params_599,(struct CVALUE*)come_increment_ref_count(come_value2_600));
    come_value3_601=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1316, "CVALUE"))));
    __dec_obj458=come_value3_601->c_value;
    come_value3_601->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__575->mCValueName));
    __dec_obj458 = come_decrement_ref_count2(__dec_obj458, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj459=come_value3_601->type;
    come_value3_601->type=((void*)0);
    come_call_finalizer3(__dec_obj459,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_601->var=((void*)0);
    list$1CVALUEph_push_back(come_params_599,(struct CVALUE*)come_increment_ref_count(come_value3_601));
    come_value4_602=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1324, "CVALUE"))));
    __dec_obj460=come_value4_602->c_value;
    come_value4_602->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__578->mCValueName));
    __dec_obj460 = come_decrement_ref_count2(__dec_obj460, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj461=come_value4_602->type;
    come_value4_602->type=((void*)0);
    come_call_finalizer3(__dec_obj461,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_602->var=((void*)0);
    list$1CVALUEph_push_back(come_params_599,(struct CVALUE*)come_increment_ref_count(come_value4_602));
    buffer_append_str(source_579,generics_fun_name_590);
    buffer_append_str(source_579,"(");
    j_603=0;
    for(    o2_saved_604=(struct list$1CVALUEph*)come_increment_ref_count((come_params_599)),it_605=list$1CVALUEph_begin((o2_saved_604));    !list$1CVALUEph_end((o2_saved_604));    it_605=list$1CVALUEph_next((o2_saved_604))    ){
        buffer_append_str(source_579,it_605->c_value);
        if(        j_603!=list$1CVALUEph_length(come_params_599)-1) {
            buffer_append_str(source_579,",");
        }
        j_603++;
    }
    come_call_finalizer3(o2_saved_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_579,")");
    buffer_append_str(source_579,")");
    come_value5_606=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1350, "CVALUE"))));
    __dec_obj462=come_value5_606->c_value;
    come_value5_606->c_value=(char*)come_increment_ref_count(buffer_to_string(source_579));
    __dec_obj462 = come_decrement_ref_count2(__dec_obj462, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj463=come_value5_606->type;
    come_value5_606->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_592));
    come_call_finalizer3(__dec_obj463,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_606->type->mStatic=(_Bool)0;
    come_value5_606->var=((void*)0);
    if(    result_type_592->mHeap) {
        append_object_to_right_values2(come_value5_606,(struct sType*)come_increment_ref_count(result_type_592),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_606->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_606));
    __result359__ = (_Bool)1;
    come_call_finalizer3(key_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_547,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_573,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_574 = come_decrement_ref_count2(var_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_576,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_577 = come_decrement_ref_count2(var_name2_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_579,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_590 = come_decrement_ref_count2(generics_fun_name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_592,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_595,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_596,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_597 = come_decrement_ref_count2(type_name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_598,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_599,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_601,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_602,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_606,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result359__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_552;
int i_553;
struct sNode* __result348__;
struct sNode* default_value_554;
struct sNode* __result349__;
default_value_554 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_552=self->head;
    i_553=0;
    while(it_552!=((void*)0)) {
        if(        position==i_553) {
            __result348__ = gComeFunResultObject = __result_obj__ = it_552->item;
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
        it_552=it_552->next;
        i_553++;
    }
    memset(&default_value_554,0,sizeof(struct sNode*));
    __result349__ = gComeFunResultObject = __result_obj__ = default_value_554;
    if(default_value_554) { default_value_554 = come_decrement_ref_count2(default_value_554, ((struct sNode*)default_value_554)->finalize, ((struct sNode*)default_value_554)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj419;
struct tuple1$1sTypeph* __dec_obj420;
struct tuple1$1sTypeph* __dec_obj421;
char* __dec_obj422;
char* __dec_obj423;
struct list$1objectph* __dec_obj424;
struct list$1sNodeph* __dec_obj425;
struct list$1sTypeph* __dec_obj426;
struct list$1charph* __dec_obj427;
struct tuple1$1sTypeph* __dec_obj428;
struct sNode* __dec_obj429;
struct tuple1$1sTypeph* __dec_obj430;
struct sNode* __dec_obj431;
char* __dec_obj432;
char* __dec_obj433;
char* __dec_obj434;
char* __dec_obj435;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj419=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj419,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj420=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj420,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj421=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj421,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj422=self->mInterfaceName;
            __dec_obj422 = come_decrement_ref_count2(__dec_obj422, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj423=self->mGenericsName;
            __dec_obj423 = come_decrement_ref_count2(__dec_obj423, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj424=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj424,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj425=self->mArrayNum;
            come_call_finalizer3(__dec_obj425,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj426=self->mParamTypes;
            come_call_finalizer3(__dec_obj426,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj427=self->mParamNames;
            come_call_finalizer3(__dec_obj427,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj428=self->mResultType;
            come_call_finalizer3(__dec_obj428,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj429=self->mAlignas;
            if(__dec_obj429) { __dec_obj429 = come_decrement_ref_count2(__dec_obj429, ((struct sNode*)__dec_obj429)->finalize, ((struct sNode*)__dec_obj429)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj430=self->mChannelType;
            come_call_finalizer3(__dec_obj430,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj431=self->mSizeNum;
            if(__dec_obj431) { __dec_obj431 = come_decrement_ref_count2(__dec_obj431, ((struct sNode*)__dec_obj431)->finalize, ((struct sNode*)__dec_obj431)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj432=self->mOriginalTypeName;
            __dec_obj432 = come_decrement_ref_count2(__dec_obj432, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj433=self->mAsmName;
            __dec_obj433 = come_decrement_ref_count2(__dec_obj433, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj434=self->mTupleName;
            __dec_obj434 = come_decrement_ref_count2(__dec_obj434, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj435=self->mAttribute;
            __dec_obj435 = come_decrement_ref_count2(__dec_obj435, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result356__;
void* __right_value874 = (void*)0;
struct sType* result_587;
void* __right_value875 = (void*)0;
struct tuple1$1sTypeph* __dec_obj436;
void* __right_value876 = (void*)0;
struct tuple1$1sTypeph* __dec_obj437;
void* __right_value877 = (void*)0;
struct tuple1$1sTypeph* __dec_obj438;
void* __right_value878 = (void*)0;
char* __dec_obj439;
void* __right_value879 = (void*)0;
char* __dec_obj440;
void* __right_value880 = (void*)0;
struct list$1objectph* __dec_obj441;
void* __right_value881 = (void*)0;
struct list$1sNodeph* __dec_obj442;
void* __right_value882 = (void*)0;
struct list$1sTypeph* __dec_obj443;
void* __right_value883 = (void*)0;
struct list$1charph* __dec_obj444;
void* __right_value884 = (void*)0;
struct tuple1$1sTypeph* __dec_obj445;
void* __right_value885 = (void*)0;
struct sNode* __dec_obj446;
void* __right_value886 = (void*)0;
struct tuple1$1sTypeph* __dec_obj447;
void* __right_value887 = (void*)0;
struct sNode* __dec_obj448;
void* __right_value888 = (void*)0;
char* __dec_obj449;
void* __right_value889 = (void*)0;
char* __dec_obj450;
void* __right_value890 = (void*)0;
char* __dec_obj451;
void* __right_value891 = (void*)0;
char* __dec_obj452;
struct sType* __result357__;
    if(    self==(void*)0) {
        __result356__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    result_587=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_587->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj436=result_587->mNoSolvedGenericsType;
        result_587->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj436,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj437=result_587->mOriginalLoadVarType;
        result_587->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj437,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj438=result_587->mRefferenceOriginalType;
        result_587->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj438,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj439=result_587->mInterfaceName;
        result_587->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj439 = come_decrement_ref_count2(__dec_obj439, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj440=result_587->mGenericsName;
        result_587->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj440 = come_decrement_ref_count2(__dec_obj440, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj441=result_587->mGenericsTypes;
        result_587->mGenericsTypes=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj441,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj442=result_587->mArrayNum;
        result_587->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj442,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj443=result_587->mParamTypes;
        result_587->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj443,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj444=result_587->mParamNames;
        result_587->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj444,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj445=result_587->mResultType;
        result_587->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj445,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj446=result_587->mAlignas;
        result_587->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj446) { __dec_obj446 = come_decrement_ref_count2(__dec_obj446, ((struct sNode*)__dec_obj446)->finalize, ((struct sNode*)__dec_obj446)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj447=result_587->mChannelType;
        result_587->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj447,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_587->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_587->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_587->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_587->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_587->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_587->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_587->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_587->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_587->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_587->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_587->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_587->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_587->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_587->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_587->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_587->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_587->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_587->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_587->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_587->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_587->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_587->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_587->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_587->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_587->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj448=result_587->mSizeNum;
        result_587->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj448) { __dec_obj448 = come_decrement_ref_count2(__dec_obj448, ((struct sNode*)__dec_obj448)->finalize, ((struct sNode*)__dec_obj448)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_587->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj449=result_587->mOriginalTypeName;
        result_587->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj449 = come_decrement_ref_count2(__dec_obj449, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_587->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_587->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_587->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_587->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_587->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_587->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_587->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj450=result_587->mAsmName;
        result_587->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj450 = come_decrement_ref_count2(__dec_obj450, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_587->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_587->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_587->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_587->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_587->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj451=result_587->mTupleName;
        result_587->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj451 = come_decrement_ref_count2(__dec_obj451, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj452=result_587->mAttribute;
        result_587->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj452 = come_decrement_ref_count2(__dec_obj452, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_587->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_587;
    come_call_finalizer3(result_587,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_607;
int sline_608;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct list$1sNodeph* exps_609;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct buffer* value_610;
char* head_of_last_line_611;
int len_612;
void* __right_value933 = (void*)0;
struct sNode* exp_613;
int sline2_614;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sNode* _inf_value11;
struct sSStringNode* _inf_obj_value11;
void* __right_value941 = (void*)0;
struct sNode* __result362__;
int sline_real_616;
int sline_617;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct buffer* value_618;
char* p_619;
int sline_620;
int sline2_621;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value12;
struct sStrNode* _inf_obj_value12;
void* __right_value950 = (void*)0;
struct sNode* __result365__;
int sline_real_623;
int sline_624;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct buffer* value_625;
unsigned long  int size_626;
char* p_627;
int sline_628;
int len_629;
int sline2_630;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sNode* _inf_value13;
struct sBufferNode* _inf_obj_value13;
void* __right_value958 = (void*)0;
struct sNode* __result368__;
int sline_real_632;
int sline_633;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct buffer* buf_634;
_Bool global_635;
_Bool ignore_case_636;
_Bool catch_exception_637;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct sNode* _inf_value14;
struct sStrNode* _inf_obj_value14;
void* __right_value967 = (void*)0;
struct sNode* obj_638;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_640;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct buffer* method_block_641;
int method_block_sline_642;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct list$1sTypeph* method_generics_types_643;
void* __right_value1009 = (void*)0;
struct sNode* node_644;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct sNode* __dec_obj482;
struct sNode* __result371__;
int sline_real_645;
int sline_646;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct buffer* value_647;
char* p_648;
int sline_649;
int len_650;
int sline2_651;
_Bool global_652;
_Bool ignore_case_653;
_Bool catch_exception_654;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct sNode* _inf_value15;
struct sStrNode* _inf_obj_value15;
void* __right_value1020 = (void*)0;
struct sNode* obj_655;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_657;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct buffer* method_block_658;
int method_block_sline_659;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct list$1sTypeph* method_generics_types_660;
void* __right_value1062 = (void*)0;
struct sNode* node_661;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct sNode* __dec_obj487;
struct sNode* __result374__;
int sline_real_662;
int c_663;
int n_664;
int n_665;
unsigned long long int n_668;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct sNode* _inf_value16;
struct sCharNode* _inf_obj_value16;
void* __right_value1069 = (void*)0;
struct sNode* __result377__;
int sline_real_670;
int c_671;
_Bool quote_672;
int n_673;
int n_674;
unsigned long long int n_677;
unsigned char p2_678;
int size_679;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct sNode* _inf_value17;
struct sWCharNode* _inf_obj_value17;
void* __right_value1074 = (void*)0;
struct sNode* __result380__;
int sline_real_682;
int sline_683;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct buffer* value_684;
char* p_685;
int sline_686;
int sline2_687;
int len_688;
void* __right_value1077 = (void*)0;
int* wstr_689;
char* str_690;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct sNode* _inf_value18;
struct sWStringNode* _inf_obj_value18;
void* __right_value1083 = (void*)0;
struct sNode* __result383__;
int sline_real_692;
int sline_693;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct list$1sNodeph* exps_694;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct buffer* value_695;
char* p_696;
int sline_697;
int len_698;
void* __right_value1088 = (void*)0;
struct sNode* exp_699;
int sline2_700;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct sNode* _inf_value19;
struct sSStringNode* _inf_obj_value19;
void* __right_value1096 = (void*)0;
struct sNode* __result386__;
int sline_real_702;
char* p_703;
_Bool no_comma_704;
void* __right_value1097 = (void*)0;
struct sNode* node_705;
char* p2_706;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct buffer* first_element_source_707;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct list$1sNodeph* list_elements_708;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
struct list$1sNodeph* map_keys_709;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
struct list$1sNodeph* map_elements_710;
_Bool no_comma_711;
void* __right_value1106 = (void*)0;
struct sNode* node2_712;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct sNode* _inf_value20;
struct sMapNode* _inf_obj_value20;
void* __right_value1113 = (void*)0;
struct sNode* __result389__;
_Bool no_comma_714;
void* __right_value1114 = (void*)0;
struct sNode* node2_715;
void* __right_value1115 = (void*)0;
struct sNode* node3_716;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
struct sNode* _inf_value21;
struct sMapNode* _inf_obj_value21;
void* __right_value1122 = (void*)0;
struct sNode* __result392__;
_Bool no_comma_718;
void* __right_value1123 = (void*)0;
struct sNode* node2_719;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
struct sNode* _inf_value22;
struct sListNode* _inf_obj_value22;
void* __right_value1129 = (void*)0;
struct sNode* __result395__;
void* __right_value1130 = (void*)0;
struct sNode* node_721;
struct sNode* __result396__;
struct sNode* __result397__;
memset(&c_663, 0, sizeof(int));
memset(&c_671, 0, sizeof(int));
memset(&quote_672, 0, sizeof(_Bool));
memset(&size_679, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_607=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_608=info->sline;
        exps_609=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1380, "list$1sNodeph"))));
        value_610=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1381, "buffer"))));
        head_of_last_line_611=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_611) {
                    buffer_trim(value_610,info->p-head_of_last_line_611);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_610,37);
                buffer_append_char(value_610,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_610,92);
                buffer_append_char(value_610,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_610,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_612=0;
                    while(xisdigit(*info->p)&&len_612<3) {
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        len_612++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_610,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_613=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_609,(struct sNode*)come_increment_ref_count(exp_613));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_610,"%s");
                    if(exp_613) { exp_613 = come_decrement_ref_count2(exp_613, ((struct sNode*)exp_613)->finalize, ((struct sNode*)exp_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_610,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_614=info->sline;
                info->sline=sline_608;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_610,92);
                    buffer_append_char(value_610,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_611=info->p;
                }
                else {
                    buffer_append_char(value_610,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_607;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1520, "struct sNode");
        _inf_obj_value11=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value936=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1520, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_610)),(struct list$1sNodeph*)come_increment_ref_count(exps_609),sline_608,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sSStringNode_finalize;
        _inf_value11->clone=(void*)sSStringNode_clone;
        _inf_value11->compile=(void*)sSStringNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sSStringNode_kind;
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value941=_inf_value11));
        come_call_finalizer3(exps_609,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value936,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value941) { __right_value941 = come_decrement_ref_count2(__right_value941, ((struct sNode*)__right_value941)->finalize, ((struct sNode*)__right_value941)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result362__;
        come_call_finalizer3(exps_609,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_616=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_617=info->sline;
        value_618=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1530, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_619=info->p;
                sline_620=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_619;
                    info->sline=sline_620;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_618,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_618,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_618,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_621=info->sline;
                info->sline=sline_617;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_621;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_618,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_616;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1583, "struct sNode");
        _inf_obj_value12=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value946=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1583, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_618)),sline_617,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sStrNode_finalize;
        _inf_value12->clone=(void*)sStrNode_clone;
        _inf_value12->compile=(void*)sStrNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sStrNode_kind;
        __result365__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value950=_inf_value12));
        come_call_finalizer3(value_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value946,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value950) { __right_value950 = come_decrement_ref_count2(__right_value950, ((struct sNode*)__right_value950)->finalize, ((struct sNode*)__right_value950)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result365__;
        come_call_finalizer3(value_618,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_623=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_624=info->sline;
        value_625=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1593, "buffer"))));
        size_626=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_625,*info->p);
                info->p++;
                p_627=info->p;
                sline_628=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_627;
                    info->sline=sline_628;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_625,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_629=0;
                    while(xisdigit(*info->p)&&len_629<3) {
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        len_629++;
                    }
                    size_626++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_625,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                    }
                    size_626++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 110:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 116:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 114:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 118:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 102:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 97:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 98:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        case 92:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                        default:
                        buffer_append_char(value_625,*info->p);
                        info->p++;
                        size_626++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_630=info->sline;
                info->sline=sline_624;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_625,*info->p);
                info->p++;
                size_626++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_623;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1720, "struct sNode");
        _inf_obj_value13=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value954=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1720, "sBufferNode")),(struct buffer*)come_increment_ref_count(value_625),size_626,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sBufferNode_finalize;
        _inf_value13->clone=(void*)sBufferNode_clone;
        _inf_value13->compile=(void*)sBufferNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sBufferNode_kind;
        __result368__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value958=_inf_value13));
        come_call_finalizer3(value_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value954,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value958) { __right_value958 = come_decrement_ref_count2(__right_value958, ((struct sNode*)__right_value958)->finalize, ((struct sNode*)__right_value958)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result368__;
        come_call_finalizer3(value_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_632=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_633=info->sline;
        buf_634=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1729, "buffer"))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_634,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_634,*info->p);
                info->p++;
            }
        }
        global_635=(_Bool)0;
        ignore_case_636=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_635=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_636=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_637=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_637=(_Bool)1;
        }
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1773, "struct sNode");
        _inf_obj_value14=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value963=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1773, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(buf_634)),sline_633,info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sStrNode_finalize;
        _inf_value14->clone=(void*)sStrNode_clone;
        _inf_value14->compile=(void*)sStrNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sStrNode_kind;
        obj_638=(struct sNode*)come_increment_ref_count(_inf_value14);
        come_call_finalizer3(__right_value963,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_640=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1775, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1777, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_638))));
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1778, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_636)?(((struct sNode*)(__right_value974=create_int_node(1,info)))):(((struct sNode*)(__right_value975=create_int_node(0,info)))))))));
        if(__right_value974) { __right_value974 = come_decrement_ref_count2(__right_value974, ((struct sNode*)__right_value974)->finalize, ((struct sNode*)__right_value974)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value975) { __right_value975 = come_decrement_ref_count2(__right_value975, ((struct sNode*)__right_value975)->finalize, ((struct sNode*)__right_value975)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1779, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1780, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_635)?(((struct sNode*)(__right_value983=create_int_node(1,info)))):(((struct sNode*)(__right_value984=create_int_node(0,info)))))))));
        if(__right_value983) { __right_value983 = come_decrement_ref_count2(__right_value983, ((struct sNode*)__right_value983)->finalize, ((struct sNode*)__right_value983)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value984) { __right_value984 = come_decrement_ref_count2(__right_value984, ((struct sNode*)__right_value984)->finalize, ((struct sNode*)__right_value984)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1781, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1782, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1783, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1784, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_640,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1785, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_641=((void*)0);
        method_block_sline_642=info->sline;
        method_generics_types_643=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1791, "list$1sTypeph"))));
        node_644=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_638),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_640),method_block_641,method_block_sline_642,method_generics_types_643,info));
        if(        !catch_exception_637) {
            __dec_obj482=node_644;
            node_644=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_644)),info));
            if(__dec_obj482) { __dec_obj482 = come_decrement_ref_count2(__dec_obj482, ((struct sNode*)__dec_obj482)->finalize, ((struct sNode*)__dec_obj482)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_632;
        __result371__ = gComeFunResultObject = __result_obj__ = node_644;
        come_call_finalizer3(buf_634,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_638) { obj_638 = come_decrement_ref_count2(obj_638, ((struct sNode*)obj_638)->finalize, ((struct sNode*)obj_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_640,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_643,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_644) { node_644 = come_decrement_ref_count2(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result371__;
        come_call_finalizer3(buf_634,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_638) { obj_638 = come_decrement_ref_count2(obj_638, ((struct sNode*)obj_638)->finalize, ((struct sNode*)obj_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_640,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_643,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_644) { node_644 = come_decrement_ref_count2(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_645=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_646=info->sline;
        value_647=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1809, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_648=info->p;
                sline_649=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_648;
                    info->sline=sline_649;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_647,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_650=0;
                    while(xisdigit(*info->p)&&len_650<3) {
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        len_650++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_647,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_647,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_651=info->sline;
                info->sline=sline_646;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_647,*info->p);
                info->p++;
            }
        }
        global_652=(_Bool)0;
        ignore_case_653=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_652=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_653=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_654=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_654=(_Bool)1;
        }
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1940, "struct sNode");
        _inf_obj_value15=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value1016=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1940, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_647)),sline_646,info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sStrNode_finalize;
        _inf_value15->clone=(void*)sStrNode_clone;
        _inf_value15->compile=(void*)sStrNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sStrNode_kind;
        obj_655=(struct sNode*)come_increment_ref_count(_inf_value15);
        come_call_finalizer3(__right_value1016,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_657=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1942, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1944, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_655))));
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1945, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_653)?(((struct sNode*)(__right_value1027=create_int_node(1,info)))):(((struct sNode*)(__right_value1028=create_int_node(0,info)))))))));
        if(__right_value1027) { __right_value1027 = come_decrement_ref_count2(__right_value1027, ((struct sNode*)__right_value1027)->finalize, ((struct sNode*)__right_value1027)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value1028) { __right_value1028 = come_decrement_ref_count2(__right_value1028, ((struct sNode*)__right_value1028)->finalize, ((struct sNode*)__right_value1028)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1946, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1947, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_652)?(((struct sNode*)(__right_value1036=create_int_node(1,info)))):(((struct sNode*)(__right_value1037=create_int_node(0,info)))))))));
        if(__right_value1036) { __right_value1036 = come_decrement_ref_count2(__right_value1036, ((struct sNode*)__right_value1036)->finalize, ((struct sNode*)__right_value1036)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value1037) { __right_value1037 = come_decrement_ref_count2(__right_value1037, ((struct sNode*)__right_value1037)->finalize, ((struct sNode*)__right_value1037)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1948, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1949, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1950, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1951, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_657,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1952, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_658=((void*)0);
        method_block_sline_659=info->sline;
        method_generics_types_660=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1958, "list$1sTypeph"))));
        node_661=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_655),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_657),method_block_658,method_block_sline_659,method_generics_types_660,info));
        if(        !catch_exception_654) {
            __dec_obj487=node_661;
            node_661=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_661)),info));
            if(__dec_obj487) { __dec_obj487 = come_decrement_ref_count2(__dec_obj487, ((struct sNode*)__dec_obj487)->finalize, ((struct sNode*)__dec_obj487)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_645;
        __result374__ = gComeFunResultObject = __result_obj__ = node_661;
        come_call_finalizer3(value_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_655) { obj_655 = come_decrement_ref_count2(obj_655, ((struct sNode*)obj_655)->finalize, ((struct sNode*)obj_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_657,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_660,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(value_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_655) { obj_655 = come_decrement_ref_count2(obj_655, ((struct sNode*)obj_655)->finalize, ((struct sNode*)obj_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_657,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_660,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_662=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_664=0;
                while(xisdigit(*info->p)) {
                    n_664=n_664*8+*info->p-48;
                    info->p++;
                }
                c_663=n_664;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_663=10;
                    info->p++;
                    break;
                    case 116:
                    c_663=9;
                    info->p++;
                    break;
                    case 114:
                    c_663=13;
                    info->p++;
                    break;
                    case 97:
                    c_663=7;
                    info->p++;
                    break;
                    case 102:
                    c_663=12;
                    info->p++;
                    break;
                    case 118:
                    c_663=11;
                    info->p++;
                    break;
                    case 98:
                    c_663=8;
                    info->p++;
                    break;
                    case 92:
                    c_663=92;
                    info->p++;
                    break;
                    case 48:
                    c_663=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_665=0;
                        while(xisdigit(*info->p)) {
                            n_665=n_665*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_663=n_665;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_666[128];
                        memset(&buf_666, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_666,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_667[2];
                            memset(&buf2_667, 0, sizeof(char)                            *(2)                            );
                            buf2_667[0]=*info->p;
                            buf2_667[1]=0;
                            info->p++;
                            strncat(buf_666,buf2_667,128);
                        }
                        n_668=strtoll(buf_666,((void*)0),0);
                        c_663=n_668;
                    }
                    break;
                    default:
                    c_663=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_663=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_662;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2087, "struct sNode");
            _inf_obj_value16=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value1066=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2087, "sCharNode")),c_663,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCharNode_finalize;
            _inf_value16->clone=(void*)sCharNode_clone;
            _inf_value16->compile=(void*)sCharNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCharNode_kind;
            __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1069=_inf_value16));
            come_call_finalizer3(__right_value1066,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1069) { __right_value1069 = come_decrement_ref_count2(__right_value1069, ((struct sNode*)__right_value1069)->finalize, ((struct sNode*)__right_value1069)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result377__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_670=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_672=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_673=0;
                while(xisdigit(*info->p)) {
                    n_673=n_673*8+*info->p-48;
                    info->p++;
                }
                c_671=n_673;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_671=10;
                    info->p++;
                    break;
                    case 116:
                    c_671=9;
                    info->p++;
                    break;
                    case 114:
                    c_671=13;
                    info->p++;
                    break;
                    case 97:
                    c_671=7;
                    info->p++;
                    break;
                    case 92:
                    c_671=92;
                    info->p++;
                    break;
                    case 48:
                    c_671=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_674=0;
                        while(xisdigit(*info->p)) {
                            n_674=n_674*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_671=n_674;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_675[128];
                        memset(&buf_675, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_675,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_676[2];
                            memset(&buf2_676, 0, sizeof(char)                            *(2)                            );
                            buf2_676[0]=*info->p;
                            buf2_676[1]=0;
                            info->p++;
                            strncat(buf_675,buf2_676,128);
                        }
                        n_677=strtoll(buf_675,((void*)0),0);
                        c_671=n_677;
                    }
                    break;
                    default:
                    c_671=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_672=(_Bool)0;
            p2_678=*(unsigned char*)info->p;
            if(            p2_678>127) {
                char str_680[6+1];
                memset(&str_680, 0, sizeof(char)                *(6+1)                );
                size_679=((p2_678&128)>>7)+((p2_678&64)>>6)+((p2_678&32)>>5)+((p2_678&16)>>4);
                if(                size_679>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_680,info->p,size_679);
                    str_680[size_679]=0;
                    if(                    mbtowc(&c_671,str_680,size_679)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_679;
                    }
                }
            }
            else {
                c_671=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_670;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2229, "struct sNode");
            _inf_obj_value17=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value1071=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2229, "sWCharNode")),c_671,quote_672,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sWCharNode_finalize;
            _inf_value17->clone=(void*)sWCharNode_clone;
            _inf_value17->compile=(void*)sWCharNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sWCharNode_kind;
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1074=_inf_value17));
            come_call_finalizer3(__right_value1071,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1074) { __right_value1074 = come_decrement_ref_count2(__right_value1074, ((struct sNode*)__right_value1074)->finalize, ((struct sNode*)__right_value1074)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result380__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_682=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_683=info->sline;
        value_684=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2240, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_685=info->p;
                sline_686=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_685;
                    info->sline=sline_686;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_684,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_684,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_684,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_687=info->sline;
                info->sline=sline_683;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_684,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_688=value_684->len;
        wstr_689=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_688+1)), "06str.c", 2291, "int"));
        str_690=value_684->buf;
        if(        mbstowcs(wstr_689,str_690,len_688+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_689[len_688]=0;
        info->sline_real=sline_real_682;
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2303, "struct sNode");
        _inf_obj_value18=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value1079=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2303, "sWStringNode")),(int*)come_increment_ref_count(wstr_689),sline_683,info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sWStringNode_finalize;
        _inf_value18->clone=(void*)sWStringNode_clone;
        _inf_value18->compile=(void*)sWStringNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sWStringNode_kind;
        __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1083=_inf_value18));
        come_call_finalizer3(value_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_689 = come_decrement_ref_count2(wstr_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1079,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1083) { __right_value1083 = come_decrement_ref_count2(__right_value1083, ((struct sNode*)__right_value1083)->finalize, ((struct sNode*)__right_value1083)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result383__;
        come_call_finalizer3(value_684,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_689 = come_decrement_ref_count2(wstr_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_692=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_693=info->sline;
        exps_694=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2313, "list$1sNodeph"))));
        value_695=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2314, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_696=info->p;
                sline_697=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_696;
                    info->sline=sline_697;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_695,37);
                buffer_append_char(value_695,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_695,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_698=0;
                    while(xisdigit(*info->p)&&len_698<3) {
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        len_698++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_695,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_699=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_694,(struct sNode*)come_increment_ref_count(exp_699));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_695,"%s");
                    if(exp_699) { exp_699 = come_decrement_ref_count2(exp_699, ((struct sNode*)exp_699)->finalize, ((struct sNode*)exp_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_695,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_700=info->sline;
                info->sline=sline_693;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_695,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_692;
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2462, "struct sNode");
        _inf_obj_value19=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value1091=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2462, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_695)),(struct list$1sNodeph*)come_increment_ref_count(exps_694),sline_693,info))));
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sSStringNode_finalize;
        _inf_value19->clone=(void*)sSStringNode_clone;
        _inf_value19->compile=(void*)sSStringNode_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sline_real=(void*)sNodeBase_sline_real;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sSStringNode_kind;
        __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1096=_inf_value19));
        come_call_finalizer3(exps_694,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_695,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1091,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1096) { __right_value1096 = come_decrement_ref_count2(__right_value1096, ((struct sNode*)__right_value1096)->finalize, ((struct sNode*)__right_value1096)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result386__;
        come_call_finalizer3(exps_694,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_695,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_702=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_703=info->p;
        no_comma_704=info->no_comma;
        info->no_comma=(_Bool)1;
        node_705=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_704;
        p2_706=info->p;
        first_element_source_707=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2481, "buffer"))));
        buffer_append(first_element_source_707,p_703,p2_706-p_703);
        buffer_append_char(first_element_source_707,0);
        list_elements_708=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2486, "list$1sNodeph"))));
        map_keys_709=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2488, "list$1sNodeph"))));
        map_elements_710=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2489, "list$1sNodeph"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(map_keys_709,(struct sNode*)come_increment_ref_count(node_705));
            no_comma_711=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_712=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_711;
            list$1sNodeph_push_back(map_elements_710,(struct sNode*)come_increment_ref_count(node2_712));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2512, "struct sNode");
                _inf_obj_value20=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1108=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2512, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_709),(struct list$1sNodeph*)come_increment_ref_count(map_elements_710),info))));
                _inf_value20->_protocol_obj=_inf_obj_value20;
                _inf_value20->finalize=(void*)sMapNode_finalize;
                _inf_value20->clone=(void*)sMapNode_clone;
                _inf_value20->compile=(void*)sMapNode_compile;
                _inf_value20->sline=(void*)sNodeBase_sline;
                _inf_value20->sline_real=(void*)sNodeBase_sline_real;
                _inf_value20->sname=(void*)sNodeBase_sname;
                _inf_value20->terminated=(void*)sNodeBase_terminated;
                _inf_value20->kind=(void*)sMapNode_kind;
                __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1113=_inf_value20));
                if(node2_712) { node2_712 = come_decrement_ref_count2(node2_712, ((struct sNode*)node2_712)->finalize, ((struct sNode*)node2_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_708,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_710,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1108,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1113) { __right_value1113 = come_decrement_ref_count2(__right_value1113, ((struct sNode*)__right_value1113)->finalize, ((struct sNode*)__right_value1113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result389__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_714=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_715=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_714;
                    list$1sNodeph_push_back(map_keys_709,(struct sNode*)come_increment_ref_count(node2_715));
                    expected_next_character(58,info);
                    no_comma_714=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_716=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_714;
                    list$1sNodeph_push_back(map_elements_710,(struct sNode*)come_increment_ref_count(node3_716));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(node2_715) { node2_715 = come_decrement_ref_count2(node2_715, ((struct sNode*)node2_715)->finalize, ((struct sNode*)node2_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_716) { node3_716 = come_decrement_ref_count2(node3_716, ((struct sNode*)node3_716)->finalize, ((struct sNode*)node3_716)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_715) { node2_715 = come_decrement_ref_count2(node2_715, ((struct sNode*)node2_715)->finalize, ((struct sNode*)node2_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_716) { node3_716 = come_decrement_ref_count2(node3_716, ((struct sNode*)node3_716)->finalize, ((struct sNode*)node3_716)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2557, "struct sNode");
                _inf_obj_value21=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1117=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2557, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_709),(struct list$1sNodeph*)come_increment_ref_count(map_elements_710),info))));
                _inf_value21->_protocol_obj=_inf_obj_value21;
                _inf_value21->finalize=(void*)sMapNode_finalize;
                _inf_value21->clone=(void*)sMapNode_clone;
                _inf_value21->compile=(void*)sMapNode_compile;
                _inf_value21->sline=(void*)sNodeBase_sline;
                _inf_value21->sline_real=(void*)sNodeBase_sline_real;
                _inf_value21->sname=(void*)sNodeBase_sname;
                _inf_value21->terminated=(void*)sNodeBase_terminated;
                _inf_value21->kind=(void*)sMapNode_kind;
                __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1122=_inf_value21));
                if(node2_712) { node2_712 = come_decrement_ref_count2(node2_712, ((struct sNode*)node2_712)->finalize, ((struct sNode*)node2_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_708,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_710,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1117,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1122) { __right_value1122 = come_decrement_ref_count2(__right_value1122, ((struct sNode*)__right_value1122)->finalize, ((struct sNode*)__right_value1122)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result392__;
            }
            if(node2_712) { node2_712 = come_decrement_ref_count2(node2_712, ((struct sNode*)node2_712)->finalize, ((struct sNode*)node2_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_708,(struct sNode*)come_increment_ref_count(node_705));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_708,(struct sNode*)come_increment_ref_count(node_705));
            while((_Bool)1) {
                no_comma_718=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_719=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_718;
                list$1sNodeph_push_back(list_elements_708,(struct sNode*)come_increment_ref_count(node2_719));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_719) { node2_719 = come_decrement_ref_count2(node2_719, ((struct sNode*)node2_719)->finalize, ((struct sNode*)node2_719)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_719) { node2_719 = come_decrement_ref_count2(node2_719, ((struct sNode*)node2_719)->finalize, ((struct sNode*)node2_719)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodeph_length(list_elements_708)>0) {
            info->sline_real=sline_real_702;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2609, "struct sNode");
            _inf_obj_value22=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1125=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2609, "sListNode")),(struct list$1sNodeph*)come_increment_ref_count(list_elements_708),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sListNode_finalize;
            _inf_value22->clone=(void*)sListNode_clone;
            _inf_value22->compile=(void*)sListNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sListNode_kind;
            __result395__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1129=_inf_value22));
            if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(first_element_source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_708,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_710,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1125,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1129) { __right_value1129 = come_decrement_ref_count2(__right_value1129, ((struct sNode*)__right_value1129)->finalize, ((struct sNode*)__right_value1129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result395__;
        }
        else {
        }
        if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(first_element_source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_708,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_709,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_710,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_721=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result396__ = gComeFunResultObject = __result_obj__ = node_721;
        if(node_721) { node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result396__;
        if(node_721) { node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result397__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj474;
struct buffer* __dec_obj475;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj474=self->sname;
            __dec_obj474 = come_decrement_ref_count2(__dec_obj474, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj475=self->value;
            come_call_finalizer3(__dec_obj475,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result366__;
void* __right_value955 = (void*)0;
struct sBufferNode* result_631;
void* __right_value956 = (void*)0;
char* __dec_obj476;
void* __right_value957 = (void*)0;
struct buffer* __dec_obj477;
struct sBufferNode* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_631=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "sBufferNode"));
    if(    self!=((void*)0)) {
        result_631->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj476=result_631->sname;
        result_631->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj476 = come_decrement_ref_count2(__dec_obj476, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj477=result_631->value;
        result_631->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        come_call_finalizer3(__dec_obj477,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_631->size=self->size;
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_631;
    come_call_finalizer3(result_631,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj483;
char* __dec_obj484;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj483=self->sname;
            __dec_obj483 = come_decrement_ref_count2(__dec_obj483, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj484=self->value;
            __dec_obj484 = come_decrement_ref_count2(__dec_obj484, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result372__;
void* __right_value1017 = (void*)0;
struct sStrNode* result_656;
void* __right_value1018 = (void*)0;
char* __dec_obj485;
void* __right_value1019 = (void*)0;
char* __dec_obj486;
struct sStrNode* __result373__;
    if(    self==(void*)0) {
        __result372__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    result_656=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"));
    if(    self!=((void*)0)) {
        result_656->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj485=result_656->sname;
        result_656->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj485 = come_decrement_ref_count2(__dec_obj485, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_656->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj486=result_656->value;
        result_656->value=(char*)come_increment_ref_count(string_clone(self->value));
        __dec_obj486 = come_decrement_ref_count2(__dec_obj486, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result373__ = gComeFunResultObject = __result_obj__ = result_656;
    come_call_finalizer3(result_656,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj488;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj488=self->sname;
            __dec_obj488 = come_decrement_ref_count2(__dec_obj488, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result375__;
void* __right_value1067 = (void*)0;
struct sCharNode* result_669;
void* __right_value1068 = (void*)0;
char* __dec_obj489;
struct sCharNode* __result376__;
    if(    self==(void*)0) {
        __result375__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    result_669=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"));
    if(    self!=((void*)0)) {
        result_669->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj489=result_669->sname;
        result_669->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj489 = come_decrement_ref_count2(__dec_obj489, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_669->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_669->value=self->value;
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_669;
    come_call_finalizer3(result_669,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj490;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj490=self->sname;
            __dec_obj490 = come_decrement_ref_count2(__dec_obj490, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result378__;
void* __right_value1072 = (void*)0;
struct sWCharNode* result_681;
void* __right_value1073 = (void*)0;
char* __dec_obj491;
struct sWCharNode* __result379__;
    if(    self==(void*)0) {
        __result378__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    result_681=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"));
    if(    self!=((void*)0)) {
        result_681->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj491=result_681->sname;
        result_681->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj491 = come_decrement_ref_count2(__dec_obj491, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_681->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_681->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_681->quote=self->quote;
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_681;
    come_call_finalizer3(result_681,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj492;
int* __dec_obj493;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj492=self->sname;
            __dec_obj492 = come_decrement_ref_count2(__dec_obj492, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj493=self->value;
            __dec_obj493 = come_decrement_ref_count2(__dec_obj493, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result381__;
void* __right_value1080 = (void*)0;
struct sWStringNode* result_691;
void* __right_value1081 = (void*)0;
char* __dec_obj494;
void* __right_value1082 = (void*)0;
int* __dec_obj495;
struct sWStringNode* __result382__;
    if(    self==(void*)0) {
        __result381__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    result_691=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"));
    if(    self!=((void*)0)) {
        result_691->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj494=result_691->sname;
        result_691->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj494 = come_decrement_ref_count2(__dec_obj494, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_691->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj495=result_691->value;
        result_691->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*"));
        __dec_obj495 = come_decrement_ref_count2(__dec_obj495, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result382__ = gComeFunResultObject = __result_obj__ = result_691;
    come_call_finalizer3(result_691,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj496;
char* __dec_obj497;
struct list$1sNodeph* __dec_obj498;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj496=self->sname;
            __dec_obj496 = come_decrement_ref_count2(__dec_obj496, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj497=self->value;
            __dec_obj497 = come_decrement_ref_count2(__dec_obj497, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj498=self->exps;
            come_call_finalizer3(__dec_obj498,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result384__;
void* __right_value1092 = (void*)0;
struct sSStringNode* result_701;
void* __right_value1093 = (void*)0;
char* __dec_obj499;
void* __right_value1094 = (void*)0;
char* __dec_obj500;
void* __right_value1095 = (void*)0;
struct list$1sNodeph* __dec_obj501;
struct sSStringNode* __result385__;
    if(    self==(void*)0) {
        __result384__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    result_701=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"));
    if(    self!=((void*)0)) {
        result_701->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj499=result_701->sname;
        result_701->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj499 = come_decrement_ref_count2(__dec_obj499, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_701->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj500=result_701->value;
        result_701->value=(char*)come_increment_ref_count(string_clone(self->value));
        __dec_obj500 = come_decrement_ref_count2(__dec_obj500, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj501=result_701->exps;
        result_701->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj501,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_701;
    come_call_finalizer3(result_701,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj508;
struct list$1sNodeph* __dec_obj509;
struct list$1sNodeph* __dec_obj510;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj508=self->sname;
            __dec_obj508 = come_decrement_ref_count2(__dec_obj508, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj509=self->map_key_elements;
            come_call_finalizer3(__dec_obj509,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj510=self->map_elements;
            come_call_finalizer3(__dec_obj510,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result390__;
void* __right_value1118 = (void*)0;
struct sMapNode* result_717;
void* __right_value1119 = (void*)0;
char* __dec_obj511;
void* __right_value1120 = (void*)0;
struct list$1sNodeph* __dec_obj512;
void* __right_value1121 = (void*)0;
struct list$1sNodeph* __dec_obj513;
struct sMapNode* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_717=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"));
    if(    self!=((void*)0)) {
        result_717->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj511=result_717->sname;
        result_717->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj511 = come_decrement_ref_count2(__dec_obj511, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_717->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj512=result_717->map_key_elements;
        result_717->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_key_elements));
        come_call_finalizer3(__dec_obj512,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj513=result_717->map_elements;
        result_717->map_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_elements));
        come_call_finalizer3(__dec_obj513,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_717;
    come_call_finalizer3(result_717,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj514;
struct list$1sNodeph* __dec_obj515;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj514=self->sname;
            __dec_obj514 = come_decrement_ref_count2(__dec_obj514, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj515=self->list_elements;
            come_call_finalizer3(__dec_obj515,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result393__;
void* __right_value1126 = (void*)0;
struct sListNode* result_720;
void* __right_value1127 = (void*)0;
char* __dec_obj516;
void* __right_value1128 = (void*)0;
struct list$1sNodeph* __dec_obj517;
struct sListNode* __result394__;
    if(    self==(void*)0) {
        __result393__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    result_720=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"));
    if(    self!=((void*)0)) {
        result_720->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj516=result_720->sname;
        result_720->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj516 = come_decrement_ref_count2(__dec_obj516, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_720->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj517=result_720->list_elements;
        result_720->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->list_elements));
        come_call_finalizer3(__dec_obj517,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result394__ = gComeFunResultObject = __result_obj__ = result_720;
    come_call_finalizer3(result_720,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_722;
char* p_723;
char* name_724;
void* __right_value1133 = (void*)0;
char* __dec_obj518;
_Bool no_comma_725;
void* __right_value1134 = (void*)0;
struct sNode* node_726;
void* __right_value1135 = (void*)0;
struct sNode* __dec_obj519;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
struct sNode* _inf_value23;
struct sTupleNode* _inf_obj_value23;
void* __right_value1153 = (void*)0;
struct sNode* __result405__;
name_724 = (void*)0;
    tuple_elements_722=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2624, "list$1tuple2$2charphsNodephph"))));
    while((_Bool)1) {
        p_723=info->p;
        if(        named_tuple) {
            __dec_obj518=name_724;
            name_724=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj518 = come_decrement_ref_count2(__dec_obj518, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_725=info->no_comma;
        info->no_comma=(_Bool)1;
        node_726=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj519=node_726;
        node_726=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_726),info));
        if(__dec_obj519) { __dec_obj519 = come_decrement_ref_count2(__dec_obj519, ((struct sNode*)__dec_obj519)->finalize, ((struct sNode*)__dec_obj519)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_725;
        list$1tuple2$2charphsNodephph_push_back(tuple_elements_722,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2643, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(string_clone(name_724)),(struct sNode*)come_increment_ref_count(node_726))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            name_724 = come_decrement_ref_count2(name_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_726) { node_726 = come_decrement_ref_count2(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        name_724 = come_decrement_ref_count2(name_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_726) { node_726 = come_decrement_ref_count2(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2660, "struct sNode");
    _inf_obj_value23=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1143=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2660, "sTupleNode")),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_722),info))));
    _inf_value23->_protocol_obj=_inf_obj_value23;
    _inf_value23->finalize=(void*)sTupleNode_finalize;
    _inf_value23->clone=(void*)sTupleNode_clone;
    _inf_value23->compile=(void*)sTupleNode_compile;
    _inf_value23->sline=(void*)sNodeBase_sline;
    _inf_value23->sline_real=(void*)sNodeBase_sline_real;
    _inf_value23->sname=(void*)sNodeBase_sname;
    _inf_value23->terminated=(void*)sNodeBase_terminated;
    _inf_value23->kind=(void*)sTupleNode_kind;
    __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1153=_inf_value23));
    come_call_finalizer3(tuple_elements_722,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1143,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1153) { __right_value1153 = come_decrement_ref_count2(__right_value1153, ((struct sNode*)__right_value1153)->finalize, ((struct sNode*)__right_value1153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1136 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_727;
struct tuple2$2charphsNodeph* __dec_obj520;
void* __right_value1137 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_728;
struct tuple2$2charphsNodeph* __dec_obj523;
void* __right_value1138 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_729;
struct tuple2$2charphsNodeph* __dec_obj526;
struct list$1tuple2$2charphsNodephph* __result398__;
    if(    self->len==0) {
        litem_727=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1136=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsNodephph"))));
        litem_727->prev=((void*)0);
        litem_727->next=((void*)0);
        __dec_obj520=litem_727->item;
        litem_727->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj520,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_727;
        self->head=litem_727;
    }
    else if(    self->len==1) {
        litem_728=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1137=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsNodephph"))));
        litem_728->prev=self->head;
        litem_728->next=((void*)0);
        __dec_obj523=litem_728->item;
        litem_728->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj523,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_728;
        self->head->next=litem_728;
    }
    else {
        litem_729=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1138=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsNodephph"))));
        litem_729->prev=self->tail;
        litem_729->next=((void*)0);
        __dec_obj526=litem_729->item;
        litem_729->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj526,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_729;
        self->tail=litem_729;
    }
    self->len++;
    __result398__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj527;
struct sNode* __dec_obj528;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj527=self->v1;
            __dec_obj527 = come_decrement_ref_count2(__dec_obj527, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj528=self->v2;
            if(__dec_obj528) { __dec_obj528 = come_decrement_ref_count2(__dec_obj528, ((struct sNode*)__dec_obj528)->finalize, ((struct sNode*)__dec_obj528)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj529;
struct list$1tuple2$2charphsNodephph* __dec_obj530;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj529=self->sname;
            __dec_obj529 = come_decrement_ref_count2(__dec_obj529, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj530=self->tuple_elements;
            come_call_finalizer3(__dec_obj530,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result399__;
void* __right_value1144 = (void*)0;
struct sTupleNode* result_730;
void* __right_value1145 = (void*)0;
char* __dec_obj531;
void* __right_value1152 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj536;
struct sTupleNode* __result404__;
    if(    self==(void*)0) {
        __result399__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result399__;
    }
    result_730=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"));
    if(    self!=((void*)0)) {
        result_730->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj531=result_730->sname;
        result_730->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj531 = come_decrement_ref_count2(__dec_obj531, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_730->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj536=result_730->tuple_elements;
        result_730->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj536,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_730;
    come_call_finalizer3(result_730,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result400__;
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_731;
struct list_item$1tuple2$2charphsNodephph* it_732;
void* __right_value1151 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result403__;
    if(    self==((void*)0)) {
        __result400__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result400__;
    }
    result_731=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple2$2charphsNodephph"))));
    it_732=self->head;
    while(it_732!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_731,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_732->item)));
        it_732=it_732->next;
    }
    __result403__ = gComeFunResultObject = __result_obj__ = result_731;
    come_call_finalizer3(result_731,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result401__;
void* __right_value1148 = (void*)0;
struct tuple2$2charphsNodeph* result_733;
void* __right_value1149 = (void*)0;
char* __dec_obj532;
void* __right_value1150 = (void*)0;
struct sNode* __dec_obj533;
struct tuple2$2charphsNodeph* __result402__;
    if(    self==(void*)0) {
        __result401__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result401__;
    }
    result_733=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj532=result_733->v1;
        result_733->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj532 = come_decrement_ref_count2(__dec_obj532, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj533=result_733->v2;
        result_733->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj533) { __dec_obj533 = come_decrement_ref_count2(__dec_obj533, ((struct sNode*)__dec_obj533)->finalize, ((struct sNode*)__dec_obj533)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result402__ = gComeFunResultObject = __result_obj__ = result_733;
    come_call_finalizer3(result_733,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj534;
struct sNode* __dec_obj535;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj534=self->v1;
            __dec_obj534 = come_decrement_ref_count2(__dec_obj534, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj535=self->v2;
            if(__dec_obj535) { __dec_obj535 = come_decrement_ref_count2(__dec_obj535, ((struct sNode*)__dec_obj535)->finalize, ((struct sNode*)__dec_obj535)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1154 = (void*)0;
void* __right_value1155 = (void*)0;
struct list$1sNodeph* tuple_elements_734;
struct sNode* node_735;
void* __right_value1156 = (void*)0;
struct sNode* node2_736;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct sNode* _inf_value24;
struct sSomeNode* _inf_obj_value24;
void* __right_value1162 = (void*)0;
struct sNode* __result408__;
    tuple_elements_734=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2665, "list$1sNodeph"))));
    node_735=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodeph_push_back(tuple_elements_734,(struct sNode*)come_increment_ref_count(node_735));
    node2_736=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_734,(struct sNode*)come_increment_ref_count(node2_736));
    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2675, "struct sNode");
    _inf_obj_value24=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1158=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2675, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_734),info))));
    _inf_value24->_protocol_obj=_inf_obj_value24;
    _inf_value24->finalize=(void*)sSomeNode_finalize;
    _inf_value24->clone=(void*)sSomeNode_clone;
    _inf_value24->compile=(void*)sSomeNode_compile;
    _inf_value24->sline=(void*)sNodeBase_sline;
    _inf_value24->sline_real=(void*)sNodeBase_sline_real;
    _inf_value24->sname=(void*)sNodeBase_sname;
    _inf_value24->terminated=(void*)sNodeBase_terminated;
    _inf_value24->kind=(void*)sSomeNode_kind;
    __result408__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1162=_inf_value24));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(tuple_elements_734,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_735) { node_735 = come_decrement_ref_count2(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_736) { node2_736 = come_decrement_ref_count2(node2_736, ((struct sNode*)node2_736)->finalize, ((struct sNode*)node2_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1158,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1162) { __right_value1162 = come_decrement_ref_count2(__right_value1162, ((struct sNode*)__right_value1162)->finalize, ((struct sNode*)__right_value1162)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result408__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
struct list$1sNodeph* tuple_elements_738;
void* __right_value1165 = (void*)0;
struct sNode* node_739;
void* __right_value1166 = (void*)0;
struct sNode* __dec_obj541;
void* __right_value1167 = (void*)0;
struct sNode* node2_740;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
struct sNode* _inf_value25;
struct sSomeNode* _inf_obj_value25;
void* __right_value1173 = (void*)0;
struct sNode* __result411__;
    tuple_elements_738=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2680, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_739=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj541=node_739;
    node_739=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_739),info));
    if(__dec_obj541) { __dec_obj541 = come_decrement_ref_count2(__dec_obj541, ((struct sNode*)__dec_obj541)->finalize, ((struct sNode*)__dec_obj541)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_738,(struct sNode*)come_increment_ref_count(node_739));
    node2_740=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_738,(struct sNode*)come_increment_ref_count(node2_740));
    _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2693, "struct sNode");
    _inf_obj_value25=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1169=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2693, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_738),info))));
    _inf_value25->_protocol_obj=_inf_obj_value25;
    _inf_value25->finalize=(void*)sSomeNode_finalize;
    _inf_value25->clone=(void*)sSomeNode_clone;
    _inf_value25->compile=(void*)sSomeNode_compile;
    _inf_value25->sline=(void*)sNodeBase_sline;
    _inf_value25->sline_real=(void*)sNodeBase_sline_real;
    _inf_value25->sname=(void*)sNodeBase_sname;
    _inf_value25->terminated=(void*)sNodeBase_terminated;
    _inf_value25->kind=(void*)sSomeNode_kind;
    __result411__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1173=_inf_value25));
    come_call_finalizer3(tuple_elements_738,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_739) { node_739 = come_decrement_ref_count2(node_739, ((struct sNode*)node_739)->finalize, ((struct sNode*)node_739)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_740) { node2_740 = come_decrement_ref_count2(node2_740, ((struct sNode*)node2_740)->finalize, ((struct sNode*)node2_740)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1169,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1173) { __right_value1173 = come_decrement_ref_count2(__right_value1173, ((struct sNode*)__right_value1173)->finalize, ((struct sNode*)__right_value1173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj542;
struct list$1sNodeph* __dec_obj543;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj542=self->sname;
            __dec_obj542 = come_decrement_ref_count2(__dec_obj542, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj543=self->tuple_elements;
            come_call_finalizer3(__dec_obj543,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result409__;
void* __right_value1170 = (void*)0;
struct sSomeNode* result_741;
void* __right_value1171 = (void*)0;
char* __dec_obj544;
void* __right_value1172 = (void*)0;
struct list$1sNodeph* __dec_obj545;
struct sSomeNode* __result410__;
    if(    self==(void*)0) {
        __result409__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    result_741=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "sSomeNode"));
    if(    self!=((void*)0)) {
        result_741->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj544=result_741->sname;
        result_741->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj544 = come_decrement_ref_count2(__dec_obj544, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_741->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj545=result_741->tuple_elements;
        result_741->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj545,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result410__ = gComeFunResultObject = __result_obj__ = result_741;
    come_call_finalizer3(result_741,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1174 = (void*)0;
void* __right_value1175 = (void*)0;
struct list$1sNodeph* tuple_elements_742;
void* __right_value1176 = (void*)0;
struct sNode* node_743;
void* __right_value1177 = (void*)0;
struct sNode* __dec_obj546;
void* __right_value1178 = (void*)0;
struct sNode* node2_744;
struct sNode* node3_745;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
struct sNode* _inf_value26;
struct sNoneNode* _inf_obj_value26;
void* __right_value1184 = (void*)0;
struct sNode* __result414__;
    tuple_elements_742=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2698, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_743=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj546=node_743;
    node_743=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_743),info));
    if(__dec_obj546) { __dec_obj546 = come_decrement_ref_count2(__dec_obj546, ((struct sNode*)__dec_obj546)->finalize, ((struct sNode*)__dec_obj546)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_744=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodeph_push_back(tuple_elements_742,(struct sNode*)come_increment_ref_count(node2_744));
    node3_745=(struct sNode*)come_increment_ref_count(node_743);
    list$1sNodeph_push_back(tuple_elements_742,(struct sNode*)come_increment_ref_count(node3_745));
    _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2713, "struct sNode");
    _inf_obj_value26=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1180=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2713, "sNoneNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_742),info))));
    _inf_value26->_protocol_obj=_inf_obj_value26;
    _inf_value26->finalize=(void*)sNoneNode_finalize;
    _inf_value26->clone=(void*)sNoneNode_clone;
    _inf_value26->compile=(void*)sNoneNode_compile;
    _inf_value26->sline=(void*)sNodeBase_sline;
    _inf_value26->sline_real=(void*)sNodeBase_sline_real;
    _inf_value26->sname=(void*)sNodeBase_sname;
    _inf_value26->terminated=(void*)sNodeBase_terminated;
    _inf_value26->kind=(void*)sNoneNode_kind;
    __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1184=_inf_value26));
    come_call_finalizer3(tuple_elements_742,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_744) { node2_744 = come_decrement_ref_count2(node2_744, ((struct sNode*)node2_744)->finalize, ((struct sNode*)node2_744)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_745) { node3_745 = come_decrement_ref_count2(node3_745, ((struct sNode*)node3_745)->finalize, ((struct sNode*)node3_745)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1180,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1184) { __right_value1184 = come_decrement_ref_count2(__right_value1184, ((struct sNode*)__right_value1184)->finalize, ((struct sNode*)__right_value1184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj547;
struct list$1sNodeph* __dec_obj548;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj547=self->sname;
            __dec_obj547 = come_decrement_ref_count2(__dec_obj547, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj548=self->tuple_elements;
            come_call_finalizer3(__dec_obj548,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result412__;
void* __right_value1181 = (void*)0;
struct sNoneNode* result_746;
void* __right_value1182 = (void*)0;
char* __dec_obj549;
void* __right_value1183 = (void*)0;
struct list$1sNodeph* __dec_obj550;
struct sNoneNode* __result413__;
    if(    self==(void*)0) {
        __result412__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    result_746=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "sNoneNode"));
    if(    self!=((void*)0)) {
        result_746->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj549=result_746->sname;
        result_746->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj549 = come_decrement_ref_count2(__dec_obj549, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_746->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj550=result_746->tuple_elements;
        result_746->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj550,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result413__ = gComeFunResultObject = __result_obj__ = result_746;
    come_call_finalizer3(result_746,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

