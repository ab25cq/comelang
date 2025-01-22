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
struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
};

struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};

struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key);
static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item);
static void map$2charphbufferph_rehash(struct map$2charphbufferph* self);
static char* map$2charphbufferph_begin(struct map$2charphbufferph* self);
static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self);
static char* map$2charphbufferph_next(struct map$2charphbufferph* self);
static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
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
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_266;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __result207__;
void* __right_value251 = (void*)0;
char* __result208__;
    p_266=class_name;
    while(*p_266) {
        if(        *p_266==36) {
            __result207__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=charp_substring(((char*)(__right_value249=__builtin_string(class_name))),0,p_266-class_name)));
            __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result207__;
        }
        else {
            p_266++;
        }
    }
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string(class_name)));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct buffer* buf_267;
struct sClass* klass_268;
char* class_name_269;
int i_270;
void* __right_value254 = (void*)0;
struct sType* type_271;
void* __right_value255 = (void*)0;
char* type_name_285;
int i_286;
void* __right_value256 = (void*)0;
char* __result211__;
    buf_267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))));
    klass_268=generics_type->mClass;
    class_name_269=klass_268->mName;
    buffer_append_str(buf_267,class_name_269);
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_267,36);
        buffer_append_char(buf_267,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_270=0;        i_270<list$1sTypeph_length(generics_type->mGenericsTypes);        i_270++        ){
            type_271=((struct sType*)come_null_check(((struct sType*)(__right_value254=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_270))), "14struct.c", 33, 0));
            come_call_finalizer3(__right_value254,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_name_285=(char*)come_increment_ref_count(create_generics_name(type_271,info));
            buffer_append_str(buf_267,type_name_285);
            for(            i_286=0;            i_286<type_271->mPointerNum;            i_286++            ){
                buffer_append_char(buf_267,112);
            }
            if(            type_271->mHeap) {
                buffer_append_str(buf_267,"h");
            }
            type_name_285 = come_decrement_ref_count2(type_name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result211__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value256=buffer_to_string(buf_267)));
    come_call_finalizer3(buf_267,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_272;
int i_273;
struct sType* __result209__;
struct sType* default_value_274;
struct sType* __result210__;
default_value_274 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_272=self->head;
    i_273=0;
    while(it_272!=((void*)0)) {
        if(        position==i_273) {
            __result209__ = gComeFunResultObject = __result_obj__ = it_272->item;
            gComeFunResultObject = (void*)0;
            return __result209__;
        }
        it_272=it_272->next;
        i_273++;
    }
    memset(&default_value_274,0,sizeof(struct sType*));
    __result210__ = gComeFunResultObject = __result_obj__ = default_value_274;
    come_call_finalizer3(default_value_274,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj36;
char* __dec_obj38;
char* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj46;
struct sNode* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj32=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj32,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj38=self->mInterfaceName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj39=self->mGenericsName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj40=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj40,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj44=self->mParamTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj45=self->mParamNames;
            come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj46=self->mResultType;
            come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj48=self->mAlignas;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj49=self->mChannelType;
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj51=self->mSizeNum;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj52=self->mOriginalTypeName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj53=self->mAsmName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj54=self->mTupleName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj55=self->mAttribute;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
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
struct sType* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
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

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_283;
struct list_item$1charph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        come_call_finalizer3(prev_it_284,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj50;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj50=self->v1;
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_287;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct buffer* buf_288;
_Bool existance_generics_289;
struct list$1tuple2$2charphsTypephph* o2_saved_290;
struct tuple2$2charphsTypeph* it_293;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_296=0;
struct sType* type_297=0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
_Bool _if_conditional1;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2charphsTypephph_length(klass->mFields)==0) {
        return;
    }
    name_287=(char*)come_increment_ref_count(klass->mName);
    buf_288=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 62, "buffer"))));
    buffer_append_format(buf_288,"struct %s\n{\n",klass->mName);
    existance_generics_289=(_Bool)0;
    for(    o2_saved_290=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_293=list$1tuple2$2charphsTypephph_begin((o2_saved_290));    !list$1tuple2$2charphsTypephph_end((o2_saved_290));    it_293=list$1tuple2$2charphsTypephph_next((o2_saved_290))    ){
        multiple_assign_var1=it_293;
        name_296=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_297=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_297,info)||is_contained_generics_types(type_297,info)) {
            existance_generics_289=(_Bool)1;
        }
        type_297->mStatic=(_Bool)0;
        buffer_append_str(buf_288,"    ");
        buffer_append_str(buf_288,((char*)(__right_value259=make_define_var(type_297,name_296,(_Bool)0,info))));
        __right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_288,";\n");
        name_296 = come_decrement_ref_count2(name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_290,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_288,"};\n");
    }
    else {
        buffer_append_format(buf_288,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value260=map$2charphbufferphp_operator_load_element(info->struct_definition,name_287)))==((void*)0)&&!existance_generics_289)),    come_call_finalizer3(__right_value260,buffer_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_287),(struct buffer*)come_increment_ref_count(buf_288));
    }
    name_287 = come_decrement_ref_count2(name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_291;
struct tuple2$2charphsTypeph* __result212__;
struct tuple2$2charphsTypeph* __result213__;
struct tuple2$2charphsTypeph* result_292;
struct tuple2$2charphsTypeph* __result214__;
result_291 = (void*)0;
result_292 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_291,0,sizeof(struct tuple2$2charphsTypeph*));
        __result212__ = gComeFunResultObject = __result_obj__ = result_291;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    self->it=self->head;
    if(    self->it) {
        __result213__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    memset(&result_292,0,sizeof(struct tuple2$2charphsTypeph*));
    __result214__ = gComeFunResultObject = __result_obj__ = result_292;
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_294;
struct tuple2$2charphsTypeph* __result215__;
struct tuple2$2charphsTypeph* __result216__;
struct tuple2$2charphsTypeph* result_295;
struct tuple2$2charphsTypeph* __result217__;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_294,0,sizeof(struct tuple2$2charphsTypeph*));
        __result215__ = gComeFunResultObject = __result_obj__ = result_294;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result216__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    memset(&result_295,0,sizeof(struct tuple2$2charphsTypeph*));
    __result217__ = gComeFunResultObject = __result_obj__ = result_295;
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_298;
struct list_item$1tuple2$2charphsTypephph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj56;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj56=self->item;
            come_call_finalizer3(__dec_obj56,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key){
void* __result_obj__=(void*)0;
struct buffer* default_value_300;
unsigned int hash_301;
unsigned int it_302;
struct buffer* __result218__;
struct buffer* __result219__;
struct buffer* __result220__;
struct buffer* __result221__;
default_value_300 = (void*)0;
    memset(&default_value_300,0,sizeof(struct buffer*));
    hash_301=charp_get_hash_key(((char*)key))%self->size;
    it_302=hash_301;
    while((_Bool)1) {
        if(        self->item_existance[it_302]) {
            if(            charp_equals(self->keys[it_302],key)) {
                __result218__ = gComeFunResultObject = __result_obj__ = self->items[it_302];
                come_call_finalizer3(default_value_300,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result218__;
            }
            it_302++;
            if(            it_302>=self->size) {
                it_302=0;
            }
            else if(            it_302==hash_301) {
                __result219__ = gComeFunResultObject = __result_obj__ = default_value_300;
                come_call_finalizer3(default_value_300,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result219__;
            }
        }
        else {
            __result220__ = gComeFunResultObject = __result_obj__ = default_value_300;
            come_call_finalizer3(default_value_300,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result220__;
        }
    }
    __result221__ = gComeFunResultObject = __result_obj__ = default_value_300;
    come_call_finalizer3(default_value_300,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_320;
unsigned int it_321;
_Bool same_key_exist_338;
char* it2_341;
struct map$2charphbufferph* __result242__;
    if(    self->len*10>=self->size) {
        map$2charphbufferph_rehash(self);
    }
    hash_320=charp_get_hash_key(key)%self->size;
    it_321=hash_320;
    while((_Bool)1) {
        if(        self->item_existance[it_321]) {
            if(            charp_equals(self->keys[it_321],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_321]);
                    self->keys[it_321] = come_decrement_ref_count2(self->keys[it_321], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_321]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_321]);
                    self->keys[it_321]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_321],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_321]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_321]=item;
                }
                break;
            }
            it_321++;
            if(            it_321>=self->size) {
                it_321=0;
            }
            else if(            it_321==hash_320) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_321]=(_Bool)1;
            if(            1) {
                self->keys[it_321]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_321]=key;
            }
            if(            1) {
                self->items[it_321]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_321]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_338=(_Bool)0;
    for(    it2_341=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_341=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_341,key)) {
            same_key_exist_338=(_Bool)1;
        }
    }
    if(    !same_key_exist_338) {
        list$1charp_push_back(self->key_list,key);
    }
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void map$2charphbufferph_rehash(struct map$2charphbufferph* self){
int size_303;
void* __right_value261 = (void*)0;
char** keys_304;
void* __right_value262 = (void*)0;
struct buffer** items_305;
void* __right_value263 = (void*)0;
_Bool* item_existance_306;
int len_307;
char* it_310;
struct buffer* default_value_313;
void* __right_value264 = (void*)0;
struct buffer* it2_314;
unsigned int hash_317;
int n_318;
struct buffer* default_value_319;
void* __right_value265 = (void*)0;
default_value_313 = (void*)0;
default_value_319 = (void*)0;
    size_303=self->size*10;
    keys_304=(char**)come_increment_ref_count(((char**)(__right_value261=(char**)come_calloc(1, sizeof(char*)*(1*(size_303)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_305=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value262=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_303)), "/usr/local/include/comelang.h", 2558, "buffer*%"))));
    item_existance_306=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value263=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_303)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_307=0;
    for(    it_310=map$2charphbufferph_begin(self);    !map$2charphbufferph_end(self);    it_310=map$2charphbufferph_next(self)    ){
        memset(&default_value_313,0,sizeof(struct buffer*));
        it2_314=((struct buffer*)(__right_value264=map$2charphbufferph_at(self,it_310,default_value_313)));
        come_call_finalizer3(__right_value264,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_317=charp_get_hash_key(it_310)%size_303;
        n_318=hash_317;
        while((_Bool)1) {
            if(            item_existance_306[n_318]) {
                n_318++;
                if(                n_318>=size_303) {
                    n_318=0;
                }
                else if(                n_318==hash_317) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_306[n_318]=(_Bool)1;
                keys_304[n_318]=it_310;
                items_305[n_318]=((struct buffer*)(__right_value265=map$2charphbufferph_at(self,it_310,default_value_319)));
                come_call_finalizer3(__right_value265,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_307++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_304;
    self->items=items_305;
    self->item_existance=item_existance_306;
    self->size=size_303;
    self->len=len_307;
}

static char* map$2charphbufferph_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_308;
char* __result222__;
char* __result223__;
char* result_309;
char* __result224__;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_308,0,sizeof(char*));
        __result222__ = gComeFunResultObject = __result_obj__ = result_308;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result223__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    memset(&result_309,0,sizeof(char*));
    __result224__ = gComeFunResultObject = __result_obj__ = result_309;
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferph_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_311;
char* __result225__;
char* __result226__;
char* result_312;
char* __result227__;
result_311 = (void*)0;
result_312 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_311,0,sizeof(char*));
        __result225__ = gComeFunResultObject = __result_obj__ = result_311;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result226__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    memset(&result_312,0,sizeof(char*));
    __result227__ = gComeFunResultObject = __result_obj__ = result_312;
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_315;
unsigned int it_316;
struct buffer* __result228__;
struct buffer* __result229__;
struct buffer* __result230__;
struct buffer* __result231__;
    hash_315=charp_get_hash_key(((char*)key))%self->size;
    it_316=hash_315;
    while((_Bool)1) {
        if(        self->item_existance[it_316]) {
            if(            charp_equals(self->keys[it_316],key)) {
                __result228__ = gComeFunResultObject = __result_obj__ = self->items[it_316];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result228__;
            }
            it_316++;
            if(            it_316>=self->size) {
                it_316=0;
            }
            else if(            it_316==hash_315) {
                __result229__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
        }
        else {
            __result230__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
    }
    __result231__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_322;
struct list_item$1charp* it_323;
struct list$1charp* __result235__;
    it2_322=0;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        if(        charp_equals(it_323->item,item)) {
            list$1charp_delete(self,it2_322,it2_322+1);
            break;
        }
        it2_322++;
        it_323=it_323->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_324;
struct list$1charp* __result232__;
struct list_item$1charp* it_327;
int i_328;
struct list_item$1charp* prev_it_329;
struct list_item$1charp* it_330;
int i_331;
struct list_item$1charp* prev_it_332;
struct list_item$1charp* it_333;
struct list_item$1charp* head_prev_it_334;
struct list_item$1charp* tail_it_335;
int i_336;
struct list_item$1charp* prev_it_337;
struct list$1charp* __result234__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_324=tail;
        tail=head;
        head=tmp_324;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result232__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_327=self->head;
        i_328=0;
        while(it_327!=((void*)0)) {
            if(            i_328<tail) {
                prev_it_329=it_327;
                it_327=it_327->next;
                i_328++;
                come_call_finalizer3(prev_it_329,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_328==tail) {
                self->head=it_327;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_327=it_327->next;
                i_328++;
            }
        }
    }
    else if(    tail==self->len) {
        it_330=self->head;
        i_331=0;
        while(it_330!=((void*)0)) {
            if(            i_331==head) {
                self->tail=it_330->prev;
                self->tail->next=((void*)0);
            }
            if(            i_331>=head) {
                prev_it_332=it_330;
                it_330=it_330->next;
                i_331++;
                come_call_finalizer3(prev_it_332,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_330=it_330->next;
                i_331++;
            }
        }
    }
    else {
        it_333=self->head;
        head_prev_it_334=((void*)0);
        tail_it_335=((void*)0);
        i_336=0;
        while(it_333!=((void*)0)) {
            if(            i_336==head) {
                head_prev_it_334=it_333->prev;
            }
            if(            i_336==tail) {
                tail_it_335=it_333;
            }
            if(            i_336>=head&&i_336<tail) {
                prev_it_337=it_333;
                it_333=it_333->next;
                i_336++;
                come_call_finalizer3(prev_it_337,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_333=it_333->next;
                i_336++;
            }
        }
        if(        head_prev_it_334!=((void*)0)) {
            head_prev_it_334->next=tail_it_335;
        }
        if(        tail_it_335!=((void*)0)) {
            tail_it_335->prev=head_prev_it_334;
        }
    }
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_325;
struct list_item$1charp* prev_it_326;
struct list$1charp* __result233__;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_339;
char* __result236__;
char* __result237__;
char* result_340;
char* __result238__;
result_339 = (void*)0;
result_340 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_339,0,sizeof(char*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_339;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->it=self->head;
    if(    self->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_340,0,sizeof(char*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_340;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_342;
char* __result239__;
char* __result240__;
char* result_343;
char* __result241__;
result_342 = (void*)0;
result_343 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_342,0,sizeof(char*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_342;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_343,0,sizeof(char*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_343;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_344;
struct list$1tuple2$2charphsTypephph* o2_saved_345;
struct tuple2$2charphsTypeph* it_346;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* name_347=0;
struct sType* type_348=0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    !klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_344=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 101, "buffer"))));
        if(        klass->mParentClassName) {
            buffer_append_format(buf_344,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
        }
        else {
            buffer_append_format(buf_344,"struct %s\n{\n",klass->mName);
        }
        for(        o2_saved_345=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_346=list$1tuple2$2charphsTypephph_begin((o2_saved_345));        !list$1tuple2$2charphsTypephph_end((o2_saved_345));        it_346=list$1tuple2$2charphsTypephph_next((o2_saved_345))        ){
            multiple_assign_var2=it_346;
            name_347=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_348=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_348->mStatic=(_Bool)0;
            buffer_append_str(buf_344,"    ");
            buffer_append_str(buf_344,((char*)(__right_value268=make_define_var_no_solved(type_348,name_347,(_Bool)0,(_Bool)1,info))));
            __right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_344,";\n");
            name_347 = come_decrement_ref_count2(name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_345,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        klass->mAttribute==((void*)0)) {
            buffer_append_str(buf_344,"};\n");
        }
        else {
            buffer_append_format(buf_344,"} %s;\n",klass->mAttribute);
        }
        if(        string_operator_equals(klass->mDeclareSName,info->base_sname)) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value269=buffer_to_string(buf_344))));
            __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(buf_344,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_349;
struct sClass* klass_350;
int i_351;
void* __right_value270 = (void*)0;
_Bool result_352;
    type2_349=type->mNoSolvedGenericsType->v1;
    if(    type2_349&&is_contained_generics_types(type2_349,info)) {
        return (_Bool)1;
    }
    klass_350=type->mClass;
    if(    klass_350->mGenerics) {
        return (_Bool)1;
    }
    for(    i_351=0;    i_351<list$1sTypeph_length(type->mGenericsTypes);    i_351++    ){
        result_352=is_contained_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value270=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_351))), "14struct.c", 146, 1)),info);
        come_call_finalizer3(__right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_352) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_353;
struct sClass* klass_354;
int i_355;
void* __right_value271 = (void*)0;
_Bool result_356;
    type2_353=type->mNoSolvedGenericsType->v1;
    if(    type2_353&&is_contained_method_generics_types(type2_353,info)) {
        return (_Bool)1;
    }
    klass_354=type->mClass;
    if(    klass_354->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_355=0;    i_355<list$1sTypeph_length(type->mGenericsTypes);    i_355++    ){
        result_356=is_contained_method_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value271=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_355))), "14struct.c", 170, 2)),info);
        come_call_finalizer3(__right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_356) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value272 = (void*)0;
char* new_name_357;
void* __right_value273 = (void*)0;
struct sClass* generics_class_360;
_Bool __result247__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sClass* new_class_387;
int i_388;
struct list$1tuple2$2charphsTypephph* o2_saved_389;
struct tuple2$2charphsTypeph* it_390;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_391=0;
struct sType* type_392=0;
void* __right_value284 = (void*)0;
struct sType* new_type_393;
void* __right_value288 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* __dec_obj103;
void* __right_value332 = (void*)0;
struct sType* __dec_obj104;
void* __right_value333 = (void*)0;
_Bool __result279__;
    new_name_357=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2charphsClassph_find(info->classes,new_name_357)) {
        generics_class_360=((struct sClass*)(__right_value273=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        come_call_finalizer3(__right_value273,sClass_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_class_360==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result247__ = (_Bool)0;
            new_name_357 = come_decrement_ref_count2(new_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result247__;
        }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_357)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 193, "sClass")),new_name_357,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_387=((struct sClass*)(__right_value283=map$2charphsClassph_at(info->classes,((char*)(__right_value282=__builtin_string(new_name_357))),((void*)0))));
        __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value283,sClass_finalize, 0, 1, 0, 0, (void*)0);
        i_388=0;
        for(        o2_saved_389=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_360->mFields)),it_390=list$1tuple2$2charphsTypephph_begin((o2_saved_389));        !list$1tuple2$2charphsTypephph_end((o2_saved_389));        it_390=list$1tuple2$2charphsTypephph_next((o2_saved_389))        ){
            multiple_assign_var3=it_390;
            name_391=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_392=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_393=(struct sType*)come_increment_ref_count(solve_generics(type_392,generics_type,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_387->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 203, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_391)),(struct sType*)come_increment_ref_count(sType_clone(new_type_393)))));
            name_391 = come_decrement_ref_count2(name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_393,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_389,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj103=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_387;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_387,info);
    }
    else {
        if(        type->mNoSolvedGenericsType->v1==((void*)0)) {
            __dec_obj104=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value333=map$2charphsClassphp_operator_load_element(info->classes,new_name_357)));
        come_call_finalizer3(__right_value333,sClass_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_reset(type->mGenericsTypes);
    }
    __result279__ = (_Bool)1;
    new_name_357 = come_decrement_ref_count2(new_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result279__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_358;
int it_359;
    hash_358=charp_get_hash_key(((char*)key))%self->size;
    it_359=hash_358;
    while((_Bool)1) {
        if(        self->item_existance[it_359]) {
            if(            charp_equals(self->keys[it_359],key)) {
                return (_Bool)1;
            }
            it_359++;
            if(            it_359>=self->size) {
                it_359=0;
            }
            else if(            it_359==hash_358) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_361;
unsigned int hash_362;
unsigned int it_363;
struct sClass* __result243__;
struct sClass* __result244__;
struct sClass* __result245__;
struct sClass* __result246__;
default_value_361 = (void*)0;
    memset(&default_value_361,0,sizeof(struct sClass*));
    hash_362=charp_get_hash_key(((char*)key))%self->size;
    it_363=hash_362;
    while((_Bool)1) {
        if(        self->item_existance[it_363]) {
            if(            charp_equals(self->keys[it_363],key)) {
                __result243__ = gComeFunResultObject = __result_obj__ = self->items[it_363];
                come_call_finalizer3(default_value_361,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result243__;
            }
            it_363++;
            if(            it_363>=self->size) {
                it_363=0;
            }
            else if(            it_363==hash_362) {
                __result244__ = gComeFunResultObject = __result_obj__ = default_value_361;
                come_call_finalizer3(default_value_361,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result244__;
            }
        }
        else {
            __result245__ = gComeFunResultObject = __result_obj__ = default_value_361;
            come_call_finalizer3(default_value_361,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result245__;
        }
    }
    __result246__ = gComeFunResultObject = __result_obj__ = default_value_361;
    come_call_finalizer3(default_value_361,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj59;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
char* __dec_obj63;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj59=self->mName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj60=self->mFields;
            come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj61=self->mDeclareSName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj62=self->mParentClassName;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_364;
struct list_item$1tuple2$2charphsTypephph* prev_it_365;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        come_call_finalizer3(prev_it_365,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_383;
unsigned int it_384;
_Bool same_key_exist_385;
char* it2_386;
struct map$2charphsClassph* __result258__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_383=charp_get_hash_key(key)%self->size;
    it_384=hash_383;
    while((_Bool)1) {
        if(        self->item_existance[it_384]) {
            if(            charp_equals(self->keys[it_384],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_384]);
                    self->keys[it_384] = come_decrement_ref_count2(self->keys[it_384], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_384]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_384]);
                    self->keys[it_384]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_384],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_384]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_384]=item;
                }
                break;
            }
            it_384++;
            if(            it_384>=self->size) {
                it_384=0;
            }
            else if(            it_384==hash_383) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_384]=(_Bool)1;
            if(            1) {
                self->keys[it_384]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_384]=key;
            }
            if(            1) {
                self->items[it_384]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_384]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_385=(_Bool)0;
    for(    it2_386=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_386=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_386,key)) {
            same_key_exist_385=(_Bool)1;
        }
    }
    if(    !same_key_exist_385) {
        list$1charp_push_back(self->key_list,key);
    }
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_366;
void* __right_value274 = (void*)0;
char** keys_367;
void* __right_value275 = (void*)0;
struct sClass** items_368;
void* __right_value276 = (void*)0;
_Bool* item_existance_369;
int len_370;
char* it_373;
struct sClass* default_value_376;
void* __right_value277 = (void*)0;
struct sClass* it2_377;
unsigned int hash_380;
int n_381;
struct sClass* default_value_382;
void* __right_value278 = (void*)0;
default_value_376 = (void*)0;
default_value_382 = (void*)0;
    size_366=self->size*10;
    keys_367=(char**)come_increment_ref_count(((char**)(__right_value274=(char**)come_calloc(1, sizeof(char*)*(1*(size_366)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_368=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value275=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_366)), "/usr/local/include/comelang.h", 2558, "sClass*%"))));
    item_existance_369=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value276=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_366)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_370=0;
    for(    it_373=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_373=map$2charphsClassph_next(self)    ){
        memset(&default_value_376,0,sizeof(struct sClass*));
        it2_377=((struct sClass*)(__right_value277=map$2charphsClassph_at(self,it_373,default_value_376)));
        come_call_finalizer3(__right_value277,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_380=charp_get_hash_key(it_373)%size_366;
        n_381=hash_380;
        while((_Bool)1) {
            if(            item_existance_369[n_381]) {
                n_381++;
                if(                n_381>=size_366) {
                    n_381=0;
                }
                else if(                n_381==hash_380) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_369[n_381]=(_Bool)1;
                keys_367[n_381]=it_373;
                items_368[n_381]=((struct sClass*)(__right_value278=map$2charphsClassph_at(self,it_373,default_value_382)));
                come_call_finalizer3(__right_value278,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_370++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_367;
    self->items=items_368;
    self->item_existance=item_existance_369;
    self->size=size_366;
    self->len=len_370;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_371;
char* __result248__;
char* __result249__;
char* result_372;
char* __result250__;
result_371 = (void*)0;
result_372 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_371,0,sizeof(char*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_371;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_372,0,sizeof(char*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_372;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_374;
char* __result251__;
char* __result252__;
char* result_375;
char* __result253__;
result_374 = (void*)0;
result_375 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_374,0,sizeof(char*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_374;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_375,0,sizeof(char*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_375;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_378;
unsigned int it_379;
struct sClass* __result254__;
struct sClass* __result255__;
struct sClass* __result256__;
struct sClass* __result257__;
    hash_378=charp_get_hash_key(((char*)key))%self->size;
    it_379=hash_378;
    while((_Bool)1) {
        if(        self->item_existance[it_379]) {
            if(            charp_equals(self->keys[it_379],key)) {
                __result254__ = gComeFunResultObject = __result_obj__ = self->items[it_379];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
            it_379++;
            if(            it_379>=self->size) {
                it_379=0;
            }
            else if(            it_379==hash_378) {
                __result255__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
        }
        else {
            __result256__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result256__;
        }
    }
    __result257__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_394;
struct tuple2$2charphsTypeph* __dec_obj64;
void* __right_value286 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_395;
struct tuple2$2charphsTypeph* __dec_obj67;
void* __right_value287 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_396;
struct tuple2$2charphsTypeph* __dec_obj70;
struct list$1tuple2$2charphsTypephph* __result259__;
    if(    self->len==0) {
        litem_394=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value285=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsTypephph"))));
        litem_394->prev=((void*)0);
        litem_394->next=((void*)0);
        __dec_obj64=litem_394->item;
        litem_394->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_394;
        self->head=litem_394;
    }
    else if(    self->len==1) {
        litem_395=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value286=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsTypephph"))));
        litem_395->prev=self->head;
        litem_395->next=((void*)0);
        __dec_obj67=litem_395->item;
        litem_395->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_395;
        self->head->next=litem_395;
    }
    else {
        litem_396=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value287=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsTypephph"))));
        litem_396->prev=self->tail;
        litem_396->next=((void*)0);
        __dec_obj70=litem_396->item;
        litem_396->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_396;
        self->tail=litem_396;
    }
    self->len++;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result260__;
void* __right_value289 = (void*)0;
struct sType* result_397;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj75;
void* __right_value293 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value294 = (void*)0;
struct tuple1$1sTypeph* __dec_obj77;
void* __right_value295 = (void*)0;
char* __dec_obj78;
void* __right_value296 = (void*)0;
char* __dec_obj79;
void* __right_value303 = (void*)0;
struct list$1sTypeph* __dec_obj83;
void* __right_value311 = (void*)0;
struct list$1sNodeph* __dec_obj87;
void* __right_value312 = (void*)0;
struct list$1sTypeph* __dec_obj88;
void* __right_value319 = (void*)0;
struct list$1charph* __dec_obj92;
void* __right_value320 = (void*)0;
struct tuple1$1sTypeph* __dec_obj93;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj94;
void* __right_value322 = (void*)0;
struct tuple1$1sTypeph* __dec_obj95;
void* __right_value323 = (void*)0;
struct sNode* __dec_obj96;
void* __right_value324 = (void*)0;
char* __dec_obj97;
void* __right_value325 = (void*)0;
char* __dec_obj98;
void* __right_value326 = (void*)0;
char* __dec_obj99;
void* __right_value327 = (void*)0;
char* __dec_obj100;
struct sType* __result276__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_397=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_397->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj75=result_397->mNoSolvedGenericsType;
        result_397->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj75,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj76=result_397->mOriginalLoadVarType;
        result_397->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj77=result_397->mRefferenceOriginalType;
        result_397->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj78=result_397->mInterfaceName;
        result_397->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj79=result_397->mGenericsName;
        result_397->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj83=result_397->mGenericsTypes;
        result_397->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj83,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj87=result_397->mArrayNum;
        result_397->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj87,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_397->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj88=result_397->mParamTypes;
        result_397->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj88,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj92=result_397->mParamNames;
        result_397->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj93=result_397->mResultType;
        result_397->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj93,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_397->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj94=result_397->mAlignas;
        result_397->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj95=result_397->mChannelType;
        result_397->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj95,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_397->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_397->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_397->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_397->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_397->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_397->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_397->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_397->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_397->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_397->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_397->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_397->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_397->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_397->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_397->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_397->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_397->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_397->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_397->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_397->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_397->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_397->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_397->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_397->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_397->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj96=result_397->mSizeNum;
        result_397->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_397->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj97=result_397->mOriginalTypeName;
        result_397->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_397->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_397->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_397->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_397->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_397->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_397->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_397->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_397->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj98=result_397->mAsmName;
        result_397->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_397->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_397->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_397->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_397->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_397->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_397->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj99=result_397->mTupleName;
        result_397->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj100=result_397->mAttribute;
        result_397->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_397->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_397;
    come_call_finalizer3(result_397,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result261__;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* result_398;
void* __right_value291 = (void*)0;
struct sType* __dec_obj73;
struct tuple1$1sTypeph* __result262__;
    if(    self==(void*)0) {
        __result261__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_398=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj73=result_398->v1;
        result_398->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_398;
    come_call_finalizer3(result_398,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result263__;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1sTypeph* result_399;
struct list_item$1sTypeph* it_400;
void* __right_value302 = (void*)0;
struct list$1sTypeph* __result266__;
    if(    self==((void*)0)) {
        __result263__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_399=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_400=self->head;
    while(it_400!=((void*)0)) {
        list$1sTypeph_add(result_399,(struct sType*)come_increment_ref_count(sType_clone(it_400->item)));
        it_400=it_400->next;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_399;
    come_call_finalizer3(result_399,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result264__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list_item$1sTypeph* litem_401;
struct sType* __dec_obj80;
void* __right_value300 = (void*)0;
struct list_item$1sTypeph* litem_402;
struct sType* __dec_obj81;
void* __right_value301 = (void*)0;
struct list_item$1sTypeph* litem_403;
struct sType* __dec_obj82;
struct list$1sTypeph* __result265__;
    if(    self->len==0) {
        litem_401=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value299=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_401->prev=((void*)0);
        litem_401->next=((void*)0);
        __dec_obj80=litem_401->item;
        litem_401->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_401;
        self->head=litem_401;
    }
    else if(    self->len==1) {
        litem_402=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value300=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_402->prev=self->head;
        litem_402->next=((void*)0);
        __dec_obj81=litem_402->item;
        litem_402->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_402;
        self->head->next=litem_402;
    }
    else {
        litem_403=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value301=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_403->prev=self->tail;
        litem_403->next=((void*)0);
        __dec_obj82=litem_403->item;
        litem_403->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_403;
        self->tail=litem_403;
    }
    self->len++;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result267__;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1sNodeph* result_404;
struct list_item$1sNodeph* it_405;
void* __right_value310 = (void*)0;
struct list$1sNodeph* __result272__;
    if(    self==((void*)0)) {
        __result267__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    result_404=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_405=self->head;
    while(it_405!=((void*)0)) {
        list$1sNodeph_add(result_404,(struct sNode*)come_increment_ref_count(sNode_clone(it_405->item)));
        it_405=it_405->next;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_404;
    come_call_finalizer3(result_404,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result268__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
struct list_item$1sNodeph* litem_406;
struct sNode* __dec_obj84;
void* __right_value307 = (void*)0;
struct list_item$1sNodeph* litem_407;
struct sNode* __dec_obj85;
void* __right_value308 = (void*)0;
struct list_item$1sNodeph* litem_408;
struct sNode* __dec_obj86;
struct list$1sNodeph* __result269__;
    if(    self->len==0) {
        litem_406=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value306=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_406->prev=((void*)0);
        litem_406->next=((void*)0);
        __dec_obj84=litem_406->item;
        litem_406->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_406;
        self->head=litem_406;
    }
    else if(    self->len==1) {
        litem_407=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value307=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_407->prev=self->head;
        litem_407->next=((void*)0);
        __dec_obj85=litem_407->item;
        litem_407->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_407;
        self->head->next=litem_407;
    }
    else {
        litem_408=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value308=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_408->prev=self->tail;
        litem_408->next=((void*)0);
        __dec_obj86=litem_408->item;
        litem_408->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_408;
        self->tail=litem_408;
    }
    self->len++;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result270__;
void* __right_value309 = (void*)0;
struct sNode* result_409;
struct sNode* __result271__;
    if(    self==(void*)0) {
        __result270__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_409=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_409->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_409->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_409->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_409->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_409->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_409->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_409->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_409->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_409->kind=self->kind;
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_409;
    if(result_409) { result_409 = come_decrement_ref_count2(result_409, ((struct sNode*)result_409)->finalize, ((struct sNode*)result_409)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result273__;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* result_410;
struct list_item$1charph* it_411;
void* __right_value318 = (void*)0;
struct list$1charph* __result275__;
    if(    self==((void*)0)) {
        __result273__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_410=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_411=self->head;
    while(it_411!=((void*)0)) {
        list$1charph_add(result_410,(char*)come_increment_ref_count(string_clone(it_411->item)));
        it_411=it_411->next;
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_410;
    come_call_finalizer3(result_410,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
struct list_item$1charph* litem_412;
char* __dec_obj89;
void* __right_value316 = (void*)0;
struct list_item$1charph* litem_413;
char* __dec_obj90;
void* __right_value317 = (void*)0;
struct list_item$1charph* litem_414;
char* __dec_obj91;
struct list$1charph* __result274__;
    if(    self->len==0) {
        litem_412=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value315=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_412->prev=((void*)0);
        litem_412->next=((void*)0);
        __dec_obj89=litem_412->item;
        litem_412->item=(char*)come_increment_ref_count(item);
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_412;
        self->head=litem_412;
    }
    else if(    self->len==1) {
        litem_413=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value316=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_413->prev=self->head;
        litem_413->next=((void*)0);
        __dec_obj90=litem_413->item;
        litem_413->item=(char*)come_increment_ref_count(item);
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_413;
        self->head->next=litem_413;
    }
    else {
        litem_414=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value317=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_414->prev=self->tail;
        litem_414->next=((void*)0);
        __dec_obj91=litem_414->item;
        litem_414->item=(char*)come_increment_ref_count(item);
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_414;
        self->tail=litem_414;
    }
    self->len++;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj101;
struct sType* __dec_obj102;
struct tuple2$2charphsTypeph* __result277__;
    __dec_obj101=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj102=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_415;
struct list_item$1sTypeph* prev_it_416;
struct list$1sTypeph* __result278__;
    it_415=self->head;
    while(it_415!=((void*)0)) {
        prev_it_416=it_415;
        it_415=it_415->next;
        come_call_finalizer3(prev_it_416,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* __dec_obj106;
void* __right_value351 = (void*)0;
struct sClass* __dec_obj125;
struct sStructNode* __result288__;
    ((struct sNodeBase*)(__right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value334,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj125=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj125,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value352=__builtin_string("sStructNode")));
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_424;
void* __right_value353 = (void*)0;
char* name_425;
_Bool __result290__;
    klass_424=(struct sClass*)come_increment_ref_count(self->mClass);
    name_425=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_424,info);
    __result290__ = (_Bool)1;
    come_call_finalizer3(klass_424,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_425 = come_decrement_ref_count2(name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result290__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj105;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj105=self->sname;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result280__;
void* __right_value336 = (void*)0;
struct sClass* result_417;
void* __right_value337 = (void*)0;
char* __dec_obj107;
void* __right_value347 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj121;
void* __right_value348 = (void*)0;
char* __dec_obj122;
void* __right_value349 = (void*)0;
char* __dec_obj123;
void* __right_value350 = (void*)0;
char* __dec_obj124;
struct sClass* __result287__;
    if(    self==(void*)0) {
        __result280__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    result_417=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"));
    if(    self!=((void*)0)) {
        result_417->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_417->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_417->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_417->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_417->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_417->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_417->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_417->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj107=result_417->mName;
        result_417->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_417->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_417->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj121=result_417->mFields;
        result_417->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(self->mFields));
        come_call_finalizer3(__dec_obj121,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_417->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_417->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj122=result_417->mDeclareSName;
        result_417->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_417->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj123=result_417->mParentClassName;
        result_417->mParentClassName=(char*)come_increment_ref_count(string_clone(self->mParentClassName));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj124=result_417->mAttribute;
        result_417->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_417;
    come_call_finalizer3(result_417,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result281__;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_418;
struct list_item$1tuple2$2charphsTypephph* it_419;
void* __right_value346 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result286__;
    if(    self==((void*)0)) {
        __result281__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_418=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple2$2charphsTypephph"))));
    it_419=self->head;
    while(it_419!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_418,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_419->item)));
        it_419=it_419->next;
    }
    __result286__ = gComeFunResultObject = __result_obj__ = result_418;
    come_call_finalizer3(result_418,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result282__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_420;
struct tuple2$2charphsTypeph* __dec_obj108;
void* __right_value341 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_421;
struct tuple2$2charphsTypeph* __dec_obj111;
void* __right_value342 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_422;
struct tuple2$2charphsTypeph* __dec_obj114;
struct list$1tuple2$2charphsTypephph* __result283__;
    if(    self->len==0) {
        litem_420=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value340=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2charphsTypephph"))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        __dec_obj108=litem_420->item;
        litem_420->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value341=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2charphsTypephph"))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        __dec_obj111=litem_421->item;
        litem_421->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value342=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2charphsTypephph"))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        __dec_obj114=litem_422->item;
        litem_422->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj115;
struct sType* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result284__;
void* __right_value343 = (void*)0;
struct tuple2$2charphsTypeph* result_423;
void* __right_value344 = (void*)0;
char* __dec_obj117;
void* __right_value345 = (void*)0;
struct sType* __dec_obj118;
struct tuple2$2charphsTypeph* __result285__;
    if(    self==(void*)0) {
        __result284__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    result_423=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj117=result_423->v1;
        result_423->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj118=result_423->v2;
        result_423->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result285__ = gComeFunResultObject = __result_obj__ = result_423;
    come_call_finalizer3(result_423,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj119;
struct sType* __dec_obj120;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj119=self->v1;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj120=self->v2;
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* __dec_obj129;
void* __right_value356 = (void*)0;
struct sClass* __dec_obj130;
struct sStructNobodyNode* __result291__;
    ((struct sNodeBase*)(__right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj129=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj130,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sStructNobodyNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
char* name_426;
struct sClass* klass_427;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
_Bool __result293__;
    name_426=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_427=self->mClass;
    map$2charphbufferph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(name_426),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value359=xsprintf("struct %s;\n",name_426))))));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result293__ = (_Bool)1;
    name_426 = come_decrement_ref_count2(name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result293__;
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
struct sNothingNode* __result294__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
char* __result295__;
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value362=__builtin_string("sNothingNode")));
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value367 = (void*)0;
struct sNode* __result298__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 314, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value364=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 314, "sNothingNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result298__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value367=_inf_value1));
    come_call_finalizer3(__right_value364,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value367) { __right_value367 = come_decrement_ref_count2(__right_value367, ((struct sNode*)__right_value367)->finalize, ((struct sNode*)__right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result298__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* __dec_obj137;
void* __right_value370 = (void*)0;
struct sClass* __dec_obj138;
struct list$1sNodeph* __dec_obj139;
struct sClassNode* __result299__;
    ((struct sNodeBase*)(__right_value368=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value368,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj138,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj139=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj139,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value371=__builtin_string("sClassNode")));
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value372 = (void*)0;
struct sClass* klass_429;
void* __right_value373 = (void*)0;
char* name_430;
void* __right_value374 = (void*)0;
_Bool _if_conditional2;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
_Bool _elif_conditional1;
void* __right_value377 = (void*)0;
struct sClass* klass2_431;
void* __right_value378 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj144;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* type_432;
void* __right_value381 = (void*)0;
struct sType* override__433;
void* __right_value387 = (void*)0;
struct list$1sNodeph* o2_saved_455;
struct sNode* it_458;
_Bool Value_461;
_Bool __result318__;
_Bool __result319__;
    klass_429=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_430=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value374=map$2charphsClassph_at(info->classes,name_430,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value374,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_430),(struct sClass*)come_increment_ref_count(sClass_clone(klass_429)));
    }
    else if(    (_elif_conditional1=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value376=map$2charphsClassph_at(info->classes,name_430,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_429->mFields)>0)),    come_call_finalizer3(__right_value376,sClass_finalize, 0, 1, 0, 0, (void*)0),
    _elif_conditional1) {
        klass2_431=((struct sClass*)(__right_value377=map$2charphsClassph_at(info->classes,name_430,((void*)0))));
        come_call_finalizer3(__right_value377,sClass_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj144=klass2_431->mFields;
        klass2_431->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_429->mFields));
        come_call_finalizer3(__dec_obj144,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_432=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 352, "sType")),name_430,(_Bool)0,info));
    override__433=((struct sType*)(__right_value381=map$2charphsTypeph_at(info->types,name_430,((void*)0))));
    come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    override__433) {
        if(        override__433->mTypedef) {
            type_432->mTypedef=(_Bool)1;
        }
    }
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_430),(struct sType*)come_increment_ref_count(sType_clone(type_432)));
    output_struct(klass_429,info);
    for(    o2_saved_455=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_458=list$1sNodeph_begin((o2_saved_455));    !list$1sNodeph_end((o2_saved_455));    it_458=list$1sNodeph_next((o2_saved_455))    ){
        Value_461=node_compile(it_458,info);
        if(        !Value_461) {
            __result318__ = (_Bool)0;
            come_call_finalizer3(o2_saved_455,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_429,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_430 = come_decrement_ref_count2(name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result318__;
        }
        else {
        }
    }
    come_call_finalizer3(o2_saved_455,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_429,info);
    __result319__ = (_Bool)1;
    come_call_finalizer3(klass_429,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_430 = come_decrement_ref_count2(name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result319__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_434;
unsigned int it_435;
struct sType* __result301__;
struct sType* __result302__;
struct sType* __result303__;
struct sType* __result304__;
    hash_434=charp_get_hash_key(((char*)key))%self->size;
    it_435=hash_434;
    while((_Bool)1) {
        if(        self->item_existance[it_435]) {
            if(            charp_equals(self->keys[it_435],key)) {
                __result301__ = gComeFunResultObject = __result_obj__ = self->items[it_435];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result301__;
            }
            it_435++;
            if(            it_435>=self->size) {
                it_435=0;
            }
            else if(            it_435==hash_434) {
                __result302__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result302__;
            }
        }
        else {
            __result303__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result303__;
        }
    }
    __result304__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_451;
unsigned int it_452;
_Bool same_key_exist_453;
char* it2_454;
struct map$2charphsTypeph* __result311__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_451=charp_get_hash_key(key)%self->size;
    it_452=hash_451;
    while((_Bool)1) {
        if(        self->item_existance[it_452]) {
            if(            charp_equals(self->keys[it_452],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_452]);
                    self->keys[it_452] = come_decrement_ref_count2(self->keys[it_452], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_452]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_452]);
                    self->keys[it_452]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_452],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_452]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_452]=item;
                }
                break;
            }
            it_452++;
            if(            it_452>=self->size) {
                it_452=0;
            }
            else if(            it_452==hash_451) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_452]=(_Bool)1;
            if(            1) {
                self->keys[it_452]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_452]=key;
            }
            if(            1) {
                self->items[it_452]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_452]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_453=(_Bool)0;
    for(    it2_454=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_454=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_454,key)) {
            same_key_exist_453=(_Bool)1;
        }
    }
    if(    !same_key_exist_453) {
        list$1charp_push_back(self->key_list,key);
    }
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_436;
void* __right_value382 = (void*)0;
char** keys_437;
void* __right_value383 = (void*)0;
struct sType** items_438;
void* __right_value384 = (void*)0;
_Bool* item_existance_439;
int len_440;
char* it_443;
struct sType* default_value_446;
void* __right_value385 = (void*)0;
struct sType* it2_447;
unsigned int hash_448;
int n_449;
struct sType* default_value_450;
void* __right_value386 = (void*)0;
default_value_446 = (void*)0;
default_value_450 = (void*)0;
    size_436=self->size*10;
    keys_437=(char**)come_increment_ref_count(((char**)(__right_value382=(char**)come_calloc(1, sizeof(char*)*(1*(size_436)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_438=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value383=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_436)), "/usr/local/include/comelang.h", 2558, "sType*%"))));
    item_existance_439=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value384=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_436)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_440=0;
    for(    it_443=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_443=map$2charphsTypeph_next(self)    ){
        memset(&default_value_446,0,sizeof(struct sType*));
        it2_447=((struct sType*)(__right_value385=map$2charphsTypeph_at(self,it_443,default_value_446)));
        come_call_finalizer3(__right_value385,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_448=charp_get_hash_key(it_443)%size_436;
        n_449=hash_448;
        while((_Bool)1) {
            if(            item_existance_439[n_449]) {
                n_449++;
                if(                n_449>=size_436) {
                    n_449=0;
                }
                else if(                n_449==hash_448) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_439[n_449]=(_Bool)1;
                keys_437[n_449]=it_443;
                items_438[n_449]=((struct sType*)(__right_value386=map$2charphsTypeph_at(self,it_443,default_value_450)));
                come_call_finalizer3(__right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_440++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_437;
    self->items=items_438;
    self->item_existance=item_existance_439;
    self->size=size_436;
    self->len=len_440;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_441;
char* __result305__;
char* __result306__;
char* result_442;
char* __result307__;
result_441 = (void*)0;
result_442 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_441,0,sizeof(char*));
        __result305__ = gComeFunResultObject = __result_obj__ = result_441;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result306__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    memset(&result_442,0,sizeof(char*));
    __result307__ = gComeFunResultObject = __result_obj__ = result_442;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_444;
char* __result308__;
char* __result309__;
char* result_445;
char* __result310__;
result_444 = (void*)0;
result_445 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_444,0,sizeof(char*));
        __result308__ = gComeFunResultObject = __result_obj__ = result_444;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result309__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    memset(&result_445,0,sizeof(char*));
    __result310__ = gComeFunResultObject = __result_obj__ = result_445;
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_456;
struct sNode* __result312__;
struct sNode* __result313__;
struct sNode* result_457;
struct sNode* __result314__;
result_456 = (void*)0;
result_457 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_456,0,sizeof(struct sNode*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_456;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->it=self->head;
    if(    self->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_457,0,sizeof(struct sNode*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_457;
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_459;
struct sNode* __result315__;
struct sNode* __result316__;
struct sNode* result_460;
struct sNode* __result317__;
result_459 = (void*)0;
result_460 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_459,0,sizeof(struct sNode*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_459;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_460,0,sizeof(struct sNode*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_460;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_462;
void* __right_value388 = (void*)0;
_Bool _if_conditional3;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* type_463;
void* __right_value395 = (void*)0;
struct sType* override__464;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* type_465;
void* __right_value401 = (void*)0;
struct sType* override__466;
void* __right_value402 = (void*)0;
struct sClass* parent_class_467;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* parent_class_name_468;
void* __right_value405 = (void*)0;
struct sNode* __result320__;
_Bool multiple_declare_469;
char* p_470;
int sline_471;
void* __right_value406 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_472=0;
char* name_473=0;
_Bool err_474=0;
void* __right_value407 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* base_type_475=0;
char* name_476=0;
_Bool err_477=0;
void* __right_value408 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* type2_478=0;
char* name2_479=0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* type2_480=0;
char* name2_481=0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_482=0;
char* name_483=0;
_Bool err_484=0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* struct_attribute2_485;
void* __right_value418 = (void*)0;
char* __dec_obj149;
void* __right_value419 = (void*)0;
char* __dec_obj150;
char* __dec_obj151;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj152;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value429 = (void*)0;
struct sNode* node_486;
_Bool Value_488;
struct sNode* __result323__;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value434 = (void*)0;
struct sNode* __result326__;
klass_462 = (void*)0;
    if(    (_if_conditional3=(((struct sClass*)(__right_value388=map$2charphsClassph_at(info->classes,type_name,((void*)0))))==((void*)0))),    come_call_finalizer3(__right_value388,sClass_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional3) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 379, "sClass")),((char*)(__right_value391=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_463=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 380, "sType")),type_name,(_Bool)0,info));
        override__464=((struct sType*)(__right_value395=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value395,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__464) {
            if(            override__464->mTypedef) {
                type_463->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_463)));
        klass_462=((struct sClass*)(__right_value397=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value397,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(type_463,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_462=((struct sClass*)(__right_value398=map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__right_value398,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        type_465=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 393, "sType")),type_name,(_Bool)0,info));
        override__466=((struct sType*)(__right_value401=map$2charphsTypeph_at(info->types,type_name,((void*)0))));
        come_call_finalizer3(__right_value401,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        override__466) {
            if(            override__466->mTypedef) {
                type_465->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_465)));
        come_call_finalizer3(type_465,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_467=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value403=parse_word(info)));
        __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_468=(char*)come_increment_ref_count(parse_word(info));
        parent_class_467=((struct sClass*)(__right_value405=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_468)));
        come_call_finalizer3(__right_value405,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(        parent_class_467==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_468);
            __result320__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_468 = come_decrement_ref_count2(parent_class_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result320__;
        }
        parent_class_name_468 = come_decrement_ref_count2(parent_class_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_469=(_Bool)0;
        {
            p_470=info->p;
            sline_471=info->sline;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value406=backtrace_parse_type((_Bool)1,info)));
            type_472=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_473=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_474=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value406,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_474&&*info->p==44) {
                multiple_declare_469=(_Bool)1;
            }
            info->p=p_470;
            info->sline=sline_471;
            come_call_finalizer3(type_472,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_473 = come_decrement_ref_count2(name_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        multiple_declare_469) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value407=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_475=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_476=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_477=multiple_assign_var5->v3;
            come_call_finalizer3(__right_value407,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value408=parse_variable_name((struct sType*)come_increment_ref_count(base_type_475),(_Bool)1,info)));
            type2_478=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_479=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer3(__right_value408,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(klass_462->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 450, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_479),(struct sType*)come_increment_ref_count(type2_478))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value411=parse_variable_name((struct sType*)come_increment_ref_count(base_type_475),(_Bool)0,info)));
                type2_480=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_481=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(__right_value411,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(klass_462->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 458, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_481),(struct sType*)come_increment_ref_count(type2_480))));
                come_call_finalizer3(type2_480,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_481 = come_decrement_ref_count2(name2_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_476 = come_decrement_ref_count2(name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_478,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_479 = come_decrement_ref_count2(name2_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value414=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_482=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_483=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_484=multiple_assign_var8->v3;
            come_call_finalizer3(__right_value414,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_484) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2charphsTypephph_push_back(klass_462->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 469, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_483),(struct sType*)come_increment_ref_count(type2_482))));
            come_call_finalizer3(type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_483 = come_decrement_ref_count2(name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_485=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_467) {
        __dec_obj149=klass_462->mParentClassName;
        klass_462->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_467->mName));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_462->mName),(struct sClass*)come_increment_ref_count(sClass_clone(klass_462)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_485,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj150=klass_462->mAttribute;
        klass_462->mAttribute=(char*)come_increment_ref_count(struct_attribute2_485);
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_485,"")) {
        __dec_obj151=klass_462->mAttribute;
        klass_462->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj152=klass_462->mAttribute;
        klass_462->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute,((char*)(__right_value420=charp_operator_add(" ",struct_attribute2_485)))));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 505, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value424=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 505, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_462,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_486=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value424,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_488=node_compile(node_486,info);
    if(    !Value_488) {
        __result323__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        struct_attribute2_485 = come_decrement_ref_count2(struct_attribute2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_486) { node_486 = come_decrement_ref_count2(node_486, ((struct sNode*)node_486)->finalize, ((struct sNode*)node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 511, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value431=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 511, "sNothingNode")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result326__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value434=_inf_value3));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    struct_attribute2_485 = come_decrement_ref_count2(struct_attribute2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(node_486) { node_486 = come_decrement_ref_count2(node_486, ((struct sNode*)node_486)->finalize, ((struct sNode*)node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value431,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value434) { __right_value434 = come_decrement_ref_count2(__right_value434, ((struct sNode*)__right_value434)->finalize, ((struct sNode*)__right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
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

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj147;
char* __dec_obj148;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj147=self->v1;
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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

char* parse_struct_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct buffer* result_490;
char* head_491;
char* tail_492;
void* __right_value437 = (void*)0;
char* __result327__;
    parse_sharp_v5(info);
    result_490=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 517, "buffer"))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_491=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_492=info->p;
            buffer_append(result_490,head_491,tail_492-head_491);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result327__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value437=buffer_to_string(result_490)));
    come_call_finalizer3(result_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_493;
void* __right_value438 = (void*)0;
char* struct_attribute_494;
void* __right_value439 = (void*)0;
char* type_name_495;
struct sClass* struct_class_496;
void* __right_value440 = (void*)0;
_Bool _if_conditional4;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* type_497;
void* __right_value446 = (void*)0;
struct sType* override__498;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* type_499;
void* __right_value450 = (void*)0;
struct sType* override__500;
char* source_tail_501;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct buffer* header_502;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value461 = (void*)0;
struct sNode* __result330__;
void* __right_value462 = (void*)0;
char* T_506;
void* __right_value463 = (void*)0;
struct sClass* generics_class_507;
void* __right_value464 = (void*)0;
_Bool _if_conditional5;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sClass* __dec_obj167;
void* __right_value467 = (void*)0;
_Bool _if_conditional6;
void* __right_value468 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type2_508=0;
char* name_509=0;
_Bool err_510=0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
char* name2_511;
void* __right_value472 = (void*)0;
struct sType* type3_512;
_Bool no_comma_513;
void* __right_value473 = (void*)0;
struct sNode* node_514;
struct sNode* __dec_obj168;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* source_tail_515;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct buffer* header_516;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value486 = (void*)0;
struct sNode* __result334__;
struct sClass* struct_class_518;
void* __right_value487 = (void*)0;
_Bool _if_conditional7;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* type_519;
void* __right_value492 = (void*)0;
struct sType* override__520;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* type_521;
void* __right_value496 = (void*)0;
struct sType* override__522;
void* __right_value497 = (void*)0;
struct sClass* parent_class_523;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
char* parent_class_name_524;
void* __right_value500 = (void*)0;
struct sNode* __result335__;
_Bool multiple_declare_525;
char* p_526;
int sline_527;
void* __right_value501 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_528=0;
char* name_529=0;
_Bool err_530=0;
void* __right_value502 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* base_type_531=0;
char* name_532=0;
_Bool err_533=0;
void* __right_value503 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var12 = (void*)0;
struct sType* type2_534=0;
char* name2_535=0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13 = (void*)0;
struct sType* type2_536=0;
char* name2_537=0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type2_538=0;
char* name_539=0;
_Bool err_540=0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* struct_attribute2_541;
void* __right_value513 = (void*)0;
struct sClass* klass2_542;
char* source_tail_543;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct buffer* header_544;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj173;
void* __right_value518 = (void*)0;
char* __dec_obj174;
char* __dec_obj175;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
char* __dec_obj176;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value528 = (void*)0;
struct sNode* __result338__;
char* source_head_546;
void* __right_value529 = (void*)0;
char* type_name_547;
struct sClass* parent_class_548;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* parent_class_name_549;
void* __right_value532 = (void*)0;
struct sNode* __result339__;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1sClassp* parent_classes_550;
struct sClass* parent_class2_553;
void* __right_value538 = (void*)0;
struct sClass* struct_class_557;
void* __right_value539 = (void*)0;
_Bool _if_conditional8;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sClass* __dec_obj183;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sClass* __dec_obj184;
struct sClass* defining_class_558;
void* __right_value544 = (void*)0;
_Bool _if_conditional9;
void* __right_value545 = (void*)0;
char* __dec_obj185;
void* __right_value546 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1sClassp* o2_saved_564;
struct sClass* parent_567;
struct list$1tuple2$2charphsTypephph* o2_saved_570;
struct tuple2$2charphsTypeph* it_571;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
_Bool _elif_conditional2;
void* __right_value555 = (void*)0;
struct sClass* klass2_572;
void* __right_value556 = (void*)0;
char* __dec_obj186;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1sClassp* o2_saved_573;
struct sClass* parent_574;
struct list$1tuple2$2charphsTypephph* o2_saved_575;
struct tuple2$2charphsTypeph* it_576;
void* __right_value559 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_577;
struct tuple2$2charphsTypeph* it_578;
void* __right_value560 = (void*)0;
char* head_579;
char* p_saved_580;
int sline_saved_581;
char* sname_saved_582;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1sNodeph* methods_583;
void* __right_value563 = (void*)0;
char* __dec_obj187;
char* __dec_obj188;
struct map$2charphcharph* __dec_obj189;
_Bool include__586;
_Bool multiple_declare_587;
char* p_588;
int sline_589;
void* __right_value564 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_590=0;
char* name_591=0;
_Bool err_592=0;
_Bool define_function_flag_593;
char* p_594;
int sline_595;
_Bool invalid_type_596;
void* __right_value565 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* result_type_597=0;
char* fun_name_598=0;
_Bool err_599=0;
char* word_600;
void* __right_value566 = (void*)0;
char* __dec_obj190;
void* __right_value567 = (void*)0;
char* __dec_obj191;
char* __dec_obj192;
void* __right_value568 = (void*)0;
char* __dec_obj193;
char* tail_601;
int pointer_num_602;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sType* __dec_obj194;
void* __right_value571 = (void*)0;
struct sNode* method_603;
struct sType* __dec_obj195;
void* __right_value575 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17 = (void*)0;
struct sType* base_type_607=0;
char* name_608=0;
_Bool err_609=0;
void* __right_value576 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* type2_610=0;
char* name2_611=0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19 = (void*)0;
struct sType* type2_612=0;
char* name2_613=0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* module_name_614;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1charph* params_615;
void* __right_value586 = (void*)0;
char* word_616;
void* __right_value587 = (void*)0;
char* __dec_obj199;
void* __right_value588 = (void*)0;
char* __dec_obj200;
void* __right_value589 = (void*)0;
_Bool _if_conditional10;
struct sNode* __result355__;
void* __right_value590 = (void*)0;
struct sClassModule* module_620;
void* __right_value591 = (void*)0;
void* __right_value597 = (void*)0;
struct map$2charphcharph* __dec_obj206;
int i_624;
struct list$1charph* o2_saved_625;
char* it_628;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value606 = (void*)0;
char* __dec_obj207;
void* __right_value607 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type2_655=0;
char* name_656=0;
_Bool err_657=0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
char* __dec_obj208;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value620 = (void*)0;
struct sNode* __result379__;
void* __right_value621 = (void*)0;
struct sNode* __result380__;
struct_class_496 = (void*)0;
generics_class_507 = (void*)0;
struct_class_518 = (void*)0;
struct_class_557 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_493=head;
        struct_attribute_494=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_495=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional4=(((struct sClass*)(__right_value440=map$2charphsClassph_at(info->classes,type_name_495,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value440,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional4) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_495),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 554, "sClass")),type_name_495,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_496=((struct sClass*)(__right_value443=map$2charphsClassph_at(info->classes,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value443,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_497=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 556, "sType")),type_name_495,(_Bool)0,info));
                override__498=((struct sType*)(__right_value446=map$2charphsTypeph_at(info->types,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value446,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__498) {
                    if(                    override__498->mTypedef) {
                        type_497->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_495),(struct sType*)come_increment_ref_count(type_497));
                come_call_finalizer3(type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_496=((struct sClass*)(__right_value447=map$2charphsClassph_at(info->classes,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value447,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                type_499=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 567, "sType")),type_name_495,(_Bool)0,info));
                override__500=((struct sType*)(__right_value450=map$2charphsTypeph_at(info->types,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value450,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__500) {
                    if(                    override__500->mTypedef) {
                        type_499->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_495),(struct sType*)come_increment_ref_count(type_499));
                come_call_finalizer3(type_499,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_501=info->p;
            header_502=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 579, "buffer"))));
            buffer_append(header_502,source_head_493,source_tail_501-source_head_493);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value453=buffer_to_string(header_502))));
            __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 584, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value456=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 584, "sStructNobodyNode")),(char*)come_increment_ref_count(__builtin_string(type_name_495)),struct_class_496,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result330__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value461=_inf_value4));
            come_call_finalizer3(header_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_494 = come_decrement_ref_count2(struct_attribute_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_495 = come_decrement_ref_count2(type_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value456,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value461) { __right_value461 = come_decrement_ref_count2(__right_value461, ((struct sNode*)__right_value461)->finalize, ((struct sNode*)__right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result330__;
            come_call_finalizer3(header_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==60) {
            list$1charph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_506=(char*)come_increment_ref_count(parse_word(info));
                list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(string_clone(T_506)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    T_506 = come_decrement_ref_count2(T_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info,"invalid generics struct definition");
                    exit(2);
                }
                T_506 = come_decrement_ref_count2(T_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional5=(((struct sClass*)(__right_value464=map$2charphsClassph_at(info->generics_classes,type_name_495,((void*)0))))!=((void*)0))),            come_call_finalizer3(__right_value464,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional5) {
                err_msg(info,"redifined generics struct(%s)",type_name_495);
                exit(2);
            }
            else {
                __dec_obj167=generics_class_507;
                generics_class_507=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 617, "sClass")),type_name_495,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj167,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value467=map$2charphsClassph_at(info->generics_classes,type_name_495,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value467,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional6) {
                map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_495),(struct sClass*)come_increment_ref_count(generics_class_507));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value468=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_508=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_509=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_510=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value468,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_510) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_507->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 645, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_509),(struct sType*)come_increment_ref_count(type2_508))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_511=(char*)come_increment_ref_count(parse_word(info));
                        type3_512=(struct sType*)come_increment_ref_count(sType_clone(type2_508));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_513=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_514=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_513;
                            __dec_obj168=type3_512->mSizeNum;
                            type3_512->mSizeNum=(struct sNode*)come_increment_ref_count(node_514);
                            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
                            if(node_514) { node_514 = come_decrement_ref_count2(node_514, ((struct sNode*)node_514)->finalize, ((struct sNode*)node_514)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        list$1tuple2$2charphsTypephph_push_back(generics_class_507->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 667, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_511),(struct sType*)come_increment_ref_count(type3_512))));
                        name2_511 = come_decrement_ref_count2(name2_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type3_512,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_507->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 671, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_509),(struct sType*)come_increment_ref_count(type2_508))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(type2_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_509 = come_decrement_ref_count2(name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer3(type2_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_509 = come_decrement_ref_count2(name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((struct tuple2$2charphcharph*)(__right_value478=parse_attribute(info,(_Bool)0)));
            come_call_finalizer3(__right_value478,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_reset(info->generics_type_names);
            source_tail_515=info->p;
            header_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 696, "buffer"))));
            buffer_append_str(header_516,"struct ");
            buffer_append(header_516,source_head_493,source_tail_515-source_head_493);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value481=buffer_to_string(header_516))));
            __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 702, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value483=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 702, "sNothingNode")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value486=_inf_value5));
            come_call_finalizer3(generics_class_507,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_494 = come_decrement_ref_count2(struct_attribute_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_495 = come_decrement_ref_count2(type_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value483,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value486) { __right_value486 = come_decrement_ref_count2(__right_value486, ((struct sNode*)__right_value486)->finalize, ((struct sNode*)__right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result334__;
            come_call_finalizer3(generics_class_507,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value487=map$2charphsClassph_at(info->classes,type_name_495,((void*)0))))==((void*)0))),            come_call_finalizer3(__right_value487,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional7) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_495),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 707, "sClass")),type_name_495,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_519=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 709, "sType")),type_name_495,(_Bool)0,info));
                override__520=((struct sType*)(__right_value492=map$2charphsTypeph_at(info->types,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__520) {
                    if(                    override__520->mTypedef) {
                        type_519->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_495),(struct sType*)come_increment_ref_count(type_519));
                struct_class_518=((struct sClass*)(__right_value493=map$2charphsClassph_at(info->classes,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value493,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_519,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_521=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 721, "sType")),type_name_495,(_Bool)0,info));
                override__522=((struct sType*)(__right_value496=map$2charphsTypeph_at(info->types,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value496,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(                override__522) {
                    if(                    override__522->mTypedef) {
                        type_521->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_495),(struct sType*)come_increment_ref_count(type_521));
                struct_class_518=((struct sClass*)(__right_value497=map$2charphsClassph_at(info->classes,type_name_495,((void*)0))));
                come_call_finalizer3(__right_value497,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            parent_class_523=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value498=parse_word(info)));
                __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_524=(char*)come_increment_ref_count(parse_word(info));
                parent_class_523=((struct sClass*)(__right_value500=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_524)));
                come_call_finalizer3(__right_value500,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                parent_class_523==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_524);
                    __result335__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    parent_class_name_524 = come_decrement_ref_count2(parent_class_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    struct_attribute_494 = come_decrement_ref_count2(struct_attribute_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_495 = come_decrement_ref_count2(type_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result335__;
                }
                parent_class_name_524 = come_decrement_ref_count2(parent_class_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_525=(_Bool)0;
                {
                    p_526=info->p;
                    sline_527=info->sline;
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value501=backtrace_parse_type((_Bool)1,info)));
                    type_528=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_529=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_530=multiple_assign_var10->v3;
                    come_call_finalizer3(__right_value501,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_530&&*info->p==44) {
                        multiple_declare_525=(_Bool)1;
                    }
                    info->p=p_526;
                    info->sline=sline_527;
                    come_call_finalizer3(type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_529 = come_decrement_ref_count2(name_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                multiple_declare_525) {
                    multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value502=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_531=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_532=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_533=multiple_assign_var11->v3;
                    come_call_finalizer3(__right_value502,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var12=((struct tuple2$2sTypephcharph*)(__right_value503=parse_variable_name((struct sType*)come_increment_ref_count(base_type_531),(_Bool)1,info)));
                    type2_534=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_535=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    come_call_finalizer3(__right_value503,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_518->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 778, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_535),(struct sType*)come_increment_ref_count(type2_534))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value506=parse_variable_name((struct sType*)come_increment_ref_count(base_type_531),(_Bool)0,info)));
                        type2_536=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_537=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(__right_value506,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_518->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 786, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_537),(struct sType*)come_increment_ref_count(type2_536))));
                        come_call_finalizer3(type2_536,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_537 = come_decrement_ref_count2(name2_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(base_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_532 = come_decrement_ref_count2(name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_534,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_535 = come_decrement_ref_count2(name2_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value509=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_538=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_539=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_540=multiple_assign_var14->v3;
                    come_call_finalizer3(__right_value509,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_540) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2charphsTypephph_push_back(struct_class_518->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 796, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_539),(struct sType*)come_increment_ref_count(type2_538))));
                    come_call_finalizer3(type2_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_539 = come_decrement_ref_count2(name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_541=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1charph_reset(info->generics_type_names);
            klass2_542=((struct sClass*)(__right_value513=map$2charphsClassph_at(info->classes,type_name_495,((void*)0))));
            come_call_finalizer3(__right_value513,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            source_tail_543=info->p;
            header_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 823, "buffer"))));
            buffer_append(header_544,source_head_493,source_tail_543-source_head_493);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value516=buffer_to_string(header_544))));
            __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            parent_class_523) {
                __dec_obj173=struct_class_518->mParentClassName;
                struct_class_518->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_523->mName));
                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_518->mName),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_518)));
            }
            if(            string_operator_equals(struct_attribute_494,"")&&string_operator_equals(struct_attribute2_541,"")) {
            }
            else if(            string_operator_equals(struct_attribute_494,"")) {
                __dec_obj174=struct_class_518->mAttribute;
                struct_class_518->mAttribute=(char*)come_increment_ref_count(struct_attribute2_541);
                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_541,"")) {
                __dec_obj175=struct_class_518->mAttribute;
                struct_class_518->mAttribute=(char*)come_increment_ref_count(struct_attribute_494);
                __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj176=struct_class_518->mAttribute;
                struct_class_518->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute_494,((char*)(__right_value519=charp_operator_add(" ",struct_attribute2_541)))));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 845, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value523=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 845, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name_495)),struct_class_518,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result338__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value528=_inf_value6));
            struct_attribute2_541 = come_decrement_ref_count2(struct_attribute2_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
            struct_attribute_494 = come_decrement_ref_count2(struct_attribute_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name_495 = come_decrement_ref_count2(type_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value523,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value528) { __right_value528 = come_decrement_ref_count2(__right_value528, ((struct sNode*)__right_value528)->finalize, ((struct sNode*)__right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result338__;
            struct_attribute2_541 = come_decrement_ref_count2(struct_attribute2_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        struct_attribute_494 = come_decrement_ref_count2(struct_attribute_494, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_495 = come_decrement_ref_count2(type_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_546=head;
        type_name_547=(char*)come_increment_ref_count(parse_word(info));
        add_come_code_at_come_header(info,"struct %s;\n",type_name_547);
        parent_class_548=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value530=parse_word(info)));
            __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_name_549=(char*)come_increment_ref_count(parse_word(info));
            parent_class_548=((struct sClass*)(__right_value532=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_549)));
            come_call_finalizer3(__right_value532,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_548==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_549);
                __result339__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                parent_class_name_549 = come_decrement_ref_count2(parent_class_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name_547 = come_decrement_ref_count2(type_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result339__;
            }
            parent_class_name_549 = come_decrement_ref_count2(parent_class_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        parent_classes_550=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 869, "list$1sClassp"))));
        parent_class2_553=parent_class_548;
        while(parent_class2_553) {
            list$1sClassp_add(parent_classes_550,parent_class2_553);
            if(            parent_class_548->mParentClassName) {
                parent_class2_553=((struct sClass*)(__right_value538=map$2charphsClassphp_operator_load_element(info->classes,parent_class_548->mParentClassName)));
                come_call_finalizer3(__right_value538,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                parent_class2_553=((void*)0);
            }
        }
        if(        (_if_conditional8=(((struct sClass*)(__right_value539=map$2charphsClassph_at(info->classes,type_name_547,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value539,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional8) {
            __dec_obj183=struct_class_557;
            struct_class_557=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 884, "sClass")),type_name_547,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj183,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj184=struct_class_557;
            struct_class_557=(struct sClass*)come_increment_ref_count(sClass_clone(((struct sClass*)(__right_value542=map$2charphsClassph_at(info->classes,type_name_547,((void*)0))))));
            come_call_finalizer3(__dec_obj184,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value542,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        defining_class_558=info->defining_class;
        info->defining_class=struct_class_557;
        if(        (_if_conditional9=(((struct sClass*)(__right_value544=map$2charphsClassph_at(info->classes,type_name_547,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value544,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            if(            parent_class_548) {
                __dec_obj185=struct_class_557->mParentClassName;
                struct_class_557->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_548->mName));
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_547),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_557)));
            for(            o2_saved_564=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value552=list$1sClassp_reverse(parent_classes_550))))),parent_567=list$1sClassp_begin((o2_saved_564)) ,            come_call_finalizer3(__right_value552,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_564));            parent_567=list$1sClassp_next((o2_saved_564))            ){
                for(                o2_saved_570=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_567->mFields)),it_571=list$1tuple2$2charphsTypephph_begin((o2_saved_570));                !list$1tuple2$2charphsTypephph_end((o2_saved_570));                it_571=list$1tuple2$2charphsTypephph_next((o2_saved_570))                ){
                    list$1tuple2$2charphsTypephph_add(struct_class_557->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_571)));
                }
                come_call_finalizer3(o2_saved_570,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_564,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        (_elif_conditional2=(list$1tuple2$2charphsTypephph_length(((struct sClass*)(__right_value554=map$2charphsClassph_at(info->classes,type_name_547,((void*)0))))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_557->mFields)>0)),        come_call_finalizer3(__right_value554,sClass_finalize, 0, 1, 0, 0, __result_obj__),
        _elif_conditional2) {
            klass2_572=((struct sClass*)(__right_value555=map$2charphsClassph_at(info->classes,type_name_547,((void*)0))));
            come_call_finalizer3(__right_value555,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_548) {
                __dec_obj186=klass2_572->mParentClassName;
                klass2_572->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_548->mName));
                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_547),(struct sClass*)come_increment_ref_count(sClass_clone(klass2_572)));
            for(            o2_saved_573=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value558=list$1sClassp_reverse(parent_classes_550))))),parent_574=list$1sClassp_begin((o2_saved_573)) ,            come_call_finalizer3(__right_value558,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_573));            parent_574=list$1sClassp_next((o2_saved_573))            ){
                for(                o2_saved_575=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_574->mFields)),it_576=list$1tuple2$2charphsTypephph_begin((o2_saved_575));                !list$1tuple2$2charphsTypephph_end((o2_saved_575));                it_576=list$1tuple2$2charphsTypephph_next((o2_saved_575))                ){
                    list$1tuple2$2charphsTypephph_add(klass2_572->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_576)));
                }
                come_call_finalizer3(o2_saved_575,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_573,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_577=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_557->mFields)),it_578=list$1tuple2$2charphsTypephph_begin((o2_saved_577));            !list$1tuple2$2charphsTypephph_end((o2_saved_577));            it_578=list$1tuple2$2charphsTypephph_next((o2_saved_577))            ){
                list$1tuple2$2charphsTypephph_add(klass2_572->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_578)));
            }
            come_call_finalizer3(o2_saved_577,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_579=info->p;
        p_saved_580=((void*)0);
        sline_saved_581=0;
        sname_saved_582=((void*)0);
        methods_583=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 931, "list$1sNodeph"))));
        while((_Bool)1) {
            if(            p_saved_580) {
                if(                *info->p==0) {
                    info->p=p_saved_580;
                    info->sline=sline_saved_581;
                    __dec_obj187=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_582));
                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_580=((void*)0);
                    sline_saved_581=0;
                    __dec_obj188=sname_saved_582;
                    sname_saved_582=((void*)0);
                    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj189=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj189,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__586=parsecmp("include",info);
            multiple_declare_587=(_Bool)0;
            if(            include__586==(_Bool)0) {
                p_588=info->p;
                sline_589=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value564=backtrace_parse_type((_Bool)1,info)));
                    type_590=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_591=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_592=multiple_assign_var15->v3;
                    come_call_finalizer3(__right_value564,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_592&&*info->p==44) {
                        multiple_declare_587=(_Bool)1;
                    }
                    come_call_finalizer3(type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_591 = come_decrement_ref_count2(name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_588;
                info->sline=sline_589;
            }
            define_function_flag_593=(_Bool)0;
            if(            include__586==(_Bool)0) {
                p_594=info->p;
                sline_595=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_593=(_Bool)1;
                }
                else {
                    invalid_type_596=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value565=backtrace_parse_type((_Bool)0,info)));
                        result_type_597=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_598=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_599=multiple_assign_var16->v3;
                        come_call_finalizer3(__right_value565,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(result_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_598 = come_decrement_ref_count2(fun_name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    word_600=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj190=word_600;
                        word_600=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_600,"extern")) {
                            __dec_obj191=word_600;
                            word_600=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj192=word_600;
                        word_600=((void*)0);
                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_600) {
                        if(                        is_type_name(word_600,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj193=word_600;
                                word_600=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_600)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_593=(_Bool)1;
                        }
                    }
                    word_600 = come_decrement_ref_count2(word_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_594;
                info->sline=sline_595;
            }
            if(            define_function_flag_593) {
                tail_601=info->p;
                pointer_num_602=1;
                __dec_obj194=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1041, "sType")),type_name_547,(_Bool)0,info));
                come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->impl_type->mPointerNum=pointer_num_602;
                info->in_class=(_Bool)1;
                method_603=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj195=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodeph_push_back(methods_583,(struct sNode*)come_increment_ref_count(method_603));
                if(method_603) { method_603 = come_decrement_ref_count2(method_603, ((struct sNode*)method_603)->finalize, ((struct sNode*)method_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            multiple_declare_587) {
                multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value575=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_607=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_608=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_609=multiple_assign_var17->v3;
                come_call_finalizer3(__right_value575,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value576=parse_variable_name((struct sType*)come_increment_ref_count(base_type_607),(_Bool)1,info)));
                type2_610=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_611=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                come_call_finalizer3(__right_value576,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(struct_class_557->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1058, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_611),(struct sType*)come_increment_ref_count(type2_610))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value579=parse_variable_name((struct sType*)come_increment_ref_count(base_type_607),(_Bool)0,info)));
                    type2_612=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_613=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    come_call_finalizer3(__right_value579,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_557->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1066, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_613),(struct sType*)come_increment_ref_count(type2_612))));
                    come_call_finalizer3(type2_612,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name2_613 = come_decrement_ref_count2(name2_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(59,info);
                come_call_finalizer3(base_type_607,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_608 = come_decrement_ref_count2(name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_610,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_611 = come_decrement_ref_count2(name2_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value582=parse_word(info)));
                __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_614=(char*)come_increment_ref_count(parse_word(info));
                params_615=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1075, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_616=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_615,(char*)come_increment_ref_count(word_616));
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
                            word_616 = come_decrement_ref_count2(word_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_616 = come_decrement_ref_count2(word_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_580=info->p;
                sline_saved_581=info->sline;
                __dec_obj199=sname_saved_582;
                sname_saved_582=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj200=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_614));
                __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional10=(((struct sClassModule*)(__right_value589=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_614)))==((void*)0))),                come_call_finalizer3(__right_value589,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional10) {
                    err_msg(info,"module not found");
                    __result355__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_614 = come_decrement_ref_count2(module_name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_615,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_547 = come_decrement_ref_count2(type_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(parent_classes_550,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(struct_class_557,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_582 = come_decrement_ref_count2(sname_saved_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(methods_583,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result355__;
                }
                module_620=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value590=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_614))), "14struct.c", 1122, 3));
                come_call_finalizer3(__right_value590,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_620->mParams)!=list$1charph_length(params_615)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj206=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1129, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj206,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_624=0;
                for(                o2_saved_625=(struct list$1charph*)come_increment_ref_count((module_620->mParams)),it_628=list$1charph_begin((o2_saved_625));                !list$1charph_end((o2_saved_625));                it_628=list$1charph_next((o2_saved_625))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_628)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value599=list$1charphp_operator_load_element(params_615,i_624))), "14struct.c", 1133, 4)))));
                    __right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_624++;
                }
                come_call_finalizer3(o2_saved_625,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_620->mText;
                info->sline=module_620->mSLine;
                __dec_obj207=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_620->mSName));
                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_614 = come_decrement_ref_count2(module_name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_615,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value607=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_655=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_656=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_657=multiple_assign_var20->v3;
                come_call_finalizer3(__right_value607,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_657) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2charphsTypephph_push_back(struct_class_557->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1148, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_656),(struct sType*)come_increment_ref_count(type2_655))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer3(type2_655,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_656 = come_decrement_ref_count2(name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_580) {
            if(            info->p==0) {
                info->p=p_saved_580;
                info->sline=sline_saved_581;
                __dec_obj208=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_582));
                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_580=((void*)0);
                sline_saved_581=0;
            }
        }
        list$1charph_reset(info->generics_type_names);
        info->defining_class=defining_class_558;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1181, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value614=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1181, "sClassNode")),(char*)come_increment_ref_count(__builtin_string(type_name_547)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_557)),(struct list$1sNodeph*)come_increment_ref_count(methods_583),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result379__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value620=_inf_value7));
        type_name_547 = come_decrement_ref_count2(type_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_550,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_557,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_582 = come_decrement_ref_count2(sname_saved_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_583,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value614,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value620) { __right_value620 = come_decrement_ref_count2(__right_value620, ((struct sNode*)__right_value620)->finalize, ((struct sNode*)__right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result379__;
        type_name_547 = come_decrement_ref_count2(type_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(parent_classes_550,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_557,sClass_finalize, 0, 0, 0, 0, (void*)0);
        sname_saved_582 = come_decrement_ref_count2(sname_saved_582, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(methods_583,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value621=top_level_v97(buf,head,head_sline,info)));
    if(__right_value621) { __right_value621 = come_decrement_ref_count2(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj161;
char* __dec_obj162;
struct sClass* __dec_obj163;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj162=self->mName;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj163=self->mClass;
            come_call_finalizer3(__dec_obj163,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result328__;
void* __right_value457 = (void*)0;
struct sStructNobodyNode* result_503;
void* __right_value458 = (void*)0;
char* __dec_obj164;
void* __right_value459 = (void*)0;
char* __dec_obj165;
void* __right_value460 = (void*)0;
struct sClass* __dec_obj166;
struct sStructNobodyNode* __result329__;
    if(    self==(void*)0) {
        __result328__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    result_503=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_503->sname;
        result_503->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_503->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj165=result_503->mName;
        result_503->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj166=result_503->mClass;
        result_503->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj166,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result329__ = gComeFunResultObject = __result_obj__ = result_503;
    come_call_finalizer3(result_503,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_504;
struct list_item$1charph* prev_it_505;
struct list$1charph* __result331__;
    it_504=self->head;
    while(it_504!=((void*)0)) {
        prev_it_505=it_504;
        it_504=it_504->next;
        come_call_finalizer3(prev_it_505,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj169;
char* __dec_obj170;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj169=self->v1;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj170=self->v2;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj171;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj171=self->sname;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result332__;
void* __right_value484 = (void*)0;
struct sNothingNode* result_517;
void* __right_value485 = (void*)0;
char* __dec_obj172;
struct sNothingNode* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_517=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "sNothingNode"));
    if(    self!=((void*)0)) {
        result_517->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj172=result_517->sname;
        result_517->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_517->sline_real=self->sline_real;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_517;
    come_call_finalizer3(result_517,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj177;
char* __dec_obj178;
struct sClass* __dec_obj179;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj177=self->sname;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj178=self->mName;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj179=self->mClass;
            come_call_finalizer3(__dec_obj179,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result336__;
void* __right_value524 = (void*)0;
struct sStructNode* result_545;
void* __right_value525 = (void*)0;
char* __dec_obj180;
void* __right_value526 = (void*)0;
char* __dec_obj181;
void* __right_value527 = (void*)0;
struct sClass* __dec_obj182;
struct sStructNode* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_545=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"));
    if(    self!=((void*)0)) {
        result_545->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result_545->sname;
        result_545->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_545->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj181=result_545->mName;
        result_545->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj182=result_545->mClass;
        result_545->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj182,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_545;
    come_call_finalizer3(result_545,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result340__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_551;
struct list_item$1sClassp* prev_it_552;
    it_551=self->head;
    while(it_551!=((void*)0)) {
        prev_it_552=it_551;
        it_551=it_551->next;
        come_call_finalizer3(prev_it_552,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value535 = (void*)0;
struct list_item$1sClassp* litem_554;
void* __right_value536 = (void*)0;
struct list_item$1sClassp* litem_555;
void* __right_value537 = (void*)0;
struct list_item$1sClassp* litem_556;
struct list$1sClassp* __result341__;
    if(    self->len==0) {
        litem_554=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value535=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sClassp"))));
        litem_554->prev=((void*)0);
        litem_554->next=((void*)0);
        litem_554->item=item;
        self->tail=litem_554;
        self->head=litem_554;
    }
    else if(    self->len==1) {
        litem_555=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value536=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sClassp"))));
        litem_555->prev=self->head;
        litem_555->next=((void*)0);
        litem_555->item=item;
        self->tail=litem_555;
        self->head->next=litem_555;
    }
    else {
        litem_556=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value537=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sClassp"))));
        litem_556->prev=self->tail;
        litem_556->next=((void*)0);
        litem_556->item=item;
        self->tail->next=litem_556;
        self->tail=litem_556;
    }
    self->len++;
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1sClassp* result_559;
struct list_item$1sClassp* it_560;
struct list$1sClassp* __result343__;
    result_559=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "/usr/local/include/comelang.h", 1821, "list$1sClassp"))));
    it_560=self->tail;
    while(it_560!=((void*)0)) {
        list$1sClassp_push_back(result_559,it_560->item);
        it_560=it_560->prev;
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_559;
    come_call_finalizer3(result_559,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value549 = (void*)0;
struct list_item$1sClassp* litem_561;
void* __right_value550 = (void*)0;
struct list_item$1sClassp* litem_562;
void* __right_value551 = (void*)0;
struct list_item$1sClassp* litem_563;
struct list$1sClassp* __result342__;
    if(    self->len==0) {
        litem_561=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value549=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sClassp"))));
        litem_561->prev=((void*)0);
        litem_561->next=((void*)0);
        litem_561->item=item;
        self->tail=litem_561;
        self->head=litem_561;
    }
    else if(    self->len==1) {
        litem_562=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value550=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sClassp"))));
        litem_562->prev=self->head;
        litem_562->next=((void*)0);
        litem_562->item=item;
        self->tail=litem_562;
        self->head->next=litem_562;
    }
    else {
        litem_563=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value551=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sClassp"))));
        litem_563->prev=self->tail;
        litem_563->next=((void*)0);
        litem_563->item=item;
        self->tail->next=litem_563;
        self->tail=litem_563;
    }
    self->len++;
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_565;
struct sClass* __result344__;
struct sClass* __result345__;
struct sClass* result_566;
struct sClass* __result346__;
result_565 = (void*)0;
result_566 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_565,0,sizeof(struct sClass*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_565;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->it=self->head;
    if(    self->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_566,0,sizeof(struct sClass*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_566;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_568;
struct sClass* __result347__;
struct sClass* __result348__;
struct sClass* result_569;
struct sClass* __result349__;
result_568 = (void*)0;
result_569 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_568,0,sizeof(struct sClass*));
        __result347__ = gComeFunResultObject = __result_obj__ = result_568;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result348__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    memset(&result_569,0,sizeof(struct sClass*));
    __result349__ = gComeFunResultObject = __result_obj__ = result_569;
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_584;
int i_585;
    for(    i_584=0;    i_584<self->size;    i_584++    ){
        if(        self->item_existance[i_584]) {
            if(            1) {
                self->items[i_584] = come_decrement_ref_count2(self->items[i_584], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_585=0;    i_585<self->size;    i_585++    ){
        if(        self->item_existance[i_585]) {
            if(            1) {
                self->keys[i_585] = come_decrement_ref_count2(self->keys[i_585], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value572 = (void*)0;
struct list_item$1sNodeph* litem_604;
struct sNode* __dec_obj196;
void* __right_value573 = (void*)0;
struct list_item$1sNodeph* litem_605;
struct sNode* __dec_obj197;
void* __right_value574 = (void*)0;
struct list_item$1sNodeph* litem_606;
struct sNode* __dec_obj198;
struct list$1sNodeph* __result350__;
    if(    self->len==0) {
        litem_604=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value572=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sNodeph"))));
        litem_604->prev=((void*)0);
        litem_604->next=((void*)0);
        __dec_obj196=litem_604->item;
        litem_604->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_604;
        self->head=litem_604;
    }
    else if(    self->len==1) {
        litem_605=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value573=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sNodeph"))));
        litem_605->prev=self->head;
        litem_605->next=((void*)0);
        __dec_obj197=litem_605->item;
        litem_605->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_605;
        self->head->next=litem_605;
    }
    else {
        litem_606=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value574=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sNodeph"))));
        litem_606->prev=self->tail;
        litem_606->next=((void*)0);
        __dec_obj198=litem_606->item;
        litem_606->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_606;
        self->tail=litem_606;
    }
    self->len++;
    __result350__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_617;
unsigned int hash_618;
unsigned int it_619;
struct sClassModule* __result351__;
struct sClassModule* __result352__;
struct sClassModule* __result353__;
struct sClassModule* __result354__;
default_value_617 = (void*)0;
    memset(&default_value_617,0,sizeof(struct sClassModule*));
    hash_618=charp_get_hash_key(((char*)key))%self->size;
    it_619=hash_618;
    while((_Bool)1) {
        if(        self->item_existance[it_619]) {
            if(            charp_equals(self->keys[it_619],key)) {
                __result351__ = gComeFunResultObject = __result_obj__ = self->items[it_619];
                come_call_finalizer3(default_value_617,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result351__;
            }
            it_619++;
            if(            it_619>=self->size) {
                it_619=0;
            }
            else if(            it_619==hash_618) {
                __result352__ = gComeFunResultObject = __result_obj__ = default_value_617;
                come_call_finalizer3(default_value_617,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result352__;
            }
        }
        else {
            __result353__ = gComeFunResultObject = __result_obj__ = default_value_617;
            come_call_finalizer3(default_value_617,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result353__;
        }
    }
    __result354__ = gComeFunResultObject = __result_obj__ = default_value_617;
    come_call_finalizer3(default_value_617,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj201;
char* __dec_obj202;
struct list$1charph* __dec_obj203;
char* __dec_obj204;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj201=self->mName;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj202=self->mText;
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj203=self->mParams;
            come_call_finalizer3(__dec_obj203,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj204=self->mSName;
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
int i_621;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct list$1charp* __dec_obj205;
struct map$2charphcharph* __result357__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value592=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2329, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value593=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2330, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value594=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2331, "bool"))));
    for(    i_621=0;    i_621<128;    i_621++    ){
        self->item_existance[i_621]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj205=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2341, "list$1charp"))));
    come_call_finalizer3(__dec_obj205,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result357__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result356__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_622;
int i_623;
    for(    i_622=0;    i_622<self->size;    i_622++    ){
        if(        self->item_existance[i_622]) {
            if(            1) {
                self->items[i_622] = come_decrement_ref_count2(self->items[i_622], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_623=0;    i_623<self->size;    i_623++    ){
        if(        self->item_existance[i_623]) {
            if(            1) {
                self->keys[i_623] = come_decrement_ref_count2(self->keys[i_623], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_626;
char* __result358__;
char* __result359__;
char* result_627;
char* __result360__;
result_626 = (void*)0;
result_627 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_626,0,sizeof(char*));
        __result358__ = gComeFunResultObject = __result_obj__ = result_626;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    self->it=self->head;
    if(    self->it) {
        __result359__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    memset(&result_627,0,sizeof(char*));
    __result360__ = gComeFunResultObject = __result_obj__ = result_627;
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_629;
char* __result361__;
char* __result362__;
char* result_630;
char* __result363__;
result_629 = (void*)0;
result_630 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_629,0,sizeof(char*));
        __result361__ = gComeFunResultObject = __result_obj__ = result_629;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result362__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    memset(&result_630,0,sizeof(char*));
    __result363__ = gComeFunResultObject = __result_obj__ = result_630;
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_631;
int i_632;
char* __result364__;
char* default_value_633;
char* __result365__;
default_value_633 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_631=self->head;
    i_632=0;
    while(it_631!=((void*)0)) {
        if(        position==i_632) {
            __result364__ = gComeFunResultObject = __result_obj__ = it_631->item;
            gComeFunResultObject = (void*)0;
            return __result364__;
        }
        it_631=it_631->next;
        i_632++;
    }
    memset(&default_value_633,0,sizeof(char*));
    __result365__ = gComeFunResultObject = __result_obj__ = default_value_633;
    default_value_633 = come_decrement_ref_count2(default_value_633, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_651;
unsigned int it_652;
_Bool same_key_exist_653;
char* it2_654;
struct map$2charphcharph* __result376__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_651=charp_get_hash_key(key)%self->size;
    it_652=hash_651;
    while((_Bool)1) {
        if(        self->item_existance[it_652]) {
            if(            charp_equals(self->keys[it_652],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_652]);
                    self->keys[it_652] = come_decrement_ref_count2(self->keys[it_652], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_652]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_652]);
                    self->keys[it_652]=key;
                }
                if(                1) {
                    self->items[it_652] = come_decrement_ref_count2(self->items[it_652], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_652]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_652]=item;
                }
                break;
            }
            it_652++;
            if(            it_652>=self->size) {
                it_652=0;
            }
            else if(            it_652==hash_651) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_652]=(_Bool)1;
            if(            1) {
                self->keys[it_652]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_652]=key;
            }
            if(            1) {
                self->items[it_652]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_652]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_653=(_Bool)0;
    for(    it2_654=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_654=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_654,key)) {
            same_key_exist_653=(_Bool)1;
        }
    }
    if(    !same_key_exist_653) {
        list$1charp_push_back(self->key_list,key);
    }
    __result376__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_634;
void* __right_value601 = (void*)0;
char** keys_635;
void* __right_value602 = (void*)0;
char** items_636;
void* __right_value603 = (void*)0;
_Bool* item_existance_637;
int len_638;
char* it_641;
char* default_value_644;
void* __right_value604 = (void*)0;
char* it2_645;
unsigned int hash_648;
int n_649;
char* default_value_650;
void* __right_value605 = (void*)0;
default_value_644 = (void*)0;
default_value_650 = (void*)0;
    size_634=self->size*10;
    keys_635=(char**)come_increment_ref_count(((char**)(__right_value601=(char**)come_calloc(1, sizeof(char*)*(1*(size_634)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_636=(char**)come_increment_ref_count(((char**)(__right_value602=(char**)come_calloc(1, sizeof(char*)*(1*(size_634)), "/usr/local/include/comelang.h", 2558, "char*%"))));
    item_existance_637=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value603=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_634)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_638=0;
    for(    it_641=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_641=map$2charphcharph_next(self)    ){
        memset(&default_value_644,0,sizeof(char*));
        it2_645=((char*)(__right_value604=map$2charphcharph_at(self,it_641,default_value_644)));
        __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_648=charp_get_hash_key(it_641)%size_634;
        n_649=hash_648;
        while((_Bool)1) {
            if(            item_existance_637[n_649]) {
                n_649++;
                if(                n_649>=size_634) {
                    n_649=0;
                }
                else if(                n_649==hash_648) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_637[n_649]=(_Bool)1;
                keys_635[n_649]=it_641;
                items_636[n_649]=((char*)(__right_value605=map$2charphcharph_at(self,it_641,default_value_650)));
                __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_638++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_635;
    self->items=items_636;
    self->item_existance=item_existance_637;
    self->size=size_634;
    self->len=len_638;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_639;
char* __result366__;
char* __result367__;
char* result_640;
char* __result368__;
result_639 = (void*)0;
result_640 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_639,0,sizeof(char*));
        __result366__ = gComeFunResultObject = __result_obj__ = result_639;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result367__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    memset(&result_640,0,sizeof(char*));
    __result368__ = gComeFunResultObject = __result_obj__ = result_640;
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_642;
char* __result369__;
char* __result370__;
char* result_643;
char* __result371__;
result_642 = (void*)0;
result_643 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_642,0,sizeof(char*));
        __result369__ = gComeFunResultObject = __result_obj__ = result_642;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result370__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    memset(&result_643,0,sizeof(char*));
    __result371__ = gComeFunResultObject = __result_obj__ = result_643;
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_646;
unsigned int it_647;
char* __result372__;
char* __result373__;
char* __result374__;
char* __result375__;
    hash_646=charp_get_hash_key(((char*)key))%self->size;
    it_647=hash_646;
    while((_Bool)1) {
        if(        self->item_existance[it_647]) {
            if(            charp_equals(self->keys[it_647],key)) {
                __result372__ = gComeFunResultObject = __result_obj__ = self->items[it_647];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result372__;
            }
            it_647++;
            if(            it_647>=self->size) {
                it_647=0;
            }
            else if(            it_647==hash_646) {
                __result373__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result373__;
            }
        }
        else {
            __result374__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result374__;
        }
    }
    __result375__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj209;
char* __dec_obj210;
struct sClass* __dec_obj211;
struct list$1sNodeph* __dec_obj212;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj211=self->mClass;
            come_call_finalizer3(__dec_obj211,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj212=self->mMethods;
            come_call_finalizer3(__dec_obj212,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result377__;
void* __right_value615 = (void*)0;
struct sClassNode* result_658;
void* __right_value616 = (void*)0;
char* __dec_obj213;
void* __right_value617 = (void*)0;
char* __dec_obj214;
void* __right_value618 = (void*)0;
struct sClass* __dec_obj215;
void* __right_value619 = (void*)0;
struct list$1sNodeph* __dec_obj216;
struct sClassNode* __result378__;
    if(    self==(void*)0) {
        __result377__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    result_658=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"));
    if(    self!=((void*)0)) {
        result_658->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj213=result_658->sname;
        result_658->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj214=result_658->mName;
        result_658->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj215=result_658->mClass;
        result_658->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj215,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj216=result_658->mMethods;
        result_658->mMethods=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mMethods));
        come_call_finalizer3(__dec_obj216,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result378__ = gComeFunResultObject = __result_obj__ = result_658;
    come_call_finalizer3(result_658,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_659;
char* p_660;
int sline_661;
void* __right_value622 = (void*)0;
char* type_name_662;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
char* struct_attribute_663;
void* __right_value627 = (void*)0;
char* type_name_664;
void* __right_value628 = (void*)0;
struct sNode* __result381__;
void* __right_value629 = (void*)0;
struct sNode* __result382__;
    define_struct_659=(_Bool)0;
    {
        p_660=info->p;
        sline_661=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_662=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value623=parse_word(info)));
                    __right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value624=parse_word(info)));
                    __right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==123) {
                    ((char*)(__right_value625=skip_block(info)));
                    __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        define_struct_659=(_Bool)1;
                    }
                }
                type_name_662 = come_decrement_ref_count2(type_name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_660;
        info->sline=sline_661;
    }
    if(    define_struct_659) {
        struct_attribute_663=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_664=(char*)come_increment_ref_count(parse_word(info));
        __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value628=parse_struct((char*)come_increment_ref_count(type_name_664),(char*)come_increment_ref_count(struct_attribute_663),info)));
        struct_attribute_663 = come_decrement_ref_count2(struct_attribute_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_664 = come_decrement_ref_count2(type_name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value628) { __right_value628 = come_decrement_ref_count2(__right_value628, ((struct sNode*)__right_value628)->finalize, ((struct sNode*)__right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result381__;
        struct_attribute_663 = come_decrement_ref_count2(struct_attribute_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        type_name_664 = come_decrement_ref_count2(type_name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result382__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value629=string_node_v13(buf,head,head_sline,info)));
    if(__right_value629) { __right_value629 = come_decrement_ref_count2(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result382__;
}

