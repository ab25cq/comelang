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
struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
};

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
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
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sCurrentNode* __result207__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string(self->sname)));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result209__;
    __result209__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sCurrentNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
char* class_name_266;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sClass* current_stack_267;
struct sVarTable* vtable_268;
struct map$2charphsVarph* o2_saved_269;
char* it_272;
char* key_275;
void* __right_value255 = (void*)0;
struct sVar* value_276;
void* __right_value295 = (void*)0;
struct sType* type2_290;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple2$2charphsTypeph* item_309;
void* __right_value299 = (void*)0;
struct sType* type3_310;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct tuple2$2charphsTypeph* item2_313;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct map$2charphsVarph* o2_saved_365;
char* it_366;
char* key_367;
void* __right_value316 = (void*)0;
struct sVar* value_368;
void* __right_value317 = (void*)0;
struct sType* type2_369;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple2$2charphsTypeph* item_370;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct CVALUE* come_value_371;
void* __right_value322 = (void*)0;
char* __dec_obj113;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __dec_obj114;
_Bool __result264__;
    info->current_stack_num++;
    class_name_266=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_267=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 457, "sClass")),class_name_266,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_268=info->lv_table;
    while(vtable_268) {
        for(        o2_saved_269=(struct map$2charphsVarph*)come_increment_ref_count((vtable_268->mVars)),it_272=map$2charphsVarph_begin((o2_saved_269));        !map$2charphsVarph_end((o2_saved_269));        it_272=map$2charphsVarph_next((o2_saved_269))        ){
            key_275=it_272;
            value_276=((struct sVar*)come_null_check(((struct sVar*)(__right_value255=map$2charphsVarphp_operator_load_element(vtable_268->mVars,key_275))), "./common.h", 464, 0));
            come_call_finalizer3(__right_value255,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_290=(struct sType*)come_increment_ref_count(sType_clone(value_276->mType));
            type2_290->mPointerNum++;
            item_309=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 470, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_276->mCValueName)),(struct sType*)come_increment_ref_count(type2_290)));
            if(            value_276->mCValueName!=((void*)0)) {
                if(                strcmp(value_276->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_276->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_276->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_276->mType->mClass->mName,"va_list")||string_operator_equals(value_276->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_290->mArrayNum)==1) {
                    type3_310=(struct sType*)come_increment_ref_count(sType_clone(type2_290));
                    list$1sNodeph_reset(type3_310->mArrayNum);
                    type3_310->mPointerNum=1;
                    type3_310->mOriginIsArray=(_Bool)1;
                    item2_313=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 490, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_276->mCValueName)),(struct sType*)come_increment_ref_count(type3_310)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_313)));
                    value_276->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_313,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_267->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_309)));
                }
            }
            come_call_finalizer3(type2_290,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_309,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_269,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_268=vtable_268->mParent;
    }
    output_struct(current_stack_267,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_266),(struct sClass*)come_increment_ref_count(current_stack_267));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_266,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_266);
    vtable_268=info->lv_table;
    while(vtable_268) {
        for(        o2_saved_365=(struct map$2charphsVarph*)come_increment_ref_count((vtable_268->mVars)),it_366=map$2charphsVarph_begin((o2_saved_365));        !map$2charphsVarph_end((o2_saved_365));        it_366=map$2charphsVarph_next((o2_saved_365))        ){
            key_367=it_366;
            value_368=((struct sVar*)come_null_check(((struct sVar*)(__right_value316=map$2charphsVarphp_operator_load_element(vtable_268->mVars,key_367))), "./common.h", 515, 1));
            come_call_finalizer3(__right_value316,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_369=(struct sType*)come_increment_ref_count(sType_clone(value_368->mType));
            item_370=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 519, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_368->mCValueName),(struct sType*)come_increment_ref_count(type2_369)));
            if(            value_368->mCValueName!=((void*)0)) {
                if(                strcmp(value_368->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_368->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_368->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_368->mType->mClass->mName,"va_list")||string_operator_equals(value_368->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_369->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_368->mCValueName,value_368->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_368->mCValueName,value_368->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_369,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_370,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_365,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_268=vtable_268->mParent;
    }
    come_value_371=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 548, "CVALUE"))));
    __dec_obj113=come_value_371->c_value;
    come_value_371->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=come_value_371->type;
    come_value_371->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 551, "sType")),class_name_266,(_Bool)0,info));
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_371->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_371->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_371));
    __result264__ = (_Bool)1;
    class_name_266 = come_decrement_ref_count2(class_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_267,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_371,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result264__;
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_270;
char* __result210__;
char* __result211__;
char* result_271;
char* __result212__;
result_270 = (void*)0;
result_271 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_270,0,sizeof(char*));
        __result210__ = gComeFunResultObject = __result_obj__ = result_270;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result211__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    memset(&result_271,0,sizeof(char*));
    __result212__ = gComeFunResultObject = __result_obj__ = result_271;
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_273;
char* __result213__;
char* __result214__;
char* result_274;
char* __result215__;
result_273 = (void*)0;
result_274 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_273,0,sizeof(char*));
        __result213__ = gComeFunResultObject = __result_obj__ = result_273;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result214__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    memset(&result_274,0,sizeof(char*));
    __result215__ = gComeFunResultObject = __result_obj__ = result_274;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_277;
unsigned int hash_278;
unsigned int it_279;
struct sVar* __result216__;
struct sVar* __result217__;
struct sVar* __result218__;
struct sVar* __result219__;
default_value_277 = (void*)0;
    memset(&default_value_277,0,sizeof(struct sVar*));
    hash_278=charp_get_hash_key(((char*)key))%self->size;
    it_279=hash_278;
    while((_Bool)1) {
        if(        self->item_existance[it_279]) {
            if(            charp_equals(self->keys[it_279],key)) {
                __result216__ = gComeFunResultObject = __result_obj__ = self->items[it_279];
                come_call_finalizer3(default_value_277,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result216__;
            }
            it_279++;
            if(            it_279>=self->size) {
                it_279=0;
            }
            else if(            it_279==hash_278) {
                __result217__ = gComeFunResultObject = __result_obj__ = default_value_277;
                come_call_finalizer3(default_value_277,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result217__;
            }
        }
        else {
            __result218__ = gComeFunResultObject = __result_obj__ = default_value_277;
            come_call_finalizer3(default_value_277,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result218__;
        }
    }
    __result219__ = gComeFunResultObject = __result_obj__ = default_value_277;
    come_call_finalizer3(default_value_277,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj34;
char* __dec_obj35;
struct sType* __dec_obj36;
char* __dec_obj61;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj34=self->mName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj35=self->mCValueName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj36=self->mType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj61=self->mFunName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
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
struct list_item$1sTypeph* it_282;
struct list_item$1sTypeph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        come_call_finalizer3(prev_it_283,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_284;
struct list_item$1sNodeph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer3(prev_it_285,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_286;
struct list_item$1sNodeph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_288;
struct list_item$1charph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        come_call_finalizer3(prev_it_289,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result220__;
void* __right_value256 = (void*)0;
struct sType* result_291;
void* __right_value259 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* __dec_obj65;
void* __right_value261 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
void* __right_value262 = (void*)0;
char* __dec_obj67;
void* __right_value263 = (void*)0;
char* __dec_obj68;
void* __right_value270 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value278 = (void*)0;
struct list$1sNodeph* __dec_obj76;
void* __right_value279 = (void*)0;
struct list$1sTypeph* __dec_obj77;
void* __right_value286 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value287 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value289 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value291 = (void*)0;
char* __dec_obj86;
void* __right_value292 = (void*)0;
char* __dec_obj87;
void* __right_value293 = (void*)0;
char* __dec_obj88;
void* __right_value294 = (void*)0;
char* __dec_obj89;
struct sType* __result236__;
    if(    self==(void*)0) {
        __result220__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_291=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_291->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj64=result_291->mNoSolvedGenericsType;
        result_291->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj65=result_291->mOriginalLoadVarType;
        result_291->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj65,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj66=result_291->mRefferenceOriginalType;
        result_291->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj67=result_291->mInterfaceName;
        result_291->mInterfaceName=(char*)come_increment_ref_count(string_clone(self->mInterfaceName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj68=result_291->mGenericsName;
        result_291->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj72=result_291->mGenericsTypes;
        result_291->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj76=result_291->mArrayNum;
        result_291->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj76,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj77=result_291->mParamTypes;
        result_291->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj81=result_291->mParamNames;
        result_291->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj82=result_291->mResultType;
        result_291->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj83=result_291->mAlignas;
        result_291->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj84=result_291->mChannelType;
        result_291->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_291->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_291->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_291->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_291->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_291->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_291->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_291->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_291->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_291->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_291->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_291->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_291->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_291->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_291->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_291->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_291->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_291->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_291->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_291->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_291->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_291->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_291->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj85=result_291->mSizeNum;
        result_291->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_291->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj86=result_291->mOriginalTypeName;
        result_291->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_291->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_291->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_291->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_291->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_291->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_291->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_291->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj87=result_291->mAsmName;
        result_291->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_291->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_291->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_291->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_291->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_291->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj88=result_291->mTupleName;
        result_291->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj89=result_291->mAttribute;
        result_291->mAttribute=(char*)come_increment_ref_count(string_clone(self->mAttribute));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_291->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result221__;
void* __right_value257 = (void*)0;
struct tuple1$1sTypeph* result_292;
void* __right_value258 = (void*)0;
struct sType* __dec_obj62;
struct tuple1$1sTypeph* __result222__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_292=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj62=result_292->v1;
        result_292->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_292;
    come_call_finalizer3(result_292,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj63;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj63=self->v1;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result223__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sTypeph* result_293;
struct list_item$1sTypeph* it_294;
void* __right_value269 = (void*)0;
struct list$1sTypeph* __result226__;
    if(    self==((void*)0)) {
        __result223__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_293=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sTypeph"))));
    it_294=self->head;
    while(it_294!=((void*)0)) {
        list$1sTypeph_add(result_293,(struct sType*)come_increment_ref_count(sType_clone(it_294->item)));
        it_294=it_294->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_293;
    come_call_finalizer3(result_293,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result224__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1sTypeph* litem_295;
struct sType* __dec_obj69;
void* __right_value267 = (void*)0;
struct list_item$1sTypeph* litem_296;
struct sType* __dec_obj70;
void* __right_value268 = (void*)0;
struct list_item$1sTypeph* litem_297;
struct sType* __dec_obj71;
struct list$1sTypeph* __result225__;
    if(    self->len==0) {
        litem_295=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value266=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sTypeph"))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj69=litem_295->item;
        litem_295->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value267=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sTypeph"))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj70=litem_296->item;
        litem_296->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value268=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sTypeph"))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj71=litem_297->item;
        litem_297->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result227__;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sNodeph* result_298;
struct list_item$1sNodeph* it_299;
void* __right_value277 = (void*)0;
struct list$1sNodeph* __result232__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_298=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1070, "list$1sNodeph"))));
    it_299=self->head;
    while(it_299!=((void*)0)) {
        list$1sNodeph_add(result_298,(struct sNode*)come_increment_ref_count(sNode_clone(it_299->item)));
        it_299=it_299->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_298;
    come_call_finalizer3(result_298,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result228__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_300;
struct sNode* __dec_obj73;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_301;
struct sNode* __dec_obj74;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_302;
struct sNode* __dec_obj75;
struct list$1sNodeph* __result229__;
    if(    self->len==0) {
        litem_300=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1sNodeph"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj73=litem_300->item;
        litem_300->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1sNodeph"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj74=litem_301->item;
        litem_301->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1sNodeph"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj75=litem_302->item;
        litem_302->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result230__;
void* __right_value276 = (void*)0;
struct sNode* result_303;
struct sNode* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_303=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_303->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_303->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_303->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_303->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_303->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_303->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_303->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_303->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_303->kind=self->kind;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_303;
    if(result_303) { result_303 = come_decrement_ref_count2(result_303, ((struct sNode*)result_303)->finalize, ((struct sNode*)result_303)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result233__;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* result_304;
struct list_item$1charph* it_305;
void* __right_value285 = (void*)0;
struct list$1charph* __result235__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_304=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1070, "list$1charph"))));
    it_305=self->head;
    while(it_305!=((void*)0)) {
        list$1charph_add(result_304,(char*)come_increment_ref_count(string_clone(it_305->item)));
        it_305=it_305->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_304;
    come_call_finalizer3(result_304,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_306;
char* __dec_obj78;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj79;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_308;
char* __dec_obj80;
struct list$1charph* __result234__;
    if(    self->len==0) {
        litem_306=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1charph"))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        __dec_obj78=litem_306->item;
        litem_306->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1) {
        litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1charph"))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        __dec_obj79=litem_307->item;
        litem_307->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1charph"))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        __dec_obj80=litem_308->item;
        litem_308->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj90;
struct sType* __dec_obj91;
struct tuple2$2charphsTypeph* __result237__;
    __dec_obj90=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_311;
struct list_item$1sNodeph* prev_it_312;
struct list$1sNodeph* __result238__;
    it_311=self->head;
    while(it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        come_call_finalizer3(prev_it_312,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_314;
struct tuple2$2charphsTypeph* __dec_obj94;
void* __right_value304 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_315;
struct tuple2$2charphsTypeph* __dec_obj97;
void* __right_value305 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_316;
struct tuple2$2charphsTypeph* __dec_obj100;
struct list$1tuple2$2charphsTypephph* __result239__;
    if(    self->len==0) {
        litem_314=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value303=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsTypephph"))));
        litem_314->prev=((void*)0);
        litem_314->next=((void*)0);
        __dec_obj94=litem_314->item;
        litem_314->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_314;
        self->head=litem_314;
    }
    else if(    self->len==1) {
        litem_315=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value304=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsTypephph"))));
        litem_315->prev=self->head;
        litem_315->next=((void*)0);
        __dec_obj97=litem_315->item;
        litem_315->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_315;
        self->head->next=litem_315;
    }
    else {
        litem_316=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value305=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsTypephph"))));
        litem_316->prev=self->tail;
        litem_316->next=((void*)0);
        __dec_obj100=litem_316->item;
        litem_316->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_316;
        self->tail=litem_316;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj101;
struct sType* __dec_obj102;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj101=self->v1;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj102=self->v2;
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result240__;
void* __right_value306 = (void*)0;
struct tuple2$2charphsTypeph* result_317;
void* __right_value307 = (void*)0;
char* __dec_obj103;
void* __right_value308 = (void*)0;
struct sType* __dec_obj104;
struct tuple2$2charphsTypeph* __result241__;
    if(    self==(void*)0) {
        __result240__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_317=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj103=result_317->v1;
        result_317->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj104=result_317->v2;
        result_317->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer3(result_317,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj105;
struct sType* __dec_obj106;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj105=self->v1;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj106=self->v2;
            come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_318;
int i_319;
    for(    i_318=0;    i_318<self->size;    i_318++    ){
        if(        self->item_existance[i_318]) {
            if(            1) {
                come_call_finalizer3(self->items[i_318],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_319=0;    i_319<self->size;    i_319++    ){
        if(        self->item_existance[i_319]) {
            if(            1) {
                self->keys[i_319] = come_decrement_ref_count2(self->keys[i_319], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_341;
unsigned int it_342;
_Bool same_key_exist_359;
char* it2_362;
struct map$2charphsClassph* __result262__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_341=charp_get_hash_key(key)%self->size;
    it_342=hash_341;
    while((_Bool)1) {
        if(        self->item_existance[it_342]) {
            if(            charp_equals(self->keys[it_342],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_342]);
                    self->keys[it_342] = come_decrement_ref_count2(self->keys[it_342], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_342]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_342]);
                    self->keys[it_342]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_342],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_342]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_342]=item;
                }
                break;
            }
            it_342++;
            if(            it_342>=self->size) {
                it_342=0;
            }
            else if(            it_342==hash_341) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_342]=(_Bool)1;
            if(            1) {
                self->keys[it_342]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_342]=key;
            }
            if(            1) {
                self->items[it_342]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_342]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_359=(_Bool)0;
    for(    it2_362=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_362=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_362,key)) {
            same_key_exist_359=(_Bool)1;
        }
    }
    if(    !same_key_exist_359) {
        list$1charp_push_back(self->key_list,key);
    }
    __result262__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_320;
void* __right_value311 = (void*)0;
char** keys_321;
void* __right_value312 = (void*)0;
struct sClass** items_322;
void* __right_value313 = (void*)0;
_Bool* item_existance_323;
int len_324;
char* it_327;
struct sClass* default_value_330;
void* __right_value314 = (void*)0;
struct sClass* it2_331;
unsigned int hash_338;
int n_339;
struct sClass* default_value_340;
void* __right_value315 = (void*)0;
default_value_330 = (void*)0;
default_value_340 = (void*)0;
    size_320=self->size*10;
    keys_321=(char**)come_increment_ref_count(((char**)(__right_value311=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "/usr/local/include/comelang.h", 2557, "char*%"))));
    items_322=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value312=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_320)), "/usr/local/include/comelang.h", 2558, "sClass*%"))));
    item_existance_323=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value313=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_320)), "/usr/local/include/comelang.h", 2559, "bool"))));
    len_324=0;
    for(    it_327=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_327=map$2charphsClassph_next(self)    ){
        memset(&default_value_330,0,sizeof(struct sClass*));
        it2_331=((struct sClass*)(__right_value314=map$2charphsClassph_at(self,it_327,default_value_330)));
        come_call_finalizer3(__right_value314,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_338=charp_get_hash_key(it_327)%size_320;
        n_339=hash_338;
        while((_Bool)1) {
            if(            item_existance_323[n_339]) {
                n_339++;
                if(                n_339>=size_320) {
                    n_339=0;
                }
                else if(                n_339==hash_338) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_323[n_339]=(_Bool)1;
                keys_321[n_339]=it_327;
                items_322[n_339]=((struct sClass*)(__right_value315=map$2charphsClassph_at(self,it_327,default_value_340)));
                come_call_finalizer3(__right_value315,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_324++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_321;
    self->items=items_322;
    self->item_existance=item_existance_323;
    self->size=size_320;
    self->len=len_324;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_325;
char* __result242__;
char* __result243__;
char* result_326;
char* __result244__;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_325;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_326,0,sizeof(char*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_326;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_328;
char* __result245__;
char* __result246__;
char* result_329;
char* __result247__;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_328,0,sizeof(char*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_328;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_329,0,sizeof(char*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_329;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_332;
unsigned int it_333;
struct sClass* __result248__;
struct sClass* __result249__;
struct sClass* __result250__;
struct sClass* __result251__;
    hash_332=charp_get_hash_key(((char*)key))%self->size;
    it_333=hash_332;
    while((_Bool)1) {
        if(        self->item_existance[it_333]) {
            if(            charp_equals(self->keys[it_333],key)) {
                __result248__ = gComeFunResultObject = __result_obj__ = self->items[it_333];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result248__;
            }
            it_333++;
            if(            it_333>=self->size) {
                it_333=0;
            }
            else if(            it_333==hash_332) {
                __result249__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
        }
        else {
            __result250__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result250__;
        }
    }
    __result251__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj107;
struct list$1tuple2$2charphsTypephph* __dec_obj108;
char* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj107=self->mName;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj108=self->mFields;
            come_call_finalizer3(__dec_obj108,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj111=self->mParentClassName;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj112=self->mAttribute;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_334;
struct list_item$1tuple2$2charphsTypephph* prev_it_335;
    it_334=self->head;
    while(it_334!=((void*)0)) {
        prev_it_335=it_334;
        it_334=it_334->next;
        come_call_finalizer3(prev_it_335,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj109;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj109=self->item;
            come_call_finalizer3(__dec_obj109,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_336;
struct list_item$1tuple2$2charphsTypephph* prev_it_337;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        come_call_finalizer3(prev_it_337,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_343;
struct list_item$1charp* it_344;
struct list$1charp* __result255__;
    it2_343=0;
    it_344=self->head;
    while(it_344!=((void*)0)) {
        if(        charp_equals(it_344->item,item)) {
            list$1charp_delete(self,it2_343,it2_343+1);
            break;
        }
        it2_343++;
        it_344=it_344->next;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_345;
struct list$1charp* __result252__;
struct list_item$1charp* it_348;
int i_349;
struct list_item$1charp* prev_it_350;
struct list_item$1charp* it_351;
int i_352;
struct list_item$1charp* prev_it_353;
struct list_item$1charp* it_354;
struct list_item$1charp* head_prev_it_355;
struct list_item$1charp* tail_it_356;
int i_357;
struct list_item$1charp* prev_it_358;
struct list$1charp* __result254__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_345=tail;
        tail=head;
        head=tmp_345;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result252__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_348=self->head;
        i_349=0;
        while(it_348!=((void*)0)) {
            if(            i_349<tail) {
                prev_it_350=it_348;
                it_348=it_348->next;
                i_349++;
                come_call_finalizer3(prev_it_350,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_349==tail) {
                self->head=it_348;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_348=it_348->next;
                i_349++;
            }
        }
    }
    else if(    tail==self->len) {
        it_351=self->head;
        i_352=0;
        while(it_351!=((void*)0)) {
            if(            i_352==head) {
                self->tail=it_351->prev;
                self->tail->next=((void*)0);
            }
            if(            i_352>=head) {
                prev_it_353=it_351;
                it_351=it_351->next;
                i_352++;
                come_call_finalizer3(prev_it_353,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_351=it_351->next;
                i_352++;
            }
        }
    }
    else {
        it_354=self->head;
        head_prev_it_355=((void*)0);
        tail_it_356=((void*)0);
        i_357=0;
        while(it_354!=((void*)0)) {
            if(            i_357==head) {
                head_prev_it_355=it_354->prev;
            }
            if(            i_357==tail) {
                tail_it_356=it_354;
            }
            if(            i_357>=head&&i_357<tail) {
                prev_it_358=it_354;
                it_354=it_354->next;
                i_357++;
                come_call_finalizer3(prev_it_358,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_354=it_354->next;
                i_357++;
            }
        }
        if(        head_prev_it_355!=((void*)0)) {
            head_prev_it_355->next=tail_it_356;
        }
        if(        tail_it_356!=((void*)0)) {
            tail_it_356->prev=head_prev_it_355;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_346;
struct list_item$1charp* prev_it_347;
struct list$1charp* __result253__;
    it_346=self->head;
    while(it_346!=((void*)0)) {
        prev_it_347=it_346;
        it_346=it_346->next;
        come_call_finalizer3(prev_it_347,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_360;
char* __result256__;
char* __result257__;
char* result_361;
char* __result258__;
result_360 = (void*)0;
result_361 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_360,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_360;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->head;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_361,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_361;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_363;
char* __result259__;
char* __result260__;
char* result_364;
char* __result261__;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_363,0,sizeof(char*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_363;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_364,0,sizeof(char*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_364;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1CVALUEph* litem_372;
struct CVALUE* __dec_obj115;
void* __right_value326 = (void*)0;
struct list_item$1CVALUEph* litem_373;
struct CVALUE* __dec_obj119;
void* __right_value327 = (void*)0;
struct list_item$1CVALUEph* litem_374;
struct CVALUE* __dec_obj120;
struct list$1CVALUEph* __result263__;
    if(    self->len==0) {
        litem_372=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value325=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1CVALUEph"))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj115=litem_372->item;
        litem_372->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value326=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1CVALUEph"))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj119=litem_373->item;
        litem_373->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value327=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1CVALUEph"))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj120=litem_374->item;
        litem_374->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj116;
struct sType* __dec_obj117;
char* __dec_obj118;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj116=self->c_value;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj117=self->type;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj118=self->c_value_without_right_value_objects;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* none_generics_name_375;
void* __right_value329 = (void*)0;
char* fun_name2_376;
void* __right_value330 = (void*)0;
char* fun_name3_377;
void* __right_value331 = (void*)0;
struct sGenericsFun* generics_fun_378;
void* __right_value332 = (void*)0;
_Bool _if_conditional1;
void* __right_value333 = (void*)0;
char* __result269__;
char* __result270__;
    none_generics_name_375=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_376=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_377=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_375,fun_name));
    generics_fun_378=((struct sGenericsFun*)(__right_value331=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_377,((void*)0))));
    come_call_finalizer3(__right_value331,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_378) {
        if(        (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_376)),generics_fun_378,type,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_377);
            __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value333=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            none_generics_name_375 = come_decrement_ref_count2(none_generics_name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_376 = come_decrement_ref_count2(fun_name2_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_377 = come_decrement_ref_count2(fun_name3_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
    }
    __result270__ = gComeFunResultObject = __result_obj__ = fun_name2_376;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_375 = come_decrement_ref_count2(none_generics_name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_376 = come_decrement_ref_count2(fun_name2_376, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_377 = come_decrement_ref_count2(fun_name3_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_379;
unsigned int it_380;
struct sGenericsFun* __result265__;
struct sGenericsFun* __result266__;
struct sGenericsFun* __result267__;
struct sGenericsFun* __result268__;
    hash_379=charp_get_hash_key(((char*)key))%self->size;
    it_380=hash_379;
    while((_Bool)1) {
        if(        self->item_existance[it_380]) {
            if(            charp_equals(self->keys[it_380],key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_380];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_380++;
            if(            it_380>=self->size) {
                it_380=0;
            }
            else if(            it_380==hash_379) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj121;
struct list$1charph* __dec_obj122;
struct list$1charph* __dec_obj123;
char* __dec_obj124;
struct sType* __dec_obj125;
struct list$1sTypeph* __dec_obj126;
struct list$1charph* __dec_obj127;
struct list$1charph* __dec_obj128;
char* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj121=self->mImplType;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj122=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj122,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj123=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj123,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj124=self->mName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj125=self->mResultType;
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj126=self->mParamTypes;
            come_call_finalizer3(__dec_obj126,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj127=self->mParamNames;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj128=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj129=self->mBlock;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj130=self->mGenericsSName;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value338 = (void*)0;
struct sNode* current_stack_frame_node_381;
_Bool Value_383;
_Bool __result273__;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct buffer* method_block2_387;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* method_block_type_388;
void* __right_value344 = (void*)0;
char* class_name_392;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sClass* current_stack_frame_struct_396;
void* __right_value347 = (void*)0;
_Bool __result280__;
void* __right_value348 = (void*)0;
struct sType* result_type_397;
struct list$1sTypeph* param_types_398;
struct list$1charph* param_names_399;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct buffer* all_alhabet_sname_400;
char* p_401;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
int i_402;
struct list$1sTypeph* o2_saved_403;
struct sType* it_406;
struct sType* param_type_409;
void* __right_value353 = (void*)0;
char* param_name_410;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* param_name_411;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
char* param_name_412;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct buffer* source3_413;
char* p_414;
char* head_415;
int sline_416;
struct buffer* __dec_obj134;
void* __right_value360 = (void*)0;
struct sNode* node_417;
_Bool Value_418;
_Bool __result287__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* method_block_name_419;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct CVALUE* come_value2_420;
void* __right_value365 = (void*)0;
struct sFun* fun2_421;
_Bool __result292__;
struct sType* method_block_type2_424;
void* __right_value366 = (void*)0;
char* __dec_obj152;
void* __right_value367 = (void*)0;
struct sType* __dec_obj153;
struct buffer* __dec_obj154;
void* __right_value368 = (void*)0;
struct sType* __dec_obj155;
_Bool contained_method_generics_method_block_425;
struct list$1sTypeph* o2_saved_426;
struct sType* it_427;
_Bool __result294__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 32, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value335=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 32, "sCurrentNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_381=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value335,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_383=node_compile(current_stack_frame_node_381,info);
    if(    !Value_383) {
        __result273__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_381) { current_stack_frame_node_381 = come_decrement_ref_count2(current_stack_frame_node_381, ((struct sNode*)current_stack_frame_node_381)->finalize, ((struct sNode*)current_stack_frame_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result273__;
    }
    else {
    }
    come_value_386=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_386));
    dec_stack_ptr(1,info);
    method_block2_387=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 42, "buffer"))));
    method_block_type_388=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value342=list$1sTypephp_operator_load_element(fun->mParamTypes,-1))), "20method.c", 43, 2))));
    come_call_finalizer3(__right_value342,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_392=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)come_null_check(((struct sType*)(__right_value345=list$1sTypephp_operator_load_element(method_block_type_388->mParamTypes,0))), "20method.c", 47, 3))->mClass=((struct sClass*)(__right_value346=map$2charphsClassphp_operator_load_element(info->classes,class_name_392)));
    come_call_finalizer3(__right_value345,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value346,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_396=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value347=map$2charphsClassphp_operator_load_element(info->classes,class_name_392)));
    come_call_finalizer3(__right_value347,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_388->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result280__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_381) { current_stack_frame_node_381 = come_decrement_ref_count2(current_stack_frame_node_381, ((struct sNode*)current_stack_frame_node_381)->finalize, ((struct sNode*)current_stack_frame_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_392 = come_decrement_ref_count2(class_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result280__;
    }
    result_type_397=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_388->mResultType->v1));
    result_type_397->mStatic=(_Bool)0;
    param_types_398=method_block_type_388->mParamTypes;
    param_names_399=method_block_type_388->mParamNames;
    all_alhabet_sname_400=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 63, "buffer"))));
    {
        p_401=info->sname;
        while(*p_401) {
            if(            xisalnum(*p_401)) {
                buffer_append_char(all_alhabet_sname_400,*p_401++);
            }
            else {
                p_401++;
            }
        }
    }
    buffer_append_format(method_block2_387,"%s method_block%d_%s(",((char*)(__right_value351=make_type_name_string(result_type_397,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value352=buffer_to_string(all_alhabet_sname_400))));
    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_402=0;
    for(    o2_saved_403=(param_types_398),it_406=list$1sTypeph_begin((o2_saved_403));    !list$1sTypeph_end((o2_saved_403));    it_406=list$1sTypeph_next((o2_saved_403))    ){
        param_type_409=it_406;
        if(        i_402==0) {
            param_name_410=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_387,"%s",((char*)(__right_value354=make_define_var(param_type_409,param_name_410,(_Bool)0,info))));
            __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_410 = come_decrement_ref_count2(param_name_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_402==1) {
            param_name_411=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_387,"%s",((char*)(__right_value356=make_define_var_no_solved(param_type_409,param_name_411,(_Bool)0,(_Bool)0,info))));
            __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_411 = come_decrement_ref_count2(param_name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_412=(char*)come_increment_ref_count(xsprintf("it%d",i_402));
            buffer_append_format(method_block2_387,"%s",((char*)(__right_value358=make_define_var_no_solved(param_type_409,param_name_412,(_Bool)0,(_Bool)0,info))));
            __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_412 = come_decrement_ref_count2(param_name_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_402!=list$1sTypeph_length(param_types_398)-1) {
            buffer_append_str(method_block2_387,",");
        }
        i_402++;
    }
    buffer_append_str(method_block2_387,")\n");
    buffer_append_str(method_block2_387,((char*)(__right_value359=buffer_to_string(method_block))));
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_413=(struct buffer*)come_increment_ref_count(info->source);
    p_414=info->p;
    head_415=info->head;
    sline_416=info->sline;
    __dec_obj134=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_387);
    come_call_finalizer3(__dec_obj134,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_417=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_418=node_compile(node_417,info);
    if(    !Value_418) {
        __result287__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_381) { current_stack_frame_node_381 = come_decrement_ref_count2(current_stack_frame_node_381, ((struct sNode*)current_stack_frame_node_381)->finalize, ((struct sNode*)current_stack_frame_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_392 = come_decrement_ref_count2(class_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_397,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result287__;
    }
    else {
    }
    method_block_name_419=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value361=buffer_to_string(all_alhabet_sname_400)))));
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 128, "CVALUE"))));
    fun2_421=((struct sFun*)(__right_value365=map$2charphsFunph_at(info->funcs,method_block_name_419,((void*)0))));
    come_call_finalizer3(__right_value365,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_421==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_419);
        __result292__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_381) { current_stack_frame_node_381 = come_decrement_ref_count2(current_stack_frame_node_381, ((struct sNode*)current_stack_frame_node_381)->finalize, ((struct sNode*)current_stack_frame_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_392 = come_decrement_ref_count2(class_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_397,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_419 = come_decrement_ref_count2(method_block_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result292__;
    }
    method_block_type2_424=fun2_421->mLambdaType;
    __dec_obj152=come_value2_420->c_value;
    come_value2_420->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_419));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value2_420->type;
    come_value2_420->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_424));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_420->var=((void*)0);
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_420));
    __dec_obj154=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_413);
    come_call_finalizer3(__dec_obj154,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_414;
    info->head=head_415;
    info->sline=sline_416;
    info->current_stack_frame_struct=current_stack_frame_struct_396;
    __dec_obj155=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_425=(_Bool)0;
    for(    o2_saved_426=(param_types_398),it_427=list$1sTypeph_begin((o2_saved_426));    !list$1sTypeph_end((o2_saved_426));    it_427=list$1sTypeph_next((o2_saved_426))    ){
        if(        is_contained_method_generics_types(it_427,info)) {
            contained_method_generics_method_block_425=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_397,info)) {
        contained_method_generics_method_block_425=(_Bool)1;
    }
    if(    contained_method_generics_method_block_425) {
        map$2charphsFunph_remove(info->funcs,method_block_name_419);
    }
    __result294__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_381) { current_stack_frame_node_381 = come_decrement_ref_count2(current_stack_frame_node_381, ((struct sNode*)current_stack_frame_node_381)->finalize, ((struct sNode*)current_stack_frame_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_392 = come_decrement_ref_count2(class_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_397,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_419 = come_decrement_ref_count2(method_block_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result294__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_384;
struct list_item$1CVALUEph* prev_it_385;
    it_384=self->head;
    while(it_384!=((void*)0)) {
        prev_it_385=it_384;
        it_384=it_384->next;
        come_call_finalizer3(prev_it_385,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj133;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj133=self->item;
            come_call_finalizer3(__dec_obj133,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_389;
int i_390;
struct sType* __result274__;
struct sType* default_value_391;
struct sType* __result275__;
default_value_391 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_389=self->head;
    i_390=0;
    while(it_389!=((void*)0)) {
        if(        position==i_390) {
            __result274__ = gComeFunResultObject = __result_obj__ = it_389->item;
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
        it_389=it_389->next;
        i_390++;
    }
    memset(&default_value_391,0,sizeof(struct sType*));
    __result275__ = gComeFunResultObject = __result_obj__ = default_value_391;
    come_call_finalizer3(default_value_391,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_393;
unsigned int hash_394;
unsigned int it_395;
struct sClass* __result276__;
struct sClass* __result277__;
struct sClass* __result278__;
struct sClass* __result279__;
default_value_393 = (void*)0;
    memset(&default_value_393,0,sizeof(struct sClass*));
    hash_394=charp_get_hash_key(((char*)key))%self->size;
    it_395=hash_394;
    while((_Bool)1) {
        if(        self->item_existance[it_395]) {
            if(            charp_equals(self->keys[it_395],key)) {
                __result276__ = gComeFunResultObject = __result_obj__ = self->items[it_395];
                come_call_finalizer3(default_value_393,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result276__;
            }
            it_395++;
            if(            it_395>=self->size) {
                it_395=0;
            }
            else if(            it_395==hash_394) {
                __result277__ = gComeFunResultObject = __result_obj__ = default_value_393;
                come_call_finalizer3(default_value_393,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result277__;
            }
        }
        else {
            __result278__ = gComeFunResultObject = __result_obj__ = default_value_393;
            come_call_finalizer3(default_value_393,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result278__;
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = default_value_393;
    come_call_finalizer3(default_value_393,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_404;
struct sType* __result281__;
struct sType* __result282__;
struct sType* result_405;
struct sType* __result283__;
result_404 = (void*)0;
result_405 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_404,0,sizeof(struct sType*));
        __result281__ = gComeFunResultObject = __result_obj__ = result_404;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    self->it=self->head;
    if(    self->it) {
        __result282__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    memset(&result_405,0,sizeof(struct sType*));
    __result283__ = gComeFunResultObject = __result_obj__ = result_405;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_407;
struct sType* __result284__;
struct sType* __result285__;
struct sType* result_408;
struct sType* __result286__;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_407,0,sizeof(struct sType*));
        __result284__ = gComeFunResultObject = __result_obj__ = result_407;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result285__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    memset(&result_408,0,sizeof(struct sType*));
    __result286__ = gComeFunResultObject = __result_obj__ = result_408;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_422;
unsigned int it_423;
struct sFun* __result288__;
struct sFun* __result289__;
struct sFun* __result290__;
struct sFun* __result291__;
    hash_422=charp_get_hash_key(((char*)key))%self->size;
    it_423=hash_422;
    while((_Bool)1) {
        if(        self->item_existance[it_423]) {
            if(            charp_equals(self->keys[it_423],key)) {
                __result288__ = gComeFunResultObject = __result_obj__ = self->items[it_423];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result288__;
            }
            it_423++;
            if(            it_423>=self->size) {
                it_423=0;
            }
            else if(            it_423==hash_422) {
                __result289__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result289__;
            }
        }
        else {
            __result290__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
    }
    __result291__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj135;
struct sType* __dec_obj136;
struct list$1sTypeph* __dec_obj137;
struct list$1charph* __dec_obj138;
struct list$1charph* __dec_obj139;
struct sType* __dec_obj140;
struct sBlock* __dec_obj141;
struct buffer* __dec_obj144;
struct buffer* __dec_obj145;
struct buffer* __dec_obj146;
struct buffer* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
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
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj140=self->mLambdaType;
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj141=self->mBlock;
            come_call_finalizer3(__dec_obj141,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj144=self->mSource;
            come_call_finalizer3(__dec_obj144,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj145=self->mSourceHead;
            come_call_finalizer3(__dec_obj145,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj146=self->mSourceHead2;
            come_call_finalizer3(__dec_obj146,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj147=self->mSourceDefer;
            come_call_finalizer3(__dec_obj147,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj148=self->mComeHeader;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj149=self->mDeclareSName;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj150=self->mAttribute;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj151=self->mFunAttribute;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj142;
struct sVarTable* __dec_obj143;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj142=self->mNodes;
            come_call_finalizer3(__dec_obj142,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj143=self->mVarTable;
            come_call_finalizer3(__dec_obj143,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_428;
unsigned int it_429;
struct map$2charphsFunph* __result293__;
    hash_428=charp_get_hash_key(((char*)key))%self->size;
    it_429=hash_428;
    while((_Bool)1) {
        if(        self->item_existance[it_429]) {
            if(            charp_equals(self->keys[it_429],key)) {
                list$1charp_remove(self->key_list,self->keys[it_429]);
                self->item_existance[it_429]=(_Bool)0;
                if(                1) {
                    self->keys[it_429] = come_decrement_ref_count2(self->keys[it_429], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_429]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_429],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_429]=((void*)0);
                self->len--;
                break;
            }
            it_429++;
            if(            it_429>=self->size) {
                it_429=0;
            }
            else if(            it_429==hash_428) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value371 = (void*)0;
char* __dec_obj157;
void* __right_value381 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj174;
void* __right_value382 = (void*)0;
struct buffer* __dec_obj175;
void* __right_value383 = (void*)0;
struct list$1sTypeph* __dec_obj176;
struct sMethodCallNode* __result301__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj156=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj157=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj174=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj174,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj175=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    come_call_finalizer3(__dec_obj175,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj176=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_generics_types));
    come_call_finalizer3(__dec_obj176,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string("sMethodCallNode")));
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_440;
struct list$1tuple2$2charphsNodephph* params_441;
struct sNode* obj_442;
struct buffer* method_block_443;
int method_block_sline_444;
_Bool no_infference_method_generics_445;
struct list$1sTypeph* method_generics_types_446;
_Bool recursive_447;
struct list$1sTypeph* method_generics_types_before_448;
struct list$1sTypeph* __dec_obj183;
void* __right_value385 = (void*)0;
struct list$1sTypeph* __dec_obj184;
_Bool Value_449;
_Bool __result303__;
void* __right_value386 = (void*)0;
struct CVALUE* obj_value_450;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* __dec_obj185;
void* __right_value389 = (void*)0;
struct sType* obj_type_451;
_Bool no_output_come_code_452;
struct sType* type_453;
void* __right_value390 = (void*)0;
char* none_generics_name_454;
void* __right_value391 = (void*)0;
char* fun_name2_455;
void* __right_value392 = (void*)0;
char* fun_name3_456;
void* __right_value393 = (void*)0;
struct sGenericsFun* generics_fun_457;
_Bool method_generics_458;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* generics_fun_name_459;
void* __right_value397 = (void*)0;
struct sFun* fun_460;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1CVALUEph* come_params_461;
_Bool no_output_come_code_462;
_Bool __result305__;
void* __right_value400 = (void*)0;
struct CVALUE* method_block_node_463;
void* __right_value401 = (void*)0;
struct sType* method_block_lambda_type_467;
void* __right_value402 = (void*)0;
struct sType* method_block_result_type_468;
void* __right_value403 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_469;
struct sType* generics_fun_method_block_result_type_470;
int method_generics_num_471;
void* __right_value407 = (void*)0;
int n_480;
struct list$1sTypeph* o2_saved_481;
struct sType* it_482;
int method_generics_num_483;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1CVALUEph* come_params_484;
int i_485;
struct list$1tuple2$2charphsNodephph* o2_saved_486;
struct tuple2$2charphsNodeph* it_489;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_492=0;
struct sNode* node_493=0;
_Bool Value_494;
_Bool __result317__;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_495;
int method_generics_num_496;
void* __right_value413 = (void*)0;
struct list$1sTypeph* o2_saved_497;
struct sType* it_498;
int method_generics_num_499;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1CVALUEph* come_params_500;
int i_501;
struct list$1tuple2$2charphsNodephph* o2_saved_502;
struct tuple2$2charphsNodeph* it_503;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_504=0;
struct sNode* node_505=0;
_Bool Value_506;
_Bool __result318__;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_507;
int method_generics_num_508;
void* __right_value419 = (void*)0;
int n_509;
struct list$1sTypeph* o2_saved_510;
struct sType* it_511;
int method_generics_num_512;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sClass* klass_513;
_Bool calling_dynamic_method_514;
struct sType* lambda_type_515;
struct list$1tuple2$2charphsTypephph* o2_saved_516;
struct tuple2$2charphsTypeph* it_519;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_522=0;
struct sType* field_type_523=0;
void* __right_value422 = (void*)0;
struct sType* result_type_524;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1CVALUEph* come_params_525;
int i_526;
struct list$1tuple2$2charphsNodephph* o2_saved_527;
struct tuple2$2charphsNodeph* it_528;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_529=0;
struct sNode* node_530=0;
_Bool Value_531;
_Bool __result325__;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_532;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
_Bool _if_conditional2;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct buffer* buf_533;
int j_534;
struct list$1CVALUEph* o2_saved_535;
struct CVALUE* it_538;
void* __right_value434 = (void*)0;
char* __dec_obj190;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct CVALUE* come_value2_541;
void* __right_value437 = (void*)0;
char* __dec_obj191;
void* __right_value438 = (void*)0;
struct sType* result_type2_542;
void* __right_value439 = (void*)0;
struct sType* __dec_obj192;
struct list$1sTypeph* __dec_obj193;
char* generics_fun_name_543;
struct sFun* fun_544;
void* __right_value440 = (void*)0;
char* __dec_obj194;
struct sClass* klass_545;
void* __right_value441 = (void*)0;
_Bool _while_condtional1;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __dec_obj195;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __dec_obj196;
void* __right_value448 = (void*)0;
char* none_generics_name_546;
void* __right_value449 = (void*)0;
char* fun_name3_547;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
char* __dec_obj197;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* __dec_obj198;
int i_548;
void* __right_value456 = (void*)0;
char* new_fun_name_549;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* __dec_obj199;
struct sType* obj_array_type_553;
void* __right_value459 = (void*)0;
char* array_method_name_554;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
char* __dec_obj200;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
char* __dec_obj201;
void* __right_value465 = (void*)0;
_Bool __result336__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* __dec_obj202;
void* __right_value469 = (void*)0;
struct sClass* klass_555;
void* __right_value470 = (void*)0;
_Bool _while_condtional2;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* __dec_obj203;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_556=0;
char* real_fun_name_557=0;
char* __dec_obj205;
void* __right_value475 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_558=0;
char* real_fun_name_559=0;
char* __dec_obj206;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* original_obj_type_fun_name_560;
void* __right_value478 = (void*)0;
char* __dec_obj207;
_Bool __result337__;
_Bool __result338__;
_Bool __result339__;
void* __right_value479 = (void*)0;
struct sType* result_type_561;
void* __right_value480 = (void*)0;
struct sType* result_type2_562;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1sTypeph* param_types_563;
struct list$1sTypeph* o2_saved_564;
struct sType* it_565;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* it2_566;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1CVALUEph* come_params_567;
int i_568;
_Bool first_param_572;
struct list$1tuple2$2charphsNodephph* o2_saved_573;
struct tuple2$2charphsNodeph* it_574;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_575=0;
struct sNode* node_576=0;
int n_577;
struct list$1charph* o2_saved_578;
char* it_581;
_Bool Value_584;
_Bool __result347__;
void* __right_value491 = (void*)0;
struct CVALUE* come_value_585;
void* __right_value492 = (void*)0;
_Bool _if_conditional3;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
_Bool _if_conditional4;
void* __right_value499 = (void*)0;
int i_591;
struct list$1tuple2$2charphsNodephph* o2_saved_592;
struct tuple2$2charphsNodeph* it_593;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_594=0;
struct sNode* node_595=0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
_Bool _if_conditional5;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
_Bool _elif_conditional1;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
_Bool _if_conditional6;
_Bool Value_599;
_Bool __result352__;
void* __right_value509 = (void*)0;
struct CVALUE* come_value_600;
void* __right_value510 = (void*)0;
_Bool _if_conditional7;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
_Bool _if_conditional8;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
_Bool _if_conditional9;
struct sType* obj_array_type_601;
void* __right_value519 = (void*)0;
char* array_method_name_602;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct buffer* buf_603;
int i_604;
struct list$1sNodeph* o2_saved_605;
struct sNode* it_608;
_Bool Value_611;
void* __right_value522 = (void*)0;
struct CVALUE* come_value_612;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct CVALUE* come_value_613;
void* __right_value525 = (void*)0;
char* __dec_obj212;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj213;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct buffer* buf_617;
int i_618;
struct list$1sNodeph* o2_saved_619;
struct sNode* it_620;
_Bool Value_621;
void* __right_value536 = (void*)0;
struct CVALUE* come_value_622;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_623;
void* __right_value539 = (void*)0;
char* __dec_obj219;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj220;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct buffer* buf_624;
int i_625;
struct list$1sNodeph* o2_saved_626;
struct sNode* it_627;
_Bool Value_628;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_629;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* come_value_630;
void* __right_value550 = (void*)0;
char* __dec_obj221;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* __dec_obj222;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct buffer* buf_631;
int i_632;
struct list$1sNodeph* o2_saved_633;
struct sNode* it_634;
_Bool Value_635;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_636;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct CVALUE* come_value_637;
void* __right_value561 = (void*)0;
char* __dec_obj223;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* __dec_obj224;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct buffer* buf_638;
int i_639;
struct list$1sNodeph* o2_saved_640;
struct sNode* it_641;
_Bool Value_642;
void* __right_value569 = (void*)0;
struct CVALUE* come_value_643;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct CVALUE* come_value_644;
void* __right_value572 = (void*)0;
char* __dec_obj225;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sType* __dec_obj226;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
char* default_param_645;
void* __right_value580 = (void*)0;
char* param_name_646;
void* __right_value581 = (void*)0;
_Bool _if_conditional10;
struct buffer* source_647;
char* p_648;
char* head_649;
int sline_650;
void* __right_value582 = (void*)0;
struct buffer* __dec_obj227;
void* __right_value583 = (void*)0;
struct sNode* node_651;
_Bool Value_652;
_Bool __result361__;
struct buffer* __dec_obj228;
void* __right_value584 = (void*)0;
struct CVALUE* come_value_653;
void* __right_value585 = (void*)0;
_Bool _if_conditional11;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
_Bool _if_conditional12;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
_Bool _if_conditional13;
_Bool __result362__;
_Bool __result363__;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct buffer* buf_654;
int j_655;
struct list$1CVALUEph* o2_saved_656;
struct CVALUE* it_657;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct CVALUE* come_value2_658;
void* __right_value598 = (void*)0;
char* __dec_obj229;
int generics_num_659;
void* __right_value599 = (void*)0;
struct sType* refference_type_660;
struct sType* __dec_obj230;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
char* __dec_obj231;
struct sType* __dec_obj232;
void* __right_value610 = (void*)0;
struct sType* __dec_obj233;
void* __right_value611 = (void*)0;
char* __dec_obj234;
struct list$1sTypeph* __dec_obj235;
_Bool __result364__;
    fun_name_440=(char*)come_increment_ref_count(self->fun_name);
    params_441=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_442=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_443=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_444=self->method_block_sline;
    no_infference_method_generics_445=self->no_infference_method_generics;
    method_generics_types_446=(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types);
    recursive_447=self->recursive;
    method_generics_types_before_448=((void*)0);
    __dec_obj183=method_generics_types_before_448;
    method_generics_types_before_448=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj184=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
    come_call_finalizer3(__dec_obj184,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    Value_449=node_compile(obj_442,info);
    if(    !Value_449) {
        __result303__ = (_Bool)0;
        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result303__;
    }
    else {
    }
    obj_value_450=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&obj_value_450->type->mPointerNum>0) {
        __dec_obj185=obj_value_450->c_value;
        obj_value_450->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value387=make_type_name_string(obj_value_450->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),obj_value_450->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    obj_type_451=(struct sType*)come_increment_ref_count(sType_clone(obj_value_450->type));
    if(    !no_infference_method_generics_445) {
        no_output_come_code_452=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_453=(struct sType*)come_increment_ref_count(obj_type_451);
        none_generics_name_454=(char*)come_increment_ref_count(get_none_generics_name(type_453->mClass->mName));
        fun_name2_455=(char*)come_increment_ref_count(create_method_name(type_453,(_Bool)0,fun_name_440,info,(_Bool)1));
        fun_name3_456=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_454,fun_name_440));
        generics_fun_457=((struct sGenericsFun*)(__right_value393=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_456,((void*)0))));
        come_call_finalizer3(__right_value393,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_457) {
            method_generics_458=list$1charph_length(generics_fun_457->mMethodGenericsTypeNames)>0;
            if(            method_generics_458&&list$1sTypeph_length(info->method_generics_types)==0) {
                generics_fun_name_459=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value395=make_generics_function(obj_type_451,(char*)come_increment_ref_count(__builtin_string(fun_name_440)),info,(_Bool)1)))));
                __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                fun_460=((struct sFun*)(__right_value397=map$2charphsFunph_at(info->funcs,generics_fun_name_459,((void*)0))));
                come_call_finalizer3(__right_value397,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_461=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 258, "list$1CVALUEph"))));
                if(                method_block_443) {
                    no_output_come_code_462=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_443,(struct list$1CVALUEph*)come_increment_ref_count(come_params_461),fun_460,fun_name3_456,method_block_sline_444,info,(_Bool)1)) {
                        __result305__ = (_Bool)0;
                        generics_fun_name_459 = come_decrement_ref_count2(generics_fun_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_461,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_454 = come_decrement_ref_count2(none_generics_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_455 = come_decrement_ref_count2(fun_name2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_456 = come_decrement_ref_count2(fun_name3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result305__;
                    }
                    info->no_output_come_code=no_output_come_code_462;
                    method_block_node_463=((struct CVALUE*)(__right_value400=list$1CVALUEphp_operator_load_element(come_params_461,-1)));
                    come_call_finalizer3(__right_value400,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_467=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_463->type));
                    method_block_result_type_468=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_469=((struct sType*)(__right_value403=list$1sTypephp_operator_load_element(generics_fun_457->mParamTypes,-1)));
                    come_call_finalizer3(__right_value403,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_470=generics_fun_method_block_lambda_type_469->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_470->mClass->mMethodGenerics) {
                        method_generics_num_471=generics_fun_method_block_result_type_470->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_471,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_468)));
                    }
                    n_480=0;
                    for(                    o2_saved_481=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_469->mParamTypes)),it_482=list$1sTypeph_begin((o2_saved_481));                    !list$1sTypeph_end((o2_saved_481));                    it_482=list$1sTypeph_next((o2_saved_481))                    ){
                        if(                        it_482->mClass->mMethodGenerics) {
                            method_generics_num_483=it_482->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_483,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value408=list$1sTypephp_operator_load_element(method_block_lambda_type_467->mParamTypes,n_480))), "20method.c", 282, 4)))));
                            come_call_finalizer3(__right_value408,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_480++;
                    }
                    come_call_finalizer3(o2_saved_481,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_484=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 287, "list$1CVALUEph"))));
                    i_485=0;
                    for(                    o2_saved_486=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_441)),it_489=list$1tuple2$2charphsNodephph_begin((o2_saved_486));                    !list$1tuple2$2charphsNodephph_end((o2_saved_486));                    it_489=list$1tuple2$2charphsNodephph_next((o2_saved_486))                    ){
                        multiple_assign_var1=it_489;
                        label_492=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                        node_493=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
                        if(                        i_485==0) {
                            list$1CVALUEph_push_back(come_params_484,(struct CVALUE*)come_increment_ref_count(obj_value_450));
                            i_485++;
                        }
                        else {
                            Value_494=node_compile(node_493,info);
                            if(                            !Value_494) {
                                __result317__ = (_Bool)0;
                                label_492 = come_decrement_ref_count2(label_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_493) { node_493 = come_decrement_ref_count2(node_493, ((struct sNode*)node_493)->finalize, ((struct sNode*)node_493)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_486,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_484,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_459 = come_decrement_ref_count2(generics_fun_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_461,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_454 = come_decrement_ref_count2(none_generics_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_455 = come_decrement_ref_count2(fun_name2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_456 = come_decrement_ref_count2(fun_name3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result317__;
                            }
                            else {
                            }
                            come_value_495=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_484,(struct CVALUE*)come_increment_ref_count(come_value_495));
                            come_call_finalizer3(come_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_492 = come_decrement_ref_count2(label_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_493) { node_493 = come_decrement_ref_count2(node_493, ((struct sNode*)node_493)->finalize, ((struct sNode*)node_493)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_486,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_457->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_496=generics_fun_457->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_496,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_480=0;
                    for(                    o2_saved_497=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_457->mParamTypes)),it_498=list$1sTypeph_begin((o2_saved_497));                    !list$1sTypeph_end((o2_saved_497));                    it_498=list$1sTypeph_next((o2_saved_497))                    ){
                        if(                        it_498->mClass->mMethodGenerics) {
                            method_generics_num_499=it_498->mClass->mMethodGenericsNum;
                            if(                            n_480<list$1CVALUEph_length(come_params_484)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_499,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value414=list$1CVALUEphp_operator_load_element(come_params_484,n_480)))->type)));
                                come_call_finalizer3(__right_value414,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_480++;
                    }
                    come_call_finalizer3(o2_saved_497,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_484,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_500=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 326, "list$1CVALUEph"))));
                    i_501=0;
                    for(                    o2_saved_502=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_441)),it_503=list$1tuple2$2charphsNodephph_begin((o2_saved_502));                    !list$1tuple2$2charphsNodephph_end((o2_saved_502));                    it_503=list$1tuple2$2charphsNodephph_next((o2_saved_502))                    ){
                        multiple_assign_var2=it_503;
                        label_504=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                        node_505=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                        if(                        i_501==0) {
                            list$1CVALUEph_push_back(come_params_500,(struct CVALUE*)come_increment_ref_count(obj_value_450));
                            i_501++;
                        }
                        else {
                            Value_506=node_compile(node_505,info);
                            if(                            !Value_506) {
                                __result318__ = (_Bool)0;
                                label_504 = come_decrement_ref_count2(label_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_502,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_500,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_459 = come_decrement_ref_count2(generics_fun_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_461,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_454 = come_decrement_ref_count2(none_generics_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_455 = come_decrement_ref_count2(fun_name2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_456 = come_decrement_ref_count2(fun_name3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result318__;
                            }
                            else {
                            }
                            come_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_500,(struct CVALUE*)come_increment_ref_count(come_value_507));
                            come_call_finalizer3(come_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_504 = come_decrement_ref_count2(label_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_502,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_457->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_508=generics_fun_457->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_508,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_509=0;
                    for(                    o2_saved_510=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_457->mParamTypes)),it_511=list$1sTypeph_begin((o2_saved_510));                    !list$1sTypeph_end((o2_saved_510));                    it_511=list$1sTypeph_next((o2_saved_510))                    ){
                        if(                        it_511->mClass->mMethodGenerics) {
                            method_generics_num_512=it_511->mClass->mMethodGenericsNum;
                            if(                            n_509<list$1CVALUEph_length(come_params_500)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_512,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value420=list$1CVALUEphp_operator_load_element(come_params_500,n_509)))->type)));
                                come_call_finalizer3(__right_value420,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_509++;
                    }
                    come_call_finalizer3(o2_saved_510,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_500,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunph_remove(info->funcs,generics_fun_name_459);
                generics_fun_name_459 = come_decrement_ref_count2(generics_fun_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_461,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_452;
        come_call_finalizer3(type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_454 = come_decrement_ref_count2(none_generics_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_455 = come_decrement_ref_count2(fun_name2_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_456 = come_decrement_ref_count2(fun_name3_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_513=obj_type_451->mClass;
    calling_dynamic_method_514=(_Bool)0;
    lambda_type_515=((void*)0);
    for(    o2_saved_516=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_513->mFields)),it_519=list$1tuple2$2charphsTypephph_begin((o2_saved_516));    !list$1tuple2$2charphsTypephph_end((o2_saved_516));    it_519=list$1tuple2$2charphsTypephph_next((o2_saved_516))    ){
        multiple_assign_var3=it_519;
        field_name_522=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_523=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        if(        string_operator_equals(field_name_522,fun_name_440)&&string_operator_equals(field_type_523->mClass->mName,"lambda")) {
            calling_dynamic_method_514=(_Bool)1;
            lambda_type_515=field_type_523;
            field_name_522 = come_decrement_ref_count2(field_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_522 = come_decrement_ref_count2(field_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_516,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_514) {
        result_type_524=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_515->mResultType->v1));
        result_type_524->mStatic=(_Bool)0;
        come_params_525=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 389, "list$1CVALUEph"))));
        i_526=0;
        for(        o2_saved_527=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_441)),it_528=list$1tuple2$2charphsNodephph_begin((o2_saved_527));        !list$1tuple2$2charphsNodephph_end((o2_saved_527));        it_528=list$1tuple2$2charphsNodephph_next((o2_saved_527))        ){
            multiple_assign_var4=it_528;
            label_529=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_530=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            i_526==0) {
                list$1CVALUEph_push_back(come_params_525,(struct CVALUE*)come_increment_ref_count(obj_value_450));
                i_526++;
            }
            else {
                Value_531=node_compile(node_530,info);
                if(                !Value_531) {
                    __result325__ = (_Bool)0;
                    label_529 = come_decrement_ref_count2(label_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_530) { node_530 = come_decrement_ref_count2(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_527,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result325__;
                }
                else {
                }
                come_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value428=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value426=string_to_string(fun_name_440))),((char*)(__right_value427=int_to_string(i_526)))))),((struct sType*)come_null_check(((struct sType*)(__right_value429=list$1sTypephp_operator_load_element(lambda_type_515->mParamTypes,i_526-1))), "20method.c", 406, 5)),come_value_532->type,come_value_532,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value430=list$1sTypephp_operator_load_element(lambda_type_515->mParamTypes,i_526-1))), "20method.c", 407, 6))->mHeap&&come_value_532->type->mHeap)),                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value431=list$1sTypephp_operator_load_element(lambda_type_515->mParamTypes,i_526-1))), "20method.c", 409, 7)),come_value_532->type,come_value_532,info,(_Bool)1);
                    come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_push_back(come_params_525,(struct CVALUE*)come_increment_ref_count(come_value_532));
                i_526++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_529 = come_decrement_ref_count2(label_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_530) { node_530 = come_decrement_ref_count2(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_527,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 419, "buffer"))));
        buffer_append_format(buf_533,"%s->%s",obj_value_450->c_value,fun_name_440);
        buffer_append_str(buf_533,"(");
        j_534=0;
        for(        o2_saved_535=(struct list$1CVALUEph*)come_increment_ref_count((come_params_525)),it_538=list$1CVALUEph_begin((o2_saved_535));        !list$1CVALUEph_end((o2_saved_535));        it_538=list$1CVALUEph_next((o2_saved_535))        ){
            if(            j_534==0) {
                __dec_obj190=it_538->c_value;
                it_538->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_538->c_value));
                __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_533,it_538->c_value);
            if(            j_534!=list$1CVALUEph_length(come_params_525)-1) {
                buffer_append_str(buf_533,",");
            }
            j_534++;
        }
        come_call_finalizer3(o2_saved_535,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_533,")");
        come_value2_541=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 439, "CVALUE"))));
        __dec_obj191=come_value2_541->c_value;
        come_value2_541->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_533));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_542=(struct sType*)come_increment_ref_count(solve_generics(result_type_524,info->generics_type,info));
        __dec_obj192=come_value2_541->type;
        come_value2_541->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_542));
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_541->type->mStatic=(_Bool)0;
        come_value2_541->var=((void*)0);
        if(        result_type2_542->mHeap) {
            append_object_to_right_values2(come_value2_541,(struct sType*)come_increment_ref_count(result_type2_542),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_541->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_541));
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj193=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_448);
        come_call_finalizer3(__dec_obj193,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_542,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_543=((void*)0);
        fun_544=((void*)0);
        if(        string_operator_equals(fun_name_440,"super")) {
            __dec_obj194=fun_name_440;
            fun_name_440=(char*)come_increment_ref_count(create_non_method_name(obj_type_451,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_545=obj_type_451->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value441=map$2charphsClassphp_operator_load_element(info->classes,klass_545->mParentClassName))))),            come_call_finalizer3(__right_value441,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_545=((struct sClass*)(__right_value442=map$2charphsClassphp_operator_load_element(info->classes,klass_545->mParentClassName)));
                come_call_finalizer3(__right_value442,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj195=generics_fun_name_543;
                generics_fun_name_543=(char*)come_increment_ref_count(create_method_name_using_class(klass_545,(_Bool)0,fun_name_440,info,(_Bool)1));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_544=((struct sFun*)(__right_value444=map$2charphsFunph_at(info->funcs,generics_fun_name_543,((void*)0))));
                come_call_finalizer3(__right_value444,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_544) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_451&&obj_type_451->mNoSolvedGenericsType&&obj_type_451->mNoSolvedGenericsType->v1&&list$1sTypeph_length(obj_type_451->mNoSolvedGenericsType->v1->mGenericsTypes)>0) {
                __dec_obj196=generics_fun_name_543;
                generics_fun_name_543=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value446=make_generics_function(obj_type_451,(char*)come_increment_ref_count(__builtin_string(fun_name_440)),info,(_Bool)1)))));
                __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            list$1sTypeph_length(info->method_generics_types)>0) {
                none_generics_name_546=(char*)come_increment_ref_count(get_none_generics_name(obj_type_451->mClass->mName));
                fun_name3_547=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_546,fun_name_440));
                __dec_obj197=generics_fun_name_543;
                generics_fun_name_543=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value451=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_547)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)))));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                none_generics_name_546 = come_decrement_ref_count2(none_generics_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_547 = come_decrement_ref_count2(fun_name3_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj198=generics_fun_name_543;
                generics_fun_name_543=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value454=make_generics_function(obj_type_451,(char*)come_increment_ref_count(__builtin_string(fun_name_440)),info,(_Bool)1)))));
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            for(            i_548=128;            i_548>=1;            i_548--            ){
                new_fun_name_549=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_543,i_548));
                fun_544=((struct sFun*)(__right_value457=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_549)));
                come_call_finalizer3(__right_value457,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_544!=((void*)0)) {
                    __dec_obj199=generics_fun_name_543;
                    generics_fun_name_543=(char*)come_increment_ref_count(__builtin_string(new_fun_name_549));
                    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_549 = come_decrement_ref_count2(new_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_549 = come_decrement_ref_count2(new_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_544==((void*)0)) {
                obj_array_type_553=obj_type_451->mOriginalLoadVarType->v1;
                if(                obj_array_type_553&&list$1sNodeph_length(obj_array_type_553->mArrayNum)>0) {
                    array_method_name_554=(char*)come_increment_ref_count(create_method_name(obj_array_type_553,(_Bool)0,fun_name_440,info,(_Bool)0));
                    fun_544=((struct sFun*)(__right_value460=map$2charphsFunph_at(info->funcs,array_method_name_554,((void*)0))));
                    come_call_finalizer3(__right_value460,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_544) {
                        __dec_obj200=generics_fun_name_543;
                        generics_fun_name_543=(char*)come_increment_ref_count(__builtin_string(array_method_name_554));
                        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_544=((struct sFun*)(__right_value462=map$2charphsFunph_at(info->funcs,generics_fun_name_543,((void*)0))));
                        come_call_finalizer3(__right_value462,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_544==((void*)0)) {
                            __dec_obj201=generics_fun_name_543;
                            generics_fun_name_543=(char*)come_increment_ref_count(create_method_name(obj_type_451,(_Bool)0,((char*)(__right_value463=__builtin_string(fun_name_440))),info,(_Bool)1));
                            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_544=((struct sFun*)(__right_value465=map$2charphsFunph_at(info->funcs,generics_fun_name_543,((void*)0))));
                            come_call_finalizer3(__right_value465,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_544==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_543,info->come_fun->mName);
                                __result336__ = (_Bool)1;
                                array_method_name_554 = come_decrement_ref_count2(array_method_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result336__;
                            }
                        }
                    }
                    array_method_name_554 = come_decrement_ref_count2(array_method_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_544=((struct sFun*)(__right_value466=map$2charphsFunph_at(info->funcs,generics_fun_name_543,((void*)0))));
                    come_call_finalizer3(__right_value466,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_544==((void*)0)) {
                        __dec_obj202=generics_fun_name_543;
                        generics_fun_name_543=(char*)come_increment_ref_count(create_method_name(obj_type_451,(_Bool)0,((char*)(__right_value467=__builtin_string(fun_name_440))),info,(_Bool)1));
                        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_544=((struct sFun*)(__right_value469=map$2charphsFunph_at(info->funcs,generics_fun_name_543,((void*)0))));
                        come_call_finalizer3(__right_value469,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_544==((void*)0)) {
                            klass_555=obj_type_451->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value470=map$2charphsClassphp_operator_load_element(info->classes,klass_555->mParentClassName))))),                            come_call_finalizer3(__right_value470,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_555=((struct sClass*)(__right_value471=map$2charphsClassphp_operator_load_element(info->classes,klass_555->mParentClassName)));
                                come_call_finalizer3(__right_value471,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj203=generics_fun_name_543;
                                generics_fun_name_543=(char*)come_increment_ref_count(create_method_name_using_class(klass_555,(_Bool)0,fun_name_440,info,(_Bool)1));
                                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_544=((struct sFun*)(__right_value473=map$2charphsFunph_at(info->funcs,generics_fun_name_543,((void*)0))));
                                come_call_finalizer3(__right_value473,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_544) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_544==((void*)0)&&string_operator_equals(fun_name_440,"to_string")) {
                            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value474=create_to_string_automatically(obj_type_451,fun_name_440,info)));
                            fun2_556=multiple_assign_var5->v1;
                            real_fun_name_557=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            come_call_finalizer3(__right_value474,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_544=fun2_556;
                            __dec_obj205=generics_fun_name_543;
                            generics_fun_name_543=(char*)come_increment_ref_count(real_fun_name_557);
                            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_557 = come_decrement_ref_count2(real_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_544==((void*)0)&&string_operator_equals(fun_name_440,"equals")) {
                            multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value475=create_equals_automatically(obj_type_451,fun_name_440,info)));
                            fun2_558=multiple_assign_var6->v1;
                            real_fun_name_559=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            come_call_finalizer3(__right_value475,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_544=fun2_558;
                            __dec_obj206=generics_fun_name_543;
                            generics_fun_name_543=(char*)come_increment_ref_count(real_fun_name_559);
                            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_559 = come_decrement_ref_count2(real_fun_name_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_544==((void*)0)) {
                            original_obj_type_fun_name_560=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_451,(_Bool)0,((char*)(__right_value476=__builtin_string(fun_name_440))),info,(_Bool)1));
                            __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_544=((struct sFun*)(__right_value478=map$2charphsFunph_at(info->funcs,original_obj_type_fun_name_560,((void*)0))));
                            come_call_finalizer3(__right_value478,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_544) {
                                __dec_obj207=generics_fun_name_543;
                                generics_fun_name_543=(char*)come_increment_ref_count(original_obj_type_fun_name_560);
                                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_560 = come_decrement_ref_count2(original_obj_type_fun_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_544==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_543,info->come_fun->mName);
                            __result337__ = (_Bool)1;
                            generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result337__;
                        }
                    }
                }
            }
        }
        if(        fun_544==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_543,info->come_fun->mName);
            __result338__ = (_Bool)1;
            generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result338__;
        }
        if(        list$1sTypeph_length(fun_544->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result339__ = (_Bool)1;
            generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result339__;
        }
        result_type_561=(struct sType*)come_increment_ref_count(sType_clone(fun_544->mResultType));
        result_type_561->mStatic=(_Bool)0;
        result_type2_562=(struct sType*)come_increment_ref_count(solve_generics(result_type_561,info->generics_type,info));
        param_types_563=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 596, "list$1sTypeph"))));
        for(        o2_saved_564=(struct list$1sTypeph*)come_increment_ref_count((fun_544->mParamTypes)),it_565=list$1sTypeph_begin((o2_saved_564));        !list$1sTypeph_end((o2_saved_564));        it_565=list$1sTypeph_next((o2_saved_564))        ){
            if(            it_565==((void*)0)) {
                list$1sTypeph_push_back(param_types_563,(struct sType*)come_increment_ref_count(sType_clone(it_565)));
            }
            else {
                it2_566=(struct sType*)come_increment_ref_count(solve_generics(it_565,info->generics_type,info));
                list$1sTypeph_push_back(param_types_563,(struct sType*)come_increment_ref_count(sType_clone(it2_566)));
                come_call_finalizer3(it2_566,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_564,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_567=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 608, "list$1CVALUEph"))));
        for(        i_568=0;        i_568<list$1sTypeph_length(fun_544->mParamTypes)-(((method_block_443)?(2):(0)));        i_568++        ){
            list$1CVALUEph_add(come_params_567,((void*)0));
        }
        first_param_572=(_Bool)1;
        for(        o2_saved_573=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_441)),it_574=list$1tuple2$2charphsNodephph_begin((o2_saved_573));        !list$1tuple2$2charphsNodephph_end((o2_saved_573));        it_574=list$1tuple2$2charphsNodephph_next((o2_saved_573))        ){
            multiple_assign_var7=it_574;
            label_575=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_576=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            first_param_572) {
                first_param_572=(_Bool)0;
            }
            else if(            label_575) {
                n_577=0;
                for(                o2_saved_578=(struct list$1charph*)come_increment_ref_count((fun_544->mParamNames)),it_581=list$1charph_begin((o2_saved_578));                !list$1charph_end((o2_saved_578));                it_581=list$1charph_next((o2_saved_578))                ){
                    if(                    string_operator_equals(label_575,it_581)) {
                        break;
                    }
                    n_577++;
                }
                come_call_finalizer3(o2_saved_578,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                Value_584=node_compile(node_576,info);
                if(                !Value_584) {
                    __result347__ = (_Bool)0;
                    label_575 = come_decrement_ref_count2(label_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_573,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_563,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_567,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result347__;
                }
                else {
                }
                come_value_585=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional3=(((struct sType*)(__right_value492=list$1sTypephp_operator_load_element(param_types_563,n_577))))),                come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    check_assign_type(((char*)(__right_value495=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value493=string_to_string(fun_name_440))),((char*)(__right_value494=int_to_string(n_577)))))),((struct sType*)come_null_check(((struct sType*)(__right_value496=list$1sTypephp_operator_load_element(param_types_563,n_577))), "20method.c", 654, 8)),come_value_585->type,come_value_585,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value496,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional4=(((struct sType*)(__right_value497=list$1sTypephp_operator_load_element(param_types_563,n_577)))&&((struct sType*)come_null_check(((struct sType*)(__right_value498=list$1sTypephp_operator_load_element(param_types_563,n_577))), "20method.c", 656, 9))->mHeap&&come_value_585->type->mHeap)),                come_call_finalizer3(__right_value497,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value498,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value499=list$1sTypephp_operator_load_element(param_types_563,n_577))), "20method.c", 657, 10)),come_value_585->type,come_value_585,info,(_Bool)1);
                    come_call_finalizer3(__right_value499,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_567,n_577,(struct CVALUE*)come_increment_ref_count(come_value_585));
                come_call_finalizer3(come_value_585,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_575 = come_decrement_ref_count2(label_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_573,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_591=0;
        for(        o2_saved_592=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_441)),it_593=list$1tuple2$2charphsNodephph_begin((o2_saved_592));        !list$1tuple2$2charphsNodephph_end((o2_saved_592));        it_593=list$1tuple2$2charphsNodephph_next((o2_saved_592))        ){
            multiple_assign_var8=it_593;
            label_594=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_595=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            i_591==0) {
                check_assign_type(((char*)(__right_value502=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value500=string_to_string(fun_name_440))),((char*)(__right_value501=int_to_string(i_591)))))),((struct sType*)come_null_check(((struct sType*)(__right_value503=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 669, 11)),obj_value_450->type,obj_value_450,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value503,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional5=(((struct sType*)come_null_check(((struct sType*)(__right_value504=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 670, 12))->mHeap&&obj_value_450->type->mHeap)),                come_call_finalizer3(__right_value504,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value505=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 671, 13)),obj_value_450->type,obj_value_450,info,(_Bool)1);
                    come_call_finalizer3(__right_value505,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)come_null_check(((struct sType*)(__right_value506=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 673, 14))->mHeap&&!obj_value_450->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value506,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)come_null_check(((char*)(__right_value507=list$1charphp_operator_load_element(fun_544->mParamNames,i_591))), "20method.c", 674, 15)));
                    __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEph_replace(come_params_567,i_591,(struct CVALUE*)come_increment_ref_count(obj_value_450));
                i_591++;
            }
            else if(            label_594) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional6=(((struct CVALUE*)(__right_value508=list$1CVALUEphp_operator_load_element(come_params_567,i_591)))==((void*)0))),                    come_call_finalizer3(__right_value508,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional6) {
                        break;
                    }
                    else {
                        i_591++;
                    }
                }
                Value_599=node_compile(node_595,info);
                if(                !Value_599) {
                    __result352__ = (_Bool)0;
                    label_594 = come_decrement_ref_count2(label_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_595) { node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_592,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_563,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_567,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result352__;
                }
                else {
                }
                come_value_600=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional7=(((struct sType*)(__right_value510=list$1sTypephp_operator_load_element(param_types_563,i_591))))),                come_call_finalizer3(__right_value510,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    check_assign_type(((char*)(__right_value513=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value511=string_to_string(fun_name_440))),((char*)(__right_value512=int_to_string(i_591)))))),((struct sType*)come_null_check(((struct sType*)(__right_value514=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 718, 16)),come_value_600->type,come_value_600,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional8=(((struct sType*)(__right_value515=list$1sTypephp_operator_load_element(param_types_563,i_591)))&&((struct sType*)come_null_check(((struct sType*)(__right_value516=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 720, 17))->mHeap&&come_value_600->type->mHeap)),                come_call_finalizer3(__right_value515,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value516,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional8) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value517=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 721, 18)),come_value_600->type,come_value_600,info,(_Bool)1);
                    come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_567,i_591,(struct CVALUE*)come_increment_ref_count(come_value_600));
                i_591++;
                come_call_finalizer3(come_value_600,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_594 = come_decrement_ref_count2(label_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_595) { node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_592,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional9=(((struct CVALUE*)(__right_value518=list$1CVALUEphp_operator_load_element(come_params_567,i_591)))==((void*)0))),            come_call_finalizer3(__right_value518,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                break;
            }
            else {
                i_591++;
            }
        }
        obj_array_type_601=obj_type_451->mOriginalLoadVarType->v1;
        if(        obj_array_type_601&&list$1sNodeph_length(obj_array_type_601->mArrayNum)>0) {
            array_method_name_602=(char*)come_increment_ref_count(create_method_name(obj_array_type_601,(_Bool)0,fun_name_440,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_543,array_method_name_602)) {
                if(                string_operator_equals(fun_name_440,"to_pointer")) {
                    buf_603=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 743, "buffer"))));
                    i_604=0;
                    for(                    o2_saved_605=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_601->mArrayNum)),it_608=list$1sNodeph_begin((o2_saved_605));                    !list$1sNodeph_end((o2_saved_605));                    it_608=list$1sNodeph_next((o2_saved_605))                    ){
                        Value_611=node_compile(it_608,info);
                        if(                        !Value_611) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_612=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_603,"%s",come_value_612->c_value);
                        if(                        i_604!=list$1sNodeph_length(obj_array_type_601->mArrayNum)-1) {
                            buffer_append_str(buf_603,"*");
                        }
                        i_604++;
                        come_call_finalizer3(come_value_612,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_605,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_613=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 763, "CVALUE"))));
                    __dec_obj212=come_value_613->c_value;
                    come_value_613->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_603));
                    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_613->var=((void*)0);
                    __dec_obj213=come_value_613->type;
                    come_value_613->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 767, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_567,1,(struct CVALUE*)come_increment_ref_count(come_value_613));
                    list$1tuple2$2charphsNodephph_push_back(params_441,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 770, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_603,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_613,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_440,"length")) {
                    buf_617=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 773, "buffer"))));
                    i_618=0;
                    for(                    o2_saved_619=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_601->mArrayNum)),it_620=list$1sNodeph_begin((o2_saved_619));                    !list$1sNodeph_end((o2_saved_619));                    it_620=list$1sNodeph_next((o2_saved_619))                    ){
                        Value_621=node_compile(it_620,info);
                        if(                        !Value_621) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_622=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_617,"%s",come_value_622->c_value);
                        if(                        i_618!=list$1sNodeph_length(obj_array_type_601->mArrayNum)-1) {
                            buffer_append_str(buf_617,"*");
                        }
                        i_618++;
                        come_call_finalizer3(come_value_622,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_619,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_623=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 792, "CVALUE"))));
                    __dec_obj219=come_value_623->c_value;
                    come_value_623->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_617));
                    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_623->var=((void*)0);
                    __dec_obj220=come_value_623->type;
                    come_value_623->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 796, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_567,1,(struct CVALUE*)come_increment_ref_count(come_value_623));
                    list$1tuple2$2charphsNodephph_push_back(params_441,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 799, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_617,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_440,"to_buffer")) {
                    buf_624=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 802, "buffer"))));
                    i_625=0;
                    for(                    o2_saved_626=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_601->mArrayNum)),it_627=list$1sNodeph_begin((o2_saved_626));                    !list$1sNodeph_end((o2_saved_626));                    it_627=list$1sNodeph_next((o2_saved_626))                    ){
                        Value_628=node_compile(it_627,info);
                        if(                        !Value_628) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_629=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_624,"%s",come_value_629->c_value);
                        if(                        i_625!=list$1sNodeph_length(obj_array_type_601->mArrayNum)-1) {
                            buffer_append_str(buf_624,"*");
                        }
                        i_625++;
                        come_call_finalizer3(come_value_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_626,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_630=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 821, "CVALUE"))));
                    __dec_obj221=come_value_630->c_value;
                    come_value_630->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_624));
                    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_630->var=((void*)0);
                    __dec_obj222=come_value_630->type;
                    come_value_630->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 825, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_567,1,(struct CVALUE*)come_increment_ref_count(come_value_630));
                    list$1tuple2$2charphsNodephph_push_back(params_441,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 828, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_624,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_440,"to_list")) {
                    buf_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 831, "buffer"))));
                    i_632=0;
                    for(                    o2_saved_633=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_601->mArrayNum)),it_634=list$1sNodeph_begin((o2_saved_633));                    !list$1sNodeph_end((o2_saved_633));                    it_634=list$1sNodeph_next((o2_saved_633))                    ){
                        Value_635=node_compile(it_634,info);
                        if(                        !Value_635) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_636=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_631,"%s",come_value_636->c_value);
                        if(                        i_632!=list$1sNodeph_length(obj_array_type_601->mArrayNum)-1) {
                            buffer_append_str(buf_631,"*");
                        }
                        i_632++;
                        come_call_finalizer3(come_value_636,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_633,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_637=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 850, "CVALUE"))));
                    __dec_obj223=come_value_637->c_value;
                    come_value_637->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_631));
                    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_637->var=((void*)0);
                    __dec_obj224=come_value_637->type;
                    come_value_637->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 854, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_567,1,(struct CVALUE*)come_increment_ref_count(come_value_637));
                    list$1tuple2$2charphsNodephph_push_back(params_441,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 857, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_631,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_637,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_440,"to_vector")) {
                    buf_638=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 860, "buffer"))));
                    i_639=0;
                    for(                    o2_saved_640=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_601->mArrayNum)),it_641=list$1sNodeph_begin((o2_saved_640));                    !list$1sNodeph_end((o2_saved_640));                    it_641=list$1sNodeph_next((o2_saved_640))                    ){
                        Value_642=node_compile(it_641,info);
                        if(                        !Value_642) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_643=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_638,"%s",come_value_643->c_value);
                        if(                        i_639!=list$1sNodeph_length(obj_array_type_601->mArrayNum)-1) {
                            buffer_append_str(buf_638,"*");
                        }
                        i_639++;
                        come_call_finalizer3(come_value_643,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_640,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_644=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 879, "CVALUE"))));
                    __dec_obj225=come_value_644->c_value;
                    come_value_644->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_638));
                    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_644->var=((void*)0);
                    __dec_obj226=come_value_644->type;
                    come_value_644->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 883, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_567,1,(struct CVALUE*)come_increment_ref_count(come_value_644));
                    list$1tuple2$2charphsNodephph_push_back(params_441,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 886, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_644,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_602 = come_decrement_ref_count2(array_method_name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephph_length(params_441)<list$1sTypeph_length(fun_544->mParamTypes)+(((method_block_443)?(-2):(0)))) {
            for(            ;            i_591<list$1sTypeph_length(fun_544->mParamTypes)+(((method_block_443)?(-2):(0)));            i_591++            ){
                default_param_645=(char*)come_increment_ref_count(string_clone(((char*)(__right_value578=list$1charphp_operator_load_element(fun_544->mParamDefaultParametors,i_591)))));
                __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_646=((char*)come_null_check(((char*)(__right_value580=list$1charphp_operator_load_element(fun_544->mParamNames,i_591))), "20method.c", 895, 19));
                __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional10=(default_param_645&&string_operator_not_equals(default_param_645,"")&&((struct CVALUE*)(__right_value581=list$1CVALUEphp_operator_load_element(come_params_567,i_591)))==((void*)0))),                come_call_finalizer3(__right_value581,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    source_647=(struct buffer*)come_increment_ref_count(info->source);
                    p_648=info->p;
                    head_649=info->head;
                    sline_650=info->sline;
                    __dec_obj227=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_645));
                    come_call_finalizer3(__dec_obj227,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_651=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_652=node_compile(node_651,info);
                    if(                    !Value_652) {
                        __result361__ = (_Bool)0;
                        come_call_finalizer3(source_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_651) { node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_645 = come_decrement_ref_count2(default_param_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_563,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_567,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result361__;
                    }
                    else {
                    }
                    __dec_obj228=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_647);
                    come_call_finalizer3(__dec_obj228,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_648;
                    info->head=head_649;
                    info->sline=sline_650;
                    come_value_653=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional11=(((struct sType*)come_null_check(((struct sType*)(__right_value585=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 919, 20)))),                    come_call_finalizer3(__right_value585,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional11) {
                        check_assign_type(((char*)(__right_value588=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value586=string_to_string(fun_name_440))),((char*)(__right_value587=int_to_string(i_591)))))),((struct sType*)come_null_check(((struct sType*)(__right_value589=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 920, 21)),come_value_653->type,come_value_653,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional12=(((struct sType*)come_null_check(((struct sType*)(__right_value590=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 922, 22))&&((struct sType*)come_null_check(((struct sType*)(__right_value591=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 922, 23))->mHeap&&come_value_653->type->mHeap)),                    come_call_finalizer3(__right_value590,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value591,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional12) {
                        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value592=list$1sTypephp_operator_load_element(param_types_563,i_591))), "20method.c", 923, 24)),come_value_653->type,come_value_653,info,(_Bool)1);
                        come_call_finalizer3(__right_value592,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEph_replace(come_params_567,i_591,(struct CVALUE*)come_increment_ref_count(come_value_653));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_647,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_651) { node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional13=(((struct CVALUE*)(__right_value593=list$1CVALUEphp_operator_load_element(come_params_567,i_591)))==((void*)0))),                    come_call_finalizer3(__right_value593,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        err_msg(info,"require parametor(%s) %d",fun_544->mName,i_591);
                        __result362__ = (_Bool)0;
                        default_param_645 = come_decrement_ref_count2(default_param_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_563,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_567,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result362__;
                    }
                }
                default_param_645 = come_decrement_ref_count2(default_param_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_443) {
            if(            !compile_method_block(method_block_443,(struct list$1CVALUEph*)come_increment_ref_count(come_params_567),fun_544,fun_name_440,method_block_sline_444,info,(_Bool)0)) {
                __result363__ = (_Bool)0;
                generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_563,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_567,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result363__;
            }
        }
        buf_654=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 943, "buffer"))));
        buffer_append_str(buf_654,generics_fun_name_543);
        buffer_append_str(buf_654,"(");
        j_655=0;
        for(        o2_saved_656=(struct list$1CVALUEph*)come_increment_ref_count((come_params_567)),it_657=list$1CVALUEph_begin((o2_saved_656));        !list$1CVALUEph_end((o2_saved_656));        it_657=list$1CVALUEph_next((o2_saved_656))        ){
            buffer_append_str(buf_654,it_657->c_value);
            if(            j_655!=list$1CVALUEph_length(come_params_567)-1) {
                buffer_append_str(buf_654,",");
            }
            j_655++;
        }
        come_call_finalizer3(o2_saved_656,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_654,")");
        come_value2_658=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 962, "CVALUE"))));
        __dec_obj229=come_value2_658->c_value;
        come_value2_658->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_654));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_value2_658->var=((void*)0);
        if(        result_type2_562->mClass->mProtocol&&result_type2_562->mRefference) {
            generics_num_659=result_type_561->mGenericsNumBefore;
            if(            obj_type_451->mNoSolvedGenericsType&&obj_type_451->mNoSolvedGenericsType->v1) {
                refference_type_660=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(obj_type_451->mNoSolvedGenericsType->v1->mGenericsTypes,generics_num_659));
                if(                refference_type_660&&refference_type_660->mRefferenceOriginalType) {
                    __dec_obj230=refference_type_660;
                    refference_type_660=(struct sType*)come_increment_ref_count(refference_type_660->mRefferenceOriginalType->v1);
                    come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
                    static int i_661=0;
                    i_661++;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value602=make_define_var(result_type_561,((char*)(__right_value601=xsprintf("__tmp_inf\%s",((char*)(__right_value600=int_to_string(i_661)))))),(_Bool)0,info))));
                    __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj231=come_value2_658->c_value;
                    come_value2_658->c_value=(char*)come_increment_ref_count(xsprintf("((__tmp_inf\%s=\%s),((\%s)(__tmp_inf\%s ? __tmp_inf\%s->_protocol_obj:(void*)0)))",((char*)(__right_value603=int_to_string(i_661))),((char*)(__right_value604=string_to_string(come_value2_658->c_value))),((char*)(__right_value606=string_to_string(((char*)(__right_value605=make_type_name_string(refference_type_660,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))))),((char*)(__right_value607=int_to_string(i_661))),((char*)(__right_value608=int_to_string(i_661)))));
                    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj232=result_type2_562;
                    result_type2_562=(struct sType*)come_increment_ref_count(refference_type_660);
                    come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
                    result_type2_562->mHeap=result_type_561->mHeap;
                }
                come_call_finalizer3(refference_type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        __dec_obj233=come_value2_658->type;
        come_value2_658->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_562));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_658->type->mStatic=(_Bool)0;
        if(        result_type2_562->mHeap) {
            append_object_to_right_values2(come_value2_658,(struct sType*)come_increment_ref_count(result_type2_562),info,(_Bool)0);
        }
        __dec_obj234=come_value2_658->c_value;
        come_value2_658->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_658->c_value,come_value2_658->type,info));
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value2_658->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_658));
        if(        is_contained_method_generics_types(obj_type_451,info)&&generics_fun_name_543) {
            map$2charphsFunph_remove(info->funcs,generics_fun_name_543);
        }
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj235=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_448);
        come_call_finalizer3(__dec_obj235,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_544;
        generics_fun_name_543 = come_decrement_ref_count2(generics_fun_name_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_562,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_563,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_567,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_658,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result364__ = (_Bool)1;
    fun_name_440 = come_decrement_ref_count2(fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_441,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_442) { obj_442 = come_decrement_ref_count2(obj_442, ((struct sNode*)obj_442)->finalize, ((struct sNode*)obj_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_446,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_448,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result364__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result295__;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_432;
struct list_item$1tuple2$2charphsNodephph* it_433;
void* __right_value380 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result300__;
    if(    self==((void*)0)) {
        __result295__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    result_432=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1070, "list$1tuple2$2charphsNodephph"))));
    it_433=self->head;
    while(it_433!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_432,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_433->item)));
        it_433=it_433->next;
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_432;
    come_call_finalizer3(result_432,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result296__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_430;
struct list_item$1tuple2$2charphsNodephph* prev_it_431;
    it_430=self->head;
    while(it_430!=((void*)0)) {
        prev_it_431=it_430;
        it_430=it_430->next;
        come_call_finalizer3(prev_it_431,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj158;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj158=self->item;
            come_call_finalizer3(__dec_obj158,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_434;
struct tuple2$2charphsNodeph* __dec_obj161;
void* __right_value375 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_435;
struct tuple2$2charphsNodeph* __dec_obj164;
void* __right_value376 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_436;
struct tuple2$2charphsNodeph* __dec_obj167;
struct list$1tuple2$2charphsNodephph* __result297__;
    if(    self->len==0) {
        litem_434=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value374=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1tuple2$2charphsNodephph"))));
        litem_434->prev=((void*)0);
        litem_434->next=((void*)0);
        __dec_obj161=litem_434->item;
        litem_434->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj161,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_434;
        self->head=litem_434;
    }
    else if(    self->len==1) {
        litem_435=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value375=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1tuple2$2charphsNodephph"))));
        litem_435->prev=self->head;
        litem_435->next=((void*)0);
        __dec_obj164=litem_435->item;
        litem_435->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj164,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_435;
        self->head->next=litem_435;
    }
    else {
        litem_436=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value376=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1tuple2$2charphsNodephph"))));
        litem_436->prev=self->tail;
        litem_436->next=((void*)0);
        __dec_obj167=litem_436->item;
        litem_436->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj167,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_436;
        self->tail=litem_436;
    }
    self->len++;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj168;
struct sNode* __dec_obj169;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj168=self->v1;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj169=self->v2;
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result298__;
void* __right_value377 = (void*)0;
struct tuple2$2charphsNodeph* result_437;
void* __right_value378 = (void*)0;
char* __dec_obj170;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj171;
struct tuple2$2charphsNodeph* __result299__;
    if(    self==(void*)0) {
        __result298__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    result_437=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj170=result_437->v1;
        result_437->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj171=result_437->v2;
        result_437->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_437;
    come_call_finalizer3(result_437,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj172;
struct sNode* __dec_obj173;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj172=self->v1;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj173=self->v2;
            if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_438;
struct list_item$1tuple2$2charphsNodephph* prev_it_439;
    it_438=self->head;
    while(it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        come_call_finalizer3(prev_it_439,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result304__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_464;
int i_465;
struct CVALUE* __result306__;
struct CVALUE* default_value_466;
struct CVALUE* __result307__;
default_value_466 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_464=self->head;
    i_465=0;
    while(it_464!=((void*)0)) {
        if(        position==i_465) {
            __result306__ = gComeFunResultObject = __result_obj__ = it_464->item;
            gComeFunResultObject = (void*)0;
            return __result306__;
        }
        it_464=it_464->next;
        i_465++;
    }
    memset(&default_value_466,0,sizeof(struct CVALUE*));
    __result307__ = gComeFunResultObject = __result_obj__ = default_value_466;
    come_call_finalizer3(default_value_466,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_472;
int i_473;
struct sType* default_value_474;
struct list$1sTypeph* __result309__;
struct list_item$1sTypeph* it_478;
int i_479;
struct sType* __dec_obj189;
struct list$1sTypeph* __result310__;
default_value_474 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_472=self->len;
        for(        i_473=0;        i_473<position-len_472;        i_473++        ){
            memset(&default_value_474,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_474));
            come_call_finalizer3(default_value_474,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result309__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    it_478=self->head;
    i_479=0;
    while(it_478!=((void*)0)) {
        if(        position==i_479) {
            __dec_obj189=it_478->item;
            it_478->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_478=it_478->next;
        i_479++;
    }
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
struct list_item$1sTypeph* litem_475;
struct sType* __dec_obj186;
void* __right_value405 = (void*)0;
struct list_item$1sTypeph* litem_476;
struct sType* __dec_obj187;
void* __right_value406 = (void*)0;
struct list_item$1sTypeph* litem_477;
struct sType* __dec_obj188;
struct list$1sTypeph* __result308__;
    if(    self->len==0) {
        litem_475=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value404=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1sTypeph"))));
        litem_475->prev=((void*)0);
        litem_475->next=((void*)0);
        __dec_obj186=litem_475->item;
        litem_475->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_475;
        self->head=litem_475;
    }
    else if(    self->len==1) {
        litem_476=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value405=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1sTypeph"))));
        litem_476->prev=self->head;
        litem_476->next=((void*)0);
        __dec_obj187=litem_476->item;
        litem_476->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_476;
        self->head->next=litem_476;
    }
    else {
        litem_477=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value406=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1sTypeph"))));
        litem_477->prev=self->tail;
        litem_477->next=((void*)0);
        __dec_obj188=litem_477->item;
        litem_477->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_477;
        self->tail=litem_477;
    }
    self->len++;
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_487;
struct tuple2$2charphsNodeph* __result311__;
struct tuple2$2charphsNodeph* __result312__;
struct tuple2$2charphsNodeph* result_488;
struct tuple2$2charphsNodeph* __result313__;
result_487 = (void*)0;
result_488 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_487,0,sizeof(struct tuple2$2charphsNodeph*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_487;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->head;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_488,0,sizeof(struct tuple2$2charphsNodeph*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_488;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_490;
struct tuple2$2charphsNodeph* __result314__;
struct tuple2$2charphsNodeph* __result315__;
struct tuple2$2charphsNodeph* result_491;
struct tuple2$2charphsNodeph* __result316__;
result_490 = (void*)0;
result_491 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_490,0,sizeof(struct tuple2$2charphsNodeph*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_490;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_491,0,sizeof(struct tuple2$2charphsNodeph*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_491;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_517;
struct tuple2$2charphsTypeph* __result319__;
struct tuple2$2charphsTypeph* __result320__;
struct tuple2$2charphsTypeph* result_518;
struct tuple2$2charphsTypeph* __result321__;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_517,0,sizeof(struct tuple2$2charphsTypeph*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_517;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->it=self->head;
    if(    self->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_518,0,sizeof(struct tuple2$2charphsTypeph*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_518;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_520;
struct tuple2$2charphsTypeph* __result322__;
struct tuple2$2charphsTypeph* __result323__;
struct tuple2$2charphsTypeph* result_521;
struct tuple2$2charphsTypeph* __result324__;
result_520 = (void*)0;
result_521 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_520,0,sizeof(struct tuple2$2charphsTypeph*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_520;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_521,0,sizeof(struct tuple2$2charphsTypeph*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_521;
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_536;
struct CVALUE* __result326__;
struct CVALUE* __result327__;
struct CVALUE* result_537;
struct CVALUE* __result328__;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_536,0,sizeof(struct CVALUE*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_536;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->head;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_537,0,sizeof(struct CVALUE*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_537;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_539;
struct CVALUE* __result329__;
struct CVALUE* __result330__;
struct CVALUE* result_540;
struct CVALUE* __result331__;
result_539 = (void*)0;
result_540 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_539,0,sizeof(struct CVALUE*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_539;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_540,0,sizeof(struct CVALUE*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_540;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_550;
unsigned int hash_551;
unsigned int it_552;
struct sFun* __result332__;
struct sFun* __result333__;
struct sFun* __result334__;
struct sFun* __result335__;
default_value_550 = (void*)0;
    memset(&default_value_550,0,sizeof(struct sFun*));
    hash_551=charp_get_hash_key(((char*)key))%self->size;
    it_552=hash_551;
    while((_Bool)1) {
        if(        self->item_existance[it_552]) {
            if(            charp_equals(self->keys[it_552],key)) {
                __result332__ = gComeFunResultObject = __result_obj__ = self->items[it_552];
                come_call_finalizer3(default_value_550,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result332__;
            }
            it_552++;
            if(            it_552>=self->size) {
                it_552=0;
            }
            else if(            it_552==hash_551) {
                __result333__ = gComeFunResultObject = __result_obj__ = default_value_550;
                come_call_finalizer3(default_value_550,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result333__;
            }
        }
        else {
            __result334__ = gComeFunResultObject = __result_obj__ = default_value_550;
            come_call_finalizer3(default_value_550,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result334__;
        }
    }
    __result335__ = gComeFunResultObject = __result_obj__ = default_value_550;
    come_call_finalizer3(default_value_550,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj204;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj204=self->v2;
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value488 = (void*)0;
struct list_item$1CVALUEph* litem_569;
struct CVALUE* __dec_obj208;
void* __right_value489 = (void*)0;
struct list_item$1CVALUEph* litem_570;
struct CVALUE* __dec_obj209;
void* __right_value490 = (void*)0;
struct list_item$1CVALUEph* litem_571;
struct CVALUE* __dec_obj210;
struct list$1CVALUEph* __result340__;
    if(    self->len==0) {
        litem_569=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value488=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1084, "list_item$1CVALUEph"))));
        litem_569->prev=((void*)0);
        litem_569->next=((void*)0);
        __dec_obj208=litem_569->item;
        litem_569->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_569;
        self->head=litem_569;
    }
    else if(    self->len==1) {
        litem_570=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value489=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1094, "list_item$1CVALUEph"))));
        litem_570->prev=self->head;
        litem_570->next=((void*)0);
        __dec_obj209=litem_570->item;
        litem_570->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_570;
        self->head->next=litem_570;
    }
    else {
        litem_571=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value490=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1104, "list_item$1CVALUEph"))));
        litem_571->prev=self->tail;
        litem_571->next=((void*)0);
        __dec_obj210=litem_571->item;
        litem_571->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_571;
        self->tail=litem_571;
    }
    self->len++;
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_579;
char* __result341__;
char* __result342__;
char* result_580;
char* __result343__;
result_579 = (void*)0;
result_580 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_579,0,sizeof(char*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_579;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->head;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_580,0,sizeof(char*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_580;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_582;
char* __result344__;
char* __result345__;
char* result_583;
char* __result346__;
result_582 = (void*)0;
result_583 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_582,0,sizeof(char*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_582;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_583,0,sizeof(char*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_583;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_586;
int i_587;
struct CVALUE* default_value_588;
struct list$1CVALUEph* __result348__;
struct list_item$1CVALUEph* it_589;
int i_590;
struct CVALUE* __dec_obj211;
struct list$1CVALUEph* __result349__;
default_value_588 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_586=self->len;
        for(        i_587=0;        i_587<position-len_586;        i_587++        ){
            memset(&default_value_588,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_588));
            come_call_finalizer3(default_value_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result348__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    it_589=self->head;
    i_590=0;
    while(it_589!=((void*)0)) {
        if(        position==i_590) {
            __dec_obj211=it_589->item;
            it_589->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_589=it_589->next;
        i_590++;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_596;
int i_597;
char* __result350__;
char* default_value_598;
char* __result351__;
default_value_598 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_596=self->head;
    i_597=0;
    while(it_596!=((void*)0)) {
        if(        position==i_597) {
            __result350__ = gComeFunResultObject = __result_obj__ = it_596->item;
            gComeFunResultObject = (void*)0;
            return __result350__;
        }
        it_596=it_596->next;
        i_597++;
    }
    memset(&default_value_598,0,sizeof(char*));
    __result351__ = gComeFunResultObject = __result_obj__ = default_value_598;
    default_value_598 = come_decrement_ref_count2(default_value_598, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_606;
struct sNode* __result353__;
struct sNode* __result354__;
struct sNode* result_607;
struct sNode* __result355__;
result_606 = (void*)0;
result_607 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_606,0,sizeof(struct sNode*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_606;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->head;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_607,0,sizeof(struct sNode*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_607;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_609;
struct sNode* __result356__;
struct sNode* __result357__;
struct sNode* result_610;
struct sNode* __result358__;
result_609 = (void*)0;
result_610 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_609,0,sizeof(struct sNode*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_609;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_610,0,sizeof(struct sNode*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_610;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value528 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_614;
struct tuple2$2charphsNodeph* __dec_obj214;
void* __right_value529 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_615;
struct tuple2$2charphsNodeph* __dec_obj215;
void* __right_value530 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_616;
struct tuple2$2charphsNodeph* __dec_obj216;
struct list$1tuple2$2charphsNodephph* __result359__;
    if(    self->len==0) {
        litem_614=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value528=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1154, "list_item$1tuple2$2charphsNodephph"))));
        litem_614->prev=((void*)0);
        litem_614->next=((void*)0);
        __dec_obj214=litem_614->item;
        litem_614->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj214,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_614;
        self->head=litem_614;
    }
    else if(    self->len==1) {
        litem_615=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value529=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1164, "list_item$1tuple2$2charphsNodephph"))));
        litem_615->prev=self->head;
        litem_615->next=((void*)0);
        __dec_obj215=litem_615->item;
        litem_615->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj215,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_615;
        self->head->next=litem_615;
    }
    else {
        litem_616=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value530=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1174, "list_item$1tuple2$2charphsNodephph"))));
        litem_616->prev=self->tail;
        litem_616->next=((void*)0);
        __dec_obj216=litem_616->item;
        litem_616->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj216,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_616;
        self->tail=litem_616;
    }
    self->len++;
    __result359__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj217;
struct tuple2$2charphvoidp* __result360__;
    __dec_obj217=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj218;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj218=self->v1;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value621 = (void*)0;
struct sNode* node_662;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj248;
struct sNode* __result367__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1016, "struct sNode");
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value613=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1016, "sMethodCallNode")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_662=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value613,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj248=node_662;
    node_662=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_662),info));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    __result367__ = gComeFunResultObject = __result_obj__ = node_662;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_662) { node_662 = come_decrement_ref_count2(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result367__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_664;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
_Bool parse_method_generics_type_665;
char* p_666;
int sline_667;
void* __right_value628 = (void*)0;
char* word_668;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct list$1sTypeph* method_generics_types_669;
void* __right_value631 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_670=0;
char* name_671=0;
_Bool err_672=0;
void* __right_value632 = (void*)0;
char* p_673;
int sline_674;
_Bool err_flag_675;
void* __right_value633 = (void*)0;
char* label_676;
void* __right_value634 = (void*)0;
char* __dec_obj253;
char* __dec_obj254;
_Bool no_comma_677;
_Bool in_fun_param_678;
void* __right_value635 = (void*)0;
struct sNode* node_679;
void* __right_value636 = (void*)0;
struct sNode* __dec_obj255;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct buffer* method_block_680;
int method_block_sline_681;
char* head_682;
void* __right_value639 = (void*)0;
char* tail_683;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct buffer* __dec_obj256;
int len_684;
void* __right_value642 = (void*)0;
char* mem_685;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value653 = (void*)0;
struct sNode* node_686;
void* __right_value654 = (void*)0;
struct sNode* __dec_obj269;
struct sNode* __result371__;
    params_664=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1025, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_push_back(params_664,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1026, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_665=(_Bool)0;
    {
        p_666=info->p;
        sline_667=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_668=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_668,info)) {
                    parse_method_generics_type_665=(_Bool)1;
                }
                word_668 = come_decrement_ref_count2(word_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_666;
        info->sline=sline_667;
    }
    method_generics_types_669=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 1056, "list$1sTypeph"))));
    if(    parse_method_generics_type_665&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value631=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_670=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_671=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_672=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value631,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_672) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_669,(struct sType*)come_increment_ref_count(sType_clone(type_670)));
                come_call_finalizer3(type_670,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_671 = come_decrement_ref_count2(name_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_673=info->p;
            sline_674=info->sline;
            err_flag_675=(_Bool)0;
            label_676=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj253=label_676;
                label_676=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_675=(_Bool)1;
            }
            if(            err_flag_675==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj254=label_676;
                label_676=((void*)0);
                __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_673;
                info->sline=sline_674;
            }
            no_comma_677=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_678=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_679=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj255=node_679;
            node_679=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_679),info));
            if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_678;
            info->no_comma=no_comma_677;
            list$1tuple2$2charphsNodephph_push_back(params_664,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1132, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_676),(struct sNode*)come_increment_ref_count(node_679))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_676 = come_decrement_ref_count2(label_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_676 = come_decrement_ref_count2(label_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_680=((void*)0);
    method_block_sline_681=0;
    if(    *info->p==123) {
        head_682=info->p;
        method_block_sline_681=info->sline;
        ((char*)(__right_value639=skip_block(info)));
        __right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_683=info->p;
        __dec_obj256=method_block_680;
        method_block_680=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1156, "buffer"))));
        come_call_finalizer3(__dec_obj256,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_684=tail_683-head_682;
        mem_685=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_684+1)), "20method.c", 1159, "char"));
        memcpy(mem_685,head_682,len_684);
        mem_685[len_684]=0;
        buffer_append_str(method_block_680,mem_685);
        buffer_append_str(method_block_680,"\n");
        mem_685 = come_decrement_ref_count2(mem_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1171, "struct sNode");
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value645=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1171, "sMethodCallNode")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_664),method_block_680,method_block_sline_681,method_generics_types_669,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_686=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value645,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj269=node_686;
    node_686=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_686),info));
    if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    __result371__ = gComeFunResultObject = __result_obj__ = node_686;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_664,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_669,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_680,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_686) { node_686 = come_decrement_ref_count2(node_686, ((struct sNode*)node_686)->finalize, ((struct sNode*)node_686)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj249;
struct sNode* __dec_obj250;
struct tuple2$2charphsNodeph* __result368__;
    __dec_obj249=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj250=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    __result368__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj251;
char* __dec_obj252;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj251=self->v1;
            come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj252=self->v2;
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj257;
struct sNode* __dec_obj258;
char* __dec_obj259;
struct list$1tuple2$2charphsNodephph* __dec_obj260;
struct buffer* __dec_obj261;
struct list$1sTypeph* __dec_obj262;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj258=self->obj;
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj259=self->fun_name;
            __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj260=self->params;
            come_call_finalizer3(__dec_obj260,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj261=self->method_block;
            come_call_finalizer3(__dec_obj261,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj262=self->method_generics_types;
            come_call_finalizer3(__dec_obj262,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result369__;
void* __right_value646 = (void*)0;
struct sMethodCallNode* result_687;
void* __right_value647 = (void*)0;
char* __dec_obj263;
void* __right_value648 = (void*)0;
struct sNode* __dec_obj264;
void* __right_value649 = (void*)0;
char* __dec_obj265;
void* __right_value650 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj266;
void* __right_value651 = (void*)0;
struct buffer* __dec_obj267;
void* __right_value652 = (void*)0;
struct list$1sTypeph* __dec_obj268;
struct sMethodCallNode* __result370__;
    if(    self==(void*)0) {
        __result369__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    result_687=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"));
    if(    self!=((void*)0)) {
        result_687->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_687->sname;
        result_687->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_687->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj264=result_687->obj;
        result_687->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj265=result_687->fun_name;
        result_687->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj266=result_687->params;
        result_687->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj266,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj267=result_687->method_block;
        result_687->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj267,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_687->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj268=result_687->method_generics_types;
        result_687->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj268,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_687->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_687->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_687->fun=self->fun;
    }
    __result370__ = gComeFunResultObject = __result_obj__ = result_687;
    come_call_finalizer3(result_687,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value659 = (void*)0;
struct sNode* __result374__;
void* __right_value660 = (void*)0;
struct sNode* __result375__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1181, "struct sNode");
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value656=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1181, "sCurrentNode")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value4));
        come_call_finalizer3(__right_value656,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value660=string_node_v17(buf,head,head_sline,info)));
    if(__right_value660) { __right_value660 = come_decrement_ref_count2(__right_value660, ((struct sNode*)__right_value660)->finalize, ((struct sNode*)__right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
char* __dec_obj270;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj270=self->sname;
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result372__;
void* __right_value657 = (void*)0;
struct sCurrentNode* result_688;
void* __right_value658 = (void*)0;
char* __dec_obj271;
struct sCurrentNode* __result373__;
    if(    self==(void*)0) {
        __result372__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    result_688=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"));
    if(    self!=((void*)0)) {
        result_688->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_688->sname;
        result_688->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_688->sline_real=self->sline_real;
    }
    __result373__ = gComeFunResultObject = __result_obj__ = result_688;
    come_call_finalizer3(result_688,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

