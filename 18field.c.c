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
struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sNullCheckNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};

struct sNullableNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sRangeCheckNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);
char* sRangeCheckNode_kind(struct sRangeCheckNode* self);
_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value288 = (void*)0;
struct sType* generics_type_266;
struct sType* __dec_obj84;
struct sClass* klass_295;
char* class_name_296;
char* fun_name2_297;
struct sFun* operator_fun_298;
void* __right_value289 = (void*)0;
char* none_generics_name_299;
void* __right_value290 = (void*)0;
struct sType* obj_type_300;
void* __right_value291 = (void*)0;
char* __dec_obj85;
void* __right_value292 = (void*)0;
char* fun_name3_301;
void* __right_value293 = (void*)0;
struct sGenericsFun* generics_fun_302;
void* __right_value294 = (void*)0;
_Bool _if_conditional1;
_Bool __result228__;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj113;
int i_308;
void* __right_value297 = (void*)0;
char* new_fun_name_309;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
char* __dec_obj114;
void* __right_value300 = (void*)0;
_Bool result_310;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_311;
char* left_value2_312;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
_Bool _if_conditional2;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __dec_obj115;
void* __right_value309 = (void*)0;
char* __dec_obj116;
char* middle_value2_316;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
_Bool _if_conditional3;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj117;
void* __right_value316 = (void*)0;
char* __dec_obj118;
char* right_value2_317;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
_Bool _if_conditional4;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* __dec_obj119;
void* __right_value323 = (void*)0;
char* __dec_obj120;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
char* __dec_obj121;
void* __right_value329 = (void*)0;
struct sType* result_type1_318;
void* __right_value330 = (void*)0;
struct sType* result_type2_319;
void* __right_value331 = (void*)0;
struct sType* __dec_obj122;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* __dec_obj123;
void* __right_value334 = (void*)0;
char* __dec_obj124;
_Bool __result236__;
fun_name2_297 = (void*)0;
memset(&i_308, 0, sizeof(int));
left_value2_312 = (void*)0;
middle_value2_316 = (void*)0;
right_value2_317 = (void*)0;
    generics_type_266=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_266->mNoSolvedGenericsType->v1) {
        __dec_obj84=generics_type_266;
        generics_type_266=(struct sType*)come_increment_ref_count(generics_type_266->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_295=type->mClass;
    class_name_296=klass_295->mName;
    operator_fun_298=((void*)0);
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_299=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_300=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj85=fun_name2_297;
        fun_name2_297=(char*)come_increment_ref_count(create_method_name(obj_type_300,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_301=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_299,fun_name));
        generics_fun_302=((struct sGenericsFun*)(__right_value293=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_301,((void*)0))));
        come_call_finalizer3(__right_value293,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_302) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_297)),generics_fun_302,obj_type_300,info))),            _if_conditional1) {
                __result228__ = (_Bool)0;
                none_generics_name_299 = come_decrement_ref_count2(none_generics_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_301 = come_decrement_ref_count2(fun_name3_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_297 = come_decrement_ref_count2(fun_name2_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result228__;
            }
        }
        operator_fun_298=((struct sFun*)(__right_value295=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_297)));
        come_call_finalizer3(__right_value295,sFun_finalize, 0, 1, 0, 0, (void*)0);
        none_generics_name_299 = come_decrement_ref_count2(none_generics_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_301 = come_decrement_ref_count2(fun_name3_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj113=fun_name2_297;
        fun_name2_297=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_308=128-1;        i_308>=1;        i_308--        ){
            new_fun_name_309=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_297,i_308));
            operator_fun_298=((struct sFun*)(__right_value298=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_309)));
            come_call_finalizer3(__right_value298,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            operator_fun_298) {
                __dec_obj114=fun_name2_297;
                fun_name2_297=(char*)come_increment_ref_count(__builtin_string(new_fun_name_309));
                __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_309 = come_decrement_ref_count2(new_fun_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_309 = come_decrement_ref_count2(new_fun_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_298==((void*)0)) {
            operator_fun_298=((struct sFun*)(__right_value300=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_297)));
            come_call_finalizer3(__right_value300,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    result_310=(_Bool)0;
    if(    operator_fun_298) {
        come_value_311=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        check_assign_type(((char*)(__right_value304=xsprintf("\%s is assigned to",((char*)(__right_value303=string_to_string(fun_name2_297)))))),((struct sType*)come_null_check(((struct sType*)(__right_value305=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,0))), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value305,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value306=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,0))), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value306,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value307=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,0))), "18field.c", 65, 2)),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value307,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj115=left_value2_312;
            left_value2_312=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj116=left_value2_312;
            left_value2_312=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value311=xsprintf("\%s is assigned to",((char*)(__right_value310=string_to_string(fun_name2_297)))))),((struct sType*)come_null_check(((struct sType*)(__right_value312=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,1))), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value312,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional3=(((struct sType*)come_null_check(((struct sType*)(__right_value313=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,1))), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap)),        come_call_finalizer3(__right_value313,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional3) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value314=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,1))), "18field.c", 74, 5)),middle_value->type,middle_value,info,(_Bool)1);
            come_call_finalizer3(__right_value314,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj117=middle_value2_316;
            middle_value2_316=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj118=middle_value2_316;
            middle_value2_316=(char*)come_increment_ref_count(string_clone(middle_value->c_value));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value318=xsprintf("\%s is assigned to",((char*)(__right_value317=string_to_string(fun_name2_297)))))),((struct sType*)come_null_check(((struct sType*)(__right_value319=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,2))), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value320=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,2))), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap)),        come_call_finalizer3(__right_value320,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value321=list$1sTypephp_operator_load_element(operator_fun_298->mParamTypes,2))), "18field.c", 83, 8)),right_value->type,right_value,info,(_Bool)1);
            come_call_finalizer3(__right_value321,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj119=right_value2_317;
            right_value2_317=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj120=right_value2_317;
            right_value2_317=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj121=come_value_311->c_value;
        come_value_311->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value324=string_to_string(fun_name2_297))),((char*)(__right_value325=string_to_string(left_value2_312))),((char*)(__right_value326=string_to_string(middle_value2_316))),((char*)(__right_value327=string_to_string(right_value2_317)))));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_318=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_298->mResultType));
        result_type2_319=(struct sType*)come_increment_ref_count(solve_generics(result_type1_318,generics_type_266,info));
        __dec_obj122=come_value_311->type;
        come_value_311->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_319));
        come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_311->var=((void*)0);
        if(        result_type2_319->mHeap) {
            append_object_to_right_values2(come_value_311,(struct sType*)come_increment_ref_count(result_type2_319),info,(_Bool)0);
        }
        if(        result_type2_319->mGuardValue&&result_type2_319->mPointerNum>0) {
            __dec_obj123=come_value_311->c_value;
            come_value_311->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value332=make_type_name_string(result_type2_319,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_311->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj124=come_value_311->c_value;
        come_value_311->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_311->c_value,come_value_311->type,info));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_311->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_311));
        result_310=(_Bool)1;
        come_call_finalizer3(come_value_311,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_312 = come_decrement_ref_count2(left_value2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_316 = come_decrement_ref_count2(middle_value2_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_317 = come_decrement_ref_count2(right_value2_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_318,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_319,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result236__ = result_310;
    come_call_finalizer3(generics_type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_297 = come_decrement_ref_count2(fun_name2_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result236__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result207__;
void* __right_value249 = (void*)0;
struct sType* result_267;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value255 = (void*)0;
char* __dec_obj61;
void* __right_value256 = (void*)0;
char* __dec_obj62;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __dec_obj71;
void* __right_value279 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value280 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value284 = (void*)0;
char* __dec_obj80;
void* __right_value285 = (void*)0;
char* __dec_obj81;
void* __right_value286 = (void*)0;
char* __dec_obj82;
void* __right_value287 = (void*)0;
char* __dec_obj83;
struct sType* __result223__;
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
        __dec_obj58=result_267->mNoSolvedGenericsType;
        result_267->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj59=result_267->mOriginalLoadVarType;
        result_267->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj60=result_267->mRefferenceOriginalType;
        result_267->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj61=result_267->mInterfaceName;
        result_267->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_267->mGenericsName;
        result_267->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_267->mGenericsTypes;
        result_267->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_267->mArrayNum;
        result_267->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_267->mParamTypes;
        result_267->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_267->mParamNames;
        result_267->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_267->mResultType;
        result_267->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_267->mAlignas;
        result_267->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_267->mChannelType;
        result_267->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
        __dec_obj79=result_267->mSizeNum;
        result_267->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_267->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_267->mOriginalTypeName;
        result_267->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj81=result_267->mAsmName;
        result_267->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj82=result_267->mTupleName;
        result_267->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj83=result_267->mAttribute;
        result_267->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_267->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_267;
    come_call_finalizer3(result_267,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
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
struct list$1sTypeph* __dec_obj41;
struct list$1sNodeph* __dec_obj43;
struct list$1sTypeph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct tuple1$1sTypeph* __dec_obj47;
struct sNode* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
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
            come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            __dec_obj46=self->mParamNames;
            come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj47=self->mResultType;
            come_call_finalizer3(__dec_obj47,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj49=self->mAlignas;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj50=self->mChannelType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj52=self->mSizeNum;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj53=self->mOriginalTypeName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj54=self->mAsmName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj55=self->mTupleName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj56=self->mAttribute;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_269;
struct list_item$1sTypeph* prev_it_270;
    it_269=self->head;
    while(it_269!=((void*)0)) {
        prev_it_270=it_269;
        it_269=it_269->next;
        come_call_finalizer3(prev_it_270,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_271;
struct list_item$1sTypeph* prev_it_272;
    it_271=self->head;
    while(it_271!=((void*)0)) {
        prev_it_272=it_271;
        it_271=it_271->next;
        come_call_finalizer3(prev_it_272,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_277;
struct list_item$1charph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        come_call_finalizer3(prev_it_278,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj51;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj51=self->v1;
            come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result210__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sTypeph* result_279;
struct list_item$1sTypeph* it_280;
void* __right_value262 = (void*)0;
struct list$1sTypeph* __result213__;
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_279=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_280=self->head;
    while(it_280!=((void*)0)) {
        list$1sTypeph_add(result_279,(struct sType*)come_increment_ref_count(sType_clone(it_280->item)));
        it_280=it_280->next;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_279;
    come_call_finalizer3(result_279,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value259 = (void*)0;
struct list_item$1sTypeph* litem_281;
struct sType* __dec_obj63;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_282;
struct sType* __dec_obj64;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_283;
struct sType* __dec_obj65;
struct list$1sTypeph* __result212__;
    if(    self->len==0) {
        litem_281=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value259=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_281->prev=((void*)0);
        litem_281->next=((void*)0);
        __dec_obj63=litem_281->item;
        litem_281->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_281;
        self->head=litem_281;
    }
    else if(    self->len==1) {
        litem_282=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_282->prev=self->head;
        litem_282->next=((void*)0);
        __dec_obj64=litem_282->item;
        litem_282->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head->next=litem_282;
    }
    else {
        litem_283=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_283->prev=self->tail;
        litem_283->next=((void*)0);
        __dec_obj65=litem_283->item;
        litem_283->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_283;
        self->tail=litem_283;
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
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNodeph* result_284;
struct list_item$1sNodeph* it_285;
void* __right_value270 = (void*)0;
struct list$1sNodeph* __result219__;
    if(    self==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_284=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_285=self->head;
    while(it_285!=((void*)0)) {
        list$1sNodeph_add(result_284,(struct sNode*)come_increment_ref_count(sNode_clone(it_285->item)));
        it_285=it_285->next;
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_284;
    come_call_finalizer3(result_284,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value266 = (void*)0;
struct list_item$1sNodeph* litem_286;
struct sNode* __dec_obj67;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_287;
struct sNode* __dec_obj68;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_288;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result216__;
    if(    self->len==0) {
        litem_286=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value266=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj67=litem_286->item;
        litem_286->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj68=litem_287->item;
        litem_287->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj69=litem_288->item;
        litem_288->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_288;
        self->tail=litem_288;
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
void* __right_value269 = (void*)0;
struct sNode* result_289;
struct sNode* __result218__;
    if(    self==(void*)0) {
        __result217__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_289=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_289->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_289->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_289->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_289->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_289->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_289->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_289->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_289->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_289->kind=self->kind;
    }
    __result218__ = gComeFunResultObject = __result_obj__ = result_289;
    if(result_289) { result_289 = come_decrement_ref_count2(result_289, ((struct sNode*)result_289)->finalize, ((struct sNode*)result_289)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result220__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1charph* result_290;
struct list_item$1charph* it_291;
void* __right_value278 = (void*)0;
struct list$1charph* __result222__;
    if(    self==((void*)0)) {
        __result220__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_290=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_291=self->head;
    while(it_291!=((void*)0)) {
        list$1charph_add(result_290,(char*)come_increment_ref_count(string_clone(it_291->item)));
        it_291=it_291->next;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_290;
    come_call_finalizer3(result_290,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_292;
char* __dec_obj72;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_293;
char* __dec_obj73;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_294;
char* __dec_obj74;
struct list$1charph* __result221__;
    if(    self->len==0) {
        litem_292=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj72=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj73=litem_293->item;
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj74=litem_294->item;
        litem_294->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_294;
        self->tail=litem_294;
    }
    self->len++;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_303;
unsigned int it_304;
struct sGenericsFun* __result224__;
struct sGenericsFun* __result225__;
struct sGenericsFun* __result226__;
struct sGenericsFun* __result227__;
    hash_303=charp_get_hash_key(((char*)key))%self->size;
    it_304=hash_303;
    while((_Bool)1) {
        if(        self->item_existance[it_304]) {
            if(            charp_equals(self->keys[it_304],key)) {
                __result224__ = gComeFunResultObject = __result_obj__ = self->items[it_304];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result224__;
            }
            it_304++;
            if(            it_304>=self->size) {
                it_304=0;
            }
            else if(            it_304==hash_303) {
                __result225__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result225__;
            }
        }
        else {
            __result226__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result226__;
        }
    }
    __result227__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj86;
struct list$1charph* __dec_obj87;
struct list$1charph* __dec_obj88;
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1sTypeph* __dec_obj91;
struct list$1charph* __dec_obj92;
struct list$1charph* __dec_obj93;
char* __dec_obj94;
char* __dec_obj95;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj86=self->mImplType;
            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj87=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj88=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj89=self->mName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj90=self->mResultType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj91=self->mParamTypes;
            come_call_finalizer3(__dec_obj91,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj92=self->mParamNames;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj93=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj94=self->mBlock;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj95=self->mGenericsSName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_305;
unsigned int hash_306;
unsigned int it_307;
struct sFun* __result229__;
struct sFun* __result230__;
struct sFun* __result231__;
struct sFun* __result232__;
default_value_305 = (void*)0;
    memset(&default_value_305,0,sizeof(struct sFun*));
    hash_306=charp_get_hash_key(((char*)key))%self->size;
    it_307=hash_306;
    while((_Bool)1) {
        if(        self->item_existance[it_307]) {
            if(            charp_equals(self->keys[it_307],key)) {
                __result229__ = gComeFunResultObject = __result_obj__ = self->items[it_307];
                come_call_finalizer3(default_value_305,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
            it_307++;
            if(            it_307>=self->size) {
                it_307=0;
            }
            else if(            it_307==hash_306) {
                __result230__ = gComeFunResultObject = __result_obj__ = default_value_305;
                come_call_finalizer3(default_value_305,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
        }
        else {
            __result231__ = gComeFunResultObject = __result_obj__ = default_value_305;
            come_call_finalizer3(default_value_305,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result231__;
        }
    }
    __result232__ = gComeFunResultObject = __result_obj__ = default_value_305;
    come_call_finalizer3(default_value_305,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
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

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_313;
int i_314;
struct sType* __result233__;
struct sType* default_value_315;
struct sType* __result234__;
default_value_315 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_313=self->head;
    i_314=0;
    while(it_313!=((void*)0)) {
        if(        position==i_314) {
            __result233__ = gComeFunResultObject = __result_obj__ = it_313->item;
            gComeFunResultObject = (void*)0;
            return __result233__;
        }
        it_313=it_313->next;
        i_314++;
    }
    memset(&default_value_315,0,sizeof(struct sType*));
    __result234__ = gComeFunResultObject = __result_obj__ = default_value_315;
    come_call_finalizer3(default_value_315,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
struct list_item$1CVALUEph* litem_320;
struct CVALUE* __dec_obj125;
void* __right_value336 = (void*)0;
struct list_item$1CVALUEph* litem_321;
struct CVALUE* __dec_obj129;
void* __right_value337 = (void*)0;
struct list_item$1CVALUEph* litem_322;
struct CVALUE* __dec_obj130;
struct list$1CVALUEph* __result235__;
    if(    self->len==0) {
        litem_320=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value335=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_320->prev=((void*)0);
        litem_320->next=((void*)0);
        __dec_obj125=litem_320->item;
        litem_320->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_320;
        self->head=litem_320;
    }
    else if(    self->len==1) {
        litem_321=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value336=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_321->prev=self->head;
        litem_321->next=((void*)0);
        __dec_obj129=litem_321->item;
        litem_321->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_321;
        self->head->next=litem_321;
    }
    else {
        litem_322=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value337=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_322->prev=self->tail;
        litem_322->next=((void*)0);
        __dec_obj130=litem_322->item;
        litem_322->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_322;
        self->tail=litem_322;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj126;
struct sType* __dec_obj127;
char* __dec_obj128;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj126=self->c_value;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj127=self->type;
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj128=self->c_value_without_right_value_objects;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value340 = (void*)0;
struct sNode* __dec_obj133;
void* __right_value341 = (void*)0;
char* __dec_obj134;
struct sStoreFieldNode* __result237__;
    ((struct sNodeBase*)(__right_value338=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value338,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj132=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj133=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj134=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sStoreFieldNode")));
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_323;
struct sNode* right_324;
void* __right_value343 = (void*)0;
char* name_325;
_Bool Value_326;
_Bool __result239__;
void* __right_value344 = (void*)0;
struct CVALUE* left_value_327;
struct sType* left_type2_328;
struct sType* __dec_obj139;
int i_329;
void* __right_value345 = (void*)0;
_Bool _if_conditional5;
void* __right_value346 = (void*)0;
char* __dec_obj140;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* __dec_obj141;
_Bool Value_330;
_Bool __result240__;
void* __right_value349 = (void*)0;
_Bool new_channel_331;
void* __right_value350 = (void*)0;
struct CVALUE* right_value_332;
struct sType* right_type_333;
struct sType* left_type_334;
void* __right_value351 = (void*)0;
struct sType* left_type2_335;
struct sClass* klass_336;
void* __right_value352 = (void*)0;
struct sType* field_type_344;
int index_345;
char* child_field_name_346;
_Bool child_field_is_pointer_347;
void* __right_value353 = (void*)0;
_Bool __result245__;
struct list$1tuple2$2charphsTypephph* o2_saved_348;
struct tuple2$2charphsTypeph* field_351;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* field_name_354=0;
struct sType* field_type2_355=0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj150;
struct list$1tuple2$2charphsTypephph* o2_saved_356;
struct tuple2$2charphsTypeph* field_357;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_358=0;
struct sType* field_type2_359=0;
struct sClass* klass2_360;
struct list$1tuple2$2charphsTypephph* o2_saved_361;
struct tuple2$2charphsTypeph* field2_362;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name2_363=0;
struct sType* field_type3_364=0;
void* __right_value355 = (void*)0;
char* __dec_obj151;
void* __right_value356 = (void*)0;
struct sType* __dec_obj152;
void* __right_value357 = (void*)0;
struct sType* __dec_obj153;
_Bool __result252__;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_365;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
_Bool __result253__;
char* c_value_366;
void* __right_value363 = (void*)0;
char* __dec_obj154;
void* __right_value364 = (void*)0;
char* __dec_obj155;
void* __right_value365 = (void*)0;
char* __dec_obj156;
void* __right_value366 = (void*)0;
char* __dec_obj157;
void* __right_value367 = (void*)0;
char* c_value_367;
void* __right_value368 = (void*)0;
char* __dec_obj158;
char* c_value_368;
void* __right_value369 = (void*)0;
char* __dec_obj159;
void* __right_value370 = (void*)0;
char* __dec_obj160;
void* __right_value371 = (void*)0;
char* __dec_obj161;
void* __right_value372 = (void*)0;
char* __dec_obj162;
void* __right_value373 = (void*)0;
char* c_value_369;
void* __right_value374 = (void*)0;
char* __dec_obj163;
_Bool __result254__;
char* c_value_370;
void* __right_value375 = (void*)0;
char* __dec_obj164;
void* __right_value376 = (void*)0;
char* __dec_obj165;
void* __right_value377 = (void*)0;
char* __dec_obj166;
void* __right_value378 = (void*)0;
char* __dec_obj167;
void* __right_value379 = (void*)0;
char* c_value_371;
void* __right_value380 = (void*)0;
char* __dec_obj168;
char* c_value_372;
void* __right_value381 = (void*)0;
char* __dec_obj169;
void* __right_value382 = (void*)0;
char* __dec_obj170;
void* __right_value383 = (void*)0;
char* __dec_obj171;
void* __right_value384 = (void*)0;
char* __dec_obj172;
void* __right_value385 = (void*)0;
char* c_value_373;
void* __right_value386 = (void*)0;
char* __dec_obj173;
_Bool __result255__;
void* __right_value387 = (void*)0;
char* __dec_obj174;
void* __right_value388 = (void*)0;
char* __dec_obj175;
void* __right_value389 = (void*)0;
struct sType* __dec_obj176;
_Bool __result256__;
void* __right_value390 = (void*)0;
char* __dec_obj177;
void* __right_value391 = (void*)0;
char* __dec_obj178;
void* __right_value392 = (void*)0;
char* __dec_obj179;
void* __right_value393 = (void*)0;
char* __dec_obj180;
void* __right_value394 = (void*)0;
char* __dec_obj181;
void* __right_value395 = (void*)0;
char* __dec_obj182;
_Bool __result257__;
void* __right_value396 = (void*)0;
struct sType* __dec_obj183;
_Bool __result258__;
c_value_366 = (void*)0;
c_value_368 = (void*)0;
c_value_370 = (void*)0;
c_value_372 = (void*)0;
    left_323=self->mLeft;
    right_324=self->mRight;
    name_325=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_326=node_compile(left_323,info);
    if(    !Value_326) {
        __result239__ = (_Bool)0;
        name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result239__;
    }
    else {
    }
    left_value_327=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_328=(struct sType*)come_increment_ref_count(left_value_327->type);
    if(    left_type2_328->mNoSolvedGenericsType&&left_type2_328->mNoSolvedGenericsType->v1) {
        __dec_obj139=left_type2_328;
        left_type2_328=(struct sType*)come_increment_ref_count(left_type2_328->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_328->mClass->mName,"tuple1")||string_operator_equals(left_type2_328->mClass->mName,"tuple2")||string_operator_equals(left_type2_328->mClass->mName,"tuple3")||string_operator_equals(left_type2_328->mClass->mName,"tuple3")||string_operator_equals(left_type2_328->mClass->mName,"tuple4")||string_operator_equals(left_type2_328->mClass->mName,"tuple5")) {
        for(        i_329=0;        i_329<list$1sTypeph_length(left_type2_328->mGenericsTypes);        i_329++        ){
            if(            (_if_conditional5=(string_operator_equals(name_325,((struct sType*)come_null_check(((struct sType*)(__right_value345=list$1sTypephp_operator_load_element(left_type2_328->mGenericsTypes,i_329))), "18field.c", 156, 9))->mTupleName))),            come_call_finalizer3(__right_value345,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj140=name_325;
                name_325=(char*)come_increment_ref_count(xsprintf("v%d",i_329+1));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_327->type->mPointerNum>0) {
        __dec_obj141=left_value_327->c_value;
        left_value_327->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value347=make_type_name_string(left_value_327->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_327->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_330=node_compile(right_324,info);
    if(    !Value_330) {
        __result240__ = (_Bool)0;
        name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_328,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result240__;
    }
    else {
    }
    new_channel_331=string_operator_equals(((char*)(__right_value349=right_324->kind(right_324->_protocol_obj))),"sNewChannel");
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value_332=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_333=right_value_332->type;
    dec_stack_ptr(1,info);
    left_type_334=left_value_327->type;
    come_call_finalizer3(left_type2_328,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_335=(struct sType*)come_increment_ref_count(solve_generics(left_type_334,left_type_334,info));
    klass_336=left_type2_335->mClass;
    klass_336=((struct sClass*)(__right_value352=map$2charphsClassphp_operator_load_element(info->classes,klass_336->mName)));
    come_call_finalizer3(__right_value352,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_344=((void*)0);
    index_345=0;
    child_field_name_346=((void*)0);
    child_field_is_pointer_347=(_Bool)0;
    klass_336=((struct sClass*)(__right_value353=map$2charphsClassphp_operator_load_element(info->classes,klass_336->mName)));
    come_call_finalizer3(__right_value353,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_336->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_336->mName);
        __result245__ = (_Bool)0;
        name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result245__;
    }
    for(    o2_saved_348=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_336->mFields)),field_351=list$1tuple2$2charphsTypephph_begin((o2_saved_348));    !list$1tuple2$2charphsTypephph_end((o2_saved_348));    field_351=list$1tuple2$2charphsTypephph_next((o2_saved_348))    ){
        multiple_assign_var1=field_351;
        field_name_354=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_355=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        string_operator_equals(field_name_354,name_325)) {
            __dec_obj150=field_type_344;
            field_type_344=(struct sType*)come_increment_ref_count(sType_clone(field_type2_355));
            come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_354 = come_decrement_ref_count2(field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_355,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_345++;
        field_name_354 = come_decrement_ref_count2(field_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_355,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_348,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_345==list$1tuple2$2charphsTypephph_length(klass_336->mFields)) {
        index_345=0;
        for(        o2_saved_356=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_336->mFields)),field_357=list$1tuple2$2charphsTypephph_begin((o2_saved_356));        !list$1tuple2$2charphsTypephph_end((o2_saved_356));        field_357=list$1tuple2$2charphsTypephph_next((o2_saved_356))        ){
            multiple_assign_var2=field_357;
            field_name_358=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_359=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_360=field_type2_359->mClass;
            for(            o2_saved_361=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_360->mFields)),field2_362=list$1tuple2$2charphsTypephph_begin((o2_saved_361));            !list$1tuple2$2charphsTypephph_end((o2_saved_361));            field2_362=list$1tuple2$2charphsTypephph_next((o2_saved_361))            ){
                multiple_assign_var3=field2_362;
                field_name2_363=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_364=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                string_operator_equals(field_name2_363,name_325)) {
                    __dec_obj151=child_field_name_346;
                    child_field_name_346=(char*)come_increment_ref_count(__builtin_string(field_name_358));
                    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_359->mPointerNum>0) {
                        child_field_is_pointer_347=(_Bool)1;
                    }
                    __dec_obj152=field_type_344;
                    field_type_344=(struct sType*)come_increment_ref_count(sType_clone(field_type3_364));
                    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_363 = come_decrement_ref_count2(field_name2_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_363 = come_decrement_ref_count2(field_name2_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_364,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_361,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_346) {
                field_name_358 = come_decrement_ref_count2(field_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_358,name_325)) {
                __dec_obj153=field_type_344;
                field_type_344=(struct sType*)come_increment_ref_count(sType_clone(field_type2_359));
                come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_358 = come_decrement_ref_count2(field_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_359,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_345++;
            field_name_358 = come_decrement_ref_count2(field_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_359,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_356,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_345==list$1tuple2$2charphsTypephph_length(klass_336->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_325,klass_336->mName);
            __result252__ = (_Bool)0;
            name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result252__;
        }
    }
    come_value_365=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 244, "CVALUE"))));
    check_assign_type(((char*)(__right_value361=xsprintf("\%s is assigned to",((char*)(__right_value360=string_to_string(name_325)))))),field_type_344,right_type_333,right_value_332,(_Bool)0,(_Bool)1,(_Bool)0,info);
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_333=((struct sType*)(__right_value362=sType_clone(right_value_332->type)));
    come_call_finalizer3(__right_value362,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_344->mHeap&&!right_value_332->type->mHeap) {
        if(        string_operator_equals(right_value_332->type->mClass->mName,"void")&&right_value_332->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_325);
                printf("right type is %s pointer num %d heap %d\n",right_value_332->type->mClass->mName,right_value_332->type->mPointerNum,right_value_332->type->mHeap);
                __result253__ = (_Bool)0;
                name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result253__;
            }
        }
    }
    if(    field_type_344->mHeap&&right_type_333->mHeap&&field_type_344->mPointerNum>0&&right_type_333->mPointerNum>0) {
        if(        left_value_327->type->mPointerNum==1) {
            if(            child_field_name_346) {
                if(                child_field_is_pointer_347) {
                    __dec_obj154=c_value_366;
                    c_value_366=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj155=c_value_366;
                    c_value_366=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_344,c_value_366,info,(_Bool)0,(_Bool)0);
                std_move(field_type_344,right_type_333,right_value_332,info,(_Bool)0);
                if(                child_field_is_pointer_347) {
                    __dec_obj156=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj157=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_366 = come_decrement_ref_count2(c_value_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_367=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_327->c_value,name_325));
                decrement_ref_count_object(field_type_344,c_value_367,info,(_Bool)0,(_Bool)0);
                std_move(field_type_344,right_type_333,right_value_332,info,(_Bool)0);
                __dec_obj158=come_value_365->c_value;
                come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_327->c_value,name_325,right_value_332->c_value));
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_367 = come_decrement_ref_count2(c_value_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_327->type->mPointerNum==0) {
            if(            child_field_name_346) {
                if(                child_field_is_pointer_347) {
                    __dec_obj159=c_value_368;
                    c_value_368=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj160=c_value_368;
                    c_value_368=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_344,c_value_368,info,(_Bool)0,(_Bool)0);
                std_move(field_type_344,right_type_333,right_value_332,info,(_Bool)0);
                if(                child_field_is_pointer_347) {
                    __dec_obj161=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj162=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_368 = come_decrement_ref_count2(c_value_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_369=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_327->c_value,name_325));
                decrement_ref_count_object(field_type_344,c_value_369,info,(_Bool)0,(_Bool)0);
                std_move(field_type_344,right_value_332->type,right_value_332,info,(_Bool)0);
                __dec_obj163=come_value_365->c_value;
                come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_327->c_value,name_325,right_value_332->c_value));
                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_369 = come_decrement_ref_count2(c_value_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_325,left_value_327->type->mPointerNum);
            __result254__ = (_Bool)0;
            name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result254__;
        }
    }
    else if(    field_type_344->mHeap&&field_type_344->mPointerNum>0&&right_type_333->mPointerNum>0&&string_operator_equals(right_type_333->mClass->mName,"void")) {
        if(        left_value_327->type->mPointerNum==1) {
            if(            child_field_name_346) {
                if(                child_field_is_pointer_347) {
                    __dec_obj164=c_value_370;
                    c_value_370=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj165=c_value_370;
                    c_value_370=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_344,c_value_370,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_347) {
                    __dec_obj166=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj167=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_370 = come_decrement_ref_count2(c_value_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_371=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_327->c_value,name_325));
                decrement_ref_count_object(field_type_344,c_value_371,info,(_Bool)0,(_Bool)0);
                __dec_obj168=come_value_365->c_value;
                come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_327->c_value,name_325,right_value_332->c_value));
                __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_371 = come_decrement_ref_count2(c_value_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_327->type->mPointerNum==0) {
            if(            child_field_name_346) {
                if(                child_field_is_pointer_347) {
                    __dec_obj169=c_value_372;
                    c_value_372=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj170=c_value_372;
                    c_value_372=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_327->c_value,child_field_name_346,name_325));
                    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_344,c_value_372,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_347) {
                    __dec_obj171=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj172=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_372 = come_decrement_ref_count2(c_value_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_373=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_327->c_value,name_325));
                decrement_ref_count_object(field_type_344,c_value_373,info,(_Bool)0,(_Bool)0);
                __dec_obj173=come_value_365->c_value;
                come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_327->c_value,name_325,right_value_332->c_value));
                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_373 = come_decrement_ref_count2(c_value_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_325,left_value_327->type->mPointerNum);
            __result255__ = (_Bool)0;
            name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result255__;
        }
    }
    else if(    field_type_344->mChannel&&new_channel_331) {
        if(        child_field_is_pointer_347) {
            __dec_obj174=come_value_365->c_value;
            come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_327->c_value,name_325,right_value_332->c_value));
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj175=come_value_365->c_value;
            come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_327->c_value,name_325,right_value_332->c_value));
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj176=come_value_365->type;
        come_value_365->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_332->type));
        come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_365->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_365));
        add_come_last_code(info,"%s",come_value_365->c_value);
        __result256__ = (_Bool)1;
        name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result256__;
    }
    else {
        if(        left_value_327->type->mPointerNum==1) {
            if(            child_field_name_346) {
                if(                child_field_is_pointer_347) {
                    __dec_obj177=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj178=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj179=come_value_365->c_value;
                come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_327->c_value,name_325,right_value_332->c_value));
                __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_327->type->mPointerNum==0) {
            if(            child_field_name_346) {
                if(                child_field_is_pointer_347) {
                    __dec_obj180=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj181=come_value_365->c_value;
                    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_327->c_value,child_field_name_346,name_325,right_value_332->c_value));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj182=come_value_365->c_value;
                come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_327->c_value,name_325,right_value_332->c_value));
                __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_325,left_value_327->type->mPointerNum);
            __result257__ = (_Bool)0;
            name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result257__;
        }
    }
    __dec_obj183=come_value_365->type;
    come_value_365->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_344));
    come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_365->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_365));
    add_come_last_code(info,"%s",come_value_365->c_value);
    __result258__ = (_Bool)1;
    name_325 = come_decrement_ref_count2(name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_332,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_335,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_346 = come_decrement_ref_count2(child_field_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result258__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj131;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj131=self->sname;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_337;
unsigned int hash_338;
unsigned int it_339;
struct sClass* __result241__;
struct sClass* __result242__;
struct sClass* __result243__;
struct sClass* __result244__;
default_value_337 = (void*)0;
    memset(&default_value_337,0,sizeof(struct sClass*));
    hash_338=charp_get_hash_key(((char*)key))%self->size;
    it_339=hash_338;
    while((_Bool)1) {
        if(        self->item_existance[it_339]) {
            if(            charp_equals(self->keys[it_339],key)) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_339];
                come_call_finalizer3(default_value_337,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_339++;
            if(            it_339>=self->size) {
                it_339=0;
            }
            else if(            it_339==hash_338) {
                __result242__ = gComeFunResultObject = __result_obj__ = default_value_337;
                come_call_finalizer3(default_value_337,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = default_value_337;
            come_call_finalizer3(default_value_337,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = default_value_337;
    come_call_finalizer3(default_value_337,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj142;
struct list$1tuple2$2charphsTypephph* __dec_obj143;
char* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj142=self->mName;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj143=self->mFields;
            come_call_finalizer3(__dec_obj143,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj147=self->mDeclareSName;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj148=self->mParentClassName;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj149=self->mAttribute;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_340;
struct list_item$1tuple2$2charphsTypephph* prev_it_341;
    it_340=self->head;
    while(it_340!=((void*)0)) {
        prev_it_341=it_340;
        it_340=it_340->next;
        come_call_finalizer3(prev_it_341,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj144;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj144=self->item;
            come_call_finalizer3(__dec_obj144,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj145;
struct sType* __dec_obj146;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj145=self->v1;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj146=self->v2;
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_342;
struct list_item$1tuple2$2charphsTypephph* prev_it_343;
    it_342=self->head;
    while(it_342!=((void*)0)) {
        prev_it_343=it_342;
        it_342=it_342->next;
        come_call_finalizer3(prev_it_343,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_349;
struct tuple2$2charphsTypeph* __result246__;
struct tuple2$2charphsTypeph* __result247__;
struct tuple2$2charphsTypeph* result_350;
struct tuple2$2charphsTypeph* __result248__;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_349,0,sizeof(struct tuple2$2charphsTypeph*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_349;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->it=self->head;
    if(    self->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_350,0,sizeof(struct tuple2$2charphsTypeph*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_350;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_352;
struct tuple2$2charphsTypeph* __result249__;
struct tuple2$2charphsTypeph* __result250__;
struct tuple2$2charphsTypeph* result_353;
struct tuple2$2charphsTypeph* __result251__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_352,0,sizeof(struct tuple2$2charphsTypeph*));
        __result249__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result250__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    memset(&result_353,0,sizeof(struct tuple2$2charphsTypeph*));
    __result251__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sNode* __dec_obj184;
struct sNullCheckNode* __result259__;
struct sNullCheckNode* __result260__;
    ((struct sNodeBase*)(__right_value397=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value397,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj184=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
char* __result261__;
    __result261__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value399=__builtin_string("sNullCheckNode")));
    __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_374;
_Bool Value_375;
void* __right_value400 = (void*)0;
struct CVALUE* left_value_376;
void* __right_value401 = (void*)0;
char* method_name_377;
void* __right_value402 = (void*)0;
_Bool _if_conditional6;
struct sType* obj_type_380;
struct sType* obj_type2_381;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* __dec_obj187;
void* __right_value405 = (void*)0;
struct sFun* fun_382;
_Bool __result266__;
void* __right_value406 = (void*)0;
struct sType* type_383;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value409 = (void*)0;
char* __dec_obj188;
void* __right_value410 = (void*)0;
struct sType* __dec_obj189;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* __dec_obj190;
void* __right_value415 = (void*)0;
struct sType* __dec_obj191;
_Bool __result267__;
    left_374=self->mLeft;
    Value_375=node_compile(left_374,info);
    if(    !Value_375) {
        return (_Bool)0;
    }
    else {
    }
    left_value_376=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_376->type->mNoSolvedGenericsType&&left_value_376->type->mNoSolvedGenericsType->v1&&left_value_376->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_376->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_377=(char*)come_increment_ref_count(create_method_name(left_value_376->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional6=(((struct sFun*)(__right_value402=map$2charphsFunph_at(info->funcs,method_name_377,((void*)0))))==((void*)0))),        come_call_finalizer3(__right_value402,sFun_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional6) {
            obj_type_380=left_value_376->type->mNoSolvedGenericsType->v1;
            if(            list$1sTypeph_length(obj_type_380->mGenericsTypes)>0) {
                obj_type2_381=left_value_376->type;
                __dec_obj187=method_name_377;
                method_name_377=(char*)come_increment_ref_count(make_generics_function(obj_type2_381,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1));
                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_376->type->mClass->mName);
                exit(1);
            }
        }
        fun_382=((struct sFun*)(__right_value405=map$2charphsFunphp_operator_load_element(info->funcs,method_name_377)));
        come_call_finalizer3(__right_value405,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_382==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_377);
            __result266__ = (_Bool)1;
            method_name_377 = come_decrement_ref_count2(method_name_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_376,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result266__;
        }
        type_383=(struct sType*)come_increment_ref_count(solve_generics(fun_382->mResultType,left_value_376->type,info));
        come_value_384=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 485, "CVALUE"))));
        __dec_obj188=come_value_384->c_value;
        come_value_384->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_377,left_value_376->c_value));
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj189=come_value_384->type;
        come_value_384->type=(struct sType*)come_increment_ref_count(sType_clone(type_383));
        come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_384->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_384));
        add_come_last_code(info,"%s",come_value_384->c_value);
        method_name_377 = come_decrement_ref_count2(method_name_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_376));
    }
    else if(    left_value_376->type->mPointerNum>0) {
        come_value_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 499, "CVALUE"))));
        __dec_obj190=come_value_385->c_value;
        come_value_385->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value413=make_type_name_string(left_value_376->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_376->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj191=come_value_385->type;
        come_value_385->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_376->type));
        come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_385->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_385));
        add_come_last_code(info,"%s",come_value_385->c_value);
        come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_376));
    }
    __result267__ = (_Bool)1;
    come_call_finalizer3(left_value_376,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result267__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_378;
unsigned int it_379;
struct sFun* __result262__;
struct sFun* __result263__;
struct sFun* __result264__;
struct sFun* __result265__;
    hash_378=charp_get_hash_key(((char*)key))%self->size;
    it_379=hash_378;
    while((_Bool)1) {
        if(        self->item_existance[it_379]) {
            if(            charp_equals(self->keys[it_379],key)) {
                __result262__ = gComeFunResultObject = __result_obj__ = self->items[it_379];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result262__;
            }
            it_379++;
            if(            it_379>=self->size) {
                it_379=0;
            }
            else if(            it_379==hash_378) {
                __result263__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result263__;
            }
        }
        else {
            __result264__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result264__;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj192;
struct sNullableNode* __result268__;
    ((struct sNodeBase*)(__right_value416=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value416,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj192=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); };
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value418 = (void*)0;
char* __result269__;
    __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value418=__builtin_string("sNullableNode")));
    __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_386;
_Bool Value_387;
void* __right_value419 = (void*)0;
struct CVALUE* left_value_388;
void* __right_value424 = (void*)0;
struct CVALUE* come_value_389;
_Bool __result272__;
    left_386=self->mLeft;
    Value_387=node_compile(left_386,info);
    if(    !Value_387) {
        return (_Bool)0;
    }
    else {
    }
    left_value_388=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_388->type->mPointerNum>0&&left_value_388->type->mNullValue) {
        come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(left_value_388));
        come_value_389->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
        add_come_last_code(info,"%s",come_value_389->c_value);
        come_call_finalizer3(come_value_389,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_388));
    }
    __result272__ = (_Bool)1;
    come_call_finalizer3(left_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result270__;
void* __right_value420 = (void*)0;
struct CVALUE* result_390;
void* __right_value421 = (void*)0;
char* __dec_obj195;
void* __right_value422 = (void*)0;
struct sType* __dec_obj196;
void* __right_value423 = (void*)0;
char* __dec_obj197;
struct CVALUE* __result271__;
    if(    self==(void*)0) {
        __result270__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_390=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj195=result_390->c_value;
        result_390->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj196=result_390->type;
        result_390->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_390->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj197=result_390->c_value_without_right_value_objects;
        result_390->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_390;
    come_call_finalizer3(result_390,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value430 = (void*)0;
struct sNode* __result275__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 561, "struct sNode");
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value426=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 561, "sNullableNode")),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result275__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value430=_inf_value1));
    come_call_finalizer3(__right_value426,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value430) { __right_value430 = come_decrement_ref_count2(__right_value430, ((struct sNode*)__right_value430)->finalize, ((struct sNode*)__right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result275__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj202;
void* __right_value433 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value434 = (void*)0;
struct sNode* __dec_obj204;
struct sRangeCheckNode* __result276__;
    ((struct sNodeBase*)(__right_value431=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value431,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj202=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj203=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(begin));
    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj204=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(end));
    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value435 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value435=__builtin_string("sRangeCheckNode")));
    __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
struct sNode* left_392;
_Bool Value_393;
void* __right_value436 = (void*)0;
struct CVALUE* left_value_394;
struct sNode* begin_395;
_Bool Value_396;
_Bool __result278__;
void* __right_value437 = (void*)0;
struct CVALUE* begin_value_397;
struct sNode* end_398;
_Bool Value_399;
_Bool __result279__;
void* __right_value438 = (void*)0;
struct CVALUE* end_value_400;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
char* __dec_obj209;
void* __right_value443 = (void*)0;
struct sType* __dec_obj210;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __dec_obj211;
void* __right_value448 = (void*)0;
struct sType* __dec_obj212;
_Bool __result280__;
    left_392=self->mLeft;
    Value_393=node_compile(left_392,info);
    if(    !Value_393) {
        return (_Bool)0;
    }
    else {
    }
    left_value_394=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    begin_395=self->mBegin;
    Value_396=node_compile(begin_395,info);
    if(    !Value_396) {
        __result278__ = (_Bool)0;
        come_call_finalizer3(left_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result278__;
    }
    else {
    }
    begin_value_397=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    end_398=self->mEnd;
    Value_399=node_compile(end_398,info);
    if(    !Value_399) {
        __result279__ = (_Bool)0;
        come_call_finalizer3(left_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result279__;
    }
    else {
    }
    end_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_394->type->mPointerNum>0) {
        if(        !gComeDebug) {
            come_value_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 611, "CVALUE"))));
            __dec_obj209=come_value_401->c_value;
            come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)%s))",((char*)(__right_value441=make_type_name_string(left_value_394->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_394->c_value));
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_394->type->mPointerNum--;
            __dec_obj210=come_value_401->type;
            come_value_401->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_394->type));
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_401->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_401));
            add_come_last_code(info,"%s",come_value_401->c_value);
            come_call_finalizer3(come_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 624, "CVALUE"))));
            __dec_obj211=come_value_402->c_value;
            come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(__right_value446=make_type_name_string(left_value_394->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_394->c_value,begin_value_397->c_value,end_value_400->c_value,info->sname,info->sline));
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_394->type->mPointerNum--;
            __dec_obj212=come_value_402->type;
            come_value_402->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_394->type));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_402->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
            add_come_last_code(info,"%s",come_value_402->c_value);
            come_call_finalizer3(come_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_394));
    }
    __result280__ = (_Bool)1;
    come_call_finalizer3(left_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value451 = (void*)0;
char* __dec_obj214;
struct sLoadFieldNode* __result281__;
    ((struct sNodeBase*)(__right_value449=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value449,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj214=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value452 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value452=__builtin_string("sLoadFieldNode")));
    __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_403;
void* __right_value453 = (void*)0;
char* name_404;
_Bool Value_405;
_Bool __result283__;
void* __right_value454 = (void*)0;
struct CVALUE* left_value_406;
struct sType* left_type2_407;
struct sType* __dec_obj218;
int i_408;
void* __right_value455 = (void*)0;
_Bool _if_conditional7;
void* __right_value456 = (void*)0;
char* __dec_obj219;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* __dec_obj220;
struct sType* left_type_409;
void* __right_value459 = (void*)0;
struct sType* left_type2_410;
struct sClass* klass_411;
void* __right_value460 = (void*)0;
struct sType* field_type_412;
int index_413;
_Bool child_field_is_pointer_414;
char* child_field_name_415;
void* __right_value461 = (void*)0;
_Bool __result284__;
struct list$1tuple2$2charphsTypephph* o2_saved_416;
struct tuple2$2charphsTypeph* field_417;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name_418=0;
struct sType* field_type2_419=0;
void* __right_value462 = (void*)0;
struct sType* __dec_obj221;
struct list$1tuple2$2charphsTypephph* o2_saved_420;
struct tuple2$2charphsTypeph* field_421;
struct tuple2$2charphsTypeph* multiple_assign_var5 = (void*)0;
char* field_name_422=0;
struct sType* field_type2_423=0;
struct sClass* klass2_424;
struct list$1tuple2$2charphsTypephph* o2_saved_425;
struct tuple2$2charphsTypeph* field2_426;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name2_427=0;
struct sType* field_type3_428=0;
void* __right_value463 = (void*)0;
char* __dec_obj222;
void* __right_value464 = (void*)0;
struct sType* __dec_obj223;
void* __right_value465 = (void*)0;
struct sType* __dec_obj224;
_Bool __result285__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct CVALUE* come_value_429;
void* __right_value468 = (void*)0;
char* __dec_obj225;
void* __right_value469 = (void*)0;
char* __dec_obj226;
void* __right_value470 = (void*)0;
char* __dec_obj227;
void* __right_value471 = (void*)0;
char* __dec_obj228;
void* __right_value472 = (void*)0;
char* __dec_obj229;
void* __right_value473 = (void*)0;
char* __dec_obj230;
void* __right_value474 = (void*)0;
struct sType* __dec_obj231;
_Bool __result286__;
void* __right_value475 = (void*)0;
struct sType* __dec_obj232;
_Bool __result288__;
    left_403=self->mLeft;
    name_404=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_405=node_compile(left_403,info);
    if(    !Value_405) {
        __result283__ = (_Bool)0;
        name_404 = come_decrement_ref_count2(name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result283__;
    }
    else {
    }
    left_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_407=(struct sType*)come_increment_ref_count(left_value_406->type);
    if(    left_type2_407->mNoSolvedGenericsType&&left_type2_407->mNoSolvedGenericsType->v1) {
        __dec_obj218=left_type2_407;
        left_type2_407=(struct sType*)come_increment_ref_count(left_type2_407->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_407->mClass->mName,"tuple1")||string_operator_equals(left_type2_407->mClass->mName,"tuple2")||string_operator_equals(left_type2_407->mClass->mName,"tuple3")||string_operator_equals(left_type2_407->mClass->mName,"tuple3")||string_operator_equals(left_type2_407->mClass->mName,"tuple4")||string_operator_equals(left_type2_407->mClass->mName,"tuple5")) {
        for(        i_408=0;        i_408<list$1sTypeph_length(left_type2_407->mGenericsTypes);        i_408++        ){
            if(            (_if_conditional7=(string_operator_equals(name_404,((struct sType*)come_null_check(((struct sType*)(__right_value455=list$1sTypephp_operator_load_element(left_type2_407->mGenericsTypes,i_408))), "18field.c", 680, 10))->mTupleName))),            come_call_finalizer3(__right_value455,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj219=name_404;
                name_404=(char*)come_increment_ref_count(xsprintf("v%d",i_408+1));
                __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_406->type->mPointerNum>0) {
        __dec_obj220=left_value_406->c_value;
        left_value_406->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value457=make_type_name_string(left_value_406->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_406->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_409=left_value_406->type;
    come_call_finalizer3(left_type2_407,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_410=(struct sType*)come_increment_ref_count(solve_generics(left_type_409,left_type_409,info));
    klass_411=left_type2_410->mClass;
    klass_411=((struct sClass*)(__right_value460=map$2charphsClassphp_operator_load_element(info->classes,klass_411->mName)));
    come_call_finalizer3(__right_value460,sClass_finalize, 0, 1, 0, 0, (void*)0);
    field_type_412=((void*)0);
    index_413=0;
    child_field_is_pointer_414=(_Bool)0;
    child_field_name_415=((void*)0);
    klass_411=((struct sClass*)(__right_value461=map$2charphsClassphp_operator_load_element(info->classes,klass_411->mName)));
    come_call_finalizer3(__right_value461,sClass_finalize, 0, 1, 0, 0, (void*)0);
    if(    klass_411==((void*)0)||klass_411->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_411->mName);
        __result284__ = (_Bool)0;
        name_404 = come_decrement_ref_count2(name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_415 = come_decrement_ref_count2(child_field_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result284__;
    }
    for(    o2_saved_416=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_411->mFields)),field_417=list$1tuple2$2charphsTypephph_begin((o2_saved_416));    !list$1tuple2$2charphsTypephph_end((o2_saved_416));    field_417=list$1tuple2$2charphsTypephph_next((o2_saved_416))    ){
        multiple_assign_var4=field_417;
        field_name_418=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_419=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        string_operator_equals(field_name_418,name_404)) {
            __dec_obj221=field_type_412;
            field_type_412=(struct sType*)come_increment_ref_count(sType_clone(field_type2_419));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_418 = come_decrement_ref_count2(field_name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_419,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_413++;
        field_name_418 = come_decrement_ref_count2(field_name_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_419,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_416,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_413==list$1tuple2$2charphsTypephph_length(klass_411->mFields)) {
        index_413=0;
        for(        o2_saved_420=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_411->mFields)),field_421=list$1tuple2$2charphsTypephph_begin((o2_saved_420));        !list$1tuple2$2charphsTypephph_end((o2_saved_420));        field_421=list$1tuple2$2charphsTypephph_next((o2_saved_420))        ){
            multiple_assign_var5=field_421;
            field_name_422=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_423=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_424=field_type2_423->mClass;
            for(            o2_saved_425=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_424->mFields)),field2_426=list$1tuple2$2charphsTypephph_begin((o2_saved_425));            !list$1tuple2$2charphsTypephph_end((o2_saved_425));            field2_426=list$1tuple2$2charphsTypephph_next((o2_saved_425))            ){
                multiple_assign_var6=field2_426;
                field_name2_427=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_428=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                string_operator_equals(field_name2_427,name_404)) {
                    __dec_obj222=child_field_name_415;
                    child_field_name_415=(char*)come_increment_ref_count(__builtin_string(field_name_422));
                    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_423->mPointerNum>0) {
                        child_field_is_pointer_414=(_Bool)1;
                    }
                    __dec_obj223=field_type_412;
                    field_type_412=(struct sType*)come_increment_ref_count(sType_clone(field_type3_428));
                    come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_427 = come_decrement_ref_count2(field_name2_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_428,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_427 = come_decrement_ref_count2(field_name2_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_428,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_425,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_415) {
                field_name_422 = come_decrement_ref_count2(field_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_422,name_404)) {
                __dec_obj224=field_type_412;
                field_type_412=(struct sType*)come_increment_ref_count(sType_clone(field_type2_423));
                come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_422 = come_decrement_ref_count2(field_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_413++;
            field_name_422 = come_decrement_ref_count2(field_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_423,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_420,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_413==list$1tuple2$2charphsTypephph_length(klass_411->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_404,klass_411->mName);
            __result285__ = (_Bool)0;
            name_404 = come_decrement_ref_count2(name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_415 = come_decrement_ref_count2(child_field_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result285__;
        }
    }
    come_value_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 755, "CVALUE"))));
    if(    left_value_406->type->mPointerNum>0) {
        if(        child_field_name_415) {
            if(            child_field_is_pointer_414) {
                __dec_obj225=come_value_429->c_value;
                come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_406->c_value,child_field_name_415,name_404));
                __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj226=come_value_429->c_value;
                come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_406->c_value,child_field_name_415,name_404));
                __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj227=come_value_429->c_value;
            come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_406->c_value,name_404));
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_415) {
            if(            child_field_is_pointer_414) {
                __dec_obj228=come_value_429->c_value;
                come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_406->c_value,child_field_name_415,name_404));
                __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj229=come_value_429->c_value;
                come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_406->c_value,child_field_name_415,name_404));
                __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj230=come_value_429->c_value;
            come_value_429->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_406->c_value,name_404));
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj231=come_value_429->type;
    come_value_429->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_412));
    come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_429->var=((void*)0);
    if(    field_type_412==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_404);
        __result286__ = (_Bool)0;
        name_404 = come_decrement_ref_count2(name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_415 = come_decrement_ref_count2(child_field_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result286__;
    }
    if(    list$1sNodeph_length(come_value_429->type->mArrayNum)==1) {
        __dec_obj232=come_value_429->type->mOriginalLoadVarType->v1;
        come_value_429->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_429->type));
        come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_429->type->mArrayNum);
        come_value_429->type->mPointerNum++;
        come_value_429->type->mOriginalTypeNamePointerNum=come_value_429->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_429));
    __result288__ = (_Bool)1;
    name_404 = come_decrement_ref_count2(name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_410,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_415 = come_decrement_ref_count2(child_field_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_430;
struct list_item$1sNodeph* prev_it_431;
struct list$1sNodeph* __result287__;
    it_430=self->head;
    while(it_430!=((void*)0)) {
        prev_it_431=it_430;
        it_430=it_430->next;
        come_call_finalizer3(prev_it_431,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value482 = (void*)0;
struct sNode* __result291__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 807, "struct sNode");
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value477=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 807, "sLoadFieldNode")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result291__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value482=_inf_value2));
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value477,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value482) { __right_value482 = come_decrement_ref_count2(__right_value482, ((struct sNode*)__right_value482)->finalize, ((struct sNode*)__right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result291__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sNode* __dec_obj239;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj240;
void* __right_value486 = (void*)0;
struct list$1sNodeph* __dec_obj241;
struct sStoreArrayNode* __result292__;
    ((struct sNodeBase*)(__right_value483=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value483,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj239=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj240=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj241=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj241,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value487 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value487=__builtin_string("sStoreArrayNode")));
    __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_433;
struct sNode* right_434;
struct list$1sNodeph* array_num_nodes_435;
_Bool Value_436;
void* __right_value488 = (void*)0;
struct CVALUE* left_value_437;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* __dec_obj246;
struct sType* left_type_438;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1CVALUEph* array_num_439;
struct list$1sNodeph* o2_saved_442;
struct sNode* it_445;
_Bool Value_448;
_Bool __result301__;
void* __right_value493 = (void*)0;
struct CVALUE* c_value_449;
_Bool Value_450;
_Bool __result302__;
void* __right_value494 = (void*)0;
struct CVALUE* right_value_451;
struct sType* right_type_452;
struct sClass* klass_453;
void* __right_value495 = (void*)0;
struct sType* type_454;
char* fun_name_455;
_Bool calling_fun_456;
void* __right_value496 = (void*)0;
char* check_code_460;
struct sType* var_type_461;
void* __right_value497 = (void*)0;
struct sType* result_type_462;
struct sType* __dec_obj248;
int n_463;
void* __right_value498 = (void*)0;
struct sType* __dec_obj249;
void* __right_value499 = (void*)0;
struct sType* __dec_obj250;
int i_464;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct CVALUE* come_value_477;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct buffer* buf_478;
void* __right_value504 = (void*)0;
struct sType* result_type2_479;
struct list$1CVALUEph* o2_saved_480;
struct CVALUE* it_483;
int i_486;
struct list$1sNodeph* o2_saved_487;
struct sNode* it_488;
_Bool Value_489;
void* __right_value505 = (void*)0;
struct CVALUE* come_value_490;
void* __right_value506 = (void*)0;
char* __dec_obj251;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct CVALUE* come_value_491;
int i_492;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct buffer* buf_493;
struct list$1CVALUEph* o2_saved_494;
struct CVALUE* it_495;
void* __right_value511 = (void*)0;
char* left_value_code_496;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* __dec_obj252;
void* __right_value514 = (void*)0;
char* __dec_obj253;
_Bool __result313__;
void* __right_value515 = (void*)0;
char* __dec_obj254;
void* __right_value516 = (void*)0;
char* __dec_obj255;
_Bool __result314__;
void* __right_value517 = (void*)0;
struct sType* result_type_497;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1sNodeph* __dec_obj256;
struct sType* __dec_obj257;
void* __right_value520 = (void*)0;
char* __dec_obj258;
_Bool __result315__;
memset(&calling_fun_456, 0, sizeof(_Bool));
    left_433=self->mLeft;
    right_434=self->mRight;
    array_num_nodes_435=self->mArrayNum;
    Value_436=node_compile(left_433,info);
    if(    !Value_436) {
        return (_Bool)0;
    }
    else {
    }
    left_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_437->type->mPointerNum>0) {
        __dec_obj246=left_value_437->c_value;
        left_value_437->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value489=make_type_name_string(left_value_437->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_437->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_438=left_value_437->type;
    array_num_439=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 846, "list$1CVALUEph"))));
    for(    o2_saved_442=(array_num_nodes_435),it_445=list$1sNodeph_begin((o2_saved_442));    !list$1sNodeph_end((o2_saved_442));    it_445=list$1sNodeph_next((o2_saved_442))    ){
        Value_448=node_compile(it_445,info);
        if(        !Value_448) {
            __result301__ = (_Bool)0;
            come_call_finalizer3(left_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result301__;
        }
        else {
        }
        c_value_449=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_439,(struct CVALUE*)come_increment_ref_count(c_value_449));
        come_call_finalizer3(c_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    Value_450=node_compile(right_434,info);
    if(    !Value_450) {
        __result302__ = (_Bool)0;
        come_call_finalizer3(left_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result302__;
    }
    else {
    }
    right_value_451=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_452=right_value_451->type;
    klass_453=left_value_437->type->mClass;
    type_454=(struct sType*)come_increment_ref_count(sType_clone(left_value_437->type));
    fun_name_455="operator_store_element";
    if(    self->mQuote) {
        calling_fun_456=(_Bool)0;
    }
    else {
        calling_fun_456=operator_overload_fun2(type_454,fun_name_455,left_value_437,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value496=list$1CVALUEphp_operator_load_element(array_num_439,0))), "18field.c", 878, 11)),right_value_451,info);
        come_call_finalizer3(__right_value496,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_456) {
        check_code_460=((void*)0);
        if(        left_value_437->var&&left_value_437->var->mType&&list$1sNodeph_length(left_value_437->var->mType->mArrayNum)>0) {
            var_type_461=left_value_437->var->mType;
            result_type_462=(struct sType*)come_increment_ref_count(sType_clone(left_type_438));
            if(            result_type_462->mOriginalLoadVarType->v1) {
                __dec_obj248=result_type_462;
                result_type_462=(struct sType*)come_increment_ref_count(result_type_462->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_462->mArrayNum)>0) {
                n_463=list$1sNodeph_length(result_type_462->mArrayNum)-list$1CVALUEph_length(array_num_439);
                if(                n_463==0) {
                    __dec_obj249=result_type_462;
                    result_type_462=(struct sType*)come_increment_ref_count(sType_clone(left_type_438));
                    come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_438->mOriginalLoadVarType->v1) {
                        __dec_obj250=result_type_462;
                        result_type_462=(struct sType*)come_increment_ref_count(sType_clone(left_type_438->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_462->mArrayNum);
                }
                else if(                n_463>0) {
                    for(                    i_464=0;                    i_464<n_463;                    i_464++                    ){
                        list$1sNodeph_delete(result_type_462->mArrayNum,-1,-1);
                    }
                }
                else if(                n_463<0) {
                    list$1sNodeph_reset(result_type_462->mArrayNum);
                    result_type_462->mPointerNum+=n_463;
                    if(                    result_type_462->mPointerNum<0) {
                        result_type_462->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_462->mPointerNum>0) {
                    result_type_462->mPointerNum-=list$1CVALUEph_length(array_num_439);
                    if(                    result_type_462->mPointerNum<0) {
                        result_type_462->mPointerNum=0;
                    }
                }
            }
            come_value_477=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 926, "CVALUE"))));
            buf_478=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 928, "buffer"))));
            result_type2_479=(struct sType*)come_increment_ref_count(sType_clone(result_type_462));
            result_type2_479->mPointerNum++;
            buffer_append_format(buf_478,"come_range_check(&%s",left_value_437->c_value);
            for(            o2_saved_480=(struct list$1CVALUEph*)come_increment_ref_count((array_num_439)),it_483=list$1CVALUEph_begin((o2_saved_480));            !list$1CVALUEph_end((o2_saved_480));            it_483=list$1CVALUEph_next((o2_saved_480))            ){
                buffer_append_format(buf_478,"[%s]",it_483->c_value);
            }
            come_call_finalizer3(o2_saved_480,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_478,",%s,%s+(",left_value_437->c_value,left_value_437->c_value);
            i_486=0;
            for(            o2_saved_487=(struct list$1sNodeph*)come_increment_ref_count((var_type_461->mArrayNum)),it_488=list$1sNodeph_begin((o2_saved_487));            !list$1sNodeph_end((o2_saved_487));            it_488=list$1sNodeph_next((o2_saved_487))            ){
                Value_489=node_compile(it_488,info);
                if(                !Value_489) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_490=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_format(buf_478,"%s",come_value_490->c_value);
                if(                i_486!=list$1sNodeph_length(var_type_461->mArrayNum)-1) {
                    buffer_append_str(buf_478,"*");
                }
                i_486++;
                come_call_finalizer3(come_value_490,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_487,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_478,"), \"%s\", %d)",info->sname,info->sline);
            __dec_obj251=check_code_460;
            check_code_460=(char*)come_increment_ref_count(buffer_to_string(buf_478));
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(result_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_477,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_479,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_491=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 960, "CVALUE"))));
        if(        list$1sNodeph_length(left_type_438->mArrayNum)>0) {
            for(            i_492=0;            i_492<list$1CVALUEph_length(array_num_439);            i_492++            ){
                list$1sNodeph_delete(left_type_438->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_438->mPointerNum>0) {
            left_type_438->mPointerNum-=list$1CVALUEph_length(array_num_439);
            if(            left_type_438->mPointerNum<0) {
                left_type_438->mPointerNum=0;
            }
        }
        buf_493=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 981, "buffer"))));
        buffer_append_str(buf_493,left_value_437->c_value);
        for(        o2_saved_494=(struct list$1CVALUEph*)come_increment_ref_count((array_num_439)),it_495=list$1CVALUEph_begin((o2_saved_494));        !list$1CVALUEph_end((o2_saved_494));        it_495=list$1CVALUEph_next((o2_saved_494))        ){
            buffer_append_format(buf_493,"[%s]",it_495->c_value);
        }
        come_call_finalizer3(o2_saved_494,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_496=(char*)come_increment_ref_count(buffer_to_string(buf_493));
        check_assign_type(((char*)(__right_value512=xsprintf("array is assinged to"))),left_type_438,right_type_452,right_value_451,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        left_type_438->mHeap&&right_type_452->mHeap&&left_type_438->mPointerNum>0&&right_type_452->mPointerNum>0) {
            if(            left_value_437->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_438,left_value_code_496,info,(_Bool)0,(_Bool)0);
                std_move(left_type_438,right_type_452,right_value_451,info,(_Bool)0);
                __dec_obj252=come_value_491->c_value;
                come_value_491->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_496,right_value_451->c_value));
                __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_437->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_438,left_value_code_496,info,(_Bool)0,(_Bool)0);
                std_move(left_type_438,right_type_452,right_value_451,info,(_Bool)0);
                __dec_obj253=come_value_491->c_value;
                come_value_491->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_496,right_value_451->c_value));
                __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_496,left_value_437->type->mPointerNum);
                __result313__ = (_Bool)0;
                check_code_460 = come_decrement_ref_count2(check_code_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_493,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_496 = come_decrement_ref_count2(left_value_code_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result313__;
            }
        }
        else {
            if(            left_value_437->type->mPointerNum>=1) {
                __dec_obj254=come_value_491->c_value;
                come_value_491->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_496,right_value_451->c_value));
                __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_437->type->mPointerNum==0) {
                __dec_obj255=come_value_491->c_value;
                come_value_491->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_496,right_value_451->c_value));
                __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_496,left_value_437->type->mPointerNum);
                __result314__ = (_Bool)0;
                check_code_460 = come_decrement_ref_count2(check_code_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_493,buffer_finalize, 0, 0, 0, 0, (void*)0);
                left_value_code_496 = come_decrement_ref_count2(left_value_code_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(array_num_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result314__;
            }
        }
        result_type_497=(struct sType*)come_increment_ref_count(sType_clone(left_type_438));
        __dec_obj256=result_type_497->mArrayNum;
        result_type_497->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1022, "list$1sNodeph"))));
        come_call_finalizer3(__dec_obj256,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj257=come_value_491->type;
        come_value_491->type=(struct sType*)come_increment_ref_count(result_type_497);
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_491->var=((void*)0);
        if(        check_code_460&&gComeDebug) {
            __dec_obj258=come_value_491->c_value;
            come_value_491->c_value=(char*)come_increment_ref_count(xsprintf("(%s, %s)",check_code_460,come_value_491->c_value));
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_491));
        add_come_last_code(info,"%s",come_value_491->c_value);
        check_code_460 = come_decrement_ref_count2(check_code_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_491,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_493,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_496 = come_decrement_ref_count2(left_value_code_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result315__ = (_Bool)1;
    come_call_finalizer3(left_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_451,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result315__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result294__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_440;
struct list_item$1CVALUEph* prev_it_441;
    it_440=self->head;
    while(it_440!=((void*)0)) {
        prev_it_441=it_440;
        it_440=it_440->next;
        come_call_finalizer3(prev_it_441,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj247;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj247=self->item;
            come_call_finalizer3(__dec_obj247,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_443;
struct sNode* __result295__;
struct sNode* __result296__;
struct sNode* result_444;
struct sNode* __result297__;
result_443 = (void*)0;
result_444 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_443,0,sizeof(struct sNode*));
        __result295__ = gComeFunResultObject = __result_obj__ = result_443;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    self->it=self->head;
    if(    self->it) {
        __result296__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    memset(&result_444,0,sizeof(struct sNode*));
    __result297__ = gComeFunResultObject = __result_obj__ = result_444;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_446;
struct sNode* __result298__;
struct sNode* __result299__;
struct sNode* result_447;
struct sNode* __result300__;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_446,0,sizeof(struct sNode*));
        __result298__ = gComeFunResultObject = __result_obj__ = result_446;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result299__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    memset(&result_447,0,sizeof(struct sNode*));
    __result300__ = gComeFunResultObject = __result_obj__ = result_447;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_457;
int i_458;
struct CVALUE* __result303__;
struct CVALUE* default_value_459;
struct CVALUE* __result304__;
default_value_459 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_457=self->head;
    i_458=0;
    while(it_457!=((void*)0)) {
        if(        position==i_458) {
            __result303__ = gComeFunResultObject = __result_obj__ = it_457->item;
            gComeFunResultObject = (void*)0;
            return __result303__;
        }
        it_457=it_457->next;
        i_458++;
    }
    memset(&default_value_459,0,sizeof(struct CVALUE*));
    __result304__ = gComeFunResultObject = __result_obj__ = default_value_459;
    come_call_finalizer3(default_value_459,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_465;
struct list$1sNodeph* __result305__;
struct list_item$1sNodeph* it_466;
int i_467;
struct list_item$1sNodeph* prev_it_468;
struct list_item$1sNodeph* it_469;
int i_470;
struct list_item$1sNodeph* prev_it_471;
struct list_item$1sNodeph* it_472;
struct list_item$1sNodeph* head_prev_it_473;
struct list_item$1sNodeph* tail_it_474;
int i_475;
struct list_item$1sNodeph* prev_it_476;
struct list$1sNodeph* __result306__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_465=tail;
        tail=head;
        head=tmp_465;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result305__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_466=self->head;
        i_467=0;
        while(it_466!=((void*)0)) {
            if(            i_467<tail) {
                prev_it_468=it_466;
                it_466=it_466->next;
                i_467++;
                come_call_finalizer3(prev_it_468,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_467==tail) {
                self->head=it_466;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_466=it_466->next;
                i_467++;
            }
        }
    }
    else if(    tail==self->len) {
        it_469=self->head;
        i_470=0;
        while(it_469!=((void*)0)) {
            if(            i_470==head) {
                self->tail=it_469->prev;
                self->tail->next=((void*)0);
            }
            if(            i_470>=head) {
                prev_it_471=it_469;
                it_469=it_469->next;
                i_470++;
                come_call_finalizer3(prev_it_471,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_469=it_469->next;
                i_470++;
            }
        }
    }
    else {
        it_472=self->head;
        head_prev_it_473=((void*)0);
        tail_it_474=((void*)0);
        i_475=0;
        while(it_472!=((void*)0)) {
            if(            i_475==head) {
                head_prev_it_473=it_472->prev;
            }
            if(            i_475==tail) {
                tail_it_474=it_472;
            }
            if(            i_475>=head&&i_475<tail) {
                prev_it_476=it_472;
                it_472=it_472->next;
                i_475++;
                come_call_finalizer3(prev_it_476,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_472=it_472->next;
                i_475++;
            }
        }
        if(        head_prev_it_473!=((void*)0)) {
            head_prev_it_473->next=tail_it_474;
        }
        if(        tail_it_474!=((void*)0)) {
            tail_it_474->prev=head_prev_it_473;
        }
    }
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_481;
struct CVALUE* __result307__;
struct CVALUE* __result308__;
struct CVALUE* result_482;
struct CVALUE* __result309__;
result_481 = (void*)0;
result_482 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_481,0,sizeof(struct CVALUE*));
        __result307__ = gComeFunResultObject = __result_obj__ = result_481;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    self->it=self->head;
    if(    self->it) {
        __result308__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    memset(&result_482,0,sizeof(struct CVALUE*));
    __result309__ = gComeFunResultObject = __result_obj__ = result_482;
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_484;
struct CVALUE* __result310__;
struct CVALUE* __result311__;
struct CVALUE* result_485;
struct CVALUE* __result312__;
result_484 = (void*)0;
result_485 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_484,0,sizeof(struct CVALUE*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_484;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_485,0,sizeof(struct CVALUE*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_485;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1sNodeph* __dec_obj259;
void* __right_value523 = (void*)0;
struct sNode* __dec_obj260;
struct sLoadArrayNode* __result316__;
    ((struct sNodeBase*)(__right_value521=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value521,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj259=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj259,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj260=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value524 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value524=__builtin_string("sLoadArrayNode")));
    __right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_498;
struct list$1sNodeph* array_num_nodes_499;
_Bool Value_500;
void* __right_value525 = (void*)0;
struct CVALUE* left_value_501;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
char* __dec_obj264;
void* __right_value528 = (void*)0;
struct sType* left_type_502;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1CVALUEph* array_num_503;
struct list$1sNodeph* o2_saved_504;
struct sNode* it_505;
_Bool Value_506;
_Bool __result318__;
void* __right_value531 = (void*)0;
struct CVALUE* c_value_507;
void* __right_value532 = (void*)0;
struct sType* type_508;
char* fun_name_509;
_Bool calling_fun_510;
void* __right_value533 = (void*)0;
struct sType* var_type_511;
void* __right_value534 = (void*)0;
struct sType* result_type_512;
struct sType* __dec_obj265;
int n_513;
void* __right_value535 = (void*)0;
struct sType* __dec_obj266;
void* __right_value536 = (void*)0;
struct sType* __dec_obj267;
int i_514;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_515;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct buffer* buf_516;
void* __right_value541 = (void*)0;
struct sType* result_type2_517;
void* __right_value542 = (void*)0;
struct list$1CVALUEph* o2_saved_518;
struct CVALUE* it_519;
int i_520;
struct list$1sNodeph* o2_saved_521;
struct sNode* it_522;
_Bool Value_523;
void* __right_value543 = (void*)0;
struct CVALUE* come_value_524;
void* __right_value544 = (void*)0;
char* left_value_code_525;
void* __right_value545 = (void*)0;
char* __dec_obj268;
void* __right_value546 = (void*)0;
struct sType* __dec_obj269;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_526;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct buffer* buf_527;
struct list$1CVALUEph* o2_saved_528;
struct CVALUE* it_529;
void* __right_value551 = (void*)0;
char* left_value_code_530;
void* __right_value552 = (void*)0;
char* __dec_obj270;
void* __right_value553 = (void*)0;
struct sType* result_type_531;
struct sType* __dec_obj271;
int n_532;
void* __right_value554 = (void*)0;
struct sType* __dec_obj272;
void* __right_value555 = (void*)0;
struct sType* __dec_obj273;
int i_533;
void* __right_value556 = (void*)0;
struct sType* __dec_obj274;
_Bool __result319__;
memset(&calling_fun_510, 0, sizeof(_Bool));
    left_498=self->mLeft;
    array_num_nodes_499=self->mArrayNum;
    Value_500=node_compile(left_498,info);
    if(    !Value_500) {
        return (_Bool)0;
    }
    else {
    }
    left_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_501->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj264=left_value_501->c_value;
        left_value_501->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value526=make_type_name_string(left_value_501->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_501->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_502=(struct sType*)come_increment_ref_count(sType_clone(left_value_501->type));
    array_num_503=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1075, "list$1CVALUEph"))));
    for(    o2_saved_504=(array_num_nodes_499),it_505=list$1sNodeph_begin((o2_saved_504));    !list$1sNodeph_end((o2_saved_504));    it_505=list$1sNodeph_next((o2_saved_504))    ){
        Value_506=node_compile(it_505,info);
        if(        !Value_506) {
            __result318__ = (_Bool)0;
            come_call_finalizer3(left_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_503,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result318__;
        }
        else {
        }
        c_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_503,(struct CVALUE*)come_increment_ref_count(c_value_507));
        come_call_finalizer3(c_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_508=(struct sType*)come_increment_ref_count(sType_clone(left_value_501->type));
    fun_name_509="operator_load_element";
    if(    self->mQuote) {
        calling_fun_510=(_Bool)0;
    }
    else {
        calling_fun_510=operator_overload_fun(type_508,fun_name_509,left_value_501,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value533=list$1CVALUEphp_operator_load_element(array_num_503,0))), "18field.c", 1096, 12)),self->mBreakGuard,info);
        come_call_finalizer3(__right_value533,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_510) {
        if(        gComeDebug&&left_value_501->var&&left_value_501->var->mType&&list$1sNodeph_length(left_value_501->var->mType->mArrayNum)>0) {
            var_type_511=left_value_501->var->mType;
            result_type_512=(struct sType*)come_increment_ref_count(sType_clone(left_type_502));
            if(            result_type_512->mOriginalLoadVarType->v1) {
                __dec_obj265=result_type_512;
                result_type_512=(struct sType*)come_increment_ref_count(result_type_512->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_512->mArrayNum)>0) {
                n_513=list$1sNodeph_length(result_type_512->mArrayNum)-list$1CVALUEph_length(array_num_503);
                if(                n_513==0) {
                    __dec_obj266=result_type_512;
                    result_type_512=(struct sType*)come_increment_ref_count(sType_clone(left_type_502));
                    come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_502->mOriginalLoadVarType->v1) {
                        __dec_obj267=result_type_512;
                        result_type_512=(struct sType*)come_increment_ref_count(sType_clone(left_type_502->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_512->mArrayNum);
                }
                else if(                n_513>0) {
                    for(                    i_514=0;                    i_514<n_513;                    i_514++                    ){
                        list$1sNodeph_delete(result_type_512->mArrayNum,-1,-1);
                    }
                }
                else if(                n_513<0) {
                    list$1sNodeph_reset(result_type_512->mArrayNum);
                    result_type_512->mPointerNum+=n_513;
                    if(                    result_type_512->mPointerNum<0) {
                        result_type_512->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_512->mPointerNum>0) {
                    result_type_512->mPointerNum-=list$1CVALUEph_length(array_num_503);
                    if(                    result_type_512->mPointerNum<0) {
                        result_type_512->mPointerNum=0;
                    }
                }
            }
            come_value_515=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1143, "CVALUE"))));
            buf_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1145, "buffer"))));
            result_type2_517=(struct sType*)come_increment_ref_count(sType_clone(result_type_512));
            result_type2_517->mPointerNum++;
            buffer_append_format(buf_516,"*(%s)come_range_check(&%s",((char*)(__right_value542=make_type_name_string(result_type2_517,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_501->c_value);
            __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_518=(struct list$1CVALUEph*)come_increment_ref_count((array_num_503)),it_519=list$1CVALUEph_begin((o2_saved_518));            !list$1CVALUEph_end((o2_saved_518));            it_519=list$1CVALUEph_next((o2_saved_518))            ){
                buffer_append_format(buf_516,"[%s]",it_519->c_value);
            }
            come_call_finalizer3(o2_saved_518,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_516,",%s,%s+(",left_value_501->c_value,left_value_501->c_value);
            i_520=0;
            for(            o2_saved_521=(struct list$1sNodeph*)come_increment_ref_count((var_type_511->mArrayNum)),it_522=list$1sNodeph_begin((o2_saved_521));            !list$1sNodeph_end((o2_saved_521));            it_522=list$1sNodeph_next((o2_saved_521))            ){
                Value_523=node_compile(it_522,info);
                if(                !Value_523) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_format(buf_516,"%s",come_value_524->c_value);
                if(                i_520!=list$1sNodeph_length(var_type_511->mArrayNum)-1) {
                    buffer_append_str(buf_516,"*");
                }
                i_520++;
                come_call_finalizer3(come_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_521,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_516,"), \"%s\", %d)",info->sname,info->sline);
            left_value_code_525=(char*)come_increment_ref_count(buffer_to_string(buf_516));
            __dec_obj268=come_value_515->c_value;
            come_value_515->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_525));
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj269=come_value_515->type;
            come_value_515->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_512));
            come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_515->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_515));
            add_come_last_code(info,"%s",come_value_515->c_value);
            come_call_finalizer3(result_type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_515,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_517,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_525 = come_decrement_ref_count2(left_value_code_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_526=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1187, "CVALUE"))));
            buf_527=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1189, "buffer"))));
            buffer_append_str(buf_527,left_value_501->c_value);
            for(            o2_saved_528=(struct list$1CVALUEph*)come_increment_ref_count((array_num_503)),it_529=list$1CVALUEph_begin((o2_saved_528));            !list$1CVALUEph_end((o2_saved_528));            it_529=list$1CVALUEph_next((o2_saved_528))            ){
                buffer_append_format(buf_527,"[%s]",it_529->c_value);
            }
            come_call_finalizer3(o2_saved_528,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_530=(char*)come_increment_ref_count(buffer_to_string(buf_527));
            __dec_obj270=come_value_526->c_value;
            come_value_526->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_530));
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
            result_type_531=(struct sType*)come_increment_ref_count(sType_clone(left_type_502));
            if(            result_type_531->mOriginalLoadVarType->v1) {
                __dec_obj271=result_type_531;
                result_type_531=(struct sType*)come_increment_ref_count(result_type_531->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_531->mArrayNum)>0) {
                n_532=list$1sNodeph_length(result_type_531->mArrayNum)-list$1CVALUEph_length(array_num_503);
                if(                n_532==0) {
                    __dec_obj272=result_type_531;
                    result_type_531=(struct sType*)come_increment_ref_count(sType_clone(left_type_502));
                    come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_502->mOriginalLoadVarType->v1) {
                        __dec_obj273=result_type_531;
                        result_type_531=(struct sType*)come_increment_ref_count(sType_clone(left_type_502->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_531->mArrayNum);
                }
                else if(                n_532>0) {
                    for(                    i_533=0;                    i_533<n_532;                    i_533++                    ){
                        list$1sNodeph_delete(result_type_531->mArrayNum,-1,-1);
                    }
                }
                else if(                n_532<0) {
                    list$1sNodeph_reset(result_type_531->mArrayNum);
                    result_type_531->mPointerNum+=n_532;
                    if(                    result_type_531->mPointerNum<0) {
                        result_type_531->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_531->mPointerNum>0) {
                    result_type_531->mPointerNum-=list$1CVALUEph_length(array_num_503);
                    if(                    result_type_531->mPointerNum<0) {
                        result_type_531->mPointerNum=0;
                    }
                }
            }
            __dec_obj274=come_value_526->type;
            come_value_526->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_531));
            come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_526->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_526));
            add_come_last_code(info,"%s",come_value_526->c_value);
            come_call_finalizer3(come_value_526,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_527,buffer_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_530 = come_decrement_ref_count2(left_value_code_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result319__ = (_Bool)1;
    come_call_finalizer3(left_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_503,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result319__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1sNodeph* __dec_obj275;
void* __right_value559 = (void*)0;
struct sNode* __dec_obj276;
struct sLoadRangeArrayNode* __result320__;
    ((struct sNodeBase*)(__right_value557=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value557,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj275=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj275,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj276=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value560 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value560=__builtin_string("sLoadRangeArrayNode")));
    __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_534;
struct list$1sNodeph* array_num_nodes_535;
_Bool Value_536;
void* __right_value561 = (void*)0;
struct CVALUE* left_value_537;
void* __right_value562 = (void*)0;
struct sType* left_type_538;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1CVALUEph* array_num_539;
struct list$1sNodeph* o2_saved_540;
struct sNode* it_541;
_Bool Value_542;
_Bool __result322__;
void* __right_value565 = (void*)0;
struct CVALUE* c_value_543;
void* __right_value566 = (void*)0;
struct sType* type_544;
char* fun_name_545;
_Bool calling_fun_546;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct CVALUE* come_value_547;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* buf_548;
struct list$1CVALUEph* o2_saved_549;
struct CVALUE* it_550;
void* __right_value573 = (void*)0;
char* left_value_code_551;
void* __right_value574 = (void*)0;
char* __dec_obj280;
void* __right_value575 = (void*)0;
struct sType* result_type_552;
struct sType* __dec_obj281;
int n_553;
void* __right_value576 = (void*)0;
struct sType* __dec_obj282;
void* __right_value577 = (void*)0;
struct sType* __dec_obj283;
int i_554;
void* __right_value578 = (void*)0;
struct sType* __dec_obj284;
_Bool __result323__;
memset(&calling_fun_546, 0, sizeof(_Bool));
    left_534=self->mLeft;
    array_num_nodes_535=self->mArrayNum;
    Value_536=node_compile(left_534,info);
    if(    !Value_536) {
        return (_Bool)0;
    }
    else {
    }
    left_value_537=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_538=(struct sType*)come_increment_ref_count(sType_clone(left_value_537->type));
    array_num_539=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1285, "list$1CVALUEph"))));
    for(    o2_saved_540=(array_num_nodes_535),it_541=list$1sNodeph_begin((o2_saved_540));    !list$1sNodeph_end((o2_saved_540));    it_541=list$1sNodeph_next((o2_saved_540))    ){
        Value_542=node_compile(it_541,info);
        if(        !Value_542) {
            __result322__ = (_Bool)0;
            come_call_finalizer3(left_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_539,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result322__;
        }
        else {
        }
        c_value_543=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_539,(struct CVALUE*)come_increment_ref_count(c_value_543));
        come_call_finalizer3(c_value_543,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_544=(struct sType*)come_increment_ref_count(sType_clone(left_value_537->type));
    fun_name_545="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_546=(_Bool)0;
    }
    else {
        calling_fun_546=operator_overload_fun2(type_544,fun_name_545,left_value_537,((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value567=list$1CVALUEphp_operator_load_element(array_num_539,0))), "18field.c", 1306, 13)),((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value568=list$1CVALUEphp_operator_load_element(array_num_539,1))), "18field.c", 1306, 14)),info);
        come_call_finalizer3(__right_value567,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value568,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    !calling_fun_546) {
        come_value_547=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1310, "CVALUE"))));
        buf_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1312, "buffer"))));
        buffer_append_str(buf_548,left_value_537->c_value);
        for(        o2_saved_549=(struct list$1CVALUEph*)come_increment_ref_count((array_num_539)),it_550=list$1CVALUEph_begin((o2_saved_549));        !list$1CVALUEph_end((o2_saved_549));        it_550=list$1CVALUEph_next((o2_saved_549))        ){
            buffer_append_format(buf_548,"[%s]",it_550->c_value);
        }
        come_call_finalizer3(o2_saved_549,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_551=(char*)come_increment_ref_count(buffer_to_string(buf_548));
        __dec_obj280=come_value_547->c_value;
        come_value_547->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_551));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_552=(struct sType*)come_increment_ref_count(sType_clone(left_type_538));
        if(        result_type_552->mOriginalLoadVarType->v1) {
            __dec_obj281=result_type_552;
            result_type_552=(struct sType*)come_increment_ref_count(result_type_552->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj281,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_552->mArrayNum)>0) {
            n_553=list$1sNodeph_length(result_type_552->mArrayNum)-list$1CVALUEph_length(array_num_539);
            if(            n_553==0) {
                __dec_obj282=result_type_552;
                result_type_552=(struct sType*)come_increment_ref_count(sType_clone(left_type_538));
                come_call_finalizer3(__dec_obj282,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_538->mOriginalLoadVarType->v1) {
                    __dec_obj283=result_type_552;
                    result_type_552=(struct sType*)come_increment_ref_count(sType_clone(left_type_538->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj283,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_552->mArrayNum);
            }
            else if(            n_553>0) {
                for(                i_554=0;                i_554<n_553;                i_554++                ){
                    list$1sNodeph_delete(result_type_552->mArrayNum,-1,-1);
                }
            }
            else if(            n_553<0) {
                list$1sNodeph_reset(result_type_552->mArrayNum);
                result_type_552->mPointerNum+=n_553;
                if(                result_type_552->mPointerNum<0) {
                    result_type_552->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_552->mPointerNum>0) {
                result_type_552->mPointerNum-=list$1CVALUEph_length(array_num_539);
                if(                result_type_552->mPointerNum<0) {
                    result_type_552->mPointerNum=0;
                }
            }
        }
        __dec_obj284=come_value_547->type;
        come_value_547->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_552));
        come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_547->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_547));
        add_come_last_code(info,"%s",come_value_547->c_value);
        come_call_finalizer3(come_value_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_551 = come_decrement_ref_count2(left_value_code_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result323__ = (_Bool)1;
    come_call_finalizer3(left_value_537,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_539,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_544,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result324__;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result324__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value586 = (void*)0;
struct sNode* __result327__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1386, "struct sNode");
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value580=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1386, "sStoreFieldNode")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result327__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value586=_inf_value3));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value580,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value586) { __right_value586 = come_decrement_ref_count2(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result327__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_556;
char* p_557;
int sline_558;
_Bool no_comma_559;
_Bool no_output_err_560;
_Bool no_output_come_code_561;
void* __right_value587 = (void*)0;
struct sNode* exp_562;
_Bool quote_563;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1sNodeph* array_num_564;
void* __right_value590 = (void*)0;
struct sNode* node2_565;
void* __right_value594 = (void*)0;
struct sNode* node3_569;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value601 = (void*)0;
struct sNode* __dec_obj302;
_Bool quote_571;
_Bool range_572;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1sNodeph* array_num_573;
_Bool range_array2_574;
char* p_575;
int sline_576;
_Bool no_comma_577;
_Bool no_output_err_578;
_Bool no_output_come_code_579;
void* __right_value604 = (void*)0;
struct sNode* exp_580;
void* __right_value605 = (void*)0;
struct sNode* node2_581;
_Bool break_guard_582;
void* __right_value606 = (void*)0;
struct sNode* right_node_583;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value621 = (void*)0;
struct sNode* __dec_obj318;
_Bool no_comma_586;
void* __right_value622 = (void*)0;
struct sNode* begin_587;
void* __right_value623 = (void*)0;
struct sNode* end_588;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value7;
struct sRangeCheckNode* _inf_obj_value7;
void* __right_value631 = (void*)0;
struct sNode* __dec_obj327;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* __right_value637 = (void*)0;
struct sNode* __dec_obj332;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value9;
struct sNullableNode* _inf_obj_value9;
void* __right_value643 = (void*)0;
struct sNode* __dec_obj337;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* __dec_obj338;
void* __right_value646 = (void*)0;
char* field_name_592;
_Bool parse_method_generics_type_593;
char* p_594;
int sline_595;
void* __right_value647 = (void*)0;
char* word_596;
void* __right_value648 = (void*)0;
struct sNode* right_node_597;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sNode* _inf_value10;
struct sStoreFieldNode* _inf_obj_value10;
void* __right_value656 = (void*)0;
struct sNode* __dec_obj347;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj348;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sNode* __dec_obj349;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sNode* __dec_obj350;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* __dec_obj351;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sNode* __dec_obj352;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* __dec_obj353;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* __dec_obj354;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sNode* _inf_value11;
struct sNullCheckNode* _inf_obj_value11;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj359;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sNode* __dec_obj360;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sNode* _inf_value12;
struct sNullCheckNode* _inf_obj_value12;
void* __right_value686 = (void*)0;
struct sNode* __dec_obj365;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sNode* _inf_value13;
struct sLoadFieldNode* _inf_obj_value13;
void* __right_value693 = (void*)0;
struct sNode* __dec_obj372;
void* __right_value694 = (void*)0;
struct sNode* node2_602;
struct sNode* __dec_obj373;
struct sNode* __result349__;
    while((_Bool)1) {
        range_array_556=(_Bool)0;
        {
            p_557=info->p;
            sline_558=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_559=info->no_comma;
                no_output_err_560=info->no_output_err;
                no_output_come_code_561=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_562=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_559;
                info->no_output_err=no_output_err_560;
                info->no_output_come_code=no_output_come_code_561;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_556=(_Bool)1;
                }
                if(exp_562) { exp_562 = come_decrement_ref_count2(exp_562, ((struct sNode*)exp_562)->finalize, ((struct sNode*)exp_562)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_557;
            info->sline=sline_558;
        }
        if(        range_array_556&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_563=*info->p==92;
            if(            quote_563) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_564=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1430, "list$1sNodeph"))));
            skip_pointer_attribute(info);
            node2_565=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_push_back(array_num_564,(struct sNode*)come_increment_ref_count(node2_565));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_569=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(array_num_564,(struct sNode*)come_increment_ref_count(node3_569));
                expected_next_character(93,info);
                if(node3_569) { node3_569 = come_decrement_ref_count2(node3_569, ((struct sNode*)node3_569)->finalize, ((struct sNode*)node3_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1451, "struct sNode");
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value596=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1451, "sLoadRangeArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_564),quote_563,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj302=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value596,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(array_num_564,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_565) { node2_565 = come_decrement_ref_count2(node2_565, ((struct sNode*)node2_565)->finalize, ((struct sNode*)node2_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !range_array_556&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_571=*info->p==92;
            if(            quote_571) {
                info->p++;
            }
            range_572=(_Bool)0;
            array_num_573=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1460, "list$1sNodeph"))));
            while(1) {
                range_array2_574=(_Bool)0;
                {
                    p_575=info->p;
                    sline_576=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_577=info->no_comma;
                        no_output_err_578=info->no_output_err;
                        no_output_come_code_579=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_580=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_577;
                        info->no_output_err=no_output_err_578;
                        info->no_output_come_code=no_output_come_code_579;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_574=(_Bool)1;
                        }
                        if(exp_580) { exp_580 = come_decrement_ref_count2(exp_580, ((struct sNode*)exp_580)->finalize, ((struct sNode*)exp_580)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    info->p=p_575;
                    info->sline=sline_576;
                }
                if(                range_array2_574) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_581=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(array_num_573,(struct sNode*)come_increment_ref_count(node2_581));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node2_581) { node2_581 = come_decrement_ref_count2(node2_581, ((struct sNode*)node2_581)->finalize, ((struct sNode*)node2_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    break;
                }
            }
            break_guard_582=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_582=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1535, "struct sNode");
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value608=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1535, "sStoreArrayNode")),node,(struct sNode*)come_increment_ref_count(right_node_583),(struct list$1sNodeph*)come_increment_ref_count(array_num_573),quote_571,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj311=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value608,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_583) { right_node_583 = come_decrement_ref_count2(right_node_583, ((struct sNode*)right_node_583)->finalize, ((struct sNode*)right_node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1538, "struct sNode");
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value616=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1538, "sLoadArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_573),quote_571,break_guard_582,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj318=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value616,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(array_num_573,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==123) {
            info->p+=2;
            skip_spaces_and_lf(info);
            no_comma_586=info->no_comma;
            info->no_comma=(_Bool)1;
            begin_587=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_586;
            expected_next_character(44,info);
            end_588=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(125,info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1558, "struct sNode");
            _inf_obj_value7=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(__right_value625=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count((struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1558, "sRangeCheckNode")),node,begin_587,end_588,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sRangeCheckNode_finalize;
            _inf_value7->clone=(void*)sRangeCheckNode_clone;
            _inf_value7->compile=(void*)sRangeCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sRangeCheckNode_kind;
            __dec_obj327=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            if(__dec_obj327) { __dec_obj327 = come_decrement_ref_count2(__dec_obj327, ((struct sNode*)__dec_obj327)->finalize, ((struct sNode*)__dec_obj327)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value625,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(begin_587) { begin_587 = come_decrement_ref_count2(begin_587, ((struct sNode*)begin_587)->finalize, ((struct sNode*)begin_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(end_588) { end_588 = come_decrement_ref_count2(end_588, ((struct sNode*)end_588)->finalize, ((struct sNode*)end_588)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1566, "struct sNode");
            _inf_obj_value8=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value633=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1566, "sNullCheckNode")),node,(_Bool)0,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullCheckNode_finalize;
            _inf_value8->clone=(void*)sNullCheckNode_clone;
            _inf_value8->compile=(void*)sNullCheckNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullCheckNode_kind;
            __dec_obj332=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value633,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1574, "struct sNode");
            _inf_obj_value9=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value639=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1574, "sNullableNode")),node,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sNullableNode_finalize;
            _inf_value9->clone=(void*)sNullableNode_clone;
            _inf_value9->compile=(void*)sNullableNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sNullableNode_kind;
            __dec_obj337=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value9);
            if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value639,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj338=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
            if(__dec_obj338) { __dec_obj338 = come_decrement_ref_count2(__dec_obj338, ((struct sNode*)__dec_obj338)->finalize, ((struct sNode*)__dec_obj338)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_592=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_593=(_Bool)0;
            {
                p_594=info->p;
                sline_595=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_596=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_596,info)) {
                            parse_method_generics_type_593=(_Bool)1;
                        }
                        word_596 = come_decrement_ref_count2(word_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                info->p=p_594;
                info->sline=sline_595;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_597=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1630, "struct sNode");
                _inf_obj_value10=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value650=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1630, "sStoreFieldNode")),node,(struct sNode*)come_increment_ref_count(right_node_597),(char*)come_increment_ref_count(field_name_592),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value10->clone=(void*)sStoreFieldNode_clone;
                _inf_value10->compile=(void*)sStoreFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sStoreFieldNode_kind;
                __dec_obj347=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                if(__dec_obj347) { __dec_obj347 = come_decrement_ref_count2(__dec_obj347, ((struct sNode*)__dec_obj347)->finalize, ((struct sNode*)__dec_obj347)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value650,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_597) { right_node_597 = come_decrement_ref_count2(right_node_597, ((struct sNode*)right_node_597)->finalize, ((struct sNode*)right_node_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_592,"exception_throw")||string_operator_equals(field_name_592,"exception_value")||parse_method_generics_type_593||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_592,"if")) {
                    __dec_obj348=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj348) { __dec_obj348 = come_decrement_ref_count2(__dec_obj348, ((struct sNode*)__dec_obj348)->finalize, ((struct sNode*)__dec_obj348)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_592,"elif")) {
                    __dec_obj349=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj349) { __dec_obj349 = come_decrement_ref_count2(__dec_obj349, ((struct sNode*)__dec_obj349)->finalize, ((struct sNode*)__dec_obj349)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_592,"case")) {
                    __dec_obj350=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj350) { __dec_obj350 = come_decrement_ref_count2(__dec_obj350, ((struct sNode*)__dec_obj350)->finalize, ((struct sNode*)__dec_obj350)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_592,"less")) {
                    __dec_obj351=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj351) { __dec_obj351 = come_decrement_ref_count2(__dec_obj351, ((struct sNode*)__dec_obj351)->finalize, ((struct sNode*)__dec_obj351)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_592,"rescue")) {
                    __dec_obj352=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_592,"exception_throw")) {
                    __dec_obj353=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_592,"exception_value")) {
                    __dec_obj354=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    if(__dec_obj354) { __dec_obj354 = come_decrement_ref_count2(__dec_obj354, ((struct sNode*)__dec_obj354)->finalize, ((struct sNode*)__dec_obj354)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1656, "struct sNode");
                    _inf_obj_value11=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value673=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1656, "sNullCheckNode")),((struct sNode*)(__right_value672=sNode_clone(node))),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value11->clone=(void*)sNullCheckNode_clone;
                    _inf_value11->compile=(void*)sNullCheckNode_compile;
                    _inf_value11->sline=(void*)sNodeBase_sline;
                    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value11->sname=(void*)sNodeBase_sname;
                    _inf_value11->terminated=(void*)sNodeBase_terminated;
                    _inf_value11->kind=(void*)sNullCheckNode_kind;
                    __dec_obj359=node;
                    node=(struct sNode*)come_increment_ref_count(_inf_value11);
                    if(__dec_obj359) { __dec_obj359 = come_decrement_ref_count2(__dec_obj359, ((struct sNode*)__dec_obj359)->finalize, ((struct sNode*)__dec_obj359)->_protocol_obj, 0,0,0, (void*)0); };
                    if(__right_value672) { __right_value672 = come_decrement_ref_count2(__right_value672, ((struct sNode*)__right_value672)->finalize, ((struct sNode*)__right_value672)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    come_call_finalizer3(__right_value673,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    __dec_obj360=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_592),info));
                    if(__dec_obj360) { __dec_obj360 = come_decrement_ref_count2(__dec_obj360, ((struct sNode*)__dec_obj360)->finalize, ((struct sNode*)__dec_obj360)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1661, "struct sNode");
                _inf_obj_value12=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value682=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1661, "sNullCheckNode")),((struct sNode*)(__right_value681=sNode_clone(node))),(_Bool)1,info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sNullCheckNode_finalize;
                _inf_value12->clone=(void*)sNullCheckNode_clone;
                _inf_value12->compile=(void*)sNullCheckNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sNullCheckNode_kind;
                __dec_obj365=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value12);
                if(__dec_obj365) { __dec_obj365 = come_decrement_ref_count2(__dec_obj365, ((struct sNode*)__dec_obj365)->finalize, ((struct sNode*)__dec_obj365)->_protocol_obj, 0,0,0, (void*)0); };
                if(__right_value681) { __right_value681 = come_decrement_ref_count2(__right_value681, ((struct sNode*)__right_value681)->finalize, ((struct sNode*)__right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                come_call_finalizer3(__right_value682,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1662, "struct sNode");
                _inf_obj_value13=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value688=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1662, "sLoadFieldNode")),node,(char*)come_increment_ref_count(field_name_592),info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value13->clone=(void*)sLoadFieldNode_clone;
                _inf_value13->compile=(void*)sLoadFieldNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sLoadFieldNode_kind;
                __dec_obj372=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value13);
                if(__dec_obj372) { __dec_obj372 = come_decrement_ref_count2(__dec_obj372, ((struct sNode*)__dec_obj372)->finalize, ((struct sNode*)__dec_obj372)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(__right_value688,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            field_name_592 = come_decrement_ref_count2(field_name_592, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node2_602=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_602==((void*)0)) {
                if(node2_602) { node2_602 = come_decrement_ref_count2(node2_602, ((struct sNode*)node2_602)->finalize, ((struct sNode*)node2_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            __dec_obj373=node;
            node=(struct sNode*)come_increment_ref_count(node2_602);
            if(__dec_obj373) { __dec_obj373 = come_decrement_ref_count2(__dec_obj373, ((struct sNode*)__dec_obj373)->finalize, ((struct sNode*)__dec_obj373)->_protocol_obj, 0,0,0, (void*)0); };
            if(node2_602) { node2_602 = come_decrement_ref_count2(node2_602, ((struct sNode*)node2_602)->finalize, ((struct sNode*)node2_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result349__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value591 = (void*)0;
struct list_item$1sNodeph* litem_566;
struct sNode* __dec_obj293;
void* __right_value592 = (void*)0;
struct list_item$1sNodeph* litem_567;
struct sNode* __dec_obj294;
void* __right_value593 = (void*)0;
struct list_item$1sNodeph* litem_568;
struct sNode* __dec_obj295;
struct list$1sNodeph* __result328__;
    if(    self->len==0) {
        litem_566=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value591=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sNodeph"))));
        litem_566->prev=((void*)0);
        litem_566->next=((void*)0);
        __dec_obj293=litem_566->item;
        litem_566->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_566;
        self->head=litem_566;
    }
    else if(    self->len==1) {
        litem_567=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value592=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sNodeph"))));
        litem_567->prev=self->head;
        litem_567->next=((void*)0);
        __dec_obj294=litem_567->item;
        litem_567->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_567;
        self->head->next=litem_567;
    }
    else {
        litem_568=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value593=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sNodeph"))));
        litem_568->prev=self->tail;
        litem_568->next=((void*)0);
        __dec_obj295=litem_568->item;
        litem_568->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_568;
        self->tail=litem_568;
    }
    self->len++;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj296;
struct list$1sNodeph* __dec_obj297;
struct sNode* __dec_obj298;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj296=self->sname;
            __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj297=self->mArrayNum;
            come_call_finalizer3(__dec_obj297,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj298=self->mLeft;
            if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result329__;
void* __right_value597 = (void*)0;
struct sLoadRangeArrayNode* result_570;
void* __right_value598 = (void*)0;
char* __dec_obj299;
void* __right_value599 = (void*)0;
struct list$1sNodeph* __dec_obj300;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj301;
struct sLoadRangeArrayNode* __result330__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_570=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"));
    if(    self!=((void*)0)) {
        result_570->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_570->sname;
        result_570->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj300=result_570->mArrayNum;
        result_570->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj300,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj301=result_570->mLeft;
        result_570->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_570->mQuote=self->mQuote;
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_570;
    come_call_finalizer3(result_570,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj303;
struct sNode* __dec_obj304;
struct sNode* __dec_obj305;
struct list$1sNodeph* __dec_obj306;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj303=self->sname;
            __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj304=self->mLeft;
            if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj305=self->mRight;
            if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj306=self->mArrayNum;
            come_call_finalizer3(__dec_obj306,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result331__;
void* __right_value609 = (void*)0;
struct sStoreArrayNode* result_584;
void* __right_value610 = (void*)0;
char* __dec_obj307;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj308;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj309;
void* __right_value613 = (void*)0;
struct list$1sNodeph* __dec_obj310;
struct sStoreArrayNode* __result332__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_584=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"));
    if(    self!=((void*)0)) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj307=result_584->sname;
        result_584->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj308=result_584->mLeft;
        result_584->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj309=result_584->mRight;
        result_584->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj310=result_584->mArrayNum;
        result_584->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj310,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->mQuote=self->mQuote;
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_584;
    come_call_finalizer3(result_584,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj312;
struct list$1sNodeph* __dec_obj313;
struct sNode* __dec_obj314;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj312=self->sname;
            __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj313=self->mArrayNum;
            come_call_finalizer3(__dec_obj313,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj314=self->mLeft;
            if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result333__;
void* __right_value617 = (void*)0;
struct sLoadArrayNode* result_585;
void* __right_value618 = (void*)0;
char* __dec_obj315;
void* __right_value619 = (void*)0;
struct list$1sNodeph* __dec_obj316;
void* __right_value620 = (void*)0;
struct sNode* __dec_obj317;
struct sLoadArrayNode* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_585=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"));
    if(    self!=((void*)0)) {
        result_585->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_585->sname;
        result_585->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_585->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj316=result_585->mArrayNum;
        result_585->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj316,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_585->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj317=result_585->mLeft;
        result_585->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_585->mQuote=self->mQuote;
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_585;
    come_call_finalizer3(result_585,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
char* __dec_obj319;
struct sNode* __dec_obj320;
struct sNode* __dec_obj321;
struct sNode* __dec_obj322;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj319=self->sname;
            __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj320=self->mLeft;
            if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mBegin!=((void*)0)) {
        if(        self->mBegin==gComeFunResultObject) {
            __dec_obj321=self->mBegin;
            if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mEnd!=((void*)0)) {
        if(        self->mEnd==gComeFunResultObject) {
            __dec_obj322=self->mEnd;
            if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__=(void*)0;
struct sRangeCheckNode* __result335__;
void* __right_value626 = (void*)0;
struct sRangeCheckNode* result_589;
void* __right_value627 = (void*)0;
char* __dec_obj323;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj324;
void* __right_value629 = (void*)0;
struct sNode* __dec_obj325;
void* __right_value630 = (void*)0;
struct sNode* __dec_obj326;
struct sRangeCheckNode* __result336__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_589=(struct sRangeCheckNode*)come_increment_ref_count((struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"));
    if(    self!=((void*)0)) {
        result_589->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj323=result_589->sname;
        result_589->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_589->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj324=result_589->mLeft;
        result_589->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mBegin!=((void*)0)) {
        __dec_obj325=result_589->mBegin;
        result_589->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(self->mBegin));
        if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mEnd!=((void*)0)) {
        __dec_obj326=result_589->mEnd;
        result_589->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(self->mEnd));
        if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_589;
    come_call_finalizer3(result_589,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj333;
struct sNode* __dec_obj334;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj333=self->sname;
            __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj334=self->mLeft;
            if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result339__;
void* __right_value640 = (void*)0;
struct sNullableNode* result_591;
void* __right_value641 = (void*)0;
char* __dec_obj335;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj336;
struct sNullableNode* __result340__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_591=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"));
    if(    self!=((void*)0)) {
        result_591->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj335=result_591->sname;
        result_591->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_591->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj336=result_591->mLeft;
        result_591->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj336) { __dec_obj336 = come_decrement_ref_count2(__dec_obj336, ((struct sNode*)__dec_obj336)->finalize, ((struct sNode*)__dec_obj336)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result340__ = gComeFunResultObject = __result_obj__ = result_591;
    come_call_finalizer3(result_591,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj339;
struct sNode* __dec_obj340;
struct sNode* __dec_obj341;
char* __dec_obj342;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj339=self->sname;
            __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj340=self->mLeft;
            if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj341=self->mRight;
            if(__dec_obj341) { __dec_obj341 = come_decrement_ref_count2(__dec_obj341, ((struct sNode*)__dec_obj341)->finalize, ((struct sNode*)__dec_obj341)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj342=self->mName;
            __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result341__;
void* __right_value651 = (void*)0;
struct sStoreFieldNode* result_598;
void* __right_value652 = (void*)0;
char* __dec_obj343;
void* __right_value653 = (void*)0;
struct sNode* __dec_obj344;
void* __right_value654 = (void*)0;
struct sNode* __dec_obj345;
void* __right_value655 = (void*)0;
char* __dec_obj346;
struct sStoreFieldNode* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_598=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"));
    if(    self!=((void*)0)) {
        result_598->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj343=result_598->sname;
        result_598->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_598->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj344=result_598->mLeft;
        result_598->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj345=result_598->mRight;
        result_598->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj345) { __dec_obj345 = come_decrement_ref_count2(__dec_obj345, ((struct sNode*)__dec_obj345)->finalize, ((struct sNode*)__dec_obj345)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj346=result_598->mName;
        result_598->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_598;
    come_call_finalizer3(result_598,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj361;
struct sNode* __dec_obj362;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj361=self->sname;
            __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj362=self->mLeft;
            if(__dec_obj362) { __dec_obj362 = come_decrement_ref_count2(__dec_obj362, ((struct sNode*)__dec_obj362)->finalize, ((struct sNode*)__dec_obj362)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result345__;
void* __right_value683 = (void*)0;
struct sNullCheckNode* result_600;
void* __right_value684 = (void*)0;
char* __dec_obj363;
void* __right_value685 = (void*)0;
struct sNode* __dec_obj364;
struct sNullCheckNode* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_600=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"));
    if(    self!=((void*)0)) {
        result_600->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_600->sname;
        result_600->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_600->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj364=result_600->mLeft;
        result_600->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj364) { __dec_obj364 = come_decrement_ref_count2(__dec_obj364, ((struct sNode*)__dec_obj364)->finalize, ((struct sNode*)__dec_obj364)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_600->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_600;
    come_call_finalizer3(result_600,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj366;
struct sNode* __dec_obj367;
char* __dec_obj368;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj366=self->sname;
            __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj367=self->mLeft;
            if(__dec_obj367) { __dec_obj367 = come_decrement_ref_count2(__dec_obj367, ((struct sNode*)__dec_obj367)->finalize, ((struct sNode*)__dec_obj367)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj368=self->mName;
            __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result347__;
void* __right_value689 = (void*)0;
struct sLoadFieldNode* result_601;
void* __right_value690 = (void*)0;
char* __dec_obj369;
void* __right_value691 = (void*)0;
struct sNode* __dec_obj370;
void* __right_value692 = (void*)0;
char* __dec_obj371;
struct sLoadFieldNode* __result348__;
    if(    self==(void*)0) {
        __result347__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    result_601=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"));
    if(    self!=((void*)0)) {
        result_601->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj369=result_601->sname;
        result_601->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_601->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj370=result_601->mLeft;
        result_601->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj370) { __dec_obj370 = come_decrement_ref_count2(__dec_obj370, ((struct sNode*)__dec_obj370)->finalize, ((struct sNode*)__dec_obj370)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj371=result_601->mName;
        result_601->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result348__ = gComeFunResultObject = __result_obj__ = result_601;
    come_call_finalizer3(result_601,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

