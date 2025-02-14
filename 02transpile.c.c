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

extern struct __sFILE* __stdinp;
extern struct __sFILE* __stdoutp;
extern struct __sFILE* __stderrp;
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
    unsigned long  long ri_reserved[12];
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

typedef __builtin_va_list va_list;

typedef __builtin_va_list __gnuc_va_list;

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
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* sname[16];
    int sline[16];
    int id[16];
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
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

struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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
    struct list$1voidph* mFields;
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
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    _Bool mAnyClass;
    char* mInterfaceName;
    char* mGenericsName;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct sType* mChannelType;
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
    _Bool mGenerate;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
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
    struct list$1voidph* mParamTypes;
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
    _Bool mGenerate;
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
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
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
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
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
    struct list$1voidph* param_types;
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
    struct list$1voidph* match_it_var;
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

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
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

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
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

extern struct list$1voidph* gExceptionRightValueObjects;
_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
_Bool gComePthread=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
char* CC="clang";
static char* RM="rm -rf";
struct __current_stack2__
{
    int* n_302;
    char** msg2_296;
    char** p_298;
    char** last_lf_299;
    struct sInfo** info;
    char** msg;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
void clearerr(struct __sFILE* anonymous_var_nameX35);
int fclose(struct __sFILE* anonymous_var_nameX36);
int feof(struct __sFILE* anonymous_var_nameX37);
int ferror(struct __sFILE* anonymous_var_nameX38);
int fflush(struct __sFILE* anonymous_var_nameX39);
int fgetc(struct __sFILE* anonymous_var_nameX40);
int fgetpos(struct __sFILE* anonymous_var_nameX41, long  long* anonymous_var_nameX42);
char* fgets(char* anonymous_var_nameX43, int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX46, const char* anonymous_var_nameX47, ...);
int fputc(int anonymous_var_nameX48, struct __sFILE* anonymous_var_nameX49);
int fputs(const char* anonymous_var_nameX50, struct __sFILE* anonymous_var_nameX51);
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX52, const char* anonymous_var_nameX53, struct __sFILE* anonymous_var_nameX54);
int fscanf(struct __sFILE* anonymous_var_nameX55, const char* anonymous_var_nameX56, ...);
int fseek(struct __sFILE* anonymous_var_nameX57, long anonymous_var_nameX58, int anonymous_var_nameX59);
int fsetpos(struct __sFILE* anonymous_var_nameX60, const long  long* anonymous_var_nameX61);
long ftell(struct __sFILE* anonymous_var_nameX62);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX63);
int getchar();
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")))

 char* gets(char* anonymous_var_nameX64);
void perror(const char* anonymous_var_nameX65);
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
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void malloc_type_free(void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable)))  void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int anonymous_var_nameX206);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
int abs(int anonymous_var_nameX207);
int atexit(void (*anonymous_lambda_var_nameZ6)());
double atof(const char* anonymous_var_nameX208);
int atoi(const char* anonymous_var_nameX209);
long atol(const char* anonymous_var_nameX210);
long long atoll(const char* anonymous_var_nameX211);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX214, int anonymous_var_nameX215);
void exit(int anonymous_var_nameX216);
char* getenv(const char* anonymous_var_nameX217);
long labs(long anonymous_var_nameX218);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX219, long anonymous_var_nameX220);
long long llabs(long  long anonymous_var_nameX221);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX222, long  long anonymous_var_nameX223);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX224, const char* anonymous_var_nameX225, unsigned long  int anonymous_var_nameX226);
int mbtowc(int* anonymous_var_nameX227, const char* anonymous_var_nameX228, unsigned long  int anonymous_var_nameX229);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
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
int atexit_b(void (*anonymous_lambda_var_nameZ7)());
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
void abort();
int printf(const char* anonymous_var_nameX373, ...);
int isalnum(int anonymous_var_nameX388);
int isalpha(int anonymous_var_nameX389);
int isblank(int anonymous_var_nameX390);
int iscntrl(int anonymous_var_nameX391);
int isdigit(int anonymous_var_nameX392);
int isgraph(int anonymous_var_nameX393);
int islower(int anonymous_var_nameX394);
int isprint(int anonymous_var_nameX395);
int ispunct(int anonymous_var_nameX396);
int isspace(int anonymous_var_nameX397);
int isupper(int anonymous_var_nameX398);
int isxdigit(int anonymous_var_nameX399);
int tolower(int anonymous_var_nameX400);
int toupper(int anonymous_var_nameX401);
int isascii(int anonymous_var_nameX402);
int toascii(int anonymous_var_nameX403);
int _tolower(int anonymous_var_nameX404);
int _toupper(int anonymous_var_nameX405);
int digittoint(int anonymous_var_nameX406);
int ishexnumber(int anonymous_var_nameX407);
int isideogram(int anonymous_var_nameX408);
int isnumber(int anonymous_var_nameX409);
int isphonogram(int anonymous_var_nameX410);
int isrune(int anonymous_var_nameX411);
int isspecial(int anonymous_var_nameX412);
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
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
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_call_cloner(void* fun, void* mem);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
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
unsigned char* buffer_head_pointer(struct buffer* self);
struct buffer* charpa_to_buffer(char* self, unsigned long  int len);
struct buffer* charppa_to_buffer(char** self, unsigned long  int len);
struct buffer* shortpa_to_buffer(short* self, unsigned long  int len);
struct buffer* intpa_to_buffer(int* self, unsigned long  int len);
struct buffer* longpa_to_buffer(long* self, unsigned long  int len);
struct buffer* floatpa_to_buffer(float* self, unsigned long  int len);
struct buffer* doublepa_to_buffer(double* self, unsigned long  int len);
char* buffer_printable(struct buffer* self);
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
unsigned long  int charpa_length(char* self, unsigned long  int len);
_Bool charppa_contained(char** self, unsigned long  int len, char* str);
unsigned long  int shortpa_length(short* self, unsigned long  int len);
unsigned long  int intpa_length(int* self, unsigned long  int len);
unsigned long  int longpa_length(long* self, unsigned long  int len);
unsigned long  int floatpa_length(float* self, unsigned long  int len);
unsigned long  int doublepa_length(double* self, unsigned long  int len);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
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
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
char* charp_xsprintf(char* self, char* msg, ...);
char* int_xsprintf(int self, char* msg, ...);
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
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
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
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
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
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
void err_msg(struct sInfo* info, char* msg, ...);
static struct list$1charph* list$1charphp_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charphp_map(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block2_02transpilec(struct __current_stack2__* parent, char* it);
static char* list$1charphp_join(struct list$1charph* self, char* sep);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static int list$1charphp_length(struct list$1charph* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static struct list$1charph* list$1charphp_insert(struct list$1charph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct map$2charphsTypeph* map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
void create_pico_version_header();
int come_main_v2(int argc, char** argv);
static struct map$2charphsFunph* map$2charphsFunphp_initialize(struct map$2charphsFunph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphbufferph* map$2charphbufferphp_initialize(struct map$2charphbufferph* self);
static void map$2charphbufferphp_finalize(struct map$2charphbufferph* self);
static void map$2charphbufferph_finalize(struct map$2charphbufferph* self);
static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_initialize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassphp_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModulephp_initialize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypephp_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static struct map$2charphint* map$2charphintp_initialize(struct map$2charphint* self);
static void map$2charphintp_finalize(struct map$2charphint* self);
static void map$2charphint_finalize(struct map$2charphint* self);
static void sInfo_finalize(struct sInfo* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
// uniq global variable
// inline function

// body function
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result72__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result72__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result75__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result77__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result77__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result79__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result82__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result87__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result89__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1char* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1charp_push_back(self,values[i_152]);
    }
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_153;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_154;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_155;
struct list$1char* __result91__;
    if(    self->len==0) {
        litem_153=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1char*", (void*)0, (void*)0, (void*)0))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1char*", (void*)0, (void*)0, (void*)0))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1char*", (void*)0, (void*)0, (void*)0))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_156;
struct list_item$1char* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1charp* __result95__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1charpp_push_back(self,values[i_158]);
    }
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_159;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_160;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_161;
struct list$1charp* __result94__;
    if(    self->len==0) {
        litem_159=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_162;
struct list_item$1charp* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1short* __result98__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1shortp_push_back(self,values[i_164]);
    }
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_165;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_166;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_167;
struct list$1short* __result97__;
    if(    self->len==0) {
        litem_165=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1short*", (void*)0, (void*)0, (void*)0))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1short*", (void*)0, (void*)0, (void*)0))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1short*", (void*)0, (void*)0, (void*)0))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_168;
struct list_item$1short* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_170;
struct list$1int* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0;    i_170<num_value;    i_170++    ){
        list$1intp_push_back(self,values[i_170]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_171;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_172;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_173;
struct list$1int* __result100__;
    if(    self->len==0) {
        litem_171=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1int*", (void*)0, (void*)0, (void*)0))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1) {
        litem_172=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1int*", (void*)0, (void*)0, (void*)0))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1int*", (void*)0, (void*)0, (void*)0))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_174;
struct list_item$1int* prev_it_175;
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer3(prev_it_175,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_176;
struct list$1long* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0;    i_176<num_value;    i_176++    ){
        list$1longp_push_back(self,values[i_176]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_177;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_178;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_179;
struct list$1long* __result103__;
    if(    self->len==0) {
        litem_177=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1long*", (void*)0, (void*)0, (void*)0))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head=litem_177;
    }
    else if(    self->len==1) {
        litem_178=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1long*", (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->head;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head->next=litem_178;
    }
    else {
        litem_179=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1long*", (void*)0, (void*)0, (void*)0))));
        litem_179->prev=self->tail;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail->next=litem_179;
        self->tail=litem_179;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_180;
struct list_item$1long* prev_it_181;
    it_180=self->head;
    while(it_180!=((void*)0)) {
        prev_it_181=it_180;
        it_180=it_180->next;
        come_call_finalizer3(prev_it_181,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_182;
struct list$1float* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0;    i_182<num_value;    i_182++    ){
        list$1floatp_push_back(self,values[i_182]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_183;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_184;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_185;
struct list$1float* __result106__;
    if(    self->len==0) {
        litem_183=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1float*", (void*)0, (void*)0, (void*)0))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1) {
        litem_184=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1float*", (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1float*", (void*)0, (void*)0, (void*)0))));
        litem_185->prev=self->tail;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail->next=litem_185;
        self->tail=litem_185;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_186;
struct list_item$1float* prev_it_187;
    it_186=self->head;
    while(it_186!=((void*)0)) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer3(prev_it_187,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_188;
struct list$1double* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0;    i_188<num_value;    i_188++    ){
        list$1doublep_push_back(self,values[i_188]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_189;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_190;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_191;
struct list$1double* __result109__;
    if(    self->len==0) {
        litem_189=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1double*", (void*)0, (void*)0, (void*)0))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1) {
        litem_190=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1double*", (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1double*", (void*)0, (void*)0, (void*)0))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_192;
struct list_item$1double* prev_it_193;
    it_192=self->head;
    while(it_192!=((void*)0)) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer3(prev_it_193,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result112__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 2096, "char*", (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_194;
    if(    0) {
        for(        i_194=0;        i_194<self->len;        i_194++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result114__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 2096, "char**", (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_195;
    if(    0) {
        for(        i_195=0;        i_195<self->len;        i_195++        ){
            self->items[i_195] = come_decrement_ref_count2(self->items[i_195], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result116__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 2096, "short*", (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_196;
    if(    0) {
        for(        i_196=0;        i_196<self->len;        i_196++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result118__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 2096, "int*", (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_197;
    if(    0) {
        for(        i_197=0;        i_197<self->len;        i_197++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result120__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 2096, "long*", (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_198;
    if(    0) {
        for(        i_198=0;        i_198<self->len;        i_198++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 2096, "float*", (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_199;
    if(    0) {
        for(        i_199=0;        i_199<self->len;        i_199++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result124__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 2096, "double*", (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_200;
    if(    0) {
        for(        i_200=0;        i_200<self->len;        i_200++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_234;
struct list_item$1charph* prev_it_235;
    it_234=self->head;
    while(it_234!=((void*)0)) {
        prev_it_235=it_234;
        it_234=it_234->next;
        come_call_finalizer3(prev_it_235,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_239;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_240;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_241;
char* __dec_obj30;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_239=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_239->prev=((void*)0);
        litem_239->next=((void*)0);
        __dec_obj28=litem_239->item;
        litem_239->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_239;
        self->head=litem_239;
    }
    else if(    self->len==1) {
        litem_240=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_240->prev=self->head;
        litem_240->next=((void*)0);
        __dec_obj29=litem_240->item;
        litem_240->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_240;
        self->head->next=litem_240;
    }
    else {
        litem_241=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_241->prev=self->tail;
        litem_241->next=((void*)0);
        __dec_obj30=litem_241->item;
        litem_241->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_241;
        self->tail=litem_241;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
    if(    gComeOriginalSourcePosition) {
        if(        info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value251=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value249=int_to_string(info->sline))),((char*)(__right_value250=string_to_string(info->sname)))))));
            __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value252 = (void*)0;
char* sname_292;
int sline_293;
int sline_real_294;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
char* __dec_obj31;
_Bool result_295;
void* __right_value255 = (void*)0;
char* __dec_obj32;
_Bool __result220__;
    sname_292=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_293=info->sline;
    sline_real_294=info->sline_real;
    __dec_obj31=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value253=node->sname(node->_protocol_obj)))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    info->sline_real=node->sline_real(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_295=node->compile(node->_protocol_obj,info);
    __dec_obj32=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_292));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_293;
    info->sline_real=sline_real_294;
    __result220__ = result_295;
    sname_292 = come_decrement_ref_count2(sname_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result220__;
}

void err_msg(struct sInfo* info, char* msg, ...){
char* msg2_296;
va_list args_297;
char* p_298;
char* last_lf_299;
int col_300;
int col_301;
int n_302;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value260 = (void*)0;
struct __current_stack2__ __current_stack2__;
void* __right_value265 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
msg2_296 = (void*)0;
memset(&args_297, 0, sizeof(va_list));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(    !info->no_output_err) {
        __builtin_va_start(args_297,msg);
        vasprintf(&msg2_296,msg,args_297);
        __builtin_va_end(args_297);
        p_298=info->p;
        last_lf_299=((void*)0);
        while(p_298>=info->head) {
            if(            *p_298==10) {
                last_lf_299=p_298;
                break;
            }
            p_298--;
        }
        if(        last_lf_299) {
            col_300=info->p-last_lf_299;
            printf("%s %d(real %d)(block %d) %d: %s\n",info->sname,info->sline,info->sline_real,info->sline_block,col_300,msg2_296);
        }
        else {
            col_301=info->p-info->head;
            printf("%s %d(real %d)(block %d) %d: %s\n",info->sname,info->sline,info->sline_real,info->sline_block,col_301,msg2_296);
        }
        info->err_num++;
        stackframe();
        if(        info->come_fun) {
            n_302=info->sline-5;
            __current_stack2__.n_302 = &n_302;
            __current_stack2__.msg2_296 = &msg2_296;
            __current_stack2__.p_298 = &p_298;
            __current_stack2__.last_lf_299 = &last_lf_299;
            __current_stack2__.info = &info;
            __current_stack2__.msg = &msg;
            ((char*)(__right_value270=charp_puts(((char*)(__right_value269=list$1charphp_join(((struct list$1charph*)(__right_value265=list$1charphp_map(((struct list$1charph*)(__right_value260=list$1charphp_sublist(((struct list$1charph*)(__right_value257=charp_split_char(((char*)(__right_value256=buffer_to_string(info->original_source))),10))),n_302,n_302+10))),&__current_stack2__,(void*)method_block2_02transpilec))),"\n"))))));
            __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value257,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value260,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value265,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        free(msg2_296);
    }
}

static struct list$1charph* list$1charphp_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1charph* result_303;
struct list_item$1charph* it_304;
int i_305;
struct list$1charph* __result221__;
    result_303=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1734, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    if(    begin<0) {
        begin+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    begin<0) {
        begin=0;
    }
    if(    tail>=self->len) {
        tail=self->len;
    }
    it_304=self->head;
    i_305=0;
    while(it_304!=((void*)0)) {
        if(        i_305>=begin&&i_305<tail) {
            list$1charphp_push_back(result_303,(char*)come_increment_ref_count(it_304->item));
        }
        it_304=it_304->next;
        i_305++;
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(result_303,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1charph* list$1charphp_map(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1charph* result_312;
struct list_item$1charph* it_313;
void* __right_value263 = (void*)0;
char* item_314;
struct list$1charph* __result226__;
    result_312=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1944, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    it_313=self->head;
    while(it_313!=((void*)0)) {
        item_314=(char*)come_increment_ref_count(block(parent,it_313->item));
        list$1charphp_push_back(result_312,(char*)come_increment_ref_count(item_314));
        it_313=it_313->next;
        item_314 = come_decrement_ref_count2(item_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_312;
    come_call_finalizer3(result_312,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

char* method_block2_02transpilec(struct __current_stack2__* parent, char* it){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
char* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value264=xsprintf("%d %s",++(*(parent->n_302)),it)));
    __right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static char* list$1charphp_join(struct list$1charph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_315;
int n_316;
char* it_319;
void* __right_value268 = (void*)0;
char* __result234__;
    buf_315=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2054, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    n_316=0;
    for(    it_319=list$1charphp_begin(self);    !list$1charphp_end(self);    it_319=list$1charphp_next(self)    ){
        buffer_append_str(buf_315,it_319);
        if(        n_316<list$1charphp_length(self)-1) {
            buffer_append_str(buf_315,sep);
        }
        n_316++;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value268=buffer_to_string(buf_315)));
    come_call_finalizer3(buf_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_317;
char* __result228__;
char* __result229__;
char* result_318;
char* __result230__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_317,0,sizeof(char*));
        __result228__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    self->it=self->head;
    if(    self->it) {
        __result229__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    memset(&result_318,0,sizeof(char*));
    __result230__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_320;
char* __result231__;
char* __result232__;
char* result_321;
char* __result233__;
result_320 = (void*)0;
result_321 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_320,0,sizeof(char*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_320;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_321,0,sizeof(char*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_321;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value271 = (void*)0;
char* output_file_name_322;
void* __right_value272 = (void*)0;
_Bool __result235__;
    output_file_name_322=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    charp_write(((char*)(__right_value272=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_322,(_Bool)0);
    __right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result235__ = (_Bool)1;
    output_file_name_322 = come_decrement_ref_count2(output_file_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result235__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_323;
void* __right_value273 = (void*)0;
    input_file_name_323=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_323!=((void*)0)&&string_operator_not_equals(input_file_name_323,"")) {
        system(((char*)(__right_value273=xsprintf("%s %s.*",RM,input_file_name_323))));
        __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_323 = come_decrement_ref_count2(input_file_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_324;
void* __right_value274 = (void*)0;
    input_file_name_324=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_324!=((void*)0)&&string_operator_not_equals(input_file_name_324,"")) {
        system(((char*)(__right_value274=xsprintf("%s %s.i* %s.c*",RM,input_file_name_324,input_file_name_324))));
        __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_324 = come_decrement_ref_count2(input_file_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_325;
void* __right_value275 = (void*)0;
    input_file_name_325=(char*)come_increment_ref_count(info->sname);
    if(    input_file_name_325!=((void*)0)&&string_operator_not_equals(input_file_name_325,"")) {
        system(((char*)(__right_value275=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_325,input_file_name_325))));
        __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_325 = come_decrement_ref_count2(input_file_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_326;
char* output_file_name_327;
void* __right_value276 = (void*)0;
char* __dec_obj33;
void* __right_value277 = (void*)0;
char* __dec_obj34;
_Bool exist_common_h_328;
struct __sFILE* Value_329;
int is_mac_330;
int is_android_331;
int is_debian_332;
int is_m5stack_333;
int is_pico_334;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
char* cmd3_335;
int rc_336;
void* __right_value280 = (void*)0;
char* command2_337;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
char* cmd2_338;
int rc_339;
void* __right_value283 = (void*)0;
char* command2_340;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* cmd2_341;
int rc_342;
void* __right_value286 = (void*)0;
char* command2_343;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* cmd2_344;
int rc_345;
void* __right_value289 = (void*)0;
char* command2_346;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* cmd3_347;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
char* __dec_obj35;
int rc_348;
void* __right_value294 = (void*)0;
char* command2_349;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* cmd4_350;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* __dec_obj36;
void* __right_value299 = (void*)0;
char* command_351;
int rc_352;
void* __right_value300 = (void*)0;
char* __dec_obj37;
void* __right_value301 = (void*)0;
char* command2_353;
_Bool __result236__;
output_file_name_327 = (void*)0;
    input_file_name_326=(char*)come_increment_ref_count(info->sname);
    if(    !info->output_header_file&&info->output_file_name) {
        __dec_obj33=output_file_name_327;
        output_file_name_327=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj34=output_file_name_327;
        output_file_name_327=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    exist_common_h_328=(_Bool)0;
    {
        Value_329=fopen("common.h","r");
        if(        Value_329) {
            exist_common_h_328=(_Bool)1;
            fclose(Value_329);
        }
        else {
        }
        if(        string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_328=(_Bool)0;
        }
        if(        !gCommonHeader) {
            exist_common_h_328=(_Bool)0;
        }
    }
    is_mac_330=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    is_android_331=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    is_debian_332=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
    is_m5stack_333=info->m5stack_cpp;
    is_pico_334=info->pico_cpp;
    if(    is_android_331==0) {
        cmd3_335=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value278=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
        __right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd3_335);
        }
        rc_336=system(cmd3_335);
        command2_337=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_327));
        if(        info->verbose) {
            puts(command2_337);
        }
        (void)system(command2_337);
        if(        rc_336!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        cmd3_335 = come_decrement_ref_count2(cmd3_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_337 = come_decrement_ref_count2(command2_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    is_m5stack_333) {
        cmd2_338=(char*)come_increment_ref_count(xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value281=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
        __right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_338);
        }
        rc_339=system(cmd2_338);
        if(        rc_339!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_338);
            exit(5);
        }
        command2_340=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_327));
        if(        info->verbose) {
            puts(command2_340);
        }
        (void)system(command2_340);
        cmd2_338 = come_decrement_ref_count2(cmd2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_340 = come_decrement_ref_count2(command2_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    is_pico_334) {
        cmd2_341=(char*)come_increment_ref_count(xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value284=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
        __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_341);
        }
        rc_342=system(cmd2_341);
        if(        rc_342!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_341);
            exit(5);
        }
        command2_343=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_327));
        if(        info->verbose) {
            puts(command2_343);
        }
        (void)system(command2_343);
        cmd2_341 = come_decrement_ref_count2(cmd2_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_343 = come_decrement_ref_count2(command2_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    is_mac_330==0) {
        cmd2_344=(char*)come_increment_ref_count(xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value287=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
        __right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->verbose) {
            puts(cmd2_344);
        }
        rc_345=system(cmd2_344);
        if(        rc_345!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_344);
            exit(5);
        }
        command2_346=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_327));
        if(        info->verbose) {
            puts(command2_346);
        }
        (void)system(command2_346);
        cmd2_344 = come_decrement_ref_count2(cmd2_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_346 = come_decrement_ref_count2(command2_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_347=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",(((info->remove_comment)?(""):(" -C"))),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value290=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
        __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        is_debian_332==0) {
            __dec_obj35=cmd3_347;
            cmd3_347=(char*)come_increment_ref_count(xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value292=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(        info->verbose) {
            puts(cmd3_347);
        }
        rc_348=system(cmd3_347);
        command2_349=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_327));
        if(        info->verbose) {
            puts(command2_349);
        }
        (void)system(command2_349);
        if(        rc_348!=0) {
            cmd4_350=(char*)come_increment_ref_count(xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value295=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
            __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            is_debian_332==0) {
                __dec_obj36=cmd4_350;
                cmd4_350=(char*)come_increment_ref_count(xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out",((info->remove_comment)?(""):(" -C")),info->cpp_option,"/usr/local/","/usr/local/",((exist_common_h_328)?(((char*)(__right_value297=__builtin_string(" -include common.h ")))):("")),input_file_name_326,output_file_name_327,output_file_name_327));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            command_351=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_327,input_file_name_326,info->clang_option,input_file_name_326));
            if(            info->verbose) {
                puts(cmd4_350);
            }
            rc_352=system(cmd4_350);
            if(            rc_352!=0) {
                __dec_obj37=command_351;
                command_351=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_327,input_file_name_326,info->clang_option,input_file_name_326));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                info->verbose) {
                    puts(cmd4_350);
                }
                rc_352=system(cmd4_350);
                if(                rc_352!=0) {
                    printf("failed to cpp(2) (%s)\n",cmd4_350);
                    exit(5);
                }
            }
            command2_353=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_327));
            if(            info->verbose) {
                puts(command2_353);
            }
            (void)system(command2_353);
            cmd4_350 = come_decrement_ref_count2(cmd4_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_351 = come_decrement_ref_count2(command_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_353 = come_decrement_ref_count2(command2_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_347 = come_decrement_ref_count2(cmd3_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_349 = come_decrement_ref_count2(command2_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result236__ = (_Bool)1;
    input_file_name_326 = come_decrement_ref_count2(input_file_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_327 = come_decrement_ref_count2(output_file_name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result236__;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __right_value302 = (void*)0;
char* input_file_name_354;
char* output_file_name_355;
void* __right_value303 = (void*)0;
char* __dec_obj38;
void* __right_value304 = (void*)0;
char* __dec_obj39;
void* __right_value305 = (void*)0;
char* command_356;
int rc_357;
void* __right_value306 = (void*)0;
char* __dec_obj40;
int rc_358;
void* __right_value307 = (void*)0;
char* command2_359;
_Bool __result237__;
void* __right_value311 = (void*)0;
_Bool __result240__;
output_file_name_355 = (void*)0;
    input_file_name_354=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    if(    info->output_file_name&&output_object_file) {
        __dec_obj38=output_file_name_355;
        output_file_name_355=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj39=output_file_name_355;
        output_file_name_355=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_356=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1",CC,output_file_name_355,input_file_name_354,info->clang_option,input_file_name_354));
    if(    info->verbose) {
        puts(command_356);
    }
    rc_357=system(command_356);
    if(    rc_357!=0) {
        __dec_obj40=command_356;
        command_356=(char*)come_increment_ref_count(xsprintf("%s -o %s -c %s %s >> %s.out 2>&1","gcc",output_file_name_355,input_file_name_354,info->clang_option,input_file_name_354));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->verbose) {
            puts(command_356);
        }
        rc_358=system(command_356);
        if(        rc_358!=0) {
            printf("%s %d: %s is faild\n",info->sname,info->sline,CC);
            command2_359=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_354));
            if(            info->verbose) {
                puts(command2_359);
            }
            (void)system(command2_359);
            __result237__ = (_Bool)0;
            command2_359 = come_decrement_ref_count2(command2_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            input_file_name_354 = come_decrement_ref_count2(input_file_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            output_file_name_355 = come_decrement_ref_count2(output_file_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_356 = come_decrement_ref_count2(command_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result237__;
            command2_359 = come_decrement_ref_count2(command2_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    !output_object_file) {
        list$1charphp_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_355)));
    }
    __result240__ = (_Bool)1;
    input_file_name_354 = come_decrement_ref_count2(input_file_name_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_355 = come_decrement_ref_count2(output_file_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_356 = come_decrement_ref_count2(command_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result240__;
}

static struct list$1charph* list$1charphp_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_360;
int i_361;
char* default_value_362;
struct list$1charph* __result238__;
void* __right_value308 = (void*)0;
struct list_item$1charph* litem_363;
char* __dec_obj41;
void* __right_value309 = (void*)0;
struct list_item$1charph* litem_364;
char* __dec_obj42;
struct list_item$1charph* it_365;
int i_366;
void* __right_value310 = (void*)0;
struct list_item$1charph* litem_367;
char* __dec_obj43;
struct list$1charph* __result239__;
default_value_362 = (void*)0;
    if(    position<0) {
        position+=self->len+1;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_360=self->len;
        for(        i_361=0;        i_361<position-len_360;        i_361++        ){
            memset(&default_value_362,0,sizeof(char*));
            list$1charphp_push_back(self,(char*)come_increment_ref_count(default_value_362));
            default_value_362 = come_decrement_ref_count2(default_value_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1charphp_push_back(self,(char*)come_increment_ref_count(item));
        __result238__ = gComeFunResultObject = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    if(    position==0) {
        litem_363=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value308=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1464, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_363->prev=((void*)0);
        litem_363->next=self->head;
        __dec_obj41=litem_363->item;
        litem_363->item=(char*)come_increment_ref_count(item);
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_363;
        self->head=litem_363;
        self->len++;
    }
    else if(    self->len==1) {
        litem_364=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value309=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1476, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_364->prev=self->head;
        litem_364->next=self->tail;
        __dec_obj42=litem_364->item;
        litem_364->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->prev=litem_364;
        self->head->next=litem_364;
        self->len++;
    }
    else {
        it_365=self->head;
        i_366=0;
        while(it_365!=((void*)0)) {
            if(            position==i_366) {
                litem_367=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value310=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1492, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
                litem_367->prev=it_365->prev;
                litem_367->next=it_365;
                __dec_obj43=litem_367->item;
                litem_367->item=(char*)come_increment_ref_count(item);
                __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                it_365->prev->next=litem_367;
                it_365->prev=litem_367;
                self->len++;
            }
            it_365=it_365->next;
            i_366++;
        }
    }
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_368;
void* __right_value312 = (void*)0;
char* __dec_obj44;
void* __right_value313 = (void*)0;
char* __dec_obj45;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct buffer* command_369;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct list$1charph* o2_saved_370;
char* it_371;
int is_mac_372;
void* __right_value318 = (void*)0;
char* cmd_373;
int rc_374;
void* __right_value319 = (void*)0;
char* cmd_375;
int rc_376;
void* __right_value320 = (void*)0;
char* cmd_377;
int rc_378;
int is_apline_379;
int is_debian_380;
int is_android_381;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* str_382;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
int Value_383;
_Bool _if_conditional1;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
char* str_384;
int Value_385;
_Bool __result241__;
_Bool __result242__;
    output_file_name_368=((void*)0);
    if(    info->output_file_name) {
        __dec_obj44=output_file_name_368;
        output_file_name_368=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj45=output_file_name_368;
        output_file_name_368=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_369=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 346, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_format(command_369,"%s -o %s ",CC,output_file_name_368);
    buffer_append_str(command_369,((char*)(__right_value317=charp_operator_add(" ",((char*)(__right_value316=string_operator_add(info->linker_option," ")))))));
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_370=(object_files),it_371=list$1charphp_begin((o2_saved_370));    !list$1charphp_end((o2_saved_370));    it_371=list$1charphp_next((o2_saved_370))    ){
        buffer_append_format(command_369,"%s ",it_371);
    }
    is_mac_372=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_372==0) {
        buffer_append_str(command_369," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    cmd_373=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    rc_374=system(cmd_373);
    if(    rc_374==0) {
        buffer_append_str(command_369," -L. -L/usr/local/lib ");
    }
    cmd_373 = come_decrement_ref_count2(cmd_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_375=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    rc_376=system(cmd_375);
    if(    rc_376==0) {
        buffer_append_format(command_369," -L%s/lib ",getenv("HOME"));
    }
    cmd_375 = come_decrement_ref_count2(cmd_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_377=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    rc_378=system(cmd_377);
    if(    rc_378==0) {
        buffer_append_format(command_369," -L%s/lib ","/usr/local/");
    }
    buffer_append_format(command_369," %s ",info->clang_option);
    if(    gComeStr) {
        buffer_append_format(command_369," -lpcre ");
    }
    if(    gComeGC) {
        buffer_append_str(command_369," -lgc ");
    }
    if(    gComePthread) {
        buffer_append_str(command_369," -lpthread ");
    }
    if(    gComeNet) {
        is_apline_379=system("which apk 1> /dev/null 2>/dev/null");
        is_debian_380=system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
        is_android_381=system("uname -a | grep Android 1>/dev/null 2>/dev/null");
        if(        is_android_381==0) {
            buffer_append_str(command_369," -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(        is_apline_379==0||is_debian_380==0) {
            buffer_append_str(command_369," -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(        is_mac_372==0) {
            buffer_append_format(command_369," -lssl `mysql_config --cflags --libs`");
        }
        else {
            buffer_append_str(command_369," -lssl `mysql_config --cflags --libs`");
        }
    }
    str_382=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value321=xsprintf("gcc"))),((char*)(__right_value323=charp_substring(((char*)(__right_value322=buffer_to_string(command_369))),strlen(CC),-1)))));
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    info->verbose) {
        puts(((char*)(__right_value325=buffer_to_string(command_369))));
        __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_383=system(((char*)(__right_value326=buffer_to_string(command_369))));
    if(    (_if_conditional1=(Value_383)),    (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional1) {
        str_384=(char*)come_increment_ref_count(charp_operator_add(((char*)(__right_value327=xsprintf("gcc"))),((char*)(__right_value329=charp_substring(((char*)(__right_value328=buffer_to_string(command_369))),strlen(CC),-1)))));
        __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        Value_385=system(str_384);
        if(        Value_385) {
            printf("%s %d: %s is faild\n",CC,info->sname,info->sline);
            __result241__ = (_Bool)0;
            str_384 = come_decrement_ref_count2(str_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            output_file_name_368 = come_decrement_ref_count2(output_file_name_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(command_369,buffer_finalize, 0, 0, 0, 0, (void*)0);
            cmd_377 = come_decrement_ref_count2(cmd_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            str_382 = come_decrement_ref_count2(str_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result241__;
        }
        else {
        }
        str_384 = come_decrement_ref_count2(str_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
    }
    __result242__ = (_Bool)1;
    output_file_name_368 = come_decrement_ref_count2(output_file_name_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_369,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_377 = come_decrement_ref_count2(cmd_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    str_382 = come_decrement_ref_count2(str_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result242__;
}

_Bool new_project(int argc, char** argv){
void* __right_value331 = (void*)0;
char* project_name_386;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* project_name_debug_387;
void* __right_value335 = (void*)0;
char* cc_388;
void* __right_value336 = (void*)0;
char* install_389;
void* __right_value337 = (void*)0;
char* libs_390;
void* __right_value338 = (void*)0;
char* os_391;
void* __right_value339 = (void*)0;
char* prefix_392;
void* __right_value340 = (void*)0;
char* cflags_393;
void* __right_value341 = (void*)0;
char* cflags_debug_394;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
int Value_395;
_Bool _if_conditional2;
_Bool __exception_result_var_b1;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
_Bool __result243__;
    project_name_386=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_387=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value332=__builtin_string(argv[2]))),((char*)(__right_value333=__builtin_string("-debug")))));
    __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_388=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_389=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_390=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_391=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_392=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_393=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_394=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    Value_395=system(((char*)(__right_value343=xsprintf("mkdir \%s",((char*)(__right_value342=string_to_string(project_name_386)))))));
    if(    (_if_conditional2=(Value_395<0)),    (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional2) {
        (come_push_stackframe("02transpile.c", 437, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    else {
    }
    charp_write(((char*)(__right_value369=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s tmp-common-header.c\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value344=string_to_string(project_name_386))),((char*)(__right_value345=string_to_string(project_name_386))),((char*)(__right_value346=string_to_string(project_name_386))),((char*)(__right_value347=string_to_string(project_name_386))),((char*)(__right_value348=string_to_string(cc_388))),((char*)(__right_value349=string_to_string(install_389))),((char*)(__right_value350=string_to_string(cflags_393))),((char*)(__right_value351=string_to_string(cflags_debug_394))),((char*)(__right_value352=string_to_string(libs_390))),((char*)(__right_value353=string_to_string(os_391))),((char*)(__right_value354=string_to_string(prefix_392))),((char*)(__right_value355=string_to_string(project_name_386))),((char*)(__right_value356=string_to_string(project_name_debug_387))),((char*)(__right_value357=string_to_string(project_name_386))),((char*)(__right_value358=string_to_string(project_name_386))),((char*)(__right_value359=string_to_string(project_name_386))),((char*)(__right_value360=string_to_string(project_name_386))),((char*)(__right_value361=string_to_string(project_name_debug_387))),((char*)(__right_value362=string_to_string(project_name_386))),((char*)(__right_value363=string_to_string(project_name_386))),((char*)(__right_value364=string_to_string(project_name_386))),((char*)(__right_value365=string_to_string(project_name_386))),((char*)(__right_value366=string_to_string(project_name_386))),((char*)(__right_value367=string_to_string(project_name_debug_387))),((char*)(__right_value368=string_to_string(project_name_debug_387)))))),((char*)(__right_value371=xsprintf("\%s/Makefile",((char*)(__right_value370=string_to_string(project_name_386)))))),(_Bool)0);
    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result243__ = (_Bool)1;
    project_name_386 = come_decrement_ref_count2(project_name_386, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_387 = come_decrement_ref_count2(project_name_debug_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_388 = come_decrement_ref_count2(cc_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_389 = come_decrement_ref_count2(install_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_390 = come_decrement_ref_count2(libs_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_391 = come_decrement_ref_count2(os_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_392 = come_decrement_ref_count2(prefix_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_393 = come_decrement_ref_count2(cflags_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_394 = come_decrement_ref_count2(cflags_debug_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result243__;
}

_Bool run_project(int argc, char** argv){
struct __sFILE* Value_396;
int Value_397;
_Bool __exception_result_var_b2;
int Value_398;
_Bool __exception_result_var_b3;
    Value_396=fopen("common.h","r");
    if(    Value_396) {
        fclose(Value_396);
    }
    else {
        Value_397=system("make header");
        if(        Value_397<0) {
            (come_push_stackframe("02transpile.c", 543, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
        else {
        }
    }
    Value_398=system("make run");
    if(    Value_398<0) {
        (come_push_stackframe("02transpile.c", 548, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    else {
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
int Value_399;
_Bool __exception_result_var_b4;
    Value_399=system("make header");
    if(    Value_399<0) {
        (come_push_stackframe("02transpile.c", 557, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    else {
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct __sFILE* Value_400;
int Value_401;
_Bool __exception_result_var_b5;
int Value_402;
_Bool __exception_result_var_b6;
    Value_400=fopen("common.h","r");
    if(    Value_400) {
        fclose(Value_400);
    }
    else {
        Value_401=system("make header");
        if(        Value_401<0) {
            (come_push_stackframe("02transpile.c", 570, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
        else {
        }
    }
    Value_402=system("make compile");
    if(    Value_402<0) {
        (come_push_stackframe("02transpile.c", 574, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    else {
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct __sFILE* Value_403;
int Value_404;
_Bool __exception_result_var_b7;
int Value_405;
_Bool __exception_result_var_b8;
    Value_403=fopen("common.h","r");
    if(    Value_403) {
        fclose(Value_403);
    }
    else {
        Value_404=system("make header");
        if(        Value_404<0) {
            (come_push_stackframe("02transpile.c", 587, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
        else {
        }
    }
    Value_405=system("make debug");
    if(    Value_405<0) {
        (come_push_stackframe("02transpile.c", 591, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    else {
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
int Value_406;
_Bool __exception_result_var_b9;
    Value_406=system("make clean");
    if(    Value_406<0) {
        (come_push_stackframe("02transpile.c", 600, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    else {
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
int Value_407;
_Bool _if_conditional3;
_Bool __exception_result_var_b10;
    Value_407=system(((char*)(__right_value373=xsprintf("make install DESTDIR=\%s",((char*)(__right_value372=charp_to_string(prefix)))))));
    if(    (_if_conditional3=(Value_407<0)),    (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _if_conditional3) {
        (come_push_stackframe("02transpile.c", 609, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    else {
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
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
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
int i_453;
void* __right_value418 = (void*)0;
char* generics_type_454;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
int i_455;
void* __right_value421 = (void*)0;
char* generics_type_456;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
int is_mac_457;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
char* type_name_458;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sType* type_459;
void* __right_value467 = (void*)0;
char* __dec_obj96;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sClass* klass_506;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 617, "struct sClass*", (void*)0, (void*)0, (void*)0)),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 618, "struct sClass*", (void*)0, (void*)0, (void*)0)),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 619, "struct sClass*", (void*)0, (void*)0, (void*)0)),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 620, "struct sClass*", (void*)0, (void*)0, (void*)0)),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 621, "struct sClass*", (void*)0, (void*)0, (void*)0)),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 622, "struct sClass*", (void*)0, (void*)0, (void*)0)),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 623, "struct sClass*", (void*)0, (void*)0, (void*)0)),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 624, "struct sClass*", (void*)0, (void*)0, (void*)0)),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 625, "struct sClass*", (void*)0, (void*)0, (void*)0)),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Float16")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 626, "struct sClass*", (void*)0, (void*)0, (void*)0)),"_Float16",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 627, "struct sClass*", (void*)0, (void*)0, (void*)0)),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 628, "struct sClass*", (void*)0, (void*)0, (void*)0)),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 629, "struct sClass*", (void*)0, (void*)0, (void*)0)),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_453=0;    i_453<12;    i_453++    ){
        generics_type_454=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_453));
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(generics_type_454),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 632, "struct sClass*", (void*)0, (void*)0, (void*)0)),generics_type_454,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_453,-1,(_Bool)0,info)));
        generics_type_454 = come_decrement_ref_count2(generics_type_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_455=0;    i_455<7;    i_455++    ){
        generics_type_456=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_455));
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(generics_type_456),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 636, "struct sClass*", (void*)0, (void*)0, (void*)0)),generics_type_456,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_455,(_Bool)0,info)));
        generics_type_456 = come_decrement_ref_count2(generics_type_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    is_mac_457=system("uname -a | grep Darwin 1> /dev/null 2>/dev/null");
    if(    is_mac_457==0) {
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 641, "struct sClass*", (void*)0, (void*)0, (void*)0)),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_458=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_459=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 645, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"__builtin_va_list",(_Bool)0,info));
        __dec_obj96=type_459->mOriginalTypeName;
        type_459->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypephp_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_458)),(struct sType*)come_increment_ref_count(type_459));
        type_name_458 = come_decrement_ref_count2(type_name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_506=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 651, "struct sClass*", (void*)0, (void*)0, (void*)0)),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1voidphp_push_back(klass_506->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 653, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 653, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_506->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 654, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 654, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_506->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 655, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 655, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_506->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 656, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 656, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))));
        list$1voidphp_push_back(klass_506->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 657, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 657, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))));
        map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_506));
        come_call_finalizer3(klass_506,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_429;
unsigned int it_430;
_Bool same_key_exist_447;
char* it2_450;
struct map$2charphsClassph* __result264__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_429=string_get_hash_key(key)%self->size;
    it_430=hash_429;
    while((_Bool)1) {
        if(        self->item_existance[it_430]) {
            if(            charp_equals(self->keys[it_430],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_430]);
                    self->keys[it_430] = come_decrement_ref_count2(self->keys[it_430], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_430]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_430]);
                    self->keys[it_430]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_430],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_430]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_430]=item;
                }
                break;
            }
            it_430++;
            if(            it_430>=self->size) {
                it_430=0;
            }
            else if(            it_430==hash_429) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_430]=(_Bool)1;
            if(            1) {
                self->keys[it_430]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_430]=key;
            }
            if(            1) {
                self->items[it_430]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_430]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_447=(_Bool)0;
    for(    it2_450=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_450=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_450,key)) {
            same_key_exist_447=(_Bool)1;
        }
    }
    if(    !same_key_exist_447) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_408;
void* __right_value374 = (void*)0;
char** keys_409;
void* __right_value375 = (void*)0;
struct sClass** items_410;
void* __right_value376 = (void*)0;
_Bool* item_existance_411;
int len_412;
char* it_415;
struct sClass* default_value_418;
void* __right_value377 = (void*)0;
struct sClass* it2_419;
unsigned int hash_426;
int n_427;
struct sClass* default_value_428;
void* __right_value378 = (void*)0;
default_value_418 = (void*)0;
default_value_428 = (void*)0;
    size_408=self->size*10;
    keys_409=(char**)come_increment_ref_count(((char**)(__right_value374=(char**)come_calloc(1, sizeof(char*)*(1*(size_408)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_410=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value375=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_408)), "/usr/local/include/comelang.h", 2708, "struct sClass**", (void*)0, (void*)0, (void*)0))));
    item_existance_411=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value376=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_408)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_412=0;
    for(    it_415=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_415=map$2charphsClassphp_next(self)    ){
        memset(&default_value_418,0,sizeof(struct sClass*));
        it2_419=((struct sClass*)(__right_value377=map$2charphsClassphp_at(self,it_415,default_value_418)));
        come_call_finalizer3(__right_value377,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_426=string_get_hash_key(it_415)%size_408;
        n_427=hash_426;
        while((_Bool)1) {
            if(            item_existance_411[n_427]) {
                n_427++;
                if(                n_427>=size_408) {
                    n_427=0;
                }
                else if(                n_427==hash_426) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_411[n_427]=(_Bool)1;
                keys_409[n_427]=it_415;
                items_410[n_427]=((struct sClass*)(__right_value378=map$2charphsClassphp_at(self,it_415,default_value_428)));
                come_call_finalizer3(__right_value378,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_412++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_409;
    self->items=items_410;
    self->item_existance=item_existance_411;
    self->size=size_408;
    self->len=len_412;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_413;
char* __result244__;
char* __result245__;
char* result_414;
char* __result246__;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_413,0,sizeof(char*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_413;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_414,0,sizeof(char*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_414;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_416;
char* __result247__;
char* __result248__;
char* result_417;
char* __result249__;
result_416 = (void*)0;
result_417 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_416,0,sizeof(char*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_416;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_417,0,sizeof(char*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_417;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_420;
unsigned int it_421;
struct sClass* __result250__;
struct sClass* __result251__;
struct sClass* __result252__;
struct sClass* __result253__;
    hash_420=string_get_hash_key(((char*)key))%self->size;
    it_421=hash_420;
    while((_Bool)1) {
        if(        self->item_existance[it_421]) {
            if(            charp_equals(self->keys[it_421],key)) {
                __result250__ = gComeFunResultObject = __result_obj__ = self->items[it_421];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
            it_421++;
            if(            it_421>=self->size) {
                it_421=0;
            }
            else if(            it_421==hash_420) {
                __result251__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
        }
        else {
            __result252__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result252__;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj46;
struct list$1voidph* __dec_obj47;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj46=self->mName;
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj47=self->mFields;
            come_call_finalizer3(__dec_obj47,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj49=self->mDeclareSName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj50=self->mParentClassName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj51=self->mAttribute;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_422;
struct list_item$1voidph* prev_it_423;
    it_422=self->head;
    while(it_422!=((void*)0)) {
        prev_it_423=it_422;
        it_422=it_422->next;
        come_call_finalizer3(prev_it_423,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj48;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj48=self->item;
            come_call_finalizer3(__dec_obj48,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_424;
struct list_item$1voidph* prev_it_425;
    it_424=self->head;
    while(it_424!=((void*)0)) {
        prev_it_425=it_424;
        it_424=it_424->next;
        come_call_finalizer3(prev_it_425,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_431;
struct list_item$1charp* it_432;
struct list$1charp* __result257__;
    it2_431=0;
    it_432=self->head;
    while(it_432!=((void*)0)) {
        if(        charp_equals(it_432->item,item)) {
            list$1charpp_delete(self,it2_431,it2_431+1);
            break;
        }
        it2_431++;
        it_432=it_432->next;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_433;
struct list$1charp* __result254__;
struct list_item$1charp* it_436;
int i_437;
struct list_item$1charp* prev_it_438;
struct list_item$1charp* it_439;
int i_440;
struct list_item$1charp* prev_it_441;
struct list_item$1charp* it_442;
struct list_item$1charp* head_prev_it_443;
struct list_item$1charp* tail_it_444;
int i_445;
struct list_item$1charp* prev_it_446;
struct list$1charp* __result256__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_433=tail;
        tail=head;
        head=tmp_433;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result254__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_436=self->head;
        i_437=0;
        while(it_436!=((void*)0)) {
            if(            i_437<tail) {
                prev_it_438=it_436;
                it_436=it_436->next;
                i_437++;
                come_call_finalizer3(prev_it_438,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_437==tail) {
                self->head=it_436;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_436=it_436->next;
                i_437++;
            }
        }
    }
    else if(    tail==self->len) {
        it_439=self->head;
        i_440=0;
        while(it_439!=((void*)0)) {
            if(            i_440==head) {
                self->tail=it_439->prev;
                self->tail->next=((void*)0);
            }
            if(            i_440>=head) {
                prev_it_441=it_439;
                it_439=it_439->next;
                i_440++;
                come_call_finalizer3(prev_it_441,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_439=it_439->next;
                i_440++;
            }
        }
    }
    else {
        it_442=self->head;
        head_prev_it_443=((void*)0);
        tail_it_444=((void*)0);
        i_445=0;
        while(it_442!=((void*)0)) {
            if(            i_445==head) {
                head_prev_it_443=it_442->prev;
            }
            if(            i_445==tail) {
                tail_it_444=it_442;
            }
            if(            i_445>=head&&i_445<tail) {
                prev_it_446=it_442;
                it_442=it_442->next;
                i_445++;
                come_call_finalizer3(prev_it_446,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_442=it_442->next;
                i_445++;
            }
        }
        if(        head_prev_it_443!=((void*)0)) {
            head_prev_it_443->next=tail_it_444;
        }
        if(        tail_it_444!=((void*)0)) {
            tail_it_444->prev=head_prev_it_443;
        }
    }
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_434;
struct list_item$1charp* prev_it_435;
struct list$1charp* __result255__;
    it_434=self->head;
    while(it_434!=((void*)0)) {
        prev_it_435=it_434;
        it_434=it_434->next;
        come_call_finalizer3(prev_it_435,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_448;
char* __result258__;
char* __result259__;
char* result_449;
char* __result260__;
result_448 = (void*)0;
result_449 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_448,0,sizeof(char*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_448;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->head;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_449,0,sizeof(char*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_449;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_451;
char* __result261__;
char* __result262__;
char* result_452;
char* __result263__;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_451,0,sizeof(char*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_451;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_452,0,sizeof(char*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_452;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj52;
struct sType* __dec_obj53;
struct sType* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
struct list$1voidph* __dec_obj57;
struct list$1sNodeph* __dec_obj58;
struct list$1voidph* __dec_obj60;
struct list$1charph* __dec_obj61;
struct sType* __dec_obj62;
struct sNode* __dec_obj63;
struct sType* __dec_obj64;
struct sNode* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
char* __dec_obj68;
char* __dec_obj69;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj52=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj53=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj54=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj55=self->mInterfaceName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj56=self->mGenericsName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj57=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj57,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj58=self->mArrayNum;
            come_call_finalizer3(__dec_obj58,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj60=self->mParamTypes;
            come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj61=self->mParamNames;
            come_call_finalizer3(__dec_obj61,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj62=self->mResultType;
            come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj63=self->mAlignas;
            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj64=self->mChannelType;
            come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj65=self->mSizeNum;
            if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj66=self->mOriginalTypeName;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj67=self->mAsmName;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj68=self->mTupleName;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj69=self->mAttribute;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_460;
struct list_item$1sNodeph* prev_it_461;
    it_460=self->head;
    while(it_460!=((void*)0)) {
        prev_it_461=it_460;
        it_460=it_460->next;
        come_call_finalizer3(prev_it_461,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj59;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj59=self->item;
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_462;
struct list_item$1sNodeph* prev_it_463;
    it_462=self->head;
    while(it_462!=((void*)0)) {
        prev_it_463=it_462;
        it_462=it_462->next;
        come_call_finalizer3(prev_it_463,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_464;
struct list_item$1charph* prev_it_465;
    it_464=self->head;
    while(it_464!=((void*)0)) {
        prev_it_465=it_464;
        it_464=it_464->next;
        come_call_finalizer3(prev_it_465,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result265__;
void* __right_value428 = (void*)0;
struct sType* result_467;
void* __right_value429 = (void*)0;
struct sType* __dec_obj70;
void* __right_value430 = (void*)0;
struct sType* __dec_obj71;
void* __right_value431 = (void*)0;
struct sType* __dec_obj72;
void* __right_value432 = (void*)0;
char* __dec_obj73;
void* __right_value433 = (void*)0;
char* __dec_obj74;
void* __right_value440 = (void*)0;
struct list$1voidph* __dec_obj78;
void* __right_value448 = (void*)0;
struct list$1sNodeph* __dec_obj82;
void* __right_value449 = (void*)0;
struct list$1voidph* __dec_obj83;
void* __right_value456 = (void*)0;
struct list$1charph* __dec_obj87;
void* __right_value457 = (void*)0;
struct sType* __dec_obj88;
void* __right_value458 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value459 = (void*)0;
struct sType* __dec_obj90;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj91;
void* __right_value461 = (void*)0;
char* __dec_obj92;
void* __right_value462 = (void*)0;
char* __dec_obj93;
void* __right_value463 = (void*)0;
char* __dec_obj94;
void* __right_value464 = (void*)0;
char* __dec_obj95;
struct sType* __result279__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_467=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key));
    if(    self!=((void*)0)) {
        result_467->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj70=result_467->mNoSolvedGenericsType;
        result_467->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj71=result_467->mOriginalLoadVarType;
        result_467->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj72=result_467->mAnyOriginalType;
        result_467->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_467->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj73=result_467->mInterfaceName;
        result_467->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj74=result_467->mGenericsName;
        result_467->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj78=result_467->mGenericsTypes;
        result_467->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj78,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj82=result_467->mArrayNum;
        result_467->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj82,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_467->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj83=result_467->mParamTypes;
        result_467->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj83,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj87=result_467->mParamNames;
        result_467->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj88=result_467->mResultType;
        result_467->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_467->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj89=result_467->mAlignas;
        result_467->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj90=result_467->mChannelType;
        result_467->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_467->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_467->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_467->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_467->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_467->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_467->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_467->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_467->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_467->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_467->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_467->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_467->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_467->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_467->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_467->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_467->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_467->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_467->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_467->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_467->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_467->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_467->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_467->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_467->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj91=result_467->mSizeNum;
        result_467->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_467->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj92=result_467->mOriginalTypeName;
        result_467->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_467->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_467->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_467->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_467->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_467->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_467->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_467->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_467->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj93=result_467->mAsmName;
        result_467->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_467->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_467->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_467->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_467->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_467->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_467->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj94=result_467->mTupleName;
        result_467->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj95=result_467->mAttribute;
        result_467->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_467->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_467->mGenerate=self->mGenerate;
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_467;
    come_call_finalizer3(result_467,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_466;
    result_466=0;
    result_466+=int_get_hash_key(((int)self->mClass));
    result_466+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_466+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_466+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_466+=int_get_hash_key(((int)self->mAnyClass));
    result_466+=int_get_hash_key(((int)self->mInterfaceName));
    result_466+=int_get_hash_key(((int)self->mGenericsName));
    result_466+=int_get_hash_key(((int)self->mGenericsTypes));
    result_466+=int_get_hash_key(((int)self->mArrayNum));
    result_466+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_466+=int_get_hash_key(((int)self->mParamTypes));
    result_466+=int_get_hash_key(((int)self->mParamNames));
    result_466+=int_get_hash_key(((int)self->mResultType));
    result_466+=int_get_hash_key(((int)self->mVarArgs));
    result_466+=int_get_hash_key(((int)self->mAlignas));
    result_466+=int_get_hash_key(((int)self->mChannelType));
    result_466+=int_get_hash_key(((int)self->mUnsigned));
    result_466+=int_get_hash_key(((int)self->mShort));
    result_466+=int_get_hash_key(((int)self->mLong));
    result_466+=int_get_hash_key(((int)self->mLongLong));
    result_466+=int_get_hash_key(((int)self->mConstant));
    result_466+=int_get_hash_key(((int)self->mAtomic));
    result_466+=int_get_hash_key(((int)self->mRegister));
    result_466+=int_get_hash_key(((int)self->mVolatile));
    result_466+=int_get_hash_key(((int)self->mStatic));
    result_466+=int_get_hash_key(((int)self->mUniq));
    result_466+=int_get_hash_key(((int)self->mRecord));
    result_466+=int_get_hash_key(((int)self->mExtern));
    result_466+=int_get_hash_key(((int)self->mRestrict));
    result_466+=int_get_hash_key(((int)self->mImmutable));
    result_466+=int_get_hash_key(((int)self->mHeap));
    result_466+=int_get_hash_key(((int)self->mChannel));
    result_466+=int_get_hash_key(((int)self->mNoHeap));
    result_466+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_466+=int_get_hash_key(((int)self->mException));
    result_466+=int_get_hash_key(((int)self->mPointerNum));
    result_466+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_466+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_466+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_466+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_466+=int_get_hash_key(((int)self->mSizeNum));
    result_466+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_466+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_466+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_466+=int_get_hash_key(((int)self->mFunctionParam));
    result_466+=int_get_hash_key(((int)self->mAllocaValue));
    result_466+=int_get_hash_key(((int)self->mGenericsStruct));
    result_466+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_466+=int_get_hash_key(((int)self->mInline));
    result_466+=int_get_hash_key(((int)self->mNullValue));
    result_466+=int_get_hash_key(((int)self->mGuardValue));
    result_466+=int_get_hash_key(((int)self->mAsmName));
    result_466+=int_get_hash_key(((int)self->mArrayPointerType));
    result_466+=int_get_hash_key(((int)self->mLambdaArray));
    result_466+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_466+=int_get_hash_key(((int)self->mTypedef));
    result_466+=int_get_hash_key(((int)self->mMultipleTypes));
    result_466+=int_get_hash_key(((int)self->mOriginIsArray));
    result_466+=int_get_hash_key(((int)self->mTupleName));
    result_466+=int_get_hash_key(((int)self->mAttribute));
    result_466+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_466+=int_get_hash_key(((int)self->mGenerate));
    return result_466;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result266__;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1voidph* result_469;
struct list_item$1voidph* it_470;
void* __right_value439 = (void*)0;
struct list$1voidph* __result269__;
    if(    self==((void*)0)) {
        __result266__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_469=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    it_470=self->head;
    while(it_470!=((void*)0)) {
        list$1voidphp_add(result_469,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_470->item)));
        it_470=it_470->next;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = result_469;
    come_call_finalizer3(result_469,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_468;
    result_468=0;
    result_468+=int_get_hash_key(((int)self->head));
    result_468+=int_get_hash_key(((int)self->tail));
    result_468+=int_get_hash_key(((int)self->len));
    result_468+=int_get_hash_key(((int)self->it));
    return result_468;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result267__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value436 = (void*)0;
struct list_item$1voidph* litem_471;
void* __dec_obj75;
void* __right_value437 = (void*)0;
struct list_item$1voidph* litem_472;
void* __dec_obj76;
void* __right_value438 = (void*)0;
struct list_item$1voidph* litem_473;
void* __dec_obj77;
struct list$1voidph* __result268__;
    if(    self->len==0) {
        litem_471=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value436=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_471->prev=((void*)0);
        litem_471->next=((void*)0);
        __dec_obj75=litem_471->item;
        litem_471->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_471;
        self->head=litem_471;
    }
    else if(    self->len==1) {
        litem_472=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value437=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_472->prev=self->head;
        litem_472->next=((void*)0);
        __dec_obj76=litem_472->item;
        litem_472->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj76,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_472;
        self->head->next=litem_472;
    }
    else {
        litem_473=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value438=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_473->prev=self->tail;
        litem_473->next=((void*)0);
        __dec_obj77=litem_473->item;
        litem_473->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj77,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_473;
        self->tail=litem_473;
    }
    self->len++;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result270__;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1sNodeph* result_474;
struct list_item$1sNodeph* it_475;
void* __right_value447 = (void*)0;
struct list$1sNodeph* __result275__;
    if(    self==((void*)0)) {
        __result270__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_474=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    it_475=self->head;
    while(it_475!=((void*)0)) {
        list$1sNodephp_add(result_474,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_475->item)));
        it_475=it_475->next;
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_474;
    come_call_finalizer3(result_474,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result271__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value443 = (void*)0;
struct list_item$1sNodeph* litem_476;
struct sNode* __dec_obj79;
void* __right_value444 = (void*)0;
struct list_item$1sNodeph* litem_477;
struct sNode* __dec_obj80;
void* __right_value445 = (void*)0;
struct list_item$1sNodeph* litem_478;
struct sNode* __dec_obj81;
struct list$1sNodeph* __result272__;
    if(    self->len==0) {
        litem_476=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value443=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_476->prev=((void*)0);
        litem_476->next=((void*)0);
        __dec_obj79=litem_476->item;
        litem_476->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_476;
        self->head=litem_476;
    }
    else if(    self->len==1) {
        litem_477=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value444=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_477->prev=self->head;
        litem_477->next=((void*)0);
        __dec_obj80=litem_477->item;
        litem_477->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_477;
        self->head->next=litem_477;
    }
    else {
        litem_478=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value445=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_478->prev=self->tail;
        litem_478->next=((void*)0);
        __dec_obj81=litem_478->item;
        litem_478->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_478;
        self->tail=litem_478;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result273__;
void* __right_value446 = (void*)0;
struct sNode* result_479;
struct sNode* __result274__;
    if(    self==(void*)0) {
        __result273__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_479=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_479->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_479->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_479->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_479->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_479->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_479->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_479->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_479->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_479->kind=self->kind;
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_479;
    come_call_finalizer2((void*)0, result_479, result_479 ? ((struct sNode*)result_479)->finalize:(void*)0, result_479 ? ((struct sNode*)result_479)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result276__;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1charph* result_480;
struct list_item$1charph* it_481;
void* __right_value455 = (void*)0;
struct list$1charph* __result278__;
    if(    self==((void*)0)) {
        __result276__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    result_480=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    it_481=self->head;
    while(it_481!=((void*)0)) {
        list$1charphp_add(result_480,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_481->item)));
        it_481=it_481->next;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_480;
    come_call_finalizer3(result_480,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value452 = (void*)0;
struct list_item$1charph* litem_482;
char* __dec_obj84;
void* __right_value453 = (void*)0;
struct list_item$1charph* litem_483;
char* __dec_obj85;
void* __right_value454 = (void*)0;
struct list_item$1charph* litem_484;
char* __dec_obj86;
struct list$1charph* __result277__;
    if(    self->len==0) {
        litem_482=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value452=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_482->prev=((void*)0);
        litem_482->next=((void*)0);
        __dec_obj84=litem_482->item;
        litem_482->item=(char*)come_increment_ref_count(item);
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_482;
        self->head=litem_482;
    }
    else if(    self->len==1) {
        litem_483=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value453=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_483->prev=self->head;
        litem_483->next=((void*)0);
        __dec_obj85=litem_483->item;
        litem_483->item=(char*)come_increment_ref_count(item);
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_483;
        self->head->next=litem_483;
    }
    else {
        litem_484=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value454=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_484->prev=self->tail;
        litem_484->next=((void*)0);
        __dec_obj86=litem_484->item;
        litem_484->item=(char*)come_increment_ref_count(item);
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_484;
        self->tail=litem_484;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct map$2charphsTypeph* map$2charphsTypephp_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_502;
unsigned int it_503;
_Bool same_key_exist_504;
char* it2_505;
struct map$2charphsTypeph* __result290__;
    if(    self->len*10>=self->size) {
        map$2charphsTypephp_rehash(self);
    }
    hash_502=string_get_hash_key(key)%self->size;
    it_503=hash_502;
    while((_Bool)1) {
        if(        self->item_existance[it_503]) {
            if(            charp_equals(self->keys[it_503],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_503]);
                    self->keys[it_503] = come_decrement_ref_count2(self->keys[it_503], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_503]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_503]);
                    self->keys[it_503]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_503],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_503]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_503]=item;
                }
                break;
            }
            it_503++;
            if(            it_503>=self->size) {
                it_503=0;
            }
            else if(            it_503==hash_502) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_503]=(_Bool)1;
            if(            1) {
                self->keys[it_503]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_503]=key;
            }
            if(            1) {
                self->items[it_503]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_503]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_504=(_Bool)0;
    for(    it2_505=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_505=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_505,key)) {
            same_key_exist_504=(_Bool)1;
        }
    }
    if(    !same_key_exist_504) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void map$2charphsTypephp_rehash(struct map$2charphsTypeph* self){
int size_485;
void* __right_value468 = (void*)0;
char** keys_486;
void* __right_value469 = (void*)0;
struct sType** items_487;
void* __right_value470 = (void*)0;
_Bool* item_existance_488;
int len_489;
char* it_492;
struct sType* default_value_495;
void* __right_value471 = (void*)0;
struct sType* it2_496;
unsigned int hash_499;
int n_500;
struct sType* default_value_501;
void* __right_value472 = (void*)0;
default_value_495 = (void*)0;
default_value_501 = (void*)0;
    size_485=self->size*10;
    keys_486=(char**)come_increment_ref_count(((char**)(__right_value468=(char**)come_calloc(1, sizeof(char*)*(1*(size_485)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_487=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value469=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_485)), "/usr/local/include/comelang.h", 2708, "struct sType**", (void*)0, (void*)0, (void*)0))));
    item_existance_488=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value470=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_485)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_489=0;
    for(    it_492=map$2charphsTypephp_begin(self);    !map$2charphsTypephp_end(self);    it_492=map$2charphsTypephp_next(self)    ){
        memset(&default_value_495,0,sizeof(struct sType*));
        it2_496=((struct sType*)(__right_value471=map$2charphsTypephp_at(self,it_492,default_value_495)));
        come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
        hash_499=string_get_hash_key(it_492)%size_485;
        n_500=hash_499;
        while((_Bool)1) {
            if(            item_existance_488[n_500]) {
                n_500++;
                if(                n_500>=size_485) {
                    n_500=0;
                }
                else if(                n_500==hash_499) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_488[n_500]=(_Bool)1;
                keys_486[n_500]=it_492;
                items_487[n_500]=((struct sType*)(__right_value472=map$2charphsTypephp_at(self,it_492,default_value_501)));
                come_call_finalizer3(__right_value472,sType_finalize, 0, 1, 0, 0, (void*)0);
                len_489++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_486;
    self->items=items_487;
    self->item_existance=item_existance_488;
    self->size=size_485;
    self->len=len_489;
}

static char* map$2charphsTypephp_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_490;
char* __result280__;
char* __result281__;
char* result_491;
char* __result282__;
result_490 = (void*)0;
result_491 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_490,0,sizeof(char*));
        __result280__ = gComeFunResultObject = __result_obj__ = result_490;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result281__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    memset(&result_491,0,sizeof(char*));
    __result282__ = gComeFunResultObject = __result_obj__ = result_491;
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static _Bool map$2charphsTypephp_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypephp_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_493;
char* __result283__;
char* __result284__;
char* result_494;
char* __result285__;
result_493 = (void*)0;
result_494 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_493,0,sizeof(char*));
        __result283__ = gComeFunResultObject = __result_obj__ = result_493;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result284__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    memset(&result_494,0,sizeof(char*));
    __result285__ = gComeFunResultObject = __result_obj__ = result_494;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct sType* map$2charphsTypephp_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_497;
unsigned int it_498;
struct sType* __result286__;
struct sType* __result287__;
struct sType* __result288__;
struct sType* __result289__;
    hash_497=string_get_hash_key(((char*)key))%self->size;
    it_498=hash_497;
    while((_Bool)1) {
        if(        self->item_existance[it_498]) {
            if(            charp_equals(self->keys[it_498],key)) {
                __result286__ = gComeFunResultObject = __result_obj__ = self->items[it_498];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result286__;
            }
            it_498++;
            if(            it_498>=self->size) {
                it_498=0;
            }
            else if(            it_498==hash_497) {
                __result287__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result287__;
            }
        }
        else {
            __result288__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
    }
    __result289__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
struct list_item$1voidph* litem_507;
void* __dec_obj97;
void* __right_value477 = (void*)0;
struct list_item$1voidph* litem_508;
void* __dec_obj98;
void* __right_value478 = (void*)0;
struct list_item$1voidph* litem_509;
void* __dec_obj99;
struct list$1voidph* __result291__;
    if(    self->len==0) {
        litem_507=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value476=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_507->prev=((void*)0);
        litem_507->next=((void*)0);
        __dec_obj97=litem_507->item;
        litem_507->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_507;
        self->head=litem_507;
    }
    else if(    self->len==1) {
        litem_508=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value477=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_508->prev=self->head;
        litem_508->next=((void*)0);
        __dec_obj98=litem_508->item;
        litem_508->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_508;
        self->head->next=litem_508;
    }
    else {
        litem_509=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value478=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_509->prev=self->tail;
        litem_509->next=((void*)0);
        __dec_obj99=litem_509->item;
        litem_509->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj99,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_509;
        self->tail=litem_509;
    }
    self->len++;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj100;
struct sType* __dec_obj101;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj100=self->v1;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj101=self->v2;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result292__;
void* __right_value482 = (void*)0;
struct tuple2$2charphsTypeph* result_511;
void* __right_value483 = (void*)0;
char* __dec_obj102;
void* __right_value484 = (void*)0;
struct sType* __dec_obj103;
struct tuple2$2charphsTypeph* __result293__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_511=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj102=result_511->v1;
        result_511->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj103=result_511->v2;
        result_511->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_511;
    come_call_finalizer3(result_511,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_510;
    result_510=0;
    result_510+=int_get_hash_key(((int)self->v1));
    result_510+=int_get_hash_key(((int)self->v2));
    return result_510;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj104;
struct sType* __dec_obj105;
struct tuple2$2charphsTypeph* __result294__;
    __dec_obj104=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj106;
struct sType* __dec_obj107;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj106=self->v1;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj107=self->v2;
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void create_pico_version_header(){
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
char* Value_512;
_Bool _if_conditional4;
int version_major_513;
char* p_514;
int version_miner_515;
char* p_516;
int version_revision_517;
char* p_518;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* version_string_519;
int Value_520;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
    if(    getenv("PICO_SDK_PATH")) {
        Value_512=(char*)come_increment_ref_count(charp_read((((char*)(__right_value508=charp_operator_add(getenv("PICO_SDK_PATH"),"/pico_sdk_version.cmake"))))));
        if(        (_if_conditional4=(Value_512)),        (__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            version_major_513=0;
            p_514=strstr(Value_512,"set(PICO_SDK_VERSION_MAJOR");
            if(            p_514) {
                p_514+=strlen("set(PICO_SDK_VERSION_MAJOR");
                while(*p_514==32||*p_514==9) {
                    p_514++;
                }
                while(xisdigit(*p_514)) {
                    version_major_513=version_major_513*10+(*p_514-48);
                    p_514++;
                }
            }
            version_miner_515=0;
            p_516=strstr(Value_512,"set(PICO_SDK_VERSION_MINOR");
            if(            p_516) {
                p_516+=strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p_516==32||*p_516==9) {
                    p_516++;
                }
                while(xisdigit(*p_516)) {
                    version_miner_515=version_miner_515*10+*p_516-48;
                    p_516++;
                }
            }
            version_revision_517=0;
            p_518=strstr(Value_512,"set(PICO_SDK_VERSION_REVISION");
            if(            p_518) {
                p_518+=strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p_518==32||*p_518==9) {
                    p_518++;
                }
                while(xisdigit(*p_518)) {
                    version_revision_517=version_revision_517*10+*p_518-48;
                    p_518++;
                }
            }
            version_string_519=(char*)come_increment_ref_count(xsprintf("\%s.\%s.\%s",((char*)(__right_value510=int_to_string(version_major_513))),((char*)(__right_value511=int_to_string(version_miner_515))),((char*)(__right_value512=int_to_string(version_revision_517)))));
            __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value512 = come_decrement_ref_count2(__right_value512, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            Value_520=system("mkdir -p pico");
            if(            !Value_520) {
                charp_write(((char*)(__right_value518=xsprintf("\#ifndef _PICO_VERSION_H\n\#define _PICO_VERSION_H\n\n\#define PICO_SDK_VERSION_MAJOR \%s\n\#define PICO_SDK_VERSION_MINOR \%s\n\#define PICO_SDK_VERSION_REVISION \%s\n\#define PICO_SDK_VERSION_STRING \"\%s\"\n\n\#endif\n",((char*)(__right_value514=int_to_string(version_major_513))),((char*)(__right_value515=int_to_string(version_miner_515))),((char*)(__right_value516=int_to_string(version_revision_517))),((char*)(__right_value517=string_to_string(version_string_519)))))),"pico/version.h",(_Bool)0);
                __right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
            }
            version_string_519 = come_decrement_ref_count2(version_string_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
        }
        Value_512 = come_decrement_ref_count2(Value_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

int come_main_v2(int argc, char** argv){
int start_num_521;
void* __right_value519 = (void*)0;
char* output_file_name_str_522;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct buffer* clang_option_523;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct buffer* linker_option_524;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct buffer* cpp_option_525;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct list$1charph* files_526;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct list$1charph* object_files_527;
_Bool output_object_file_528;
_Bool output_cpp_file_529;
_Bool output_source_file_flag_530;
_Bool output_object_file_flag_531;
char* output_file_name_532;
_Bool verbose_533;
_Bool come_debug_534;
_Bool come_malloc_535;
_Bool m5stack_cpp_536;
_Bool pico_cpp_537;
_Bool gcc_compiler_538;
int i_539;
void* __right_value530 = (void*)0;
char* ext_name_540;
void* __right_value531 = (void*)0;
char* __dec_obj108;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
char* env_541;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct buffer* __dec_obj109;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
char* env_542;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct buffer* __dec_obj110;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
_Bool _elif_conditional1;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
_Bool _elif_conditional2;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
_Bool _elif_conditional3;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
int Value_543;
_Bool _if_conditional5;
_Bool __exception_result_var_b11;
struct __sFILE* Value_544;
_Bool __exception_result_var_b12;
void* __right_value617 = (void*)0;
char* tmp_file_545;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
int Value_546;
_Bool _if_conditional6;
_Bool __exception_result_var_b13;
struct sInfo info_547;
void* __right_value622 = (void*)0;
char* __dec_obj111;
void* __right_value623 = (void*)0;
char* __dec_obj112;
void* __right_value624 = (void*)0;
char* __dec_obj113;
void* __right_value625 = (void*)0;
char* __dec_obj114;
void* __right_value626 = (void*)0;
char* __dec_obj115;
void* __right_value627 = (void*)0;
void* __right_value633 = (void*)0;
struct map$2charphsFunph* __dec_obj134;
void* __right_value634 = (void*)0;
void* __right_value640 = (void*)0;
struct map$2charphbufferph* __dec_obj136;
void* __right_value641 = (void*)0;
void* __right_value647 = (void*)0;
struct map$2charphcharph* __dec_obj138;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct map$2charphbufferph* __dec_obj139;
void* __right_value650 = (void*)0;
void* __right_value656 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj151;
void* __right_value657 = (void*)0;
void* __right_value663 = (void*)0;
struct map$2charphsClassph* __dec_obj153;
void* __right_value664 = (void*)0;
void* __right_value670 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj159;
void* __right_value671 = (void*)0;
void* __right_value677 = (void*)0;
struct map$2charphsTypeph* __dec_obj161;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sModule* __dec_obj162;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1voidph* __dec_obj168;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1CVALUEph* __dec_obj174;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sVarTable* __dec_obj175;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sVarTable* lv_table_587;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct list$1charph* __dec_obj176;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct list$1charph* __dec_obj177;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct map$2charphsClassph* __dec_obj178;
void* __right_value694 = (void*)0;
void* __right_value700 = (void*)0;
struct map$2charphint* __dec_obj180;
void* __right_value701 = (void*)0;
char* __dec_obj181;
_Bool Value_594;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct buffer* __dec_obj182;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct buffer* __dec_obj183;
_Bool Value_595;
_Bool Value_596;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
_Bool Value_597;
_Bool Value_598;
_Bool Value_599;
_Bool Value_600;
_Bool Value_601;
_Bool Value_602;
_Bool Value_603;
_Bool Value_604;
int start_num_605;
char* output_file_name_str_606;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct buffer* clang_option_607;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct buffer* linker_option_608;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct buffer* cpp_option_609;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct list$1charph* files_610;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1charph* object_files_611;
_Bool output_object_file_612;
_Bool output_cpp_file_613;
_Bool output_source_file_flag_614;
_Bool output_object_file_flag_615;
char* output_file_name_616;
_Bool verbose_617;
_Bool come_debug_618;
_Bool come_malloc_619;
_Bool m5stack_cpp_620;
_Bool pico_cpp_621;
_Bool gcc_compiler_622;
int i_623;
void* __right_value721 = (void*)0;
char* ext_name_624;
void* __right_value722 = (void*)0;
char* __dec_obj221;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
char* env_625;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct buffer* __dec_obj222;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
char* env_626;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct buffer* __dec_obj223;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
_Bool _elif_conditional4;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
_Bool _elif_conditional5;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
_Bool _elif_conditional6;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct list$1charph* o2_saved_627;
char* it_628;
struct sInfo info_629;
struct __sFILE* Value_630;
void* __right_value807 = (void*)0;
char* __dec_obj224;
void* __right_value808 = (void*)0;
char* __dec_obj225;
void* __right_value809 = (void*)0;
char* __dec_obj226;
void* __right_value810 = (void*)0;
char* __dec_obj227;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct map$2charphsFunph* __dec_obj228;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct map$2charphbufferph* __dec_obj229;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct map$2charphcharph* __dec_obj230;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct map$2charphbufferph* __dec_obj231;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj232;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct map$2charphsClassph* __dec_obj233;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj234;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct map$2charphsTypeph* __dec_obj235;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sModule* __dec_obj236;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct list$1voidph* __dec_obj237;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct list$1CVALUEph* __dec_obj238;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sVarTable* __dec_obj239;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sVarTable* lv_table_631;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct list$1charph* __dec_obj240;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1charph* __dec_obj241;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct map$2charphsClassph* __dec_obj242;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct map$2charphint* __dec_obj243;
_Bool Value_632;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct buffer* __dec_obj244;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct buffer* __dec_obj245;
void* __right_value851 = (void*)0;
char* __dec_obj246;
char* __dec_obj247;
_Bool Value_633;
_Bool Value_634;
_Bool Value_635;
_Bool Value_636;
struct sInfo info_637;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
char* __dec_obj248;
void* __right_value854 = (void*)0;
char* __dec_obj249;
void* __right_value855 = (void*)0;
char* __dec_obj250;
void* __right_value856 = (void*)0;
char* __dec_obj251;
char* __dec_obj252;
_Bool Value_641;
memset(&info_547, 0, sizeof(struct sInfo));
memset(&info_629, 0, sizeof(struct sInfo));
memset(&info_637, 0, sizeof(struct sInfo));
    if(    charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        start_num_521=2;
        output_file_name_str_522=(char*)come_increment_ref_count(xsprintf("common.h"));
        clang_option_523=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        linker_option_524=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        cpp_option_525=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 728, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_525,"-U__GNUC__");
        files_526=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 730, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        object_files_527=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 731, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        output_object_file_528=(_Bool)0;
        output_cpp_file_529=(_Bool)0;
        output_source_file_flag_530=(_Bool)0;
        output_object_file_flag_531=(_Bool)1;
        output_file_name_532=(char*)come_increment_ref_count(output_file_name_str_522);
        verbose_533=(_Bool)0;
        come_debug_534=(_Bool)0;
        come_malloc_535=(_Bool)0;
        m5stack_cpp_536=(_Bool)0;
        pico_cpp_537=(_Bool)0;
        gcc_compiler_538=(_Bool)0;
        for(        i_539=start_num_521;        i_539<argc;        i_539++        ){
            ext_name_540=(char*)come_increment_ref_count(xextname(argv[i_539]));
            if(            charp_operator_equals(argv[i_539],"-o")&&i_539+1<argc) {
                __dec_obj108=output_file_name_532;
                output_file_name_532=(char*)come_increment_ref_count(__builtin_string(argv[i_539+1]));
                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_539++;
            }
            else if(            charp_operator_equals(argv[i_539],"-e")&&i_539+1<argc) {
                buffer_append_str(linker_option_524,((char*)(__right_value533=xsprintf("-e \%s",((char*)(__right_value532=charp_to_string(argv[i_539+1])))))));
                __right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_539++;
            }
            else if(            charp_operator_equals(argv[i_539],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_539],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_539],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_525,((char*)(__right_value534=xsprintf(" -DENABLE_GC "))));
                __right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-gcc")) {
                gcc_compiler_538=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_539],"-pico")) {
                output_source_file_flag_530=(_Bool)1;
                output_object_file_flag_531=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_541=getenv("PICO_SDK_PATH");
                __dec_obj109=cpp_option_525;
                cpp_option_525=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 773, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj109,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_525,((char*)(__right_value539=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value537=charp_to_string(env_541))),((char*)(__right_value538=charp_to_string(env_541)))))));
                __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                create_pico_version_header();
                pico_cpp_537=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_539],"-m5stack")) {
                m5stack_cpp_536=(_Bool)1;
                output_source_file_flag_530=(_Bool)1;
                output_object_file_flag_531=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_542=getenv("IDF_PATH");
                __dec_obj110=cpp_option_525;
                cpp_option_525=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 784, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj110,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_525,((char*)(__right_value563=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value542=charp_to_string(getenv("HOME")))),((char*)(__right_value543=charp_to_string(env_542))),((char*)(__right_value544=charp_to_string(env_542))),((char*)(__right_value545=charp_to_string(env_542))),((char*)(__right_value546=charp_to_string(env_542))),((char*)(__right_value547=charp_to_string(env_542))),((char*)(__right_value548=charp_to_string(env_542))),((char*)(__right_value549=charp_to_string(env_542))),((char*)(__right_value550=charp_to_string(env_542))),((char*)(__right_value551=charp_to_string(env_542))),((char*)(__right_value552=charp_to_string(env_542))),((char*)(__right_value553=charp_to_string(env_542))),((char*)(__right_value554=charp_to_string(env_542))),((char*)(__right_value555=charp_to_string(env_542))),((char*)(__right_value556=charp_to_string(env_542))),((char*)(__right_value557=charp_to_string(env_542))),((char*)(__right_value558=charp_to_string(env_542))),((char*)(__right_value559=charp_to_string(env_542))),((char*)(__right_value560=charp_to_string(env_542))),((char*)(__right_value561=charp_to_string(env_542))),((char*)(__right_value562=charp_to_string(env_542)))))),"/usr/local/");
                __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value555 = come_decrement_ref_count2(__right_value555, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value560 = come_decrement_ref_count2(__right_value560, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value563 = come_decrement_ref_count2(__right_value563, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_539+1<argc&&charp_operator_equals(argv[i_539],"-target")) {
                buffer_append_str(clang_option_523,((char*)(__right_value565=xsprintf("-target \%s",((char*)(__right_value564=charp_to_string(argv[i_539+1])))))));
                __right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_539++;
            }
            else if(            i_539+1<argc&&charp_operator_equals(argv[i_539],"-T")) {
                buffer_append_str(clang_option_523,((char*)(__right_value567=xsprintf(" -T \%s ",((char*)(__right_value566=charp_to_string(argv[i_539+1])))))));
                __right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_539++;
            }
            else if(            charp_operator_equals(argv[i_539],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_539],"-cg")) {
                come_debug_534=(_Bool)1;
                buffer_append_str(clang_option_523,"-g ");
            }
            else if(            charp_operator_equals(argv[i_539],"-C")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value569=xsprintf("\%s ",((char*)(__right_value568=charp_to_string(argv[i_539])))))));
                __right_value568 = come_decrement_ref_count2(__right_value568, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-M")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value571=xsprintf("\%s ",((char*)(__right_value570=charp_to_string(argv[i_539])))))));
                __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-MM")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value573=xsprintf("\%s ",((char*)(__right_value572=charp_to_string(argv[i_539])))))));
                __right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-dM")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value575=xsprintf("\%s ",((char*)(__right_value574=charp_to_string(argv[i_539])))))));
                __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-dD")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value577=xsprintf("\%s ",((char*)(__right_value576=charp_to_string(argv[i_539])))))));
                __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-H")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value579=xsprintf("\%s ",((char*)(__right_value578=charp_to_string(argv[i_539])))))));
                __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-P")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value581=xsprintf("\%s ",((char*)(__right_value580=charp_to_string(argv[i_539])))))));
                __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-nostdinc")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value583=xsprintf("\%s ",((char*)(__right_value582=charp_to_string(argv[i_539])))))));
                __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-CC")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value585=xsprintf("\%s ",((char*)(__right_value584=charp_to_string(argv[i_539])))))));
                __right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_539+1<argc&&charp_operator_equals(argv[i_539],"-target")) {
                buffer_append_str(clang_option_523,((char*)(__right_value587=xsprintf("-target \%s",((char*)(__right_value586=charp_to_string(argv[i_539+1])))))));
                __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_539++;
            }
            else if(            i_539+1<argc&&charp_operator_equals(argv[i_539],"-include")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value589=xsprintf("-iclude \%s",((char*)(__right_value588=charp_to_string(argv[i_539+1])))))));
                __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_539++;
            }
            else if(            i_539+1<argc&&charp_operator_equals(argv[i_539],"-isystem")) {
                buffer_append_str(cpp_option_525,((char*)(__right_value591=xsprintf("-isystem \%s",((char*)(__right_value590=charp_to_string(argv[i_539+1])))))));
                __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_523,((char*)(__right_value593=xsprintf("-isystem \%s",((char*)(__right_value592=charp_to_string(argv[i_539+1])))))));
                __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_539++;
            }
            else if(            i_539+1<argc&&charp_operator_equals(argv[i_539],"-T")) {
                buffer_append_str(clang_option_523,((char*)(__right_value595=xsprintf(" -T \%s ",((char*)(__right_value594=charp_to_string(argv[i_539+1])))))));
                __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_539++;
            }
            else if(            charp_operator_equals(argv[i_539],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_539],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional1=(string_operator_equals(((char*)(__right_value596=charp_operator_load_range_element(argv[i_539],0,2))),"-O"))),            (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional1) {
                buffer_append_str(clang_option_523,((char*)(__right_value598=xsprintf(" \%s ",((char*)(__right_value597=charp_to_string(argv[i_539])))))));
                __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_534=(_Bool)0;
            }
            else if(            (_elif_conditional2=(string_operator_equals(((char*)(__right_value599=charp_operator_load_range_element(argv[i_539],0,2))),"-D"))),            (__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional2) {
                buffer_append_str(cpp_option_525,((char*)(__right_value601=xsprintf(" \%s ",((char*)(__right_value600=charp_to_string(argv[i_539])))))));
                __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_523,((char*)(__right_value603=xsprintf(" \%s ",((char*)(__right_value602=charp_to_string(argv[i_539])))))));
                __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            (_elif_conditional3=(string_operator_equals(((char*)(__right_value604=charp_operator_load_range_element(argv[i_539],0,2))),"-U"))),            (__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional3) {
                buffer_append_str(cpp_option_525,((char*)(__right_value606=xsprintf(" \%s ",((char*)(__right_value605=charp_to_string(argv[i_539])))))));
                __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_523,((char*)(__right_value608=xsprintf(" \%s ",((char*)(__right_value607=charp_to_string(argv[i_539])))))));
                __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-g")) {
                buffer_append_str(clang_option_523,"-g ");
            }
            else if(            charp_operator_equals(argv[i_539],"-v")) {
                buffer_append_str(clang_option_523,"-v ");
                buffer_append_str(cpp_option_525,"-v ");
                verbose_533=(_Bool)1;
            }
            else if(            strlen(argv[i_539])>=2&&memcmp(argv[i_539],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_525,((char*)(__right_value610=charp_operator_add(" ",((char*)(__right_value609=charp_operator_add(argv[i_539]," ")))))));
                __right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_539],"-gdwarf-4")) {
                buffer_append_str(clang_option_523,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_539],"-s")||charp_operator_equals(argv[i_539],"-S")) {
                output_source_file_flag_530=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_539],"-c")) {
                output_object_file_528=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_539],"-E")) {
                output_cpp_file_529=(_Bool)1;
            }
            else if(            argv[i_539][0]==45) {
                buffer_append_str(clang_option_523,((char*)(__right_value611=charp_operator_add(argv[i_539]," "))));
                __right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_539])>2&&memcmp(argv[i_539]+strlen(argv[i_539])-2,".o",2)==0) {
                list$1charphp_push_back(object_files_527,(char*)come_increment_ref_count(__builtin_string(argv[i_539])));
            }
            else if(            strlen(argv[i_539])>2&&memcmp(argv[i_539]+strlen(argv[i_539])-2,".a",2)==0) {
                list$1charphp_push_back(object_files_527,(char*)come_increment_ref_count(__builtin_string(argv[i_539])));
            }
            else if(            string_operator_equals(ext_name_540,"c")) {
                list$1charphp_push_back(files_526,(char*)come_increment_ref_count(__builtin_string(argv[i_539])));
            }
            else {
                buffer_append_str(clang_option_523,((char*)(__right_value615=charp_operator_add(argv[i_539]," "))));
                __right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            ext_name_540 = come_decrement_ref_count2(ext_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        output_source_file_flag_530=(_Bool)1;
        gComeOriginalSourcePosition=(_Bool)0;
        gComeDebug=come_debug_534;
        gComeMalloc=come_malloc_535;
        Value_543=system(((char*)(__right_value616=xsprintf("%s %s",RM,output_file_name_532))));
        if(        (_if_conditional5=(Value_543<0)),        (__right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional5) {
            (come_push_stackframe("02transpile.c", 925, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        else {
        }
        Value_544=fopen(output_file_name_532,"w");
        if(        Value_544) {
            fclose(Value_544);
        }
        else {
            (come_push_stackframe("02transpile.c", 932, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        tmp_file_545=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        Value_546=system(((char*)(__right_value621=xsprintf("cat \%s > \%s",((char*)(__right_value619=string_to_string(((char*)(__right_value618=list$1charphp_join(files_526," ")))))),((char*)(__right_value620=string_to_string(tmp_file_545)))))));
        if(        (_if_conditional6=(Value_546<0)),        (__right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional6) {
            (come_push_stackframe("02transpile.c", 938, 12),__exception_result_var_b13=die("cat"), come_pop_stackframe(), __exception_result_var_b13);
        }
        else {
        }
        memset(&info_547,0,sizeof(struct sInfo));
        __dec_obj111=info_547.base_sname;
        info_547.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_545));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj112=info_547.sname;
        info_547.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_545));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_547.sline=1;
        info_547.err_num=0;
        __dec_obj113=info_547.clang_option;
        info_547.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_523));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=info_547.cpp_option;
        info_547.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_525));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj115=info_547.linker_option;
        info_547.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_524));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_547.no_output_err=(_Bool)0;
        __dec_obj134=info_547.funcs;
        info_547.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunphp_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 953, "struct map$2charphsFunph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj134,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj136=info_547.struct_definition;
        info_547.struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 954, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj136,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj138=info_547.uniq_definition;
        info_547.uniq_definition=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "02transpile.c", 955, "struct map$2charphcharph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj138,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj139=info_547.previous_struct_definition;
        info_547.previous_struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 956, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj139,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj151=info_547.generics_funcs;
        info_547.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunphp_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 957, "struct map$2charphsGenericsFunph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj151,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj153=info_547.classes;
        info_547.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 958, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj153,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj159=info_547.modules;
        info_547.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModulephp_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 959, "struct map$2charphsClassModuleph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj159,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj161=info_547.types;
        info_547.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypephp_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 960, "struct map$2charphsTypeph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj161,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj162=info_547.module;
        info_547.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 961, "struct sModule*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj162,sModule_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj168=info_547.right_value_objects;
        info_547.right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "02transpile.c", 962, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
        come_call_finalizer3(__dec_obj168,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj174=info_547.stack;
        info_547.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 963, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj174,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj175=info_547.gv_table;
        info_547.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 964, "struct sVarTable*", (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
        come_call_finalizer3(__dec_obj175,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        lv_table_587=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 965, "struct sVarTable*", (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
        info_547.lv_table=lv_table_587;
        __dec_obj176=info_547.generics_type_names;
        info_547.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 967, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj176,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj177=info_547.method_generics_type_names;
        info_547.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 968, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj177,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj178=info_547.generics_classes;
        info_547.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 969, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj178,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        info_547.verbose=verbose_533;
        info_547.output_header_file=(_Bool)1;
        __dec_obj180=info_547.outputed_class;
        info_547.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphintp_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 972, "struct map$2charphint*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj180,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
        static int n_593=0;
        info_547.num_source_files=n_593++;
        info_547.max_source_files=list$1charphp_length(files_526);
        __dec_obj181=info_547.output_file_name;
        info_547.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_532));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_547);
        clear_tmp_file(&info_547);
        Value_594=cpp(&info_547);
        if(        !Value_594) {
            printf("%s %d: transpile failed\n",info_547.sname,info_547.sline);
            system(((char*)(__right_value702=xsprintf("%s %s*",RM,tmp_file_545))));
            __right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exit(2);
        }
        else {
        }
        __dec_obj182=info_547.original_source;
        info_547.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value704=charp_read(((char*)(__right_value703=xsprintf("%s",tmp_file_545))))))));
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj183=info_547.source;
        info_547.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value707=charp_read(((char*)(__right_value706=xsprintf("%s.i",tmp_file_545))))))));
        come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_547.p=info_547.source->buf;
        info_547.head=info_547.source->buf;
        Value_595=output_cpp_file_529;
        if(        !Value_595) {
            transpile_v5(&info_547);
            Value_596=output_header_file(&info_547);
            if(            !Value_596) {
                printf("%s %d: output source file faield\n",info_547.sname,info_547.sline);
                system(((char*)(__right_value709=xsprintf("%s %s*",RM,tmp_file_545))));
                __right_value709 = come_decrement_ref_count2(__right_value709, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                exit(2);
            }
            else {
            }
        }
        else {
        }
        system(((char*)(__right_value710=xsprintf("%s %s*",RM,tmp_file_545))));
        __right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        output_file_name_str_522 = come_decrement_ref_count2(output_file_name_str_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(clang_option_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_524,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_526,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_527,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_532 = come_decrement_ref_count2(output_file_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_545 = come_decrement_ref_count2(tmp_file_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_547),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_587,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(argv[1],"new")&&argc==3) {
        Value_597=new_project(argc,argv);
        if(        !Value_597) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"run")&&argc==2) {
        Value_598=run_project(argc,argv);
        if(        !Value_598) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"header")&&argc==2) {
        Value_599=make_header_project(argc,argv);
        if(        !Value_599) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"compile")&&argc==2) {
        Value_600=compile_project(argc,argv);
        if(        !Value_600) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"debug")&&argc==2) {
        Value_601=debug_run_project(argc,argv);
        if(        !Value_601) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"clean")&&argc==2) {
        Value_602=clean_project(argc,argv);
        if(        !Value_602) {
            return (_Bool)0;
        }
        else {
        }
    }
    else if(    charp_operator_equals(argv[1],"install")&&argc>=2) {
        if(        argc==2) {
            Value_603=install_project(argc,argv,"/usr/local");
            if(            !Value_603) {
                return (_Bool)0;
            }
            else {
            }
        }
        else if(        argc>=3) {
            Value_604=install_project(argc,argv,argv[2]);
            if(            !Value_604) {
                return (_Bool)0;
            }
            else {
            }
        }
    }
    else {
        gProgramName=argv[0];
        start_num_605=1;
        output_file_name_str_606=((void*)0);
        clang_option_607=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 726, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        linker_option_608=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 727, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        cpp_option_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 728, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(cpp_option_609,"-U__GNUC__");
        files_610=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 730, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        object_files_611=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 731, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        output_object_file_612=(_Bool)0;
        output_cpp_file_613=(_Bool)0;
        output_source_file_flag_614=(_Bool)0;
        output_object_file_flag_615=(_Bool)1;
        output_file_name_616=(char*)come_increment_ref_count(output_file_name_str_606);
        verbose_617=(_Bool)0;
        come_debug_618=(_Bool)0;
        come_malloc_619=(_Bool)0;
        m5stack_cpp_620=(_Bool)0;
        pico_cpp_621=(_Bool)0;
        gcc_compiler_622=(_Bool)0;
        for(        i_623=start_num_605;        i_623<argc;        i_623++        ){
            ext_name_624=(char*)come_increment_ref_count(xextname(argv[i_623]));
            if(            charp_operator_equals(argv[i_623],"-o")&&i_623+1<argc) {
                __dec_obj221=output_file_name_616;
                output_file_name_616=(char*)come_increment_ref_count(__builtin_string(argv[i_623+1]));
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_623++;
            }
            else if(            charp_operator_equals(argv[i_623],"-e")&&i_623+1<argc) {
                buffer_append_str(linker_option_608,((char*)(__right_value724=xsprintf("-e \%s",((char*)(__right_value723=charp_to_string(argv[i_623+1])))))));
                __right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_623++;
            }
            else if(            charp_operator_equals(argv[i_623],"-str")) {
                gComeStr=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_623],"-pthread")) {
                gComePthread=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_623],"-gc")) {
                gComeGC=(_Bool)1;
                buffer_append_format(cpp_option_609,((char*)(__right_value725=xsprintf(" -DENABLE_GC "))));
                __right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-gcc")) {
                gcc_compiler_622=(_Bool)1;
                CC="gcc";
            }
            else if(            charp_operator_equals(argv[i_623],"-pico")) {
                output_source_file_flag_614=(_Bool)1;
                output_object_file_flag_615=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_625=getenv("PICO_SDK_PATH");
                __dec_obj222=cpp_option_609;
                cpp_option_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 773, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_609,((char*)(__right_value730=xsprintf(" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \%s/src/rp2_common/hardware_sync/include \$(find \%s -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__",((char*)(__right_value728=charp_to_string(env_625))),((char*)(__right_value729=charp_to_string(env_625)))))));
                __right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value729 = come_decrement_ref_count2(__right_value729, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                create_pico_version_header();
                pico_cpp_621=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_623],"-m5stack")) {
                m5stack_cpp_620=(_Bool)1;
                output_source_file_flag_614=(_Bool)1;
                output_object_file_flag_615=(_Bool)0;
                gComeOriginalSourcePosition=(_Bool)0;
                env_626=getenv("IDF_PATH");
                __dec_obj223=cpp_option_609;
                cpp_option_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 784, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj223,buffer_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_format(cpp_option_609,((char*)(__right_value754=xsprintf(" -I\%s/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\%s/components/freertos/include -I\%s/components/esp32/include -I\%s/components/driver/include -I\%s/components/lwip/include -I\%s/components/freertos/FreeRTOS-Kernel/include -I\%s/components/freertos/config/include/freertos -I\%s/components/freertos/config/xtensa/include -I\%s/components/xtensa/include -I\%s/components/xtensa/esp32/include -I\%s/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\%s/components/esp_hw_support/include -I\%s/components/soc/esp32/include/ -I\%s/components/esp_common/include/components $(find \%s/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\%s/components/esp_common/include/ -I\%s/components/soc/esp32/register/soc/ -I\%s/components/soc/esp32/register -I\%s/components/heap/include -I\%s/components/hal/include -I\%s/components/newlib/platform_include -D__M5STACK__",((char*)(__right_value733=charp_to_string(getenv("HOME")))),((char*)(__right_value734=charp_to_string(env_626))),((char*)(__right_value735=charp_to_string(env_626))),((char*)(__right_value736=charp_to_string(env_626))),((char*)(__right_value737=charp_to_string(env_626))),((char*)(__right_value738=charp_to_string(env_626))),((char*)(__right_value739=charp_to_string(env_626))),((char*)(__right_value740=charp_to_string(env_626))),((char*)(__right_value741=charp_to_string(env_626))),((char*)(__right_value742=charp_to_string(env_626))),((char*)(__right_value743=charp_to_string(env_626))),((char*)(__right_value744=charp_to_string(env_626))),((char*)(__right_value745=charp_to_string(env_626))),((char*)(__right_value746=charp_to_string(env_626))),((char*)(__right_value747=charp_to_string(env_626))),((char*)(__right_value748=charp_to_string(env_626))),((char*)(__right_value749=charp_to_string(env_626))),((char*)(__right_value750=charp_to_string(env_626))),((char*)(__right_value751=charp_to_string(env_626))),((char*)(__right_value752=charp_to_string(env_626))),((char*)(__right_value753=charp_to_string(env_626)))))),"/usr/local/");
                __right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value751 = come_decrement_ref_count2(__right_value751, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_623+1<argc&&charp_operator_equals(argv[i_623],"-target")) {
                buffer_append_str(clang_option_607,((char*)(__right_value756=xsprintf("-target \%s",((char*)(__right_value755=charp_to_string(argv[i_623+1])))))));
                __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_623++;
            }
            else if(            i_623+1<argc&&charp_operator_equals(argv[i_623],"-T")) {
                buffer_append_str(clang_option_607,((char*)(__right_value758=xsprintf(" -T \%s ",((char*)(__right_value757=charp_to_string(argv[i_623+1])))))));
                __right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_623++;
            }
            else if(            charp_operator_equals(argv[i_623],"-net")) {
                gComeNet=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_623],"-cg")) {
                come_debug_618=(_Bool)1;
                buffer_append_str(clang_option_607,"-g ");
            }
            else if(            charp_operator_equals(argv[i_623],"-C")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value760=xsprintf("\%s ",((char*)(__right_value759=charp_to_string(argv[i_623])))))));
                __right_value759 = come_decrement_ref_count2(__right_value759, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-M")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value762=xsprintf("\%s ",((char*)(__right_value761=charp_to_string(argv[i_623])))))));
                __right_value761 = come_decrement_ref_count2(__right_value761, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-MM")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value764=xsprintf("\%s ",((char*)(__right_value763=charp_to_string(argv[i_623])))))));
                __right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-dM")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value766=xsprintf("\%s ",((char*)(__right_value765=charp_to_string(argv[i_623])))))));
                __right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-dD")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value768=xsprintf("\%s ",((char*)(__right_value767=charp_to_string(argv[i_623])))))));
                __right_value767 = come_decrement_ref_count2(__right_value767, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-H")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value770=xsprintf("\%s ",((char*)(__right_value769=charp_to_string(argv[i_623])))))));
                __right_value769 = come_decrement_ref_count2(__right_value769, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-P")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value772=xsprintf("\%s ",((char*)(__right_value771=charp_to_string(argv[i_623])))))));
                __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-nostdinc")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value774=xsprintf("\%s ",((char*)(__right_value773=charp_to_string(argv[i_623])))))));
                __right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-CC")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value776=xsprintf("\%s ",((char*)(__right_value775=charp_to_string(argv[i_623])))))));
                __right_value775 = come_decrement_ref_count2(__right_value775, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value776 = come_decrement_ref_count2(__right_value776, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            i_623+1<argc&&charp_operator_equals(argv[i_623],"-target")) {
                buffer_append_str(clang_option_607,((char*)(__right_value778=xsprintf("-target \%s",((char*)(__right_value777=charp_to_string(argv[i_623+1])))))));
                __right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_623++;
            }
            else if(            i_623+1<argc&&charp_operator_equals(argv[i_623],"-include")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value780=xsprintf("-iclude \%s",((char*)(__right_value779=charp_to_string(argv[i_623+1])))))));
                __right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_623++;
            }
            else if(            i_623+1<argc&&charp_operator_equals(argv[i_623],"-isystem")) {
                buffer_append_str(cpp_option_609,((char*)(__right_value782=xsprintf("-isystem \%s",((char*)(__right_value781=charp_to_string(argv[i_623+1])))))));
                __right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_607,((char*)(__right_value784=xsprintf("-isystem \%s",((char*)(__right_value783=charp_to_string(argv[i_623+1])))))));
                __right_value783 = come_decrement_ref_count2(__right_value783, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_623++;
            }
            else if(            i_623+1<argc&&charp_operator_equals(argv[i_623],"-T")) {
                buffer_append_str(clang_option_607,((char*)(__right_value786=xsprintf(" -T \%s ",((char*)(__right_value785=charp_to_string(argv[i_623+1])))))));
                __right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                i_623++;
            }
            else if(            charp_operator_equals(argv[i_623],"-common-header")) {
                gCommonHeader=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_623],"-original-position")) {
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            (_elif_conditional4=(string_operator_equals(((char*)(__right_value787=charp_operator_load_range_element(argv[i_623],0,2))),"-O"))),            (__right_value787 = come_decrement_ref_count2(__right_value787, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional4) {
                buffer_append_str(clang_option_607,((char*)(__right_value789=xsprintf(" \%s ",((char*)(__right_value788=charp_to_string(argv[i_623])))))));
                __right_value788 = come_decrement_ref_count2(__right_value788, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_debug_618=(_Bool)0;
            }
            else if(            (_elif_conditional5=(string_operator_equals(((char*)(__right_value790=charp_operator_load_range_element(argv[i_623],0,2))),"-D"))),            (__right_value790 = come_decrement_ref_count2(__right_value790, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional5) {
                buffer_append_str(cpp_option_609,((char*)(__right_value792=xsprintf(" \%s ",((char*)(__right_value791=charp_to_string(argv[i_623])))))));
                __right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value792 = come_decrement_ref_count2(__right_value792, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_607,((char*)(__right_value794=xsprintf(" \%s ",((char*)(__right_value793=charp_to_string(argv[i_623])))))));
                __right_value793 = come_decrement_ref_count2(__right_value793, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            (_elif_conditional6=(string_operator_equals(((char*)(__right_value795=charp_operator_load_range_element(argv[i_623],0,2))),"-U"))),            (__right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _elif_conditional6) {
                buffer_append_str(cpp_option_609,((char*)(__right_value797=xsprintf(" \%s ",((char*)(__right_value796=charp_to_string(argv[i_623])))))));
                __right_value796 = come_decrement_ref_count2(__right_value796, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(clang_option_607,((char*)(__right_value799=xsprintf(" \%s ",((char*)(__right_value798=charp_to_string(argv[i_623])))))));
                __right_value798 = come_decrement_ref_count2(__right_value798, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value799 = come_decrement_ref_count2(__right_value799, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-g")) {
                buffer_append_str(clang_option_607,"-g ");
            }
            else if(            charp_operator_equals(argv[i_623],"-v")) {
                buffer_append_str(clang_option_607,"-v ");
                buffer_append_str(cpp_option_609,"-v ");
                verbose_617=(_Bool)1;
            }
            else if(            strlen(argv[i_623])>=2&&memcmp(argv[i_623],"-I",strlen("-I"))==0) {
                buffer_append_str(cpp_option_609,((char*)(__right_value801=charp_operator_add(" ",((char*)(__right_value800=charp_operator_add(argv[i_623]," ")))))));
                __right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(argv[i_623],"-gdwarf-4")) {
                buffer_append_str(clang_option_607,"-gdwarf-4 ");
            }
            else if(            charp_operator_equals(argv[i_623],"-s")||charp_operator_equals(argv[i_623],"-S")) {
                output_source_file_flag_614=(_Bool)1;
                gComeOriginalSourcePosition=(_Bool)0;
            }
            else if(            charp_operator_equals(argv[i_623],"-c")) {
                output_object_file_612=(_Bool)1;
            }
            else if(            charp_operator_equals(argv[i_623],"-E")) {
                output_cpp_file_613=(_Bool)1;
            }
            else if(            argv[i_623][0]==45) {
                buffer_append_str(clang_option_607,((char*)(__right_value802=charp_operator_add(argv[i_623]," "))));
                __right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            strlen(argv[i_623])>2&&memcmp(argv[i_623]+strlen(argv[i_623])-2,".o",2)==0) {
                list$1charphp_push_back(object_files_611,(char*)come_increment_ref_count(__builtin_string(argv[i_623])));
            }
            else if(            strlen(argv[i_623])>2&&memcmp(argv[i_623]+strlen(argv[i_623])-2,".a",2)==0) {
                list$1charphp_push_back(object_files_611,(char*)come_increment_ref_count(__builtin_string(argv[i_623])));
            }
            else if(            string_operator_equals(ext_name_624,"c")) {
                list$1charphp_push_back(files_610,(char*)come_increment_ref_count(__builtin_string(argv[i_623])));
            }
            else {
                buffer_append_str(clang_option_607,((char*)(__right_value806=charp_operator_add(argv[i_623]," "))));
                __right_value806 = come_decrement_ref_count2(__right_value806, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            ext_name_624 = come_decrement_ref_count2(ext_name_624, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        output_source_file_flag_614=(_Bool)1;
        gComeOriginalSourcePosition=(_Bool)0;
        gComeDebug=come_debug_618;
        gComeMalloc=come_malloc_619;
        for(        o2_saved_627=(struct list$1charph*)come_increment_ref_count((files_610)),it_628=list$1charphp_begin((o2_saved_627));        !list$1charphp_end((o2_saved_627));        it_628=list$1charphp_next((o2_saved_627))        ){
            memset(&info_629,0,sizeof(struct sInfo));
            Value_630=fopen(it_628,"r");
            if(            Value_630) {
                fclose(Value_630);
            }
            else {
                come_call_finalizer3((&info_629),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                continue;
            }
            __dec_obj224=info_629.sname;
            info_629.sname=(char*)come_increment_ref_count(__builtin_string(it_628));
            __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_629.sline=1;
            info_629.err_num=0;
            __dec_obj225=info_629.clang_option;
            info_629.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_607));
            __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj226=info_629.cpp_option;
            info_629.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_609));
            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj227=info_629.linker_option;
            info_629.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_608));
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_629.no_output_err=(_Bool)0;
            __dec_obj228=info_629.funcs;
            info_629.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunphp_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 1075, "struct map$2charphsFunph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj228,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj229=info_629.struct_definition;
            info_629.struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 1076, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj229,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj230=info_629.uniq_definition;
            info_629.uniq_definition=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "02transpile.c", 1077, "struct map$2charphcharph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj230,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj231=info_629.previous_struct_definition;
            info_629.previous_struct_definition=(struct map$2charphbufferph*)come_increment_ref_count(map$2charphbufferphp_initialize((struct map$2charphbufferph*)come_increment_ref_count((struct map$2charphbufferph*)come_calloc(1, sizeof(struct map$2charphbufferph)*(1), "02transpile.c", 1078, "struct map$2charphbufferph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj231,map$2charphbufferph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj232=info_629.generics_funcs;
            info_629.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunphp_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 1079, "struct map$2charphsGenericsFunph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj232,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj233=info_629.classes;
            info_629.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1080, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj233,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj234=info_629.modules;
            info_629.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModulephp_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 1081, "struct map$2charphsClassModuleph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj234,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj235=info_629.types;
            info_629.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypephp_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 1082, "struct map$2charphsTypeph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj235,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj236=info_629.module;
            info_629.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 1083, "struct sModule*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj236,sModule_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj237=info_629.right_value_objects;
            info_629.right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "02transpile.c", 1084, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
            come_call_finalizer3(__dec_obj237,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj238=info_629.stack;
            info_629.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 1085, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj238,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj239=info_629.gv_table;
            info_629.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1086, "struct sVarTable*", (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)));
            come_call_finalizer3(__dec_obj239,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            lv_table_631=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 1087, "struct sVarTable*", (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)));
            info_629.lv_table=lv_table_631;
            __dec_obj240=info_629.generics_type_names;
            info_629.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1089, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj240,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj241=info_629.method_generics_type_names;
            info_629.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 1090, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj241,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj242=info_629.generics_classes;
            info_629.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassphp_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 1091, "struct map$2charphsClassph*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj242,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
            info_629.verbose=verbose_617;
            __dec_obj243=info_629.outputed_class;
            info_629.outputed_class=(struct map$2charphint*)come_increment_ref_count(map$2charphintp_initialize((struct map$2charphint*)come_increment_ref_count((struct map$2charphint*)come_calloc(1, sizeof(struct map$2charphint)*(1), "02transpile.c", 1093, "struct map$2charphint*", (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj243,map$2charphint_finalize, 0, 0, 0, 0, (void*)0);
            info_629.m5stack_cpp=m5stack_cpp_620;
            info_629.pico_cpp=pico_cpp_621;
            info_629.gcc_compiler=gcc_compiler_622;
            init_classes(&info_629);
            clear_tmp_file(&info_629);
            Value_632=cpp(&info_629);
            if(            !Value_632) {
                printf("%s %d: transpile failed\n",info_629.sname,info_629.sline);
                exit(2);
            }
            else {
            }
            __dec_obj244=info_629.original_source;
            info_629.original_source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value846=charp_read(((char*)(__right_value845=xsprintf("%s",it_628))))))));
            come_call_finalizer3(__dec_obj244,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value845 = come_decrement_ref_count2(__right_value845, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj245=info_629.source;
            info_629.source=(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value849=charp_read(((char*)(__right_value848=xsprintf("%s.i",it_628))))))));
            come_call_finalizer3(__dec_obj245,buffer_finalize, 0, 0, 0, 0, (void*)0);
            __right_value848 = come_decrement_ref_count2(__right_value848, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value849 = come_decrement_ref_count2(__right_value849, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info_629.p=info_629.source->buf;
            info_629.head=info_629.source->buf;
            if(            output_file_name_616) {
                __dec_obj246=info_629.output_file_name;
                info_629.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_616));
                __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj247=info_629.output_file_name;
                info_629.output_file_name=((void*)0);
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            Value_633=output_cpp_file_613;
            if(            !Value_633) {
                transpile_v5(&info_629);
                Value_634=output_source_file_v3(&info_629);
                if(                !Value_634) {
                    printf("%s %d: output source file faield\n",info_629.sname,info_629.sline);
                    exit(2);
                }
                else {
                }
                if(                info_629.err_num>0) {
                    printf("transpile error. err num %d\n",info_629.err_num);
                    exit(2);
                }
                else {
                    Value_635=output_object_file_flag_615;
                    if(                    Value_635) {
                        Value_636=compile(&info_629,output_object_file_612,object_files_611);
                        if(                        !Value_636) {
                            printf("%s %d: compile faield\n",info_629.sname,info_629.sline);
                            exit(27);
                        }
                        else {
                        }
                    }
                    else {
                    }
                }
            }
            else {
            }
            if(            output_cpp_file_613) {
            }
            else if(            info_629.err_num>0) {
            }
            else if(            output_source_file_flag_614) {
                clear_tmp_file_without_object_file_and_ccfile(&info_629);
            }
            else {
                clear_tmp_file_without_object_file(&info_629);
            }
            come_call_finalizer3((&info_629),sInfo_finalize, 1, 0, 0, 0, (void*)0);
            come_call_finalizer3(lv_table_631,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_627,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_object_file_612&&!output_cpp_file_613&&(list$1charphp_length(files_610)>0||list$1charphp_length(object_files_611)>0)) {
            memset(&info_637,0,sizeof(struct sInfo));
            __dec_obj248=info_637.sname;
            info_637.sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value852=list$1charphp_operator_load_element(files_610,0)))));
            __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value852 = come_decrement_ref_count2(__right_value852, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj249=info_637.clang_option;
            info_637.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_607));
            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj250=info_637.linker_option;
            info_637.linker_option=(char*)come_increment_ref_count(buffer_to_string(linker_option_608));
            __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            info_637.verbose=verbose_617;
            if(            output_file_name_616) {
                __dec_obj251=info_637.output_file_name;
                info_637.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_616));
                __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj252=info_637.output_file_name;
                info_637.output_file_name=((void*)0);
                __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            output_object_file_flag_615) {
                Value_641=linker(&info_637,object_files_611);
                if(                !Value_641) {
                    printf("%s %d: linker faield\n",info_637.sname,info_637.sline);
                    exit(13);
                }
                else {
                }
            }
            if(            !output_cpp_file_613&&!output_source_file_flag_614) {
                clear_tmp_file(&info_637);
            }
            come_call_finalizer3((&info_637),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        }
        output_file_name_str_606 = come_decrement_ref_count2(output_file_name_str_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(clang_option_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(linker_option_608,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_611,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_616 = come_decrement_ref_count2(output_file_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    return 0;
}

static struct map$2charphsFunph* map$2charphsFunphp_initialize(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
int i_548;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1charp* __dec_obj116;
struct map$2charphsFunph* __result296__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value628=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value629=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "struct sFun**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value630=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_548=0;    i_548<128;    i_548++    ){
        self->item_existance[i_548]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj116=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj116,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result295__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_549;
int i_550;
    for(    i_549=0;    i_549<self->size;    i_549++    ){
        if(        self->item_existance[i_549]) {
            if(            1) {
                come_call_finalizer3(self->items[i_549],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_550=0;    i_550<self->size;    i_550++    ){
        if(        self->item_existance[i_550]) {
            if(            1) {
                self->keys[i_550] = come_decrement_ref_count2(self->keys[i_550], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj117;
struct sType* __dec_obj118;
struct list$1voidph* __dec_obj119;
struct list$1charph* __dec_obj120;
struct list$1charph* __dec_obj121;
struct sType* __dec_obj122;
struct sBlock* __dec_obj123;
struct buffer* __dec_obj126;
struct buffer* __dec_obj127;
struct buffer* __dec_obj128;
struct buffer* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
char* __dec_obj132;
char* __dec_obj133;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj117=self->mName;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj118=self->mResultType;
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj119=self->mParamTypes;
            come_call_finalizer3(__dec_obj119,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj120=self->mParamNames;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj121=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj122=self->mLambdaType;
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj123=self->mBlock;
            come_call_finalizer3(__dec_obj123,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj126=self->mSource;
            come_call_finalizer3(__dec_obj126,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj127=self->mSourceHead;
            come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj128=self->mSourceHead2;
            come_call_finalizer3(__dec_obj128,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj129=self->mSourceDefer;
            come_call_finalizer3(__dec_obj129,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj130=self->mComeHeader;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj131=self->mDeclareSName;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj132=self->mAttribute;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj133=self->mFunAttribute;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj124;
struct sVarTable* __dec_obj125;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj124=self->mNodes;
            come_call_finalizer3(__dec_obj124,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj125=self->mVarTable;
            come_call_finalizer3(__dec_obj125,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_551;
int i_552;
    for(    i_551=0;    i_551<self->size;    i_551++    ){
        if(        self->item_existance[i_551]) {
            if(            1) {
                come_call_finalizer3(self->items[i_551],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_552=0;    i_552<self->size;    i_552++    ){
        if(        self->item_existance[i_552]) {
            if(            1) {
                self->keys[i_552] = come_decrement_ref_count2(self->keys[i_552], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphbufferph* map$2charphbufferphp_initialize(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
int i_553;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1charp* __dec_obj135;
struct map$2charphbufferph* __result297__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value635=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value636=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "struct buffer**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value637=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_553=0;    i_553<128;    i_553++    ){
        self->item_existance[i_553]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj135=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj135,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphbufferphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void map$2charphbufferphp_finalize(struct map$2charphbufferph* self){
int i_554;
int i_555;
    for(    i_554=0;    i_554<self->size;    i_554++    ){
        if(        self->item_existance[i_554]) {
            if(            1) {
                come_call_finalizer3(self->items[i_554],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_555=0;    i_555<self->size;    i_555++    ){
        if(        self->item_existance[i_555]) {
            if(            1) {
                self->keys[i_555] = come_decrement_ref_count2(self->keys[i_555], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphbufferph_finalize(struct map$2charphbufferph* self){
int i_556;
int i_557;
    for(    i_556=0;    i_556<self->size;    i_556++    ){
        if(        self->item_existance[i_556]) {
            if(            1) {
                come_call_finalizer3(self->items[i_556],buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_557=0;    i_557<self->size;    i_557++    ){
        if(        self->item_existance[i_557]) {
            if(            1) {
                self->keys[i_557] = come_decrement_ref_count2(self->keys[i_557], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
int i_558;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct list$1charp* __dec_obj137;
struct map$2charphcharph* __result298__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value642=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value643=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "char**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value644=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_558=0;    i_558<128;    i_558++    ){
        self->item_existance[i_558]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj137=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj137,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_559;
int i_560;
    for(    i_559=0;    i_559<self->size;    i_559++    ){
        if(        self->item_existance[i_559]) {
            if(            1) {
                self->items[i_559] = come_decrement_ref_count2(self->items[i_559], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_560=0;    i_560<self->size;    i_560++    ){
        if(        self->item_existance[i_560]) {
            if(            1) {
                self->keys[i_560] = come_decrement_ref_count2(self->keys[i_560], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_561;
int i_562;
    for(    i_561=0;    i_561<self->size;    i_561++    ){
        if(        self->item_existance[i_561]) {
            if(            1) {
                self->items[i_561] = come_decrement_ref_count2(self->items[i_561], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_562=0;    i_562<self->size;    i_562++    ){
        if(        self->item_existance[i_562]) {
            if(            1) {
                self->keys[i_562] = come_decrement_ref_count2(self->keys[i_562], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
int i_563;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1charp* __dec_obj140;
struct map$2charphsGenericsFunph* __result299__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value651=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value652=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value653=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_563=0;    i_563<128;    i_563++    ){
        self->item_existance[i_563]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj140=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj140,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_564;
int i_565;
    for(    i_564=0;    i_564<self->size;    i_564++    ){
        if(        self->item_existance[i_564]) {
            if(            1) {
                come_call_finalizer3(self->items[i_564],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_565=0;    i_565<self->size;    i_565++    ){
        if(        self->item_existance[i_565]) {
            if(            1) {
                self->keys[i_565] = come_decrement_ref_count2(self->keys[i_565], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj141;
struct list$1charph* __dec_obj142;
struct list$1charph* __dec_obj143;
char* __dec_obj144;
struct sType* __dec_obj145;
struct list$1voidph* __dec_obj146;
struct list$1charph* __dec_obj147;
struct list$1charph* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj141=self->mImplType;
            come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj142=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj142,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj143=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj143,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj144=self->mName;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj145=self->mResultType;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj146=self->mParamTypes;
            come_call_finalizer3(__dec_obj146,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj147=self->mParamNames;
            come_call_finalizer3(__dec_obj147,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj148=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj148,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj149=self->mBlock;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj150=self->mGenericsSName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_566;
int i_567;
    for(    i_566=0;    i_566<self->size;    i_566++    ){
        if(        self->item_existance[i_566]) {
            if(            1) {
                come_call_finalizer3(self->items[i_566],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_567=0;    i_567<self->size;    i_567++    ){
        if(        self->item_existance[i_567]) {
            if(            1) {
                self->keys[i_567] = come_decrement_ref_count2(self->keys[i_567], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassphp_initialize(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
int i_568;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1charp* __dec_obj152;
struct map$2charphsClassph* __result300__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value658=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value659=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "struct sClass**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value660=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_568=0;    i_568<128;    i_568++    ){
        self->item_existance[i_568]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj152=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj152,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_569;
int i_570;
    for(    i_569=0;    i_569<self->size;    i_569++    ){
        if(        self->item_existance[i_569]) {
            if(            1) {
                come_call_finalizer3(self->items[i_569],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_570=0;    i_570<self->size;    i_570++    ){
        if(        self->item_existance[i_570]) {
            if(            1) {
                self->keys[i_570] = come_decrement_ref_count2(self->keys[i_570], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_571;
int i_572;
    for(    i_571=0;    i_571<self->size;    i_571++    ){
        if(        self->item_existance[i_571]) {
            if(            1) {
                come_call_finalizer3(self->items[i_571],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_572=0;    i_572<self->size;    i_572++    ){
        if(        self->item_existance[i_572]) {
            if(            1) {
                self->keys[i_572] = come_decrement_ref_count2(self->keys[i_572], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModulephp_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__=(void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
int i_573;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1charp* __dec_obj154;
struct map$2charphsClassModuleph* __result301__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value665=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value666=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "struct sClassModule**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value667=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_573=0;    i_573<128;    i_573++    ){
        self->item_existance[i_573]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj154=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj154,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
int i_574;
int i_575;
    for(    i_574=0;    i_574<self->size;    i_574++    ){
        if(        self->item_existance[i_574]) {
            if(            1) {
                come_call_finalizer3(self->items[i_574],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_575=0;    i_575<self->size;    i_575++    ){
        if(        self->item_existance[i_575]) {
            if(            1) {
                self->keys[i_575] = come_decrement_ref_count2(self->keys[i_575], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj155;
char* __dec_obj156;
struct list$1charph* __dec_obj157;
char* __dec_obj158;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj155=self->mName;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj156=self->mText;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj157=self->mParams;
            come_call_finalizer3(__dec_obj157,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj158=self->mSName;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_576;
int i_577;
    for(    i_576=0;    i_576<self->size;    i_576++    ){
        if(        self->item_existance[i_576]) {
            if(            1) {
                come_call_finalizer3(self->items[i_576],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_577=0;    i_577<self->size;    i_577++    ){
        if(        self->item_existance[i_577]) {
            if(            1) {
                self->keys[i_577] = come_decrement_ref_count2(self->keys[i_577], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypephp_initialize(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
int i_578;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1charp* __dec_obj160;
struct map$2charphsTypeph* __result302__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value672=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value673=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "struct sType**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value674=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_578=0;    i_578<128;    i_578++    ){
        self->item_existance[i_578]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj160=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj160,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_579;
int i_580;
    for(    i_579=0;    i_579<self->size;    i_579++    ){
        if(        self->item_existance[i_579]) {
            if(            1) {
                come_call_finalizer3(self->items[i_579],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_580=0;    i_580<self->size;    i_580++    ){
        if(        self->item_existance[i_580]) {
            if(            1) {
                self->keys[i_580] = come_decrement_ref_count2(self->keys[i_580], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_581;
int i_582;
    for(    i_581=0;    i_581<self->size;    i_581++    ){
        if(        self->item_existance[i_581]) {
            if(            1) {
                come_call_finalizer3(self->items[i_581],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_582=0;    i_582<self->size;    i_582++    ){
        if(        self->item_existance[i_582]) {
            if(            1) {
                self->keys[i_582] = come_decrement_ref_count2(self->keys[i_582], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj163;
struct buffer* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
struct buffer* __dec_obj167;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj163=self->mSourceHead;
            come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj164=self->mSource;
            come_call_finalizer3(__dec_obj164,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj165=self->mLastCode;
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj166=self->mLastCode2;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj167=self->mHeader;
            come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result303__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_583;
struct list_item$1CVALUEph* prev_it_584;
    it_583=self->head;
    while(it_583!=((void*)0)) {
        prev_it_584=it_583;
        it_583=it_583->next;
        come_call_finalizer3(prev_it_584,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj169;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj169=self->item;
            come_call_finalizer3(__dec_obj169,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj170;
struct sType* __dec_obj171;
char* __dec_obj172;
char* __dec_obj173;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj170=self->c_value;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj171=self->type;
            come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj172=self->c_value_without_right_value_objects;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj173=self->c_value_without_cast_object_value;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_585;
struct list_item$1CVALUEph* prev_it_586;
    it_585=self->head;
    while(it_585!=((void*)0)) {
        prev_it_586=it_585;
        it_585=it_585->next;
        come_call_finalizer3(prev_it_586,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphint* map$2charphintp_initialize(struct map$2charphint* self){
void* __result_obj__=(void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
int i_588;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct list$1charp* __dec_obj179;
struct map$2charphint* __result304__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value695=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(int*)come_increment_ref_count(((int*)(__right_value696=(int*)come_calloc(1, sizeof(int)*(1*(128)), "/usr/local/include/comelang.h", 2480, "int*", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value697=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_588=0;    i_588<128;    i_588++    ){
        self->item_existance[i_588]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj179=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj179,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphintp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void map$2charphintp_finalize(struct map$2charphint* self){
int i_589;
int i_590;
    for(    i_589=0;    i_589<self->size;    i_589++    ){
        if(        self->item_existance[i_589]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_590=0;    i_590<self->size;    i_590++    ){
        if(        self->item_existance[i_590]) {
            if(            1) {
                self->keys[i_590] = come_decrement_ref_count2(self->keys[i_590], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphint_finalize(struct map$2charphint* self){
int i_591;
int i_592;
    for(    i_591=0;    i_591<self->size;    i_591++    ){
        if(        self->item_existance[i_591]) {
            if(            0) {
            }
        }
    }
    come_free((char*)self->items);
    for(    i_592=0;    i_592<self->size;    i_592++    ){
        if(        self->item_existance[i_592]) {
            if(            1) {
                self->keys[i_592] = come_decrement_ref_count2(self->keys[i_592], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sInfo_finalize(struct sInfo* self){
struct buffer* __dec_obj184;
struct buffer* __dec_obj185;
char* __dec_obj186;
char* __dec_obj187;
char* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
char* __dec_obj193;
struct map$2charphsFunph* __dec_obj194;
struct map$2charphsGenericsFunph* __dec_obj195;
struct map$2charphsClassph* __dec_obj196;
struct map$2charphsClassModuleph* __dec_obj197;
struct map$2charphsTypeph* __dec_obj198;
struct map$2charphsClassph* __dec_obj199;
struct map$2charphbufferph* __dec_obj200;
struct map$2charphbufferph* __dec_obj201;
struct sModule* __dec_obj202;
struct sType* __dec_obj203;
struct list$1voidph* __dec_obj204;
struct sType* __dec_obj205;
struct list$1voidph* __dec_obj206;
struct list$1CVALUEph* __dec_obj207;
struct sType* __dec_obj208;
struct sType* __dec_obj209;
struct sVarTable* __dec_obj210;
struct list$1charph* __dec_obj211;
struct list$1charph* __dec_obj212;
struct sType* __dec_obj213;
char* __dec_obj214;
struct sType* __dec_obj215;
struct map$2charphcharph* __dec_obj216;
char* __dec_obj217;
struct list$1voidph* __dec_obj218;
struct map$2charphint* __dec_obj219;
struct map$2charphcharph* __dec_obj220;
    if(    self!=((void*)0)&&self->original_source!=((void*)0)) {
        if(        self->original_source==gComeFunResultObject) {
            __dec_obj184=self->original_source;
            come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj185=self->source;
            come_call_finalizer3(__dec_obj185,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj186=self->sname;
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->sname_at_head!=((void*)0)) {
        if(        self->sname_at_head==gComeFunResultObject) {
            __dec_obj187=self->sname_at_head;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname_at_head = come_decrement_ref_count2(self->sname_at_head, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->base_sname!=((void*)0)) {
        if(        self->base_sname==gComeFunResultObject) {
            __dec_obj188=self->base_sname;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->err_line!=((void*)0)) {
        if(        self->err_line==gComeFunResultObject) {
            __dec_obj189=self->err_line;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->clang_option!=((void*)0)) {
        if(        self->clang_option==gComeFunResultObject) {
            __dec_obj190=self->clang_option;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        if(        self->cpp_option==gComeFunResultObject) {
            __dec_obj191=self->cpp_option;
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->linker_option!=((void*)0)) {
        if(        self->linker_option==gComeFunResultObject) {
            __dec_obj192=self->linker_option;
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->linker_option = come_decrement_ref_count2(self->linker_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_fun_name!=((void*)0)) {
        if(        self->come_fun_name==gComeFunResultObject) {
            __dec_obj193=self->come_fun_name;
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->funcs!=((void*)0)) {
        if(        self->funcs==gComeFunResultObject) {
            __dec_obj194=self->funcs;
            come_call_finalizer3(__dec_obj194,map$2charphsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        if(        self->generics_funcs==gComeFunResultObject) {
            __dec_obj195=self->generics_funcs;
            come_call_finalizer3(__dec_obj195,map$2charphsGenericsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->classes!=((void*)0)) {
        if(        self->classes==gComeFunResultObject) {
            __dec_obj196=self->classes;
            come_call_finalizer3(__dec_obj196,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->modules!=((void*)0)) {
        if(        self->modules==gComeFunResultObject) {
            __dec_obj197=self->modules;
            come_call_finalizer3(__dec_obj197,map$2charphsClassModuleph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->types!=((void*)0)) {
        if(        self->types==gComeFunResultObject) {
            __dec_obj198=self->types;
            come_call_finalizer3(__dec_obj198,map$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        if(        self->generics_classes==gComeFunResultObject) {
            __dec_obj199=self->generics_classes;
            come_call_finalizer3(__dec_obj199,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->struct_definition!=((void*)0)) {
        if(        self->struct_definition==gComeFunResultObject) {
            __dec_obj200=self->struct_definition;
            come_call_finalizer3(__dec_obj200,map$2charphbufferph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->struct_definition,map$2charphbufferphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->previous_struct_definition!=((void*)0)) {
        if(        self->previous_struct_definition==gComeFunResultObject) {
            __dec_obj201=self->previous_struct_definition;
            come_call_finalizer3(__dec_obj201,map$2charphbufferph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->previous_struct_definition,map$2charphbufferphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module!=((void*)0)) {
        if(        self->module==gComeFunResultObject) {
            __dec_obj202=self->module;
            come_call_finalizer3(__dec_obj202,sModule_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj203=self->type;
            come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        if(        self->right_value_objects==gComeFunResultObject) {
            __dec_obj204=self->right_value_objects;
            come_call_finalizer3(__dec_obj204,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->right_value_objects,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type!=((void*)0)) {
        if(        self->generics_type==gComeFunResultObject) {
            __dec_obj205=self->generics_type;
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj206=self->method_generics_types;
            come_call_finalizer3(__dec_obj206,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->stack!=((void*)0)) {
        if(        self->stack==gComeFunResultObject) {
            __dec_obj207=self->stack;
            come_call_finalizer3(__dec_obj207,list$1CVALUEph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        if(        self->come_function_result_type==gComeFunResultObject) {
            __dec_obj208=self->come_function_result_type;
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        if(        self->come_method_block_function_result_type==gComeFunResultObject) {
            __dec_obj209=self->come_method_block_function_result_type;
            come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->gv_table!=((void*)0)) {
        if(        self->gv_table==gComeFunResultObject) {
            __dec_obj210=self->gv_table;
            come_call_finalizer3(__dec_obj210,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        if(        self->generics_type_names==gComeFunResultObject) {
            __dec_obj211=self->generics_type_names;
            come_call_finalizer3(__dec_obj211,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        if(        self->method_generics_type_names==gComeFunResultObject) {
            __dec_obj212=self->method_generics_type_names;
            come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->impl_type!=((void*)0)) {
        if(        self->impl_type==gComeFunResultObject) {
            __dec_obj213=self->impl_type;
            come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        if(        self->output_file_name==gComeFunResultObject) {
            __dec_obj214=self->output_file_name;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        if(        self->function_result_type==gComeFunResultObject) {
            __dec_obj215=self->function_result_type;
            come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->module_params!=((void*)0)) {
        if(        self->module_params==gComeFunResultObject) {
            __dec_obj216=self->module_params;
            come_call_finalizer3(__dec_obj216,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->if_result_var_name!=((void*)0)) {
        if(        self->if_result_var_name==gComeFunResultObject) {
            __dec_obj217=self->if_result_var_name;
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->if_result_var_name = come_decrement_ref_count2(self->if_result_var_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->match_it_var!=((void*)0)) {
        if(        self->match_it_var==gComeFunResultObject) {
            __dec_obj218=self->match_it_var;
            come_call_finalizer3(__dec_obj218,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->match_it_var,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->outputed_class!=((void*)0)) {
        if(        self->outputed_class==gComeFunResultObject) {
            __dec_obj219=self->outputed_class;
            come_call_finalizer3(__dec_obj219,map$2charphint_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->outputed_class,map$2charphintp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->uniq_definition!=((void*)0)) {
        if(        self->uniq_definition==gComeFunResultObject) {
            __dec_obj220=self->uniq_definition;
            come_call_finalizer3(__dec_obj220,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->uniq_definition,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_638;
int i_639;
char* __result305__;
char* default_value_640;
char* __result306__;
default_value_640 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_638=self->head;
    i_639=0;
    while(it_638!=((void*)0)) {
        if(        position==i_639) {
            __result305__ = gComeFunResultObject = __result_obj__ = it_638->item;
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
        it_638=it_638->next;
        i_639++;
    }
    memset(&default_value_640,0,sizeof(char*));
    __result306__ = gComeFunResultObject = __result_obj__ = default_value_640;
    default_value_640 = come_decrement_ref_count2(default_value_640, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

