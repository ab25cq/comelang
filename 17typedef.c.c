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
struct list_item$1tuple2$2sTypephcharphph
{
    struct tuple2$2sTypephcharph* item;
    struct list_item$1tuple2$2sTypephcharphph* prev;
    struct list_item$1tuple2$2sTypephcharphph* next;
};

struct list$1tuple2$2sTypephcharphph
{
    struct list_item$1tuple2$2sTypephcharphph* head;
    struct list_item$1tuple2$2sTypephcharphph* tail;
    int len;
    struct list_item$1tuple2$2sTypephcharphph* it;
};

struct sTypedefNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mTypeName;
    struct sType* mType;
    char* mDeclareSName;
    struct list$1tuple2$2sTypephcharphph* multiple_declare;
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
struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info);
_Bool sTypedefNode_terminated(struct sTypedefNode* self);
char* sTypedefNode_kind(struct sTypedefNode* self);
_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self);
static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self);
static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item);
static void map$2charphbufferph_rehash(struct map$2charphbufferph* self);
static char* map$2charphbufferph_begin(struct map$2charphbufferph* self);
static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self);
static char* map$2charphbufferph_next(struct map$2charphbufferph* self);
static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self);
static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self);
static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self);
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item);
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info);
static void sTypedefNode_finalize(struct sTypedefNode* self);
static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self);
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
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3643, "buffer"))));
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3650, "buffer"))));
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
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3659, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3666, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3673, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3680, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3687, "buffer"))));
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
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4015, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4020, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4025, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4030, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4035, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4068, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4070, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4075, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4077, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4082, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4084, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4089, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4091, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4096, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4098, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4103, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4105, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4110, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4112, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4117, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4122, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4127, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4132, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4137, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4142, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4147, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4152, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4157, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4162, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4167, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4172, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4177, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4182, "vector$1double")),len,self)));
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1154, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1164, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1174, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1154, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1164, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1174, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1154, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1164, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1174, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1154, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1164, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1174, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1154, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1164, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1174, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1154, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1164, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1174, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1154, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1164, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1174, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1946, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1946, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1946, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1946, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1946, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1946, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1946, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1154, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1164, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1174, "list_item$1charph"))));
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

struct sTypedefNode* sTypedefNode_initialize(struct sTypedefNode* self, char* type_name, struct sType* type, struct list$1tuple2$2sTypephcharphph* multiple_declare, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj33;
void* __right_value290 = (void*)0;
struct sType* __dec_obj86;
void* __right_value291 = (void*)0;
char* __dec_obj87;
void* __right_value301 = (void*)0;
struct list$1tuple2$2sTypephcharphph* __dec_obj104;
struct sTypedefNode* __result230__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->mTypeName;
    self->mTypeName=(char*)come_increment_ref_count(__builtin_string(type_name));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj86=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj87=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj104=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(list$1tuple2$2sTypephcharphphp_clone(multiple_declare));
    come_call_finalizer3(__dec_obj104,list$1tuple2$2sTypephcharphph_finalize, 0, 0, 0, 0, (void*)0);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTypedefNode_finalize, 0, 0, 1, 0, (void*)0);
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

_Bool sTypedefNode_terminated(struct sTypedefNode* self){
    return (_Bool)1;
}

char* sTypedefNode_kind(struct sTypedefNode* self){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value302=__builtin_string("sTypedefNode")));
    __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

_Bool sTypedefNode_compile(struct sTypedefNode* self, struct sInfo* info){
void* __right_value303 = (void*)0;
char* type_name_304;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* type_350;
void* __right_value314 = (void*)0;
char* __dec_obj118;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1tuple2$2sTypephcharphph* o2_saved_393;
struct tuple2$2sTypephcharph* it_396;
struct tuple2$2sTypephcharph* multiple_assign_var1 = (void*)0;
struct sType* type_399=0;
char* type_name_400=0;
void* __right_value328 = (void*)0;
char* __dec_obj119;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* type_name2_402;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sType* type_403;
void* __right_value341 = (void*)0;
char* __dec_obj120;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
char* type_name2_405;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
_Bool __result281__;
    type_name_304=(char*)come_increment_ref_count(__builtin_string(self->mTypeName));
    if(    string_operator_equals(type_name_304,"__darwin_va_list")) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__darwin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "17typedef.c", 32, "sClass")),"__darwin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_350=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "17typedef.c", 34, "sType")),"__darwin_va_list",(_Bool)0,info));
        __dec_obj118=type_350->mOriginalTypeName;
        type_350->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__darwin_va_list"));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_350->mTypedef=(_Bool)1;
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_304)),(struct sType*)come_increment_ref_count(sType_clone(type_350)));
        if(        info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname)) {
        }
        else {
            if(            !info->no_output_come_code2) {
                map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(type_name_304),(struct buffer*)come_increment_ref_count(charp_to_buffer("typedef __builtin_va_list __darwin_va_list;\n")));
            }
        }
        come_call_finalizer3(type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_declare) {
        for(        o2_saved_393=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((self->multiple_declare)),it_396=list$1tuple2$2sTypephcharphph_begin((o2_saved_393));        !list$1tuple2$2sTypephcharphph_end((o2_saved_393));        it_396=list$1tuple2$2sTypephcharphph_next((o2_saved_393))        ){
            multiple_assign_var1=it_396;
            type_399=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            type_name_400=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            string_operator_not_equals(type_name_400,"va_list")) {
                __dec_obj119=type_399->mOriginalTypeName;
                type_399->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_400));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            type_399->mTypedef=(_Bool)1;
            map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_400)),(struct sType*)come_increment_ref_count(sType_clone(type_399)));
            if(            info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname)) {
            }
            else {
                if(                string_operator_not_equals(type_399->mClass->mName,type_name_400)) {
                    if(                    !info->no_output_come_code2) {
                        map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(type_name_400),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value332=xsprintf("typedef %s;\n",((char*)(__right_value331=make_define_var(type_399,type_name_400,(_Bool)1,info)))))))));
                        __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                }
                else {
                    static int var_num_401=0;
                    var_num_401++;
                    type_name2_402=(char*)come_increment_ref_count(string_operator_add(type_name_400,((char*)(__right_value335=string_operator_add(((char*)(__right_value334=int_to_string(var_num_401))),"COMELANG")))));
                    __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(                    !info->no_output_come_code2) {
                        map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(type_name2_402),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value338=xsprintf("typedef %s;\n",((char*)(__right_value337=make_define_var(type_399,type_name_400,(_Bool)1,info)))))))));
                        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    type_name2_402 = come_decrement_ref_count2(type_name2_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(type_399,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_400 = come_decrement_ref_count2(type_name_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_393,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        type_403=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        if(        string_operator_not_equals(type_name_304,"va_list")) {
            __dec_obj120=type_403->mOriginalTypeName;
            type_403->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_304));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type_403->mTypedef=(_Bool)1;
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_304)),(struct sType*)come_increment_ref_count(sType_clone(type_403)));
        if(        info->output_header_file&&string_operator_not_equals(self->mDeclareSName,info->base_sname)) {
        }
        else {
            if(            string_operator_not_equals(type_403->mClass->mName,type_name_304)) {
                if(                !info->no_output_come_code2) {
                    map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(type_name_304),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value345=xsprintf("typedef %s;\n",((char*)(__right_value344=make_define_var(type_403,type_name_304,(_Bool)1,info)))))))));
                    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else {
                static int var_num_404=0;
                var_num_404++;
                type_name2_405=(char*)come_increment_ref_count(string_operator_add(type_name_304,((char*)(__right_value348=string_operator_add(((char*)(__right_value347=int_to_string(var_num_404))),"COMELANG")))));
                __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                !info->no_output_come_code2) {
                    map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(type_name2_405),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value351=xsprintf("typedef %s;\n",((char*)(__right_value350=make_define_var(type_403,type_name_304,(_Bool)1,info)))))))));
                    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                type_name2_405 = come_decrement_ref_count2(type_name2_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result281__ = (_Bool)1;
    type_name_304 = come_decrement_ref_count2(type_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result281__;
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
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj62;
void* __right_value257 = (void*)0;
char* __dec_obj63;
void* __right_value258 = (void*)0;
char* __dec_obj64;
void* __right_value265 = (void*)0;
struct list$1sTypeph* __dec_obj68;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj72;
void* __right_value274 = (void*)0;
struct list$1sTypeph* __dec_obj73;
void* __right_value281 = (void*)0;
struct list$1charph* __dec_obj77;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj80;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value286 = (void*)0;
char* __dec_obj82;
void* __right_value287 = (void*)0;
char* __dec_obj83;
void* __right_value288 = (void*)0;
char* __dec_obj84;
void* __right_value289 = (void*)0;
char* __dec_obj85;
struct sType* __result223__;
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
        __dec_obj60=result_266->mNoSolvedGenericsType;
        result_266->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_266->mOriginalLoadVarType;
        result_266->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj62=result_266->mRefferenceOriginalType;
        result_266->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj63=result_266->mInterfaceName;
        result_266->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj64=result_266->mGenericsName;
        result_266->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj68=result_266->mGenericsTypes;
        result_266->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj68,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj72=result_266->mArrayNum;
        result_266->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj72,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj73=result_266->mParamTypes;
        result_266->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj77=result_266->mParamNames;
        result_266->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj77,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj78=result_266->mResultType;
        result_266->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj79=result_266->mAlignas;
        result_266->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj80=result_266->mChannelType;
        result_266->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj80,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
        __dec_obj81=result_266->mSizeNum;
        result_266->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_266->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj82=result_266->mOriginalTypeName;
        result_266->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj83=result_266->mAsmName;
        result_266->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj84=result_266->mTupleName;
        result_266->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj85=result_266->mAttribute;
        result_266->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_266;
    come_call_finalizer3(result_266,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
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
struct list$1sTypeph* __dec_obj43;
struct list$1sNodeph* __dec_obj45;
struct list$1sTypeph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj51;
struct tuple1$1sTypeph* __dec_obj52;
struct sNode* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
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
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj51=self->mAlignas;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj52=self->mChannelType;
            come_call_finalizer3(__dec_obj52,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj54=self->mSizeNum;
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj55=self->mOriginalTypeName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj56=self->mAsmName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj57=self->mTupleName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj58=self->mAttribute;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_268;
struct list_item$1sTypeph* prev_it_269;
    it_268=self->head;
    while(it_268!=((void*)0)) {
        prev_it_269=it_268;
        it_268=it_268->next;
        come_call_finalizer3(prev_it_269,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_270;
struct list_item$1sTypeph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        come_call_finalizer3(prev_it_271,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_276;
struct list_item$1charph* prev_it_277;
    it_276=self->head;
    while(it_276!=((void*)0)) {
        prev_it_277=it_276;
        it_276=it_276->next;
        come_call_finalizer3(prev_it_277,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result210__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1sTypeph* result_278;
struct list_item$1sTypeph* it_279;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __result213__;
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_278=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1070, "list$1sTypeph"))));
    it_279=self->head;
    while(it_279!=((void*)0)) {
        list$1sTypeph_add(result_278,(struct sType*)come_increment_ref_count(sType_clone(it_279->item)));
        it_279=it_279->next;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_278;
    come_call_finalizer3(result_278,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result211__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_280;
struct sType* __dec_obj65;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_281;
struct sType* __dec_obj66;
void* __right_value263 = (void*)0;
struct list_item$1sTypeph* litem_282;
struct sType* __dec_obj67;
struct list$1sTypeph* __result212__;
    if(    self->len==0) {
        litem_280=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1084, "list_item$1sTypeph"))));
        litem_280->prev=((void*)0);
        litem_280->next=((void*)0);
        __dec_obj65=litem_280->item;
        litem_280->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_280;
        self->head=litem_280;
    }
    else if(    self->len==1) {
        litem_281=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1094, "list_item$1sTypeph"))));
        litem_281->prev=self->head;
        litem_281->next=((void*)0);
        __dec_obj66=litem_281->item;
        litem_281->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_281;
        self->head->next=litem_281;
    }
    else {
        litem_282=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value263=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1104, "list_item$1sTypeph"))));
        litem_282->prev=self->tail;
        litem_282->next=((void*)0);
        __dec_obj67=litem_282->item;
        litem_282->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_282;
        self->tail=litem_282;
    }
    self->len++;
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result214__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_283;
struct list_item$1sNodeph* it_284;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result219__;
    if(    self==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_283=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1070, "list$1sNodeph"))));
    it_284=self->head;
    while(it_284!=((void*)0)) {
        list$1sNodeph_add(result_283,(struct sNode*)come_increment_ref_count(sNode_clone(it_284->item)));
        it_284=it_284->next;
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_283;
    come_call_finalizer3(result_283,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result215__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_285;
struct sNode* __dec_obj69;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_286;
struct sNode* __dec_obj70;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_287;
struct sNode* __dec_obj71;
struct list$1sNodeph* __result216__;
    if(    self->len==0) {
        litem_285=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1084, "list_item$1sNodeph"))));
        litem_285->prev=((void*)0);
        litem_285->next=((void*)0);
        __dec_obj69=litem_285->item;
        litem_285->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_285;
        self->head=litem_285;
    }
    else if(    self->len==1) {
        litem_286=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1094, "list_item$1sNodeph"))));
        litem_286->prev=self->head;
        litem_286->next=((void*)0);
        __dec_obj70=litem_286->item;
        litem_286->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_286;
        self->head->next=litem_286;
    }
    else {
        litem_287=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1104, "list_item$1sNodeph"))));
        litem_287->prev=self->tail;
        litem_287->next=((void*)0);
        __dec_obj71=litem_287->item;
        litem_287->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_287;
        self->tail=litem_287;
    }
    self->len++;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result217__;
void* __right_value271 = (void*)0;
struct sNode* result_288;
struct sNode* __result218__;
    if(    self==(void*)0) {
        __result217__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_288=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_288->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_288->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_288->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_288->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_288->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_288->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_288->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_288->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_288->kind=self->kind;
    }
    __result218__ = gComeFunResultObject = __result_obj__ = result_288;
    if(result_288) { result_288 = come_decrement_ref_count2(result_288, ((struct sNode*)result_288)->finalize, ((struct sNode*)result_288)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result220__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1charph* result_289;
struct list_item$1charph* it_290;
void* __right_value280 = (void*)0;
struct list$1charph* __result222__;
    if(    self==((void*)0)) {
        __result220__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_289=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1070, "list$1charph"))));
    it_290=self->head;
    while(it_290!=((void*)0)) {
        list$1charph_add(result_289,(char*)come_increment_ref_count(string_clone(it_290->item)));
        it_290=it_290->next;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_289;
    come_call_finalizer3(result_289,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_291;
char* __dec_obj74;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_292;
char* __dec_obj75;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_293;
char* __dec_obj76;
struct list$1charph* __result221__;
    if(    self->len==0) {
        litem_291=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1084, "list_item$1charph"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj74=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1094, "list_item$1charph"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj75=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1104, "list_item$1charph"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj76=litem_293->item;
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphphp_clone(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sTypephcharphph* __result224__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1tuple2$2sTypephcharphph* result_296;
struct list_item$1tuple2$2sTypephcharphph* it_297;
void* __right_value300 = (void*)0;
struct list$1tuple2$2sTypephcharphph* __result229__;
    if(    self==((void*)0)) {
        __result224__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_296=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "./comelang.h", 1070, "list$1tuple2$2sTypephcharphph"))));
    it_297=self->head;
    while(it_297!=((void*)0)) {
        list$1tuple2$2sTypephcharphph_add(result_296,(struct tuple2$2sTypephcharph*)come_increment_ref_count(tuple2$2sTypephcharphp_clone(it_297->item)));
        it_297=it_297->next;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = result_296;
    come_call_finalizer3(result_296,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_initialize(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sTypephcharphph* __result225__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void list$1tuple2$2sTypephcharphphp_finalize(struct list$1tuple2$2sTypephcharphph* self){
struct list_item$1tuple2$2sTypephcharphph* it_294;
struct list_item$1tuple2$2sTypephcharphph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sTypephcharphphp_finalize(struct list_item$1tuple2$2sTypephcharphph* self){
struct tuple2$2sTypephcharph* __dec_obj88;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj88=self->item;
            come_call_finalizer3(__dec_obj88,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_add(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1tuple2$2sTypephcharphph* litem_298;
struct tuple2$2sTypephcharph* __dec_obj91;
void* __right_value295 = (void*)0;
struct list_item$1tuple2$2sTypephcharphph* litem_299;
struct tuple2$2sTypephcharph* __dec_obj94;
void* __right_value296 = (void*)0;
struct list_item$1tuple2$2sTypephcharphph* litem_300;
struct tuple2$2sTypephcharph* __dec_obj97;
struct list$1tuple2$2sTypephcharphph* __result226__;
    if(    self->len==0) {
        litem_298=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(__right_value294=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang.h", 1084, "list_item$1tuple2$2sTypephcharphph"))));
        litem_298->prev=((void*)0);
        litem_298->next=((void*)0);
        __dec_obj91=litem_298->item;
        litem_298->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_298;
        self->head=litem_298;
    }
    else if(    self->len==1) {
        litem_299=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(__right_value295=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang.h", 1094, "list_item$1tuple2$2sTypephcharphph"))));
        litem_299->prev=self->head;
        litem_299->next=((void*)0);
        __dec_obj94=litem_299->item;
        litem_299->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_299;
        self->head->next=litem_299;
    }
    else {
        litem_300=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(__right_value296=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang.h", 1104, "list_item$1tuple2$2sTypephcharphph"))));
        litem_300->prev=self->tail;
        litem_300->next=((void*)0);
        __dec_obj97=litem_300->item;
        litem_300->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_300;
        self->tail=litem_300;
    }
    self->len++;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj98;
char* __dec_obj99;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj98=self->v1;
            come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharphp_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result227__;
void* __right_value297 = (void*)0;
struct tuple2$2sTypephcharph* result_301;
void* __right_value298 = (void*)0;
struct sType* __dec_obj100;
void* __right_value299 = (void*)0;
char* __dec_obj101;
struct tuple2$2sTypephcharph* __result228__;
    if(    self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_301=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharphp_clone", 3, "tuple2$2sTypephcharph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj100=result_301->v1;
        result_301->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj101=result_301->v2;
        result_301->v2=(char*)come_increment_ref_count(string_clone(self->v2));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_301;
    come_call_finalizer3(result_301,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj102=self->v1;
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj103=self->v2;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2sTypephcharphph_finalize(struct list$1tuple2$2sTypephcharphph* self){
struct list_item$1tuple2$2sTypephcharphph* it_302;
struct list_item$1tuple2$2sTypephcharphph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_326;
unsigned int it_327;
_Bool same_key_exist_344;
char* it2_347;
struct map$2charphsClassph* __result252__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_326=charp_get_hash_key(key)%self->size;
    it_327=hash_326;
    while((_Bool)1) {
        if(        self->item_existance[it_327]) {
            if(            charp_equals(self->keys[it_327],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_327]);
                    self->keys[it_327] = come_decrement_ref_count2(self->keys[it_327], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_327]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_327]);
                    self->keys[it_327]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_327],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_327]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_327]=item;
                }
                break;
            }
            it_327++;
            if(            it_327>=self->size) {
                it_327=0;
            }
            else if(            it_327==hash_326) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_327]=(_Bool)1;
            if(            1) {
                self->keys[it_327]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_327]=key;
            }
            if(            1) {
                self->items[it_327]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_327]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_344=(_Bool)0;
    for(    it2_347=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_347=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_347,key)) {
            same_key_exist_344=(_Bool)1;
        }
    }
    if(    !same_key_exist_344) {
        list$1charp_push_back(self->key_list,key);
    }
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_305;
void* __right_value304 = (void*)0;
char** keys_306;
void* __right_value305 = (void*)0;
struct sClass** items_307;
void* __right_value306 = (void*)0;
_Bool* item_existance_308;
int len_309;
char* it_312;
struct sClass* default_value_315;
void* __right_value307 = (void*)0;
struct sClass* it2_316;
unsigned int hash_323;
int n_324;
struct sClass* default_value_325;
void* __right_value308 = (void*)0;
default_value_315 = (void*)0;
default_value_325 = (void*)0;
    size_305=self->size*10;
    keys_306=(char**)come_increment_ref_count(((char**)(__right_value304=(char**)come_calloc(1, sizeof(char*)*(1*(size_305)), "./comelang.h", 2557, "char*%"))));
    items_307=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value305=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_305)), "./comelang.h", 2558, "sClass*%"))));
    item_existance_308=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value306=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_305)), "./comelang.h", 2559, "bool"))));
    len_309=0;
    for(    it_312=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_312=map$2charphsClassph_next(self)    ){
        memset(&default_value_315,0,sizeof(struct sClass*));
        it2_316=((struct sClass*)(__right_value307=map$2charphsClassph_at(self,it_312,default_value_315)));
        come_call_finalizer3(__right_value307,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_323=charp_get_hash_key(it_312)%size_305;
        n_324=hash_323;
        while((_Bool)1) {
            if(            item_existance_308[n_324]) {
                n_324++;
                if(                n_324>=size_305) {
                    n_324=0;
                }
                else if(                n_324==hash_323) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_308[n_324]=(_Bool)1;
                keys_306[n_324]=it_312;
                items_307[n_324]=((struct sClass*)(__right_value308=map$2charphsClassph_at(self,it_312,default_value_325)));
                come_call_finalizer3(__right_value308,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_309++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_306;
    self->items=items_307;
    self->item_existance=item_existance_308;
    self->size=size_305;
    self->len=len_309;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_310;
char* __result232__;
char* __result233__;
char* result_311;
char* __result234__;
result_310 = (void*)0;
result_311 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_310,0,sizeof(char*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_310;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_311,0,sizeof(char*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_311;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_313;
char* __result235__;
char* __result236__;
char* result_314;
char* __result237__;
result_313 = (void*)0;
result_314 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_313,0,sizeof(char*));
        __result235__ = gComeFunResultObject = __result_obj__ = result_313;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result236__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    memset(&result_314,0,sizeof(char*));
    __result237__ = gComeFunResultObject = __result_obj__ = result_314;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_317;
unsigned int it_318;
struct sClass* __result238__;
struct sClass* __result239__;
struct sClass* __result240__;
struct sClass* __result241__;
    hash_317=charp_get_hash_key(((char*)key))%self->size;
    it_318=hash_317;
    while((_Bool)1) {
        if(        self->item_existance[it_318]) {
            if(            charp_equals(self->keys[it_318],key)) {
                __result238__ = gComeFunResultObject = __result_obj__ = self->items[it_318];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result238__;
            }
            it_318++;
            if(            it_318>=self->size) {
                it_318=0;
            }
            else if(            it_318==hash_317) {
                __result239__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result239__;
            }
        }
        else {
            __result240__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result240__;
        }
    }
    __result241__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj110;
struct list$1tuple2$2charphsTypephph* __dec_obj111;
char* __dec_obj115;
char* __dec_obj116;
char* __dec_obj117;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj110=self->mName;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj111=self->mFields;
            come_call_finalizer3(__dec_obj111,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj115=self->mDeclareSName;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj116=self->mParentClassName;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj117=self->mAttribute;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_319;
struct list_item$1tuple2$2charphsTypephph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj112;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj112=self->item;
            come_call_finalizer3(__dec_obj112,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj113;
struct sType* __dec_obj114;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj113=self->v1;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj114=self->v2;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_321;
struct list_item$1tuple2$2charphsTypephph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer3(prev_it_322,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_328;
struct list_item$1charp* it_329;
struct list$1charp* __result245__;
    it2_328=0;
    it_329=self->head;
    while(it_329!=((void*)0)) {
        if(        charp_equals(it_329->item,item)) {
            list$1charp_delete(self,it2_328,it2_328+1);
            break;
        }
        it2_328++;
        it_329=it_329->next;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_330;
struct list$1charp* __result242__;
struct list_item$1charp* it_333;
int i_334;
struct list_item$1charp* prev_it_335;
struct list_item$1charp* it_336;
int i_337;
struct list_item$1charp* prev_it_338;
struct list_item$1charp* it_339;
struct list_item$1charp* head_prev_it_340;
struct list_item$1charp* tail_it_341;
int i_342;
struct list_item$1charp* prev_it_343;
struct list$1charp* __result244__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_330=tail;
        tail=head;
        head=tmp_330;
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
        it_333=self->head;
        i_334=0;
        while(it_333!=((void*)0)) {
            if(            i_334<tail) {
                prev_it_335=it_333;
                it_333=it_333->next;
                i_334++;
                come_call_finalizer3(prev_it_335,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_334==tail) {
                self->head=it_333;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_333=it_333->next;
                i_334++;
            }
        }
    }
    else if(    tail==self->len) {
        it_336=self->head;
        i_337=0;
        while(it_336!=((void*)0)) {
            if(            i_337==head) {
                self->tail=it_336->prev;
                self->tail->next=((void*)0);
            }
            if(            i_337>=head) {
                prev_it_338=it_336;
                it_336=it_336->next;
                i_337++;
                come_call_finalizer3(prev_it_338,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_336=it_336->next;
                i_337++;
            }
        }
    }
    else {
        it_339=self->head;
        head_prev_it_340=((void*)0);
        tail_it_341=((void*)0);
        i_342=0;
        while(it_339!=((void*)0)) {
            if(            i_342==head) {
                head_prev_it_340=it_339->prev;
            }
            if(            i_342==tail) {
                tail_it_341=it_339;
            }
            if(            i_342>=head&&i_342<tail) {
                prev_it_343=it_339;
                it_339=it_339->next;
                i_342++;
                come_call_finalizer3(prev_it_343,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_339=it_339->next;
                i_342++;
            }
        }
        if(        head_prev_it_340!=((void*)0)) {
            head_prev_it_340->next=tail_it_341;
        }
        if(        tail_it_341!=((void*)0)) {
            tail_it_341->prev=head_prev_it_340;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_331;
struct list_item$1charp* prev_it_332;
struct list$1charp* __result243__;
    it_331=self->head;
    while(it_331!=((void*)0)) {
        prev_it_332=it_331;
        it_331=it_331->next;
        come_call_finalizer3(prev_it_332,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result243__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_345;
char* __result246__;
char* __result247__;
char* result_346;
char* __result248__;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_345,0,sizeof(char*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_345;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->it=self->head;
    if(    self->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_346,0,sizeof(char*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_346;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_348;
char* __result249__;
char* __result250__;
char* result_349;
char* __result251__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_348,0,sizeof(char*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_349,0,sizeof(char*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_368;
unsigned int it_369;
_Bool same_key_exist_370;
char* it2_371;
struct map$2charphsTypeph* __result263__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_368=charp_get_hash_key(key)%self->size;
    it_369=hash_368;
    while((_Bool)1) {
        if(        self->item_existance[it_369]) {
            if(            charp_equals(self->keys[it_369],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_369]);
                    self->keys[it_369] = come_decrement_ref_count2(self->keys[it_369], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_369]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_369]);
                    self->keys[it_369]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_369],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_369]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_369]=item;
                }
                break;
            }
            it_369++;
            if(            it_369>=self->size) {
                it_369=0;
            }
            else if(            it_369==hash_368) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_369]=(_Bool)1;
            if(            1) {
                self->keys[it_369]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_369]=key;
            }
            if(            1) {
                self->items[it_369]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_369]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_370=(_Bool)0;
    for(    it2_371=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_371=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_371,key)) {
            same_key_exist_370=(_Bool)1;
        }
    }
    if(    !same_key_exist_370) {
        list$1charp_push_back(self->key_list,key);
    }
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_351;
void* __right_value315 = (void*)0;
char** keys_352;
void* __right_value316 = (void*)0;
struct sType** items_353;
void* __right_value317 = (void*)0;
_Bool* item_existance_354;
int len_355;
char* it_358;
struct sType* default_value_361;
void* __right_value318 = (void*)0;
struct sType* it2_362;
unsigned int hash_365;
int n_366;
struct sType* default_value_367;
void* __right_value319 = (void*)0;
default_value_361 = (void*)0;
default_value_367 = (void*)0;
    size_351=self->size*10;
    keys_352=(char**)come_increment_ref_count(((char**)(__right_value315=(char**)come_calloc(1, sizeof(char*)*(1*(size_351)), "./comelang.h", 2557, "char*%"))));
    items_353=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value316=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_351)), "./comelang.h", 2558, "sType*%"))));
    item_existance_354=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value317=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_351)), "./comelang.h", 2559, "bool"))));
    len_355=0;
    for(    it_358=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_358=map$2charphsTypeph_next(self)    ){
        memset(&default_value_361,0,sizeof(struct sType*));
        it2_362=((struct sType*)(__right_value318=map$2charphsTypeph_at(self,it_358,default_value_361)));
        come_call_finalizer3(__right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_365=charp_get_hash_key(it_358)%size_351;
        n_366=hash_365;
        while((_Bool)1) {
            if(            item_existance_354[n_366]) {
                n_366++;
                if(                n_366>=size_351) {
                    n_366=0;
                }
                else if(                n_366==hash_365) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_354[n_366]=(_Bool)1;
                keys_352[n_366]=it_358;
                items_353[n_366]=((struct sType*)(__right_value319=map$2charphsTypeph_at(self,it_358,default_value_367)));
                come_call_finalizer3(__right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_355++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_352;
    self->items=items_353;
    self->item_existance=item_existance_354;
    self->size=size_351;
    self->len=len_355;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_356;
char* __result253__;
char* __result254__;
char* result_357;
char* __result255__;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_356;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_357,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_357;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_359;
char* __result256__;
char* __result257__;
char* result_360;
char* __result258__;
result_359 = (void*)0;
result_360 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_359,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_359;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_360,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_360;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_363;
unsigned int it_364;
struct sType* __result259__;
struct sType* __result260__;
struct sType* __result261__;
struct sType* __result262__;
    hash_363=charp_get_hash_key(((char*)key))%self->size;
    it_364=hash_363;
    while((_Bool)1) {
        if(        self->item_existance[it_364]) {
            if(            charp_equals(self->keys[it_364],key)) {
                __result259__ = gComeFunResultObject = __result_obj__ = self->items[it_364];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
            it_364++;
            if(            it_364>=self->size) {
                it_364=0;
            }
            else if(            it_364==hash_363) {
                __result260__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
        }
        else {
            __result261__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_389;
unsigned int it_390;
_Bool same_key_exist_391;
char* it2_392;
struct map$2charphbufferph* __result274__;
    if(    self->len*10>=self->size) {
        map$2charphbufferph_rehash(self);
    }
    hash_389=charp_get_hash_key(key)%self->size;
    it_390=hash_389;
    while((_Bool)1) {
        if(        self->item_existance[it_390]) {
            if(            charp_equals(self->keys[it_390],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_390]);
                    self->keys[it_390] = come_decrement_ref_count2(self->keys[it_390], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_390]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_390]);
                    self->keys[it_390]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_390],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_390]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_390]=item;
                }
                break;
            }
            it_390++;
            if(            it_390>=self->size) {
                it_390=0;
            }
            else if(            it_390==hash_389) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_390]=(_Bool)1;
            if(            1) {
                self->keys[it_390]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_390]=key;
            }
            if(            1) {
                self->items[it_390]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_390]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_391=(_Bool)0;
    for(    it2_392=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_392=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_392,key)) {
            same_key_exist_391=(_Bool)1;
        }
    }
    if(    !same_key_exist_391) {
        list$1charp_push_back(self->key_list,key);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void map$2charphbufferph_rehash(struct map$2charphbufferph* self){
int size_372;
void* __right_value322 = (void*)0;
char** keys_373;
void* __right_value323 = (void*)0;
struct buffer** items_374;
void* __right_value324 = (void*)0;
_Bool* item_existance_375;
int len_376;
char* it_379;
struct buffer* default_value_382;
void* __right_value325 = (void*)0;
struct buffer* it2_383;
unsigned int hash_386;
int n_387;
struct buffer* default_value_388;
void* __right_value326 = (void*)0;
default_value_382 = (void*)0;
default_value_388 = (void*)0;
    size_372=self->size*10;
    keys_373=(char**)come_increment_ref_count(((char**)(__right_value322=(char**)come_calloc(1, sizeof(char*)*(1*(size_372)), "./comelang.h", 2557, "char*%"))));
    items_374=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value323=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_372)), "./comelang.h", 2558, "buffer*%"))));
    item_existance_375=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value324=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_372)), "./comelang.h", 2559, "bool"))));
    len_376=0;
    for(    it_379=map$2charphbufferph_begin(self);    !map$2charphbufferph_end(self);    it_379=map$2charphbufferph_next(self)    ){
        memset(&default_value_382,0,sizeof(struct buffer*));
        it2_383=((struct buffer*)(__right_value325=map$2charphbufferph_at(self,it_379,default_value_382)));
        come_call_finalizer3(__right_value325,buffer_finalize, 0, 1, 0, 0, (void*)0);
        hash_386=charp_get_hash_key(it_379)%size_372;
        n_387=hash_386;
        while((_Bool)1) {
            if(            item_existance_375[n_387]) {
                n_387++;
                if(                n_387>=size_372) {
                    n_387=0;
                }
                else if(                n_387==hash_386) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_375[n_387]=(_Bool)1;
                keys_373[n_387]=it_379;
                items_374[n_387]=((struct buffer*)(__right_value326=map$2charphbufferph_at(self,it_379,default_value_388)));
                come_call_finalizer3(__right_value326,buffer_finalize, 0, 1, 0, 0, (void*)0);
                len_376++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_373;
    self->items=items_374;
    self->item_existance=item_existance_375;
    self->size=size_372;
    self->len=len_376;
}

static char* map$2charphbufferph_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_377;
char* __result264__;
char* __result265__;
char* result_378;
char* __result266__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_377,0,sizeof(char*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_378,0,sizeof(char*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferph_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_380;
char* __result267__;
char* __result268__;
char* result_381;
char* __result269__;
result_380 = (void*)0;
result_381 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_380,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_380;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_381,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_381;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_384;
unsigned int it_385;
struct buffer* __result270__;
struct buffer* __result271__;
struct buffer* __result272__;
struct buffer* __result273__;
    hash_384=charp_get_hash_key(((char*)key))%self->size;
    it_385=hash_384;
    while((_Bool)1) {
        if(        self->item_existance[it_385]) {
            if(            charp_equals(self->keys[it_385],key)) {
                __result270__ = gComeFunResultObject = __result_obj__ = self->items[it_385];
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result270__;
            }
            it_385++;
            if(            it_385>=self->size) {
                it_385=0;
            }
            else if(            it_385==hash_384) {
                __result271__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
        }
        else {
            __result272__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result272__;
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_begin(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* result_394;
struct tuple2$2sTypephcharph* __result275__;
struct tuple2$2sTypephcharph* __result276__;
struct tuple2$2sTypephcharph* result_395;
struct tuple2$2sTypephcharph* __result277__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_394,0,sizeof(struct tuple2$2sTypephcharph*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->it=self->head;
    if(    self->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_395,0,sizeof(struct tuple2$2sTypephcharph*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static _Bool list$1tuple2$2sTypephcharphph_end(struct list$1tuple2$2sTypephcharphph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sTypephcharph* list$1tuple2$2sTypephcharphph_next(struct list$1tuple2$2sTypephcharphph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* result_397;
struct tuple2$2sTypephcharph* __result278__;
struct tuple2$2sTypephcharph* __result279__;
struct tuple2$2sTypephcharph* result_398;
struct tuple2$2sTypephcharph* __result280__;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_397,0,sizeof(struct tuple2$2sTypephcharph*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_397;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_398,0,sizeof(struct tuple2$2sTypephcharph*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_398;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_406;
_Bool in_typedef_407;
void* __right_value353 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_408=0;
char* type_name_409=0;
_Bool err_410=0;
void* __right_value354 = (void*)0;
struct sType* base_type_411;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1tuple2$2sTypephcharphph* multiple_declare_412;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct tuple2$2sTypephcharph* variable_name_413;
void* __right_value362 = (void*)0;
struct tuple2$2sTypephcharph* variable_name2_417;
void* __right_value363 = (void*)0;
struct tuple2$2sTypephcharph* variable_name_418;
char* source_tail_419;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct buffer* header_420;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* _inf_value1;
struct sTypedefNode* _inf_obj_value1;
void* __right_value375 = (void*)0;
struct sNode* node_421;
_Bool Value_423;
struct sNode* __result286__;
void* __right_value376 = (void*)0;
struct sNode* __result287__;
char* source_tail_424;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct buffer* header_425;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sNode* _inf_value2;
struct sTypedefNode* _inf_obj_value2;
void* __right_value388 = (void*)0;
struct sNode* node_426;
_Bool Value_428;
struct sNode* __result290__;
void* __right_value389 = (void*)0;
struct sNode* __result291__;
void* __right_value390 = (void*)0;
struct sNode* __result292__;
    source_head_406=info->p;
    if(    charp_operator_equals(buf,"typedef")) {
        in_typedef_407=info->in_typedef;
        info->in_typedef=(_Bool)1;
        multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value353=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_408=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
        type_name_409=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        err_410=multiple_assign_var2->v3;
        come_call_finalizer3(__right_value353,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_410) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->in_typedef=(_Bool)0;
        info->in_typedef=in_typedef_407;
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            base_type_411=(struct sType*)come_increment_ref_count(sType_clone(type_408));
            multiple_declare_412=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "17typedef.c", 137, "list$1tuple2$2sTypephcharphph"))));
            variable_name_413=(struct tuple2$2sTypephcharph*)come_increment_ref_count(tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "17typedef.c", 139, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(base_type_411),(char*)come_increment_ref_count(type_name_409)));
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_412,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_413));
            variable_name2_417=(struct tuple2$2sTypephcharph*)come_increment_ref_count(parse_variable_name((struct sType*)come_increment_ref_count(base_type_411),(_Bool)1,info));
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_412,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name2_417));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_418=(struct tuple2$2sTypephcharph*)come_increment_ref_count(parse_variable_name((struct sType*)come_increment_ref_count(base_type_411),(_Bool)0,info));
                list$1tuple2$2sTypephcharphph_push_back(multiple_declare_412,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_418));
                come_call_finalizer3(variable_name_418,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_419=info->p;
            header_420=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 156, "buffer"))));
            buffer_append_str(header_420,"typedef ");
            buffer_append(header_420,source_head_406,source_tail_419-source_head_406);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value366=buffer_to_string(header_420))));
            __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 162, "struct sNode");
            _inf_obj_value1=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(__right_value368=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count((struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 162, "sTypedefNode")),(char*)come_increment_ref_count(type_name_409),(struct sType*)come_increment_ref_count(type_408),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_412),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sTypedefNode_finalize;
            _inf_value1->clone=(void*)sTypedefNode_clone;
            _inf_value1->compile=(void*)sTypedefNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sTypedefNode_terminated;
            _inf_value1->kind=(void*)sTypedefNode_kind;
            node_421=(struct sNode*)come_increment_ref_count(_inf_value1);
            come_call_finalizer3(__right_value368,sTypedefNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_423=node_compile(node_421,info);
            if(            !Value_423) {
                __result286__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                come_call_finalizer3(base_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(multiple_declare_412,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_413,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name2_417,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_420,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_421) { node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_409 = come_decrement_ref_count2(type_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result286__;
            }
            else {
            }
            __result287__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value376=create_nothing_node(info)));
            come_call_finalizer3(base_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_declare_412,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_413,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_417,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_420,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_421) { node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_409 = come_decrement_ref_count2(type_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value376) { __right_value376 = come_decrement_ref_count2(__right_value376, ((struct sNode*)__right_value376)->finalize, ((struct sNode*)__right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result287__;
            come_call_finalizer3(base_type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_declare_412,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_413,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_417,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_420,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_421) { node_421 = come_decrement_ref_count2(node_421, ((struct sNode*)node_421)->finalize, ((struct sNode*)node_421)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            source_tail_424=info->p;
            header_425=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 173, "buffer"))));
            buffer_append_str(header_425,"typedef ");
            buffer_append(header_425,source_head_406,source_tail_424-source_head_406);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value379=buffer_to_string(header_425))));
            __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 179, "struct sNode");
            _inf_obj_value2=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(__right_value381=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count((struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 179, "sTypedefNode")),(char*)come_increment_ref_count(type_name_409),(struct sType*)come_increment_ref_count(type_408),((void*)0),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sTypedefNode_finalize;
            _inf_value2->clone=(void*)sTypedefNode_clone;
            _inf_value2->compile=(void*)sTypedefNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sTypedefNode_terminated;
            _inf_value2->kind=(void*)sTypedefNode_kind;
            node_426=(struct sNode*)come_increment_ref_count(_inf_value2);
            come_call_finalizer3(__right_value381,sTypedefNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_428=node_compile(node_426,info);
            if(            !Value_428) {
                __result290__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                come_call_finalizer3(header_425,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_409 = come_decrement_ref_count2(type_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result290__;
            }
            else {
            }
            __result291__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value389=create_nothing_node(info)));
            come_call_finalizer3(header_425,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_409 = come_decrement_ref_count2(type_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value389) { __right_value389 = come_decrement_ref_count2(__right_value389, ((struct sNode*)__right_value389)->finalize, ((struct sNode*)__right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result291__;
            come_call_finalizer3(header_425,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_409 = come_decrement_ref_count2(type_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result292__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value390=top_level_v94(buf,head,head_sline,info)));
    if(__right_value390) { __right_value390 = come_decrement_ref_count2(__right_value390, ((struct sNode*)__right_value390)->finalize, ((struct sNode*)__right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj121;
char* __dec_obj122;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj121=self->v1;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj122=self->v2;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj123;
char* __dec_obj124;
struct tuple2$2sTypephcharph* __result282__;
    __dec_obj123=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj124=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1tuple2$2sTypephcharphph* list$1tuple2$2sTypephcharphph_push_back(struct list$1tuple2$2sTypephcharphph* self, struct tuple2$2sTypephcharph* item){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
struct list_item$1tuple2$2sTypephcharphph* litem_414;
struct tuple2$2sTypephcharph* __dec_obj125;
void* __right_value360 = (void*)0;
struct list_item$1tuple2$2sTypephcharphph* litem_415;
struct tuple2$2sTypephcharph* __dec_obj126;
void* __right_value361 = (void*)0;
struct list_item$1tuple2$2sTypephcharphph* litem_416;
struct tuple2$2sTypephcharph* __dec_obj127;
struct list$1tuple2$2sTypephcharphph* __result283__;
    if(    self->len==0) {
        litem_414=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(__right_value359=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang.h", 1154, "list_item$1tuple2$2sTypephcharphph"))));
        litem_414->prev=((void*)0);
        litem_414->next=((void*)0);
        __dec_obj125=litem_414->item;
        litem_414->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,tuple2$2sTypephcharph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_414;
        self->head=litem_414;
    }
    else if(    self->len==1) {
        litem_415=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(__right_value360=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang.h", 1164, "list_item$1tuple2$2sTypephcharphph"))));
        litem_415->prev=self->head;
        litem_415->next=((void*)0);
        __dec_obj126=litem_415->item;
        litem_415->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,tuple2$2sTypephcharph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_415;
        self->head->next=litem_415;
    }
    else {
        litem_416=(struct list_item$1tuple2$2sTypephcharphph*)come_increment_ref_count(((struct list_item$1tuple2$2sTypephcharphph*)(__right_value361=(struct list_item$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sTypephcharphph)*(1), "./comelang.h", 1174, "list_item$1tuple2$2sTypephcharphph"))));
        litem_416->prev=self->tail;
        litem_416->next=((void*)0);
        __dec_obj127=litem_416->item;
        litem_416->item=(struct tuple2$2sTypephcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,tuple2$2sTypephcharph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_416;
        self->tail=litem_416;
    }
    self->len++;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_typedef_429;
void* __right_value391 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_430=0;
char* type_name_431=0;
_Bool err_432=0;
void* __right_value392 = (void*)0;
struct sType* base_type_433;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1tuple2$2sTypephcharphph* multiple_declare_434;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple2$2sTypephcharph* variable_name_435;
void* __right_value397 = (void*)0;
struct tuple2$2sTypephcharph* variable_name2_436;
void* __right_value398 = (void*)0;
struct tuple2$2sTypephcharph* variable_name_437;
char* source_tail_438;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct buffer* header_439;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sNode* _inf_value3;
struct sTypedefNode* _inf_obj_value3;
void* __right_value410 = (void*)0;
struct sNode* node_440;
_Bool Value_442;
struct sNode* __result295__;
void* __right_value411 = (void*)0;
struct sNode* __result296__;
char* source_tail_443;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct buffer* header_444;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* _inf_value4;
struct sTypedefNode* _inf_obj_value4;
void* __right_value423 = (void*)0;
struct sNode* node_445;
_Bool Value_447;
struct sNode* __result299__;
void* __right_value424 = (void*)0;
struct sNode* __result300__;
void* __right_value425 = (void*)0;
struct sNode* __result301__;
    if(    charp_operator_equals(buf,"typedef")) {
        in_typedef_429=info->in_typedef;
        info->in_typedef=(_Bool)1;
        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value391=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        type_430=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
        type_name_431=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        err_432=multiple_assign_var3->v3;
        come_call_finalizer3(__right_value391,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_432) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->in_typedef=(_Bool)0;
        info->in_typedef=in_typedef_429;
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            base_type_433=(struct sType*)come_increment_ref_count(sType_clone(type_430));
            multiple_declare_434=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(list$1tuple2$2sTypephcharphph_initialize((struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count((struct list$1tuple2$2sTypephcharphph*)come_calloc(1, sizeof(struct list$1tuple2$2sTypephcharphph)*(1), "17typedef.c", 212, "list$1tuple2$2sTypephcharphph"))));
            variable_name_435=(struct tuple2$2sTypephcharph*)come_increment_ref_count(tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "17typedef.c", 214, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(base_type_433),(char*)come_increment_ref_count(type_name_431)));
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_434,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_435));
            variable_name2_436=(struct tuple2$2sTypephcharph*)come_increment_ref_count(parse_variable_name((struct sType*)come_increment_ref_count(base_type_433),(_Bool)1,info));
            list$1tuple2$2sTypephcharphph_push_back(multiple_declare_434,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name2_436));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                variable_name_437=(struct tuple2$2sTypephcharph*)come_increment_ref_count(parse_variable_name((struct sType*)come_increment_ref_count(base_type_433),(_Bool)0,info));
                list$1tuple2$2sTypephcharphph_push_back(multiple_declare_434,(struct tuple2$2sTypephcharph*)come_increment_ref_count(variable_name_437));
                come_call_finalizer3(variable_name_437,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_438=info->p;
            header_439=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 231, "buffer"))));
            buffer_append_str(header_439,"typedef ");
            buffer_append(header_439,head,source_tail_438-head);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value401=buffer_to_string(header_439))));
            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 237, "struct sNode");
            _inf_obj_value3=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(__right_value403=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count((struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 237, "sTypedefNode")),(char*)come_increment_ref_count(type_name_431),(struct sType*)come_increment_ref_count(type_430),(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(multiple_declare_434),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sTypedefNode_finalize;
            _inf_value3->clone=(void*)sTypedefNode_clone;
            _inf_value3->compile=(void*)sTypedefNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sTypedefNode_terminated;
            _inf_value3->kind=(void*)sTypedefNode_kind;
            node_440=(struct sNode*)come_increment_ref_count(_inf_value3);
            come_call_finalizer3(__right_value403,sTypedefNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_442=node_compile(node_440,info);
            if(            !Value_442) {
                __result295__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                come_call_finalizer3(base_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(multiple_declare_434,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name_435,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(variable_name2_436,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_431 = come_decrement_ref_count2(type_name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result295__;
            }
            else {
            }
            __result296__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value411=create_nothing_node(info)));
            come_call_finalizer3(base_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_declare_434,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_435,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_436,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_431 = come_decrement_ref_count2(type_name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value411) { __right_value411 = come_decrement_ref_count2(__right_value411, ((struct sNode*)__right_value411)->finalize, ((struct sNode*)__right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result296__;
            come_call_finalizer3(base_type_433,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_declare_434,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name_435,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(variable_name2_436,tuple2$2sTypephcharphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_439,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            source_tail_443=info->p;
            header_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "17typedef.c", 248, "buffer"))));
            buffer_append_str(header_444,"typedef ");
            buffer_append(header_444,head,source_tail_443-head);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value414=buffer_to_string(header_444))));
            __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "17typedef.c", 254, "struct sNode");
            _inf_obj_value4=(struct sTypedefNode*)come_increment_ref_count(((struct sTypedefNode*)(__right_value416=sTypedefNode_initialize((struct sTypedefNode*)come_increment_ref_count((struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "17typedef.c", 254, "sTypedefNode")),(char*)come_increment_ref_count(type_name_431),(struct sType*)come_increment_ref_count(type_430),((void*)0),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sTypedefNode_finalize;
            _inf_value4->clone=(void*)sTypedefNode_clone;
            _inf_value4->compile=(void*)sTypedefNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sTypedefNode_terminated;
            _inf_value4->kind=(void*)sTypedefNode_kind;
            node_445=(struct sNode*)come_increment_ref_count(_inf_value4);
            come_call_finalizer3(__right_value416,sTypedefNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_447=node_compile(node_445,info);
            if(            !Value_447) {
                __result299__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                come_call_finalizer3(header_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_445) { node_445 = come_decrement_ref_count2(node_445, ((struct sNode*)node_445)->finalize, ((struct sNode*)node_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_431 = come_decrement_ref_count2(type_name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result299__;
            }
            else {
            }
            __result300__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value424=create_nothing_node(info)));
            come_call_finalizer3(header_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_445) { node_445 = come_decrement_ref_count2(node_445, ((struct sNode*)node_445)->finalize, ((struct sNode*)node_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_431 = come_decrement_ref_count2(type_name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value424) { __right_value424 = come_decrement_ref_count2(__right_value424, ((struct sNode*)__right_value424)->finalize, ((struct sNode*)__right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result300__;
            come_call_finalizer3(header_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_445) { node_445 = come_decrement_ref_count2(node_445, ((struct sNode*)node_445)->finalize, ((struct sNode*)node_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_431 = come_decrement_ref_count2(type_name_431, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=string_node_v15(buf,head,head_sline,info)));
    if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void sTypedefNode_finalize(struct sTypedefNode* self){
char* __dec_obj158;
char* __dec_obj159;
struct sType* __dec_obj160;
char* __dec_obj161;
struct list$1tuple2$2sTypephcharphph* __dec_obj162;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj158=self->sname;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTypeName!=((void*)0)) {
        if(        self->mTypeName==gComeFunResultObject) {
            __dec_obj159=self->mTypeName;
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTypeName = come_decrement_ref_count2(self->mTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj160=self->mType;
            come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj161=self->mDeclareSName;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj162=self->multiple_declare;
            come_call_finalizer3(__dec_obj162,list$1tuple2$2sTypephcharphph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple2$2sTypephcharphphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTypedefNode* sTypedefNode_clone(struct sTypedefNode* self){
void* __result_obj__=(void*)0;
struct sTypedefNode* __result297__;
void* __right_value417 = (void*)0;
struct sTypedefNode* result_446;
void* __right_value418 = (void*)0;
char* __dec_obj163;
void* __right_value419 = (void*)0;
char* __dec_obj164;
void* __right_value420 = (void*)0;
struct sType* __dec_obj165;
void* __right_value421 = (void*)0;
char* __dec_obj166;
void* __right_value422 = (void*)0;
struct list$1tuple2$2sTypephcharphph* __dec_obj167;
struct sTypedefNode* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_446=(struct sTypedefNode*)come_increment_ref_count((struct sTypedefNode*)come_calloc(1, sizeof(struct sTypedefNode)*(1), "sTypedefNode_clone", 3, "sTypedefNode"));
    if(    self!=((void*)0)) {
        result_446->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_446->sname;
        result_446->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_446->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mTypeName!=((void*)0)) {
        __dec_obj164=result_446->mTypeName;
        result_446->mTypeName=(char*)come_increment_ref_count(string_clone(self->mTypeName));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj165=result_446->mType;
        result_446->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj166=result_446->mDeclareSName;
        result_446->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj167=result_446->multiple_declare;
        result_446->multiple_declare=(struct list$1tuple2$2sTypephcharphph*)come_increment_ref_count(list$1tuple2$2sTypephcharphphp_clone(self->multiple_declare));
        come_call_finalizer3(__dec_obj167,list$1tuple2$2sTypephcharphph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_446;
    come_call_finalizer3(result_446,sTypedefNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

