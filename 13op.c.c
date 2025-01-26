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
struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNilNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static int list$1objectph_length(struct list$1objectph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNode* create_null_node(struct sInfo* info);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
struct sNode* mult_exp(struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value295 = (void*)0;
struct sType* generics_type_266;
struct sType* __dec_obj88;
struct sClass* klass_305;
char* class_name_306;
struct sFun* operator_fun_307;
char* fun_name2_308;
void* __right_value296 = (void*)0;
char* none_generics_name_309;
void* __right_value297 = (void*)0;
struct sType* obj_type_310;
void* __right_value298 = (void*)0;
char* __dec_obj89;
void* __right_value299 = (void*)0;
char* fun_name3_311;
void* __right_value300 = (void*)0;
struct sGenericsFun* generics_fun_312;
void* __right_value301 = (void*)0;
_Bool _if_conditional1;
_Bool __result234__;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_318=0;
char* fun_name_319=0;
void* __right_value304 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun2_320=0;
char* fun_name2_321=0;
void* __right_value305 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_322=0;
char* fun_name_323=0;
void* __right_value306 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_324=0;
char* fun_name2_325=0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __dec_obj118;
int i_326;
void* __right_value309 = (void*)0;
char* new_fun_name_327;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
char* __dec_obj119;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* obj_type_328;
void* __right_value314 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_329=0;
char* fun_name_330=0;
void* __right_value315 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_331=0;
char* fun_name2_332=0;
void* __right_value316 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_333=0;
char* fun_name_334=0;
void* __right_value317 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_335=0;
char* fun_name2_336=0;
_Bool result_337;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_338;
char* left_value2_339;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
_Bool _if_conditional2;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj120;
void* __right_value326 = (void*)0;
char* __dec_obj121;
char* right_value2_343;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool _if_conditional3;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
char* __dec_obj122;
void* __right_value333 = (void*)0;
char* __dec_obj123;
void* __right_value334 = (void*)0;
struct sType* type2_344;
void* __right_value335 = (void*)0;
struct sType* type3_345;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
char* __dec_obj124;
struct sType* result_type_346;
struct sType* obj_type_347;
int generics_num_348;
struct sType* type_349;
struct sType* __dec_obj125;
struct sType* __dec_obj126;
void* __right_value340 = (void*)0;
struct object* __tmp_infY1;
struct sType* refference_type_350;
struct sType* __dec_obj127;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* __dec_obj128;
struct sType* __dec_obj129;
void* __right_value351 = (void*)0;
struct sType* __dec_obj130;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
char* __dec_obj131;
void* __right_value354 = (void*)0;
char* __dec_obj132;
_Bool __result244__;
fun_name2_308 = (void*)0;
memset(&i_326, 0, sizeof(int));
left_value2_339 = (void*)0;
right_value2_343 = (void*)0;
type_349 = (void*)0;
    generics_type_266=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_266->mNoSolvedGenericsType->v1) {
        __dec_obj88=generics_type_266;
        generics_type_266=(struct sType*)come_increment_ref_count(generics_type_266->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_305=type->mClass;
    class_name_306=klass_305->mName;
    operator_fun_307=((void*)0);
    if(    list$1objectph_length(type->mGenericsTypes)>0) {
        none_generics_name_309=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_310=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj89=fun_name2_308;
        fun_name2_308=(char*)come_increment_ref_count(create_method_name(obj_type_310,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_311=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_309,fun_name));
        generics_fun_312=((struct sGenericsFun*)(__right_value300=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_311,((void*)0))));
        come_call_finalizer3(__right_value300,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_312) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_308)),generics_fun_312,obj_type_310,info))),            _if_conditional1) {
                __result234__ = (_Bool)0;
                none_generics_name_309 = come_decrement_ref_count2(none_generics_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_311 = come_decrement_ref_count2(fun_name3_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_308 = come_decrement_ref_count2(fun_name2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result234__;
            }
            operator_fun_307=((struct sFun*)(__right_value302=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_308)));
            come_call_finalizer3(__right_value302,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value303=create_equals_automatically(obj_type_310,"equals",info)));
                fun_318=multiple_assign_var1->v1;
                fun_name_319=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(__right_value303,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value304=create_operator_equals_automatically(obj_type_310,"operator_equals",info)));
                fun2_320=multiple_assign_var2->v1;
                fun_name2_321=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value304,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_307=fun2_320;
                fun_name_319 = come_decrement_ref_count2(fun_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_321 = come_decrement_ref_count2(fun_name2_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value305=create_not_equals_automatically(obj_type_310,"not_equals",info)));
                fun_322=multiple_assign_var3->v1;
                fun_name_323=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value305,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value306=create_operator_not_equals_automatically(obj_type_310,"operator_not_equals",info)));
                fun2_324=multiple_assign_var4->v1;
                fun_name2_325=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value306,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_307=fun2_324;
                fun_name_323 = come_decrement_ref_count2(fun_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_325 = come_decrement_ref_count2(fun_name2_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                operator_fun_307=((struct sFun*)(__right_value307=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_308)));
                come_call_finalizer3(__right_value307,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        none_generics_name_309 = come_decrement_ref_count2(none_generics_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_311 = come_decrement_ref_count2(fun_name3_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj118=fun_name2_308;
        fun_name2_308=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_326=128-1;        i_326>=1;        i_326--        ){
            new_fun_name_327=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_308,i_326));
            operator_fun_307=((struct sFun*)(__right_value310=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_327)));
            come_call_finalizer3(__right_value310,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            operator_fun_307) {
                __dec_obj119=fun_name2_308;
                fun_name2_308=(char*)come_increment_ref_count(__builtin_string(new_fun_name_327));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_327 = come_decrement_ref_count2(new_fun_name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_327 = come_decrement_ref_count2(new_fun_name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_307==((void*)0)) {
            operator_fun_307=((struct sFun*)(__right_value312=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_308)));
            come_call_finalizer3(__right_value312,sFun_finalize, 0, 1, 0, 0, (void*)0);
            obj_type_328=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
            if(            operator_fun_307==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value314=create_equals_automatically(obj_type_328,"equals",info)));
                    fun_329=multiple_assign_var5->v1;
                    fun_name_330=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    come_call_finalizer3(__right_value314,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value315=create_operator_equals_automatically(obj_type_328,"operator_equals",info)));
                    fun2_331=multiple_assign_var6->v1;
                    fun_name2_332=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                    come_call_finalizer3(__right_value315,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_307=fun2_331;
                    fun_name_330 = come_decrement_ref_count2(fun_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_332 = come_decrement_ref_count2(fun_name2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value316=create_not_equals_automatically(obj_type_328,"not_equals",info)));
                    fun_333=multiple_assign_var7->v1;
                    fun_name_334=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    come_call_finalizer3(__right_value316,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value317=create_operator_not_equals_automatically(obj_type_328,"operator_not_equals",info)));
                    fun2_335=multiple_assign_var8->v1;
                    fun_name2_336=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    come_call_finalizer3(__right_value317,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_307=fun2_335;
                    fun_name_334 = come_decrement_ref_count2(fun_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_336 = come_decrement_ref_count2(fun_name2_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(obj_type_328,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    result_337=(_Bool)0;
    if(    operator_fun_307&&(list$1objectph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_338=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 92, "CVALUE"))));
        check_assign_type(((char*)(__right_value321=xsprintf("\%s is assigned to",((char*)(__right_value320=string_to_string(fun_name2_308)))))),((struct sType*)come_null_check(((struct sType*)(__right_value322=list$1sTypephp_operator_load_element(operator_fun_307->mParamTypes,0))), "13op.c", 94, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value323=list$1sTypephp_operator_load_element(operator_fun_307->mParamTypes,0))), "13op.c", 95, 1))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value324=list$1sTypephp_operator_load_element(operator_fun_307->mParamTypes,0))), "13op.c", 96, 2)),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj120=left_value2_339;
            left_value2_339=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj121=left_value2_339;
            left_value2_339=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value328=xsprintf("\%s is assigned to",((char*)(__right_value327=string_to_string(fun_name2_308)))))),((struct sType*)come_null_check(((struct sType*)(__right_value329=list$1sTypephp_operator_load_element(operator_fun_307->mParamTypes,1))), "13op.c", 103, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value329,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)come_null_check(((struct sType*)(__right_value330=list$1sTypephp_operator_load_element(operator_fun_307->mParamTypes,1))), "13op.c", 104, 4))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value330,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value331=list$1sTypephp_operator_load_element(operator_fun_307->mParamTypes,1))), "13op.c", 105, 5)),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value331,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj122=right_value2_343;
            right_value2_343=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj123=right_value2_343;
            right_value2_343=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type2_344=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_307->mResultType));
        type3_345=(struct sType*)come_increment_ref_count(solve_generics(type2_344,generics_type_266,info));
        __dec_obj124=come_value_338->c_value;
        come_value_338->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value336=string_to_string(fun_name2_308))),((char*)(__right_value337=string_to_string(left_value2_339))),((char*)(__right_value338=string_to_string(right_value2_343)))));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_346=(struct sType*)come_increment_ref_count(type2_344);
        obj_type_347=(struct sType*)come_increment_ref_count(generics_type_266);
        if(        type3_345->mClass->mProtocol&&type3_345->mRefference) {
            generics_num_348=result_type_346->mGenericsNumBefore;
            if(            obj_type_347->mNoSolvedGenericsType&&obj_type_347->mNoSolvedGenericsType->v1) {
                __dec_obj125=type_349;
                type_349=(struct sType*)come_increment_ref_count(obj_type_347->mNoSolvedGenericsType->v1);
                come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj126=type_349;
                type_349=(struct sType*)come_increment_ref_count(obj_type_347);
                come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            type_349) {
                refference_type_350=(struct sType*)come_increment_ref_count(list$1objectphp_operator_load_element(type_349->mGenericsTypes,generics_num_348));
                if(                refference_type_350&&refference_type_350->mRefferenceOriginalType) {
                    __dec_obj127=refference_type_350;
                    refference_type_350=(struct sType*)come_increment_ref_count(refference_type_350->mRefferenceOriginalType->v1);
                    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                    static int i_354=0;
                    i_354++;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value343=make_define_var(result_type_346,((char*)(__right_value342=xsprintf("__tmp_infX\%s",((char*)(__right_value341=int_to_string(i_354)))))),(_Bool)0,info))));
                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj128=come_value_338->c_value;
                    come_value_338->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_infX\%s=\%s),((\%s)(__tmp_infX\%s ? __tmp_infX\%s->_protocol_obj:(void*)0)))",((char*)(__right_value344=int_to_string(i_354))),((char*)(__right_value345=string_to_string(come_value_338->c_value))),((char*)(__right_value347=string_to_string(((char*)(__right_value346=make_type_name_string(refference_type_350,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value348=int_to_string(i_354))),((char*)(__right_value349=int_to_string(i_354)))));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj129=type3_345;
                    type3_345=(struct sType*)come_increment_ref_count(refference_type_350);
                    come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
                    type3_345->mHeap=result_type_346->mHeap;
                }
                come_call_finalizer3(refference_type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        __dec_obj130=come_value_338->type;
        come_value_338->type=(struct sType*)come_increment_ref_count(sType_clone(type3_345));
        come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_338->var=((void*)0);
        if(        type3_345->mHeap) {
            append_object_to_right_values2(come_value_338,(struct sType*)come_increment_ref_count(type3_345),info,(_Bool)0);
        }
        if(        !break_guard&&type3_345->mGuardValue&&type3_345->mPointerNum>0) {
            __dec_obj131=come_value_338->c_value;
            come_value_338->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value352=make_type_name_string(type3_345,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_338->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj132=come_value_338->c_value;
        come_value_338->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_338->c_value,come_value_338->type,info));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_338->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_338));
        result_337=(_Bool)1;
        come_call_finalizer3(come_value_338,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_339 = come_decrement_ref_count2(left_value2_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_343 = come_decrement_ref_count2(right_value2_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_344,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_345,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result244__ = result_337;
    come_call_finalizer3(generics_type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_308 = come_decrement_ref_count2(fun_name2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result244__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result207__;
void* __right_value249 = (void*)0;
struct sType* result_267;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value255 = (void*)0;
char* __dec_obj62;
void* __right_value256 = (void*)0;
char* __dec_obj63;
void* __right_value264 = (void*)0;
struct list$1objectph* __dec_obj67;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj71;
void* __right_value279 = (void*)0;
struct list$1sTypeph* __dec_obj75;
void* __right_value286 = (void*)0;
struct list$1charph* __dec_obj79;
void* __right_value287 = (void*)0;
struct tuple1$1sTypeph* __dec_obj80;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value289 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value291 = (void*)0;
char* __dec_obj84;
void* __right_value292 = (void*)0;
char* __dec_obj85;
void* __right_value293 = (void*)0;
char* __dec_obj86;
void* __right_value294 = (void*)0;
char* __dec_obj87;
struct sType* __result229__;
    if(    self==(void*)0) {
        __result207__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_267=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_267->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj59=result_267->mNoSolvedGenericsType;
        result_267->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj60=result_267->mOriginalLoadVarType;
        result_267->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj61=result_267->mRefferenceOriginalType;
        result_267->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj62=result_267->mInterfaceName;
        result_267->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj63=result_267->mGenericsName;
        result_267->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj67=result_267->mGenericsTypes;
        result_267->mGenericsTypes=(struct list$1objectph*)come_increment_ref_count(list$1objectphp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj67,list$1objectph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj71=result_267->mArrayNum;
        result_267->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj75=result_267->mParamTypes;
        result_267->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj75,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj79=result_267->mParamNames;
        result_267->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj80=result_267->mResultType;
        result_267->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj81=result_267->mAlignas;
        result_267->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj82=result_267->mChannelType;
        result_267->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_267->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_267->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_267->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_267->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_267->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_267->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_267->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_267->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_267->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_267->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_267->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_267->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_267->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_267->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_267->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_267->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_267->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_267->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_267->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_267->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_267->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_267->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_267->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_267->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_267->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj83=result_267->mSizeNum;
        result_267->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_267->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj84=result_267->mOriginalTypeName;
        result_267->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_267->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_267->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_267->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_267->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_267->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_267->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_267->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj85=result_267->mAsmName;
        result_267->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_267->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_267->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_267->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_267->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_267->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj86=result_267->mTupleName;
        result_267->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj87=result_267->mAttribute;
        result_267->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_267;
    come_call_finalizer3(result_267,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result208__;
void* __right_value250 = (void*)0;
struct tuple1$1sTypeph* result_268;
void* __right_value251 = (void*)0;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result209__;
    if(    self==(void*)0) {
        __result208__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    result_268=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj32=result_268->v1;
        result_268->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = result_268;
    come_call_finalizer3(result_268,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj37;
char* __dec_obj39;
char* __dec_obj40;
struct list$1objectph* __dec_obj41;
struct list$1sNodeph* __dec_obj43;
struct list$1sTypeph* __dec_obj45;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj33=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj37=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj39=self->mInterfaceName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj40=self->mGenericsName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj41=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj41,list$1objectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj43=self->mArrayNum;
            come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj45=self->mParamTypes;
            come_call_finalizer3(__dec_obj45,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj47=self->mParamNames;
            come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj48=self->mResultType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj50=self->mAlignas;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj53=self->mSizeNum;
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj54=self->mOriginalTypeName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj55=self->mAsmName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj56=self->mTupleName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj57=self->mAttribute;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1objectph_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_269;
struct list_item$1objectph* prev_it_270;
    it_269=self->head;
    while(it_269!=((void*)0)) {
        prev_it_270=it_269;
        it_269=it_269->next;
        come_call_finalizer3(prev_it_270,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1objectphp_finalize(struct list_item$1objectph* self){
struct object* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct object*)__dec_obj42)->finalize, ((struct object*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct object*)self->item)->finalize, ((struct object*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1objectphp_finalize(struct list$1objectph* self){
struct list_item$1objectph* it_271;
struct list_item$1objectph* prev_it_272;
    it_271=self->head;
    while(it_271!=((void*)0)) {
        prev_it_272=it_271;
        it_271=it_271->next;
        come_call_finalizer3(prev_it_272,list_item$1objectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_273;
struct list_item$1sNodeph* prev_it_274;
    it_273=self->head;
    while(it_273!=((void*)0)) {
        prev_it_274=it_273;
        it_273=it_273->next;
        come_call_finalizer3(prev_it_274,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_275;
struct list_item$1sNodeph* prev_it_276;
    it_275=self->head;
    while(it_275!=((void*)0)) {
        prev_it_276=it_275;
        it_275=it_275->next;
        come_call_finalizer3(prev_it_276,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_277;
struct list_item$1sTypeph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        come_call_finalizer3(prev_it_278,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_279;
struct list_item$1sTypeph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        come_call_finalizer3(prev_it_280,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_281;
struct list_item$1charph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        come_call_finalizer3(prev_it_282,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
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

static struct list$1objectph* list$1objectphp_clone(struct list$1objectph* self){
void* __result_obj__=(void*)0;
struct list$1objectph* __result210__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1objectph* result_283;
struct list_item$1objectph* it_284;
void* __right_value263 = (void*)0;
struct list$1objectph* __result215__;
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_283=(struct list$1objectph*)come_increment_ref_count(list$1objectph_initialize((struct list$1objectph*)come_increment_ref_count((struct list$1objectph*)come_calloc(1, sizeof(struct list$1objectph)*(1), "/usr/local/include/comelang.h", 1070, "list$1objectph"))));
    it_284=self->head;
    while(it_284!=((void*)0)) {
        list$1objectph_add(result_283,(struct object*)come_increment_ref_count(object_clone(it_284->item)));
        it_284=it_284->next;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_283;
    come_call_finalizer3(result_283,list$1objectphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value259 = (void*)0;
struct list_item$1objectph* litem_285;
struct object* __dec_obj64;
void* __right_value260 = (void*)0;
struct list_item$1objectph* litem_286;
struct object* __dec_obj65;
void* __right_value261 = (void*)0;
struct list_item$1objectph* litem_287;
struct object* __dec_obj66;
struct list$1objectph* __result212__;
    if(    self->len==0) {
        litem_285=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value259=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1objectph"))));
        litem_285->prev=((void*)0);
        litem_285->next=((void*)0);
        __dec_obj64=litem_285->item;
        litem_285->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct object*)__dec_obj64)->finalize, ((struct object*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_285;
        self->head=litem_285;
    }
    else if(    self->len==1) {
        litem_286=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value260=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1objectph"))));
        litem_286->prev=self->head;
        litem_286->next=((void*)0);
        __dec_obj65=litem_286->item;
        litem_286->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct object*)__dec_obj65)->finalize, ((struct object*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_286;
        self->head->next=litem_286;
    }
    else {
        litem_287=(struct list_item$1objectph*)come_increment_ref_count(((struct list_item$1objectph*)(__right_value261=(struct list_item$1objectph*)come_calloc(1, sizeof(struct list_item$1objectph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1objectph"))));
        litem_287->prev=self->tail;
        litem_287->next=((void*)0);
        __dec_obj66=litem_287->item;
        litem_287->item=(struct object*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct object*)__dec_obj66)->finalize, ((struct object*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_287;
        self->tail=litem_287;
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
void* __right_value262 = (void*)0;
struct object* result_288;
struct object* __result214__;
    if(    self==(void*)0) {
        __result213__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    result_288=(struct object*)come_increment_ref_count((struct object*)come_calloc(1, sizeof(struct object)*(1), "object_clone", 3, "object"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_288->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_288->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_288->clone=self->clone;
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_288;
    if(result_288) { result_288 = come_decrement_ref_count2(result_288, ((struct object*)result_288)->finalize, ((struct object*)result_288)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result216__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_289;
struct list_item$1sNodeph* it_290;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result221__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    result_289=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_290=self->head;
    while(it_290!=((void*)0)) {
        list$1sNodeph_add(result_289,(struct sNode*)come_increment_ref_count(sNode_clone(it_290->item)));
        it_290=it_290->next;
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_289;
    come_call_finalizer3(result_289,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_291;
struct sNode* __dec_obj68;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_292;
struct sNode* __dec_obj69;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_293;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result218__;
    if(    self->len==0) {
        litem_291=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj68=litem_291->item;
        litem_291->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj69=litem_292->item;
        litem_292->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj70=litem_293->item;
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_293;
        self->tail=litem_293;
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
void* __right_value270 = (void*)0;
struct sNode* result_294;
struct sNode* __result220__;
    if(    self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_294=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_294->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_294->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_294->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_294->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_294->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_294->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_294->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_294->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_294->kind=self->kind;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_294;
    if(result_294) { result_294 = come_decrement_ref_count2(result_294, ((struct sNode*)result_294)->finalize, ((struct sNode*)result_294)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result222__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1sTypeph* result_295;
struct list_item$1sTypeph* it_296;
void* __right_value278 = (void*)0;
struct list$1sTypeph* __result225__;
    if(    self==((void*)0)) {
        __result222__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_295=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_296=self->head;
    while(it_296!=((void*)0)) {
        list$1sTypeph_add(result_295,(struct sType*)come_increment_ref_count(sType_clone(it_296->item)));
        it_296=it_296->next;
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_295;
    come_call_finalizer3(result_295,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value275 = (void*)0;
struct list_item$1sTypeph* litem_297;
struct sType* __dec_obj72;
void* __right_value276 = (void*)0;
struct list_item$1sTypeph* litem_298;
struct sType* __dec_obj73;
void* __right_value277 = (void*)0;
struct list_item$1sTypeph* litem_299;
struct sType* __dec_obj74;
struct list$1sTypeph* __result224__;
    if(    self->len==0) {
        litem_297=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value275=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_297->prev=((void*)0);
        litem_297->next=((void*)0);
        __dec_obj72=litem_297->item;
        litem_297->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_297;
        self->head=litem_297;
    }
    else if(    self->len==1) {
        litem_298=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value276=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_298->prev=self->head;
        litem_298->next=((void*)0);
        __dec_obj73=litem_298->item;
        litem_298->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_298;
        self->head->next=litem_298;
    }
    else {
        litem_299=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value277=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_299->prev=self->tail;
        litem_299->next=((void*)0);
        __dec_obj74=litem_299->item;
        litem_299->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_299;
        self->tail=litem_299;
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
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* result_300;
struct list_item$1charph* it_301;
void* __right_value285 = (void*)0;
struct list$1charph* __result228__;
    if(    self==((void*)0)) {
        __result226__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    result_300=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_301=self->head;
    while(it_301!=((void*)0)) {
        list$1charph_add(result_300,(char*)come_increment_ref_count(string_clone(it_301->item)));
        it_301=it_301->next;
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_300;
    come_call_finalizer3(result_300,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_302;
char* __dec_obj76;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_303;
char* __dec_obj77;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_304;
char* __dec_obj78;
struct list$1charph* __result227__;
    if(    self->len==0) {
        litem_302=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_302->prev=((void*)0);
        litem_302->next=((void*)0);
        __dec_obj76=litem_302->item;
        litem_302->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_302;
        self->head=litem_302;
    }
    else if(    self->len==1) {
        litem_303=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_303->prev=self->head;
        litem_303->next=((void*)0);
        __dec_obj77=litem_303->item;
        litem_303->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_303;
        self->head->next=litem_303;
    }
    else {
        litem_304=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_304->prev=self->tail;
        litem_304->next=((void*)0);
        __dec_obj78=litem_304->item;
        litem_304->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_304;
        self->tail=litem_304;
    }
    self->len++;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static int list$1objectph_length(struct list$1objectph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_313;
unsigned int it_314;
struct sGenericsFun* __result230__;
struct sGenericsFun* __result231__;
struct sGenericsFun* __result232__;
struct sGenericsFun* __result233__;
    hash_313=charp_get_hash_key(((char*)key))%self->size;
    it_314=hash_313;
    while((_Bool)1) {
        if(        self->item_existance[it_314]) {
            if(            charp_equals(self->keys[it_314],key)) {
                __result230__ = gComeFunResultObject = __result_obj__ = self->items[it_314];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
            it_314++;
            if(            it_314>=self->size) {
                it_314=0;
            }
            else if(            it_314==hash_313) {
                __result231__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result231__;
            }
        }
        else {
            __result232__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj90;
struct list$1charph* __dec_obj91;
struct list$1charph* __dec_obj92;
char* __dec_obj93;
struct sType* __dec_obj94;
struct list$1sTypeph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
char* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj90=self->mImplType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj91=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj92=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj93=self->mName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj94=self->mResultType;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj95=self->mParamTypes;
            come_call_finalizer3(__dec_obj95,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj96=self->mParamNames;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj97=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj98=self->mBlock;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj99=self->mGenericsSName;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_315;
unsigned int hash_316;
unsigned int it_317;
struct sFun* __result235__;
struct sFun* __result236__;
struct sFun* __result237__;
struct sFun* __result238__;
default_value_315 = (void*)0;
    memset(&default_value_315,0,sizeof(struct sFun*));
    hash_316=charp_get_hash_key(((char*)key))%self->size;
    it_317=hash_316;
    while((_Bool)1) {
        if(        self->item_existance[it_317]) {
            if(            charp_equals(self->keys[it_317],key)) {
                __result235__ = gComeFunResultObject = __result_obj__ = self->items[it_317];
                come_call_finalizer3(default_value_315,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            it_317++;
            if(            it_317>=self->size) {
                it_317=0;
            }
            else if(            it_317==hash_316) {
                __result236__ = gComeFunResultObject = __result_obj__ = default_value_315;
                come_call_finalizer3(default_value_315,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
        }
        else {
            __result237__ = gComeFunResultObject = __result_obj__ = default_value_315;
            come_call_finalizer3(default_value_315,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = default_value_315;
    come_call_finalizer3(default_value_315,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
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

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj117;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj117=self->v2;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_340;
int i_341;
struct sType* __result239__;
struct sType* default_value_342;
struct sType* __result240__;
default_value_342 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_340=self->head;
    i_341=0;
    while(it_340!=((void*)0)) {
        if(        position==i_341) {
            __result239__ = gComeFunResultObject = __result_obj__ = it_340->item;
            gComeFunResultObject = (void*)0;
            return __result239__;
        }
        it_340=it_340->next;
        i_341++;
    }
    memset(&default_value_342,0,sizeof(struct sType*));
    __result240__ = gComeFunResultObject = __result_obj__ = default_value_342;
    come_call_finalizer3(default_value_342,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct object* list$1objectphp_operator_load_element(struct list$1objectph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1objectph* it_351;
int i_352;
struct object* __result241__;
struct object* default_value_353;
struct object* __result242__;
default_value_353 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_351=self->head;
    i_352=0;
    while(it_351!=((void*)0)) {
        if(        position==i_352) {
            __result241__ = gComeFunResultObject = __result_obj__ = it_351->item;
            gComeFunResultObject = (void*)0;
            return __result241__;
        }
        it_351=it_351->next;
        i_352++;
    }
    memset(&default_value_353,0,sizeof(struct object*));
    __result242__ = gComeFunResultObject = __result_obj__ = default_value_353;
    if(default_value_353) { default_value_353 = come_decrement_ref_count2(default_value_353, ((struct object*)default_value_353)->finalize, ((struct object*)default_value_353)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
struct list_item$1CVALUEph* litem_355;
struct CVALUE* __dec_obj133;
void* __right_value356 = (void*)0;
struct list_item$1CVALUEph* litem_356;
struct CVALUE* __dec_obj137;
void* __right_value357 = (void*)0;
struct list_item$1CVALUEph* litem_357;
struct CVALUE* __dec_obj138;
struct list$1CVALUEph* __result243__;
    if(    self->len==0) {
        litem_355=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value355=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj133=litem_355->item;
        litem_355->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head=litem_355;
    }
    else if(    self->len==1) {
        litem_356=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value356=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_356->prev=self->head;
        litem_356->next=((void*)0);
        __dec_obj137=litem_356->item;
        litem_356->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj137,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_356;
        self->head->next=litem_356;
    }
    else {
        litem_357=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value357=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_357->prev=self->tail;
        litem_357->next=((void*)0);
        __dec_obj138=litem_357->item;
        litem_357->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_357;
        self->tail=litem_357;
    }
    self->len++;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj134;
struct sType* __dec_obj135;
char* __dec_obj136;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj134=self->c_value;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj135=self->type;
            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj136=self->c_value_without_right_value_objects;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
struct sNullNode* __result245__;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("sNullNode")));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_358;
void* __right_value362 = (void*)0;
char* __dec_obj141;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* __dec_obj142;
_Bool __result247__;
    come_value_358=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 186, "CVALUE"))));
    __dec_obj141=come_value_358->c_value;
    come_value_358->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj142=come_value_358->type;
    come_value_358->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 189, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_358->var=((void*)0);
    add_come_last_code(info,"%s",come_value_358->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_358));
    __result247__ = (_Bool)1;
    come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result247__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj139;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value369 = (void*)0;
struct sNode* __result250__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 202, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value366=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 202, "sNullNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result250__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value369=_inf_value1));
    come_call_finalizer3(__right_value366,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value369) { __right_value369 = come_decrement_ref_count2(__right_value369, ((struct sNode*)__right_value369)->finalize, ((struct sNode*)__right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result250__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
struct sNilNode* __result251__;
    ((struct sNodeBase*)(__right_value370=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value370,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
char* __result252__;
    __result252__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value371=__builtin_string("sNilNode")));
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct CVALUE* come_value_360;
void* __right_value374 = (void*)0;
char* __dec_obj146;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* __dec_obj147;
_Bool __result253__;
    come_value_360=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 219, "CVALUE"))));
    __dec_obj146=come_value_360->c_value;
    come_value_360->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value_360->type;
    come_value_360->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 222, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_360->type->mNullValue=(_Bool)1;
    come_value_360->var=((void*)0);
    add_come_last_code(info,"%s",come_value_360->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_360));
    __result253__ = (_Bool)1;
    come_call_finalizer3(come_value_360,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result253__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj148;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj149;
struct sAddNode* __result254__;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value377,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj148=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj149=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result254__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
char* __result255__;
    __result255__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value380=__builtin_string("sAddNode")));
    __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_361;
_Bool Value_362;
void* __right_value381 = (void*)0;
struct CVALUE* left_value_363;
struct sNode* right_node_364;
_Bool Value_365;
_Bool __result256__;
void* __right_value382 = (void*)0;
struct CVALUE* right_value_366;
struct sType* type_367;
char* fun_name_368;
_Bool calling_fun_369;
void* __right_value383 = (void*)0;
struct sType* result_type_370;
void* __right_value384 = (void*)0;
struct sType* __dec_obj153;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_371;
void* __right_value387 = (void*)0;
char* __dec_obj154;
void* __right_value388 = (void*)0;
struct sType* __dec_obj155;
_Bool __result257__;
memset(&calling_fun_369, 0, sizeof(_Bool));
    left_node_361=self->mLeft;
    Value_362=node_compile(left_node_361,info);
    if(    !Value_362) {
        return (_Bool)0;
    }
    else {
    }
    left_value_363=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_364=self->mRight;
    Value_365=node_compile(right_node_364,info);
    if(    !Value_365) {
        __result256__ = (_Bool)0;
        come_call_finalizer3(left_value_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result256__;
    }
    else {
    }
    right_value_366=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_367=(struct sType*)come_increment_ref_count(left_value_363->type);
    fun_name_368="operator_add";
    if(    self->mQuote) {
        calling_fun_369=(_Bool)0;
    }
    else {
        calling_fun_369=operator_overload_fun(type_367,fun_name_368,left_value_363,right_value_366,(_Bool)0,info);
    }
    if(    !calling_fun_369) {
        result_type_370=(struct sType*)come_increment_ref_count(sType_clone(left_value_363->type));
        if(        right_value_366->type->mPointerNum>0) {
            __dec_obj153=result_type_370;
            result_type_370=(struct sType*)come_increment_ref_count(sType_clone(right_value_366->type));
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_371=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 288, "CVALUE"))));
        __dec_obj154=come_value_371->c_value;
        come_value_371->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_363->c_value,right_value_366->c_value));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj155=come_value_371->type;
        come_value_371->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_370));
        come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_371->type->mHeap=(_Bool)0;
        come_value_371->var=((void*)0);
        add_come_last_code(info,"%s",come_value_371->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_371));
        come_call_finalizer3(result_type_370,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_371,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result257__ = (_Bool)1;
    come_call_finalizer3(left_value_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_366,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result257__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value391 = (void*)0;
struct sNode* __dec_obj157;
struct sSubNode* __result258__;
    ((struct sNodeBase*)(__right_value389=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value389,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj156=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj157=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
char* __result259__;
    __result259__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value392=__builtin_string("sSubNode")));
    __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_372;
_Bool Value_373;
void* __right_value393 = (void*)0;
struct CVALUE* left_value_374;
struct sNode* right_node_375;
_Bool Value_376;
_Bool __result260__;
void* __right_value394 = (void*)0;
struct CVALUE* right_value_377;
struct sType* type_378;
char* fun_name_379;
_Bool calling_fun_380;
void* __right_value395 = (void*)0;
struct sType* result_type_381;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* __dec_obj161;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_382;
void* __right_value400 = (void*)0;
char* __dec_obj162;
void* __right_value401 = (void*)0;
struct sType* __dec_obj163;
_Bool __result261__;
memset(&calling_fun_380, 0, sizeof(_Bool));
    left_node_372=self->mLeft;
    Value_373=node_compile(left_node_372,info);
    if(    !Value_373) {
        return (_Bool)0;
    }
    else {
    }
    left_value_374=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_375=self->mRight;
    Value_376=node_compile(right_node_375,info);
    if(    !Value_376) {
        __result260__ = (_Bool)0;
        come_call_finalizer3(left_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result260__;
    }
    else {
    }
    right_value_377=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_378=(struct sType*)come_increment_ref_count(left_value_374->type);
    fun_name_379="operator_sub";
    if(    self->mQuote) {
        calling_fun_380=(_Bool)0;
    }
    else {
        calling_fun_380=operator_overload_fun(type_378,fun_name_379,left_value_374,right_value_377,(_Bool)0,info);
    }
    if(    !calling_fun_380) {
        result_type_381=(struct sType*)come_increment_ref_count(sType_clone(left_value_374->type));
        if(        left_value_374->type->mPointerNum>0&&right_value_377->type->mPointerNum>0) {
            __dec_obj161=result_type_381;
            result_type_381=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 355, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_382=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 358, "CVALUE"))));
        __dec_obj162=come_value_382->c_value;
        come_value_382->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_374->c_value,right_value_377->c_value));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj163=come_value_382->type;
        come_value_382->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_381));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_382->type->mHeap=(_Bool)0;
        come_value_382->var=((void*)0);
        add_come_last_code(info,"%s",come_value_382->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_382));
        come_call_finalizer3(result_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_382,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result261__ = (_Bool)1;
    come_call_finalizer3(left_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result261__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value404 = (void*)0;
struct sNode* __dec_obj165;
struct sMultNode* __result262__;
    ((struct sNodeBase*)(__right_value402=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value402,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj164=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj165=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result262__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value405 = (void*)0;
char* __result263__;
    __result263__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value405=__builtin_string("sMultNode")));
    __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_383;
_Bool Value_384;
void* __right_value406 = (void*)0;
struct CVALUE* left_value_385;
struct sNode* right_node_386;
_Bool Value_387;
_Bool __result264__;
void* __right_value407 = (void*)0;
struct CVALUE* right_value_388;
struct sType* type_389;
char* fun_name_390;
_Bool calling_fun_391;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value410 = (void*)0;
char* __dec_obj169;
void* __right_value411 = (void*)0;
struct sType* __dec_obj170;
_Bool __result265__;
memset(&calling_fun_391, 0, sizeof(_Bool));
    left_node_383=self->mLeft;
    Value_384=node_compile(left_node_383,info);
    if(    !Value_384) {
        return (_Bool)0;
    }
    else {
    }
    left_value_385=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_386=self->mRight;
    Value_387=node_compile(right_node_386,info);
    if(    !Value_387) {
        __result264__ = (_Bool)0;
        come_call_finalizer3(left_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result264__;
    }
    else {
    }
    right_value_388=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_389=(struct sType*)come_increment_ref_count(left_value_385->type);
    fun_name_390="operator_mult";
    if(    self->mQuote) {
        calling_fun_391=(_Bool)0;
    }
    else {
        calling_fun_391=operator_overload_fun(type_389,fun_name_390,left_value_385,right_value_388,(_Bool)0,info);
    }
    if(    !calling_fun_391) {
        come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 423, "CVALUE"))));
        __dec_obj169=come_value_392->c_value;
        come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_385->c_value,right_value_388->c_value));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj170=come_value_392->type;
        come_value_392->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_385->type));
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_392->type->mHeap=(_Bool)0;
        come_value_392->var=((void*)0);
        add_come_last_code(info,"%s",come_value_392->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
        come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result265__ = (_Bool)1;
    come_call_finalizer3(left_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_389,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result265__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value414 = (void*)0;
struct sNode* __dec_obj172;
struct sDivNode* __result266__;
    ((struct sNodeBase*)(__right_value412=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value412,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj171=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj172=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result266__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value415 = (void*)0;
char* __result267__;
    __result267__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value415=__builtin_string("sDivNode")));
    __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_393;
_Bool Value_394;
void* __right_value416 = (void*)0;
struct CVALUE* left_value_395;
struct sNode* right_node_396;
_Bool Value_397;
_Bool __result268__;
void* __right_value417 = (void*)0;
struct CVALUE* right_value_398;
struct sType* type_399;
char* fun_name_400;
_Bool calling_fun_401;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value420 = (void*)0;
char* __dec_obj176;
void* __right_value421 = (void*)0;
struct sType* __dec_obj177;
_Bool __result269__;
memset(&calling_fun_401, 0, sizeof(_Bool));
    left_node_393=self->mLeft;
    Value_394=node_compile(left_node_393,info);
    if(    !Value_394) {
        return (_Bool)0;
    }
    else {
    }
    left_value_395=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_396=self->mRight;
    Value_397=node_compile(right_node_396,info);
    if(    !Value_397) {
        __result268__ = (_Bool)0;
        come_call_finalizer3(left_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result268__;
    }
    else {
    }
    right_value_398=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_399=(struct sType*)come_increment_ref_count(left_value_395->type);
    fun_name_400="operator_div";
    if(    self->mQuote) {
        calling_fun_401=(_Bool)0;
    }
    else {
        calling_fun_401=operator_overload_fun(type_399,fun_name_400,left_value_395,right_value_398,(_Bool)0,info);
    }
    if(    !calling_fun_401) {
        come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 488, "CVALUE"))));
        __dec_obj176=come_value_402->c_value;
        come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_395->c_value,right_value_398->c_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=come_value_402->type;
        come_value_402->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_395->type));
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_402->type->mHeap=(_Bool)0;
        come_value_402->var=((void*)0);
        add_come_last_code(info,"%s",come_value_402->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
        come_call_finalizer3(come_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result269__ = (_Bool)1;
    come_call_finalizer3(left_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj179;
struct sModNode* __result270__;
    ((struct sNodeBase*)(__right_value422=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value422,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj178=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj179=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value425=__builtin_string("sModNode")));
    __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_403;
_Bool Value_404;
void* __right_value426 = (void*)0;
struct CVALUE* left_value_405;
struct sNode* right_node_406;
_Bool Value_407;
_Bool __result272__;
void* __right_value427 = (void*)0;
struct CVALUE* right_value_408;
struct sType* type_409;
char* fun_name_410;
_Bool calling_fun_411;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value430 = (void*)0;
char* __dec_obj183;
void* __right_value431 = (void*)0;
struct sType* __dec_obj184;
_Bool __result273__;
memset(&calling_fun_411, 0, sizeof(_Bool));
    left_node_403=self->mLeft;
    Value_404=node_compile(left_node_403,info);
    if(    !Value_404) {
        return (_Bool)0;
    }
    else {
    }
    left_value_405=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_406=self->mRight;
    Value_407=node_compile(right_node_406,info);
    if(    !Value_407) {
        __result272__ = (_Bool)0;
        come_call_finalizer3(left_value_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result272__;
    }
    else {
    }
    right_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_409=(struct sType*)come_increment_ref_count(left_value_405->type);
    fun_name_410="operator_mod";
    if(    self->mQuote) {
        calling_fun_411=(_Bool)0;
    }
    else {
        calling_fun_411=operator_overload_fun(type_409,fun_name_410,left_value_405,right_value_408,(_Bool)0,info);
    }
    if(    !calling_fun_411) {
        come_value_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 553, "CVALUE"))));
        __dec_obj183=come_value_412->c_value;
        come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_405->c_value,right_value_408->c_value));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj184=come_value_412->type;
        come_value_412->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_405->type));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_412->type->mHeap=(_Bool)0;
        come_value_412->var=((void*)0);
        add_come_last_code(info,"%s",come_value_412->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
        come_call_finalizer3(come_value_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result273__ = (_Bool)1;
    come_call_finalizer3(left_value_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result273__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj186;
struct sLShiftNode* __result274__;
    ((struct sNodeBase*)(__right_value432=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value432,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj185=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj186=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result274__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value435 = (void*)0;
char* __result275__;
    __result275__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value435=__builtin_string("sLShiftNode")));
    __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_413;
_Bool Value_414;
void* __right_value436 = (void*)0;
struct CVALUE* left_value_415;
struct sNode* right_node_416;
_Bool Value_417;
_Bool __result276__;
void* __right_value437 = (void*)0;
struct CVALUE* right_value_418;
struct sType* type_419;
char* fun_name_420;
_Bool calling_fun_421;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value440 = (void*)0;
char* __dec_obj190;
void* __right_value441 = (void*)0;
struct sType* __dec_obj191;
_Bool __result277__;
memset(&calling_fun_421, 0, sizeof(_Bool));
    left_node_413=self->mLeft;
    Value_414=node_compile(left_node_413,info);
    if(    !Value_414) {
        return (_Bool)0;
    }
    else {
    }
    left_value_415=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_416=self->mRight;
    Value_417=node_compile(right_node_416,info);
    if(    !Value_417) {
        __result276__ = (_Bool)0;
        come_call_finalizer3(left_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result276__;
    }
    else {
    }
    right_value_418=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_419=(struct sType*)come_increment_ref_count(left_value_415->type);
    fun_name_420="operator_lshift";
    if(    self->mQuote) {
        calling_fun_421=(_Bool)0;
    }
    else {
        calling_fun_421=operator_overload_fun(type_419,fun_name_420,left_value_415,right_value_418,(_Bool)0,info);
    }
    if(    !calling_fun_421) {
        come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 619, "CVALUE"))));
        __dec_obj190=come_value_422->c_value;
        come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_415->c_value,right_value_418->c_value));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj191=come_value_422->type;
        come_value_422->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_415->type));
        come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_422->type->mHeap=(_Bool)0;
        come_value_422->var=((void*)0);
        add_come_last_code(info,"%s",come_value_422->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
        come_call_finalizer3(come_value_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result277__ = (_Bool)1;
    come_call_finalizer3(left_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_419,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result277__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sNode* __dec_obj192;
void* __right_value444 = (void*)0;
struct sNode* __dec_obj193;
struct sRShiftNode* __result278__;
    ((struct sNodeBase*)(__right_value442=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value442,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj192=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj193=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result278__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value445 = (void*)0;
char* __result279__;
    __result279__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value445=__builtin_string("sRShiftNode")));
    __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_423;
_Bool Value_424;
void* __right_value446 = (void*)0;
struct CVALUE* left_value_425;
struct sNode* right_node_426;
_Bool Value_427;
_Bool __result280__;
void* __right_value447 = (void*)0;
struct CVALUE* right_value_428;
struct sType* type_429;
char* fun_name_430;
_Bool calling_fun_431;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct CVALUE* come_value_432;
void* __right_value450 = (void*)0;
char* __dec_obj197;
void* __right_value451 = (void*)0;
struct sType* __dec_obj198;
_Bool __result281__;
memset(&calling_fun_431, 0, sizeof(_Bool));
    left_node_423=self->mLeft;
    Value_424=node_compile(left_node_423,info);
    if(    !Value_424) {
        return (_Bool)0;
    }
    else {
    }
    left_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_426=self->mRight;
    Value_427=node_compile(right_node_426,info);
    if(    !Value_427) {
        __result280__ = (_Bool)0;
        come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result280__;
    }
    else {
    }
    right_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_429=(struct sType*)come_increment_ref_count(left_value_425->type);
    fun_name_430="operator_rshift";
    if(    self->mQuote) {
        calling_fun_431=(_Bool)0;
    }
    else {
        calling_fun_431=operator_overload_fun(type_429,fun_name_430,left_value_425,right_value_428,(_Bool)0,info);
    }
    if(    !calling_fun_431) {
        come_value_432=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 684, "CVALUE"))));
        __dec_obj197=come_value_432->c_value;
        come_value_432->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_425->c_value,right_value_428->c_value));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj198=come_value_432->type;
        come_value_432->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_425->type));
        come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_432->type->mHeap=(_Bool)0;
        come_value_432->var=((void*)0);
        add_come_last_code(info,"%s",come_value_432->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_432));
        come_call_finalizer3(come_value_432,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result281__ = (_Bool)1;
    come_call_finalizer3(left_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result281__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value454 = (void*)0;
struct sNode* __dec_obj200;
struct sGtEqNode* __result282__;
    ((struct sNodeBase*)(__right_value452=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value452,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj199=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj200=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value455 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value455=__builtin_string("sGtEqNode")));
    __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_433;
_Bool Value_434;
void* __right_value456 = (void*)0;
struct CVALUE* left_value_435;
struct sNode* right_node_436;
_Bool Value_437;
_Bool __result284__;
void* __right_value457 = (void*)0;
struct CVALUE* right_value_438;
struct sType* type_439;
char* fun_name_440;
_Bool calling_fun_441;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct CVALUE* come_value_442;
void* __right_value460 = (void*)0;
char* __dec_obj204;
void* __right_value461 = (void*)0;
struct sType* __dec_obj205;
_Bool __result285__;
memset(&calling_fun_441, 0, sizeof(_Bool));
    left_node_433=self->mLeft;
    Value_434=node_compile(left_node_433,info);
    if(    !Value_434) {
        return (_Bool)0;
    }
    else {
    }
    left_value_435=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_436=self->mRight;
    Value_437=node_compile(right_node_436,info);
    if(    !Value_437) {
        __result284__ = (_Bool)0;
        come_call_finalizer3(left_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result284__;
    }
    else {
    }
    right_value_438=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_439=(struct sType*)come_increment_ref_count(left_value_435->type);
    fun_name_440="operator_gteq";
    if(    self->mQuote) {
        calling_fun_441=(_Bool)0;
    }
    else {
        calling_fun_441=operator_overload_fun(type_439,fun_name_440,left_value_435,right_value_438,(_Bool)0,info);
    }
    if(    !calling_fun_441) {
        come_value_442=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 749, "CVALUE"))));
        __dec_obj204=come_value_442->c_value;
        come_value_442->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_435->c_value,right_value_438->c_value));
        __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj205=come_value_442->type;
        come_value_442->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_435->type));
        come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_442->type->mHeap=(_Bool)0;
        come_value_442->var=((void*)0);
        add_come_last_code(info,"%s",come_value_442->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_442));
        come_call_finalizer3(come_value_442,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result285__ = (_Bool)1;
    come_call_finalizer3(left_value_435,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_438,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result285__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj206;
void* __right_value464 = (void*)0;
struct sNode* __dec_obj207;
struct sLtEqNode* __result286__;
    ((struct sNodeBase*)(__right_value462=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value462,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj206=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj207=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result286__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value465 = (void*)0;
char* __result287__;
    __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value465=__builtin_string("sLtEqNode")));
    __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_443;
_Bool Value_444;
void* __right_value466 = (void*)0;
struct CVALUE* left_value_445;
struct sNode* right_node_446;
_Bool Value_447;
_Bool __result288__;
void* __right_value467 = (void*)0;
struct CVALUE* right_value_448;
struct sType* type_449;
char* fun_name_450;
_Bool calling_fun_451;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_452;
void* __right_value470 = (void*)0;
char* __dec_obj211;
void* __right_value471 = (void*)0;
struct sType* __dec_obj212;
_Bool __result289__;
memset(&calling_fun_451, 0, sizeof(_Bool));
    left_node_443=self->mLeft;
    Value_444=node_compile(left_node_443,info);
    if(    !Value_444) {
        return (_Bool)0;
    }
    else {
    }
    left_value_445=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_446=self->mRight;
    Value_447=node_compile(right_node_446,info);
    if(    !Value_447) {
        __result288__ = (_Bool)0;
        come_call_finalizer3(left_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result288__;
    }
    else {
    }
    right_value_448=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_449=(struct sType*)come_increment_ref_count(left_value_445->type);
    fun_name_450="operator_lteq";
    if(    self->mQuote) {
        calling_fun_451=(_Bool)0;
    }
    else {
        calling_fun_451=operator_overload_fun(type_449,fun_name_450,left_value_445,right_value_448,(_Bool)0,info);
    }
    if(    !calling_fun_451) {
        come_value_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 814, "CVALUE"))));
        __dec_obj211=come_value_452->c_value;
        come_value_452->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_445->c_value,right_value_448->c_value));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj212=come_value_452->type;
        come_value_452->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_445->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_452->type->mHeap=(_Bool)0;
        come_value_452->var=((void*)0);
        add_come_last_code(info,"%s",come_value_452->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_452));
        come_call_finalizer3(come_value_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result289__ = (_Bool)1;
    come_call_finalizer3(left_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result289__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value474 = (void*)0;
struct sNode* __dec_obj214;
struct sLtNode* __result290__;
    ((struct sNodeBase*)(__right_value472=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value472,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj213=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj214=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); };
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result290__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value475 = (void*)0;
char* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value475=__builtin_string("sLtNode")));
    __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_453;
_Bool Value_454;
void* __right_value476 = (void*)0;
struct CVALUE* left_value_455;
struct sNode* right_node_456;
_Bool Value_457;
_Bool __result292__;
void* __right_value477 = (void*)0;
struct CVALUE* right_value_458;
struct sType* type_459;
char* fun_name_460;
_Bool calling_fun_461;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct CVALUE* come_value_462;
void* __right_value480 = (void*)0;
char* __dec_obj218;
void* __right_value481 = (void*)0;
struct sType* __dec_obj219;
_Bool __result293__;
memset(&calling_fun_461, 0, sizeof(_Bool));
    left_node_453=self->mLeft;
    Value_454=node_compile(left_node_453,info);
    if(    !Value_454) {
        return (_Bool)0;
    }
    else {
    }
    left_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_456=self->mRight;
    Value_457=node_compile(right_node_456,info);
    if(    !Value_457) {
        __result292__ = (_Bool)0;
        come_call_finalizer3(left_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result292__;
    }
    else {
    }
    right_value_458=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_459=(struct sType*)come_increment_ref_count(left_value_455->type);
    fun_name_460="operator_lt";
    if(    self->mQuote) {
        calling_fun_461=(_Bool)0;
    }
    else {
        calling_fun_461=operator_overload_fun(type_459,fun_name_460,left_value_455,right_value_458,(_Bool)0,info);
    }
    if(    !calling_fun_461) {
        come_value_462=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 879, "CVALUE"))));
        __dec_obj218=come_value_462->c_value;
        come_value_462->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_455->c_value,right_value_458->c_value));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj219=come_value_462->type;
        come_value_462->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_455->type));
        come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_462->type->mHeap=(_Bool)0;
        come_value_462->var=((void*)0);
        add_come_last_code(info,"%s",come_value_462->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_462));
        come_call_finalizer3(come_value_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result293__ = (_Bool)1;
    come_call_finalizer3(left_value_455,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result293__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj220;
void* __right_value484 = (void*)0;
struct sNode* __dec_obj221;
struct sGtNode* __result294__;
    ((struct sNodeBase*)(__right_value482=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value482,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj220=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj221=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); };
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value485 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value485=__builtin_string("sGtNode")));
    __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_463;
_Bool Value_464;
void* __right_value486 = (void*)0;
struct CVALUE* left_value_465;
struct sNode* right_node_466;
_Bool Value_467;
_Bool __result296__;
void* __right_value487 = (void*)0;
struct CVALUE* right_value_468;
struct sType* type_469;
char* fun_name_470;
_Bool calling_fun_471;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value490 = (void*)0;
char* __dec_obj225;
void* __right_value491 = (void*)0;
struct sType* __dec_obj226;
_Bool __result297__;
memset(&calling_fun_471, 0, sizeof(_Bool));
    left_node_463=self->mLeft;
    Value_464=node_compile(left_node_463,info);
    if(    !Value_464) {
        return (_Bool)0;
    }
    else {
    }
    left_value_465=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_466=self->mRight;
    Value_467=node_compile(right_node_466,info);
    if(    !Value_467) {
        __result296__ = (_Bool)0;
        come_call_finalizer3(left_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result296__;
    }
    else {
    }
    right_value_468=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_469=(struct sType*)come_increment_ref_count(left_value_465->type);
    fun_name_470="operator_gt";
    if(    self->mQuote) {
        calling_fun_471=(_Bool)0;
    }
    else {
        calling_fun_471=operator_overload_fun(type_469,fun_name_470,left_value_465,right_value_468,(_Bool)0,info);
    }
    if(    !calling_fun_471) {
        come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 944, "CVALUE"))));
        __dec_obj225=come_value_472->c_value;
        come_value_472->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_465->c_value,right_value_468->c_value));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj226=come_value_472->type;
        come_value_472->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_465->type));
        come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_472->type->mHeap=(_Bool)0;
        come_value_472->var=((void*)0);
        add_come_last_code(info,"%s",come_value_472->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
        come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result297__ = (_Bool)1;
    come_call_finalizer3(left_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_469,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value494 = (void*)0;
struct sNode* __dec_obj228;
struct sEqNode* __result298__;
    ((struct sNodeBase*)(__right_value492=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value492,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj227=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj228=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result298__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value495 = (void*)0;
char* __result299__;
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value495=__builtin_string("sEqNode")));
    __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_473;
_Bool Value_474;
void* __right_value496 = (void*)0;
struct CVALUE* left_value_475;
struct sNode* right_node_476;
_Bool Value_477;
_Bool __result300__;
void* __right_value497 = (void*)0;
struct CVALUE* right_value_478;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct CVALUE* come_value_479;
void* __right_value500 = (void*)0;
char* __dec_obj232;
void* __right_value501 = (void*)0;
struct sType* __dec_obj233;
_Bool __result301__;
    left_node_473=self->mLeft;
    Value_474=node_compile(left_node_473,info);
    if(    !Value_474) {
        return (_Bool)0;
    }
    else {
    }
    left_value_475=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_476=self->mRight;
    Value_477=node_compile(right_node_476,info);
    if(    !Value_477) {
        __result300__ = (_Bool)0;
        come_call_finalizer3(left_value_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result300__;
    }
    else {
    }
    right_value_478=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_479=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 997, "CVALUE"))));
    __dec_obj232=come_value_479->c_value;
    come_value_479->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_475->c_value,right_value_478->c_value));
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=come_value_479->type;
    come_value_479->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_475->type));
    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_479->type->mHeap=(_Bool)0;
    come_value_479->var=((void*)0);
    add_come_last_code(info,"%s",come_value_479->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_479));
    __result301__ = (_Bool)1;
    come_call_finalizer3(left_value_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_478,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_479,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result301__;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj235;
struct sNotEqNode* __result302__;
    ((struct sNodeBase*)(__right_value502=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value502,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj234=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj235=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result302__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value505 = (void*)0;
char* __result303__;
    __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value505=__builtin_string("sNotEqNode")));
    __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_480;
_Bool Value_481;
void* __right_value506 = (void*)0;
struct CVALUE* left_value_482;
struct sNode* right_node_483;
_Bool Value_484;
_Bool __result304__;
void* __right_value507 = (void*)0;
struct CVALUE* right_value_485;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* come_value_486;
void* __right_value510 = (void*)0;
char* __dec_obj239;
void* __right_value511 = (void*)0;
struct sType* __dec_obj240;
_Bool __result305__;
    left_node_480=self->mLeft;
    Value_481=node_compile(left_node_480,info);
    if(    !Value_481) {
        return (_Bool)0;
    }
    else {
    }
    left_value_482=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_483=self->mRight;
    Value_484=node_compile(right_node_483,info);
    if(    !Value_484) {
        __result304__ = (_Bool)0;
        come_call_finalizer3(left_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result304__;
    }
    else {
    }
    right_value_485=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1049, "CVALUE"))));
    __dec_obj239=come_value_486->c_value;
    come_value_486->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_482->c_value,right_value_485->c_value));
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj240=come_value_486->type;
    come_value_486->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_482->type));
    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_486->type->mHeap=(_Bool)0;
    come_value_486->var=((void*)0);
    add_come_last_code(info,"%s",come_value_486->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_486));
    __result305__ = (_Bool)1;
    come_call_finalizer3(left_value_482,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result305__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj241;
void* __right_value514 = (void*)0;
struct sNode* __dec_obj242;
struct sEq2Node* __result306__;
    ((struct sNodeBase*)(__right_value512=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value512,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj241=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj242=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value515 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value515=__builtin_string("sEq2Node")));
    __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_487;
_Bool Value_488;
void* __right_value516 = (void*)0;
struct CVALUE* left_value_489;
struct sNode* right_node_490;
_Bool Value_491;
_Bool __result308__;
void* __right_value517 = (void*)0;
struct CVALUE* right_value_492;
struct sType* type_493;
char* fun_name_494;
_Bool calling_fun_495;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_496;
void* __right_value520 = (void*)0;
char* __dec_obj246;
void* __right_value521 = (void*)0;
struct sType* __dec_obj247;
_Bool __result309__;
memset(&calling_fun_495, 0, sizeof(_Bool));
    left_node_487=self->mLeft;
    Value_488=node_compile(left_node_487,info);
    if(    !Value_488) {
        return (_Bool)0;
    }
    else {
    }
    left_value_489=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_490=self->mRight;
    Value_491=node_compile(right_node_490,info);
    if(    !Value_491) {
        __result308__ = (_Bool)0;
        come_call_finalizer3(left_value_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result308__;
    }
    else {
    }
    right_value_492=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_493=(struct sType*)come_increment_ref_count(left_value_489->type);
    fun_name_494="operator_equals";
    if(    self->mQuote) {
        calling_fun_495=(_Bool)0;
    }
    else {
        calling_fun_495=operator_overload_fun(type_493,fun_name_494,left_value_489,right_value_492,(_Bool)0,info);
    }
    if(    !calling_fun_495) {
        come_value_496=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1114, "CVALUE"))));
        __dec_obj246=come_value_496->c_value;
        come_value_496->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_489->c_value,right_value_492->c_value));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj247=come_value_496->type;
        come_value_496->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_489->type));
        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_496->type->mHeap=(_Bool)0;
        come_value_496->var=((void*)0);
        add_come_last_code(info,"%s",come_value_496->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_496));
        come_call_finalizer3(come_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result309__ = (_Bool)1;
    come_call_finalizer3(left_value_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_492,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_493,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result309__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* __dec_obj248;
void* __right_value524 = (void*)0;
struct sNode* __dec_obj249;
struct sNotEq2Node* __result310__;
    ((struct sNodeBase*)(__right_value522=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value522,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj248=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj249=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result310__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value525 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value525=__builtin_string("sNotEq2Node")));
    __right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_497;
_Bool Value_498;
void* __right_value526 = (void*)0;
struct CVALUE* left_value_499;
struct sNode* right_node_500;
_Bool Value_501;
_Bool __result312__;
void* __right_value527 = (void*)0;
struct CVALUE* right_value_502;
struct sType* type_503;
char* fun_name_504;
_Bool calling_fun_505;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct CVALUE* come_value_506;
void* __right_value530 = (void*)0;
char* __dec_obj253;
void* __right_value531 = (void*)0;
struct sType* __dec_obj254;
_Bool __result313__;
memset(&calling_fun_505, 0, sizeof(_Bool));
    left_node_497=self->mLeft;
    Value_498=node_compile(left_node_497,info);
    if(    !Value_498) {
        return (_Bool)0;
    }
    else {
    }
    left_value_499=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_500=self->mRight;
    Value_501=node_compile(right_node_500,info);
    if(    !Value_501) {
        __result312__ = (_Bool)0;
        come_call_finalizer3(left_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result312__;
    }
    else {
    }
    right_value_502=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_503=(struct sType*)come_increment_ref_count(left_value_499->type);
    fun_name_504="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_505=(_Bool)0;
    }
    else {
        calling_fun_505=operator_overload_fun(type_503,fun_name_504,left_value_499,right_value_502,(_Bool)0,info);
    }
    if(    !calling_fun_505) {
        come_value_506=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1179, "CVALUE"))));
        __dec_obj253=come_value_506->c_value;
        come_value_506->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_499->c_value,right_value_502->c_value));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj254=come_value_506->type;
        come_value_506->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_499->type));
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_506->type->mHeap=(_Bool)0;
        come_value_506->var=((void*)0);
        add_come_last_code(info,"%s",come_value_506->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_506));
        come_call_finalizer3(come_value_506,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result313__ = (_Bool)1;
    come_call_finalizer3(left_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_503,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value534 = (void*)0;
struct sNode* __dec_obj256;
struct sAndNode* __result314__;
    ((struct sNodeBase*)(__right_value532=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value532,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj255=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj256=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result314__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value535 = (void*)0;
char* __result315__;
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value535=__builtin_string("sAndNode")));
    __right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_507;
_Bool Value_508;
void* __right_value536 = (void*)0;
struct CVALUE* left_value_509;
struct sNode* right_node_510;
_Bool Value_511;
_Bool __result316__;
void* __right_value537 = (void*)0;
struct CVALUE* right_value_512;
struct sType* type_513;
char* fun_name_514;
_Bool calling_fun_515;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_516;
void* __right_value540 = (void*)0;
char* __dec_obj260;
void* __right_value541 = (void*)0;
struct sType* __dec_obj261;
_Bool __result317__;
memset(&calling_fun_515, 0, sizeof(_Bool));
    left_node_507=self->mLeft;
    Value_508=node_compile(left_node_507,info);
    if(    !Value_508) {
        return (_Bool)0;
    }
    else {
    }
    left_value_509=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_510=self->mRight;
    Value_511=node_compile(right_node_510,info);
    if(    !Value_511) {
        __result316__ = (_Bool)0;
        come_call_finalizer3(left_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result316__;
    }
    else {
    }
    right_value_512=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_513=(struct sType*)come_increment_ref_count(left_value_509->type);
    fun_name_514="operator_and";
    if(    self->mQuote) {
        calling_fun_515=(_Bool)0;
    }
    else {
        calling_fun_515=operator_overload_fun(type_513,fun_name_514,left_value_509,right_value_512,(_Bool)0,info);
    }
    if(    !calling_fun_515) {
        come_value_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1245, "CVALUE"))));
        __dec_obj260=come_value_516->c_value;
        come_value_516->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_509->c_value,right_value_512->c_value));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj261=come_value_516->type;
        come_value_516->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_509->type));
        come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_516->type->mHeap=(_Bool)0;
        come_value_516->var=((void*)0);
        add_come_last_code(info,"%s",come_value_516->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_516));
        come_call_finalizer3(come_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result317__ = (_Bool)1;
    come_call_finalizer3(left_value_509,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result317__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value544 = (void*)0;
struct sNode* __dec_obj263;
struct sXOrNode* __result318__;
    ((struct sNodeBase*)(__right_value542=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value542,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj262=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj263=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result318__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value545 = (void*)0;
char* __result319__;
    __result319__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value545=__builtin_string("sXOrNode")));
    __right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_517;
_Bool Value_518;
void* __right_value546 = (void*)0;
struct CVALUE* left_value_519;
struct sNode* right_node_520;
_Bool Value_521;
_Bool __result320__;
void* __right_value547 = (void*)0;
struct CVALUE* right_value_522;
struct sType* type_523;
char* fun_name_524;
_Bool calling_fun_525;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value550 = (void*)0;
char* __dec_obj267;
void* __right_value551 = (void*)0;
struct sType* __dec_obj268;
_Bool __result321__;
memset(&calling_fun_525, 0, sizeof(_Bool));
    left_node_517=self->mLeft;
    Value_518=node_compile(left_node_517,info);
    if(    !Value_518) {
        return (_Bool)0;
    }
    else {
    }
    left_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_520=self->mRight;
    Value_521=node_compile(right_node_520,info);
    if(    !Value_521) {
        __result320__ = (_Bool)0;
        come_call_finalizer3(left_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result320__;
    }
    else {
    }
    right_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_523=(struct sType*)come_increment_ref_count(left_value_519->type);
    fun_name_524="operator_xor";
    if(    self->mQuote) {
        calling_fun_525=(_Bool)0;
    }
    else {
        calling_fun_525=operator_overload_fun(type_523,fun_name_524,left_value_519,right_value_522,(_Bool)0,info);
    }
    if(    !calling_fun_525) {
        come_value_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1310, "CVALUE"))));
        __dec_obj267=come_value_526->c_value;
        come_value_526->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_519->c_value,right_value_522->c_value));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj268=come_value_526->type;
        come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_519->type));
        come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_526->type->mHeap=(_Bool)0;
        come_value_526->var=((void*)0);
        add_come_last_code(info,"%s",come_value_526->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_526));
        come_call_finalizer3(come_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result321__ = (_Bool)1;
    come_call_finalizer3(left_value_519,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result321__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj269;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj270;
struct sOrNode* __result322__;
    ((struct sNodeBase*)(__right_value552=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value552,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj269=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj270=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result322__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value555 = (void*)0;
char* __result323__;
    __result323__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value555=__builtin_string("sOrNode")));
    __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_527;
_Bool Value_528;
void* __right_value556 = (void*)0;
struct CVALUE* left_value_529;
struct sNode* right_node_530;
_Bool Value_531;
_Bool __result324__;
void* __right_value557 = (void*)0;
struct CVALUE* right_value_532;
struct sType* type_533;
char* fun_name_534;
_Bool calling_fun_535;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value560 = (void*)0;
char* __dec_obj274;
void* __right_value561 = (void*)0;
struct sType* __dec_obj275;
_Bool __result325__;
memset(&calling_fun_535, 0, sizeof(_Bool));
    left_node_527=self->mLeft;
    Value_528=node_compile(left_node_527,info);
    if(    !Value_528) {
        return (_Bool)0;
    }
    else {
    }
    left_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_530=self->mRight;
    Value_531=node_compile(right_node_530,info);
    if(    !Value_531) {
        __result324__ = (_Bool)0;
        come_call_finalizer3(left_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result324__;
    }
    else {
    }
    right_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_533=(struct sType*)come_increment_ref_count(left_value_529->type);
    fun_name_534="operator_or";
    if(    self->mQuote) {
        calling_fun_535=(_Bool)0;
    }
    else {
        calling_fun_535=operator_overload_fun(type_533,fun_name_534,left_value_529,right_value_532,(_Bool)0,info);
    }
    if(    !calling_fun_535) {
        come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1376, "CVALUE"))));
        __dec_obj274=come_value_536->c_value;
        come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_529->c_value,right_value_532->c_value));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj275=come_value_536->type;
        come_value_536->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_529->type));
        come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_536->type->mHeap=(_Bool)0;
        come_value_536->var=((void*)0);
        add_come_last_code(info,"%s",come_value_536->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
        come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result325__ = (_Bool)1;
    come_call_finalizer3(left_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result325__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj276;
void* __right_value564 = (void*)0;
struct sNode* __dec_obj277;
struct sAndAndNode* __result326__;
    ((struct sNodeBase*)(__right_value562=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value562,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj276=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj277=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj277) { __dec_obj277 = come_decrement_ref_count2(__dec_obj277, ((struct sNode*)__dec_obj277)->finalize, ((struct sNode*)__dec_obj277)->_protocol_obj, 0,0,0, (void*)0); };
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result326__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value565 = (void*)0;
char* __result327__;
    __result327__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value565=__builtin_string("sAndAndNode")));
    __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_537;
_Bool Value_538;
void* __right_value566 = (void*)0;
struct CVALUE* left_value_539;
struct sNode* right_node_540;
_Bool Value_541;
_Bool __result328__;
void* __right_value567 = (void*)0;
struct CVALUE* right_value_542;
struct sType* type_543;
char* fun_name_544;
_Bool calling_fun_545;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct CVALUE* come_value_546;
void* __right_value570 = (void*)0;
char* __dec_obj281;
void* __right_value571 = (void*)0;
struct sType* __dec_obj282;
_Bool __result329__;
memset(&calling_fun_545, 0, sizeof(_Bool));
    left_node_537=self->mLeft;
    Value_538=node_compile(left_node_537,info);
    if(    !Value_538) {
        return (_Bool)0;
    }
    else {
    }
    left_value_539=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_540=self->mRight;
    Value_541=node_compile(right_node_540,info);
    if(    !Value_541) {
        __result328__ = (_Bool)0;
        come_call_finalizer3(left_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result328__;
    }
    else {
    }
    right_value_542=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_543=(struct sType*)come_increment_ref_count(left_value_539->type);
    fun_name_544="operator_andand";
    if(    self->mQuote) {
        calling_fun_545=(_Bool)0;
    }
    else {
        calling_fun_545=operator_overload_fun(type_543,fun_name_544,left_value_539,right_value_542,(_Bool)0,info);
    }
    if(    !calling_fun_545) {
        come_value_546=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1442, "CVALUE"))));
        __dec_obj281=come_value_546->c_value;
        come_value_546->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_539->c_value,right_value_542->c_value));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj282=come_value_546->type;
        come_value_546->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_539->type));
        come_call_finalizer3(__dec_obj282,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_546->type->mHeap=(_Bool)0;
        come_value_546->var=left_value_539->var;
        add_come_last_code(info,"%s",come_value_546->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_546));
        come_call_finalizer3(come_value_546,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result329__ = (_Bool)1;
    come_call_finalizer3(left_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result329__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* __dec_obj283;
void* __right_value574 = (void*)0;
struct sNode* __dec_obj284;
struct sOrOrNode* __result330__;
    ((struct sNodeBase*)(__right_value572=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value572,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj283=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj284=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); };
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result330__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value575 = (void*)0;
char* __result331__;
    __result331__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value575=__builtin_string("sOrOrNode")));
    __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_547;
_Bool Value_548;
void* __right_value576 = (void*)0;
struct CVALUE* left_value_549;
struct sNode* right_node_550;
_Bool Value_551;
_Bool __result332__;
void* __right_value577 = (void*)0;
struct CVALUE* right_value_552;
struct sType* type_553;
char* fun_name_554;
_Bool calling_fun_555;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct CVALUE* come_value_556;
void* __right_value580 = (void*)0;
char* __dec_obj288;
void* __right_value581 = (void*)0;
struct sType* __dec_obj289;
_Bool __result333__;
memset(&calling_fun_555, 0, sizeof(_Bool));
    left_node_547=self->mLeft;
    Value_548=node_compile(left_node_547,info);
    if(    !Value_548) {
        return (_Bool)0;
    }
    else {
    }
    left_value_549=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_550=self->mRight;
    Value_551=node_compile(right_node_550,info);
    if(    !Value_551) {
        __result332__ = (_Bool)0;
        come_call_finalizer3(left_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result332__;
    }
    else {
    }
    right_value_552=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_553=(struct sType*)come_increment_ref_count(left_value_549->type);
    fun_name_554="operator_oror";
    if(    self->mQuote) {
        calling_fun_555=(_Bool)0;
    }
    else {
        calling_fun_555=operator_overload_fun(type_553,fun_name_554,left_value_549,right_value_552,(_Bool)0,info);
    }
    if(    !calling_fun_555) {
        come_value_556=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1507, "CVALUE"))));
        __dec_obj288=come_value_556->c_value;
        come_value_556->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_549->c_value,right_value_552->c_value));
        __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj289=come_value_556->type;
        come_value_556->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_549->type));
        come_call_finalizer3(__dec_obj289,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_556->type->mHeap=(_Bool)0;
        come_value_556->var=left_value_549->var;
        add_come_last_code(info,"%s",come_value_556->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_556));
        come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result333__ = (_Bool)1;
    come_call_finalizer3(left_value_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result333__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value584 = (void*)0;
struct sNode* __dec_obj291;
struct sCommaNode* __result334__;
    ((struct sNodeBase*)(__right_value582=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value582,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj290=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj291=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
char* __result335__;
    __result335__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value585=__builtin_string("sCommaNode")));
    __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_557;
_Bool Value_558;
void* __right_value586 = (void*)0;
struct CVALUE* left_value_559;
struct sNode* right_node_560;
_Bool Value_561;
_Bool __result336__;
void* __right_value587 = (void*)0;
struct CVALUE* right_value_562;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_563;
void* __right_value590 = (void*)0;
char* __dec_obj295;
void* __right_value591 = (void*)0;
struct sType* __dec_obj296;
_Bool __result337__;
    left_node_557=self->mLeft;
    Value_558=node_compile(left_node_557,info);
    if(    !Value_558) {
        return (_Bool)0;
    }
    else {
    }
    left_value_559=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_560=self->mRight;
    Value_561=node_compile(right_node_560,info);
    if(    !Value_561) {
        __result336__ = (_Bool)0;
        come_call_finalizer3(left_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result336__;
    }
    else {
    }
    right_value_562=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_563=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1559, "CVALUE"))));
    __dec_obj295=come_value_563->c_value;
    come_value_563->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_559->c_value,right_value_562->c_value));
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj296=come_value_563->type;
    come_value_563->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_559->type));
    come_call_finalizer3(__dec_obj296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_563->var=((void*)0);
    add_come_last_code(info,"%s",come_value_563->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_563));
    __result337__ = (_Bool)1;
    come_call_finalizer3(left_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_563,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result337__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj297;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj299;
struct sConditionalNode* __result338__;
    ((struct sNodeBase*)(__right_value592=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value592,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj297=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj298=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj299=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value596 = (void*)0;
char* __result339__;
    __result339__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value596=__builtin_string("sConditionalNode")));
    __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_564;
struct sNode* value1_565;
_Bool Value_566;
void* __right_value597 = (void*)0;
struct CVALUE* value1_value_567;
struct sNode* value2_568;
_Bool Value_569;
_Bool __result340__;
void* __right_value598 = (void*)0;
struct CVALUE* value2_value_570;
struct sNode* value3_571;
_Bool Value_572;
_Bool __result341__;
void* __right_value599 = (void*)0;
struct CVALUE* value3_value_573;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct CVALUE* come_value_574;
void* __right_value602 = (void*)0;
char* __dec_obj304;
void* __right_value603 = (void*)0;
struct sType* __dec_obj305;
_Bool __result342__;
    in_conditional_operator_564=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_565=self->mValue1;
    Value_566=node_compile(value1_565,info);
    if(    !Value_566) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_567=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_568=self->mValue2;
    Value_569=node_compile(value2_568,info);
    if(    !Value_569) {
        __result340__ = (_Bool)0;
        come_call_finalizer3(value1_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result340__;
    }
    else {
    }
    value2_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_571=self->mValue3;
    Value_572=node_compile(value3_571,info);
    if(    !Value_572) {
        __result341__ = (_Bool)0;
        come_call_finalizer3(value1_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result341__;
    }
    else {
    }
    value3_value_573=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_574=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1622, "CVALUE"))));
    __dec_obj304=come_value_574->c_value;
    come_value_574->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_567->c_value,value2_value_570->c_value,value3_value_573->c_value));
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=come_value_574->type;
    come_value_574->type=(struct sType*)come_increment_ref_count(sType_clone(value2_value_570->type));
    come_call_finalizer3(__dec_obj305,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_574->var=((void*)0);
    add_come_last_code(info,"%s",come_value_574->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_574));
    info->in_conditional_operator=in_conditional_operator_564;
    __result342__ = (_Bool)1;
    come_call_finalizer3(value1_value_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_574,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result342__;
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value611 = (void*)0;
struct sNode* __result345__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1640, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value605=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1640, "sConditionalNode")),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result345__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value611=_inf_value2));
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value605,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value611) { __right_value611 = come_decrement_ref_count2(__right_value611, ((struct sNode*)__right_value611)->finalize, ((struct sNode*)__right_value611)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result345__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value612 = (void*)0;
struct sNode* node_576;
int sline_real_577;
void* __right_value613 = (void*)0;
struct sNode* right_578;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value620 = (void*)0;
struct sNode* __result348__;
int sline_real_580;
void* __right_value621 = (void*)0;
struct sNode* right_581;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value628 = (void*)0;
struct sNode* __result351__;
int sline_real_583;
void* __right_value629 = (void*)0;
struct sNode* right_584;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value636 = (void*)0;
struct sNode* __result354__;
int sline_real_586;
void* __right_value637 = (void*)0;
struct sNode* right_587;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value644 = (void*)0;
struct sNode* __result357__;
int sline_real_589;
void* __right_value645 = (void*)0;
struct sNode* right_590;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value652 = (void*)0;
struct sNode* __result360__;
int sline_real_592;
void* __right_value653 = (void*)0;
struct sNode* right_593;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value660 = (void*)0;
struct sNode* __result363__;
struct sNode* __result364__;
    node_576=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_576->terminated(node_576->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_577=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_578=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_577;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1660, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value615=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1660, "sMultNode")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_578),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result348__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value620=_inf_value3));
            if(right_578) { right_578 = come_decrement_ref_count2(right_578, ((struct sNode*)right_578)->finalize, ((struct sNode*)right_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value615,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value620) { __right_value620 = come_decrement_ref_count2(__right_value620, ((struct sNode*)__right_value620)->finalize, ((struct sNode*)__right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result348__;
            if(right_578) { right_578 = come_decrement_ref_count2(right_578, ((struct sNode*)right_578)->finalize, ((struct sNode*)right_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_580=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_581=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_580;
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1671, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value623=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1671, "sDivNode")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_581),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __result351__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value628=_inf_value4));
            if(right_581) { right_581 = come_decrement_ref_count2(right_581, ((struct sNode*)right_581)->finalize, ((struct sNode*)right_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value623,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value628) { __right_value628 = come_decrement_ref_count2(__right_value628, ((struct sNode*)__right_value628)->finalize, ((struct sNode*)__right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result351__;
            if(right_581) { right_581 = come_decrement_ref_count2(right_581, ((struct sNode*)right_581)->finalize, ((struct sNode*)right_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_583=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_584=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_583;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1682, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value631=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1682, "sModNode")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_584),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __result354__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value636=_inf_value5));
            if(right_584) { right_584 = come_decrement_ref_count2(right_584, ((struct sNode*)right_584)->finalize, ((struct sNode*)right_584)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value631,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value636) { __right_value636 = come_decrement_ref_count2(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result354__;
            if(right_584) { right_584 = come_decrement_ref_count2(right_584, ((struct sNode*)right_584)->finalize, ((struct sNode*)right_584)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_576->terminated(node_576->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_586=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_587=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_586;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1693, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value639=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1693, "sMultNode")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_587),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __result357__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value6));
            if(right_587) { right_587 = come_decrement_ref_count2(right_587, ((struct sNode*)right_587)->finalize, ((struct sNode*)right_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value639,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result357__;
            if(right_587) { right_587 = come_decrement_ref_count2(right_587, ((struct sNode*)right_587)->finalize, ((struct sNode*)right_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_589=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_590=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_589;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1704, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value647=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1704, "sDivNode")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_590),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __result360__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value652=_inf_value7));
            if(right_590) { right_590 = come_decrement_ref_count2(right_590, ((struct sNode*)right_590)->finalize, ((struct sNode*)right_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value647,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value652) { __right_value652 = come_decrement_ref_count2(__right_value652, ((struct sNode*)__right_value652)->finalize, ((struct sNode*)__right_value652)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result360__;
            if(right_590) { right_590 = come_decrement_ref_count2(right_590, ((struct sNode*)right_590)->finalize, ((struct sNode*)right_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_592=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_593=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_592;
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1715, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value655=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1715, "sModNode")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_593),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value660=_inf_value8));
            if(right_593) { right_593 = come_decrement_ref_count2(right_593, ((struct sNode*)right_593)->finalize, ((struct sNode*)right_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value655,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value660) { __right_value660 = come_decrement_ref_count2(__right_value660, ((struct sNode*)__right_value660)->finalize, ((struct sNode*)__right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result363__;
            if(right_593) { right_593 = come_decrement_ref_count2(right_593, ((struct sNode*)right_593)->finalize, ((struct sNode*)right_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result364__ = gComeFunResultObject = __result_obj__ = node_576;
    if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj332;
struct sNode* __dec_obj333;
struct sNode* __dec_obj334;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj332=self->sname;
            __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj333=self->mLeft;
            if(__dec_obj333) { __dec_obj333 = come_decrement_ref_count2(__dec_obj333, ((struct sNode*)__dec_obj333)->finalize, ((struct sNode*)__dec_obj333)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj334=self->mRight;
            if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result355__;
void* __right_value640 = (void*)0;
struct sMultNode* result_588;
void* __right_value641 = (void*)0;
char* __dec_obj335;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj336;
void* __right_value643 = (void*)0;
struct sNode* __dec_obj337;
struct sMultNode* __result356__;
    if(    self==(void*)0) {
        __result355__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    result_588=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj335=result_588->sname;
        result_588->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_588->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj336=result_588->mLeft;
        result_588->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj336) { __dec_obj336 = come_decrement_ref_count2(__dec_obj336, ((struct sNode*)__dec_obj336)->finalize, ((struct sNode*)__dec_obj336)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj337=result_588->mRight;
        result_588->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_588;
    come_call_finalizer3(result_588,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj338;
struct sNode* __dec_obj339;
struct sNode* __dec_obj340;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj338=self->sname;
            __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj339=self->mLeft;
            if(__dec_obj339) { __dec_obj339 = come_decrement_ref_count2(__dec_obj339, ((struct sNode*)__dec_obj339)->finalize, ((struct sNode*)__dec_obj339)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj340=self->mRight;
            if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result358__;
void* __right_value648 = (void*)0;
struct sDivNode* result_591;
void* __right_value649 = (void*)0;
char* __dec_obj341;
void* __right_value650 = (void*)0;
struct sNode* __dec_obj342;
void* __right_value651 = (void*)0;
struct sNode* __dec_obj343;
struct sDivNode* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_591=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"));
    if(    self!=((void*)0)) {
        result_591->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj341=result_591->sname;
        result_591->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_591->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_591->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj342=result_591->mLeft;
        result_591->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj342) { __dec_obj342 = come_decrement_ref_count2(__dec_obj342, ((struct sNode*)__dec_obj342)->finalize, ((struct sNode*)__dec_obj342)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj343=result_591->mRight;
        result_591->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_591;
    come_call_finalizer3(result_591,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj344;
struct sNode* __dec_obj345;
struct sNode* __dec_obj346;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj344=self->sname;
            __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj345=self->mLeft;
            if(__dec_obj345) { __dec_obj345 = come_decrement_ref_count2(__dec_obj345, ((struct sNode*)__dec_obj345)->finalize, ((struct sNode*)__dec_obj345)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj346=self->mRight;
            if(__dec_obj346) { __dec_obj346 = come_decrement_ref_count2(__dec_obj346, ((struct sNode*)__dec_obj346)->finalize, ((struct sNode*)__dec_obj346)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result361__;
void* __right_value656 = (void*)0;
struct sModNode* result_594;
void* __right_value657 = (void*)0;
char* __dec_obj347;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj348;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj349;
struct sModNode* __result362__;
    if(    self==(void*)0) {
        __result361__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_594=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"));
    if(    self!=((void*)0)) {
        result_594->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj347=result_594->sname;
        result_594->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_594->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_594->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj348=result_594->mLeft;
        result_594->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj348) { __dec_obj348 = come_decrement_ref_count2(__dec_obj348, ((struct sNode*)__dec_obj348)->finalize, ((struct sNode*)__dec_obj348)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj349=result_594->mRight;
        result_594->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj349) { __dec_obj349 = come_decrement_ref_count2(__dec_obj349, ((struct sNode*)__dec_obj349)->finalize, ((struct sNode*)__dec_obj349)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result362__ = gComeFunResultObject = __result_obj__ = result_594;
    come_call_finalizer3(result_594,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value661 = (void*)0;
struct sNode* node_595;
int sline_real_596;
void* __right_value662 = (void*)0;
struct sNode* right_597;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value669 = (void*)0;
struct sNode* __result367__;
int sline_real_599;
void* __right_value670 = (void*)0;
struct sNode* right_600;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value677 = (void*)0;
struct sNode* __result370__;
int sline_real_602;
void* __right_value678 = (void*)0;
struct sNode* right_603;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value685 = (void*)0;
struct sNode* __result373__;
int sline_real_605;
void* __right_value686 = (void*)0;
struct sNode* right_606;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value693 = (void*)0;
struct sNode* __result376__;
struct sNode* __result377__;
    node_595=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_596=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_597=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_596;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1744, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value664=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1744, "sAddNode")),(struct sNode*)come_increment_ref_count(node_595),(struct sNode*)come_increment_ref_count(right_597),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result367__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value669=_inf_value9));
            if(right_597) { right_597 = come_decrement_ref_count2(right_597, ((struct sNode*)right_597)->finalize, ((struct sNode*)right_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_595) { node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value664,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value669) { __right_value669 = come_decrement_ref_count2(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result367__;
            if(right_597) { right_597 = come_decrement_ref_count2(right_597, ((struct sNode*)right_597)->finalize, ((struct sNode*)right_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_599=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_600=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_599;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1756, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value672=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1756, "sSubNode")),(struct sNode*)come_increment_ref_count(node_595),(struct sNode*)come_increment_ref_count(right_600),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value677=_inf_value10));
            if(right_600) { right_600 = come_decrement_ref_count2(right_600, ((struct sNode*)right_600)->finalize, ((struct sNode*)right_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_595) { node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value672,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value677) { __right_value677 = come_decrement_ref_count2(__right_value677, ((struct sNode*)__right_value677)->finalize, ((struct sNode*)__right_value677)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result370__;
            if(right_600) { right_600 = come_decrement_ref_count2(right_600, ((struct sNode*)right_600)->finalize, ((struct sNode*)right_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_602=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_603=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_602;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1768, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value680=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1768, "sAddNode")),(struct sNode*)come_increment_ref_count(node_595),(struct sNode*)come_increment_ref_count(right_603),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value685=_inf_value11));
            if(right_603) { right_603 = come_decrement_ref_count2(right_603, ((struct sNode*)right_603)->finalize, ((struct sNode*)right_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_595) { node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value680,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value685) { __right_value685 = come_decrement_ref_count2(__right_value685, ((struct sNode*)__right_value685)->finalize, ((struct sNode*)__right_value685)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result373__;
            if(right_603) { right_603 = come_decrement_ref_count2(right_603, ((struct sNode*)right_603)->finalize, ((struct sNode*)right_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_605=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_606=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_605;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1780, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value688=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1780, "sSubNode")),(struct sNode*)come_increment_ref_count(node_595),(struct sNode*)come_increment_ref_count(right_606),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value693=_inf_value12));
            if(right_606) { right_606 = come_decrement_ref_count2(right_606, ((struct sNode*)right_606)->finalize, ((struct sNode*)right_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_595) { node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value688,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value693) { __right_value693 = come_decrement_ref_count2(__right_value693, ((struct sNode*)__right_value693)->finalize, ((struct sNode*)__right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result376__;
            if(right_606) { right_606 = come_decrement_ref_count2(right_606, ((struct sNode*)right_606)->finalize, ((struct sNode*)right_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result377__ = gComeFunResultObject = __result_obj__ = node_595;
    if(node_595) { node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj362;
struct sNode* __dec_obj363;
struct sNode* __dec_obj364;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj362=self->sname;
            __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj363=self->mLeft;
            if(__dec_obj363) { __dec_obj363 = come_decrement_ref_count2(__dec_obj363, ((struct sNode*)__dec_obj363)->finalize, ((struct sNode*)__dec_obj363)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj364=self->mRight;
            if(__dec_obj364) { __dec_obj364 = come_decrement_ref_count2(__dec_obj364, ((struct sNode*)__dec_obj364)->finalize, ((struct sNode*)__dec_obj364)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result371__;
void* __right_value681 = (void*)0;
struct sAddNode* result_604;
void* __right_value682 = (void*)0;
char* __dec_obj365;
void* __right_value683 = (void*)0;
struct sNode* __dec_obj366;
void* __right_value684 = (void*)0;
struct sNode* __dec_obj367;
struct sAddNode* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_604=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"));
    if(    self!=((void*)0)) {
        result_604->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj365=result_604->sname;
        result_604->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_604->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj366=result_604->mLeft;
        result_604->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj366) { __dec_obj366 = come_decrement_ref_count2(__dec_obj366, ((struct sNode*)__dec_obj366)->finalize, ((struct sNode*)__dec_obj366)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj367=result_604->mRight;
        result_604->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj367) { __dec_obj367 = come_decrement_ref_count2(__dec_obj367, ((struct sNode*)__dec_obj367)->finalize, ((struct sNode*)__dec_obj367)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_604->mQuote=self->mQuote;
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_604;
    come_call_finalizer3(result_604,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj368;
struct sNode* __dec_obj369;
struct sNode* __dec_obj370;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj368=self->sname;
            __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj369=self->mLeft;
            if(__dec_obj369) { __dec_obj369 = come_decrement_ref_count2(__dec_obj369, ((struct sNode*)__dec_obj369)->finalize, ((struct sNode*)__dec_obj369)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj370=self->mRight;
            if(__dec_obj370) { __dec_obj370 = come_decrement_ref_count2(__dec_obj370, ((struct sNode*)__dec_obj370)->finalize, ((struct sNode*)__dec_obj370)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result374__;
void* __right_value689 = (void*)0;
struct sSubNode* result_607;
void* __right_value690 = (void*)0;
char* __dec_obj371;
void* __right_value691 = (void*)0;
struct sNode* __dec_obj372;
void* __right_value692 = (void*)0;
struct sNode* __dec_obj373;
struct sSubNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_607=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"));
    if(    self!=((void*)0)) {
        result_607->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj371=result_607->sname;
        result_607->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_607->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj372=result_607->mLeft;
        result_607->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj372) { __dec_obj372 = come_decrement_ref_count2(__dec_obj372, ((struct sNode*)__dec_obj372)->finalize, ((struct sNode*)__dec_obj372)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj373=result_607->mRight;
        result_607->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj373) { __dec_obj373 = come_decrement_ref_count2(__dec_obj373, ((struct sNode*)__dec_obj373)->finalize, ((struct sNode*)__dec_obj373)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_607->mQuote=self->mQuote;
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_607;
    come_call_finalizer3(result_607,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value694 = (void*)0;
struct sNode* node_608;
int sline_real_609;
void* __right_value695 = (void*)0;
struct sNode* right_610;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value702 = (void*)0;
struct sNode* __result380__;
int sline_real_612;
void* __right_value703 = (void*)0;
struct sNode* right_613;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value710 = (void*)0;
struct sNode* __result383__;
int sline_real_615;
void* __right_value711 = (void*)0;
struct sNode* right_616;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value718 = (void*)0;
struct sNode* __result386__;
int sline_real_618;
void* __right_value719 = (void*)0;
struct sNode* right_619;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value726 = (void*)0;
struct sNode* __result389__;
struct sNode* __result390__;
    parse_sharp_v5(info);
    node_608=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_609=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_610=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_609;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1810, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value697=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1810, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_610),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value702=_inf_value13));
            if(right_610) { right_610 = come_decrement_ref_count2(right_610, ((struct sNode*)right_610)->finalize, ((struct sNode*)right_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value697,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value702) { __right_value702 = come_decrement_ref_count2(__right_value702, ((struct sNode*)__right_value702)->finalize, ((struct sNode*)__right_value702)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result380__;
            if(right_610) { right_610 = come_decrement_ref_count2(right_610, ((struct sNode*)right_610)->finalize, ((struct sNode*)right_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_612=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_613=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_612;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1821, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value705=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1821, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_613),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __result383__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value710=_inf_value14));
            if(right_613) { right_613 = come_decrement_ref_count2(right_613, ((struct sNode*)right_613)->finalize, ((struct sNode*)right_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value705,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value710) { __right_value710 = come_decrement_ref_count2(__right_value710, ((struct sNode*)__right_value710)->finalize, ((struct sNode*)__right_value710)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result383__;
            if(right_613) { right_613 = come_decrement_ref_count2(right_613, ((struct sNode*)right_613)->finalize, ((struct sNode*)right_613)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_615=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_616=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_615;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1832, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value713=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1832, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_616),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __result386__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value718=_inf_value15));
            if(right_616) { right_616 = come_decrement_ref_count2(right_616, ((struct sNode*)right_616)->finalize, ((struct sNode*)right_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value713,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value718) { __right_value718 = come_decrement_ref_count2(__right_value718, ((struct sNode*)__right_value718)->finalize, ((struct sNode*)__right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result386__;
            if(right_616) { right_616 = come_decrement_ref_count2(right_616, ((struct sNode*)right_616)->finalize, ((struct sNode*)right_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_618=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_619=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_618;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1843, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value721=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1843, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_608),(struct sNode*)come_increment_ref_count(right_619),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value726=_inf_value16));
            if(right_619) { right_619 = come_decrement_ref_count2(right_619, ((struct sNode*)right_619)->finalize, ((struct sNode*)right_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value721,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value726) { __right_value726 = come_decrement_ref_count2(__right_value726, ((struct sNode*)__right_value726)->finalize, ((struct sNode*)__right_value726)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result389__;
            if(right_619) { right_619 = come_decrement_ref_count2(right_619, ((struct sNode*)right_619)->finalize, ((struct sNode*)right_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result390__ = gComeFunResultObject = __result_obj__ = node_608;
    if(node_608) { node_608 = come_decrement_ref_count2(node_608, ((struct sNode*)node_608)->finalize, ((struct sNode*)node_608)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj386;
struct sNode* __dec_obj387;
struct sNode* __dec_obj388;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj386=self->sname;
            __dec_obj386 = come_decrement_ref_count2(__dec_obj386, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj387=self->mLeft;
            if(__dec_obj387) { __dec_obj387 = come_decrement_ref_count2(__dec_obj387, ((struct sNode*)__dec_obj387)->finalize, ((struct sNode*)__dec_obj387)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj388=self->mRight;
            if(__dec_obj388) { __dec_obj388 = come_decrement_ref_count2(__dec_obj388, ((struct sNode*)__dec_obj388)->finalize, ((struct sNode*)__dec_obj388)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result384__;
void* __right_value714 = (void*)0;
struct sLShiftNode* result_617;
void* __right_value715 = (void*)0;
char* __dec_obj389;
void* __right_value716 = (void*)0;
struct sNode* __dec_obj390;
void* __right_value717 = (void*)0;
struct sNode* __dec_obj391;
struct sLShiftNode* __result385__;
    if(    self==(void*)0) {
        __result384__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    result_617=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"));
    if(    self!=((void*)0)) {
        result_617->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj389=result_617->sname;
        result_617->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_617->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_617->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj390=result_617->mLeft;
        result_617->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj390) { __dec_obj390 = come_decrement_ref_count2(__dec_obj390, ((struct sNode*)__dec_obj390)->finalize, ((struct sNode*)__dec_obj390)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj391=result_617->mRight;
        result_617->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj391) { __dec_obj391 = come_decrement_ref_count2(__dec_obj391, ((struct sNode*)__dec_obj391)->finalize, ((struct sNode*)__dec_obj391)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result385__ = gComeFunResultObject = __result_obj__ = result_617;
    come_call_finalizer3(result_617,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result385__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj392;
struct sNode* __dec_obj393;
struct sNode* __dec_obj394;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj392=self->sname;
            __dec_obj392 = come_decrement_ref_count2(__dec_obj392, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj393=self->mLeft;
            if(__dec_obj393) { __dec_obj393 = come_decrement_ref_count2(__dec_obj393, ((struct sNode*)__dec_obj393)->finalize, ((struct sNode*)__dec_obj393)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj394=self->mRight;
            if(__dec_obj394) { __dec_obj394 = come_decrement_ref_count2(__dec_obj394, ((struct sNode*)__dec_obj394)->finalize, ((struct sNode*)__dec_obj394)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result387__;
void* __right_value722 = (void*)0;
struct sRShiftNode* result_620;
void* __right_value723 = (void*)0;
char* __dec_obj395;
void* __right_value724 = (void*)0;
struct sNode* __dec_obj396;
void* __right_value725 = (void*)0;
struct sNode* __dec_obj397;
struct sRShiftNode* __result388__;
    if(    self==(void*)0) {
        __result387__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    result_620=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"));
    if(    self!=((void*)0)) {
        result_620->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj395=result_620->sname;
        result_620->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_620->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj396=result_620->mLeft;
        result_620->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj396) { __dec_obj396 = come_decrement_ref_count2(__dec_obj396, ((struct sNode*)__dec_obj396)->finalize, ((struct sNode*)__dec_obj396)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj397=result_620->mRight;
        result_620->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj397) { __dec_obj397 = come_decrement_ref_count2(__dec_obj397, ((struct sNode*)__dec_obj397)->finalize, ((struct sNode*)__dec_obj397)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_620;
    come_call_finalizer3(result_620,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value727 = (void*)0;
struct sNode* node_621;
int sline_real_622;
void* __right_value728 = (void*)0;
struct sNode* right_623;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value735 = (void*)0;
struct sNode* __result393__;
int sline_real_625;
void* __right_value736 = (void*)0;
struct sNode* right_626;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value743 = (void*)0;
struct sNode* __result396__;
int sline_real_628;
void* __right_value744 = (void*)0;
struct sNode* right_629;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value751 = (void*)0;
struct sNode* __result399__;
int sline_real_631;
void* __right_value752 = (void*)0;
struct sNode* right_632;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value759 = (void*)0;
struct sNode* __result402__;
int sline_real_634;
void* __right_value760 = (void*)0;
struct sNode* right_635;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value767 = (void*)0;
struct sNode* __result405__;
int sline_real_637;
void* __right_value768 = (void*)0;
struct sNode* right_638;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value775 = (void*)0;
struct sNode* __result408__;
int sline_real_640;
void* __right_value776 = (void*)0;
struct sNode* right_641;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value783 = (void*)0;
struct sNode* __result411__;
int sline_real_643;
void* __right_value784 = (void*)0;
struct sNode* right_644;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value791 = (void*)0;
struct sNode* __result414__;
struct sNode* __result415__;
    parse_sharp_v5(info);
    node_621=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_622=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_623=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_622;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1873, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value730=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1873, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_623),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value735=_inf_value17));
            if(right_623) { right_623 = come_decrement_ref_count2(right_623, ((struct sNode*)right_623)->finalize, ((struct sNode*)right_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value730,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value735) { __right_value735 = come_decrement_ref_count2(__right_value735, ((struct sNode*)__right_value735)->finalize, ((struct sNode*)__right_value735)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result393__;
            if(right_623) { right_623 = come_decrement_ref_count2(right_623, ((struct sNode*)right_623)->finalize, ((struct sNode*)right_623)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_625=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_626=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_625;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1884, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value738=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1884, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_626),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __result396__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value743=_inf_value18));
            if(right_626) { right_626 = come_decrement_ref_count2(right_626, ((struct sNode*)right_626)->finalize, ((struct sNode*)right_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value738,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value743) { __right_value743 = come_decrement_ref_count2(__right_value743, ((struct sNode*)__right_value743)->finalize, ((struct sNode*)__right_value743)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result396__;
            if(right_626) { right_626 = come_decrement_ref_count2(right_626, ((struct sNode*)right_626)->finalize, ((struct sNode*)right_626)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_628=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_629=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_628;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1895, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value746=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1895, "sGtNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_629),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __result399__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value751=_inf_value19));
            if(right_629) { right_629 = come_decrement_ref_count2(right_629, ((struct sNode*)right_629)->finalize, ((struct sNode*)right_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value746,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value751) { __right_value751 = come_decrement_ref_count2(__right_value751, ((struct sNode*)__right_value751)->finalize, ((struct sNode*)__right_value751)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result399__;
            if(right_629) { right_629 = come_decrement_ref_count2(right_629, ((struct sNode*)right_629)->finalize, ((struct sNode*)right_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_631=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_632=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_631;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1906, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value754=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1906, "sLtNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_632),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __result402__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value759=_inf_value20));
            if(right_632) { right_632 = come_decrement_ref_count2(right_632, ((struct sNode*)right_632)->finalize, ((struct sNode*)right_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value754,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value759) { __right_value759 = come_decrement_ref_count2(__right_value759, ((struct sNode*)__right_value759)->finalize, ((struct sNode*)__right_value759)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result402__;
            if(right_632) { right_632 = come_decrement_ref_count2(right_632, ((struct sNode*)right_632)->finalize, ((struct sNode*)right_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_634=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_635=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_634;
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1917, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value762=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1917, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_635),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value767=_inf_value21));
            if(right_635) { right_635 = come_decrement_ref_count2(right_635, ((struct sNode*)right_635)->finalize, ((struct sNode*)right_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value762,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value767) { __right_value767 = come_decrement_ref_count2(__right_value767, ((struct sNode*)__right_value767)->finalize, ((struct sNode*)__right_value767)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result405__;
            if(right_635) { right_635 = come_decrement_ref_count2(right_635, ((struct sNode*)right_635)->finalize, ((struct sNode*)right_635)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_637=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_638=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_637;
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1928, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value770=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1928, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_638),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __result408__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value775=_inf_value22));
            if(right_638) { right_638 = come_decrement_ref_count2(right_638, ((struct sNode*)right_638)->finalize, ((struct sNode*)right_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value770,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value775) { __right_value775 = come_decrement_ref_count2(__right_value775, ((struct sNode*)__right_value775)->finalize, ((struct sNode*)__right_value775)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result408__;
            if(right_638) { right_638 = come_decrement_ref_count2(right_638, ((struct sNode*)right_638)->finalize, ((struct sNode*)right_638)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_640=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_641=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_640;
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1939, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value778=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1939, "sGtNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_641),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __result411__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value783=_inf_value23));
            if(right_641) { right_641 = come_decrement_ref_count2(right_641, ((struct sNode*)right_641)->finalize, ((struct sNode*)right_641)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value778,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value783) { __right_value783 = come_decrement_ref_count2(__right_value783, ((struct sNode*)__right_value783)->finalize, ((struct sNode*)__right_value783)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result411__;
            if(right_641) { right_641 = come_decrement_ref_count2(right_641, ((struct sNode*)right_641)->finalize, ((struct sNode*)right_641)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_643=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_644=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_643;
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1950, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value786=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1950, "sLtNode")),(struct sNode*)come_increment_ref_count(node_621),(struct sNode*)come_increment_ref_count(right_644),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __result414__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value791=_inf_value24));
            if(right_644) { right_644 = come_decrement_ref_count2(right_644, ((struct sNode*)right_644)->finalize, ((struct sNode*)right_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value786,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value791) { __right_value791 = come_decrement_ref_count2(__right_value791, ((struct sNode*)__right_value791)->finalize, ((struct sNode*)__right_value791)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result414__;
            if(right_644) { right_644 = come_decrement_ref_count2(right_644, ((struct sNode*)right_644)->finalize, ((struct sNode*)right_644)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result415__ = gComeFunResultObject = __result_obj__ = node_621;
    if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result415__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj422;
struct sNode* __dec_obj423;
struct sNode* __dec_obj424;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj422=self->sname;
            __dec_obj422 = come_decrement_ref_count2(__dec_obj422, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj423=self->mLeft;
            if(__dec_obj423) { __dec_obj423 = come_decrement_ref_count2(__dec_obj423, ((struct sNode*)__dec_obj423)->finalize, ((struct sNode*)__dec_obj423)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj424=self->mRight;
            if(__dec_obj424) { __dec_obj424 = come_decrement_ref_count2(__dec_obj424, ((struct sNode*)__dec_obj424)->finalize, ((struct sNode*)__dec_obj424)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result403__;
void* __right_value763 = (void*)0;
struct sGtEqNode* result_636;
void* __right_value764 = (void*)0;
char* __dec_obj425;
void* __right_value765 = (void*)0;
struct sNode* __dec_obj426;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj427;
struct sGtEqNode* __result404__;
    if(    self==(void*)0) {
        __result403__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    result_636=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"));
    if(    self!=((void*)0)) {
        result_636->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj425=result_636->sname;
        result_636->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj425 = come_decrement_ref_count2(__dec_obj425, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_636->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_636->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj426=result_636->mLeft;
        result_636->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj426) { __dec_obj426 = come_decrement_ref_count2(__dec_obj426, ((struct sNode*)__dec_obj426)->finalize, ((struct sNode*)__dec_obj426)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj427=result_636->mRight;
        result_636->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj427) { __dec_obj427 = come_decrement_ref_count2(__dec_obj427, ((struct sNode*)__dec_obj427)->finalize, ((struct sNode*)__dec_obj427)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result404__ = gComeFunResultObject = __result_obj__ = result_636;
    come_call_finalizer3(result_636,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj428;
struct sNode* __dec_obj429;
struct sNode* __dec_obj430;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj428=self->sname;
            __dec_obj428 = come_decrement_ref_count2(__dec_obj428, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj429=self->mLeft;
            if(__dec_obj429) { __dec_obj429 = come_decrement_ref_count2(__dec_obj429, ((struct sNode*)__dec_obj429)->finalize, ((struct sNode*)__dec_obj429)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj430=self->mRight;
            if(__dec_obj430) { __dec_obj430 = come_decrement_ref_count2(__dec_obj430, ((struct sNode*)__dec_obj430)->finalize, ((struct sNode*)__dec_obj430)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result406__;
void* __right_value771 = (void*)0;
struct sLtEqNode* result_639;
void* __right_value772 = (void*)0;
char* __dec_obj431;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj432;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj433;
struct sLtEqNode* __result407__;
    if(    self==(void*)0) {
        __result406__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    result_639=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"));
    if(    self!=((void*)0)) {
        result_639->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj431=result_639->sname;
        result_639->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj431 = come_decrement_ref_count2(__dec_obj431, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_639->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_639->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj432=result_639->mLeft;
        result_639->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj432) { __dec_obj432 = come_decrement_ref_count2(__dec_obj432, ((struct sNode*)__dec_obj432)->finalize, ((struct sNode*)__dec_obj432)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj433=result_639->mRight;
        result_639->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj433) { __dec_obj433 = come_decrement_ref_count2(__dec_obj433, ((struct sNode*)__dec_obj433)->finalize, ((struct sNode*)__dec_obj433)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result407__ = gComeFunResultObject = __result_obj__ = result_639;
    come_call_finalizer3(result_639,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj434;
struct sNode* __dec_obj435;
struct sNode* __dec_obj436;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj434=self->sname;
            __dec_obj434 = come_decrement_ref_count2(__dec_obj434, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj435=self->mLeft;
            if(__dec_obj435) { __dec_obj435 = come_decrement_ref_count2(__dec_obj435, ((struct sNode*)__dec_obj435)->finalize, ((struct sNode*)__dec_obj435)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj436=self->mRight;
            if(__dec_obj436) { __dec_obj436 = come_decrement_ref_count2(__dec_obj436, ((struct sNode*)__dec_obj436)->finalize, ((struct sNode*)__dec_obj436)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result409__;
void* __right_value779 = (void*)0;
struct sGtNode* result_642;
void* __right_value780 = (void*)0;
char* __dec_obj437;
void* __right_value781 = (void*)0;
struct sNode* __dec_obj438;
void* __right_value782 = (void*)0;
struct sNode* __dec_obj439;
struct sGtNode* __result410__;
    if(    self==(void*)0) {
        __result409__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    result_642=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"));
    if(    self!=((void*)0)) {
        result_642->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj437=result_642->sname;
        result_642->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj437 = come_decrement_ref_count2(__dec_obj437, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_642->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_642->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj438=result_642->mLeft;
        result_642->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj438) { __dec_obj438 = come_decrement_ref_count2(__dec_obj438, ((struct sNode*)__dec_obj438)->finalize, ((struct sNode*)__dec_obj438)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj439=result_642->mRight;
        result_642->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj439) { __dec_obj439 = come_decrement_ref_count2(__dec_obj439, ((struct sNode*)__dec_obj439)->finalize, ((struct sNode*)__dec_obj439)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result410__ = gComeFunResultObject = __result_obj__ = result_642;
    come_call_finalizer3(result_642,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value792 = (void*)0;
struct sNode* node_646;
int sline_real_647;
void* __right_value793 = (void*)0;
struct sNode* right_648;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value800 = (void*)0;
struct sNode* __result418__;
int sline_real_650;
void* __right_value801 = (void*)0;
struct sNode* right_651;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value808 = (void*)0;
struct sNode* __result421__;
int sline_real_653;
void* __right_value809 = (void*)0;
struct sNode* right_654;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value816 = (void*)0;
struct sNode* __result424__;
int sline_real_656;
void* __right_value817 = (void*)0;
struct sNode* right_657;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value824 = (void*)0;
struct sNode* __result427__;
int sline_real_659;
void* __right_value825 = (void*)0;
struct sNode* right_660;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value832 = (void*)0;
struct sNode* __result430__;
int sline_real_662;
void* __right_value833 = (void*)0;
struct sNode* right_663;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value840 = (void*)0;
struct sNode* __result433__;
int sline_real_665;
void* __right_value841 = (void*)0;
struct sNode* right_666;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value848 = (void*)0;
struct sNode* __result436__;
int sline_real_668;
void* __right_value849 = (void*)0;
struct sNode* right_669;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value856 = (void*)0;
struct sNode* __result439__;
struct sNode* __result440__;
    parse_sharp_v5(info);
    node_646=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_647=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_648=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_647;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1980, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value795=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1980, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_648),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result418__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value800=_inf_value25));
            if(right_648) { right_648 = come_decrement_ref_count2(right_648, ((struct sNode*)right_648)->finalize, ((struct sNode*)right_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value795,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value800) { __right_value800 = come_decrement_ref_count2(__right_value800, ((struct sNode*)__right_value800)->finalize, ((struct sNode*)__right_value800)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result418__;
            if(right_648) { right_648 = come_decrement_ref_count2(right_648, ((struct sNode*)right_648)->finalize, ((struct sNode*)right_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_650=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_651=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_650;
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1991, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value803=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1991, "sEqNode")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_651),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __result421__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value808=_inf_value26));
            if(right_651) { right_651 = come_decrement_ref_count2(right_651, ((struct sNode*)right_651)->finalize, ((struct sNode*)right_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value803,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value808) { __right_value808 = come_decrement_ref_count2(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result421__;
            if(right_651) { right_651 = come_decrement_ref_count2(right_651, ((struct sNode*)right_651)->finalize, ((struct sNode*)right_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_653=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_654=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_653;
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2002, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value811=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2002, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_654),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __result424__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value816=_inf_value27));
            if(right_654) { right_654 = come_decrement_ref_count2(right_654, ((struct sNode*)right_654)->finalize, ((struct sNode*)right_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value811,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result424__;
            if(right_654) { right_654 = come_decrement_ref_count2(right_654, ((struct sNode*)right_654)->finalize, ((struct sNode*)right_654)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_656=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_657=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_656;
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2013, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value819=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2013, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_657),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __result427__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value824=_inf_value28));
            if(right_657) { right_657 = come_decrement_ref_count2(right_657, ((struct sNode*)right_657)->finalize, ((struct sNode*)right_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value819,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value824) { __right_value824 = come_decrement_ref_count2(__right_value824, ((struct sNode*)__right_value824)->finalize, ((struct sNode*)__right_value824)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result427__;
            if(right_657) { right_657 = come_decrement_ref_count2(right_657, ((struct sNode*)right_657)->finalize, ((struct sNode*)right_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_659=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_660=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_659;
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2024, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value827=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2024, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_660),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __result430__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value832=_inf_value29));
            if(right_660) { right_660 = come_decrement_ref_count2(right_660, ((struct sNode*)right_660)->finalize, ((struct sNode*)right_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value827,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value832) { __right_value832 = come_decrement_ref_count2(__right_value832, ((struct sNode*)__right_value832)->finalize, ((struct sNode*)__right_value832)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result430__;
            if(right_660) { right_660 = come_decrement_ref_count2(right_660, ((struct sNode*)right_660)->finalize, ((struct sNode*)right_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_662=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_663=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_662;
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2035, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value835=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2035, "sEqNode")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_663),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __result433__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value840=_inf_value30));
            if(right_663) { right_663 = come_decrement_ref_count2(right_663, ((struct sNode*)right_663)->finalize, ((struct sNode*)right_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value835,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value840) { __right_value840 = come_decrement_ref_count2(__right_value840, ((struct sNode*)__right_value840)->finalize, ((struct sNode*)__right_value840)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result433__;
            if(right_663) { right_663 = come_decrement_ref_count2(right_663, ((struct sNode*)right_663)->finalize, ((struct sNode*)right_663)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_665=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_666=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_665;
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2046, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value843=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2046, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_666),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __result436__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value848=_inf_value31));
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value843,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value848) { __right_value848 = come_decrement_ref_count2(__right_value848, ((struct sNode*)__right_value848)->finalize, ((struct sNode*)__right_value848)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result436__;
            if(right_666) { right_666 = come_decrement_ref_count2(right_666, ((struct sNode*)right_666)->finalize, ((struct sNode*)right_666)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_668=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_669=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_668;
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2057, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value851=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2057, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_646),(struct sNode*)come_increment_ref_count(right_669),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __result439__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value856=_inf_value32));
            if(right_669) { right_669 = come_decrement_ref_count2(right_669, ((struct sNode*)right_669)->finalize, ((struct sNode*)right_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value851,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value856) { __right_value856 = come_decrement_ref_count2(__right_value856, ((struct sNode*)__right_value856)->finalize, ((struct sNode*)__right_value856)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result439__;
            if(right_669) { right_669 = come_decrement_ref_count2(right_669, ((struct sNode*)right_669)->finalize, ((struct sNode*)right_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result440__ = gComeFunResultObject = __result_obj__ = node_646;
    if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result440__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj470;
struct sNode* __dec_obj471;
struct sNode* __dec_obj472;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj470=self->sname;
            __dec_obj470 = come_decrement_ref_count2(__dec_obj470, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj471=self->mLeft;
            if(__dec_obj471) { __dec_obj471 = come_decrement_ref_count2(__dec_obj471, ((struct sNode*)__dec_obj471)->finalize, ((struct sNode*)__dec_obj471)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj472=self->mRight;
            if(__dec_obj472) { __dec_obj472 = come_decrement_ref_count2(__dec_obj472, ((struct sNode*)__dec_obj472)->finalize, ((struct sNode*)__dec_obj472)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result428__;
void* __right_value828 = (void*)0;
struct sEq2Node* result_661;
void* __right_value829 = (void*)0;
char* __dec_obj473;
void* __right_value830 = (void*)0;
struct sNode* __dec_obj474;
void* __right_value831 = (void*)0;
struct sNode* __dec_obj475;
struct sEq2Node* __result429__;
    if(    self==(void*)0) {
        __result428__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result428__;
    }
    result_661=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"));
    if(    self!=((void*)0)) {
        result_661->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj473=result_661->sname;
        result_661->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj473 = come_decrement_ref_count2(__dec_obj473, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_661->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_661->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj474=result_661->mLeft;
        result_661->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj474) { __dec_obj474 = come_decrement_ref_count2(__dec_obj474, ((struct sNode*)__dec_obj474)->finalize, ((struct sNode*)__dec_obj474)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj475=result_661->mRight;
        result_661->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj475) { __dec_obj475 = come_decrement_ref_count2(__dec_obj475, ((struct sNode*)__dec_obj475)->finalize, ((struct sNode*)__dec_obj475)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result429__ = gComeFunResultObject = __result_obj__ = result_661;
    come_call_finalizer3(result_661,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj476;
struct sNode* __dec_obj477;
struct sNode* __dec_obj478;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj476=self->sname;
            __dec_obj476 = come_decrement_ref_count2(__dec_obj476, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj477=self->mLeft;
            if(__dec_obj477) { __dec_obj477 = come_decrement_ref_count2(__dec_obj477, ((struct sNode*)__dec_obj477)->finalize, ((struct sNode*)__dec_obj477)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj478=self->mRight;
            if(__dec_obj478) { __dec_obj478 = come_decrement_ref_count2(__dec_obj478, ((struct sNode*)__dec_obj478)->finalize, ((struct sNode*)__dec_obj478)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result431__;
void* __right_value836 = (void*)0;
struct sEqNode* result_664;
void* __right_value837 = (void*)0;
char* __dec_obj479;
void* __right_value838 = (void*)0;
struct sNode* __dec_obj480;
void* __right_value839 = (void*)0;
struct sNode* __dec_obj481;
struct sEqNode* __result432__;
    if(    self==(void*)0) {
        __result431__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result431__;
    }
    result_664=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj479=result_664->sname;
        result_664->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj479 = come_decrement_ref_count2(__dec_obj479, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_664->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj480=result_664->mLeft;
        result_664->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj480) { __dec_obj480 = come_decrement_ref_count2(__dec_obj480, ((struct sNode*)__dec_obj480)->finalize, ((struct sNode*)__dec_obj480)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj481=result_664->mRight;
        result_664->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj481) { __dec_obj481 = come_decrement_ref_count2(__dec_obj481, ((struct sNode*)__dec_obj481)->finalize, ((struct sNode*)__dec_obj481)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result432__ = gComeFunResultObject = __result_obj__ = result_664;
    come_call_finalizer3(result_664,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result432__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj482;
struct sNode* __dec_obj483;
struct sNode* __dec_obj484;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj482=self->sname;
            __dec_obj482 = come_decrement_ref_count2(__dec_obj482, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj483=self->mLeft;
            if(__dec_obj483) { __dec_obj483 = come_decrement_ref_count2(__dec_obj483, ((struct sNode*)__dec_obj483)->finalize, ((struct sNode*)__dec_obj483)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj484=self->mRight;
            if(__dec_obj484) { __dec_obj484 = come_decrement_ref_count2(__dec_obj484, ((struct sNode*)__dec_obj484)->finalize, ((struct sNode*)__dec_obj484)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result434__;
void* __right_value844 = (void*)0;
struct sNotEq2Node* result_667;
void* __right_value845 = (void*)0;
char* __dec_obj485;
void* __right_value846 = (void*)0;
struct sNode* __dec_obj486;
void* __right_value847 = (void*)0;
struct sNode* __dec_obj487;
struct sNotEq2Node* __result435__;
    if(    self==(void*)0) {
        __result434__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result434__;
    }
    result_667=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"));
    if(    self!=((void*)0)) {
        result_667->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj485=result_667->sname;
        result_667->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj485 = come_decrement_ref_count2(__dec_obj485, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_667->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj486=result_667->mLeft;
        result_667->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj486) { __dec_obj486 = come_decrement_ref_count2(__dec_obj486, ((struct sNode*)__dec_obj486)->finalize, ((struct sNode*)__dec_obj486)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj487=result_667->mRight;
        result_667->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj487) { __dec_obj487 = come_decrement_ref_count2(__dec_obj487, ((struct sNode*)__dec_obj487)->finalize, ((struct sNode*)__dec_obj487)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result435__ = gComeFunResultObject = __result_obj__ = result_667;
    come_call_finalizer3(result_667,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj488;
struct sNode* __dec_obj489;
struct sNode* __dec_obj490;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj488=self->sname;
            __dec_obj488 = come_decrement_ref_count2(__dec_obj488, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj489=self->mLeft;
            if(__dec_obj489) { __dec_obj489 = come_decrement_ref_count2(__dec_obj489, ((struct sNode*)__dec_obj489)->finalize, ((struct sNode*)__dec_obj489)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj490=self->mRight;
            if(__dec_obj490) { __dec_obj490 = come_decrement_ref_count2(__dec_obj490, ((struct sNode*)__dec_obj490)->finalize, ((struct sNode*)__dec_obj490)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result437__;
void* __right_value852 = (void*)0;
struct sNotEqNode* result_670;
void* __right_value853 = (void*)0;
char* __dec_obj491;
void* __right_value854 = (void*)0;
struct sNode* __dec_obj492;
void* __right_value855 = (void*)0;
struct sNode* __dec_obj493;
struct sNotEqNode* __result438__;
    if(    self==(void*)0) {
        __result437__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result437__;
    }
    result_670=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"));
    if(    self!=((void*)0)) {
        result_670->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj491=result_670->sname;
        result_670->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj491 = come_decrement_ref_count2(__dec_obj491, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_670->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_670->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj492=result_670->mLeft;
        result_670->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj492) { __dec_obj492 = come_decrement_ref_count2(__dec_obj492, ((struct sNode*)__dec_obj492)->finalize, ((struct sNode*)__dec_obj492)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj493=result_670->mRight;
        result_670->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj493) { __dec_obj493 = come_decrement_ref_count2(__dec_obj493, ((struct sNode*)__dec_obj493)->finalize, ((struct sNode*)__dec_obj493)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result438__ = gComeFunResultObject = __result_obj__ = result_670;
    come_call_finalizer3(result_670,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result438__;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value857 = (void*)0;
struct sNode* node_671;
int sline_real_672;
void* __right_value858 = (void*)0;
struct sNode* right_673;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value865 = (void*)0;
struct sNode* __result443__;
int sline_real_675;
void* __right_value866 = (void*)0;
struct sNode* right_676;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value873 = (void*)0;
struct sNode* __result446__;
struct sNode* __result447__;
    parse_sharp_v5(info);
    node_671=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_671->terminated(node_671->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_672=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_673=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_672;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2087, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value860=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2087, "sAndNode")),(struct sNode*)come_increment_ref_count(node_671),(struct sNode*)come_increment_ref_count(right_673),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result443__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value865=_inf_value33));
            if(right_673) { right_673 = come_decrement_ref_count2(right_673, ((struct sNode*)right_673)->finalize, ((struct sNode*)right_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_671) { node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value860,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value865) { __right_value865 = come_decrement_ref_count2(__right_value865, ((struct sNode*)__right_value865)->finalize, ((struct sNode*)__right_value865)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result443__;
            if(right_673) { right_673 = come_decrement_ref_count2(right_673, ((struct sNode*)right_673)->finalize, ((struct sNode*)right_673)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !node_671->terminated(node_671->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_675=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_676=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_675;
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2098, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value868=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2098, "sAndNode")),(struct sNode*)come_increment_ref_count(node_671),(struct sNode*)come_increment_ref_count(right_676),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value873=_inf_value34));
            if(right_676) { right_676 = come_decrement_ref_count2(right_676, ((struct sNode*)right_676)->finalize, ((struct sNode*)right_676)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_671) { node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value868,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value873) { __right_value873 = come_decrement_ref_count2(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            if(right_676) { right_676 = come_decrement_ref_count2(right_676, ((struct sNode*)right_676)->finalize, ((struct sNode*)right_676)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result447__ = gComeFunResultObject = __result_obj__ = node_671;
    if(node_671) { node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result447__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj500;
struct sNode* __dec_obj501;
struct sNode* __dec_obj502;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj500=self->sname;
            __dec_obj500 = come_decrement_ref_count2(__dec_obj500, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj501=self->mLeft;
            if(__dec_obj501) { __dec_obj501 = come_decrement_ref_count2(__dec_obj501, ((struct sNode*)__dec_obj501)->finalize, ((struct sNode*)__dec_obj501)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj502=self->mRight;
            if(__dec_obj502) { __dec_obj502 = come_decrement_ref_count2(__dec_obj502, ((struct sNode*)__dec_obj502)->finalize, ((struct sNode*)__dec_obj502)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result444__;
void* __right_value869 = (void*)0;
struct sAndNode* result_677;
void* __right_value870 = (void*)0;
char* __dec_obj503;
void* __right_value871 = (void*)0;
struct sNode* __dec_obj504;
void* __right_value872 = (void*)0;
struct sNode* __dec_obj505;
struct sAndNode* __result445__;
    if(    self==(void*)0) {
        __result444__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result444__;
    }
    result_677=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"));
    if(    self!=((void*)0)) {
        result_677->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj503=result_677->sname;
        result_677->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj503 = come_decrement_ref_count2(__dec_obj503, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_677->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_677->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj504=result_677->mLeft;
        result_677->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj504) { __dec_obj504 = come_decrement_ref_count2(__dec_obj504, ((struct sNode*)__dec_obj504)->finalize, ((struct sNode*)__dec_obj504)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj505=result_677->mRight;
        result_677->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj505) { __dec_obj505 = come_decrement_ref_count2(__dec_obj505, ((struct sNode*)__dec_obj505)->finalize, ((struct sNode*)__dec_obj505)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result445__ = gComeFunResultObject = __result_obj__ = result_677;
    come_call_finalizer3(result_677,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value874 = (void*)0;
struct sNode* node_678;
int sline_real_679;
void* __right_value875 = (void*)0;
struct sNode* right_680;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value882 = (void*)0;
struct sNode* __result450__;
int sline_real_682;
void* __right_value883 = (void*)0;
struct sNode* right_683;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value890 = (void*)0;
struct sNode* __result453__;
struct sNode* __result454__;
    parse_sharp_v5(info);
    node_678=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_679=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_680=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_679;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2128, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value877=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2128, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_678),(struct sNode*)come_increment_ref_count(right_680),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result450__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value882=_inf_value35));
            if(right_680) { right_680 = come_decrement_ref_count2(right_680, ((struct sNode*)right_680)->finalize, ((struct sNode*)right_680)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_678) { node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value877,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value882) { __right_value882 = come_decrement_ref_count2(__right_value882, ((struct sNode*)__right_value882)->finalize, ((struct sNode*)__right_value882)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result450__;
            if(right_680) { right_680 = come_decrement_ref_count2(right_680, ((struct sNode*)right_680)->finalize, ((struct sNode*)right_680)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_682=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_683=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_682;
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2139, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value885=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2139, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_678),(struct sNode*)come_increment_ref_count(right_683),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __result453__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value890=_inf_value36));
            if(right_683) { right_683 = come_decrement_ref_count2(right_683, ((struct sNode*)right_683)->finalize, ((struct sNode*)right_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_678) { node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value885,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value890) { __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result453__;
            if(right_683) { right_683 = come_decrement_ref_count2(right_683, ((struct sNode*)right_683)->finalize, ((struct sNode*)right_683)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result454__ = gComeFunResultObject = __result_obj__ = node_678;
    if(node_678) { node_678 = come_decrement_ref_count2(node_678, ((struct sNode*)node_678)->finalize, ((struct sNode*)node_678)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result454__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj512;
struct sNode* __dec_obj513;
struct sNode* __dec_obj514;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj512=self->sname;
            __dec_obj512 = come_decrement_ref_count2(__dec_obj512, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj513=self->mLeft;
            if(__dec_obj513) { __dec_obj513 = come_decrement_ref_count2(__dec_obj513, ((struct sNode*)__dec_obj513)->finalize, ((struct sNode*)__dec_obj513)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj514=self->mRight;
            if(__dec_obj514) { __dec_obj514 = come_decrement_ref_count2(__dec_obj514, ((struct sNode*)__dec_obj514)->finalize, ((struct sNode*)__dec_obj514)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result451__;
void* __right_value886 = (void*)0;
struct sXOrNode* result_684;
void* __right_value887 = (void*)0;
char* __dec_obj515;
void* __right_value888 = (void*)0;
struct sNode* __dec_obj516;
void* __right_value889 = (void*)0;
struct sNode* __dec_obj517;
struct sXOrNode* __result452__;
    if(    self==(void*)0) {
        __result451__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result451__;
    }
    result_684=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"));
    if(    self!=((void*)0)) {
        result_684->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj515=result_684->sname;
        result_684->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj515 = come_decrement_ref_count2(__dec_obj515, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_684->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_684->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj516=result_684->mLeft;
        result_684->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj516) { __dec_obj516 = come_decrement_ref_count2(__dec_obj516, ((struct sNode*)__dec_obj516)->finalize, ((struct sNode*)__dec_obj516)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj517=result_684->mRight;
        result_684->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj517) { __dec_obj517 = come_decrement_ref_count2(__dec_obj517, ((struct sNode*)__dec_obj517)->finalize, ((struct sNode*)__dec_obj517)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result452__ = gComeFunResultObject = __result_obj__ = result_684;
    come_call_finalizer3(result_684,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result452__;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value891 = (void*)0;
struct sNode* node_685;
int sline_real_686;
void* __right_value892 = (void*)0;
struct sNode* right_687;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value899 = (void*)0;
struct sNode* __result457__;
int sline_real_689;
void* __right_value900 = (void*)0;
struct sNode* right_690;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value907 = (void*)0;
struct sNode* __result460__;
struct sNode* __result461__;
    parse_sharp_v5(info);
    node_685=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_686=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_687=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_686;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2169, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value894=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2169, "sOrNode")),(struct sNode*)come_increment_ref_count(node_685),(struct sNode*)come_increment_ref_count(right_687),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result457__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value899=_inf_value37));
            if(right_687) { right_687 = come_decrement_ref_count2(right_687, ((struct sNode*)right_687)->finalize, ((struct sNode*)right_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value894,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value899) { __right_value899 = come_decrement_ref_count2(__right_value899, ((struct sNode*)__right_value899)->finalize, ((struct sNode*)__right_value899)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result457__;
            if(right_687) { right_687 = come_decrement_ref_count2(right_687, ((struct sNode*)right_687)->finalize, ((struct sNode*)right_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_689=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_690=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_689;
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2180, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value902=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2180, "sOrNode")),(struct sNode*)come_increment_ref_count(node_685),(struct sNode*)come_increment_ref_count(right_690),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __result460__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value907=_inf_value38));
            if(right_690) { right_690 = come_decrement_ref_count2(right_690, ((struct sNode*)right_690)->finalize, ((struct sNode*)right_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value902,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value907) { __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result460__;
            if(right_690) { right_690 = come_decrement_ref_count2(right_690, ((struct sNode*)right_690)->finalize, ((struct sNode*)right_690)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result461__ = gComeFunResultObject = __result_obj__ = node_685;
    if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj524;
struct sNode* __dec_obj525;
struct sNode* __dec_obj526;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj524=self->sname;
            __dec_obj524 = come_decrement_ref_count2(__dec_obj524, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj525=self->mLeft;
            if(__dec_obj525) { __dec_obj525 = come_decrement_ref_count2(__dec_obj525, ((struct sNode*)__dec_obj525)->finalize, ((struct sNode*)__dec_obj525)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj526=self->mRight;
            if(__dec_obj526) { __dec_obj526 = come_decrement_ref_count2(__dec_obj526, ((struct sNode*)__dec_obj526)->finalize, ((struct sNode*)__dec_obj526)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result458__;
void* __right_value903 = (void*)0;
struct sOrNode* result_691;
void* __right_value904 = (void*)0;
char* __dec_obj527;
void* __right_value905 = (void*)0;
struct sNode* __dec_obj528;
void* __right_value906 = (void*)0;
struct sNode* __dec_obj529;
struct sOrNode* __result459__;
    if(    self==(void*)0) {
        __result458__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result458__;
    }
    result_691=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"));
    if(    self!=((void*)0)) {
        result_691->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj527=result_691->sname;
        result_691->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj527 = come_decrement_ref_count2(__dec_obj527, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_691->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_691->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj528=result_691->mLeft;
        result_691->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj528) { __dec_obj528 = come_decrement_ref_count2(__dec_obj528, ((struct sNode*)__dec_obj528)->finalize, ((struct sNode*)__dec_obj528)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj529=result_691->mRight;
        result_691->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj529) { __dec_obj529 = come_decrement_ref_count2(__dec_obj529, ((struct sNode*)__dec_obj529)->finalize, ((struct sNode*)__dec_obj529)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result459__ = gComeFunResultObject = __result_obj__ = result_691;
    come_call_finalizer3(result_691,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result459__;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value908 = (void*)0;
struct sNode* node_692;
int sline_real_693;
void* __right_value909 = (void*)0;
struct sNode* right_694;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value916 = (void*)0;
struct sNode* __result464__;
int sline_real_696;
void* __right_value917 = (void*)0;
struct sNode* right_697;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value924 = (void*)0;
struct sNode* __result467__;
struct sNode* __result468__;
    parse_sharp_v5(info);
    node_692=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_693=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_694=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_693;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2210, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value911=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2210, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_692),(struct sNode*)come_increment_ref_count(right_694),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result464__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value916=_inf_value39));
            if(right_694) { right_694 = come_decrement_ref_count2(right_694, ((struct sNode*)right_694)->finalize, ((struct sNode*)right_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_692) { node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value911,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value916) { __right_value916 = come_decrement_ref_count2(__right_value916, ((struct sNode*)__right_value916)->finalize, ((struct sNode*)__right_value916)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result464__;
            if(right_694) { right_694 = come_decrement_ref_count2(right_694, ((struct sNode*)right_694)->finalize, ((struct sNode*)right_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_696=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_697=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_696;
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2221, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value919=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2221, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_692),(struct sNode*)come_increment_ref_count(right_697),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __result467__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value924=_inf_value40));
            if(right_697) { right_697 = come_decrement_ref_count2(right_697, ((struct sNode*)right_697)->finalize, ((struct sNode*)right_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_692) { node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value919,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value924) { __right_value924 = come_decrement_ref_count2(__right_value924, ((struct sNode*)__right_value924)->finalize, ((struct sNode*)__right_value924)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result467__;
            if(right_697) { right_697 = come_decrement_ref_count2(right_697, ((struct sNode*)right_697)->finalize, ((struct sNode*)right_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result468__ = gComeFunResultObject = __result_obj__ = node_692;
    if(node_692) { node_692 = come_decrement_ref_count2(node_692, ((struct sNode*)node_692)->finalize, ((struct sNode*)node_692)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj536;
struct sNode* __dec_obj537;
struct sNode* __dec_obj538;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj536=self->sname;
            __dec_obj536 = come_decrement_ref_count2(__dec_obj536, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj537=self->mLeft;
            if(__dec_obj537) { __dec_obj537 = come_decrement_ref_count2(__dec_obj537, ((struct sNode*)__dec_obj537)->finalize, ((struct sNode*)__dec_obj537)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj538=self->mRight;
            if(__dec_obj538) { __dec_obj538 = come_decrement_ref_count2(__dec_obj538, ((struct sNode*)__dec_obj538)->finalize, ((struct sNode*)__dec_obj538)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result465__;
void* __right_value920 = (void*)0;
struct sAndAndNode* result_698;
void* __right_value921 = (void*)0;
char* __dec_obj539;
void* __right_value922 = (void*)0;
struct sNode* __dec_obj540;
void* __right_value923 = (void*)0;
struct sNode* __dec_obj541;
struct sAndAndNode* __result466__;
    if(    self==(void*)0) {
        __result465__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    result_698=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"));
    if(    self!=((void*)0)) {
        result_698->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj539=result_698->sname;
        result_698->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj539 = come_decrement_ref_count2(__dec_obj539, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_698->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_698->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj540=result_698->mLeft;
        result_698->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj540) { __dec_obj540 = come_decrement_ref_count2(__dec_obj540, ((struct sNode*)__dec_obj540)->finalize, ((struct sNode*)__dec_obj540)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj541=result_698->mRight;
        result_698->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj541) { __dec_obj541 = come_decrement_ref_count2(__dec_obj541, ((struct sNode*)__dec_obj541)->finalize, ((struct sNode*)__dec_obj541)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result466__ = gComeFunResultObject = __result_obj__ = result_698;
    come_call_finalizer3(result_698,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value925 = (void*)0;
struct sNode* node_699;
int sline_real_700;
void* __right_value926 = (void*)0;
struct sNode* right_701;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value933 = (void*)0;
struct sNode* __result471__;
int sline_real_703;
void* __right_value934 = (void*)0;
struct sNode* right_704;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value941 = (void*)0;
struct sNode* __result474__;
struct sNode* __result475__;
    parse_sharp_v5(info);
    node_699=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_700=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_701=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_700;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2251, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value928=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2251, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_699),(struct sNode*)come_increment_ref_count(right_701),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result471__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value933=_inf_value41));
            if(right_701) { right_701 = come_decrement_ref_count2(right_701, ((struct sNode*)right_701)->finalize, ((struct sNode*)right_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_699) { node_699 = come_decrement_ref_count2(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value928,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value933) { __right_value933 = come_decrement_ref_count2(__right_value933, ((struct sNode*)__right_value933)->finalize, ((struct sNode*)__right_value933)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result471__;
            if(right_701) { right_701 = come_decrement_ref_count2(right_701, ((struct sNode*)right_701)->finalize, ((struct sNode*)right_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_703=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_704=(struct sNode*)come_increment_ref_count(oror_exp(info));
            info->sline_real=sline_real_703;
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2262, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value936=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2262, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_699),(struct sNode*)come_increment_ref_count(right_704),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __result474__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value941=_inf_value42));
            if(right_704) { right_704 = come_decrement_ref_count2(right_704, ((struct sNode*)right_704)->finalize, ((struct sNode*)right_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_699) { node_699 = come_decrement_ref_count2(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value936,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value941) { __right_value941 = come_decrement_ref_count2(__right_value941, ((struct sNode*)__right_value941)->finalize, ((struct sNode*)__right_value941)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result474__;
            if(right_704) { right_704 = come_decrement_ref_count2(right_704, ((struct sNode*)right_704)->finalize, ((struct sNode*)right_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result475__ = gComeFunResultObject = __result_obj__ = node_699;
    if(node_699) { node_699 = come_decrement_ref_count2(node_699, ((struct sNode*)node_699)->finalize, ((struct sNode*)node_699)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj548;
struct sNode* __dec_obj549;
struct sNode* __dec_obj550;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj548=self->sname;
            __dec_obj548 = come_decrement_ref_count2(__dec_obj548, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj549=self->mLeft;
            if(__dec_obj549) { __dec_obj549 = come_decrement_ref_count2(__dec_obj549, ((struct sNode*)__dec_obj549)->finalize, ((struct sNode*)__dec_obj549)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj550=self->mRight;
            if(__dec_obj550) { __dec_obj550 = come_decrement_ref_count2(__dec_obj550, ((struct sNode*)__dec_obj550)->finalize, ((struct sNode*)__dec_obj550)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result472__;
void* __right_value937 = (void*)0;
struct sOrOrNode* result_705;
void* __right_value938 = (void*)0;
char* __dec_obj551;
void* __right_value939 = (void*)0;
struct sNode* __dec_obj552;
void* __right_value940 = (void*)0;
struct sNode* __dec_obj553;
struct sOrOrNode* __result473__;
    if(    self==(void*)0) {
        __result472__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result472__;
    }
    result_705=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"));
    if(    self!=((void*)0)) {
        result_705->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj551=result_705->sname;
        result_705->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj551 = come_decrement_ref_count2(__dec_obj551, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_705->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_705->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj552=result_705->mLeft;
        result_705->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj552) { __dec_obj552 = come_decrement_ref_count2(__dec_obj552, ((struct sNode*)__dec_obj552)->finalize, ((struct sNode*)__dec_obj552)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj553=result_705->mRight;
        result_705->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj553) { __dec_obj553 = come_decrement_ref_count2(__dec_obj553, ((struct sNode*)__dec_obj553)->finalize, ((struct sNode*)__dec_obj553)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result473__ = gComeFunResultObject = __result_obj__ = result_705;
    come_call_finalizer3(result_705,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result473__;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value942 = (void*)0;
struct sNode* node_706;
int sline_real_707;
void* __right_value943 = (void*)0;
struct sNode* node2_708;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value950 = (void*)0;
struct sNode* __result478__;
struct sNode* __result479__;
    parse_sharp_v5(info);
    node_706=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_707=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_708=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_707;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2292, "struct sNode");
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value945=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2292, "sCommaNode")),(struct sNode*)come_increment_ref_count(node_706),(struct sNode*)come_increment_ref_count(node2_708),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result478__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value950=_inf_value43));
            if(node2_708) { node2_708 = come_decrement_ref_count2(node2_708, ((struct sNode*)node2_708)->finalize, ((struct sNode*)node2_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value945,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value950) { __right_value950 = come_decrement_ref_count2(__right_value950, ((struct sNode*)__right_value950)->finalize, ((struct sNode*)__right_value950)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result478__;
            if(node2_708) { node2_708 = come_decrement_ref_count2(node2_708, ((struct sNode*)node2_708)->finalize, ((struct sNode*)node2_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result479__ = gComeFunResultObject = __result_obj__ = node_706;
    if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result479__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj554;
struct sNode* __dec_obj555;
struct sNode* __dec_obj556;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj554=self->sname;
            __dec_obj554 = come_decrement_ref_count2(__dec_obj554, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj555=self->mLeft;
            if(__dec_obj555) { __dec_obj555 = come_decrement_ref_count2(__dec_obj555, ((struct sNode*)__dec_obj555)->finalize, ((struct sNode*)__dec_obj555)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj556=self->mRight;
            if(__dec_obj556) { __dec_obj556 = come_decrement_ref_count2(__dec_obj556, ((struct sNode*)__dec_obj556)->finalize, ((struct sNode*)__dec_obj556)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result476__;
void* __right_value946 = (void*)0;
struct sCommaNode* result_709;
void* __right_value947 = (void*)0;
char* __dec_obj557;
void* __right_value948 = (void*)0;
struct sNode* __dec_obj558;
void* __right_value949 = (void*)0;
struct sNode* __dec_obj559;
struct sCommaNode* __result477__;
    if(    self==(void*)0) {
        __result476__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result476__;
    }
    result_709=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"));
    if(    self!=((void*)0)) {
        result_709->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj557=result_709->sname;
        result_709->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj557 = come_decrement_ref_count2(__dec_obj557, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_709->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj558=result_709->mLeft;
        result_709->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj558) { __dec_obj558 = come_decrement_ref_count2(__dec_obj558, ((struct sNode*)__dec_obj558)->finalize, ((struct sNode*)__dec_obj558)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj559=result_709->mRight;
        result_709->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj559) { __dec_obj559 = come_decrement_ref_count2(__dec_obj559, ((struct sNode*)__dec_obj559)->finalize, ((struct sNode*)__dec_obj559)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result477__ = gComeFunResultObject = __result_obj__ = result_709;
    come_call_finalizer3(result_709,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result477__;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value951 = (void*)0;
struct sNode* node_710;
int sline_real_711;
struct sNode* value1_712;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value956 = (void*)0;
struct sNode* __dec_obj562;
_Bool no_label_714;
void* __right_value957 = (void*)0;
struct sNode* __dec_obj563;
void* __right_value958 = (void*)0;
struct sNode* value2_715;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value966 = (void*)0;
struct sNode* __result484__;
struct sNode* __result485__;
value1_712 = (void*)0;
    parse_sharp_v5(info);
    node_710=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_711=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2323, "struct sNode");
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value953=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2323, "sNullNode")),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj562=value1_712;
                value1_712=(struct sNode*)come_increment_ref_count(_inf_value44);
                if(__dec_obj562) { __dec_obj562 = come_decrement_ref_count2(__dec_obj562, ((struct sNode*)__dec_obj562)->finalize, ((struct sNode*)__dec_obj562)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value953,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_714=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj563=value1_712;
                value1_712=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                if(__dec_obj563) { __dec_obj563 = come_decrement_ref_count2(__dec_obj563, ((struct sNode*)__dec_obj563)->finalize, ((struct sNode*)__dec_obj563)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_label=no_label_714;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_715=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_711;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2341, "struct sNode");
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value960=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2341, "sConditionalNode")),(struct sNode*)come_increment_ref_count(node_710),(struct sNode*)come_increment_ref_count(value1_712),(struct sNode*)come_increment_ref_count(value2_715),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result484__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value966=_inf_value45));
            if(value1_712) { value1_712 = come_decrement_ref_count2(value1_712, ((struct sNode*)value1_712)->finalize, ((struct sNode*)value1_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_715) { value2_715 = come_decrement_ref_count2(value2_715, ((struct sNode*)value2_715)->finalize, ((struct sNode*)value2_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_710) { node_710 = come_decrement_ref_count2(node_710, ((struct sNode*)node_710)->finalize, ((struct sNode*)node_710)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value960,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value966) { __right_value966 = come_decrement_ref_count2(__right_value966, ((struct sNode*)__right_value966)->finalize, ((struct sNode*)__right_value966)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result484__;
            if(value1_712) { value1_712 = come_decrement_ref_count2(value1_712, ((struct sNode*)value1_712)->finalize, ((struct sNode*)value1_712)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_715) { value2_715 = come_decrement_ref_count2(value2_715, ((struct sNode*)value2_715)->finalize, ((struct sNode*)value2_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result485__ = gComeFunResultObject = __result_obj__ = node_710;
    if(node_710) { node_710 = come_decrement_ref_count2(node_710, ((struct sNode*)node_710)->finalize, ((struct sNode*)node_710)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj564;
struct sNode* __dec_obj565;
struct sNode* __dec_obj566;
struct sNode* __dec_obj567;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj564=self->sname;
            __dec_obj564 = come_decrement_ref_count2(__dec_obj564, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(        self->mValue1==gComeFunResultObject) {
            __dec_obj565=self->mValue1;
            if(__dec_obj565) { __dec_obj565 = come_decrement_ref_count2(__dec_obj565, ((struct sNode*)__dec_obj565)->finalize, ((struct sNode*)__dec_obj565)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(        self->mValue2==gComeFunResultObject) {
            __dec_obj566=self->mValue2;
            if(__dec_obj566) { __dec_obj566 = come_decrement_ref_count2(__dec_obj566, ((struct sNode*)__dec_obj566)->finalize, ((struct sNode*)__dec_obj566)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(        self->mValue3==gComeFunResultObject) {
            __dec_obj567=self->mValue3;
            if(__dec_obj567) { __dec_obj567 = come_decrement_ref_count2(__dec_obj567, ((struct sNode*)__dec_obj567)->finalize, ((struct sNode*)__dec_obj567)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result482__;
void* __right_value961 = (void*)0;
struct sConditionalNode* result_716;
void* __right_value962 = (void*)0;
char* __dec_obj568;
void* __right_value963 = (void*)0;
struct sNode* __dec_obj569;
void* __right_value964 = (void*)0;
struct sNode* __dec_obj570;
void* __right_value965 = (void*)0;
struct sNode* __dec_obj571;
struct sConditionalNode* __result483__;
    if(    self==(void*)0) {
        __result482__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result482__;
    }
    result_716=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"));
    if(    self!=((void*)0)) {
        result_716->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj568=result_716->sname;
        result_716->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj568 = come_decrement_ref_count2(__dec_obj568, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_716->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj569=result_716->mValue1;
        result_716->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1));
        if(__dec_obj569) { __dec_obj569 = come_decrement_ref_count2(__dec_obj569, ((struct sNode*)__dec_obj569)->finalize, ((struct sNode*)__dec_obj569)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj570=result_716->mValue2;
        result_716->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2));
        if(__dec_obj570) { __dec_obj570 = come_decrement_ref_count2(__dec_obj570, ((struct sNode*)__dec_obj570)->finalize, ((struct sNode*)__dec_obj570)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj571=result_716->mValue3;
        result_716->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3));
        if(__dec_obj571) { __dec_obj571 = come_decrement_ref_count2(__dec_obj571, ((struct sNode*)__dec_obj571)->finalize, ((struct sNode*)__dec_obj571)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result483__ = gComeFunResultObject = __result_obj__ = result_716;
    come_call_finalizer3(result_716,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result483__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value967 = (void*)0;
struct sNode* node_717;
struct sNode* __result486__;
    parse_sharp_v5(info);
    node_717=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result486__ = gComeFunResultObject = __result_obj__ = node_717;
    if(node_717) { node_717 = come_decrement_ref_count2(node_717, ((struct sNode*)node_717)->finalize, ((struct sNode*)node_717)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result486__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value972 = (void*)0;
struct sNode* __result489__;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value977 = (void*)0;
struct sNode* __result492__;
void* __right_value978 = (void*)0;
struct sNode* __result493__;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2365, "struct sNode");
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value969=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2365, "sNullNode")),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result489__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value972=_inf_value46));
        come_call_finalizer3(__right_value969,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value972) { __right_value972 = come_decrement_ref_count2(__right_value972, ((struct sNode*)__right_value972)->finalize, ((struct sNode*)__right_value972)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result489__;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2368, "struct sNode");
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value974=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2368, "sNilNode")),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result492__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value977=_inf_value47));
        come_call_finalizer3(__right_value974,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value977) { __right_value977 = come_decrement_ref_count2(__right_value977, ((struct sNode*)__right_value977)->finalize, ((struct sNode*)__right_value977)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result492__;
    }
    __result493__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value978=string_node_v12(buf,head,head_sline,info)));
    if(__right_value978) { __right_value978 = come_decrement_ref_count2(__right_value978, ((struct sNode*)__right_value978)->finalize, ((struct sNode*)__right_value978)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result493__;
}

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj572;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj572=self->sname;
            __dec_obj572 = come_decrement_ref_count2(__dec_obj572, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result487__;
void* __right_value970 = (void*)0;
struct sNullNode* result_718;
void* __right_value971 = (void*)0;
char* __dec_obj573;
struct sNullNode* __result488__;
    if(    self==(void*)0) {
        __result487__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result487__;
    }
    result_718=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"));
    if(    self!=((void*)0)) {
        result_718->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj573=result_718->sname;
        result_718->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj573 = come_decrement_ref_count2(__dec_obj573, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_718->sline_real=self->sline_real;
    }
    __result488__ = gComeFunResultObject = __result_obj__ = result_718;
    come_call_finalizer3(result_718,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result488__;
}

static void sNilNode_finalize(struct sNilNode* self){
char* __dec_obj574;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj574=self->sname;
            __dec_obj574 = come_decrement_ref_count2(__dec_obj574, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result490__;
void* __right_value975 = (void*)0;
struct sNilNode* result_719;
void* __right_value976 = (void*)0;
char* __dec_obj575;
struct sNilNode* __result491__;
    if(    self==(void*)0) {
        __result490__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result490__;
    }
    result_719=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"));
    if(    self!=((void*)0)) {
        result_719->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj575=result_719->sname;
        result_719->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj575 = come_decrement_ref_count2(__dec_obj575, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_719->sline_real=self->sline_real;
    }
    __result491__ = gComeFunResultObject = __result_obj__ = result_719;
    come_call_finalizer3(result_719,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result491__;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value985 = (void*)0;
struct sNode* __result496__;
    _inf_value48=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2376, "struct sNode");
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value980=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2376, "sLtNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result496__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value985=_inf_value48));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value980,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value985) { __right_value985 = come_decrement_ref_count2(__right_value985, ((struct sNode*)__right_value985)->finalize, ((struct sNode*)__right_value985)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result496__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj576;
struct sNode* __dec_obj577;
struct sNode* __dec_obj578;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj576=self->sname;
            __dec_obj576 = come_decrement_ref_count2(__dec_obj576, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj577=self->mLeft;
            if(__dec_obj577) { __dec_obj577 = come_decrement_ref_count2(__dec_obj577, ((struct sNode*)__dec_obj577)->finalize, ((struct sNode*)__dec_obj577)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj578=self->mRight;
            if(__dec_obj578) { __dec_obj578 = come_decrement_ref_count2(__dec_obj578, ((struct sNode*)__dec_obj578)->finalize, ((struct sNode*)__dec_obj578)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result494__;
void* __right_value981 = (void*)0;
struct sLtNode* result_720;
void* __right_value982 = (void*)0;
char* __dec_obj579;
void* __right_value983 = (void*)0;
struct sNode* __dec_obj580;
void* __right_value984 = (void*)0;
struct sNode* __dec_obj581;
struct sLtNode* __result495__;
    if(    self==(void*)0) {
        __result494__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result494__;
    }
    result_720=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"));
    if(    self!=((void*)0)) {
        result_720->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj579=result_720->sname;
        result_720->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj579 = come_decrement_ref_count2(__dec_obj579, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_720->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_720->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj580=result_720->mLeft;
        result_720->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj580) { __dec_obj580 = come_decrement_ref_count2(__dec_obj580, ((struct sNode*)__dec_obj580)->finalize, ((struct sNode*)__dec_obj580)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj581=result_720->mRight;
        result_720->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj581) { __dec_obj581 = come_decrement_ref_count2(__dec_obj581, ((struct sNode*)__dec_obj581)->finalize, ((struct sNode*)__dec_obj581)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result495__ = gComeFunResultObject = __result_obj__ = result_720;
    come_call_finalizer3(result_720,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result495__;
}

