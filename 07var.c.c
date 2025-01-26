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
struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
    char* attribute;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNodephsNodeph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNodephsNodephph
{
    struct tuple2$2sNodephsNodeph* item;
    struct list_item$1tuple2$2sNodephsNodephph* prev;
    struct list_item$1tuple2$2sNodephsNodephph* next;
};

struct list$1tuple2$2sNodephsNodephph
{
    struct list_item$1tuple2$2sNodephsNodephph* head;
    struct list_item$1tuple2$2sNodephsNodephph* tail;
    int len;
    struct list_item$1tuple2$2sNodephsNodephph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNodephsNodephph* initializer;
};

struct tuple2$2voidpsNodeph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* initializer;
};

struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_remove(struct map$2charphsVarph* self, char* key);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1objectph_length(struct list$1objectph* self);
static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self);
static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static void sNewChannel_finalize(struct sNewChannel* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sNode* expression_node_v95(struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj33;
void* __right_value297 = (void*)0;
struct sType* __dec_obj90;
struct sNode* __dec_obj91;
void* __right_value298 = (void*)0;
struct list$1charph* __dec_obj92;
void* __right_value309 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj115;
char* __dec_obj116;
struct sStoreNode* __result236__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj90=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj91=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj92=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(multiple_assign));
    come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj115=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare));
    come_call_finalizer3(__dec_obj115,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->attribute;
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
char* __result237__;
    __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value310=__builtin_string("sStoreNode")));
    __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value311 = (void*)0;
struct sVar* var__314;
void* __right_value312 = (void*)0;
struct sType* type_336;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_337;
struct tuple3$3sTypephcharphsNodeph* it_340;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1 = (void*)0;
struct sType* type_343=0;
char* var_name_344=0;
struct sNode* right_value_345=0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
_Bool __result253__;
void* __right_value315 = (void*)0;
struct sType* left_type_346;
_Bool Value_347;
_Bool __result254__;
void* __right_value316 = (void*)0;
struct CVALUE* come_value_348;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
_Bool Value_349;
void* __right_value320 = (void*)0;
struct CVALUE* right_value_350;
struct sType* right_type_351;
int i_352;
struct list$1charph* o2_saved_353;
char* it_356;
void* __right_value321 = (void*)0;
struct sVar* var__359;
void* __right_value322 = (void*)0;
struct object* __tmp_infY1;
struct sType* right_type2_360;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* multiple_var_name_365;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* __dec_obj131;
struct list$1charph* o2_saved_366;
char* it_367;
void* __right_value327 = (void*)0;
struct object* __tmp_infY2;
void* __right_value328 = (void*)0;
struct sType* right_type2_368;
struct sVar* var__369;
void* __right_value329 = (void*)0;
struct sType* var_type_370;
void* __right_value330 = (void*)0;
struct sType* left_type_371;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct CVALUE* right_value2_372;
void* __right_value333 = (void*)0;
char* __dec_obj132;
void* __right_value334 = (void*)0;
struct sType* __dec_obj133;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_373;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
char* __dec_obj134;
void* __right_value340 = (void*)0;
char* __dec_obj135;
void* __right_value341 = (void*)0;
struct sType* __dec_obj136;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sVar* var__374;
void* __right_value344 = (void*)0;
struct sType* type_375;
void* __right_value345 = (void*)0;
_Bool __result263__;
void* __right_value346 = (void*)0;
struct sType* left_type_376;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1sNodeph* o2_saved_377;
struct sNode* it_380;
_Bool Value_383;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value354 = (void*)0;
char* __dec_obj137;
void* __right_value355 = (void*)0;
struct sType* __dec_obj138;
void* __right_value359 = (void*)0;
struct sVar* var__389;
void* __right_value360 = (void*)0;
struct sType* type_390;
void* __right_value361 = (void*)0;
_Bool Value_391;
void* __right_value362 = (void*)0;
_Bool array_initializer_392;
void* __right_value363 = (void*)0;
_Bool struct_initializer_393;
void* __right_value364 = (void*)0;
_Bool new_channel_394;
void* __right_value365 = (void*)0;
struct CVALUE* right_value_395;
struct sType* right_type_396;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sType* var_type_397;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sType* left_type_398;
void* __right_value370 = (void*)0;
struct sVar* var__399;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value374 = (void*)0;
char* __dec_obj142;
void* __right_value375 = (void*)0;
struct sVar* var__401;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value379 = (void*)0;
char* __dec_obj143;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value385 = (void*)0;
char* __dec_obj144;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value391 = (void*)0;
char* __dec_obj145;
void* __right_value392 = (void*)0;
struct sType* __dec_obj146;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value396 = (void*)0;
char* __dec_obj147;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* __dec_obj148;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct CVALUE* come_value_406;
void* __right_value404 = (void*)0;
char* __dec_obj149;
void* __right_value405 = (void*)0;
struct sType* __dec_obj150;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
_Bool __result271__;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_407;
void* __right_value411 = (void*)0;
char* __dec_obj151;
void* __right_value412 = (void*)0;
struct sType* __dec_obj152;
_Bool Value_408;
void* __right_value413 = (void*)0;
_Bool new_channel_409;
void* __right_value414 = (void*)0;
struct CVALUE* right_value_410;
struct sType* right_type_411;
struct sClass* current_stack_frame_struct_412;
void* __right_value415 = (void*)0;
_Bool _if_conditional1;
struct sVar* parent_var_413;
struct sType* left_type_414;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* c_value_415;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_416;
void* __right_value421 = (void*)0;
char* __dec_obj153;
void* __right_value422 = (void*)0;
char* __dec_obj154;
void* __right_value423 = (void*)0;
struct sType* __dec_obj155;
_Bool __result272__;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
char* c_value_417;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value429 = (void*)0;
char* __dec_obj156;
void* __right_value430 = (void*)0;
char* __dec_obj157;
void* __right_value431 = (void*)0;
struct sType* __dec_obj158;
_Bool __result273__;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
_Bool __result274__;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value436 = (void*)0;
char* __dec_obj159;
void* __right_value437 = (void*)0;
char* __dec_obj160;
void* __right_value438 = (void*)0;
struct sType* __dec_obj161;
_Bool __result275__;
struct sVar* var__420;
_Bool __result276__;
void* __right_value439 = (void*)0;
struct sType* __dec_obj162;
void* __right_value440 = (void*)0;
struct sType* left_type_421;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value445 = (void*)0;
char* __dec_obj163;
void* __right_value446 = (void*)0;
struct sType* __dec_obj164;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value451 = (void*)0;
char* __dec_obj165;
void* __right_value452 = (void*)0;
struct sType* __dec_obj166;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value457 = (void*)0;
char* __dec_obj167;
void* __right_value458 = (void*)0;
struct sType* __dec_obj168;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value461 = (void*)0;
char* __dec_obj169;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* __dec_obj170;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
_Bool __result277__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_426;
void* __right_value468 = (void*)0;
char* __dec_obj171;
void* __right_value469 = (void*)0;
struct sType* __dec_obj172;
    if(    self->multiple_declare) {
        var__314=((struct sVar*)(__right_value311=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value311,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__314) {
            if(            var__314->mType->mHeap) {
                free_object(var__314->mType,var__314->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_336=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_336->mFunctionParam=(_Bool)0;
        for(        o2_saved_337=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_340=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_337));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_337));        it_340=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_337))        ){
            multiple_assign_var1=it_340;
            type_343=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_344=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_345=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__314=((struct sVar*)(__right_value313=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,var_name_344)));
            come_call_finalizer3(__right_value313,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            var__314) {
                if(                var__314->mType->mHeap) {
                    free_object(var__314->mType,var__314->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                map$2charphsVarph_remove(info->lv_table->mVars,var_name_344);
            }
            add_variable_to_table(var_name_344,(struct sType*)come_increment_ref_count(sType_clone(type_343)),info);
            var__314=get_variable_from_table(info->lv_table,var_name_344);
            if(            var__314==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_340);
                __result253__ = (_Bool)1;
                come_call_finalizer3(type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_344 = come_decrement_ref_count2(var_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_345) { right_value_345 = come_decrement_ref_count2(right_value_345, ((struct sNode*)right_value_345)->finalize, ((struct sNode*)right_value_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_337,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result253__;
            }
            left_type_346=(struct sType*)come_increment_ref_count(sType_clone(var__314->mType));
            if(            right_value_345) {
                Value_347=node_compile(right_value_345,info);
                if(                !Value_347) {
                    __result254__ = (_Bool)0;
                    come_call_finalizer3(type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_344 = come_decrement_ref_count2(var_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_345) { right_value_345 = come_decrement_ref_count2(right_value_345, ((struct sNode*)right_value_345)->finalize, ((struct sNode*)right_value_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_337,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result254__;
                }
                else {
                }
                come_value_348=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value317=make_define_var(left_type_346,var__314->mCValueName,(_Bool)0,info))),come_value_348->c_value);
                __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_348,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__314->mCValueName,((char*)(__right_value318=make_type_name_string(left_type_346,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value319=make_define_var(left_type_346,var__314->mCValueName,(_Bool)0,info))));
                __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_344 = come_decrement_ref_count2(var_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_345) { right_value_345 = come_decrement_ref_count2(right_value_345, ((struct sNode*)right_value_345)->finalize, ((struct sNode*)right_value_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_337,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_349=node_compile(self->right_value,info);
        if(        !Value_349) {
            return (_Bool)0;
        }
        else {
        }
        right_value_350=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_351=right_value_350->type;
        dec_stack_ptr(1,info);
        if(        right_type_351->mNoSolvedGenericsType->v1) {
            right_type_351=right_type_351->mNoSolvedGenericsType->v1;
        }
        i_352=0;
        for(        o2_saved_353=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_356=list$1charph_begin((o2_saved_353));        !list$1charph_end((o2_saved_353));        it_356=list$1charph_next((o2_saved_353))        ){
            if(            i_352<list$1objectph_length(right_type_351->mGenericsTypes)) {
                var__359=((struct sVar*)(__right_value321=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,it_356)));
                come_call_finalizer3(__right_value321,sVar_finalize, 0, 1, 0, 0, (void*)0);
                if(                var__359) {
                    if(                    var__359->mType->mHeap) {
                        free_object(var__359->mType,var__359->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    map$2charphsVarph_remove(info->lv_table->mVars,it_356);
                }
                right_type2_360=((__tmp_infY1=((struct object*)come_null_check(((struct object*)(__right_value322=list$1objectphp_operator_load_element(right_type_351->mGenericsTypes,i_352))), "07var.c", 107, 0))),((struct sType*)(__tmp_infY1 ? __tmp_infY1->_protocol_obj:(void*)0)));
                if(__right_value322) { __right_value322 = come_decrement_ref_count2(__right_value322, ((struct object*)__right_value322)->finalize, ((struct object*)__right_value322)->_protocol_obj, 1, 0, 0, (void*)0); } 
                right_type2_360->mFunctionParam=(_Bool)0;
                add_variable_to_table(it_356,(struct sType*)come_increment_ref_count(sType_clone(right_type2_360)),info);
            }
            i_352++;
        }
        come_call_finalizer3(o2_saved_353,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_364=0;
        multiple_var_name_365=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_364));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value325=make_define_var(right_value_350->type,multiple_var_name_365,(_Bool)0,info))));
        __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_365,right_value_350->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_365,right_value_350->c_value);
        }
        __dec_obj131=right_value_350->c_value;
        right_value_350->c_value=(char*)come_increment_ref_count(string_clone(multiple_var_name_365));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_352=0;
        for(        o2_saved_366=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_367=list$1charph_begin((o2_saved_366));        !list$1charph_end((o2_saved_366));        it_367=list$1charph_next((o2_saved_366))        ){
            if(            i_352<list$1objectph_length(right_type_351->mGenericsTypes)) {
                right_type2_368=(struct sType*)come_increment_ref_count(sType_clone(((__tmp_infY2=((struct object*)come_null_check(((struct object*)(__right_value327=list$1objectphp_operator_load_element(right_type_351->mGenericsTypes,i_352))), "07var.c", 131, 1))),((struct sType*)(__tmp_infY2 ? __tmp_infY2->_protocol_obj:(void*)0)))));
                if(__right_value327) { __right_value327 = come_decrement_ref_count2(__right_value327, ((struct object*)__right_value327)->finalize, ((struct object*)__right_value327)->_protocol_obj, 1, 0, 0, (void*)0); } 
                var__369=get_variable_from_table(info->lv_table,it_367);
                var_type_370=(struct sType*)come_increment_ref_count(sType_clone(var__369->mType));
                var_type_370->mStatic=(_Bool)0;
                left_type_371=(struct sType*)come_increment_ref_count(sType_clone(var__369->mType));
                right_value2_372=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 140, "CVALUE"))));
                __dec_obj132=right_value2_372->c_value;
                right_value2_372->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_350->c_value,i_352+1));
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj133=right_value2_372->type;
                right_value2_372->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_368));
                come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
                right_value2_372->var=((void*)0);
                come_value_373=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 146, "CVALUE"))));
                check_assign_type(((char*)(__right_value338=xsprintf("\%s is assining to}",((char*)(__right_value337=string_to_string(self->name)))))),left_type_371,right_type2_368,come_value_373,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                right_type2_368->mHeap&&left_type_371->mHeap&&left_type_371->mPointerNum>0&&right_type2_368->mPointerNum>0) {
                    std_move(left_type_371,right_type2_368,right_value2_372,info,(_Bool)0);
                    __dec_obj134=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__369->mCValueName,right_value2_372->c_value));
                    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj135=come_value_373->c_value;
                    come_value_373->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__369->mCValueName,right_value2_372->c_value));
                    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj136=come_value_373->type;
                come_value_373->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_371));
                come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_373->var=var__369;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value342=make_define_var(left_type_371,var__369->mCValueName,(_Bool)0,info))));
                __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_373->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_373->c_value);
                }
                come_call_finalizer3(right_type2_368,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_370,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_372,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_373,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_352++;
        }
        come_call_finalizer3(o2_saved_366,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_350,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        multiple_var_name_365 = come_decrement_ref_count2(multiple_var_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->right_value==((void*)0)) {
        var__374=((struct sVar*)(__right_value343=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value343,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__374) {
            if(            var__374->mType->mHeap) {
                free_object(var__374->mType,var__374->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_375=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_375->mFunctionParam=(_Bool)0;
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_375)),info);
        var__374=get_variable_from_table(info->lv_table,self->name);
        if(        var__374==((void*)0)) {
            var__374=get_variable_from_table(info->gv_table,self->name);
            if(            var__374==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                __result263__ = (_Bool)1;
                come_call_finalizer3(type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result263__;
            }
        }
        left_type_376=(struct sType*)come_increment_ref_count(sType_clone(var__374->mType));
        if(        left_type_376->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__374->mCValueName);
        }
        else if(        list$1sNodeph_length(left_type_376->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value347=make_define_var(left_type_376,var__374->mCValueName,(_Bool)0,info))));
            __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__374->mCValueName,((char*)(__right_value348=make_type_name_string(left_type_376,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_377=(struct list$1sNodeph*)come_increment_ref_count((left_type_376->mArrayNum)),it_380=list$1sNodeph_begin((o2_saved_377));            !list$1sNodeph_end((o2_saved_377));            it_380=list$1sNodeph_next((o2_saved_377))            ){
                Value_383=node_compile(it_380,info);
                if(                !Value_383) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_384=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_384->c_value);
                come_call_finalizer3(come_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_377,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value350=make_define_var(left_type_376,var__374->mCValueName,(_Bool)0,info))));
            __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_376->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__374->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__374->mCValueName,((char*)(__right_value351=make_type_name_string(left_type_376,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 239, "CVALUE"))));
            __dec_obj137=come_value_385->c_value;
            come_value_385->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__374->mCValueName));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj138=come_value_385->type;
            come_value_385->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_376));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_385->var=var__374;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_385));
            come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_376->mClass->mNumber&&left_type_376->mPointerNum==0) {
            var__374->mType->mAllocaValue=(_Bool)1;
        }
        come_call_finalizer3(type_375,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__389=((struct sVar*)(__right_value359=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value359,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__389) {
            if(            var__389->mType->mHeap) {
                free_object(var__389->mType,var__389->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_390=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            type_390->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_390)),info);
            come_call_finalizer3(type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_391=node_compile(self->right_value,info);
        if(        !Value_391) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_392=string_operator_equals(((char*)(__right_value362=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        struct_initializer_393=string_operator_equals(((char*)(__right_value363=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        new_channel_394=string_operator_equals(((char*)(__right_value364=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_395=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_396=right_value_395->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            right_type_396->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_396)),info);
        }
        else {
        }
        var__389=get_variable_from_table(info->lv_table,self->name);
        var_type_397=(struct sType*)come_increment_ref_count(sType_clone(var__389->mType));
        var_type_397->mStatic=(_Bool)0;
        if(        !array_initializer_392&&!struct_initializer_393&&!var__389->mType->mStatic&&!var_type_397->mConstant&&list$1sNodeph_length(var_type_397->mArrayNum)==0) {
            if(            var_type_397->mClass->mNumber) {
            }
            else if(            (var_type_397->mClass->mStruct||var_type_397->mClass->mUnion||var_type_397->mClass->mEnum)||var_type_397->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__389->mCValueName,((char*)(__right_value368=make_type_name_string(var_type_397,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        left_type_398=(struct sType*)come_increment_ref_count(sType_clone(var__389->mType));
        if(        array_initializer_392) {
            var__399=((struct sVar*)(__right_value370=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value370,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value371=make_define_var(var__399->mType,var__399->mCValueName,(_Bool)0,info))),right_value_395->c_value);
            __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 311, "CVALUE"))));
            __dec_obj142=come_value_400->c_value;
            come_value_400->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_400));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_393) {
            var__401=((struct sVar*)(__right_value375=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value375,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value376=make_define_var(var__401->mType,var__401->mCValueName,(_Bool)0,info))),right_value_395->c_value);
            __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 321, "CVALUE"))));
            __dec_obj143=come_value_402->c_value;
            come_value_402->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__389->mType->mStatic||var__389->mType->mConstant) {
            check_assign_type(((char*)(__right_value381=xsprintf("\%s is assining to",((char*)(__right_value380=string_to_string(self->name)))))),left_type_398,right_type_396,right_value_395,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value382=make_define_var(left_type_398,var__389->mCValueName,(_Bool)0,info))),right_value_395->c_value);
            __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 332, "CVALUE"))));
            __dec_obj144=come_value_403->c_value;
            come_value_403->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_396->mHeap&&left_type_398->mHeap&&left_type_398->mPointerNum>0&&right_type_396->mPointerNum>0) {
            check_assign_type(((char*)(__right_value387=xsprintf("\%s is assining to",((char*)(__right_value386=string_to_string(self->name)))))),left_type_398,right_type_396,right_value_395,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            std_move(left_type_398,right_type_396,right_value_395,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value388=make_define_var(left_type_398,var__389->mCValueName,(_Bool)0,info))));
            __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 346, "CVALUE"))));
            __dec_obj145=come_value_404->c_value;
            come_value_404->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__389->mCValueName,right_value_395->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj146=come_value_404->type;
            come_value_404->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_398));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_404->var=var__389;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
            add_come_last_code(info,"%s",come_value_404->c_value);
            come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_398->mChannel&&new_channel_394) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value393=make_define_var(left_type_398,var__389->mCValueName,(_Bool)0,info))));
            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__389->mCValueName);
            come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 360, "CVALUE"))));
            __dec_obj147=come_value_405->c_value;
            come_value_405->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__389->mCValueName));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value_405->type;
            come_value_405->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 362, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_405->type->mPointerNum=1;
            come_value_405->var=var__389;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_405));
            add_come_last_code(info,"%s",come_value_405->c_value);
            come_call_finalizer3(come_value_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_398->mPointerNum>0&&left_type_398->mHeap&&string_operator_equals(right_type_396->mClass->mName,"void")&&right_type_396->mPointerNum>0) {
            check_assign_type(((char*)(__right_value400=xsprintf("\%s is assining to",((char*)(__right_value399=string_to_string(self->name)))))),left_type_398,right_type_396,right_value_395,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value401=make_define_var(left_type_398,var__389->mCValueName,(_Bool)0,info))));
            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_406=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 378, "CVALUE"))));
            __dec_obj149=come_value_406->c_value;
            come_value_406->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__389->mCValueName,right_value_395->c_value));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj150=come_value_406->type;
            come_value_406->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_398));
            come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_406->var=var__389;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_406));
            add_come_last_code(info,"%s",come_value_406->c_value);
            come_call_finalizer3(come_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value407=xsprintf("\%s is assining to",((char*)(__right_value406=string_to_string(self->name)))))),left_type_398,right_type_396,right_value_395,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            right_type_396->mHeap&&left_type_398->mHeap&&left_type_398->mPointerNum>0&&right_type_396->mPointerNum>0) {
                std_move(left_type_398,right_type_396,right_value_395,info,(_Bool)0);
            }
            if(            left_type_398->mHeap&&!right_value_395->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result271__ = (_Bool)0;
                come_call_finalizer3(right_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_397,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result271__;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value408=make_define_var(left_type_398,var__389->mCValueName,(_Bool)0,info))));
            __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_407=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 403, "CVALUE"))));
            __dec_obj151=come_value_407->c_value;
            come_value_407->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__389->mCValueName,right_value_395->c_value));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj152=come_value_407->type;
            come_value_407->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_398));
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_407->var=var__389;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_407));
            add_come_last_code(info,"%s",come_value_407->c_value);
            come_call_finalizer3(come_value_407,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_397,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_408=node_compile(self->right_value,info);
        if(        !Value_408) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_409=string_operator_equals(((char*)(__right_value413=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_411=right_value_410->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_412=info->current_stack_frame_struct;
        if(        (_if_conditional1=(current_stack_frame_struct_412&&((struct sVar*)(__right_value415=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),        come_call_finalizer3(__right_value415,sVar_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            parent_var_413=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_413!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_413->mFunName,info->come_fun->mName)) {
                    left_type_414=parent_var_413->mType;
                    if(                    left_type_414->mPointerNum>0&&right_type_411->mPointerNum>0&&right_type_411->mHeap&&left_type_414->mHeap) {
                        check_assign_type(((char*)(__right_value417=xsprintf("\%s is assigning to",((char*)(__right_value416=string_to_string(self->name)))))),left_type_414,right_type_411,right_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_415=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_413->mCValueName));
                        decrement_ref_count_object(parent_var_413->mType,c_value_415,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_414,right_type_411,right_value_410,info,(_Bool)0);
                        come_value_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 442, "CVALUE"))));
                        if(                        parent_var_413->mType->mOriginIsArray) {
                            __dec_obj153=come_value_416->c_value;
                            come_value_416->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_413->mCValueName,right_value_410->c_value));
                            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj154=come_value_416->c_value;
                            come_value_416->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_413->mCValueName,right_value_410->c_value));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj155=come_value_416->type;
                        come_value_416->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_414));
                        come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_416->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_416->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_416));
                        __result272__ = (_Bool)1;
                        c_value_415 = come_decrement_ref_count2(c_value_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result272__;
                        c_value_415 = come_decrement_ref_count2(c_value_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_414->mPointerNum>0&&right_type_411->mPointerNum>0&&string_operator_equals(right_type_411->mClass->mName,"void")&&left_type_414->mHeap) {
                        check_assign_type(((char*)(__right_value425=xsprintf("\%s is assigning to",((char*)(__right_value424=string_to_string(self->name)))))),left_type_414,right_type_411,right_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_417=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_413->mCValueName));
                        decrement_ref_count_object(parent_var_413->mType,c_value_417,info,(_Bool)0,(_Bool)0);
                        come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 466, "CVALUE"))));
                        if(                        parent_var_413->mType->mOriginIsArray) {
                            __dec_obj156=come_value_418->c_value;
                            come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_413->mCValueName,right_value_410->c_value));
                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj157=come_value_418->c_value;
                            come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_413->mCValueName,right_value_410->c_value));
                            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj158=come_value_418->type;
                        come_value_418->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_414));
                        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_418->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_418->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
                        __result273__ = (_Bool)1;
                        c_value_417 = come_decrement_ref_count2(c_value_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result273__;
                        c_value_417 = come_decrement_ref_count2(c_value_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value433=xsprintf("\%s is assigning to",((char*)(__right_value432=string_to_string(self->name)))))),left_type_414,right_type_411,right_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        left_type_414->mHeap&&!right_value_410->type->mHeap) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                            __result274__ = (_Bool)0;
                            come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result274__;
                        }
                        come_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 491, "CVALUE"))));
                        if(                        parent_var_413->mType->mOriginIsArray) {
                            __dec_obj159=come_value_419->c_value;
                            come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_413->mCValueName,right_value_410->c_value));
                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj160=come_value_419->c_value;
                            come_value_419->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_413->mCValueName,right_value_410->c_value));
                            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj161=come_value_419->type;
                        come_value_419->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_414));
                        come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_419->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_419->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_419));
                        __result275__ = (_Bool)1;
                        come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result275__;
                        come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__420=get_variable_from_table(info->lv_table,self->name);
        if(        var__420==((void*)0)) {
            var__420=get_variable_from_table(info->gv_table,self->name);
            if(            var__420==((void*)0)) {
                err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                __result276__ = (_Bool)1;
                come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result276__;
            }
        }
        if(        var__420->mType==((void*)0)) {
            __dec_obj162=var__420->mType;
            var__420->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_411));
            come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_421=(struct sType*)come_increment_ref_count(sType_clone(var__420->mType));
        if(        (var__420->mType->mStatic||var__420->mType->mConstant)&&!var__420->mGlobal) {
            check_assign_type(((char*)(__right_value442=xsprintf("\%s is assining to",((char*)(__right_value441=string_to_string(self->name)))))),left_type_421,right_type_411,right_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 532, "CVALUE"))));
            __dec_obj163=come_value_422->c_value;
            come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__420->mCValueName,right_value_410->c_value));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj164=come_value_422->type;
            come_value_422->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_422->var=var__420;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
            add_come_last_code(info,"%s",come_value_422->c_value);
            come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_411->mHeap&&left_type_421->mHeap&&left_type_421->mPointerNum>0&&right_type_411->mPointerNum>0) {
            check_assign_type(((char*)(__right_value448=xsprintf("\%s is assining to",((char*)(__right_value447=string_to_string(self->name)))))),left_type_421,right_type_411,right_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_421,var__420->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_421,right_type_411,right_value_410,info,(_Bool)0);
            come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 549, "CVALUE"))));
            __dec_obj165=come_value_423->c_value;
            come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__420->mCValueName,right_value_410->c_value));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj166=come_value_423->type;
            come_value_423->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_423->var=var__420;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
            add_come_last_code(info,"%s",come_value_423->c_value);
            come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_421->mPointerNum>0&&left_type_421->mHeap&&string_operator_equals(right_type_411->mClass->mName,"void")&&right_type_411->mPointerNum>0) {
            check_assign_type(((char*)(__right_value454=xsprintf("\%s is assining to",((char*)(__right_value453=string_to_string(self->name)))))),left_type_421,right_type_411,right_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_421,var__420->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 565, "CVALUE"))));
            __dec_obj167=come_value_424->c_value;
            come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__420->mCValueName,right_value_410->c_value));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj168=come_value_424->type;
            come_value_424->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_424->var=var__420;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
            add_come_last_code(info,"%s",come_value_424->c_value);
            come_call_finalizer3(come_value_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_421->mChannel&&new_channel_409) {
            come_value_425=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 576, "CVALUE"))));
            __dec_obj169=come_value_425->c_value;
            come_value_425->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__420->mCValueName));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj170=come_value_425->type;
            come_value_425->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 578, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_425->type->mPointerNum=1;
            come_value_425->var=var__420;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_425));
            add_come_last_code(info,"%s",come_value_425->c_value);
            come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value465=xsprintf("\%s is assining to",((char*)(__right_value464=string_to_string(self->name)))))),left_type_421,right_type_411,right_value_410,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_421->mHeap&&!right_value_410->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result277__ = (_Bool)0;
                come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result277__;
            }
            come_value_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 594, "CVALUE"))));
            __dec_obj171=come_value_426->c_value;
            come_value_426->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__420->mCValueName,right_value_410->c_value));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj172=come_value_426->type;
            come_value_426->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_421));
            come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_426->var=var__420;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_426));
            add_come_last_code(info,"%s",come_value_426->c_value);
            come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
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
struct sType* __result207__;
void* __right_value251 = (void*)0;
struct sType* result_266;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj63;
void* __right_value257 = (void*)0;
char* __dec_obj64;
void* __right_value258 = (void*)0;
char* __dec_obj65;
void* __right_value266 = (void*)0;
struct list$1objectph* __dec_obj69;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __dec_obj73;
void* __right_value281 = (void*)0;
struct list$1sTypeph* __dec_obj77;
void* __right_value288 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value289 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value291 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value293 = (void*)0;
char* __dec_obj86;
void* __right_value294 = (void*)0;
char* __dec_obj87;
void* __right_value295 = (void*)0;
char* __dec_obj88;
void* __right_value296 = (void*)0;
char* __dec_obj89;
struct sType* __result229__;
    if(    self==(void*)0) {
        __result207__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_266=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_266->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj61=result_266->mNoSolvedGenericsType;
        result_266->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj62=result_266->mOriginalLoadVarType;
        result_266->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj63=result_266->mRefferenceOriginalType;
        result_266->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj64=result_266->mInterfaceName;
        result_266->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj65=result_266->mGenericsName;
        result_266->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj69=result_266->mGenericsTypes;
        result_266->mGenericsTypes=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj69,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj73=result_266->mArrayNum;
        result_266->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj73,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj77=result_266->mParamTypes;
        result_266->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj81=result_266->mParamNames;
        result_266->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj82=result_266->mResultType;
        result_266->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj83=result_266->mAlignas;
        result_266->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj84=result_266->mChannelType;
        result_266->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_266->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_266->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_266->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_266->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_266->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_266->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_266->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_266->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_266->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_266->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_266->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_266->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_266->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_266->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_266->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_266->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_266->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_266->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_266->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj85=result_266->mSizeNum;
        result_266->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_266->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj86=result_266->mOriginalTypeName;
        result_266->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_266->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_266->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_266->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_266->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_266->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_266->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj87=result_266->mAsmName;
        result_266->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_266->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_266->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_266->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_266->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj88=result_266->mTupleName;
        result_266->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj89=result_266->mAttribute;
        result_266->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_266;
    come_call_finalizer3(result_266,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result208__;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* result_267;
void* __right_value253 = (void*)0;
struct sType* __dec_obj34;
struct tuple1$1sTypeph* __result209__;
    if(    self==(void*)0) {
        __result208__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    result_267=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj34=result_267->v1;
        result_267->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = result_267;
    come_call_finalizer3(result_267,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
char* __dec_obj41;
char* __dec_obj42;
struct list$1objectph* __dec_obj43;
struct list$1sNodeph* __dec_obj45;
struct list$1sTypeph* __dec_obj47;
struct list$1charph* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
char* __dec_obj59;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj35=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj41=self->mInterfaceName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj42=self->mGenericsName;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj43=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj43,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj45=self->mArrayNum;
            come_call_finalizer3(__dec_obj45,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj49=self->mParamNames;
            come_call_finalizer3(__dec_obj49,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj50=self->mResultType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj52=self->mAlignas;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj53=self->mChannelType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj55=self->mSizeNum;
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj56=self->mOriginalTypeName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj57=self->mAsmName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj58=self->mTupleName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj59=self->mAttribute;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_268;
struct list_item$1objectph* prev_it_269;
    it_268=self->head;
    while(it_268!=((void*)0)) {
        prev_it_269=it_268;
        it_268=it_268->next;
        come_call_finalizer3(prev_it_269,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct object*)__dec_obj44)->finalize, ((struct object*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_270;
struct list_item$1objectph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer3(prev_it_271,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_272;
struct list_item$1sNodeph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        come_call_finalizer3(prev_it_273,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_274;
struct list_item$1sNodeph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        come_call_finalizer3(prev_it_275,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_276;
struct list_item$1sTypeph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_278;
struct list_item$1sTypeph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj54;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj54=self->v1;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj60;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj60=self->v1;
            come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result210__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1objectph* result_282;
struct list_item$1objectph* it_283;
void* __right_value265 = (void*)0;
struct list$1objectph* __result215__;
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_282=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_283=self->head;
    while(it_283!=((void*)0)) {
        list$1objectph_add(result_282,(struct object*)come_increment_ref_count(object_clone(it_283->item)));
        it_283=it_283->next;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_282;
    come_call_finalizer3(result_282,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1objectph* list$1objectph_initialize(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result211__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct list$1objectph* list$1objectph_add(struct list$1objectph* self, struct object* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1objectph* litem_284;
struct object* __dec_obj66;
void* __right_value262 = (void*)0;
struct list_item$1objectph* litem_285;
struct object* __dec_obj67;
void* __right_value263 = (void*)0;
struct list_item$1objectph* litem_286;
struct object* __dec_obj68;
struct list$1objectph* __result212__;
    if(    self->len==0) {
        litem_284=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value261=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_284->prev=((void*)0);
        litem_284->next=((void*)0);
        __dec_obj66=litem_284->item;
        litem_284->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct object*)__dec_obj66)->finalize, ((struct object*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_284;
        self->head=litem_284;
    }
    else if(    self->len==1) {
        litem_285=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value262=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_285->prev=self->head;
        litem_285->next=((void*)0);
        __dec_obj67=litem_285->item;
        litem_285->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct object*)__dec_obj67)->finalize, ((struct object*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_285;
        self->head->next=litem_285;
    }
    else {
        litem_286=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value263=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_286->prev=self->tail;
        litem_286->next=((void*)0);
        __dec_obj68=litem_286->item;
        litem_286->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct object*)__dec_obj68)->finalize, ((struct object*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_286;
        self->tail=litem_286;
    }
    self->len++;
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct object*)item)->finalize, ((struct object*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct object* object_clone(struct object* self){
void* __result_obj__=(void*)0;
struct object* __result213__;
void* __right_value264 = (void*)0;
struct object* result_287;
struct object* __result214__;
    if(    self==(void*)0) {
        __result213__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    result_287=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_287->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_287->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_287->clone=self->clone;
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_287;
    if(result_287) { result_287 = come_decrement_ref_count2(result_287, ((struct object*)result_287)->finalize, ((struct object*)result_287)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result216__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sNodeph* result_288;
struct list_item$1sNodeph* it_289;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __result221__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_288=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_289=self->head;
    while(it_289!=((void*)0)) {
        list$1sNodeph_add(result_288,(struct sNode*)come_increment_ref_count(sNode_clone(it_289->item)));
        it_289=it_289->next;
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_288;
    come_call_finalizer3(result_288,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNodeph* litem_290;
struct sNode* __dec_obj70;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_291;
struct sNode* __dec_obj71;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj72;
struct list$1sNodeph* __result218__;
    if(    self->len==0) {
        litem_290=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj70=litem_290->item;
        litem_290->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj71=litem_291->item;
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj72=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_292;
        self->tail=litem_292;
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
struct sNode* result_293;
struct sNode* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_293=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_293->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_293->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_293->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_293->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_293->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_293->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_293->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_293->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_293->kind=self->kind;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_293;
    if(result_293) { result_293 = come_decrement_ref_count2(result_293, ((struct sNode*)result_293)->finalize, ((struct sNode*)result_293)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result222__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1sTypeph* result_294;
struct list_item$1sTypeph* it_295;
void* __right_value280 = (void*)0;
struct list$1sTypeph* __result225__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_294=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_295=self->head;
    while(it_295!=((void*)0)) {
        list$1sTypeph_add(result_294,(struct sType*)come_increment_ref_count(sType_clone(it_295->item)));
        it_295=it_295->next;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_294;
    come_call_finalizer3(result_294,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result223__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1sTypeph* litem_296;
struct sType* __dec_obj74;
void* __right_value278 = (void*)0;
struct list_item$1sTypeph* litem_297;
struct sType* __dec_obj75;
void* __right_value279 = (void*)0;
struct list_item$1sTypeph* litem_298;
struct sType* __dec_obj76;
struct list$1sTypeph* __result224__;
    if(    self->len==0) {
        litem_296=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value277=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_296->prev=((void*)0);
        litem_296->next=((void*)0);
        __dec_obj74=litem_296->item;
        litem_296->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_296;
        self->head=litem_296;
    }
    else if(    self->len==1) {
        litem_297=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value278=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_297->prev=self->head;
        litem_297->next=((void*)0);
        __dec_obj75=litem_297->item;
        litem_297->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_297;
        self->head->next=litem_297;
    }
    else {
        litem_298=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value279=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_298->prev=self->tail;
        litem_298->next=((void*)0);
        __dec_obj76=litem_298->item;
        litem_298->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_298;
        self->tail=litem_298;
    }
    self->len++;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result226__;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* result_299;
struct list_item$1charph* it_300;
void* __right_value287 = (void*)0;
struct list$1charph* __result228__;
    if(    self==((void*)0)) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_299=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_300=self->head;
    while(it_300!=((void*)0)) {
        list$1charph_add(result_299,(char*)come_increment_ref_count(string_clone(it_300->item)));
        it_300=it_300->next;
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_299;
    come_call_finalizer3(result_299,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_301;
char* __dec_obj78;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_302;
char* __dec_obj79;
void* __right_value286 = (void*)0;
struct list_item$1charph* litem_303;
char* __dec_obj80;
struct list$1charph* __result227__;
    if(    self->len==0) {
        litem_301=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_301->prev=((void*)0);
        litem_301->next=((void*)0);
        __dec_obj78=litem_301->item;
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_301;
        self->head=litem_301;
    }
    else if(    self->len==1) {
        litem_302=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_302->prev=self->head;
        litem_302->next=((void*)0);
        __dec_obj79=litem_302->item;
        litem_302->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_302;
        self->head->next=litem_302;
    }
    else {
        litem_303=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value286=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_303->prev=self->tail;
        litem_303->next=((void*)0);
        __dec_obj80=litem_303->item;
        litem_303->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_303;
        self->tail=litem_303;
    }
    self->len++;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result230__;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_306;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_307;
void* __right_value308 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result235__;
    if(    self==((void*)0)) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_306=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple3$3sTypephcharphsNodephph"))));
    it_307=self->head;
    while(it_307!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephph_add(result_306,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodephp_clone(it_307->item)));
        it_307=it_307->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_306;
    come_call_finalizer3(result_306,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result231__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_304;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer3(prev_it_305,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
struct tuple3$3sTypephcharphsNodeph* __dec_obj93;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj93=self->item;
            come_call_finalizer3(__dec_obj93,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_308;
struct tuple3$3sTypephcharphsNodeph* __dec_obj97;
void* __right_value302 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_309;
struct tuple3$3sTypephcharphsNodeph* __dec_obj101;
void* __right_value303 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_310;
struct tuple3$3sTypephcharphsNodeph* __dec_obj105;
struct list$1tuple3$3sTypephcharphsNodephph* __result232__;
    if(    self->len==0) {
        litem_308=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value301=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj97=litem_308->item;
        litem_308->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1) {
        litem_309=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value302=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj101=litem_309->item;
        litem_309->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value303=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj105=litem_310->item;
        litem_310->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_310;
        self->tail=litem_310;
    }
    self->len++;
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj106;
char* __dec_obj107;
struct sNode* __dec_obj108;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj106=self->v1;
            come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj107=self->v2;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj108=self->v3;
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result233__;
void* __right_value304 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_311;
void* __right_value305 = (void*)0;
struct sType* __dec_obj109;
void* __right_value306 = (void*)0;
char* __dec_obj110;
void* __right_value307 = (void*)0;
struct sNode* __dec_obj111;
struct tuple3$3sTypephcharphsNodeph* __result234__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_311=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj109=result_311->v1;
        result_311->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj110=result_311->v2;
        result_311->v2=(char*)come_increment_ref_count(string_clone(self->v2));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj111=result_311->v3;
        result_311->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_311;
    come_call_finalizer3(result_311,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj112;
char* __dec_obj113;
struct sNode* __dec_obj114;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj112=self->v1;
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj113=self->v2;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj114=self->v3;
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_312;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_315;
unsigned int hash_316;
unsigned int it_317;
struct sVar* __result238__;
struct sVar* __result239__;
struct sVar* __result240__;
struct sVar* __result241__;
default_value_315 = (void*)0;
    memset(&default_value_315,0,sizeof(struct sVar*));
    hash_316=charp_get_hash_key(((char*)key))%self->size;
    it_317=hash_316;
    while((_Bool)1) {
        if(        self->item_existance[it_317]) {
            if(            charp_equals(self->keys[it_317],key)) {
                __result238__ = gComeFunResultObject = __result_obj__ = self->items[it_317];
                come_call_finalizer3(default_value_315,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result238__;
            }
            it_317++;
            if(            it_317>=self->size) {
                it_317=0;
            }
            else if(            it_317==hash_316) {
                __result239__ = gComeFunResultObject = __result_obj__ = default_value_315;
                come_call_finalizer3(default_value_315,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result239__;
            }
        }
        else {
            __result240__ = gComeFunResultObject = __result_obj__ = default_value_315;
            come_call_finalizer3(default_value_315,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result240__;
        }
    }
    __result241__ = gComeFunResultObject = __result_obj__ = default_value_315;
    come_call_finalizer3(default_value_315,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj124;
char* __dec_obj125;
struct sType* __dec_obj126;
char* __dec_obj127;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj124=self->mName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj125=self->mCValueName;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj126=self->mType;
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj127=self->mFunName;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsVarph* map$2charphsVarph_remove(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_318;
unsigned int it_319;
struct map$2charphsVarph* __result246__;
    hash_318=charp_get_hash_key(((char*)key))%self->size;
    it_319=hash_318;
    while((_Bool)1) {
        if(        self->item_existance[it_319]) {
            if(            charp_equals(self->keys[it_319],key)) {
                list$1charp_remove(self->key_list,self->keys[it_319]);
                self->item_existance[it_319]=(_Bool)0;
                if(                1) {
                    self->keys[it_319] = come_decrement_ref_count2(self->keys[it_319], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_319]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_319],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_319]=((void*)0);
                self->len--;
                break;
            }
            it_319++;
            if(            it_319>=self->size) {
                it_319=0;
            }
            else if(            it_319==hash_318) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_320;
struct list_item$1charp* it_321;
struct list$1charp* __result245__;
    it2_320=0;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        if(        charp_equals(it_321->item,item)) {
            list$1charp_delete(self,it2_320,it2_320+1);
            break;
        }
        it2_320++;
        it_321=it_321->next;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_322;
struct list$1charp* __result242__;
struct list_item$1charp* it_325;
int i_326;
struct list_item$1charp* prev_it_327;
struct list_item$1charp* it_328;
int i_329;
struct list_item$1charp* prev_it_330;
struct list_item$1charp* it_331;
struct list_item$1charp* head_prev_it_332;
struct list_item$1charp* tail_it_333;
int i_334;
struct list_item$1charp* prev_it_335;
struct list$1charp* __result244__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_322=tail;
        tail=head;
        head=tmp_322;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result242__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_325=self->head;
        i_326=0;
        while(it_325!=((void*)0)) {
            if(            i_326<tail) {
                prev_it_327=it_325;
                it_325=it_325->next;
                i_326++;
                come_call_finalizer3(prev_it_327,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_326==tail) {
                self->head=it_325;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_325=it_325->next;
                i_326++;
            }
        }
    }
    else if(    tail==self->len) {
        it_328=self->head;
        i_329=0;
        while(it_328!=((void*)0)) {
            if(            i_329==head) {
                self->tail=it_328->prev;
                self->tail->next=((void*)0);
            }
            if(            i_329>=head) {
                prev_it_330=it_328;
                it_328=it_328->next;
                i_329++;
                come_call_finalizer3(prev_it_330,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_328=it_328->next;
                i_329++;
            }
        }
    }
    else {
        it_331=self->head;
        head_prev_it_332=((void*)0);
        tail_it_333=((void*)0);
        i_334=0;
        while(it_331!=((void*)0)) {
            if(            i_334==head) {
                head_prev_it_332=it_331->prev;
            }
            if(            i_334==tail) {
                tail_it_333=it_331;
            }
            if(            i_334>=head&&i_334<tail) {
                prev_it_335=it_331;
                it_331=it_331->next;
                i_334++;
                come_call_finalizer3(prev_it_335,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_331=it_331->next;
                i_334++;
            }
        }
        if(        head_prev_it_332!=((void*)0)) {
            head_prev_it_332->next=tail_it_333;
        }
        if(        tail_it_333!=((void*)0)) {
            tail_it_333->prev=head_prev_it_332;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_323;
struct list_item$1charp* prev_it_324;
struct list$1charp* __result243__;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        come_call_finalizer3(prev_it_324,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_338;
struct tuple3$3sTypephcharphsNodeph* __result247__;
struct tuple3$3sTypephcharphsNodeph* __result248__;
struct tuple3$3sTypephcharphsNodeph* result_339;
struct tuple3$3sTypephcharphsNodeph* __result249__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_338,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->it=self->head;
    if(    self->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_339,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_341;
struct tuple3$3sTypephcharphsNodeph* __result250__;
struct tuple3$3sTypephcharphsNodeph* __result251__;
struct tuple3$3sTypephcharphsNodeph* result_342;
struct tuple3$3sTypephcharphsNodeph* __result252__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_341,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_342,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj128;
struct sType* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj128=self->c_value;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj129=self->type;
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj130=self->c_value_without_right_value_objects;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_354;
char* __result255__;
char* __result256__;
char* result_355;
char* __result257__;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_354,0,sizeof(char*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_354;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->head;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_355,0,sizeof(char*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_355;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_357;
char* __result258__;
char* __result259__;
char* result_358;
char* __result260__;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_357,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_357;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_358,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_358;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static int list$1objectph_length(struct list$1objectph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1objectph* it_361;
int i_362;
struct object* __result261__;
struct object* default_value_363;
struct object* __result262__;
default_value_363 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_361=self->head;
    i_362=0;
    while(it_361!=((void*)0)) {
        if(        position==i_362) {
            __result261__ = gComeFunResultObject = __result_obj__ = it_361->item;
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
        it_361=it_361->next;
        i_362++;
    }
    memset(&default_value_363,0,sizeof(struct object*));
    __result262__ = gComeFunResultObject = __result_obj__ = default_value_363;
    if(default_value_363) { default_value_363 = come_decrement_ref_count2(default_value_363, ((struct object*)default_value_363)->finalize, ((struct object*)default_value_363)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_378;
struct sNode* __result264__;
struct sNode* __result265__;
struct sNode* result_379;
struct sNode* __result266__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_378,0,sizeof(struct sNode*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->it=self->head;
    if(    self->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_379,0,sizeof(struct sNode*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_381;
struct sNode* __result267__;
struct sNode* __result268__;
struct sNode* result_382;
struct sNode* __result269__;
result_381 = (void*)0;
result_382 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_381,0,sizeof(struct sNode*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_381;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_382,0,sizeof(struct sNode*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_382;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
struct list_item$1CVALUEph* litem_386;
struct CVALUE* __dec_obj139;
void* __right_value357 = (void*)0;
struct list_item$1CVALUEph* litem_387;
struct CVALUE* __dec_obj140;
void* __right_value358 = (void*)0;
struct list_item$1CVALUEph* litem_388;
struct CVALUE* __dec_obj141;
struct list$1CVALUEph* __result270__;
    if(    self->len==0) {
        litem_386=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value356=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_386->prev=((void*)0);
        litem_386->next=((void*)0);
        __dec_obj139=litem_386->item;
        litem_386->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_386;
        self->head=litem_386;
    }
    else if(    self->len==1) {
        litem_387=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value357=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_387->prev=self->head;
        litem_387->next=((void*)0);
        __dec_obj140=litem_387->item;
        litem_387->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_387;
        self->head->next=litem_387;
    }
    else {
        litem_388=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value358=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_388->prev=self->tail;
        litem_388->next=((void*)0);
        __dec_obj141=litem_388->item;
        litem_388->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_388;
        self->tail=litem_388;
    }
    self->len++;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value470 = (void*)0;
struct sNewChannel* __result278__;
    ((struct sNodeBase*)(__right_value470=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value470,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value471 = (void*)0;
char* __result279__;
    __result279__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value471=__builtin_string("sNewChannel")));
    __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value472 = (void*)0;
struct sNode* node_427;
_Bool Value_428;
_Bool __result280__;
_Bool __result281__;
    node_427=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_428=node_compile(node_427,info);
    if(    !Value_428) {
        __result280__ = (_Bool)0;
        if(node_427) { node_427 = come_decrement_ref_count2(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result280__;
    }
    else {
    }
    __result281__ = (_Bool)1;
    if(node_427) { node_427 = come_decrement_ref_count2(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result281__;
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj174;
struct sNode* __dec_obj175;
struct sWriteChannelNode* __result282__;
    ((struct sNodeBase*)(__right_value473=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value473,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj174=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj175=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value474=__builtin_string("sWriteChannelNode")));
    __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_429;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_430;
_Bool Value_431;
_Bool __result284__;
void* __right_value476 = (void*)0;
struct CVALUE* right_value_432;
struct sType* right_type_433;
void* __right_value477 = (void*)0;
struct sType* left_type_434;
struct sType* channel_type_435;
_Bool __result285__;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct buffer* buf_437;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct CVALUE* come_value2_438;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
char* __dec_obj179;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj180;
_Bool __result286__;
    Value_429=node_compile(self->exp,info);
    if(    !Value_429) {
        return (_Bool)0;
    }
    else {
    }
    come_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_431=node_compile(self->right_value,info);
    if(    !Value_431) {
        __result284__ = (_Bool)0;
        come_call_finalizer3(come_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result284__;
    }
    else {
    }
    right_value_432=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_433=right_value_432->type;
    dec_stack_ptr(1,info);
    left_type_434=(struct sType*)come_increment_ref_count(sType_clone(come_value_430->type));
    channel_type_435=(struct sType*)come_increment_ref_count(left_type_434->mChannelType->v1);
    static int var_num_436=0;
    var_num_436++;
    if(    right_value_432->type->mHeap) {
        err_msg(info,"channel can't get heap type");
        __result285__ = (_Bool)0;
        come_call_finalizer3(come_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_432,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(channel_type_435,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result285__;
    }
    buf_437=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 679, "buffer"))));
    buffer_append_format(buf_437,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_436,((char*)(__right_value480=make_type_name_string(channel_type_435,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_437,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value481=make_type_name_string(channel_type_435,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_436,var_num_436);
    __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_437,"*__channel_p%d = %s;\n",var_num_436,right_value_432->c_value);
    add_come_code(info,((char*)(__right_value482=buffer_to_string(buf_437))));
    __right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_438=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 687, "CVALUE"))));
    __dec_obj179=come_value2_438->c_value;
    come_value2_438->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_430->c_value,var_num_436,((char*)(__right_value485=make_type_name_string(channel_type_435,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj180=come_value2_438->type;
    come_value2_438->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 691, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_438->type->mPointerNum=1;
    come_value2_438->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_438));
    add_come_last_code(info,"%s",come_value2_438->c_value);
    __result286__ = (_Bool)1;
    come_call_finalizer3(come_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_432,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_435,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_437,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result286__;
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value489 = (void*)0;
struct sNode* __dec_obj181;
struct sReadChannelNode* __result287__;
    ((struct sNodeBase*)(__right_value489=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value489,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj181=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result287__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value490 = (void*)0;
char* __result288__;
    __result288__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value490=__builtin_string("sReadChannelNode")));
    __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_439;
_Bool Value_440;
_Bool __result289__;
void* __right_value491 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value492 = (void*)0;
struct sType* var_type_442;
_Bool __result290__;
struct sType* channel_type_443;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct CVALUE* come_value2_445;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
char* __dec_obj184;
void* __right_value499 = (void*)0;
struct sType* __dec_obj185;
_Bool __result291__;
    exp_439=(struct sNode*)come_increment_ref_count(self->exp);
    Value_440=node_compile(exp_439,info);
    if(    !Value_440) {
        __result289__ = (_Bool)0;
        if(exp_439) { exp_439 = come_decrement_ref_count2(exp_439, ((struct sNode*)exp_439)->finalize, ((struct sNode*)exp_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result289__;
    }
    else {
    }
    come_value_441=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_442=(struct sType*)come_increment_ref_count(sType_clone(come_value_441->type));
    if(    !var_type_442->mChannel) {
        err_msg(info,"require right type is channel");
        __result290__ = (_Bool)0;
        if(exp_439) { exp_439 = come_decrement_ref_count2(exp_439, ((struct sNode*)exp_439)->finalize, ((struct sNode*)exp_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result290__;
    }
    channel_type_443=(struct sType*)come_increment_ref_count(var_type_442->mChannelType->v1);
    static int var_num_444=0;
    var_num_444++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_444,((char*)(__right_value493=make_type_name_string(channel_type_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_445=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 743, "CVALUE"))));
    __dec_obj184=come_value2_445->c_value;
    come_value2_445->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_441->c_value,var_num_444,((char*)(__right_value496=make_type_name_string(channel_type_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value497=make_type_name_string(channel_type_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_444));
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj185=come_value2_445->type;
    come_value2_445->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type_443));
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_445->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_445));
    add_come_last_code(info,"%s",come_value2_445->c_value);
    __result291__ = (_Bool)1;
    if(exp_439) { exp_439 = come_decrement_ref_count2(exp_439, ((struct sNode*)exp_439)->finalize, ((struct sNode*)exp_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_442,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_443,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value511 = (void*)0;
struct sNode* __result294__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 760, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value502=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 760, "sStoreNode")),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result294__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value511=_inf_value1));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value502,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value511) { __right_value511 = come_decrement_ref_count2(__right_value511, ((struct sNode*)__right_value511)->finalize, ((struct sNode*)__right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* __dec_obj200;
struct sLoadNode* __result295__;
    ((struct sNodeBase*)(__right_value512=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value512,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj200=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value514 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value514=__builtin_string("sLoadNode")));
    __right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_447;
void* __right_value515 = (void*)0;
_Bool _if_conditional2;
struct sVar* parent_var_448;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_449;
struct sType* type_450;
void* __right_value518 = (void*)0;
char* __dec_obj203;
void* __right_value519 = (void*)0;
char* __dec_obj204;
void* __right_value520 = (void*)0;
struct sType* __dec_obj205;
_Bool __result297__;
struct sVar* var__451;
void* __right_value521 = (void*)0;
struct sFun* fun_452;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct CVALUE* come_value_456;
void* __right_value524 = (void*)0;
char* __dec_obj223;
struct sType* __dec_obj224;
_Bool __result302__;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value527 = (void*)0;
char* __dec_obj225;
void* __right_value528 = (void*)0;
struct sType* __dec_obj226;
void* __right_value529 = (void*)0;
struct sType* __dec_obj227;
_Bool __result304__;
    current_stack_frame_struct_447=info->current_stack_frame_struct;
    if(    (_if_conditional2=(current_stack_frame_struct_447&&((struct sVar*)(__right_value515=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),    come_call_finalizer3(__right_value515,sVar_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        parent_var_448=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_448!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_448->mFunName,info->come_fun->mName)) {
                come_value_449=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 790, "CVALUE"))));
                type_450=parent_var_448->mType;
                if(                parent_var_448->mType->mOriginIsArray) {
                    __dec_obj203=come_value_449->c_value;
                    come_value_449->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_448->mCValueName));
                    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj204=come_value_449->c_value;
                    come_value_449->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_448->mCValueName));
                    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj205=come_value_449->type;
                come_value_449->type=(struct sType*)come_increment_ref_count(sType_clone(type_450));
                come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_449->var=((void*)0);
                add_come_last_code(info,"%s",come_value_449->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_449));
                __result297__ = (_Bool)1;
                come_call_finalizer3(come_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result297__;
                come_call_finalizer3(come_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__451=get_variable_from_table(info->lv_table,self->name);
    if(    var__451==((void*)0)) {
        var__451=get_variable_from_table(info->gv_table,self->name);
        if(        var__451==((void*)0)) {
            fun_452=((struct sFun*)(__right_value521=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
            come_call_finalizer3(__right_value521,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            fun_452) {
                come_value_456=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 822, "CVALUE"))));
                __dec_obj223=come_value_456->c_value;
                come_value_456->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_452->mName));
                __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj224=come_value_456->type;
                come_value_456->type=(struct sType*)come_increment_ref_count(fun_452->mLambdaType);
                come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_456->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_456));
                __result302__ = (_Bool)1;
                come_call_finalizer3(come_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result302__;
                come_call_finalizer3(come_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 839, "CVALUE"))));
    __dec_obj225=come_value_457->c_value;
    come_value_457->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__451->mCValueName));
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=come_value_457->type;
    come_value_457->type=(struct sType*)come_increment_ref_count(sType_clone(var__451->mType));
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_457->var=var__451;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
    if(    list$1sNodeph_length(come_value_457->type->mArrayNum)==1) {
        __dec_obj227=come_value_457->type->mOriginalLoadVarType->v1;
        come_value_457->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_457->type));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_457->type->mArrayNum);
        come_value_457->type->mPointerNum++;
        come_value_457->type->mOriginalTypeNamePointerNum=come_value_457->type->mPointerNum;
    }
    __result304__ = (_Bool)1;
    come_call_finalizer3(come_value_457,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result304__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_453;
unsigned int hash_454;
unsigned int it_455;
struct sFun* __result298__;
struct sFun* __result299__;
struct sFun* __result300__;
struct sFun* __result301__;
default_value_453 = (void*)0;
    memset(&default_value_453,0,sizeof(struct sFun*));
    hash_454=charp_get_hash_key(((char*)key))%self->size;
    it_455=hash_454;
    while((_Bool)1) {
        if(        self->item_existance[it_455]) {
            if(            charp_equals(self->keys[it_455],key)) {
                __result298__ = gComeFunResultObject = __result_obj__ = self->items[it_455];
                come_call_finalizer3(default_value_453,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
            it_455++;
            if(            it_455>=self->size) {
                it_455=0;
            }
            else if(            it_455==hash_454) {
                __result299__ = gComeFunResultObject = __result_obj__ = default_value_453;
                come_call_finalizer3(default_value_453,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result299__;
            }
        }
        else {
            __result300__ = gComeFunResultObject = __result_obj__ = default_value_453;
            come_call_finalizer3(default_value_453,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result300__;
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = default_value_453;
    come_call_finalizer3(default_value_453,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj206;
struct sType* __dec_obj207;
struct list$1sTypeph* __dec_obj208;
struct list$1charph* __dec_obj209;
struct list$1charph* __dec_obj210;
struct sType* __dec_obj211;
struct sBlock* __dec_obj212;
struct buffer* __dec_obj215;
struct buffer* __dec_obj216;
struct buffer* __dec_obj217;
struct buffer* __dec_obj218;
char* __dec_obj219;
char* __dec_obj220;
char* __dec_obj221;
char* __dec_obj222;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj206=self->mName;
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj207=self->mResultType;
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj208=self->mParamTypes;
            come_call_finalizer3(__dec_obj208,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj209=self->mParamNames;
            come_call_finalizer3(__dec_obj209,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj210=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj210,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj211=self->mLambdaType;
            come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj212=self->mBlock;
            come_call_finalizer3(__dec_obj212,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj215=self->mSource;
            come_call_finalizer3(__dec_obj215,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj216=self->mSourceHead;
            come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj217=self->mSourceHead2;
            come_call_finalizer3(__dec_obj217,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj218=self->mSourceDefer;
            come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj219=self->mComeHeader;
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj220=self->mDeclareSName;
            __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj221=self->mAttribute;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj222=self->mFunAttribute;
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj213;
struct sVarTable* __dec_obj214;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj213=self->mNodes;
            come_call_finalizer3(__dec_obj213,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj214=self->mVarTable;
            come_call_finalizer3(__dec_obj214,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_458;
struct list_item$1sNodeph* prev_it_459;
struct list$1sNodeph* __result303__;
    it_458=self->head;
    while(it_458!=((void*)0)) {
        prev_it_459=it_458;
        it_458=it_458->next;
        come_call_finalizer3(prev_it_459,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value530 = (void*)0;
_Bool _if_conditional3;
struct sLoadNode* load_node_460;
    if(    (_if_conditional3=(string_operator_equals(((char*)(__right_value530=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        load_node_460=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_460->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value537 = (void*)0;
struct sNode* __result307__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 872, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value533=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 872, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result307__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value537=_inf_value2));
    come_call_finalizer3(__right_value533,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value537) { __right_value537 = come_decrement_ref_count2(__right_value537, ((struct sNode*)__right_value537)->finalize, ((struct sNode*)__right_value537)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result307__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
char* __dec_obj232;
struct sFunLoadNode* __result308__;
    ((struct sNodeBase*)(__right_value538=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value538,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj232=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value540 = (void*)0;
char* __result309__;
    __result309__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value540=__builtin_string("sFunLoadNode")));
    __right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value541 = (void*)0;
struct sFun* fun_462;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_463;
void* __right_value544 = (void*)0;
char* __dec_obj235;
struct sType* __dec_obj236;
    fun_462=((struct sFun*)(__right_value541=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
    come_call_finalizer3(__right_value541,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_462==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 898, "CVALUE"))));
        __dec_obj235=come_value_463->c_value;
        come_value_463->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_462->mName));
        __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj236=come_value_463->type;
        come_value_463->type=(struct sType*)come_increment_ref_count(fun_462->mLambdaType);
        come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_463->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_463));
        come_call_finalizer3(come_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj233;
char* __dec_obj234;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj233=self->sname;
            __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj234=self->name;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value545 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj253;
struct sArrayInitializer* __result316__;
    ((struct sNodeBase*)(__right_value545=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value545,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj253=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(initializer));
    come_call_finalizer3(__dec_obj253,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value556=__builtin_string("sArrayInitializer")));
    __right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_474;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct buffer* buf_475;
int i_476;
struct sType* element_type_477;
struct list$1tuple2$2sNodephsNodephph* o2_saved_478;
struct tuple2$2sNodephsNodeph* it_481;
struct tuple2$2sNodephsNodeph* multiple_assign_var2 = (void*)0;
struct sNode* index_484=0;
struct sNode* value_485=0;
struct CVALUE* come_value_486;
_Bool Value_487;
_Bool __result324__;
void* __right_value559 = (void*)0;
struct CVALUE* __dec_obj256;
_Bool Value_488;
_Bool __result325__;
void* __right_value560 = (void*)0;
struct CVALUE* come_value2_489;
void* __right_value561 = (void*)0;
struct sType* __dec_obj257;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_490;
void* __right_value564 = (void*)0;
char* __dec_obj258;
void* __right_value565 = (void*)0;
struct sType* __dec_obj259;
_Bool __result326__;
    initializer_474=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_475=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 929, "buffer"))));
    buffer_append_str(buf_475,"{");
    i_476=0;
    element_type_477=((void*)0);
    for(    o2_saved_478=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_474)),it_481=list$1tuple2$2sNodephsNodephph_begin((o2_saved_478));    !list$1tuple2$2sNodephsNodephph_end((o2_saved_478));    it_481=list$1tuple2$2sNodephsNodephph_next((o2_saved_478))    ){
        multiple_assign_var2=it_481;
        index_484=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_485=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_486=((void*)0);
        if(        index_484) {
            Value_487=node_compile(index_484,info);
            if(            !Value_487) {
                __result324__ = (_Bool)0;
                if(index_484) { index_484 = come_decrement_ref_count2(index_484, ((struct sNode*)index_484)->finalize, ((struct sNode*)index_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_485) { value_485 = come_decrement_ref_count2(value_485, ((struct sNode*)value_485)->finalize, ((struct sNode*)value_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_478,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_474,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result324__;
            }
            else {
            }
            __dec_obj256=come_value_486;
            come_value_486=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_488=node_compile(value_485,info);
        if(        !Value_488) {
            __result325__ = (_Bool)0;
            if(index_484) { index_484 = come_decrement_ref_count2(index_484, ((struct sNode*)index_484)->finalize, ((struct sNode*)index_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_485) { value_485 = come_decrement_ref_count2(value_485, ((struct sNode*)value_485)->finalize, ((struct sNode*)value_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_478,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_474,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result325__;
        }
        else {
        }
        come_value2_489=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj257=element_type_477;
        element_type_477=(struct sType*)come_increment_ref_count(sType_clone(come_value2_489->type));
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        come_value_486) {
            buffer_append_format(buf_475,"[%s] = %s",come_value_486->c_value,come_value2_489->c_value);
        }
        else {
            buffer_append_str(buf_475,come_value2_489->c_value);
        }
        i_476++;
        if(        i_476!=list$1tuple2$2sNodephsNodephph_length(initializer_474)) {
            buffer_append_str(buf_475,",");
        }
        if(index_484) { index_484 = come_decrement_ref_count2(index_484, ((struct sNode*)index_484)->finalize, ((struct sNode*)index_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_485) { value_485 = come_decrement_ref_count2(value_485, ((struct sNode*)value_485)->finalize, ((struct sNode*)value_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_478,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_475,"}");
    come_value_490=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 968, "CVALUE"))));
    __dec_obj258=come_value_490->c_value;
    come_value_490->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_475));
    __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj259=come_value_490->type;
    come_value_490->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_477));
    come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_490->type->mPointerNum++;
    come_value_490->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_490));
    __result326__ = (_Bool)1;
    come_call_finalizer3(initializer_474,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_490,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result326__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result310__;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_466;
struct list_item$1tuple2$2sNodephsNodephph* it_467;
void* __right_value554 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result315__;
    if(    self==((void*)0)) {
        __result310__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    result_466=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple2$2sNodephsNodephph"))));
    it_467=self->head;
    while(it_467!=((void*)0)) {
        list$1tuple2$2sNodephsNodephph_add(result_466,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodephp_clone(it_467->item)));
        it_467=it_467->next;
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_466;
    come_call_finalizer3(result_466,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result311__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_464;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_465;
    it_464=self->head;
    while(it_464!=((void*)0)) {
        prev_it_465=it_464;
        it_464=it_464->next;
        come_call_finalizer3(prev_it_465,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
struct tuple2$2sNodephsNodeph* __dec_obj237;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj237=self->item;
            come_call_finalizer3(__dec_obj237,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value548 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_468;
struct tuple2$2sNodephsNodeph* __dec_obj240;
void* __right_value549 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_469;
struct tuple2$2sNodephsNodeph* __dec_obj243;
void* __right_value550 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_470;
struct tuple2$2sNodephsNodeph* __dec_obj246;
struct list$1tuple2$2sNodephsNodephph* __result312__;
    if(    self->len==0) {
        litem_468=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value548=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_468->prev=((void*)0);
        litem_468->next=((void*)0);
        __dec_obj240=litem_468->item;
        litem_468->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj240,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_468;
        self->head=litem_468;
    }
    else if(    self->len==1) {
        litem_469=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value549=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_469->prev=self->head;
        litem_469->next=((void*)0);
        __dec_obj243=litem_469->item;
        litem_469->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj243,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_469;
        self->head->next=litem_469;
    }
    else {
        litem_470=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value550=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_470->prev=self->tail;
        litem_470->next=((void*)0);
        __dec_obj246=litem_470->item;
        litem_470->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj246,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_470;
        self->tail=litem_470;
    }
    self->len++;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj247;
struct sNode* __dec_obj248;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj247=self->v1;
            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj248=self->v2;
            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result313__;
void* __right_value551 = (void*)0;
struct tuple2$2sNodephsNodeph* result_471;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj249;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj250;
struct tuple2$2sNodephsNodeph* __result314__;
    if(    self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_471=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodephp_clone", 3, "tuple2$2sNodephsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj249=result_471->v1;
        result_471->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj250=result_471->v2;
        result_471->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_471;
    come_call_finalizer3(result_471,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj251;
struct sNode* __dec_obj252;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj251=self->v1;
            if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj252=self->v2;
            if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_472;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_473;
    it_472=self->head;
    while(it_472!=((void*)0)) {
        prev_it_473=it_472;
        it_472=it_472->next;
        come_call_finalizer3(prev_it_473,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_479;
struct tuple2$2sNodephsNodeph* __result318__;
struct tuple2$2sNodephsNodeph* __result319__;
struct tuple2$2sNodephsNodeph* result_480;
struct tuple2$2sNodephsNodeph* __result320__;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_479,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_479;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->head;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_480,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_480;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_482;
struct tuple2$2sNodephsNodeph* __result321__;
struct tuple2$2sNodephsNodeph* __result322__;
struct tuple2$2sNodephsNodeph* result_483;
struct tuple2$2sNodephsNodeph* __result323__;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_482,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_482;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_483,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_483;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* initializer_491;
void* __right_value568 = (void*)0;
struct sNode* index_492;
_Bool no_comma_493;
void* __right_value569 = (void*)0;
struct sNode* exp_494;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
_Bool no_comma_495;
void* __right_value572 = (void*)0;
struct sNode* exp_496;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* index_497;
_Bool no_comma_498;
void* __right_value576 = (void*)0;
struct sNode* exp_499;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
_Bool no_comma_500;
void* __right_value579 = (void*)0;
struct sNode* exp_501;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value587 = (void*)0;
struct sNode* __result331__;
    expected_next_character(123,info);
    initializer_491=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 986, "list$1tuple2$2sNodephsNodephph"))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_492=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_493=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_494=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_493;
        list$1tuple2$2sNodephsNodephph_add(initializer_491,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1002, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_492),(struct sNode*)come_increment_ref_count(exp_494))));
        if(index_492) { index_492 = come_decrement_ref_count2(index_492, ((struct sNode*)index_492)->finalize, ((struct sNode*)index_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_494) { exp_494 = come_decrement_ref_count2(exp_494, ((struct sNode*)exp_494)->finalize, ((struct sNode*)exp_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_495=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_496=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_495;
        list$1tuple2$2sNodephsNodephph_add(initializer_491,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1010, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_496))));
        if(exp_496) { exp_496 = come_decrement_ref_count2(exp_496, ((struct sNode*)exp_496)->finalize, ((struct sNode*)exp_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_497=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_498=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_499=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_498;
            list$1tuple2$2sNodephsNodephph_add(initializer_491,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1037, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_497),(struct sNode*)come_increment_ref_count(exp_499))));
            if(index_497) { index_497 = come_decrement_ref_count2(index_497, ((struct sNode*)index_497)->finalize, ((struct sNode*)index_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_499) { exp_499 = come_decrement_ref_count2(exp_499, ((struct sNode*)exp_499)->finalize, ((struct sNode*)exp_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_500=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_501=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_500;
            list$1tuple2$2sNodephsNodephph_add(initializer_491,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1045, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_501))));
            if(exp_501) { exp_501 = come_decrement_ref_count2(exp_501, ((struct sNode*)exp_501)->finalize, ((struct sNode*)exp_501)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1051, "struct sNode");
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value583=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1051, "sArrayInitializer")),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_491),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result331__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value587=_inf_value3));
    come_call_finalizer3(initializer_491,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value583,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value587) { __right_value587 = come_decrement_ref_count2(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj260;
struct sNode* __dec_obj261;
struct tuple2$2sNodephsNodeph* __result327__;
    __dec_obj260=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj261=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj262;
struct tuple2$2voidpsNodeph* __result328__;
    self->v1=v1;
    __dec_obj262=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj263;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj263=self->v2;
            if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj264;
struct list$1tuple2$2sNodephsNodephph* __dec_obj265;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj264=self->sname;
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj265=self->initializer;
            come_call_finalizer3(__dec_obj265,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result329__;
void* __right_value584 = (void*)0;
struct sArrayInitializer* result_502;
void* __right_value585 = (void*)0;
char* __dec_obj266;
void* __right_value586 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj267;
struct sArrayInitializer* __result330__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_502=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"));
    if(    self!=((void*)0)) {
        result_502->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=result_502->sname;
        result_502->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_502->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj267=result_502->initializer;
        result_502->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj267,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_502;
    come_call_finalizer3(result_502,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj284;
struct sStructInitializer* __result338__;
    ((struct sNodeBase*)(__right_value588=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value588,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj284=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(initializer));
    come_call_finalizer3(__dec_obj284,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value599 = (void*)0;
char* __result339__;
    __result339__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value599=__builtin_string("sStructInitializer")));
    __right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* initializer_513;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct buffer* buf_514;
int i_515;
struct list$1tuple2$2charphsNodephph* o2_saved_516;
struct tuple2$2charphsNodeph* it_519;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* name_522=0;
struct sNode* value_523=0;
_Bool Value_524;
_Bool __result346__;
void* __right_value602 = (void*)0;
struct CVALUE* come_value2_525;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value605 = (void*)0;
char* __dec_obj287;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sType* __dec_obj288;
_Bool __result347__;
    initializer_513=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    buf_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1072, "buffer"))));
    buffer_append_str(buf_514,"{");
    i_515=0;
    for(    o2_saved_516=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_513)),it_519=list$1tuple2$2charphsNodephph_begin((o2_saved_516));    !list$1tuple2$2charphsNodephph_end((o2_saved_516));    it_519=list$1tuple2$2charphsNodephph_next((o2_saved_516))    ){
        multiple_assign_var3=it_519;
        name_522=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value_523=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value_524=node_compile(value_523,info);
        if(        !Value_524) {
            __result346__ = (_Bool)0;
            name_522 = come_decrement_ref_count2(name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(value_523) { value_523 = come_decrement_ref_count2(value_523, ((struct sNode*)value_523)->finalize, ((struct sNode*)value_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(o2_saved_516,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_513,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result346__;
        }
        else {
        }
        come_value2_525=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_522) {
            buffer_append_format(buf_514,".%s = %s",name_522,come_value2_525->c_value);
        }
        else {
            buffer_append_format(buf_514,"%s",come_value2_525->c_value);
        }
        i_515++;
        if(        i_515!=list$1tuple2$2charphsNodephph_length(initializer_513)) {
            buffer_append_str(buf_514,",");
        }
        name_522 = come_decrement_ref_count2(name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_523) { value_523 = come_decrement_ref_count2(value_523, ((struct sNode*)value_523)->finalize, ((struct sNode*)value_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_516,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_514,"}");
    come_value_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1099, "CVALUE"))));
    __dec_obj287=come_value_526->c_value;
    come_value_526->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_514));
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj288=come_value_526->type;
    come_value_526->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1102, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_526->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_526));
    __result347__ = (_Bool)1;
    come_call_finalizer3(initializer_513,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result347__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result332__;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_505;
struct list_item$1tuple2$2charphsNodephph* it_506;
void* __right_value597 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result337__;
    if(    self==((void*)0)) {
        __result332__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_505=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple2$2charphsNodephph"))));
    it_506=self->head;
    while(it_506!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_505,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_506->item)));
        it_506=it_506->next;
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_505;
    come_call_finalizer3(result_505,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result333__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_503;
struct list_item$1tuple2$2charphsNodephph* prev_it_504;
    it_503=self->head;
    while(it_503!=((void*)0)) {
        prev_it_504=it_503;
        it_503=it_503->next;
        come_call_finalizer3(prev_it_504,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj268;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj268=self->item;
            come_call_finalizer3(__dec_obj268,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value591 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_507;
struct tuple2$2charphsNodeph* __dec_obj271;
void* __right_value592 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_508;
struct tuple2$2charphsNodeph* __dec_obj274;
void* __right_value593 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_509;
struct tuple2$2charphsNodeph* __dec_obj277;
struct list$1tuple2$2charphsNodephph* __result334__;
    if(    self->len==0) {
        litem_507=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value591=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2charphsNodephph"))));
        litem_507->prev=((void*)0);
        litem_507->next=((void*)0);
        __dec_obj271=litem_507->item;
        litem_507->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj271,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_507;
        self->head=litem_507;
    }
    else if(    self->len==1) {
        litem_508=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value592=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2charphsNodephph"))));
        litem_508->prev=self->head;
        litem_508->next=((void*)0);
        __dec_obj274=litem_508->item;
        litem_508->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj274,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_508;
        self->head->next=litem_508;
    }
    else {
        litem_509=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value593=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2charphsNodephph"))));
        litem_509->prev=self->tail;
        litem_509->next=((void*)0);
        __dec_obj277=litem_509->item;
        litem_509->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj277,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_509;
        self->tail=litem_509;
    }
    self->len++;
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj278;
struct sNode* __dec_obj279;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj278=self->v1;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj279=self->v2;
            if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result335__;
void* __right_value594 = (void*)0;
struct tuple2$2charphsNodeph* result_510;
void* __right_value595 = (void*)0;
char* __dec_obj280;
void* __right_value596 = (void*)0;
struct sNode* __dec_obj281;
struct tuple2$2charphsNodeph* __result336__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_510=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj280=result_510->v1;
        result_510->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj281=result_510->v2;
        result_510->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_510;
    come_call_finalizer3(result_510,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj282;
struct sNode* __dec_obj283;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj282=self->v1;
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj283=self->v2;
            if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_511;
struct list_item$1tuple2$2charphsNodephph* prev_it_512;
    it_511=self->head;
    while(it_511!=((void*)0)) {
        prev_it_512=it_511;
        it_511=it_511->next;
        come_call_finalizer3(prev_it_512,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_517;
struct tuple2$2charphsNodeph* __result340__;
struct tuple2$2charphsNodeph* __result341__;
struct tuple2$2charphsNodeph* result_518;
struct tuple2$2charphsNodeph* __result342__;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_517,0,sizeof(struct tuple2$2charphsNodeph*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_517;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->it=self->head;
    if(    self->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_518,0,sizeof(struct tuple2$2charphsNodeph*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_518;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_520;
struct tuple2$2charphsNodeph* __result343__;
struct tuple2$2charphsNodeph* __result344__;
struct tuple2$2charphsNodeph* result_521;
struct tuple2$2charphsNodeph* __result345__;
result_520 = (void*)0;
result_521 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_520,0,sizeof(struct tuple2$2charphsNodeph*));
        __result343__ = gComeFunResultObject = __result_obj__ = result_520;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result344__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    memset(&result_521,0,sizeof(struct tuple2$2charphsNodeph*));
    __result345__ = gComeFunResultObject = __result_obj__ = result_521;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_527;
void* __right_value610 = (void*)0;
char* name_528;
_Bool no_comma_529;
void* __right_value611 = (void*)0;
struct sNode* exp_530;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
_Bool no_comma_531;
void* __right_value614 = (void*)0;
struct sNode* exp_532;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
char* name_533;
_Bool no_comma_534;
void* __right_value618 = (void*)0;
struct sNode* exp_535;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
_Bool no_comma_536;
void* __right_value621 = (void*)0;
struct sNode* exp_537;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value629 = (void*)0;
struct sNode* __result351__;
    expected_next_character(123,info);
    initializer_527=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "07var.c", 1115, "list$1tuple2$2charphsNodephph"))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_528=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_529=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_530=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_529;
        list$1tuple2$2charphsNodephph_add(initializer_527,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1130, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(name_528),(struct sNode*)come_increment_ref_count(exp_530))));
        name_528 = come_decrement_ref_count2(name_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_530) { exp_530 = come_decrement_ref_count2(exp_530, ((struct sNode*)exp_530)->finalize, ((struct sNode*)exp_530)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_531=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_532=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_531;
        list$1tuple2$2charphsNodephph_add(initializer_527,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1138, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_532))));
        if(exp_532) { exp_532 = come_decrement_ref_count2(exp_532, ((struct sNode*)exp_532)->finalize, ((struct sNode*)exp_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_533=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_534=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_535=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_534;
            list$1tuple2$2charphsNodephph_add(initializer_527,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1164, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(name_533),(struct sNode*)come_increment_ref_count(exp_535))));
            name_533 = come_decrement_ref_count2(name_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_535) { exp_535 = come_decrement_ref_count2(exp_535, ((struct sNode*)exp_535)->finalize, ((struct sNode*)exp_535)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_536=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_537=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_536;
            list$1tuple2$2charphsNodephph_add(initializer_527,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1172, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_537))));
            if(exp_537) { exp_537 = come_decrement_ref_count2(exp_537, ((struct sNode*)exp_537)->finalize, ((struct sNode*)exp_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1178, "struct sNode");
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value625=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1178, "sStructInitializer")),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_527),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result351__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value629=_inf_value4));
    come_call_finalizer3(initializer_527,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value625,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value629) { __right_value629 = come_decrement_ref_count2(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj289;
struct sNode* __dec_obj290;
struct tuple2$2charphsNodeph* __result348__;
    __dec_obj289=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj290=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
char* __dec_obj291;
struct list$1tuple2$2charphsNodephph* __dec_obj292;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj291=self->sname;
            __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj292=self->initializer;
            come_call_finalizer3(__dec_obj292,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result349__;
void* __right_value626 = (void*)0;
struct sStructInitializer* result_538;
void* __right_value627 = (void*)0;
char* __dec_obj293;
void* __right_value628 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj294;
struct sStructInitializer* __result350__;
    if(    self==(void*)0) {
        __result349__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    result_538=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "sStructInitializer"));
    if(    self!=((void*)0)) {
        result_538->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj293=result_538->sname;
        result_538->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_538->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj294=result_538->initializer;
        result_538->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj294,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result350__ = gComeFunResultObject = __result_obj__ = result_538;
    come_call_finalizer3(result_538,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value630 = (void*)0;
struct sVar* self_539;
void* __right_value631 = (void*)0;
char* __dec_obj295;
void* __right_value632 = (void*)0;
struct sType* __dec_obj296;
void* __right_value633 = (void*)0;
char* __dec_obj297;
void* __right_value634 = (void*)0;
char* __dec_obj298;
void* __right_value635 = (void*)0;
char* __dec_obj299;
char* __dec_obj300;
void* __right_value641 = (void*)0;
    self_539=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1183, "sVar"));
    __dec_obj295=self_539->mName;
    self_539->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj296=self_539->mType;
    self_539->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj296,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mFunctionParam) {
        __dec_obj297=self_539->mCValueName;
        self_539->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_540=0;
        __dec_obj298=self_539->mCValueName;
        self_539->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_540++));
        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_539->mBlockLevel=info->block_level;
    self_539->mAllocaValue=(_Bool)0;
    self_539->mFunctionParam=(_Bool)0;
    self_539->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj299=self_539->mFunName;
        self_539->mFunName=(char*)come_increment_ref_count(string_clone(info->come_fun->mName));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj300=self_539->mFunName;
        self_539->mFunName=((void*)0);
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_539));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_539,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_558;
unsigned int it_559;
_Bool same_key_exist_560;
char* it2_563;
struct map$2charphsVarph* __result368__;
    if(    self->len*10>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_558=charp_get_hash_key(key)%self->size;
    it_559=hash_558;
    while((_Bool)1) {
        if(        self->item_existance[it_559]) {
            if(            charp_equals(self->keys[it_559],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_559]);
                    self->keys[it_559] = come_decrement_ref_count2(self->keys[it_559], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_559]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_559]);
                    self->keys[it_559]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_559],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_559]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_559]=item;
                }
                break;
            }
            it_559++;
            if(            it_559>=self->size) {
                it_559=0;
            }
            else if(            it_559==hash_558) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_559]=(_Bool)1;
            if(            1) {
                self->keys[it_559]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_559]=key;
            }
            if(            1) {
                self->items[it_559]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_559]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_560=(_Bool)0;
    for(    it2_563=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_563=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_563,key)) {
            same_key_exist_560=(_Bool)1;
        }
    }
    if(    !same_key_exist_560) {
        list$1charp_push_back(self->key_list,key);
    }
    __result368__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_541;
void* __right_value636 = (void*)0;
char** keys_542;
void* __right_value637 = (void*)0;
struct sVar** items_543;
void* __right_value638 = (void*)0;
_Bool* item_existance_544;
int len_545;
char* it_548;
struct sVar* default_value_551;
void* __right_value639 = (void*)0;
struct sVar* it2_552;
unsigned int hash_555;
int n_556;
struct sVar* default_value_557;
void* __right_value640 = (void*)0;
default_value_551 = (void*)0;
default_value_557 = (void*)0;
    size_541=self->size*10;
    keys_542=(char**)come_increment_ref_count(((char**)(__right_value636=(char**)come_calloc(1, sizeof(char*)*(1*(size_541)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_543=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value637=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_541)), "/usr/local/include/comelang.h", 2558, "sVar*%"))));
    item_existance_544=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value638=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_541)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_545=0;
    for(    it_548=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_548=map$2charphsVarph_next(self)    ){
        memset(&default_value_551,0,sizeof(struct sVar*));
        it2_552=((struct sVar*)(__right_value639=map$2charphsVarph_at(self,it_548,default_value_551)));
        come_call_finalizer3(__right_value639,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_555=charp_get_hash_key(it_548)%size_541;
        n_556=hash_555;
        while((_Bool)1) {
            if(            item_existance_544[n_556]) {
                n_556++;
                if(                n_556>=size_541) {
                    n_556=0;
                }
                else if(                n_556==hash_555) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_544[n_556]=(_Bool)1;
                keys_542[n_556]=it_548;
                items_543[n_556]=((struct sVar*)(__right_value640=map$2charphsVarph_at(self,it_548,default_value_557)));
                come_call_finalizer3(__right_value640,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_545++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_542;
    self->items=items_543;
    self->item_existance=item_existance_544;
    self->size=size_541;
    self->len=len_545;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_546;
char* __result352__;
char* __result353__;
char* result_547;
char* __result354__;
result_546 = (void*)0;
result_547 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_546,0,sizeof(char*));
        __result352__ = gComeFunResultObject = __result_obj__ = result_546;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result353__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    memset(&result_547,0,sizeof(char*));
    __result354__ = gComeFunResultObject = __result_obj__ = result_547;
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_549;
char* __result355__;
char* __result356__;
char* result_550;
char* __result357__;
result_549 = (void*)0;
result_550 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_549,0,sizeof(char*));
        __result355__ = gComeFunResultObject = __result_obj__ = result_549;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result356__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    memset(&result_550,0,sizeof(char*));
    __result357__ = gComeFunResultObject = __result_obj__ = result_550;
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_553;
unsigned int it_554;
struct sVar* __result358__;
struct sVar* __result359__;
struct sVar* __result360__;
struct sVar* __result361__;
    hash_553=charp_get_hash_key(((char*)key))%self->size;
    it_554=hash_553;
    while((_Bool)1) {
        if(        self->item_existance[it_554]) {
            if(            charp_equals(self->keys[it_554],key)) {
                __result358__ = gComeFunResultObject = __result_obj__ = self->items[it_554];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result358__;
            }
            it_554++;
            if(            it_554>=self->size) {
                it_554=0;
            }
            else if(            it_554==hash_553) {
                __result359__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result359__;
            }
        }
        else {
            __result360__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result360__;
        }
    }
    __result361__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_561;
char* __result362__;
char* __result363__;
char* result_562;
char* __result364__;
result_561 = (void*)0;
result_562 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_561,0,sizeof(char*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_561;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->head;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_562,0,sizeof(char*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_562;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_564;
char* __result365__;
char* __result366__;
char* result_565;
char* __result367__;
result_564 = (void*)0;
result_565 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_564,0,sizeof(char*));
        __result365__ = gComeFunResultObject = __result_obj__ = result_564;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result366__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    memset(&result_565,0,sizeof(char*));
    __result367__ = gComeFunResultObject = __result_obj__ = result_565;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value642 = (void*)0;
struct sVar* self_566;
void* __right_value643 = (void*)0;
char* __dec_obj301;
void* __right_value644 = (void*)0;
struct sType* __dec_obj302;
void* __right_value645 = (void*)0;
char* __dec_obj303;
void* __right_value646 = (void*)0;
    self_566=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1212, "sVar"));
    __dec_obj301=self_566->mName;
    self_566->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj302=self_566->mType;
    self_566->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj302,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_566->mGlobal=(_Bool)1;
    __dec_obj303=self_566->mCValueName;
    self_566->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_566->mBlockLevel=info->block_level;
    self_566->mAllocaValue=(_Bool)0;
    self_566->mFunctionParam=(_Bool)0;
    self_566->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_566));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_566,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value647 = (void*)0;
struct sVar* self_567;
void* __right_value648 = (void*)0;
char* __dec_obj304;
void* __right_value649 = (void*)0;
struct sType* __dec_obj305;
void* __right_value650 = (void*)0;
char* __dec_obj306;
void* __right_value651 = (void*)0;
    self_567=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1231, "sVar"));
    __dec_obj304=self_567->mName;
    self_567->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=self_567->mType;
    self_567->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_567->mGlobal=(_Bool)1;
    __dec_obj306=self_567->mCValueName;
    self_567->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_567->mBlockLevel=info->block_level;
    self_567->mAllocaValue=(_Bool)0;
    self_567->mFunctionParam=(_Bool)0;
    self_567->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_567));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_567,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_568;
_Bool is_type_name_flag_569;
_Bool multiple_declare_570;
char* p_571;
int sline_572;
void* __right_value652 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_573=0;
char* name_574=0;
_Bool err_575=0;
void* __right_value653 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5 = (void*)0;
struct sType* type_576=0;
char* name_577=0;
void* __right_value654 = (void*)0;
_Bool no_output_err_578;
_Bool no_comma_579;
_Bool no_output_come_code_580;
void* __right_value655 = (void*)0;
struct sNode* exp_581;
_Bool attr_define_582;
char* p_583;
int sline_584;
void* __right_value656 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_585=0;
char* name_586=0;
_Bool err_587=0;
void* __right_value657 = (void*)0;
struct sFun* fun_588;
void* __right_value658 = (void*)0;
char* buf2_589;
struct list$1charph* multiple_assign_590;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1charph* __dec_obj311;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
char* buf3_591;
void* __right_value663 = (void*)0;
_Bool no_comma_592;
void* __right_value664 = (void*)0;
struct sNode* right_value_593;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj312;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value678 = (void*)0;
struct sNode* node_594;
struct sNode* __result371__;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value683 = (void*)0;
struct sNode* node_596;
struct sNode* __result374__;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_598;
void* __right_value686 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* base_type_599=0;
char* name_600=0;
_Bool err_601=0;
void* __right_value687 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8 = (void*)0;
struct sType* type2_602=0;
char* var_name_603=0;
_Bool no_comma_604;
void* __right_value688 = (void*)0;
struct sNode* exp_605;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
_Bool no_comma_609;
void* __right_value694 = (void*)0;
struct sNode* exp_610;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var9 = (void*)0;
struct sType* type2_611=0;
char* var_name_612=0;
_Bool no_comma_613;
void* __right_value700 = (void*)0;
struct sNode* exp_614;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
_Bool no_comma_615;
void* __right_value703 = (void*)0;
struct sNode* exp_616;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sNode* right_node_617;
void* __right_value708 = (void*)0;
char* var_name2_618;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value721 = (void*)0;
struct sNode* node_619;
struct sNode* __result380__;
void* __right_value722 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_621=0;
char* name_622=0;
_Bool err_623=0;
void* __right_value723 = (void*)0;
char* __dec_obj353;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value735 = (void*)0;
struct sNode* self_node_627;
void* __right_value736 = (void*)0;
struct sNode* right_node_629;
void* __right_value737 = (void*)0;
struct sNode* node_630;
struct sNode* __result385__;
void* __right_value738 = (void*)0;
struct sNode* __result386__;
void* __right_value739 = (void*)0;
struct sNode* right_value_631;
void* __right_value740 = (void*)0;
struct sNode* __dec_obj369;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value753 = (void*)0;
struct sNode* node_632;
struct sNode* __result389__;
void* __right_value754 = (void*)0;
_Bool _elif_conditional1;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value761 = (void*)0;
struct sNode* node_634;
void* __right_value762 = (void*)0;
struct sNode* __dec_obj388;
struct sNode* __result392__;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value769 = (void*)0;
struct sNode* node_636;
void* __right_value770 = (void*)0;
struct sNode* __dec_obj393;
struct sNode* __result395__;
char* word_638;
void* __right_value771 = (void*)0;
char* __dec_obj394;
void* __right_value772 = (void*)0;
char* __dec_obj395;
_Bool is_type_name_flag_639;
void* __right_value773 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_640=0;
char* name_641=0;
_Bool err_642=0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value779 = (void*)0;
struct sNode* node_643;
struct sNode* __result398__;
struct sNode* right_value_645;
_Bool no_comma_646;
void* __right_value780 = (void*)0;
struct sNode* __dec_obj400;
void* __right_value781 = (void*)0;
struct sNode* __dec_obj401;
void* __right_value782 = (void*)0;
struct sNode* __dec_obj402;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value794 = (void*)0;
struct sNode* node_647;
struct sNode* __result401__;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value806 = (void*)0;
struct sNode* node_649;
struct sNode* __result404__;
word_638 = (void*)0;
    sline_real_568=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_569=is_type_name(buf,info);
    multiple_declare_570=(_Bool)0;
    if(    is_type_name_flag_569) {
        p_571=info->p;
        sline_572=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value652=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_573=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_574=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_575=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value652,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_575) {
                parse_sharp_v5(info);
                multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value653=parse_variable_name((struct sType*)come_increment_ref_count(type_573),(_Bool)1,info)));
                type_576=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_577=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value653,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value654=skip_block(info)));
                        __right_value654 = come_decrement_ref_count2(__right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_578=info->no_output_err;
                        no_comma_579=info->no_comma;
                        no_output_come_code_580=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_581=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_579;
                        info->no_output_err=no_output_err_578;
                        info->no_output_come_code=no_output_come_code_580;
                        if(exp_581) { exp_581 = come_decrement_ref_count2(exp_581, ((struct sNode*)exp_581)->finalize, ((struct sNode*)exp_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(                !is_type_name(name_577,info)&&*info->p==44) {
                    multiple_declare_570=(_Bool)1;
                }
                come_call_finalizer3(type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_577 = come_decrement_ref_count2(name_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_574 = come_decrement_ref_count2(name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_571;
        info->sline=sline_572;
    }
    attr_define_582=(_Bool)0;
    if(    is_type_name_flag_569&&info->defining_class) {
        p_583=info->p;
        sline_584=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value656=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_585=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_586=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_587=multiple_assign_var6->v3;
        come_call_finalizer3(__right_value656,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        err_587&&strmemcmp(info->p,"self")) {
            attr_define_582=(_Bool)1;
        }
        info->p=p_583;
        info->sline=sline_584;
        come_call_finalizer3(type_585,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_586 = come_decrement_ref_count2(name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_588=((struct sFun*)(__right_value657=map$2charphsFunphp_operator_load_element(info->funcs,buf)));
    come_call_finalizer3(__right_value657,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_589=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_590=((void*)0);
        if(        *info->p==44) {
            __dec_obj311=multiple_assign_590;
            multiple_assign_590=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1342, "list$1charph"))));
            come_call_finalizer3(__dec_obj311,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            list$1charph_push_back(multiple_assign_590,(char*)come_increment_ref_count(string_clone(buf2_589)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_591=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_590,(char*)come_increment_ref_count(string_clone(buf3_591)));
                buf3_591 = come_decrement_ref_count2(buf3_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_592=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_593=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_592;
            parse_sharp_v5(info);
            __dec_obj312=right_value_593;
            right_value_593=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_593),info));
            if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1372, "struct sNode");
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value669=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1372, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf2_589)),(struct list$1charph*)come_increment_ref_count(multiple_assign_590),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_593),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_594=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value669,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_568;
            __result371__ = gComeFunResultObject = __result_obj__ = node_594;
            if(right_value_593) { right_value_593 = come_decrement_ref_count2(right_value_593, ((struct sNode*)right_value_593)->finalize, ((struct sNode*)right_value_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_594) { node_594 = come_decrement_ref_count2(node_594, ((struct sNode*)node_594)->finalize, ((struct sNode*)node_594)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_589 = come_decrement_ref_count2(buf2_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_590,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result371__;
            if(right_value_593) { right_value_593 = come_decrement_ref_count2(right_value_593, ((struct sNode*)right_value_593)->finalize, ((struct sNode*)right_value_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_594) { node_594 = come_decrement_ref_count2(node_594, ((struct sNode*)node_594)->finalize, ((struct sNode*)node_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_589 = come_decrement_ref_count2(buf2_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_590,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1382, "struct sNode");
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value680=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1382, "sNewChannel")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_596=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value680,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_568;
        __result374__ = gComeFunResultObject = __result_obj__ = node_596;
        if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        if(node_596) { node_596 = come_decrement_ref_count2(node_596, ((struct sNode*)node_596)->finalize, ((struct sNode*)node_596)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    multiple_declare_570) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_598=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1390, "list$1tuple3$3sTypephcharphsNodephph"))));
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value686=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_599=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_600=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_601=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value686,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_601) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value687=parse_variable_name((struct sType*)come_increment_ref_count(base_type_599),(_Bool)1,info)));
        type2_602=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_603=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value687,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_602->mClass->mStruct&&list$1sNodeph_length(type2_602->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_604=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_605=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_604;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_598,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1417, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_602),(char*)come_increment_ref_count(var_name_603),(struct sNode*)come_increment_ref_count(exp_605))));
                if(exp_605) { exp_605 = come_decrement_ref_count2(exp_605, ((struct sNode*)exp_605)->finalize, ((struct sNode*)exp_605)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_609=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_610=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_609;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_598,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1427, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_602),(char*)come_increment_ref_count(var_name_603),(struct sNode*)come_increment_ref_count(exp_610))));
                if(exp_610) { exp_610 = come_decrement_ref_count2(exp_610, ((struct sNode*)exp_610)->finalize, ((struct sNode*)exp_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_598,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1431, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_602),(char*)come_increment_ref_count(var_name_603),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple2$2sTypephcharph*)(__right_value699=parse_variable_name((struct sType*)come_increment_ref_count(base_type_599),(_Bool)0,info)));
            type2_611=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_612=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            come_call_finalizer3(__right_value699,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_611->mClass->mStruct&&list$1sNodeph_length(type2_611->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_613=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_614=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_613;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_598,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1453, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_611),(char*)come_increment_ref_count(var_name_612),(struct sNode*)come_increment_ref_count(exp_614))));
                    if(exp_614) { exp_614 = come_decrement_ref_count2(exp_614, ((struct sNode*)exp_614)->finalize, ((struct sNode*)exp_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    no_comma_615=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_616=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_615;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_598,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1465, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_611),(char*)come_increment_ref_count(var_name_612),(struct sNode*)come_increment_ref_count(exp_616))));
                    if(exp_616) { exp_616 = come_decrement_ref_count2(exp_616, ((struct sNode*)exp_616)->finalize, ((struct sNode*)exp_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_598,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1469, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_611),(char*)come_increment_ref_count(var_name_612),((void*)0))));
            }
            come_call_finalizer3(type2_611,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_612 = come_decrement_ref_count2(var_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_617=((void*)0);
        var_name2_618=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1476, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value712=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1476, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_598),(struct sType*)come_increment_ref_count(base_type_599),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_619=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value712,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_568;
        __result380__ = gComeFunResultObject = __result_obj__ = node_619;
        come_call_finalizer3(multiple_declare_598,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_602,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_603 = come_decrement_ref_count2(var_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_617) { right_node_617 = come_decrement_ref_count2(right_node_617, ((struct sNode*)right_node_617)->finalize, ((struct sNode*)right_node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_618 = come_decrement_ref_count2(var_name2_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_619) { node_619 = come_decrement_ref_count2(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result380__;
        come_call_finalizer3(multiple_declare_598,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_602,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_603 = come_decrement_ref_count2(var_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_617) { right_node_617 = come_decrement_ref_count2(right_node_617, ((struct sNode*)right_node_617)->finalize, ((struct sNode*)right_node_617)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_618 = come_decrement_ref_count2(var_name2_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_619) { node_619 = come_decrement_ref_count2(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    attr_define_582) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value722=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_621=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_622=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_623=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value722,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_623) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj353=name_622;
        name_622=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1499, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_622),(struct sType*)come_increment_ref_count(type_621))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1507, "struct sNode");
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value731=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1507, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_627=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value731,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_630=(struct sNode*)come_increment_ref_count(store_field(self_node_627,(struct sNode*)come_increment_ref_count(right_node_629),(char*)come_increment_ref_count(name_622),info));
            info->sline_real=sline_real_568;
            __result385__ = gComeFunResultObject = __result_obj__ = node_630;
            if(self_node_627) { self_node_627 = come_decrement_ref_count2(self_node_627, ((struct sNode*)self_node_627)->finalize, ((struct sNode*)self_node_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_629) { right_node_629 = come_decrement_ref_count2(right_node_629, ((struct sNode*)right_node_629)->finalize, ((struct sNode*)right_node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_622 = come_decrement_ref_count2(name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result385__;
            if(self_node_627) { self_node_627 = come_decrement_ref_count2(self_node_627, ((struct sNode*)self_node_627)->finalize, ((struct sNode*)self_node_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_629) { right_node_629 = come_decrement_ref_count2(right_node_629, ((struct sNode*)right_node_629)->finalize, ((struct sNode*)right_node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->sline_real=sline_real_568;
            __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value738=create_null_node(info)));
            come_call_finalizer3(type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_622 = come_decrement_ref_count2(name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value738) { __right_value738 = come_decrement_ref_count2(__right_value738, ((struct sNode*)__right_value738)->finalize, ((struct sNode*)__right_value738)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result386__;
        }
        come_call_finalizer3(type_621,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_622 = come_decrement_ref_count2(name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !is_type_name_flag_569&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_631=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj369=right_value_631;
        right_value_631=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_631),info));
        if(__dec_obj369) { __dec_obj369 = come_decrement_ref_count2(__dec_obj369, ((struct sNode*)__dec_obj369)->finalize, ((struct sNode*)__dec_obj369)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1532, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value744=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1532, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_631),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_632=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value744,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_568;
        __result389__ = gComeFunResultObject = __result_obj__ = node_632;
        if(right_value_631) { right_value_631 = come_decrement_ref_count2(right_value_631, ((struct sNode*)right_value_631)->finalize, ((struct sNode*)right_value_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result389__;
        if(right_value_631) { right_value_631 = come_decrement_ref_count2(right_value_631, ((struct sNode*)right_value_631)->finalize, ((struct sNode*)right_value_631)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_569||((struct sFun*)(__right_value754=map$2charphsFunphp_operator_load_element(info->funcs,buf))))),    come_call_finalizer3(__right_value754,sFun_finalize, 0, 1, 0, 0, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1537, "struct sNode");
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value757=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1537, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_634=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value757,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj388=node_634;
        node_634=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_634),info));
        if(__dec_obj388) { __dec_obj388 = come_decrement_ref_count2(__dec_obj388, ((struct sNode*)__dec_obj388)->finalize, ((struct sNode*)__dec_obj388)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_568;
        __result392__ = gComeFunResultObject = __result_obj__ = node_634;
        if(node_634) { node_634 = come_decrement_ref_count2(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result392__;
        if(node_634) { node_634 = come_decrement_ref_count2(node_634, ((struct sNode*)node_634)->finalize, ((struct sNode*)node_634)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !is_type_name_flag_569) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1545, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value765=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1545, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_636=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value765,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj393=node_636;
        node_636=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_636),info));
        if(__dec_obj393) { __dec_obj393 = come_decrement_ref_count2(__dec_obj393, ((struct sNode*)__dec_obj393)->finalize, ((struct sNode*)__dec_obj393)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_568;
        __result395__ = gComeFunResultObject = __result_obj__ = node_636;
        if(node_636) { node_636 = come_decrement_ref_count2(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result395__;
        if(node_636) { node_636 = come_decrement_ref_count2(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj394=word_638;
            word_638=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj394 = come_decrement_ref_count2(__dec_obj394, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj395=word_638;
            word_638=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_639=is_type_name(word_638,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_639) {
            parse_sharp_v5(info);
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value773=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_640=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_641=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_642=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value773,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            !err_642) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1582, "struct sNode");
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value775=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1582, "sLoadNode")),(char*)come_increment_ref_count(name_641),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_643=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value775,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_568;
                __result398__ = gComeFunResultObject = __result_obj__ = node_643;
                if(node_643) { node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_638 = come_decrement_ref_count2(word_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result398__;
                if(node_643) { node_643 = come_decrement_ref_count2(node_643, ((struct sNode*)node_643)->finalize, ((struct sNode*)node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_645=((void*)0);
                if(                type_640->mClass->mStruct&&list$1sNodeph_length(type_640->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_646=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj400=right_value_645;
                    right_value_645=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj400) { __dec_obj400 = come_decrement_ref_count2(__dec_obj400, ((struct sNode*)__dec_obj400)->finalize, ((struct sNode*)__dec_obj400)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_646;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj401=right_value_645;
                    right_value_645=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj401) { __dec_obj401 = come_decrement_ref_count2(__dec_obj401, ((struct sNode*)__dec_obj401)->finalize, ((struct sNode*)__dec_obj401)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj402=right_value_645;
                right_value_645=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_645),info));
                if(__dec_obj402) { __dec_obj402 = come_decrement_ref_count2(__dec_obj402, ((struct sNode*)__dec_obj402)->finalize, ((struct sNode*)__dec_obj402)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1611, "struct sNode");
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value785=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1611, "sStoreNode")),(char*)come_increment_ref_count(name_641),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_640),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_645),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_647=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value785,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_568;
                __result401__ = gComeFunResultObject = __result_obj__ = node_647;
                if(right_value_645) { right_value_645 = come_decrement_ref_count2(right_value_645, ((struct sNode*)right_value_645)->finalize, ((struct sNode*)right_value_645)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_638 = come_decrement_ref_count2(word_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result401__;
                if(right_value_645) { right_value_645 = come_decrement_ref_count2(right_value_645, ((struct sNode*)right_value_645)->finalize, ((struct sNode*)right_value_645)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1616, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value797=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1616, "sStoreNode")),(char*)come_increment_ref_count(name_641),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_640),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_649=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value797,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_568;
                __result404__ = gComeFunResultObject = __result_obj__ = node_649;
                if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_638 = come_decrement_ref_count2(word_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result404__;
                if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            come_call_finalizer3(type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        word_638 = come_decrement_ref_count2(word_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj307;
char* __dec_obj308;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj307=self->v1;
            come_call_finalizer3(__dec_obj307,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj308=self->v2;
            __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj309;
char* __dec_obj310;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj309=self->v1;
            come_call_finalizer3(__dec_obj309,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj310=self->v2;
            __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sNewChannel_finalize(struct sNewChannel* self){
char* __dec_obj327;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj327=self->sname;
            __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result372__;
void* __right_value681 = (void*)0;
struct sNewChannel* result_597;
void* __right_value682 = (void*)0;
char* __dec_obj328;
struct sNewChannel* __result373__;
    if(    self==(void*)0) {
        __result372__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    result_597=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "sNewChannel"));
    if(    self!=((void*)0)) {
        result_597->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_597->sname;
        result_597->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_597->sline_real=self->sline_real;
    }
    __result373__ = gComeFunResultObject = __result_obj__ = result_597;
    come_call_finalizer3(result_597,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value689 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_606;
struct tuple3$3sTypephcharphsNodeph* __dec_obj329;
void* __right_value690 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_607;
struct tuple3$3sTypephcharphsNodeph* __dec_obj330;
void* __right_value691 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_608;
struct tuple3$3sTypephcharphsNodeph* __dec_obj331;
struct list$1tuple3$3sTypephcharphsNodephph* __result375__;
    if(    self->len==0) {
        litem_606=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value689=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_606->prev=((void*)0);
        litem_606->next=((void*)0);
        __dec_obj329=litem_606->item;
        litem_606->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj329,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_606;
        self->head=litem_606;
    }
    else if(    self->len==1) {
        litem_607=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value690=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_607->prev=self->head;
        litem_607->next=((void*)0);
        __dec_obj330=litem_607->item;
        litem_607->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj330,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_607;
        self->head->next=litem_607;
    }
    else {
        litem_608=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value691=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_608->prev=self->tail;
        litem_608->next=((void*)0);
        __dec_obj331=litem_608->item;
        litem_608->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj331,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_608;
        self->tail=litem_608;
    }
    self->len++;
    __result375__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj332;
char* __dec_obj333;
struct sNode* __dec_obj334;
struct tuple3$3sTypephcharphsNodeph* __result376__;
    __dec_obj332=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj332,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj333=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj334=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
    __result376__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj335;
char* __dec_obj336;
struct tuple3$3sTypephcharphvoidp* __result377__;
    __dec_obj335=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj335,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj336=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result377__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj337;
char* __dec_obj338;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj337=self->v1;
            come_call_finalizer3(__dec_obj337,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj338=self->v2;
            __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value724 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_624;
struct tuple2$2charphsTypeph* __dec_obj354;
void* __right_value725 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_625;
struct tuple2$2charphsTypeph* __dec_obj357;
void* __right_value726 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_626;
struct tuple2$2charphsTypeph* __dec_obj360;
struct list$1tuple2$2charphsTypephph* __result381__;
    if(    self->len==0) {
        litem_624=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value724=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2charphsTypephph"))));
        litem_624->prev=((void*)0);
        litem_624->next=((void*)0);
        __dec_obj354=litem_624->item;
        litem_624->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj354,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_624;
        self->head=litem_624;
    }
    else if(    self->len==1) {
        litem_625=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value725=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2charphsTypephph"))));
        litem_625->prev=self->head;
        litem_625->next=((void*)0);
        __dec_obj357=litem_625->item;
        litem_625->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj357,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_625;
        self->head->next=litem_625;
    }
    else {
        litem_626=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value726=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2charphsTypephph"))));
        litem_626->prev=self->tail;
        litem_626->next=((void*)0);
        __dec_obj360=litem_626->item;
        litem_626->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj360,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_626;
        self->tail=litem_626;
    }
    self->len++;
    __result381__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj361;
struct sType* __dec_obj362;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj361=self->v1;
            __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj362=self->v2;
            come_call_finalizer3(__dec_obj362,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj363;
struct sType* __dec_obj364;
struct tuple2$2charphsTypeph* __result382__;
    __dec_obj363=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj364=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj364,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result382__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj396;
char* __dec_obj397;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj396=self->sname;
            __dec_obj396 = come_decrement_ref_count2(__dec_obj396, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj397=self->name;
            __dec_obj397 = come_decrement_ref_count2(__dec_obj397, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result396__;
void* __right_value776 = (void*)0;
struct sLoadNode* result_644;
void* __right_value777 = (void*)0;
char* __dec_obj398;
void* __right_value778 = (void*)0;
char* __dec_obj399;
struct sLoadNode* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_644=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj398=result_644->sname;
        result_644->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj398 = come_decrement_ref_count2(__dec_obj398, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_644->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj399=result_644->name;
        result_644->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj399 = come_decrement_ref_count2(__dec_obj399, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_644;
    come_call_finalizer3(result_644,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj417;
char* __dec_obj418;
struct sType* __dec_obj419;
struct sNode* __dec_obj420;
struct list$1charph* __dec_obj421;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj422;
char* __dec_obj423;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj417=self->sname;
            __dec_obj417 = come_decrement_ref_count2(__dec_obj417, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj418=self->name;
            __dec_obj418 = come_decrement_ref_count2(__dec_obj418, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj419=self->type;
            come_call_finalizer3(__dec_obj419,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj420=self->right_value;
            if(__dec_obj420) { __dec_obj420 = come_decrement_ref_count2(__dec_obj420, ((struct sNode*)__dec_obj420)->finalize, ((struct sNode*)__dec_obj420)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(        self->multiple_assign==gComeFunResultObject) {
            __dec_obj421=self->multiple_assign;
            come_call_finalizer3(__dec_obj421,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj422=self->multiple_declare;
            come_call_finalizer3(__dec_obj422,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        if(        self->attribute==gComeFunResultObject) {
            __dec_obj423=self->attribute;
            __dec_obj423 = come_decrement_ref_count2(__dec_obj423, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->attribute = come_decrement_ref_count2(self->attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result402__;
void* __right_value798 = (void*)0;
struct sStoreNode* result_650;
void* __right_value799 = (void*)0;
char* __dec_obj424;
void* __right_value800 = (void*)0;
char* __dec_obj425;
void* __right_value801 = (void*)0;
struct sType* __dec_obj426;
void* __right_value802 = (void*)0;
struct sNode* __dec_obj427;
void* __right_value803 = (void*)0;
struct list$1charph* __dec_obj428;
void* __right_value804 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj429;
void* __right_value805 = (void*)0;
char* __dec_obj430;
struct sStoreNode* __result403__;
    if(    self==(void*)0) {
        __result402__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    result_650=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"));
    if(    self!=((void*)0)) {
        result_650->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj424=result_650->sname;
        result_650->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj424 = come_decrement_ref_count2(__dec_obj424, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_650->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj425=result_650->name;
        result_650->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj425 = come_decrement_ref_count2(__dec_obj425, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_650->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj426=result_650->type;
        result_650->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj426,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj427=result_650->right_value;
        result_650->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        if(__dec_obj427) { __dec_obj427 = come_decrement_ref_count2(__dec_obj427, ((struct sNode*)__dec_obj427)->finalize, ((struct sNode*)__dec_obj427)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj428=result_650->multiple_assign;
        result_650->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->multiple_assign));
        come_call_finalizer3(__dec_obj428,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj429=result_650->multiple_declare;
        result_650->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare));
        come_call_finalizer3(__dec_obj429,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj430=result_650->attribute;
        result_650->attribute=(char*)come_increment_ref_count(string_clone(self->attribute));
        __dec_obj430 = come_decrement_ref_count2(__dec_obj430, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result403__ = gComeFunResultObject = __result_obj__ = result_650;
    come_call_finalizer3(result_650,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_651;
void* __right_value807 = (void*)0;
struct sNode* exp_652;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value813 = (void*)0;
struct sNode* __result407__;
void* __right_value814 = (void*)0;
struct sNode* __dec_obj435;
struct sNode* __result408__;
node_651 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_652=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1642, "struct sNode");
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value809=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1642, "sReadChannelNode")),(struct sNode*)come_increment_ref_count(exp_652),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=_inf_value15));
        if(exp_652) { exp_652 = come_decrement_ref_count2(exp_652, ((struct sNode*)exp_652)->finalize, ((struct sNode*)exp_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_651) { node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value809,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result407__;
        if(exp_652) { exp_652 = come_decrement_ref_count2(exp_652, ((struct sNode*)exp_652)->finalize, ((struct sNode*)exp_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        __dec_obj435=node_651;
        node_651=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj435) { __dec_obj435 = come_decrement_ref_count2(__dec_obj435, ((struct sNode*)__dec_obj435)->finalize, ((struct sNode*)__dec_obj435)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result408__ = gComeFunResultObject = __result_obj__ = node_651;
    if(node_651) { node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
char* __dec_obj431;
struct sNode* __dec_obj432;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj431=self->sname;
            __dec_obj431 = come_decrement_ref_count2(__dec_obj431, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj432=self->exp;
            if(__dec_obj432) { __dec_obj432 = come_decrement_ref_count2(__dec_obj432, ((struct sNode*)__dec_obj432)->finalize, ((struct sNode*)__dec_obj432)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result405__;
void* __right_value810 = (void*)0;
struct sReadChannelNode* result_653;
void* __right_value811 = (void*)0;
char* __dec_obj433;
void* __right_value812 = (void*)0;
struct sNode* __dec_obj434;
struct sReadChannelNode* __result406__;
    if(    self==(void*)0) {
        __result405__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    result_653=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "sReadChannelNode"));
    if(    self!=((void*)0)) {
        result_653->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj433=result_653->sname;
        result_653->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj433 = come_decrement_ref_count2(__dec_obj433, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_653->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj434=result_653->exp;
        result_653->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj434) { __dec_obj434 = come_decrement_ref_count2(__dec_obj434, ((struct sNode*)__dec_obj434)->finalize, ((struct sNode*)__dec_obj434)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result406__ = gComeFunResultObject = __result_obj__ = result_653;
    come_call_finalizer3(result_653,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value815 = (void*)0;
struct sNode* right_value_654;
void* __right_value816 = (void*)0;
struct sNode* __dec_obj436;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value823 = (void*)0;
struct sNode* __result411__;
void* __right_value824 = (void*)0;
struct sNode* __result412__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_654=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj436=right_value_654;
        right_value_654=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_654),info));
        if(__dec_obj436) { __dec_obj436 = come_decrement_ref_count2(__dec_obj436, ((struct sNode*)__dec_obj436)->finalize, ((struct sNode*)__dec_obj436)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1665, "struct sNode");
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value818=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1665, "sWriteChannelNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_654),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result411__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value823=_inf_value16));
        if(right_value_654) { right_value_654 = come_decrement_ref_count2(right_value_654, ((struct sNode*)right_value_654)->finalize, ((struct sNode*)right_value_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value818,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value823) { __right_value823 = come_decrement_ref_count2(__right_value823, ((struct sNode*)__right_value823)->finalize, ((struct sNode*)__right_value823)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result411__;
        if(right_value_654) { right_value_654 = come_decrement_ref_count2(right_value_654, ((struct sNode*)right_value_654)->finalize, ((struct sNode*)right_value_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value824=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value824) { __right_value824 = come_decrement_ref_count2(__right_value824, ((struct sNode*)__right_value824)->finalize, ((struct sNode*)__right_value824)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
char* __dec_obj437;
struct sNode* __dec_obj438;
struct sNode* __dec_obj439;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj437=self->sname;
            __dec_obj437 = come_decrement_ref_count2(__dec_obj437, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj438=self->exp;
            if(__dec_obj438) { __dec_obj438 = come_decrement_ref_count2(__dec_obj438, ((struct sNode*)__dec_obj438)->finalize, ((struct sNode*)__dec_obj438)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj439=self->right_value;
            if(__dec_obj439) { __dec_obj439 = come_decrement_ref_count2(__dec_obj439, ((struct sNode*)__dec_obj439)->finalize, ((struct sNode*)__dec_obj439)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result409__;
void* __right_value819 = (void*)0;
struct sWriteChannelNode* result_655;
void* __right_value820 = (void*)0;
char* __dec_obj440;
void* __right_value821 = (void*)0;
struct sNode* __dec_obj441;
void* __right_value822 = (void*)0;
struct sNode* __dec_obj442;
struct sWriteChannelNode* __result410__;
    if(    self==(void*)0) {
        __result409__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    result_655=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "sWriteChannelNode"));
    if(    self!=((void*)0)) {
        result_655->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj440=result_655->sname;
        result_655->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj440 = come_decrement_ref_count2(__dec_obj440, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj441=result_655->exp;
        result_655->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj441) { __dec_obj441 = come_decrement_ref_count2(__dec_obj441, ((struct sNode*)__dec_obj441)->finalize, ((struct sNode*)__dec_obj441)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj442=result_655->right_value;
        result_655->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        if(__dec_obj442) { __dec_obj442 = come_decrement_ref_count2(__dec_obj442, ((struct sNode*)__dec_obj442)->finalize, ((struct sNode*)__dec_obj442)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result410__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

