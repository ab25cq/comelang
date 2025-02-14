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
struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
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
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charphp_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharphp_rehash(struct map$2charphcharph* self);
static char* map$2charphcharphp_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharphp_end(struct map$2charphcharph* self);
static char* map$2charphcharphp_next(struct map$2charphcharph* self);
static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
static unsigned int sSemicolonNode_get_hash_key(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_operator_not_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1voidphp_operator_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info);
static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self);
static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self);
static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self);
static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static unsigned int list$1charph_get_hash_key(struct list$1charph* self);
static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static unsigned int sFunNode_get_hash_key(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static unsigned int sFun_get_hash_key(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static unsigned int sBlock_get_hash_key(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self);
static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self);
static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self);
static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static unsigned int sLambdaNode_get_hash_key(struct sLambdaNode* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1voidphp_length(struct list$1voidph* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self);
static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sSemicolonNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sSemicolonNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
struct sLambdaNode* __result222__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sLambdaNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_292;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sType* result_type_293;
void* __right_value292 = (void*)0;
int block_level_323;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value295 = (void*)0;
char* __dec_obj79;
void* __right_value296 = (void*)0;
struct sType* __dec_obj80;
_Bool __result240__;
    come_fun_292=info->come_fun;
    info->come_fun=self->mFun;
    result_type_293=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value292=make_define_var(result_type_293,"__result_obj__",(_Bool)0,info))));
        __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_323=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_323;
    come_value_324=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj79=come_value_324->c_value;
    come_value_324->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj80=come_value_324->type;
    come_value_324->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_324->var=((void*)0);
    add_come_last_code(info,"%s",come_value_324->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_324));
    info->come_fun=come_fun_292;
    __result240__ = (_Bool)1;
    come_call_finalizer3(result_type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result240__;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
struct list$1voidph* __dec_obj39;
struct list$1sNodeph* __dec_obj41;
struct list$1voidph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct sType* __dec_obj45;
struct sNode* __dec_obj46;
struct sType* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj37=self->mInterfaceName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj38=self->mGenericsName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj41=self->mArrayNum;
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj43=self->mParamTypes;
            come_call_finalizer3(__dec_obj43,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj44=self->mParamNames;
            come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj45=self->mResultType;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj46=self->mAlignas;
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj47=self->mChannelType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj48=self->mSizeNum;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_294;
struct list_item$1voidph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_296;
struct list_item$1voidph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_298;
struct list_item$1sNodeph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_300;
struct list_item$1sNodeph* prev_it_301;
    it_300=self->head;
    while(it_300!=((void*)0)) {
        prev_it_301=it_300;
        it_300=it_300->next;
        come_call_finalizer3(prev_it_301,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_302;
struct list_item$1charph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result224__;
void* __right_value253 = (void*)0;
struct sType* result_305;
void* __right_value254 = (void*)0;
struct sType* __dec_obj53;
void* __right_value255 = (void*)0;
struct sType* __dec_obj54;
void* __right_value256 = (void*)0;
struct sType* __dec_obj55;
void* __right_value257 = (void*)0;
char* __dec_obj56;
void* __right_value258 = (void*)0;
char* __dec_obj57;
void* __right_value265 = (void*)0;
struct list$1voidph* __dec_obj61;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj65;
void* __right_value274 = (void*)0;
struct list$1voidph* __dec_obj66;
void* __right_value281 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value282 = (void*)0;
struct sType* __dec_obj71;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value284 = (void*)0;
struct sType* __dec_obj73;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value286 = (void*)0;
char* __dec_obj75;
void* __right_value287 = (void*)0;
char* __dec_obj76;
void* __right_value288 = (void*)0;
char* __dec_obj77;
void* __right_value289 = (void*)0;
char* __dec_obj78;
struct sType* __result238__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_305=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key));
    if(    self!=((void*)0)) {
        result_305->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj53=result_305->mNoSolvedGenericsType;
        result_305->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_305->mOriginalLoadVarType;
        result_305->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj55=result_305->mAnyOriginalType;
        result_305->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj56=result_305->mInterfaceName;
        result_305->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj57=result_305->mGenericsName;
        result_305->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj61=result_305->mGenericsTypes;
        result_305->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj61,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj65=result_305->mArrayNum;
        result_305->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_305->mParamTypes;
        result_305->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj66,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_305->mParamNames;
        result_305->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_305->mResultType;
        result_305->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_305->mAlignas;
        result_305->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj73=result_305->mChannelType;
        result_305->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_305->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_305->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_305->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_305->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_305->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_305->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_305->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_305->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_305->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_305->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_305->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_305->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_305->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_305->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_305->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_305->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_305->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_305->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_305->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_305->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj74=result_305->mSizeNum;
        result_305->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_305->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj75=result_305->mOriginalTypeName;
        result_305->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_305->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_305->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_305->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_305->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_305->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_305->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_305->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj76=result_305->mAsmName;
        result_305->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_305->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_305->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_305->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_305->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_305->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj77=result_305->mTupleName;
        result_305->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_305->mAttribute;
        result_305->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_305->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_305->mGenerate=self->mGenerate;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_305;
    come_call_finalizer3(result_305,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_304;
    result_304=0;
    result_304+=int_get_hash_key(((int)self->mClass));
    result_304+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_304+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_304+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_304+=int_get_hash_key(((int)self->mAnyClass));
    result_304+=int_get_hash_key(((int)self->mInterfaceName));
    result_304+=int_get_hash_key(((int)self->mGenericsName));
    result_304+=int_get_hash_key(((int)self->mGenericsTypes));
    result_304+=int_get_hash_key(((int)self->mArrayNum));
    result_304+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_304+=int_get_hash_key(((int)self->mParamTypes));
    result_304+=int_get_hash_key(((int)self->mParamNames));
    result_304+=int_get_hash_key(((int)self->mResultType));
    result_304+=int_get_hash_key(((int)self->mVarArgs));
    result_304+=int_get_hash_key(((int)self->mAlignas));
    result_304+=int_get_hash_key(((int)self->mChannelType));
    result_304+=int_get_hash_key(((int)self->mUnsigned));
    result_304+=int_get_hash_key(((int)self->mShort));
    result_304+=int_get_hash_key(((int)self->mLong));
    result_304+=int_get_hash_key(((int)self->mLongLong));
    result_304+=int_get_hash_key(((int)self->mConstant));
    result_304+=int_get_hash_key(((int)self->mAtomic));
    result_304+=int_get_hash_key(((int)self->mRegister));
    result_304+=int_get_hash_key(((int)self->mVolatile));
    result_304+=int_get_hash_key(((int)self->mStatic));
    result_304+=int_get_hash_key(((int)self->mUniq));
    result_304+=int_get_hash_key(((int)self->mRecord));
    result_304+=int_get_hash_key(((int)self->mExtern));
    result_304+=int_get_hash_key(((int)self->mRestrict));
    result_304+=int_get_hash_key(((int)self->mImmutable));
    result_304+=int_get_hash_key(((int)self->mHeap));
    result_304+=int_get_hash_key(((int)self->mChannel));
    result_304+=int_get_hash_key(((int)self->mNoHeap));
    result_304+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_304+=int_get_hash_key(((int)self->mException));
    result_304+=int_get_hash_key(((int)self->mPointerNum));
    result_304+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_304+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_304+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_304+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_304+=int_get_hash_key(((int)self->mSizeNum));
    result_304+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_304+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_304+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_304+=int_get_hash_key(((int)self->mFunctionParam));
    result_304+=int_get_hash_key(((int)self->mAllocaValue));
    result_304+=int_get_hash_key(((int)self->mGenericsStruct));
    result_304+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_304+=int_get_hash_key(((int)self->mInline));
    result_304+=int_get_hash_key(((int)self->mNullValue));
    result_304+=int_get_hash_key(((int)self->mGuardValue));
    result_304+=int_get_hash_key(((int)self->mAsmName));
    result_304+=int_get_hash_key(((int)self->mArrayPointerType));
    result_304+=int_get_hash_key(((int)self->mLambdaArray));
    result_304+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_304+=int_get_hash_key(((int)self->mTypedef));
    result_304+=int_get_hash_key(((int)self->mMultipleTypes));
    result_304+=int_get_hash_key(((int)self->mOriginIsArray));
    result_304+=int_get_hash_key(((int)self->mTupleName));
    result_304+=int_get_hash_key(((int)self->mAttribute));
    result_304+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_304+=int_get_hash_key(((int)self->mGenerate));
    return result_304;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result225__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1voidph* result_307;
struct list_item$1voidph* it_308;
void* __right_value264 = (void*)0;
struct list$1voidph* __result228__;
    if(    self==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_307=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    it_308=self->head;
    while(it_308!=((void*)0)) {
        list$1voidphp_add(result_307,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_308->item)));
        it_308=it_308->next;
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_307;
    come_call_finalizer3(result_307,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_306;
    result_306=0;
    result_306+=int_get_hash_key(((int)self->head));
    result_306+=int_get_hash_key(((int)self->tail));
    result_306+=int_get_hash_key(((int)self->len));
    result_306+=int_get_hash_key(((int)self->it));
    return result_306;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result226__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_309;
void* __dec_obj58;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_310;
void* __dec_obj59;
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_311;
void* __dec_obj60;
struct list$1voidph* __result227__;
    if(    self->len==0) {
        litem_309=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_309->prev=((void*)0);
        litem_309->next=((void*)0);
        __dec_obj58=litem_309->item;
        litem_309->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head=litem_309;
    }
    else if(    self->len==1) {
        litem_310=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_310->prev=self->head;
        litem_310->next=((void*)0);
        __dec_obj59=litem_310->item;
        litem_310->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_310;
        self->head->next=litem_310;
    }
    else {
        litem_311=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_311->prev=self->tail;
        litem_311->next=((void*)0);
        __dec_obj60=litem_311->item;
        litem_311->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_311;
        self->tail=litem_311;
    }
    self->len++;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result229__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_312;
struct list_item$1sNodeph* it_313;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result234__;
    if(    self==((void*)0)) {
        __result229__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_312=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    it_313=self->head;
    while(it_313!=((void*)0)) {
        list$1sNodephp_add(result_312,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_313->item)));
        it_313=it_313->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_312;
    come_call_finalizer3(result_312,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result230__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_314;
struct sNode* __dec_obj62;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_315;
struct sNode* __dec_obj63;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_316;
struct sNode* __dec_obj64;
struct list$1sNodeph* __result231__;
    if(    self->len==0) {
        litem_314=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_314->prev=((void*)0);
        litem_314->next=((void*)0);
        __dec_obj62=litem_314->item;
        litem_314->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_314;
        self->head=litem_314;
    }
    else if(    self->len==1) {
        litem_315=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_315->prev=self->head;
        litem_315->next=((void*)0);
        __dec_obj63=litem_315->item;
        litem_315->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_315;
        self->head->next=litem_315;
    }
    else {
        litem_316=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_316->prev=self->tail;
        litem_316->next=((void*)0);
        __dec_obj64=litem_316->item;
        litem_316->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_316;
        self->tail=litem_316;
    }
    self->len++;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result232__;
void* __right_value271 = (void*)0;
struct sNode* result_317;
struct sNode* __result233__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_317=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_317->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_317->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_317->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_317->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_317->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_317->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_317->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_317->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_317->kind=self->kind;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer2((void*)0, result_317, result_317 ? ((struct sNode*)result_317)->finalize:(void*)0, result_317 ? ((struct sNode*)result_317)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result235__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1charph* result_318;
struct list_item$1charph* it_319;
void* __right_value280 = (void*)0;
struct list$1charph* __result237__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_318=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    it_319=self->head;
    while(it_319!=((void*)0)) {
        list$1charphp_add(result_318,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_319->item)));
        it_319=it_319->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_318;
    come_call_finalizer3(result_318,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_320;
char* __dec_obj67;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_321;
char* __dec_obj68;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_322;
char* __dec_obj69;
struct list$1charph* __result236__;
    if(    self->len==0) {
        litem_320=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_320->prev=((void*)0);
        litem_320->next=((void*)0);
        __dec_obj67=litem_320->item;
        litem_320->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_320;
        self->head=litem_320;
    }
    else if(    self->len==1) {
        litem_321=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_321->prev=self->head;
        litem_321->next=((void*)0);
        __dec_obj68=litem_321->item;
        litem_321->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_321;
        self->head->next=litem_321;
    }
    else {
        litem_322=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_322->prev=self->tail;
        litem_322->next=((void*)0);
        __dec_obj69=litem_322->item;
        litem_322->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_322;
        self->tail=litem_322;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct list_item$1CVALUEph* litem_325;
struct CVALUE* __dec_obj81;
void* __right_value298 = (void*)0;
struct list_item$1CVALUEph* litem_326;
struct CVALUE* __dec_obj86;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_327;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result239__;
    if(    self->len==0) {
        litem_325=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_325->prev=((void*)0);
        litem_325->next=((void*)0);
        __dec_obj81=litem_325->item;
        litem_325->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_325;
        self->head=litem_325;
    }
    else if(    self->len==1) {
        litem_326=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value298=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_326->prev=self->head;
        litem_326->next=((void*)0);
        __dec_obj86=litem_326->item;
        litem_326->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_326;
        self->head->next=litem_326;
    }
    else {
        litem_327=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_327->prev=self->tail;
        litem_327->next=((void*)0);
        __dec_obj87=litem_327->item;
        litem_327->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_327;
        self->tail=litem_327;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj82;
struct sType* __dec_obj83;
char* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj82=self->c_value;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj83=self->type;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj84=self->c_value_without_right_value_objects;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_cast_object_value;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct sFun* __dec_obj88;
struct sFunNode* __result241__;
    ((struct sNodeBase*)(__right_value300=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value300,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj88,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
char* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value301=__builtin_string("sFunNode")));
    __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_328;
char* come_fun_name_329;
void* __right_value302 = (void*)0;
char* __dec_obj108;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* result_type_330;
void* __right_value305 = (void*)0;
int block_level_331;
void* __right_value306 = (void*)0;
char* __dec_obj109;
_Bool __result243__;
    come_fun_328=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_329=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj108=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_330=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value305=make_define_var(result_type_330,"__result_obj__",(_Bool)0,info))));
            __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_331=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_331;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value306=xsprintf("come_heap_final();\n"))));
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_328;
    __dec_obj109=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_329);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result243__ = (_Bool)1;
    come_fun_name_329 = come_decrement_ref_count2(come_fun_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result243__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1voidph* __dec_obj91;
struct list$1charph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct sType* __dec_obj94;
struct sBlock* __dec_obj95;
struct buffer* __dec_obj98;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
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
            come_call_finalizer3(__dec_obj91,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj94=self->mLambdaType;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj95=self->mBlock;
            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj98=self->mSource;
            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj99=self->mSourceHead;
            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead2;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj101=self->mSourceDefer;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj102=self->mComeHeader;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj103=self->mDeclareSName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj104=self->mAttribute;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj105=self->mFunAttribute;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj96;
struct sVarTable* __dec_obj97;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj96=self->mNodes;
            come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj97=self->mVarTable;
            come_call_finalizer3(__dec_obj97,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj106;
struct sFun* __dec_obj107;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj106=self->sname;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj107=self->mFun;
            come_call_finalizer3(__dec_obj107,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1sNodeph* __dec_obj110;
struct sBlock* __result244__;
    __dec_obj110=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj111;
void* __right_value310 = (void*)0;
struct list$1charph* __dec_obj112;
void* __right_value311 = (void*)0;
struct list$1charph* __dec_obj113;
char* __dec_obj114;
struct sType* __dec_obj115;
struct list$1voidph* __dec_obj116;
struct list$1charph* __dec_obj117;
struct list$1charph* __dec_obj118;
char* __dec_obj119;
void* __right_value312 = (void*)0;
char* __dec_obj120;
struct sGenericsFun* __result245__;
    __dec_obj111=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj113=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj113,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->mParamTypes;
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj116,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj117=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj118=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj118,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj119=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj120=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj121;
struct list$1charph* __dec_obj122;
struct list$1charph* __dec_obj123;
char* __dec_obj124;
struct sType* __dec_obj125;
struct list$1voidph* __dec_obj126;
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
            come_call_finalizer3(__dec_obj126,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sBlock* result_332;
int sline_top_333;
int block_level_334;
char* p_saved_335;
int sline_saved_336;
char* sname_saved_337;
void* __right_value315 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
struct map$2charphcharph* __dec_obj133;
char* p_340;
int sline_341;
void* __right_value316 = (void*)0;
char* sname_342;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* module_name_343;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* params_344;
void* __right_value321 = (void*)0;
char* word_345;
void* __right_value322 = (void*)0;
char* __dec_obj134;
void* __right_value323 = (void*)0;
char* __dec_obj135;
void* __right_value324 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result250__;
void* __right_value325 = (void*)0;
struct sClassModule* module_349;
void* __right_value326 = (void*)0;
void* __right_value332 = (void*)0;
struct map$2charphcharph* __dec_obj141;
int i_353;
struct list$1charph* o2_saved_354;
char* it_357;
void* __right_value333 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* __dec_obj142;
void* __right_value342 = (void*)0;
struct sNode* node_404;
void* __right_value343 = (void*)0;
char* __dec_obj143;
_Bool omit_semicolon_408;
void* __right_value347 = (void*)0;
char* __dec_obj147;
char* head_423;
void* __right_value348 = (void*)0;
struct sNode* value_424;
char* tail_425;
void* __right_value349 = (void*)0;
struct sNode* __dec_obj148;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sNode* node_427;
void* __right_value352 = (void*)0;
char* __dec_obj149;
struct sNode* node_428;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value357 = (void*)0;
struct sNode* __dec_obj151;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj152;
_Bool omit_semicolon_431;
char* p_432;
char* head_433;
void* __right_value359 = (void*)0;
char* source_434;
void* __right_value360 = (void*)0;
struct sNode* node_435;
struct sBlock* __result288__;
node_428 = (void*)0;
    result_332=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 167, "struct sBlock*", (void*)0, (void*)0, (void*)0)),info));
    sline_top_333=info->sline_top;
    info->sline_top=info->sline;
    block_level_334=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_335=((void*)0);
        sline_saved_336=0;
        sname_saved_337=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_335) {
                if(                *info->p==0) {
                    info->p=p_saved_335;
                    info->sline=sline_saved_336;
                    __dec_obj131=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_337));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_335=((void*)0);
                    sline_saved_336=0;
                    __dec_obj132=sname_saved_337;
                    sname_saved_337=((void*)0);
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj133=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj133,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_340=info->p;
            sline_341=info->sline;
            sname_342=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_341;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value317=parse_word(info)));
                __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_343=(char*)come_increment_ref_count(parse_word(info));
                params_344=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 223, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_345=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_344,(char*)come_increment_ref_count(word_345));
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
                            word_345 = come_decrement_ref_count2(word_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_345 = come_decrement_ref_count2(word_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_335=info->p;
                sline_saved_336=info->sline;
                __dec_obj134=sname_saved_337;
                sname_saved_337=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj135=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_343));
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value324=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_343)))==((void*)0))),                come_call_finalizer3(__right_value324,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result250__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_343 = come_decrement_ref_count2(module_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_342 = come_decrement_ref_count2(sname_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_332,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result250__;
                }
                module_349=((struct sClassModule*)(__right_value325=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_343)));
                come_call_finalizer3(__right_value325,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charphp_length(module_349->mParams)!=list$1charphp_length(params_344)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj141=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 277, "struct map$2charphcharph*", (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj141,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_353=0;
                for(                o2_saved_354=(struct list$1charph*)come_increment_ref_count((module_349->mParams)),it_357=list$1charphp_begin((o2_saved_354));                !list$1charphp_end((o2_saved_354));                it_357=list$1charphp_next((o2_saved_354))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_357)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value339=list$1charphp_operator_load_element(params_344,i_353))))));
                    __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_353++;
                }
                come_call_finalizer3(o2_saved_354,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_349->mText;
                info->sline=module_349->mSLine;
                __dec_obj142=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_349->mSName));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_343 = come_decrement_ref_count2(module_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_404=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj143=info->sname;
            info->sname=(char*)come_increment_ref_count(node_404->sname(node_404->_protocol_obj));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_404->sline(node_404->_protocol_obj);
            if(            node_404==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodephp_push_back(result_332->mNodes,(struct sNode*)come_increment_ref_count(node_404));
            parse_sharp_v5(info);
            if(            node_404->terminated(node_404->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_408=(_Bool)1;
            if(            node_404->terminated(node_404->_protocol_obj)) {
                omit_semicolon_408=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_408=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_332->mOmitSemicolon=omit_semicolon_408;
                if(                omit_semicolon_408&&in_function) {
                    list$1sNodephp_delete(result_332->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_340;
                    info->sline=sline_341;
                    __dec_obj147=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_342));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_423=info->p;
                    value_424=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_425=info->p;
                    __dec_obj148=value_424;
                    value_424=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_424),info));
                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_426[tail_425-head_423+1];
                    memset(&buf_426, 0, sizeof(char)                    *(tail_425-head_423+1)                    );
                    memcpy(buf_426,head_423,tail_425-head_423);
                    buf_426[tail_425-head_423]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_427=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_424),(char*)come_increment_ref_count(__builtin_string(buf_426)),info));
                    list$1sNodephp_push_back(result_332->mNodes,(struct sNode*)come_increment_ref_count(node_427));
                    if(value_424) { value_424 = come_decrement_ref_count2(value_424, ((struct sNode*)value_424)->finalize, ((struct sNode*)value_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_427) { node_427 = come_decrement_ref_count2(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_342 = come_decrement_ref_count2(sname_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_404) { node_404 = come_decrement_ref_count2(node_404, ((struct sNode*)node_404)->finalize, ((struct sNode*)node_404)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_424) { value_424 = come_decrement_ref_count2(value_424, ((struct sNode*)value_424)->finalize, ((struct sNode*)value_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_427) { node_427 = come_decrement_ref_count2(node_427, ((struct sNode*)node_427)->finalize, ((struct sNode*)node_427)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_342 = come_decrement_ref_count2(sname_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_404) { node_404 = come_decrement_ref_count2(node_404, ((struct sNode*)node_404)->finalize, ((struct sNode*)node_404)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_342 = come_decrement_ref_count2(sname_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_404) { node_404 = come_decrement_ref_count2(node_404, ((struct sNode*)node_404)->finalize, ((struct sNode*)node_404)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_335) {
            if(            info->p==0) {
                info->p=p_saved_335;
                info->sline=sline_saved_336;
                __dec_obj149=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_337));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_335=((void*)0);
                sline_saved_336=0;
            }
        }
        sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value354=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj151=node_428;
            node_428=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value354,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_332->mNodes,(struct sNode*)come_increment_ref_count(node_428));
        }
        else {
            __dec_obj152=node_428;
            node_428=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_428==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_428->terminated(node_428->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_431=(_Bool)1;
            if(            node_428->terminated(node_428->_protocol_obj)) {
                omit_semicolon_431=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_431=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_332->mOmitSemicolon=omit_semicolon_431;
            list$1sNodephp_push_back(result_332->mNodes,(struct sNode*)come_increment_ref_count(node_428));
        }
        if(node_428) { node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_432=info->p;
        head_433=info->head;
        source_434=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_434;
        info->head=source_434;
        node_435=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_435==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodephp_push_back(result_332->mNodes,(struct sNode*)come_increment_ref_count(node_435));
        info->p=p_432;
        info->head=head_433;
        source_434 = come_decrement_ref_count2(source_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_435) { node_435 = come_decrement_ref_count2(node_435, ((struct sNode*)node_435)->finalize, ((struct sNode*)node_435)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_334;
    __result288__ = gComeFunResultObject = __result_obj__ = result_332;
    come_call_finalizer3(result_332,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_338;
int i_339;
    for(    i_338=0;    i_338<self->size;    i_338++    ){
        if(        self->item_existance[i_338]) {
            if(            1) {
                self->items[i_338] = come_decrement_ref_count2(self->items[i_338], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_339=0;    i_339<self->size;    i_339++    ){
        if(        self->item_existance[i_339]) {
            if(            1) {
                self->keys[i_339] = come_decrement_ref_count2(self->keys[i_339], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_346;
unsigned int hash_347;
unsigned int it_348;
struct sClassModule* __result246__;
struct sClassModule* __result247__;
struct sClassModule* __result248__;
struct sClassModule* __result249__;
default_value_346 = (void*)0;
    memset(&default_value_346,0,sizeof(struct sClassModule*));
    hash_347=string_get_hash_key(((char*)key))%self->size;
    it_348=hash_347;
    while((_Bool)1) {
        if(        self->item_existance[it_348]) {
            if(            charp_equals(self->keys[it_348],key)) {
                __result246__ = gComeFunResultObject = __result_obj__ = self->items[it_348];
                come_call_finalizer3(default_value_346,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
            it_348++;
            if(            it_348>=self->size) {
                it_348=0;
            }
            else if(            it_348==hash_347) {
                __result247__ = gComeFunResultObject = __result_obj__ = default_value_346;
                come_call_finalizer3(default_value_346,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result247__;
            }
        }
        else {
            __result248__ = gComeFunResultObject = __result_obj__ = default_value_346;
            come_call_finalizer3(default_value_346,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result248__;
        }
    }
    __result249__ = gComeFunResultObject = __result_obj__ = default_value_346;
    come_call_finalizer3(default_value_346,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj136;
char* __dec_obj137;
struct list$1charph* __dec_obj138;
char* __dec_obj139;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj136=self->mName;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj137=self->mText;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj138=self->mParams;
            come_call_finalizer3(__dec_obj138,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj139=self->mSName;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
int i_350;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1charp* __dec_obj140;
struct map$2charphcharph* __result252__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value327=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "char**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value329=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_350=0;    i_350<128;    i_350++    ){
        self->item_existance[i_350]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj140=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj140,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_351;
int i_352;
    for(    i_351=0;    i_351<self->size;    i_351++    ){
        if(        self->item_existance[i_351]) {
            if(            1) {
                self->items[i_351] = come_decrement_ref_count2(self->items[i_351], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_352=0;    i_352<self->size;    i_352++    ){
        if(        self->item_existance[i_352]) {
            if(            1) {
                self->keys[i_352] = come_decrement_ref_count2(self->keys[i_352], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_355;
char* __result253__;
char* __result254__;
char* result_356;
char* __result255__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_355,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->it=self->head;
    if(    self->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_356,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_358;
char* __result256__;
char* __result257__;
char* result_359;
char* __result258__;
result_358 = (void*)0;
result_359 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_358,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_358;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_359,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_359;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharphp_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_377;
unsigned int it_378;
_Bool same_key_exist_395;
char* it2_398;
struct map$2charphcharph* __result279__;
    if(    self->len*10>=self->size) {
        map$2charphcharphp_rehash(self);
    }
    hash_377=string_get_hash_key(key)%self->size;
    it_378=hash_377;
    while((_Bool)1) {
        if(        self->item_existance[it_378]) {
            if(            charp_equals(self->keys[it_378],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_378]);
                    self->keys[it_378] = come_decrement_ref_count2(self->keys[it_378], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_378]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_378]);
                    self->keys[it_378]=key;
                }
                if(                1) {
                    self->items[it_378] = come_decrement_ref_count2(self->items[it_378], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_378]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_378]=item;
                }
                break;
            }
            it_378++;
            if(            it_378>=self->size) {
                it_378=0;
            }
            else if(            it_378==hash_377) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_378]=(_Bool)1;
            if(            1) {
                self->keys[it_378]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_378]=key;
            }
            if(            1) {
                self->items[it_378]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_378]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_395=(_Bool)0;
    for(    it2_398=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_398=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_398,key)) {
            same_key_exist_395=(_Bool)1;
        }
    }
    if(    !same_key_exist_395) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void map$2charphcharphp_rehash(struct map$2charphcharph* self){
int size_360;
void* __right_value334 = (void*)0;
char** keys_361;
void* __right_value335 = (void*)0;
char** items_362;
void* __right_value336 = (void*)0;
_Bool* item_existance_363;
int len_364;
char* it_367;
char* default_value_370;
void* __right_value337 = (void*)0;
char* it2_371;
unsigned int hash_374;
int n_375;
char* default_value_376;
void* __right_value338 = (void*)0;
default_value_370 = (void*)0;
default_value_376 = (void*)0;
    size_360=self->size*10;
    keys_361=(char**)come_increment_ref_count(((char**)(__right_value334=(char**)come_calloc(1, sizeof(char*)*(1*(size_360)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_362=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(size_360)), "/usr/local/include/comelang.h", 2708, "char**", (void*)0, (void*)0, (void*)0))));
    item_existance_363=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value336=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_360)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_364=0;
    for(    it_367=map$2charphcharphp_begin(self);    !map$2charphcharphp_end(self);    it_367=map$2charphcharphp_next(self)    ){
        memset(&default_value_370,0,sizeof(char*));
        it2_371=((char*)(__right_value337=map$2charphcharphp_at(self,it_367,default_value_370)));
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_374=string_get_hash_key(it_367)%size_360;
        n_375=hash_374;
        while((_Bool)1) {
            if(            item_existance_363[n_375]) {
                n_375++;
                if(                n_375>=size_360) {
                    n_375=0;
                }
                else if(                n_375==hash_374) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_363[n_375]=(_Bool)1;
                keys_361[n_375]=it_367;
                items_362[n_375]=((char*)(__right_value338=map$2charphcharphp_at(self,it_367,default_value_376)));
                __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_364++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_361;
    self->items=items_362;
    self->item_existance=item_existance_363;
    self->size=size_360;
    self->len=len_364;
}

static char* map$2charphcharphp_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_365;
char* __result259__;
char* __result260__;
char* result_366;
char* __result261__;
result_365 = (void*)0;
result_366 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_365,0,sizeof(char*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_365;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_366,0,sizeof(char*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static _Bool map$2charphcharphp_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharphp_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_368;
char* __result262__;
char* __result263__;
char* result_369;
char* __result264__;
result_368 = (void*)0;
result_369 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_368,0,sizeof(char*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_368;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_369,0,sizeof(char*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_369;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_372;
unsigned int it_373;
char* __result265__;
char* __result266__;
char* __result267__;
char* __result268__;
    hash_372=string_get_hash_key(((char*)key))%self->size;
    it_373=hash_372;
    while((_Bool)1) {
        if(        self->item_existance[it_373]) {
            if(            charp_equals(self->keys[it_373],key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_373];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_373++;
            if(            it_373>=self->size) {
                it_373=0;
            }
            else if(            it_373==hash_372) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_379;
struct list_item$1charp* it_380;
struct list$1charp* __result272__;
    it2_379=0;
    it_380=self->head;
    while(it_380!=((void*)0)) {
        if(        charp_equals(it_380->item,item)) {
            list$1charpp_delete(self,it2_379,it2_379+1);
            break;
        }
        it2_379++;
        it_380=it_380->next;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_381;
struct list$1charp* __result269__;
struct list_item$1charp* it_384;
int i_385;
struct list_item$1charp* prev_it_386;
struct list_item$1charp* it_387;
int i_388;
struct list_item$1charp* prev_it_389;
struct list_item$1charp* it_390;
struct list_item$1charp* head_prev_it_391;
struct list_item$1charp* tail_it_392;
int i_393;
struct list_item$1charp* prev_it_394;
struct list$1charp* __result271__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_381=tail;
        tail=head;
        head=tmp_381;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result269__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_384=self->head;
        i_385=0;
        while(it_384!=((void*)0)) {
            if(            i_385<tail) {
                prev_it_386=it_384;
                it_384=it_384->next;
                i_385++;
                come_call_finalizer3(prev_it_386,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_385==tail) {
                self->head=it_384;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_384=it_384->next;
                i_385++;
            }
        }
    }
    else if(    tail==self->len) {
        it_387=self->head;
        i_388=0;
        while(it_387!=((void*)0)) {
            if(            i_388==head) {
                self->tail=it_387->prev;
                self->tail->next=((void*)0);
            }
            if(            i_388>=head) {
                prev_it_389=it_387;
                it_387=it_387->next;
                i_388++;
                come_call_finalizer3(prev_it_389,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_387=it_387->next;
                i_388++;
            }
        }
    }
    else {
        it_390=self->head;
        head_prev_it_391=((void*)0);
        tail_it_392=((void*)0);
        i_393=0;
        while(it_390!=((void*)0)) {
            if(            i_393==head) {
                head_prev_it_391=it_390->prev;
            }
            if(            i_393==tail) {
                tail_it_392=it_390;
            }
            if(            i_393>=head&&i_393<tail) {
                prev_it_394=it_390;
                it_390=it_390->next;
                i_393++;
                come_call_finalizer3(prev_it_394,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_390=it_390->next;
                i_393++;
            }
        }
        if(        head_prev_it_391!=((void*)0)) {
            head_prev_it_391->next=tail_it_392;
        }
        if(        tail_it_392!=((void*)0)) {
            tail_it_392->prev=head_prev_it_391;
        }
    }
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_382;
struct list_item$1charp* prev_it_383;
struct list$1charp* __result270__;
    it_382=self->head;
    while(it_382!=((void*)0)) {
        prev_it_383=it_382;
        it_382=it_382->next;
        come_call_finalizer3(prev_it_383,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_396;
char* __result273__;
char* __result274__;
char* result_397;
char* __result275__;
result_396 = (void*)0;
result_397 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_396,0,sizeof(char*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_396;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->head;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_397,0,sizeof(char*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_397;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_399;
char* __result276__;
char* __result277__;
char* result_400;
char* __result278__;
result_399 = (void*)0;
result_400 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_399,0,sizeof(char*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_399;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_400,0,sizeof(char*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_400;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_401;
int i_402;
char* __result280__;
char* default_value_403;
char* __result281__;
default_value_403 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_401=self->head;
    i_402=0;
    while(it_401!=((void*)0)) {
        if(        position==i_402) {
            __result280__ = gComeFunResultObject = __result_obj__ = it_401->item;
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
        it_401=it_401->next;
        i_402++;
    }
    memset(&default_value_403,0,sizeof(char*));
    __result281__ = gComeFunResultObject = __result_obj__ = default_value_403;
    default_value_403 = come_decrement_ref_count2(default_value_403, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
struct list_item$1sNodeph* litem_405;
struct sNode* __dec_obj144;
void* __right_value345 = (void*)0;
struct list_item$1sNodeph* litem_406;
struct sNode* __dec_obj145;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_407;
struct sNode* __dec_obj146;
struct list$1sNodeph* __result282__;
    if(    self->len==0) {
        litem_405=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value344=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_405->prev=((void*)0);
        litem_405->next=((void*)0);
        __dec_obj144=litem_405->item;
        litem_405->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_405;
        self->head=litem_405;
    }
    else if(    self->len==1) {
        litem_406=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_406->prev=self->head;
        litem_406->next=((void*)0);
        __dec_obj145=litem_406->item;
        litem_406->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_406;
        self->head->next=litem_406;
    }
    else {
        litem_407=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_407->prev=self->tail;
        litem_407->next=((void*)0);
        __dec_obj146=litem_407->item;
        litem_407->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_407;
        self->tail=litem_407;
    }
    self->len++;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_409;
struct list$1sNodeph* __result283__;
struct list_item$1sNodeph* it_412;
int i_413;
struct list_item$1sNodeph* prev_it_414;
struct list_item$1sNodeph* it_415;
int i_416;
struct list_item$1sNodeph* prev_it_417;
struct list_item$1sNodeph* it_418;
struct list_item$1sNodeph* head_prev_it_419;
struct list_item$1sNodeph* tail_it_420;
int i_421;
struct list_item$1sNodeph* prev_it_422;
struct list$1sNodeph* __result285__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_409=tail;
        tail=head;
        head=tmp_409;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result283__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
    }
    else if(    head==0) {
        it_412=self->head;
        i_413=0;
        while(it_412!=((void*)0)) {
            if(            i_413<tail) {
                prev_it_414=it_412;
                it_412=it_412->next;
                i_413++;
                come_call_finalizer3(prev_it_414,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_413==tail) {
                self->head=it_412;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_412=it_412->next;
                i_413++;
            }
        }
    }
    else if(    tail==self->len) {
        it_415=self->head;
        i_416=0;
        while(it_415!=((void*)0)) {
            if(            i_416==head) {
                self->tail=it_415->prev;
                self->tail->next=((void*)0);
            }
            if(            i_416>=head) {
                prev_it_417=it_415;
                it_415=it_415->next;
                i_416++;
                come_call_finalizer3(prev_it_417,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_415=it_415->next;
                i_416++;
            }
        }
    }
    else {
        it_418=self->head;
        head_prev_it_419=((void*)0);
        tail_it_420=((void*)0);
        i_421=0;
        while(it_418!=((void*)0)) {
            if(            i_421==head) {
                head_prev_it_419=it_418->prev;
            }
            if(            i_421==tail) {
                tail_it_420=it_418;
            }
            if(            i_421>=head&&i_421<tail) {
                prev_it_422=it_418;
                it_418=it_418->next;
                i_421++;
                come_call_finalizer3(prev_it_422,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_418=it_418->next;
                i_421++;
            }
        }
        if(        head_prev_it_419!=((void*)0)) {
            head_prev_it_419->next=tail_it_420;
        }
        if(        tail_it_420!=((void*)0)) {
            tail_it_420->prev=head_prev_it_419;
        }
    }
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_410;
struct list_item$1sNodeph* prev_it_411;
struct list$1sNodeph* __result284__;
    it_410=self->head;
    while(it_410!=((void*)0)) {
        prev_it_411=it_410;
        it_410=it_410->next;
        come_call_finalizer3(prev_it_411,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result286__;
void* __right_value355 = (void*)0;
struct sSemicolonNode* result_430;
void* __right_value356 = (void*)0;
char* __dec_obj150;
struct sSemicolonNode* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_430=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode", sSemicolonNode_finalize, sSemicolonNode_clone, sSemicolonNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_430->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=result_430->sname;
        result_430->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_430->sline_real=self->sline_real;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_430;
    come_call_finalizer3(result_430,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static unsigned int sSemicolonNode_get_hash_key(struct sSemicolonNode* self){
unsigned int result_429;
    result_429=0;
    result_429+=int_get_hash_key(((int)self->sline));
    result_429+=int_get_hash_key(((int)self->sname));
    result_429+=int_get_hash_key(((int)self->sline_real));
    return result_429;
}

int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_436;
struct sVarTable* old_table_437;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sVarTable* __dec_obj153;
struct sVarTable* current_loop_vtable_438;
struct list$1voidph* param_types__439;
struct list$1charph* param_names__440;
int i_441;
struct list$1charph* o2_saved_442;
char* name_443;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* type_444;
void* __right_value365 = (void*)0;
int block_level_448;
int i_449;
struct list$1sNodeph* o2_saved_450;
struct sNode* node_453;
struct list$1voidph* right_value_objects_456;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1voidph* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
int stack_num_before_457;
int sline_458;
void* __right_value368 = (void*)0;
char* sname_459;
void* __right_value369 = (void*)0;
char* __dec_obj157;
_Bool Value_460;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_461;
void* __right_value376 = (void*)0;
struct CVALUE* come_value2_462;
void* __right_value377 = (void*)0;
char* __dec_obj162;
void* __right_value378 = (void*)0;
struct CVALUE* come_value2_465;
struct sVar* var__466;
void* __right_value379 = (void*)0;
struct CVALUE* come_value3_467;
void* __right_value380 = (void*)0;
_Bool _if_conditional2;
void* __right_value381 = (void*)0;
struct sType* __dec_obj163;
void* __right_value382 = (void*)0;
char* c_value_472;
void* __right_value383 = (void*)0;
char* __dec_obj164;
void* __right_value384 = (void*)0;
char* __dec_obj165;
void* __right_value385 = (void*)0;
char* __dec_obj166;
_Bool Value_473;
void* __right_value386 = (void*)0;
char* __dec_obj167;
struct list$1voidph* __dec_obj168;
void* __if_result__0_476 = (void*)0;
struct list$1voidph* o2_saved_477;
struct sVar* it_480;
struct list$1voidph* __dec_obj169;
memset(&i_441, 0, sizeof(int));
memset(&i_449, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_436=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_437=info->lv_table;
    if(    !no_var_table) {
        __dec_obj153=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable*", (void*)0, (void*)0, (void*)0)),(_Bool)0,old_table_437));
        come_call_finalizer3(__dec_obj153,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_438=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__439=info->param_types;
    param_names__440=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_442=(param_names),name_443=list$1charphp_begin((o2_saved_442));        !list$1charphp_end((o2_saved_442));        name_443=list$1charphp_next((o2_saved_442))        ){
            type_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value363=list$1voidphp_operator_load_element(param_types,i_441))))));
            come_call_finalizer3(__right_value363,(void*)0, 0, 1, 0, 0, (void*)0);
            type_444->mFunctionParam=(_Bool)1;
            type_444->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_443,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_444)),info);
            i_441++;
            come_call_finalizer3(type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_448=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_450=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_453=list$1sNodephp_begin((o2_saved_450));        !list$1sNodephp_end((o2_saved_450));        node_453=list$1sNodephp_next((o2_saved_450))        ){
            right_value_objects_456=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj154=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 492, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
            come_call_finalizer3(__dec_obj154,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj155=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj156=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_457=list$1CVALUEphp_length(info->stack);
            sline_458=info->sline;
            sname_459=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_453->sline(node_453->_protocol_obj);
            __dec_obj157=info->sname;
            info->sname=(char*)come_increment_ref_count(node_453->sname(node_453->_protocol_obj));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_449==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_460=node_compile(node_453,info);
                if(                !Value_460) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_457+1) {
                    come_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_461->type->mClass->mName,"void")&&come_value_461->type->mPointerNum==0) {
                        come_value2_462=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_461));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_462));
                        __dec_obj162=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_462->c_value));
                        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_465=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_461));
                        var__466=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__466) {
                            come_value3_467=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 528, "struct CVALUE*", (void*)0, (void*)0, (void*)0));
                            if(                            var__466->mType->mClass=="void"&&var__466->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__466->mType,((struct sType*)(__right_value380=come_call_cloner(sType_clone, come_value_461->type))),come_value3_467,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj163=var__466->mType;
                            var__466->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_461->type));
                            come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_461->type->mHeap) {
                                c_value_472=(char*)come_increment_ref_count(increment_ref_count_object(come_value_461->type,come_value_461->c_value,info));
                                __dec_obj164=come_value2_465->c_value;
                                come_value2_465->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__466->mCValueName,c_value_472));
                                __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_472 = come_decrement_ref_count2(c_value_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj165=come_value2_465->c_value;
                                come_value2_465->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__466->mCValueName,come_value_461->c_value));
                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_467,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_465));
                        __dec_obj166=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_465->c_value));
                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_473=node_compile(node_453,info);
                if(                !Value_473) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_458;
            __dec_obj167=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_459));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_457);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1voidphp_reset(info->right_value_objects);
            }
            __dec_obj168=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_456);
            come_call_finalizer3(__dec_obj168,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            i_449++;
            come_call_finalizer3(right_value_objects_456,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_459 = come_decrement_ref_count2(sname_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_450,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_448==0) {
            for(            o2_saved_477=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_480=((struct sVar*)list$1voidphp_begin((o2_saved_477)));            !list$1voidphp_end((o2_saved_477));            it_480=((struct sVar*)list$1voidphp_next((o2_saved_477)))            ){
                free_object(it_480->mType,it_480->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_477,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj169=info->match_it_var;
            __if_result__0_476=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj169,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_476,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_437;
    info->block_level=block_level_448;
    info->param_types=param_types__439;
    info->param_names=param_names__440;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_438;
    info->inhibits_output_code=inhibits_output_code_436;
    return 0;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_445;
int i_446;
void* __result289__;
void* default_value_447;
void* __result290__;
default_value_447 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_445=self->head;
    i_446=0;
    while(it_445!=((void*)0)) {
        if(        position==i_446) {
            __result289__ = gComeFunResultObject = __result_obj__ = it_445->item;
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
        it_445=it_445->next;
        i_446++;
    }
    memset(&default_value_447,0,sizeof(void*));
    __result290__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_447);
    come_call_finalizer3(default_value_447, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_451;
struct sNode* __result291__;
struct sNode* __result292__;
struct sNode* result_452;
struct sNode* __result293__;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_451,0,sizeof(struct sNode*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_451;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->head;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_452,0,sizeof(struct sNode*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_452;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_454;
struct sNode* __result294__;
struct sNode* __result295__;
struct sNode* result_455;
struct sNode* __result296__;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_454,0,sizeof(struct sNode*));
        __result294__ = gComeFunResultObject = __result_obj__ = result_454;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result295__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    memset(&result_455,0,sizeof(struct sNode*));
    __result296__ = gComeFunResultObject = __result_obj__ = result_455;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result297__;
void* __right_value371 = (void*)0;
struct CVALUE* result_464;
void* __right_value372 = (void*)0;
char* __dec_obj158;
void* __right_value373 = (void*)0;
struct sType* __dec_obj159;
void* __right_value374 = (void*)0;
char* __dec_obj160;
void* __right_value375 = (void*)0;
char* __dec_obj161;
struct CVALUE* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_464=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj158=result_464->c_value;
        result_464->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj159=result_464->type;
        result_464->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_464->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_464->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj160=result_464->c_value_without_right_value_objects;
        result_464->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj161=result_464->c_value_without_cast_object_value;
        result_464->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_464;
    come_call_finalizer3(result_464,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_463;
    result_463=0;
    result_463+=int_get_hash_key(((int)self->c_value));
    result_463+=int_get_hash_key(((int)self->type));
    result_463+=int_get_hash_key(((int)self->var));
    result_463+=int_get_hash_key(((int)self->right_value_objects));
    result_463+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_463+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_463;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    !bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_468;
struct list_item$1voidph* it2_469;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_468=left->head;
    it2_469=right->head;
    while(it_468!=((void*)0)) {
        if(        !voidp_equals(it_468->item,it2_469->item)) {
            return (_Bool)0;
        }
        it_468=it_468->next;
        it2_469=it2_469->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1voidphp_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_operator_not_equals(struct list$1voidph* left, struct list$1voidph* right){
    return !list$1voidphp_operator_equals(left,right);
}

static _Bool list$1voidphp_operator_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_470;
struct list_item$1voidph* it2_471;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_470=left->head;
    it2_471=right->head;
    while(it_470!=((void*)0)) {
        if(        !(voidp_operator_equals(it_470->item,it2_471->item))) {
            return (_Bool)0;
        }
        it_470=it_470->next;
        it2_471=it2_471->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_474;
struct list_item$1voidph* prev_it_475;
struct list$1voidph* __result299__;
    it_474=self->head;
    while(it_474!=((void*)0)) {
        prev_it_475=it_474;
        it_474=it_474->next;
        come_call_finalizer3(prev_it_475,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_478;
void* __result300__;
void* __result301__;
void* result_479;
void* __result302__;
result_478 = (void*)0;
result_479 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_478,0,sizeof(void*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_478;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->it=self->head;
    if(    self->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_479,0,sizeof(void*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_479;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_481;
void* __result303__;
void* __result304__;
void* result_482;
void* __result305__;
result_481 = (void*)0;
result_482 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_481,0,sizeof(void*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_481;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_482,0,sizeof(void*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_482;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEphp_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEphp_length(info->stack)-top,info);
    }
    if(    list$1CVALUEphp_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEphp_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_483;
_Bool dquort_484;
_Bool squort_485;
int sline_486;
int nest_487;
char* tail_488;
void* __right_value387 = (void*)0;
char* buf_489;
void* __right_value388 = (void*)0;
char* __result306__;
    head_483=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_484=(_Bool)0;
        squort_485=(_Bool)0;
        sline_486=0;
        nest_487=0;
        while(1) {
            if(            dquort_484) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_486);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_484=!dquort_484;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_486);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_486);
                        exit(2);
                    }
                }
            }
            else if(            squort_485) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_486);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_485=!squort_485;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_486);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_486);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_486=info->sline;
                info->p++;
                squort_485=!squort_485;
            }
            else if(            *info->p==34) {
                sline_486=info->sline;
                info->p++;
                dquort_484=!dquort_484;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_487++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_487==0) {
                    break;
                }
                nest_487--;
            }
            else if(            *info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_488=info->p;
    buf_489=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_488-head_483+1)), "05function.c", 765, "char*", (void*)0, (void*)0, (void*)0));
    memcpy(buf_489,head_483,tail_488-head_483);
    buf_489[tail_488-head_483]=0;
    skip_spaces_and_lf(info);
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string(buf_489)));
    buf_489 = come_decrement_ref_count2(buf_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_490;
char* p3_491;
int i_492;
    terminated_490=(_Bool)0;
    p3_491=p;
    for(    i_492=0;    i_492<strlen(p2);    i_492++    ){
        if(        *p3_491==0) {
            terminated_490=(_Bool)1;
            break;
        }
        p3_491++;
    }
    return !terminated_490&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* asm_fun_name_493;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* result_494;
char* head_495;
int brace_num_496;
char* tail_497;
char* head_498;
int brace_num_499;
char* tail_500;
char* head_501;
char* tail_502;
char* head_503;
char* tail_504;
int len_505;
_Bool in_dquort_506;
int brace_num_507;
char* head_508;
char* tail_509;
char* head_510;
char* tail_511;
char* head_512;
char* tail_513;
char* head_514;
int nest_515;
char* tail_516;
char* head_517;
int nest_518;
char* tail_519;
char* head_520;
int nest_521;
char* tail_522;
char* head_523;
int nest_524;
char* tail_525;
char* head_526;
int nest_527;
char* tail_528;
char* head_529;
char* tail_530;
char* head_531;
char* tail_532;
char* head_533;
char* tail_534;
char* head_535;
char* tail_536;
char* head_537;
char* tail_538;
char* head_539;
int brace_num_540;
char* tail_541;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple2$2charphcharph* __result310__;
    asm_fun_name_493=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    result_494=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_495=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_496=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_496++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_496--;
                        if(                        brace_num_496==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_497=info->p;
            buffer_append(result_494,head_495,tail_497-head_495);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_498=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_499=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_499++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_499--;
                        if(                        brace_num_499==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_500=info->p;
            buffer_append(result_494,head_498,tail_500-head_498);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_501=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_502=info->p;
            buffer_append(result_494,head_501,tail_502-head_501);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_503=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_504=info->p;
            buffer_append(result_494,head_503,tail_504-head_503);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_505=0;
            if(            *info->p==40) {
                in_dquort_506=(_Bool)0;
                brace_num_507=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_506=!in_dquort_506;
                    }
                    else if(                    in_dquort_506) {
                        buffer_append_char(asm_fun_name_493,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_507++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_507--;
                        if(                        brace_num_507==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_508=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_509=info->p;
            buffer_append(result_494,head_508,tail_509-head_508);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_510=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_511=info->p;
            buffer_append(result_494,head_510,tail_511-head_510);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_512=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_513=info->p;
            buffer_append(result_494,head_512,tail_513-head_512);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_514=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_515=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_515++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_515--;
                        if(                        nest_515==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_516=info->p;
            buffer_append(result_494,head_514,tail_516-head_514);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_517=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_518=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_518++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_518--;
                        if(                        nest_518==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_519=info->p;
            buffer_append(result_494,head_517,tail_519-head_517);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_520=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_521=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521--;
                        if(                        nest_521==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_522=info->p;
            buffer_append(result_494,head_520,tail_522-head_520);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_523=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_524=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524--;
                        if(                        nest_524==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_525=info->p;
            buffer_append(result_494,head_523,tail_525-head_523);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_526=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_527=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_527++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_527--;
                        if(                        nest_527==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_528=info->p;
            buffer_append(result_494,head_526,tail_528-head_526);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_529=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_530=info->p;
            buffer_append(result_494,head_529,tail_530-head_529);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_531=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_532=info->p;
            buffer_append(result_494,head_531,tail_532-head_531);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_533=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_534=info->p;
            buffer_append(result_494,head_533,tail_534-head_533);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_535=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_536=info->p;
            buffer_append(result_494,head_535,tail_536-head_535);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_537=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_538=info->p;
            buffer_append(result_494,head_537,tail_538-head_537);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_539=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_540=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_540++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_540--;
                        if(                        brace_num_540==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_541=info->p;
            buffer_append(result_494,head_539,tail_541-head_539);
        }
        else {
            break;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value399=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1205, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_493)),(char*)come_increment_ref_count(buffer_to_string(result_494)))));
    come_call_finalizer3(asm_fun_name_493,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_494,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value399,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj170;
char* __dec_obj171;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj170=self->v1;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj171=self->v2;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphcharph* __result307__;
void* __right_value395 = (void*)0;
struct tuple2$2charphcharph* result_543;
void* __right_value396 = (void*)0;
char* __dec_obj172;
void* __right_value397 = (void*)0;
char* __dec_obj173;
struct tuple2$2charphcharph* __result308__;
    if(    self==(void*)0) {
        __result307__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    result_543=(struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "tuple2$2charphcharph_clone", 3, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj172=result_543->v1;
        result_543->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj173=result_543->v2;
        result_543->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_543;
    come_call_finalizer3(result_543,tuple2$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self){
unsigned int result_542;
    result_542=0;
    result_542+=int_get_hash_key(((int)self->v1));
    result_542+=int_get_hash_key(((int)self->v2));
    return result_542;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj174;
char* __dec_obj175;
struct tuple2$2charphcharph* __result309__;
    __dec_obj174=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj176;
char* __dec_obj177;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj176=self->v1;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj177=self->v2;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct buffer* asm_fun_name_544;
void* __right_value402 = (void*)0;
char* attribute_545;
int nest_546;
int nest_547;
int nest_548;
int nest_549;
int nest_550;
void* __right_value403 = (void*)0;
char* __dec_obj178;
int len_551;
_Bool in_dquort_552;
int brace_num_553;
int brace_num_554;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple2$2charphcharph* __result311__;
    asm_fun_name_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1210, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    attribute_545=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_546=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_546++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_546--;
                        if(                        nest_546==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_547=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547--;
                        if(                        nest_547==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_548=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_548++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_548--;
                        if(                        nest_548==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_549=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549--;
                        if(                        nest_549==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_550=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550--;
                        if(                        nest_550==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj178=attribute_545;
            attribute_545=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_551=0;
            if(            *info->p==40) {
                in_dquort_552=(_Bool)0;
                brace_num_553=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_552=!in_dquort_552;
                    }
                    else if(                    in_dquort_552) {
                        buffer_append_char(asm_fun_name_544,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_553++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_553--;
                        if(                        brace_num_553==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_554=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_554++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_554--;
                        if(                        brace_num_554==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value406=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1479, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_544)),(char*)come_increment_ref_count(attribute_545))));
    come_call_finalizer3(asm_fun_name_544,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_545 = come_decrement_ref_count2(attribute_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value406,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value407 = (void*)0;
char* __dec_obj179;
char* head_555;
int head_sline_556;
void* __right_value408 = (void*)0;
char* buf_557;
void* __right_value409 = (void*)0;
struct sNode* node_558;
_Bool Value_559;
    while(*info->p) {
        __dec_obj179=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_555=info->p;
        head_sline_556=info->sline;
        buf_557=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_557 = come_decrement_ref_count2(buf_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_558=(struct sNode*)come_increment_ref_count(top_level_v99(buf_557,head_555,head_sline_556,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_558!=((void*)0)) {
            Value_559=node_compile(node_558,info);
            if(            !Value_559) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_557 = come_decrement_ref_count2(buf_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_558) { node_558 = come_decrement_ref_count2(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_557 = come_decrement_ref_count2(buf_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_558) { node_558 = come_decrement_ref_count2(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value410 = (void*)0;
char* name_560;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* result_type_561;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __list_values1___562[8];
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1sTypeph* param_types_573;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
char* __list_values2___574[8];
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1charph* param_names_578;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1charph* param_default_parametors_579;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sFun* main_fun_580;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
char* name_602;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* result_type_603;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* __list_values3___604[1];
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1sTypeph* param_types_605;
void* __right_value470 = (void*)0;
char* __list_values4___606[1];
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1charph* param_names_607;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct list$1charph* param_default_parametors_608;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sFun* main_fun_609;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
char* name_610;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* result_type_611;
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
struct sType* __list_values5___612[7];
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1sTypeph* param_types_613;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
char* __list_values6___614[7];
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1charph* param_names_615;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1charph* param_default_parametors_616;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sFun* main_fun_617;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* name_618;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* result_type_619;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __list_values7___620[5];
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1sTypeph* param_types_621;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
char* __list_values8___622[5];
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct list$1charph* param_names_623;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1charph* param_default_parametors_624;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sFun* main_fun_625;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
char* name_626;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* result_type_627;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sType* __list_values9___628[1];
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1sTypeph* param_types_629;
void* __right_value557 = (void*)0;
char* __list_values10___630[1];
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1charph* param_names_631;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct list$1charph* param_default_parametors_632;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sFun* main_fun_633;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
char* name_634;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* result_type_635;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __list_values11___636[4];
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1sTypeph* param_types_637;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
char* __list_values12___638[4];
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1charph* param_names_639;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1charph* param_default_parametors_640;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sFun* main_fun_641;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
char* name_642;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sType* result_type_643;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* __list_values13___644[3];
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1sTypeph* param_types_645;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
char* __list_values14___646[3];
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct list$1charph* param_names_647;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1charph* param_default_parametors_648;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sFun* main_fun_649;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* name_650;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* result_type_651;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sType* __list_values15___652[1];
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct list$1sTypeph* param_types_653;
void* __right_value632 = (void*)0;
char* __list_values16___654[1];
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct list$1charph* param_names_655;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct list$1charph* param_default_parametors_656;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sFun* main_fun_657;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
char* name_658;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sType* result_type_659;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sType* __list_values17___660[3];
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1sTypeph* param_types_661;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
char* __list_values18___662[3];
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct list$1charph* param_names_663;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* param_default_parametors_664;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sFun* main_fun_665;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
char* name_666;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sType* result_type_667;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct list$1voidph* param_types_668;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct list$1charph* param_names_669;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct list$1charph* param_default_parametors_670;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sFun* main_fun_671;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
char* name_672;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sType* result_type_673;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sType* __list_values19___674[4];
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1sTypeph* param_types_675;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
char* __list_values20___676[4];
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct list$1charph* param_names_677;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1charph* param_default_parametors_678;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sFun* main_fun_679;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
char* name_680;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sType* result_type_681;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1voidph* param_types_682;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct list$1charph* param_names_683;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1charph* param_default_parametors_684;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sFun* fun_685;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
char* name_686;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sType* result_type_687;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct list$1voidph* param_types_688;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct list$1charph* param_names_689;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1charph* param_default_parametors_690;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sFun* fun_691;
void* __right_value744 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_560=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_561=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
        param_types_573=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___562[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value414=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values1___562[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value416=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values1___562[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value418=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))),
__list_values1___562[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values1___562[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))),
__list_values1___562[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values1___562[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values1___562[7]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1536, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),8,__list_values1___562)));
        come_call_finalizer3(__right_value414,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value416,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_578=(struct list$1charph*)come_increment_ref_count((__list_values2___574[0]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("count")))),
__list_values2___574[1]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("size")))),
__list_values2___574[2]=(char*)come_increment_ref_count(((char*)(__right_value437=__builtin_string("sname")))),
__list_values2___574[3]=(char*)come_increment_ref_count(((char*)(__right_value438=__builtin_string("sline")))),
__list_values2___574[4]=(char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string("class_name")))),
__list_values2___574[5]=(char*)come_increment_ref_count(((char*)(__right_value440=__builtin_string("finalizer_fun")))),
__list_values2___574[6]=(char*)come_increment_ref_count(((char*)(__right_value441=__builtin_string("cloner_fun")))),
__list_values2___574[7]=(char*)come_increment_ref_count(((char*)(__right_value442=__builtin_string("get_hash_key_fun")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),8,__list_values2___574)));
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_579=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_579,((void*)0));
        list$1charphp_push_back(param_default_parametors_579,((void*)0));
        list$1charphp_push_back(param_default_parametors_579,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_579,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_579,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_580=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_560),(struct sType*)come_increment_ref_count(result_type_561),(struct list$1sTypeph*)come_increment_ref_count(param_types_573),(struct list$1charph*)come_increment_ref_count(param_names_578),(struct list$1charph*)come_increment_ref_count(param_default_parametors_579),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_560)),(struct sFun*)come_increment_ref_count(main_fun_580));
        name_560 = come_decrement_ref_count2(name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_573,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_578,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_579,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_580,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_602=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_603=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
        param_types_605=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___604[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value467=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1556, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1556, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),1,__list_values3___604)));
        come_call_finalizer3(__right_value467,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_607=(struct list$1charph*)come_increment_ref_count((__list_values4___606[0]=(char*)come_increment_ref_count(((char*)(__right_value470=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),1,__list_values4___606)));
        __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_608=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1558, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_609=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1559, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_602),(struct sType*)come_increment_ref_count(result_type_603),(struct list$1sTypeph*)come_increment_ref_count(param_types_605),(struct list$1charph*)come_increment_ref_count(param_names_607),(struct list$1charph*)come_increment_ref_count(param_default_parametors_608),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_602)),(struct sFun*)come_increment_ref_count(main_fun_609));
        name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_605,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_607,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_608,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_609,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_610=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_611=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1570, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
        param_types_613=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___612[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value486=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values5___612[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values5___612[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value490=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values5___612[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value492=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values5___612[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value494=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values5___612[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value496=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values5___612[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value498=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1571, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),7,__list_values5___612)));
        come_call_finalizer3(__right_value486,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value490,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value494,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value496,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value498,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_615=(struct list$1charph*)come_increment_ref_count((__list_values6___614[0]=(char*)come_increment_ref_count(((char*)(__right_value501=__builtin_string("fun")))),
__list_values6___614[1]=(char*)come_increment_ref_count(((char*)(__right_value502=__builtin_string("mem")))),
__list_values6___614[2]=(char*)come_increment_ref_count(((char*)(__right_value503=__builtin_string("protocol_fun")))),
__list_values6___614[3]=(char*)come_increment_ref_count(((char*)(__right_value504=__builtin_string("protocol_obj")))),
__list_values6___614[4]=(char*)come_increment_ref_count(((char*)(__right_value505=__builtin_string("call_finalizer_only")))),
__list_values6___614[5]=(char*)come_increment_ref_count(((char*)(__right_value506=__builtin_string("no_decrement")))),
__list_values6___614[6]=(char*)come_increment_ref_count(((char*)(__right_value507=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1572, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),7,__list_values6___614)));
        __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_616=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1573, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_617=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1574, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_610),(struct sType*)come_increment_ref_count(result_type_611),(struct list$1sTypeph*)come_increment_ref_count(param_types_613),(struct list$1charph*)come_increment_ref_count(param_names_615),(struct list$1charph*)come_increment_ref_count(param_default_parametors_616),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_610)),(struct sFun*)come_increment_ref_count(main_fun_617));
        name_610 = come_decrement_ref_count2(name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_613,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_615,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_617,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_618=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_619=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1585, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
        param_types_621=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___620[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value523=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values7___620[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value525=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values7___620[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value527=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values7___620[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value529=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"bool",(_Bool)0,info)))),
__list_values7___620[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value531=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1586, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),5,__list_values7___620)));
        come_call_finalizer3(__right_value523,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value525,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value527,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value529,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_623=(struct list$1charph*)come_increment_ref_count((__list_values8___622[0]=(char*)come_increment_ref_count(((char*)(__right_value534=__builtin_string("mem")))),
__list_values8___622[1]=(char*)come_increment_ref_count(((char*)(__right_value535=__builtin_string("protocol_fun")))),
__list_values8___622[2]=(char*)come_increment_ref_count(((char*)(__right_value536=__builtin_string("protocol_obj")))),
__list_values8___622[3]=(char*)come_increment_ref_count(((char*)(__right_value537=__builtin_string("no_decrement")))),
__list_values8___622[4]=(char*)come_increment_ref_count(((char*)(__right_value538=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1587, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),5,__list_values8___622)));
        __right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_624=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_625=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1589, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_618),(struct sType*)come_increment_ref_count(result_type_619),(struct list$1sTypeph*)come_increment_ref_count(param_types_621),(struct list$1charph*)come_increment_ref_count(param_names_623),(struct list$1charph*)come_increment_ref_count(param_default_parametors_624),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_618)),(struct sFun*)come_increment_ref_count(main_fun_625));
        name_618 = come_decrement_ref_count2(name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_619,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_621,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_623,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_624,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_625,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_626=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_627=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1600, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
        param_types_629=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___628[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value554=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1601, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),1,__list_values9___628)));
        come_call_finalizer3(__right_value554,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_631=(struct list$1charph*)come_increment_ref_count((__list_values10___630[0]=(char*)come_increment_ref_count(((char*)(__right_value557=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1602, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),1,__list_values10___630)));
        __right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_632=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_633=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_626),(struct sType*)come_increment_ref_count(result_type_627),(struct list$1sTypeph*)come_increment_ref_count(param_types_629),(struct list$1charph*)come_increment_ref_count(param_names_631),(struct list$1charph*)come_increment_ref_count(param_default_parametors_632),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_626)),(struct sFun*)come_increment_ref_count(main_fun_633));
        name_626 = come_decrement_ref_count2(name_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_629,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_631,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_632,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_633,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_634=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_635=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1615, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
        param_types_637=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___636[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value573=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values11___636[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value575=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))),
__list_values11___636[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value577=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values11___636[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value579=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1616, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),4,__list_values11___636)));
        come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value575,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value579,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_639=(struct list$1charph*)come_increment_ref_count((__list_values12___638[0]=(char*)come_increment_ref_count(((char*)(__right_value582=__builtin_string("block")))),
__list_values12___638[1]=(char*)come_increment_ref_count(((char*)(__right_value583=__builtin_string("sname")))),
__list_values12___638[2]=(char*)come_increment_ref_count(((char*)(__right_value584=__builtin_string("sline")))),
__list_values12___638[3]=(char*)come_increment_ref_count(((char*)(__right_value585=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1617, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),4,__list_values12___638)));
        __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_640=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1618, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_640,((void*)0));
        list$1charphp_push_back(param_default_parametors_640,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_640,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_640,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_641=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1623, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_634),(struct sType*)come_increment_ref_count(result_type_635),(struct list$1sTypeph*)come_increment_ref_count(param_types_637),(struct list$1charph*)come_increment_ref_count(param_names_639),(struct list$1charph*)come_increment_ref_count(param_default_parametors_640),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_634)),(struct sFun*)come_increment_ref_count(main_fun_641));
        name_634 = come_decrement_ref_count2(name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_637,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_639,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_640,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_641,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_642=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_643=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
        param_types_645=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___644[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value604=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values13___644[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value606=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values13___644[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value608=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),3,__list_values13___644)));
        come_call_finalizer3(__right_value604,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value606,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value608,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_647=(struct list$1charph*)come_increment_ref_count((__list_values14___646[0]=(char*)come_increment_ref_count(((char*)(__right_value611=__builtin_string("b")))),
__list_values14___646[1]=(char*)come_increment_ref_count(((char*)(__right_value612=__builtin_string("c")))),
__list_values14___646[2]=(char*)come_increment_ref_count(((char*)(__right_value613=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),3,__list_values14___646)));
        __right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_648=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_649=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_642),(struct sType*)come_increment_ref_count(result_type_643),(struct list$1sTypeph*)come_increment_ref_count(param_types_645),(struct list$1charph*)come_increment_ref_count(param_names_647),(struct list$1charph*)come_increment_ref_count(param_default_parametors_648),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_642)),(struct sFun*)come_increment_ref_count(main_fun_649));
        name_642 = come_decrement_ref_count2(name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_645,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_647,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_648,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_649,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_650=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_651=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info));
        param_types_653=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___652[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value629=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),1,__list_values15___652)));
        come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_655=(struct list$1charph*)come_increment_ref_count((__list_values16___654[0]=(char*)come_increment_ref_count(((char*)(__right_value632=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),1,__list_values16___654)));
        __right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_656=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_657=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_650),(struct sType*)come_increment_ref_count(result_type_651),(struct list$1sTypeph*)come_increment_ref_count(param_types_653),(struct list$1charph*)come_increment_ref_count(param_names_655),(struct list$1charph*)come_increment_ref_count(param_default_parametors_656),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_650)),(struct sFun*)come_increment_ref_count(main_fun_657));
        name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_651,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_653,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_655,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_656,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_657,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_658=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_659=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1711, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
        param_types_661=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___660[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value648=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values17___660[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value650=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values17___660[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value652=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1712, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),3,__list_values17___660)));
        come_call_finalizer3(__right_value648,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value650,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value652,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_663=(struct list$1charph*)come_increment_ref_count((__list_values18___662[0]=(char*)come_increment_ref_count(((char*)(__right_value655=xsprintf("come_malloc")))),
__list_values18___662[1]=(char*)come_increment_ref_count(((char*)(__right_value656=xsprintf("come_debug")))),
__list_values18___662[2]=(char*)come_increment_ref_count(((char*)(__right_value657=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1713, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),3,__list_values18___662)));
        __right_value655 = come_decrement_ref_count2(__right_value655, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_664=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1714, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_664,((void*)0));
        main_fun_665=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1716, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_658),(struct sType*)come_increment_ref_count(result_type_659),(struct list$1sTypeph*)come_increment_ref_count(param_types_661),(struct list$1charph*)come_increment_ref_count(param_names_663),(struct list$1charph*)come_increment_ref_count(param_default_parametors_664),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_658)),(struct sFun*)come_increment_ref_count(main_fun_665));
        name_658 = come_decrement_ref_count2(name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_659,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_661,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_663,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_664,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_665,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_666=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_667=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1727, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
        param_types_668=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1728, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
        param_names_669=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1729, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        param_default_parametors_670=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1730, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_671=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1731, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_666),(struct sType*)come_increment_ref_count(result_type_667),(struct list$1voidph*)come_increment_ref_count(param_types_668),(struct list$1charph*)come_increment_ref_count(param_names_669),(struct list$1charph*)come_increment_ref_count(param_default_parametors_670),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_666)),(struct sFun*)come_increment_ref_count(main_fun_671));
        name_666 = come_decrement_ref_count2(name_666, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_667,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_668,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_670,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_671,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_672=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_673=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1742, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info));
        param_types_675=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___674[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value689=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void*",(_Bool)0,info)))),
__list_values19___674[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value691=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)))),
__list_values19___674[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value693=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
__list_values19___674[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value695=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1743, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),4,__list_values19___674)));
        come_call_finalizer3(__right_value689,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value691,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value693,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value695,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_677=(struct list$1charph*)come_increment_ref_count((__list_values20___676[0]=(char*)come_increment_ref_count(((char*)(__right_value698=__builtin_string("mem")))),
__list_values20___676[1]=(char*)come_increment_ref_count(((char*)(__right_value699=__builtin_string("sname")))),
__list_values20___676[2]=(char*)come_increment_ref_count(((char*)(__right_value700=__builtin_string("sline")))),
__list_values20___676[3]=(char*)come_increment_ref_count(((char*)(__right_value701=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),4,__list_values20___676)));
        __right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value699 = come_decrement_ref_count2(__right_value699, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_678=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1745, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        main_fun_679=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1746, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_672),(struct sType*)come_increment_ref_count(result_type_673),(struct list$1sTypeph*)come_increment_ref_count(param_types_675),(struct list$1charph*)come_increment_ref_count(param_names_677),(struct list$1charph*)come_increment_ref_count(param_default_parametors_678),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_672)),(struct sFun*)come_increment_ref_count(main_fun_679));
        name_672 = come_decrement_ref_count2(name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_673,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_675,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_677,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_678,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_679,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_680=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_681=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1757, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
        param_types_682=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1758, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
        param_names_683=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1759, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        param_default_parametors_684=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1760, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        fun_685=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1761, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_680),(struct sType*)come_increment_ref_count(result_type_681),(struct list$1voidph*)come_increment_ref_count(param_types_682),(struct list$1charph*)come_increment_ref_count(param_names_683),(struct list$1charph*)come_increment_ref_count(param_default_parametors_684),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_680)),(struct sFun*)come_increment_ref_count(fun_685));
        name_680 = come_decrement_ref_count2(name_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_681,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_682,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_683,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_684,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_685,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_686=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_687=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1789, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
        param_types_688=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1790, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
        param_names_689=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1791, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        param_default_parametors_690=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1792, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        fun_691=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1793, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_686),(struct sType*)come_increment_ref_count(result_type_687),(struct list$1voidph*)come_increment_ref_count(param_types_688),(struct list$1charph*)come_increment_ref_count(param_names_689),(struct list$1charph*)come_increment_ref_count(param_default_parametors_690),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_686)),(struct sFun*)come_increment_ref_count(fun_691));
        name_686 = come_decrement_ref_count2(name_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_687,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_688,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_691,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_563;
struct list$1sTypeph* __result313__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_563=0;    i_563<num_value;    i_563++    ){
        list$1sTypephp_push_back(self,values[i_563]);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value429 = (void*)0;
struct list_item$1sTypeph* litem_564;
struct sType* __dec_obj180;
void* __right_value430 = (void*)0;
struct list_item$1sTypeph* litem_565;
struct sType* __dec_obj181;
void* __right_value431 = (void*)0;
struct list_item$1sTypeph* litem_566;
struct sType* __dec_obj182;
struct list$1sTypeph* __result312__;
    if(    self->len==0) {
        litem_564=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value429=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0))));
        litem_564->prev=((void*)0);
        litem_564->next=((void*)0);
        __dec_obj180=litem_564->item;
        litem_564->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_564;
        self->head=litem_564;
    }
    else if(    self->len==1) {
        litem_565=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value430=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0))));
        litem_565->prev=self->head;
        litem_565->next=((void*)0);
        __dec_obj181=litem_565->item;
        litem_565->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_565;
        self->head->next=litem_565;
    }
    else {
        litem_566=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value431=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0))));
        litem_566->prev=self->tail;
        litem_566->next=((void*)0);
        __dec_obj182=litem_566->item;
        litem_566->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_566;
        self->tail=litem_566;
    }
    self->len++;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_567;
struct list_item$1sTypeph* prev_it_568;
    it_567=self->head;
    while(it_567!=((void*)0)) {
        prev_it_568=it_567;
        it_567=it_567->next;
        come_call_finalizer3(prev_it_568,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj183;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj183=self->item;
            come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_569;
struct list_item$1sTypeph* prev_it_570;
    it_569=self->head;
    while(it_569!=((void*)0)) {
        prev_it_570=it_569;
        it_569=it_569->next;
        come_call_finalizer3(prev_it_570,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result314__;
void* __right_value432 = (void*)0;
struct list$1sTypeph* result_572;
struct list$1sTypeph* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_572=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key));
    if(    self!=((void*)0)) {
        result_572->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_572->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_572->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_572->it=self->it;
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_572;
    come_call_finalizer3(result_572,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self){
unsigned int result_571;
    result_571=0;
    result_571+=int_get_hash_key(((int)self->head));
    result_571+=int_get_hash_key(((int)self->tail));
    result_571+=int_get_hash_key(((int)self->len));
    result_571+=int_get_hash_key(((int)self->it));
    return result_571;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_575;
struct list$1charph* __result316__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_575=0;    i_575<num_value;    i_575++    ){
        list$1charphp_push_back(self,values[i_575]);
    }
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result317__;
void* __right_value443 = (void*)0;
struct list$1charph* result_577;
struct list$1charph* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_577=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key));
    if(    self!=((void*)0)) {
        result_577->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_577->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_577->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_577->it=self->it;
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_577;
    come_call_finalizer3(result_577,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_576;
    result_576=0;
    result_576+=int_get_hash_key(((int)self->head));
    result_576+=int_get_hash_key(((int)self->tail));
    result_576+=int_get_hash_key(((int)self->len));
    result_576+=int_get_hash_key(((int)self->it));
    return result_576;
}

static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_598;
unsigned int it_599;
_Bool same_key_exist_600;
char* it2_601;
struct map$2charphsFunph* __result329__;
    if(    self->len*10>=self->size) {
        map$2charphsFunphp_rehash(self);
    }
    hash_598=string_get_hash_key(key)%self->size;
    it_599=hash_598;
    while((_Bool)1) {
        if(        self->item_existance[it_599]) {
            if(            charp_equals(self->keys[it_599],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_599]);
                    self->keys[it_599] = come_decrement_ref_count2(self->keys[it_599], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_599]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_599]);
                    self->keys[it_599]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_599],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_599]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_599]=item;
                }
                break;
            }
            it_599++;
            if(            it_599>=self->size) {
                it_599=0;
            }
            else if(            it_599==hash_598) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_599]=(_Bool)1;
            if(            1) {
                self->keys[it_599]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_599]=key;
            }
            if(            1) {
                self->items[it_599]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_599]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_600=(_Bool)0;
    for(    it2_601=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_601=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_601,key)) {
            same_key_exist_600=(_Bool)1;
        }
    }
    if(    !same_key_exist_600) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_581;
void* __right_value457 = (void*)0;
char** keys_582;
void* __right_value458 = (void*)0;
struct sFun** items_583;
void* __right_value459 = (void*)0;
_Bool* item_existance_584;
int len_585;
char* it_588;
struct sFun* default_value_591;
void* __right_value460 = (void*)0;
struct sFun* it2_592;
unsigned int hash_595;
int n_596;
struct sFun* default_value_597;
void* __right_value461 = (void*)0;
default_value_591 = (void*)0;
default_value_597 = (void*)0;
    size_581=self->size*10;
    keys_582=(char**)come_increment_ref_count(((char**)(__right_value457=(char**)come_calloc(1, sizeof(char*)*(1*(size_581)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_583=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value458=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_581)), "/usr/local/include/comelang.h", 2708, "struct sFun**", (void*)0, (void*)0, (void*)0))));
    item_existance_584=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value459=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_581)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_585=0;
    for(    it_588=map$2charphsFunphp_begin(self);    !map$2charphsFunphp_end(self);    it_588=map$2charphsFunphp_next(self)    ){
        memset(&default_value_591,0,sizeof(struct sFun*));
        it2_592=((struct sFun*)(__right_value460=map$2charphsFunphp_at(self,it_588,default_value_591)));
        come_call_finalizer3(__right_value460,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_595=string_get_hash_key(it_588)%size_581;
        n_596=hash_595;
        while((_Bool)1) {
            if(            item_existance_584[n_596]) {
                n_596++;
                if(                n_596>=size_581) {
                    n_596=0;
                }
                else if(                n_596==hash_595) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_584[n_596]=(_Bool)1;
                keys_582[n_596]=it_588;
                items_583[n_596]=((struct sFun*)(__right_value461=map$2charphsFunphp_at(self,it_588,default_value_597)));
                come_call_finalizer3(__right_value461,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_585++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_582;
    self->items=items_583;
    self->item_existance=item_existance_584;
    self->size=size_581;
    self->len=len_585;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_586;
char* __result319__;
char* __result320__;
char* result_587;
char* __result321__;
result_586 = (void*)0;
result_587 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_586,0,sizeof(char*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_586;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_587,0,sizeof(char*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_587;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_589;
char* __result322__;
char* __result323__;
char* result_590;
char* __result324__;
result_589 = (void*)0;
result_590 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_589,0,sizeof(char*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_589;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_590,0,sizeof(char*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_590;
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_593;
unsigned int it_594;
struct sFun* __result325__;
struct sFun* __result326__;
struct sFun* __result327__;
struct sFun* __result328__;
    hash_593=string_get_hash_key(((char*)key))%self->size;
    it_594=hash_593;
    while((_Bool)1) {
        if(        self->item_existance[it_594]) {
            if(            charp_equals(self->keys[it_594],key)) {
                __result325__ = gComeFunResultObject = __result_obj__ = self->items[it_594];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
            it_594++;
            if(            it_594>=self->size) {
                it_594=0;
            }
            else if(            it_594==hash_593) {
                __result326__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result326__;
            }
        }
        else {
            __result327__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result327__;
        }
    }
    __result328__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_692;
_Bool is_type_name_flag_693;
int sline_694;
_Bool define_struct_nobody_695;
char* p_696;
int sline_697;
void* __right_value745 = (void*)0;
char* word_698;
_Bool define_function_pointer_result_function_699;
_Bool define_variable_between_brace_700;
char* p_701;
void* __right_value746 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_702=0;
char* fun_name_703=0;
_Bool err_704=0;
void* __right_value747 = (void*)0;
char* word_705;
_Bool define_function_flag_706;
char* p_707;
void* __right_value748 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_708=0;
char* fun_name_709=0;
_Bool err_710=0;
char* word_711;
void* __right_value749 = (void*)0;
char* __dec_obj186;
void* __right_value750 = (void*)0;
char* __dec_obj187;
char* __dec_obj188;
void* __right_value751 = (void*)0;
char* __dec_obj189;
_Bool define_variable_712;
char* p_713;
void* __right_value752 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_714=0;
char* fun_name_715=0;
_Bool err_716=0;
void* __right_value753 = (void*)0;
char* word_717;
void* __right_value754 = (void*)0;
char* word_718;
char* p_719;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
char* word_720;
void* __right_value758 = (void*)0;
char* __dec_obj190;
void* __right_value759 = (void*)0;
char* word_721;
void* __right_value760 = (void*)0;
char* word_724;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* node_725;
struct sNode* __result331__;
void* __right_value763 = (void*)0;
struct sNode* __result332__;
char* header_head_726;
void* __right_value764 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_727=0;
char* fun_name_728=0;
_Bool err_729=0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct list$1voidph* param_types_730;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct list$1charph* param_names_731;
void* __right_value769 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_732=0;
char* param_name_733=0;
_Bool err_734=0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct list$1voidph* param_types2_739;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct list$1charph* param_names2_740;
void* __right_value779 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_741=0;
char* param_name_742=0;
_Bool err_743=0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
char* header_tail_745;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sType* result_type2_746;
struct sType* __dec_obj194;
void* __right_value784 = (void*)0;
struct list$1voidph* __dec_obj195;
void* __right_value785 = (void*)0;
struct list$1charph* __dec_obj196;
_Bool var_args_747;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct buffer* header_buf_748;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct list$1charph* param_default_parametors_749;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sFun* fun_750;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sFun* fun2_754;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value847 = (void*)0;
struct sNode* __result362__;
void* __right_value848 = (void*)0;
struct sNode* node_795;
struct sNode* __result363__;
void* __right_value849 = (void*)0;
struct sNode* node_796;
struct sNode* __result364__;
void* __right_value850 = (void*)0;
struct sNode* node_797;
char* source_tail_798;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct buffer* header_799;
struct sNode* __result365__;
void* __right_value853 = (void*)0;
char* buf2_800;
void* __right_value854 = (void*)0;
struct sNode* __result366__;
    info->in_top_level=(_Bool)1;
    source_head_692=info->p;
    is_type_name_flag_693=is_type_name(buf,info);
    sline_694=info->sline;
    define_struct_nobody_695=(_Bool)0;
    {
        p_696=info->p;
        sline_697=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_698=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_695=(_Bool)1;
                }
                word_698 = come_decrement_ref_count2(word_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_697;
    }
    define_function_pointer_result_function_699=(_Bool)0;
    define_variable_between_brace_700=(_Bool)0;
    if(    is_type_name_flag_693) {
        p_701=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value746=backtrace_parse_type((_Bool)0,info)));
            result_type_702=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_703=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_704=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value746,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_699=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_705=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_705,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_700=(_Bool)1;
                            }
                        }
                        word_705 = come_decrement_ref_count2(word_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_703 = come_decrement_ref_count2(fun_name_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_694;
    }
    define_function_flag_706=(_Bool)0;
    if(    is_type_name_flag_693&&!define_function_pointer_result_function_699&&charp_operator_not_equals(buf,"__typeof__")) {
        p_707=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value748=backtrace_parse_type((_Bool)0,info)));
            result_type_708=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_709=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_710=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value748,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_708,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_709 = come_decrement_ref_count2(fun_name_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_711=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj186=word_711;
                word_711=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_711,"extern")) {
                    __dec_obj187=word_711;
                    word_711=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj188=word_711;
                word_711=((void*)0);
                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_711) {
                if(                is_type_name(word_711,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj189=word_711;
                        word_711=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_711)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_693) {
                        define_function_flag_706=(_Bool)1;
                    }
                }
            }
            word_711 = come_decrement_ref_count2(word_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_707;
        info->sline=sline_694;
    }
    define_variable_712=(_Bool)1;
    if(    is_type_name_flag_693&&!define_function_pointer_result_function_699) {
        p_713=info->p;
        info->p=head;
        if(        !is_type_name_flag_693) {
            define_variable_712=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value752=backtrace_parse_type((_Bool)0,info)));
            result_type_714=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_715=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_716=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value752,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_717=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_712=(_Bool)1;
                            }
                        }
                        word_717 = come_decrement_ref_count2(word_717, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_718=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_718,info)&&*info->p!=40) {
                            define_variable_712=(_Bool)1;
                        }
                    }
                    word_718 = come_decrement_ref_count2(word_718, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_715 = come_decrement_ref_count2(fun_name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_712=(_Bool)0;
        }
        else if(        define_variable_712) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_712=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_712=(_Bool)0;
            }
        }
        info->p=p_713;
        info->sline=sline_694;
    }
    else {
        define_variable_712=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_699) {
        p_719=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value755=parse_struct_attribute(info)));
            __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value756=parse_word(info)));
                __right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_720=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj190=word_720;
                        word_720=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_720,"extends")) {
                            define_variable_712=(_Bool)0;
                        }
                    }
                    word_720 = come_decrement_ref_count2(word_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_712=(_Bool)0;
        }
        else if(        define_variable_712) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_712=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_712=(_Bool)0;
            }
        }
        info->p=p_719;
        info->sline=sline_694;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_721=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charphp_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_724=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_724)));
                    word_724 = come_decrement_ref_count2(word_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_725=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result331__ = gComeFunResultObject = __result_obj__ = node_725;
            if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_721 = come_decrement_ref_count2(word_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result331__;
            if(node_725) { node_725 = come_decrement_ref_count2(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_721 = come_decrement_ref_count2(word_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_695) {
    }
    else if(    define_variable_between_brace_700) {
        info->p=head;
        info->sline=sline_694;
        __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value763=parse_global_variable(info)));
        if(__right_value763) { __right_value763 = come_decrement_ref_count2(__right_value763, ((struct sNode*)__right_value763)->finalize, ((struct sNode*)__right_value763)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    else if(    define_function_pointer_result_function_699) {
        header_head_726=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value764=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_727=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_728=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_729=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value764,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_730=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2119, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
            param_names_731=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2120, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value769=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_732=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_733=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_734=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value769,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_734) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1voidphp_push_back(param_types_730,(struct sType*)come_increment_ref_count(param_type_732));
                    static int num_function_pointer_result_var_name_a_738=0;
                    list$1charphp_push_back(param_names_731,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_738)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value774=parse_word(info)));
                        __right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_733 = come_decrement_ref_count2(param_name_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_732,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_733 = come_decrement_ref_count2(param_name_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_739=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2166, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
                param_names2_740=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2167, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value779=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_741=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_742=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_743=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value779,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_743) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1voidphp_push_back(param_types2_739,(struct sType*)come_increment_ref_count(param_type_741));
                        static int num_function_pointer_result_var_name_b_744=0;
                        list$1charphp_push_back(param_names2_740,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_744)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value781=parse_word(info)));
                            __right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_741,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_742 = come_decrement_ref_count2(param_name_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_741,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_742 = come_decrement_ref_count2(param_name_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_745=info->p;
                result_type2_746=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2209, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"lambda",(_Bool)0,info));
                __dec_obj194=result_type2_746->mResultType;
                result_type2_746->mResultType=(struct sType*)come_increment_ref_count(result_type_727);
                come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj195=result_type2_746->mParamTypes;
                result_type2_746->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types2_739));
                come_call_finalizer3(__dec_obj195,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj196=result_type2_746->mParamNames;
                result_type2_746->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_740));
                come_call_finalizer3(__dec_obj196,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_746->mVarArgs=(_Bool)0;
                result_type2_746->mStatic=(_Bool)0;
                var_args_747=(_Bool)0;
                header_buf_748=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2219, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                buffer_append(header_buf_748,header_head_726,header_tail_745-header_head_726);
                buffer_append_char(header_buf_748,0);
                param_default_parametors_749=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2223, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
                fun_750=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2225, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_728)),(struct sType*)come_increment_ref_count(result_type2_746),(struct list$1voidph*)come_increment_ref_count(param_types_730),(struct list$1charph*)come_increment_ref_count(param_names_731),(struct list$1charph*)come_increment_ref_count(param_default_parametors_749),(_Bool)1,var_args_747,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_748)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_754=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value797=__builtin_string(fun_name_728)))));
                __right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_754==((void*)0)||fun2_754->mExternal) {
                    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_728)),(struct sFun*)come_increment_ref_count(fun_750));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2238, "struct sNode", (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value801=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2238, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_750),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value847=_inf_value2));
                come_call_finalizer3(param_types2_739,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_740,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_746,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_748,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_749,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_750,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_754,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_730,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_728 = come_decrement_ref_count2(fun_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value801,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value847) { __right_value847 = come_decrement_ref_count2(__right_value847, ((struct sNode*)__right_value847)->finalize, ((struct sNode*)__right_value847)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result362__;
                come_call_finalizer3(param_types2_739,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_740,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_746,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_748,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_749,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_750,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_754,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_730,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_731,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_728 = come_decrement_ref_count2(fun_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_694;
        node_795=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result363__ = gComeFunResultObject = __result_obj__ = node_795;
        if(node_795) { node_795 = come_decrement_ref_count2(node_795, ((struct sNode*)node_795)->finalize, ((struct sNode*)node_795)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result363__;
        if(node_795) { node_795 = come_decrement_ref_count2(node_795, ((struct sNode*)node_795)->finalize, ((struct sNode*)node_795)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_706) {
        info->p=head;
        info->sline=sline_694;
        node_796=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result364__ = gComeFunResultObject = __result_obj__ = node_796;
        if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result364__;
        if(node_796) { node_796 = come_decrement_ref_count2(node_796, ((struct sNode*)node_796)->finalize, ((struct sNode*)node_796)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_712) {
        info->p=head;
        info->sline=sline_694;
        node_797=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_798=info->p;
        header_799=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2270, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append(header_799,source_head_692,source_tail_798-source_head_692);
        __result365__ = gComeFunResultObject = __result_obj__ = node_797;
        if(node_797) { node_797 = come_decrement_ref_count2(node_797, ((struct sNode*)node_797)->finalize, ((struct sNode*)node_797)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_799,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result365__;
        if(node_797) { node_797 = come_decrement_ref_count2(node_797, ((struct sNode*)node_797)->finalize, ((struct sNode*)node_797)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_799,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_694;
    buf2_800=(char*)come_increment_ref_count(parse_word(info));
    __result366__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value854=top_level_v98(buf2_800,head,head_sline,info)));
    buf2_800 = come_decrement_ref_count2(buf2_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value854) { __right_value854 = come_decrement_ref_count2(__right_value854, ((struct sNode*)__right_value854)->finalize, ((struct sNode*)__right_value854)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj184;
char* __dec_obj185;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj184=self->v1;
            come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj185=self->v2;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_722;
struct list_item$1charph* prev_it_723;
struct list$1charph* __result330__;
    it_722=self->head;
    while(it_722!=((void*)0)) {
        prev_it_723=it_722;
        it_722=it_722->next;
        come_call_finalizer3(prev_it_723,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value770 = (void*)0;
struct list_item$1voidph* litem_735;
void* __dec_obj191;
void* __right_value771 = (void*)0;
struct list_item$1voidph* litem_736;
void* __dec_obj192;
void* __right_value772 = (void*)0;
struct list_item$1voidph* litem_737;
void* __dec_obj193;
struct list$1voidph* __result333__;
    if(    self->len==0) {
        litem_735=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value770=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_735->prev=((void*)0);
        litem_735->next=((void*)0);
        __dec_obj191=litem_735->item;
        litem_735->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj191,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_735;
        self->head=litem_735;
    }
    else if(    self->len==1) {
        litem_736=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value771=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_736->prev=self->head;
        litem_736->next=((void*)0);
        __dec_obj192=litem_736->item;
        litem_736->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_736;
        self->head->next=litem_736;
    }
    else {
        litem_737=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value772=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_737->prev=self->tail;
        litem_737->next=((void*)0);
        __dec_obj193=litem_737->item;
        litem_737->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj193,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_737;
        self->tail=litem_737;
    }
    self->len++;
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_751;
unsigned int hash_752;
unsigned int it_753;
struct sFun* __result334__;
struct sFun* __result335__;
struct sFun* __result336__;
struct sFun* __result337__;
default_value_751 = (void*)0;
    memset(&default_value_751,0,sizeof(struct sFun*));
    hash_752=string_get_hash_key(((char*)key))%self->size;
    it_753=hash_752;
    while((_Bool)1) {
        if(        self->item_existance[it_753]) {
            if(            charp_equals(self->keys[it_753],key)) {
                __result334__ = gComeFunResultObject = __result_obj__ = self->items[it_753];
                come_call_finalizer3(default_value_751,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result334__;
            }
            it_753++;
            if(            it_753>=self->size) {
                it_753=0;
            }
            else if(            it_753==hash_752) {
                __result335__ = gComeFunResultObject = __result_obj__ = default_value_751;
                come_call_finalizer3(default_value_751,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result335__;
            }
        }
        else {
            __result336__ = gComeFunResultObject = __result_obj__ = default_value_751;
            come_call_finalizer3(default_value_751,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result336__;
        }
    }
    __result337__ = gComeFunResultObject = __result_obj__ = default_value_751;
    come_call_finalizer3(default_value_751,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result338__;
void* __right_value802 = (void*)0;
struct sFunNode* result_756;
void* __right_value803 = (void*)0;
char* __dec_obj197;
void* __right_value846 = (void*)0;
struct sFun* __dec_obj226;
struct sFunNode* __result361__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_756=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode", sFunNode_finalize, sFunNode_clone, sFunNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_756->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_756->sname;
        result_756->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_756->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj226=result_756->mFun;
        result_756->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj226,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_756;
    come_call_finalizer3(result_756,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static unsigned int sFunNode_get_hash_key(struct sFunNode* self){
unsigned int result_755;
    result_755=0;
    result_755+=int_get_hash_key(((int)self->sline));
    result_755+=int_get_hash_key(((int)self->sname));
    result_755+=int_get_hash_key(((int)self->sline_real));
    result_755+=int_get_hash_key(((int)self->mFun));
    return result_755;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result339__;
void* __right_value804 = (void*)0;
struct sFun* result_758;
void* __right_value805 = (void*)0;
char* __dec_obj198;
void* __right_value806 = (void*)0;
struct sType* __dec_obj199;
void* __right_value807 = (void*)0;
struct list$1voidph* __dec_obj200;
void* __right_value808 = (void*)0;
struct list$1charph* __dec_obj201;
void* __right_value809 = (void*)0;
struct list$1charph* __dec_obj202;
void* __right_value810 = (void*)0;
struct sType* __dec_obj203;
void* __right_value837 = (void*)0;
struct sBlock* __dec_obj217;
void* __right_value838 = (void*)0;
struct buffer* __dec_obj218;
void* __right_value839 = (void*)0;
struct buffer* __dec_obj219;
void* __right_value840 = (void*)0;
struct buffer* __dec_obj220;
void* __right_value841 = (void*)0;
struct buffer* __dec_obj221;
void* __right_value842 = (void*)0;
char* __dec_obj222;
void* __right_value843 = (void*)0;
char* __dec_obj223;
void* __right_value844 = (void*)0;
char* __dec_obj224;
void* __right_value845 = (void*)0;
char* __dec_obj225;
struct sFun* __result360__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_758=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj198=result_758->mName;
        result_758->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj199=result_758->mResultType;
        result_758->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj200=result_758->mParamTypes;
        result_758->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj200,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj201=result_758->mParamNames;
        result_758->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj201,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj202=result_758->mParamDefaultParametors;
        result_758->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj203=result_758->mLambdaType;
        result_758->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj217=result_758->mBlock;
        result_758->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj217,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_758->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj218=result_758->mSource;
        result_758->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj219=result_758->mSourceHead;
        result_758->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj220=result_758->mSourceHead2;
        result_758->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj221=result_758->mSourceDefer;
        result_758->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_758->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_758->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_758->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj222=result_758->mComeHeader;
        result_758->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj223=result_758->mDeclareSName;
        result_758->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_758->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_758->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_758->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj224=result_758->mAttribute;
        result_758->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj225=result_758->mFunAttribute;
        result_758->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result360__ = gComeFunResultObject = __result_obj__ = result_758;
    come_call_finalizer3(result_758,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_757;
    result_757=0;
    result_757+=int_get_hash_key(((int)self->mName));
    result_757+=int_get_hash_key(((int)self->mResultType));
    result_757+=int_get_hash_key(((int)self->mParamTypes));
    result_757+=int_get_hash_key(((int)self->mParamNames));
    result_757+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_757+=int_get_hash_key(((int)self->mLambdaType));
    result_757+=int_get_hash_key(((int)self->mBlock));
    result_757+=int_get_hash_key(((int)self->mExternal));
    result_757+=int_get_hash_key(((int)self->mVarArgs));
    result_757+=int_get_hash_key(((int)self->mSource));
    result_757+=int_get_hash_key(((int)self->mSourceHead));
    result_757+=int_get_hash_key(((int)self->mSourceHead2));
    result_757+=int_get_hash_key(((int)self->mSourceDefer));
    result_757+=int_get_hash_key(((int)self->mStatic));
    result_757+=int_get_hash_key(((int)self->mInline));
    result_757+=int_get_hash_key(((int)self->mUniq));
    result_757+=int_get_hash_key(((int)self->mGenerate));
    result_757+=int_get_hash_key(((int)self->mComeHeader));
    result_757+=int_get_hash_key(((int)self->mCloner));
    result_757+=int_get_hash_key(((int)self->mDeclareSName));
    result_757+=int_get_hash_key(((int)self->mNoResultType));
    result_757+=int_get_hash_key(((int)self->mDeclaredResultObject));
    result_757+=int_get_hash_key(((int)self->no_output_come_code2));
    result_757+=int_get_hash_key(((int)self->mAttribute));
    result_757+=int_get_hash_key(((int)self->mFunAttribute));
    return result_757;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result340__;
void* __right_value811 = (void*)0;
struct sBlock* result_760;
void* __right_value812 = (void*)0;
struct list$1sNodeph* __dec_obj204;
void* __right_value836 = (void*)0;
struct sVarTable* __dec_obj216;
struct sBlock* __result359__;
    if(    self==(void*)0) {
        __result340__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    result_760=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone, sBlock_get_hash_key));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj204=result_760->mNodes;
        result_760->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj204,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj216=result_760->mVarTable;
        result_760->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj216,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_760->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_760;
    come_call_finalizer3(result_760,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static unsigned int sBlock_get_hash_key(struct sBlock* self){
unsigned int result_759;
    result_759=0;
    result_759+=int_get_hash_key(((int)self->mNodes));
    result_759+=int_get_hash_key(((int)self->mVarTable));
    result_759+=int_get_hash_key(((int)self->mOmitSemicolon));
    return result_759;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result341__;
void* __right_value813 = (void*)0;
struct sVarTable* result_762;
void* __right_value835 = (void*)0;
struct map$2charphsVarph* __dec_obj215;
struct sVarTable* __result358__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_762=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj215=result_762->mVars;
        result_762->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj215,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_762->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_762->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_762->mID=self->mID;
    }
    __result358__ = gComeFunResultObject = __result_obj__ = result_762;
    come_call_finalizer3(result_762,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_761;
    result_761=0;
    result_761+=int_get_hash_key(((int)self->mVars));
    result_761+=int_get_hash_key(((int)self->mGlobal));
    result_761+=int_get_hash_key(((int)self->mParent));
    result_761+=int_get_hash_key(((int)self->mID));
    return result_761;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result342__;
void* __right_value814 = (void*)0;
void* __right_value820 = (void*)0;
struct map$2charphsVarph* result_766;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct list$1charp* __dec_obj210;
char* it_769;
struct sVar* default_value_772;
void* __right_value823 = (void*)0;
struct sVar* it2_775;
void* __right_value834 = (void*)0;
struct map$2charphsVarph* __result357__;
default_value_772 = (void*)0;
    if(    self==((void*)0)) {
        __result342__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_766=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2550, "struct map$2charphsVarph*", (void*)0, (void*)0, (void*)0))));
    __dec_obj210=result_766->key_list;
    result_766->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2552, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj210,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_769=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_769=map$2charphsVarphp_next(self)    ){
        memset(&default_value_772,0,sizeof(struct sVar*));
        it2_775=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_at(self,it_769,default_value_772));
        map$2charphsVarphp_put(result_766,it_769,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_775)));
        come_call_finalizer3(it2_775,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_766;
    come_call_finalizer3(result_766,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
int i_763;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1charp* __dec_obj205;
struct map$2charphsVarph* __result343__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value815=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2479, "char**", (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value816=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2480, "struct sVar**", (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value817=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2481, "_Bool*", (void*)0, (void*)0, (void*)0))));
    for(    i_763=0;    i_763<128;    i_763++    ){
        self->item_existance[i_763]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj205=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2491, "struct list$1charp*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj205,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_764;
int i_765;
    for(    i_764=0;    i_764<self->size;    i_764++    ){
        if(        self->item_existance[i_764]) {
            if(            1) {
                come_call_finalizer3(self->items[i_764],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_765=0;    i_765<self->size;    i_765++    ){
        if(        self->item_existance[i_765]) {
            if(            1) {
                self->keys[i_765] = come_decrement_ref_count2(self->keys[i_765], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj206;
char* __dec_obj207;
struct sType* __dec_obj208;
char* __dec_obj209;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj206=self->mName;
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj207=self->mCValueName;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj208=self->mType;
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj209=self->mFunName;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_767;
char* __result344__;
char* __result345__;
char* result_768;
char* __result346__;
result_767 = (void*)0;
result_768 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_767,0,sizeof(char*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_767;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_768,0,sizeof(char*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_768;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_770;
char* __result347__;
char* __result348__;
char* result_771;
char* __result349__;
result_770 = (void*)0;
result_771 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_770,0,sizeof(char*));
        __result347__ = gComeFunResultObject = __result_obj__ = result_770;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result348__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    memset(&result_771,0,sizeof(char*));
    __result349__ = gComeFunResultObject = __result_obj__ = result_771;
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_773;
unsigned int it_774;
struct sVar* __result350__;
struct sVar* __result351__;
struct sVar* __result352__;
struct sVar* __result353__;
    hash_773=string_get_hash_key(((char*)key))%self->size;
    it_774=hash_773;
    while((_Bool)1) {
        if(        self->item_existance[it_774]) {
            if(            charp_equals(self->keys[it_774],key)) {
                __result350__ = gComeFunResultObject = __result_obj__ = self->items[it_774];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result350__;
            }
            it_774++;
            if(            it_774>=self->size) {
                it_774=0;
            }
            else if(            it_774==hash_773) {
                __result351__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result351__;
            }
        }
        else {
            __result352__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result352__;
        }
    }
    __result353__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_787;
int it_788;
_Bool same_key_exist_789;
char* it2_790;
struct map$2charphsVarph* __result354__;
    if(    self->len*2>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_787=string_get_hash_key(key)%self->size;
    it_788=hash_787;
    while((_Bool)1) {
        if(        self->item_existance[it_788]) {
            if(            charp_equals(self->keys[it_788],key)) {
                if(                1) {
                    self->keys[it_788] = come_decrement_ref_count2(self->keys[it_788], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charpp_remove(self->key_list,self->keys[it_788]);
                    self->keys[it_788]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_788]);
                    self->keys[it_788]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_788],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_788]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_788]=item;
                }
                break;
            }
            it_788++;
            if(            it_788>=self->size) {
                it_788=0;
            }
            else if(            it_788==hash_787) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_788]=(_Bool)1;
            if(            1) {
                self->keys[it_788]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_788]=key;
            }
            if(            1) {
                self->items[it_788]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_788]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_789=(_Bool)0;
    for(    it2_790=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_790=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_790,key)) {
            same_key_exist_789=(_Bool)1;
        }
    }
    if(    !same_key_exist_789) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result354__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_776;
void* __right_value824 = (void*)0;
char** keys_777;
void* __right_value825 = (void*)0;
struct sVar** items_778;
void* __right_value826 = (void*)0;
_Bool* item_existance_779;
int len_780;
char* it_781;
struct sVar* default_value_782;
void* __right_value827 = (void*)0;
struct sVar* it2_783;
unsigned int hash_784;
int n_785;
struct sVar* default_value_786;
void* __right_value828 = (void*)0;
default_value_782 = (void*)0;
default_value_786 = (void*)0;
    size_776=self->size*10;
    keys_777=(char**)come_increment_ref_count(((char**)(__right_value824=(char**)come_calloc(1, sizeof(char*)*(1*(size_776)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_778=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value825=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_776)), "/usr/local/include/comelang.h", 2708, "struct sVar**", (void*)0, (void*)0, (void*)0))));
    item_existance_779=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value826=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_776)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_780=0;
    for(    it_781=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_781=map$2charphsVarphp_next(self)    ){
        memset(&default_value_782,0,sizeof(struct sVar*));
        it2_783=((struct sVar*)(__right_value827=map$2charphsVarphp_at(self,it_781,default_value_782)));
        come_call_finalizer3(__right_value827,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_784=string_get_hash_key(it_781)%size_776;
        n_785=hash_784;
        while((_Bool)1) {
            if(            item_existance_779[n_785]) {
                n_785++;
                if(                n_785>=size_776) {
                    n_785=0;
                }
                else if(                n_785==hash_784) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_779[n_785]=(_Bool)1;
                keys_777[n_785]=it_781;
                items_778[n_785]=((struct sVar*)(__right_value828=map$2charphsVarphp_at(self,it_781,default_value_786)));
                come_call_finalizer3(__right_value828,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_780++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_777;
    self->items=items_778;
    self->item_existance=item_existance_779;
    self->size=size_776;
    self->len=len_780;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result355__;
void* __right_value829 = (void*)0;
struct sVar* result_792;
void* __right_value830 = (void*)0;
char* __dec_obj211;
void* __right_value831 = (void*)0;
char* __dec_obj212;
void* __right_value832 = (void*)0;
struct sType* __dec_obj213;
void* __right_value833 = (void*)0;
char* __dec_obj214;
struct sVar* __result356__;
    if(    self==(void*)0) {
        __result355__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    result_792=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj211=result_792->mName;
        result_792->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj212=result_792->mCValueName;
        result_792->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj213=result_792->mType;
        result_792->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_792->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_792->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_792->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_792->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_792->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj214=result_792->mFunName;
        result_792->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_792;
    come_call_finalizer3(result_792,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_791;
    result_791=0;
    result_791+=int_get_hash_key(((int)self->mName));
    result_791+=int_get_hash_key(((int)self->mCValueName));
    result_791+=int_get_hash_key(((int)self->mType));
    result_791+=int_get_hash_key(((int)self->mBlockLevel));
    result_791+=int_get_hash_key(((int)self->mGlobal));
    result_791+=int_get_hash_key(((int)self->mAllocaValue));
    result_791+=int_get_hash_key(((int)self->mFunctionParam));
    result_791+=int_get_hash_key(((int)self->mNoFree));
    result_791+=int_get_hash_key(((int)self->mFunName));
    return result_791;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_793;
int i_794;
    for(    i_793=0;    i_793<self->size;    i_793++    ){
        if(        self->item_existance[i_793]) {
            if(            1) {
                come_call_finalizer3(self->items[i_793],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_794=0;    i_794<self->size;    i_794++    ){
        if(        self->item_existance[i_794]) {
            if(            1) {
                self->keys[i_794] = come_decrement_ref_count2(self->keys[i_794], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_801;
int caller_line_802;
char* caller_sname_803;
_Bool comma_instead_of_semicolon_804;
char* last_code_805;
char* __dec_obj227;
char* last_code2_806;
char* __dec_obj228;
void* __right_value855 = (void*)0;
char* sname_top_807;
int sline_top_808;
void* __right_value856 = (void*)0;
struct sFun* funX_809;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct tuple2$2charphbool* __result370__;
void* __right_value861 = (void*)0;
struct sType* result_type_812;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct list$1voidph* param_types_813;
struct list$1voidph* o2_saved_814;
struct sType* it_815;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sType* param_type_816;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1charph* param_names_817;
void* __right_value868 = (void*)0;
struct list$1charph* param_default_parametors_818;
char* p_819;
int sline_820;
char* sname_821;
char* head_822;
struct buffer* source_823;
void* __right_value869 = (void*)0;
struct buffer* __dec_obj233;
struct sType* generics_type_saved_824;
void* __right_value870 = (void*)0;
struct sType* __dec_obj234;
struct list$1charph* method_generics_type_names_825;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct list$1charph* __dec_obj235;
struct list$1charph* o2_saved_826;
char* it_827;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct list$1charph* __dec_obj236;
char* __dec_obj237;
void* __right_value875 = (void*)0;
struct sBlock* block_828;
struct buffer* __dec_obj238;
char* __dec_obj239;
_Bool var_args_829;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sFun* fun_830;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value885 = (void*)0;
struct sNode* node_831;
_Bool in_generics_fun_832;
_Bool Value_833;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct tuple2$2charphbool* __result371__;
struct sType* __dec_obj240;
struct list$1charph* __dec_obj241;
void* __right_value889 = (void*)0;
char* __dec_obj242;
char* __dec_obj243;
char* __dec_obj244;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct tuple2$2charphbool* __result372__;
    caller_fun_801=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_802=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_803=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_804=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_805=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj227=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_806=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj228=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_807=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_808=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_809=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_809) {
        __result370__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value860=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2311, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_805 = come_decrement_ref_count2(last_code_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_806 = come_decrement_ref_count2(last_code2_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_807 = come_decrement_ref_count2(sname_top_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_809,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value860,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_type_812=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_813=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2316, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    for(    o2_saved_814=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_815=((struct sType*)list$1voidphp_begin((o2_saved_814)));    !list$1voidphp_end((o2_saved_814));    it_815=((struct sType*)list$1voidphp_next((o2_saved_814)))    ){
        param_type_816=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value864=come_call_cloner(sType_clone, it_815))),generics_type,info));
        come_call_finalizer3(__right_value864,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_816->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_813,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_816)));
        come_call_finalizer3(param_type_816,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_814,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_817=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_818=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_819=info->p;
    sline_820=info->sline;
    sname_821=(char*)come_increment_ref_count(info->sname);
    head_822=info->head;
    source_823=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj233=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_824=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj234=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_825=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj235=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2346, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_826=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_827=list$1charphp_begin((o2_saved_826));    !list$1charphp_end((o2_saved_826));    it_827=list$1charphp_next((o2_saved_826))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_827)));
    }
    come_call_finalizer3(o2_saved_826,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj236=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj237=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_828=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_822;
    __dec_obj238=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_823);
    come_call_finalizer3(__dec_obj238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_819;
    info->sline=sline_820;
    __dec_obj239=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_821);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_812->mInline=(_Bool)0;
    result_type_812->mStatic=(_Bool)0;
    result_type_812->mUniq=(_Bool)0;
    var_args_829=generics_fun->mVarArgs;
    fun_830=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2370, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_812),(struct list$1voidph*)come_increment_ref_count(param_types_813),(struct list$1charph*)come_increment_ref_count(param_names_817),(struct list$1charph*)come_increment_ref_count(param_default_parametors_818),(_Bool)0,var_args_829,(struct sBlock*)come_increment_ref_count(block_828),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_830));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2377, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value884=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2377, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_830),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_831=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value884,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_832=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_833=node_compile(node_831,info);
    if(    !Value_833) {
        __result371__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value888=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2382, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_805 = come_decrement_ref_count2(last_code_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_806 = come_decrement_ref_count2(last_code2_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_807 = come_decrement_ref_count2(sname_top_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_809,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_813,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_821 = come_decrement_ref_count2(sname_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_824,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_825,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_828,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_830,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_831) { node_831 = come_decrement_ref_count2(node_831, ((struct sNode*)node_831)->finalize, ((struct sNode*)node_831)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value888,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_832;
    __dec_obj240=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_824);
    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj241=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_825);
    come_call_finalizer3(__dec_obj241,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj242=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_807));
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_808;
    __dec_obj243=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_805);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_806);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_801;
    info->caller_line=caller_line_802;
    info->caller_sname=caller_sname_803;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_804;
    __result372__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value892=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2402, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_805 = come_decrement_ref_count2(last_code_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_806 = come_decrement_ref_count2(last_code2_806, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_807 = come_decrement_ref_count2(sname_top_807, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_809,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_812,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_813,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_817,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_821 = come_decrement_ref_count2(sname_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_824,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_825,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_828,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_830,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_831) { node_831 = come_decrement_ref_count2(node_831, ((struct sNode*)node_831)->finalize, ((struct sNode*)node_831)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value892,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self){
char* __dec_obj229;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj229=self->v1;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphbool* __result367__;
void* __right_value857 = (void*)0;
struct tuple2$2charphbool* result_811;
void* __right_value858 = (void*)0;
char* __dec_obj230;
struct tuple2$2charphbool* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_811=(struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "tuple2$2charphbool_clone", 3, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj230=result_811->v1;
        result_811->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_811->v2=self->v2;
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_811;
    come_call_finalizer3(result_811,tuple2$2charphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self){
unsigned int result_810;
    result_810=0;
    result_810+=int_get_hash_key(((int)self->v1));
    result_810+=int_get_hash_key(((int)self->v2));
    return result_810;
}

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__=(void*)0;
char* __dec_obj231;
struct tuple2$2charphbool* __result369__;
    __dec_obj231=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj232;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj232=self->v1;
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_834;
int caller_line_835;
char* caller_sname_836;
_Bool comma_instead_of_semicolon_837;
char* last_code_838;
char* __dec_obj245;
char* last_code2_839;
char* __dec_obj246;
void* __right_value893 = (void*)0;
char* sname_top_840;
int sline_top_841;
void* __right_value894 = (void*)0;
struct sFun* funX_842;
_Bool __result373__;
void* __right_value895 = (void*)0;
struct sType* result_type_843;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1voidph* param_types_844;
struct list$1voidph* o2_saved_845;
struct sType* it_846;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sType* param_type_847;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1charph* param_names_848;
void* __right_value902 = (void*)0;
struct list$1charph* param_default_parametors_849;
char* p_850;
int sline_851;
char* sname_852;
char* head_853;
struct buffer* source_854;
void* __right_value903 = (void*)0;
struct buffer* __dec_obj247;
struct list$1charph* method_generics_type_names_855;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct list$1charph* __dec_obj248;
struct list$1charph* o2_saved_856;
char* it_857;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1charph* __dec_obj249;
char* __dec_obj250;
void* __right_value908 = (void*)0;
struct sBlock* block_858;
struct buffer* __dec_obj251;
char* __dec_obj252;
_Bool generate__859;
_Bool var_args_860;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sFun* fun_861;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value919 = (void*)0;
struct sNode* node_862;
_Bool Value_863;
void* __if_result__1_864 = (void*)0;
_Bool __result374__;
struct list$1charph* __dec_obj253;
void* __right_value920 = (void*)0;
char* __dec_obj254;
char* __dec_obj255;
char* __dec_obj256;
_Bool __result375__;
    caller_fun_834=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_835=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_836=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_837=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_838=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj245=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_839=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj246=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_840=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_841=info->sline;
    funX_842=((struct sFun*)(__right_value894=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value894,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_842) {
        __result373__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_838 = come_decrement_ref_count2(last_code_838, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_839 = come_decrement_ref_count2(last_code2_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_840 = come_decrement_ref_count2(sname_top_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result373__;
    }
    result_type_843=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_844=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2431, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    for(    o2_saved_845=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_846=((struct sType*)list$1voidphp_begin((o2_saved_845)));    !list$1voidphp_end((o2_saved_845));    it_846=((struct sType*)list$1voidphp_next((o2_saved_845)))    ){
        param_type_847=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value898=come_call_cloner(sType_clone, it_846))),info));
        come_call_finalizer3(__right_value898,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_847->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_844,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_847)));
        come_call_finalizer3(param_type_847,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_845,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_848=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_849=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_850=info->p;
    sline_851=info->sline;
    sname_852=(char*)come_increment_ref_count(info->sname);
    head_853=info->head;
    source_854=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj247=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj247,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_855=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj248=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2455, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_856=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_857=list$1charphp_begin((o2_saved_856));    !list$1charphp_end((o2_saved_856));    it_857=list$1charphp_next((o2_saved_856))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_857)));
    }
    come_call_finalizer3(o2_saved_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj249=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj249,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj250=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_858=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_853;
    __dec_obj251=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_854);
    come_call_finalizer3(__dec_obj251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_850;
    info->sline=sline_851;
    __dec_obj252=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_852);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_843->mInline=(_Bool)0;
    result_type_843->mStatic=(_Bool)0;
    result_type_843->mUniq=(_Bool)0;
    generate__859=(_Bool)0;
    if(    result_type_843->mGenerate) {
        result_type_843->mGenerate=(_Bool)0;
        generate__859=(_Bool)1;
    }
    var_args_860=generics_fun->mVarArgs;
    fun_861=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_843),(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_844)),(struct list$1charph*)come_increment_ref_count(param_names_848),(struct list$1charph*)come_increment_ref_count(param_default_parametors_849),(_Bool)0,var_args_860,(struct sBlock*)come_increment_ref_count(block_858),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,generate__859,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_861));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2492, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value918=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2492, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_861),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_862=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value918,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_863=node_compile(node_862,info);
    if(    !Value_863) {
        __result374__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_838 = come_decrement_ref_count2(last_code_838, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_839 = come_decrement_ref_count2(last_code2_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_840 = come_decrement_ref_count2(sname_top_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_843,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_844,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_852 = come_decrement_ref_count2(sname_852, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_854,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_858,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_861,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_862) { node_862 = come_decrement_ref_count2(node_862, ((struct sNode*)node_862)->finalize, ((struct sNode*)node_862)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result374__;
    }
    else {
        __if_result__1_864=(void*)(Value_863);
;
    }
    __dec_obj253=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_855);
    come_call_finalizer3(__dec_obj253,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj254=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_840));
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_841;
    __dec_obj255=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_838);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_839);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_834;
    info->caller_line=caller_line_835;
    info->caller_sname=caller_sname_836;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_837;
    __result375__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_838 = come_decrement_ref_count2(last_code_838, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_839 = come_decrement_ref_count2(last_code2_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_840 = come_decrement_ref_count2(sname_top_840, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_843,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_844,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_852 = come_decrement_ref_count2(sname_852, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_854,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_858,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_861,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_862) { node_862 = come_decrement_ref_count2(node_862, ((struct sNode*)node_862)->finalize, ((struct sNode*)node_862)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result375__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_865;
char* source_head_866;
void* __right_value921 = (void*)0;
char* attribute_867;
struct sType* result_type_868;
char* var_name_869;
_Bool constructor__870;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct sType* __dec_obj257;
void* __right_value924 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_871=0;
char* var_name2_872=0;
_Bool err_873=0;
struct sType* __dec_obj258;
char* __dec_obj259;
_Bool method_definition_874;
char* p_875;
int sline_876;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct buffer* buf2_877;
char* fun_name_878;
char* base_fun_name_879;
void* __right_value927 = (void*)0;
char* __dec_obj260;
void* __right_value928 = (void*)0;
char* __dec_obj261;
void* __right_value929 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_880=0;
char* name_881=0;
_Bool err_882=0;
void* __right_value930 = (void*)0;
char* __dec_obj262;
void* __right_value931 = (void*)0;
char* __dec_obj263;
void* __right_value932 = (void*)0;
char* __dec_obj264;
void* __right_value933 = (void*)0;
char* __dec_obj265;
void* __right_value934 = (void*)0;
char* __dec_obj266;
void* __right_value935 = (void*)0;
char* __dec_obj267;
void* __right_value936 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1voidph* param_types_883=0;
struct list$1charph* param_names_884=0;
struct list$1charph* param_default_parametors_885=0;
_Bool var_args_886=0;
char* header_tail_887;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct buffer* header_buf_888;
int version_889;
int n_890;
_Bool in_top_level_891;
void* __right_value939 = (void*)0;
struct sBlock* block_892;
void* __right_value940 = (void*)0;
char* fun_name_894;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sFun* fun_895;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sFun* fun2_896;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value955 = (void*)0;
struct sNode* __result378__;
void* __right_value956 = (void*)0;
char* none_generics_name_899;
void* __right_value957 = (void*)0;
char* generics_sname_900;
int generics_sline_901;
void* __right_value958 = (void*)0;
char* block_902;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sGenericsFun* fun_903;
void* __right_value965 = (void*)0;
char* fun_name3_904;
void* __right_value971 = (void*)0;
struct sNode* __result390__;
void* __right_value972 = (void*)0;
char* generics_sname_926;
int generics_sline_927;
void* __right_value973 = (void*)0;
char* block_928;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sGenericsFun* fun_929;
void* __right_value980 = (void*)0;
char* fun_name3_930;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct sNode* __result391__;
char* source_tail_931;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct buffer* header_932;
void* __right_value985 = (void*)0;
char* name_933;
void* __right_value986 = (void*)0;
char* name_934;
int i_935;
void* __right_value987 = (void*)0;
struct sType* param_type_936;
void* __right_value988 = (void*)0;
char* param_name_937;
void* __right_value989 = (void*)0;
char* default_parametor_938;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
char* impl_name_939;
void* __right_value993 = (void*)0;
char* result_type_name_940;
void* __right_value994 = (void*)0;
char* impl_name_941;
void* __right_value995 = (void*)0;
char* result_type_name_942;
int i_943;
void* __right_value996 = (void*)0;
struct sType* param_type_944;
void* __right_value997 = (void*)0;
char* param_name_945;
void* __right_value998 = (void*)0;
char* default_parametor_946;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sBlock* block_947;
_Bool static_fun_948;
_Bool inline_fun_949;
_Bool uniq_fun_950;
_Bool generate_fun_951;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
char* new_fun_name_952;
void* __right_value1005 = (void*)0;
char* __dec_obj272;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sFun* fun_953;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sFun* fun2_954;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1019 = (void*)0;
struct sNode* __result392__;
void* __right_value1020 = (void*)0;
char* new_fun_name_955;
void* __right_value1021 = (void*)0;
char* __dec_obj273;
char* source_tail_956;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct buffer* header_957;
_Bool result_type_static_958;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sFun* fun_959;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sFun* fun2_960;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1036 = (void*)0;
struct sNode* __result393__;
void* __right_value1037 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_961=0;
char* fun_attribute_962=0;
void* __right_value1038 = (void*)0;
char* __dec_obj274;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct buffer* header_963;
char* source_tail_964;
_Bool result_type_static_965;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct sFun* fun_966;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct sFun* fun2_967;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1052 = (void*)0;
struct sNode* __result394__;
struct sNode* __result395__;
fun_name_878 = (void*)0;
    header_head_865=info->p;
    source_head_866=info->p;
    attribute_867=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_868=((void*)0);
    var_name_869=((void*)0);
    constructor__870=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value922=parse_word(info)));
        __right_value922 = come_decrement_ref_count2(__right_value922, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj257=result_type_868;
        result_type_868=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_868->mHeap=(_Bool)1;
        constructor__870=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value924=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_871=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_872=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_873=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value924,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj258=result_type_868;
        result_type_868=(struct sType*)come_increment_ref_count(result_type2_871);
        come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj259=var_name_869;
        var_name_869=(char*)come_increment_ref_count(var_name2_872);
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_873) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_871,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_872 = come_decrement_ref_count2(var_name2_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_874=(_Bool)0;
    {
        p_875=info->p;
        sline_876=info->sline;
        buf2_877=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2558, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_877,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_877)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_874=(_Bool)1;
        }
        info->p=p_875;
        info->sline=sline_876;
        come_call_finalizer3(buf2_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_879=((void*)0);
    if(    constructor__870) {
        __dec_obj260=base_fun_name_879;
        base_fun_name_879=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj261=fun_name_878;
        fun_name_878=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_879,info,(_Bool)1));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_874) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value929=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_880=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_881=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_882=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value929,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_882) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj262=base_fun_name_879;
        base_fun_name_879=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj263=fun_name_878;
        fun_name_878=(char*)come_increment_ref_count(create_method_name(obj_type_880,(_Bool)0,base_fun_name_879,info,(_Bool)1));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_881 = come_decrement_ref_count2(name_881, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj264=base_fun_name_879;
        base_fun_name_879=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj265=fun_name_878;
        fun_name_878=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_879,info,(_Bool)1));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj266=fun_name_878;
        fun_name_878=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj267=base_fun_name_879;
        base_fun_name_879=(char*)come_increment_ref_count(__builtin_string(fun_name_878));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_879,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value936=parse_params(info,constructor__870)));
    param_types_883=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_884=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_885=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_886=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value936,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_887=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_879,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_888=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2625, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append(header_buf_888,header_head_865,header_tail_887-header_head_865);
    buffer_append_char(header_buf_888,0);
    version_889=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_890=0;
        while(xisdigit(*info->p)) {
            n_890=n_890*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_889=n_890;
    }
    in_top_level_891=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_879,"lambda")) {
        block_892=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_893=0;
        lambda_num_893++;
        fun_name_894=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_893));
        result_type_868->mInline=(_Bool)0;
        result_type_868->mStatic=(_Bool)0;
        result_type_868->mUniq=(_Bool)0;
        result_type_868->mGenerate=(_Bool)0;
        fun_895=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2661, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_894)),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1voidph*)come_increment_ref_count(param_types_883),(struct list$1charph*)come_increment_ref_count(param_names_884),(struct list$1charph*)come_increment_ref_count(param_default_parametors_885),(_Bool)0,var_args_886,(struct sBlock*)come_increment_ref_count(block_892),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_888)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_896=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value948=__builtin_string(fun_name_894)))));
        __right_value948 = come_decrement_ref_count2(__right_value948, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_896==((void*)0)||fun2_896->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_894)),(struct sFun*)come_increment_ref_count(fun_895));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2671, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value952=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2671, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0)),fun_895,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value955=_inf_value5));
        come_call_finalizer3(block_892,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_894 = come_decrement_ref_count2(fun_name_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_895,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_896,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_867 = come_decrement_ref_count2(attribute_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_868,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_869 = come_decrement_ref_count2(var_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_878 = come_decrement_ref_count2(fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_879 = come_decrement_ref_count2(base_fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_883,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value952,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value955) { __right_value955 = come_decrement_ref_count2(__right_value955, ((struct sNode*)__right_value955)->finalize, ((struct sNode*)__right_value955)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result378__;
        come_call_finalizer3(block_892,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_894 = come_decrement_ref_count2(fun_name_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_895,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_896,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_899=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_900=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_901=info->sline;
        block_902=(char*)come_increment_ref_count(skip_block(info));
        fun_903=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2681, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value960=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value961=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_878)),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1voidph*)come_increment_ref_count(param_types_883),(struct list$1charph*)come_increment_ref_count(param_names_884),(struct list$1charph*)come_increment_ref_count(param_default_parametors_885),var_args_886,(char*)come_increment_ref_count(block_902),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_900)),generics_sline_901));
        come_call_finalizer3(__right_value960,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value961,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_904=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_899,base_fun_name_879));
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_904)),(struct sGenericsFun*)come_increment_ref_count(fun_903));
        __result390__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_899 = come_decrement_ref_count2(none_generics_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_900 = come_decrement_ref_count2(generics_sname_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_902 = come_decrement_ref_count2(block_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_903,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_904 = come_decrement_ref_count2(fun_name3_904, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_867 = come_decrement_ref_count2(attribute_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_868,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_869 = come_decrement_ref_count2(var_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_878 = come_decrement_ref_count2(fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_879 = come_decrement_ref_count2(base_fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_883,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result390__;
        none_generics_name_899 = come_decrement_ref_count2(none_generics_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_900 = come_decrement_ref_count2(generics_sname_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_902 = come_decrement_ref_count2(block_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_903,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_904 = come_decrement_ref_count2(fun_name3_904, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_926=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_927=info->sline;
        block_928=(char*)come_increment_ref_count(skip_block(info));
        fun_929=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2695, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value975=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value976=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_878)),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1voidph*)come_increment_ref_count(param_types_883),(struct list$1charph*)come_increment_ref_count(param_names_884),(struct list$1charph*)come_increment_ref_count(param_default_parametors_885),var_args_886,(char*)come_increment_ref_count(block_928),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_926)),generics_sline_927));
        come_call_finalizer3(__right_value975,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value976,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_930=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_879));
        if(        method_definition_874) {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_878)),(struct sGenericsFun*)come_increment_ref_count(fun_929));
        }
        else {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_930)),(struct sGenericsFun*)come_increment_ref_count(fun_929));
        }
        __result391__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_926 = come_decrement_ref_count2(generics_sname_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_928 = come_decrement_ref_count2(block_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_929,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_930 = come_decrement_ref_count2(fun_name3_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_867 = come_decrement_ref_count2(attribute_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_868,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_869 = come_decrement_ref_count2(var_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_878 = come_decrement_ref_count2(fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_879 = come_decrement_ref_count2(base_fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_883,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result391__;
        generics_sname_926 = come_decrement_ref_count2(generics_sname_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_928 = come_decrement_ref_count2(block_928, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_929,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_930 = come_decrement_ref_count2(fun_name3_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_931=info->p-1;
        header_932=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2711, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        if(        constructor__870) {
            if(            list$1voidphp_length(param_types_883)==1) {
                name_933=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_932,"extern %s*%% %s*::initialize(%s*%% self);\n",name_933,name_933,name_933);
                name_933 = come_decrement_ref_count2(name_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_934=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_932,"extern %s*%% %s*::initialize(%s*%% self, ",name_934,name_934,name_934);
                for(                i_935=1;                i_935<list$1voidphp_length(param_types_883);                i_935++                ){
                    param_type_936=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_883,i_935));
                    param_name_937=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_884,i_935));
                    default_parametor_938=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_885,i_935));
                    if(                    default_parametor_938) {
                        buffer_append_format(header_932,"extern %s %s=%s",((char*)(__right_value990=make_come_type_name_string_no_solved(param_type_936,(_Bool)0,info))),param_name_937,default_parametor_938);
                        __right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_932,"extern %s %s",((char*)(__right_value991=make_come_type_name_string_no_solved(param_type_936,(_Bool)0,info))),param_name_937);
                        __right_value991 = come_decrement_ref_count2(__right_value991, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_935!=list$1voidphp_length(param_types_883)-1) {
                        buffer_append_str(header_932,",");
                    }
                    come_call_finalizer3(param_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_937 = come_decrement_ref_count2(param_name_937, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_938 = come_decrement_ref_count2(default_parametor_938, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_932,");\n");
                name_934 = come_decrement_ref_count2(name_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1voidphp_length(param_types_883)==1) {
                impl_name_939=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_940=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_868,(_Bool)0,info));
                buffer_append_format(header_932,"extern %s %s*::%s(%s* self);\n",result_type_name_940,impl_name_939,base_fun_name_879,impl_name_939);
                impl_name_939 = come_decrement_ref_count2(impl_name_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_940 = come_decrement_ref_count2(result_type_name_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_941=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_942=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_868,(_Bool)0,info));
                buffer_append_format(header_932,"extern %s %s*::%s(%s* self, ",result_type_name_942,impl_name_941,base_fun_name_879,impl_name_941);
                for(                i_943=1;                i_943<list$1voidphp_length(param_types_883);                i_943++                ){
                    param_type_944=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_883,i_943));
                    param_name_945=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_884,i_943));
                    default_parametor_946=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_885,i_943));
                    if(                    default_parametor_946) {
                        buffer_append_format(header_932,"extern %s %s=%s",((char*)(__right_value999=make_come_type_name_string_no_solved(param_type_944,(_Bool)0,info))),param_name_945,default_parametor_946);
                        __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_932,"extern %s %s",((char*)(__right_value1000=make_come_type_name_string_no_solved(param_type_944,(_Bool)0,info))),param_name_945);
                        __right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_943!=list$1voidphp_length(param_types_883)-1) {
                        buffer_append_str(header_932,",");
                    }
                    come_call_finalizer3(param_type_944,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_945 = come_decrement_ref_count2(param_name_945, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_946 = come_decrement_ref_count2(default_parametor_946, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_932,");\n");
                impl_name_941 = come_decrement_ref_count2(impl_name_941, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_942 = come_decrement_ref_count2(result_type_name_942, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_932,source_head_866,source_tail_931-source_head_866);
            buffer_append_str(header_932,";\n");
        }
        if(        !result_type_868->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value1001=buffer_to_string(header_932))));
                __right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_947=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__870,(_Bool)1));
        static_fun_948=(_Bool)0;
        if(        result_type_868->mStatic) {
            result_type_868->mStatic=(_Bool)0;
            result_type_868->mUniq=(_Bool)0;
            static_fun_948=(_Bool)1;
        }
        inline_fun_949=(_Bool)0;
        if(        result_type_868->mInline) {
            result_type_868->mInline=(_Bool)0;
            result_type_868->mUniq=(_Bool)0;
            inline_fun_949=(_Bool)1;
        }
        uniq_fun_950=(_Bool)0;
        if(        result_type_868->mUniq) {
            result_type_868->mUniq=(_Bool)0;
            result_type_868->mInline=(_Bool)0;
            result_type_868->mStatic=(_Bool)0;
            uniq_fun_950=(_Bool)1;
        }
        generate_fun_951=(_Bool)0;
        if(        result_type_868->mUniq) {
            result_type_868->mUniq=(_Bool)0;
            result_type_868->mInline=(_Bool)0;
            result_type_868->mStatic=(_Bool)0;
            generate_fun_951=(_Bool)1;
        }
        if(        version_889>0) {
            new_fun_name_952=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1003=__builtin_string(fun_name_878))),version_889));
            __right_value1003 = come_decrement_ref_count2(__right_value1003, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj272=fun_name_878;
            fun_name_878=(char*)come_increment_ref_count(__builtin_string(new_fun_name_952));
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_952 = come_decrement_ref_count2(new_fun_name_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_953=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2820, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_878)),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1voidph*)come_increment_ref_count(param_types_883),(struct list$1charph*)come_increment_ref_count(param_names_884),(struct list$1charph*)come_increment_ref_count(param_default_parametors_885),(_Bool)0,var_args_886,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_947)),static_fun_948,(char*)come_increment_ref_count(buffer_to_string(header_buf_888)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_949,uniq_fun_950,generate_fun_951,(char*)come_increment_ref_count(attribute_867),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_878)),(struct sFun*)come_increment_ref_count(fun_953));
        }
        else {
            fun2_954=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1014=__builtin_string(fun_name_878)))));
            __right_value1014 = come_decrement_ref_count2(__right_value1014, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_954==((void*)0)||fun2_954->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_878)),(struct sFun*)come_increment_ref_count(fun_953));
            }
            come_call_finalizer3(fun2_954,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2840, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1018=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2840, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_953),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1019=_inf_value6));
        come_call_finalizer3(header_932,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_947,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_953,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_867 = come_decrement_ref_count2(attribute_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_868,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_869 = come_decrement_ref_count2(var_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_878 = come_decrement_ref_count2(fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_879 = come_decrement_ref_count2(base_fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_883,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1018,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1019) { __right_value1019 = come_decrement_ref_count2(__right_value1019, ((struct sNode*)__right_value1019)->finalize, ((struct sNode*)__right_value1019)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result392__;
        come_call_finalizer3(header_932,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_947,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_953,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_889>0) {
            new_fun_name_955=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_878,version_889));
            __dec_obj273=fun_name_878;
            fun_name_878=(char*)come_increment_ref_count(__builtin_string(new_fun_name_955));
            __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_955 = come_decrement_ref_count2(new_fun_name_955, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_956=info->p;
            header_957=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2853, "struct buffer*", (void*)0, (void*)0, (void*)0))));
            buffer_append(header_957,source_head_866,source_tail_956-source_head_866);
            skip_spaces_and_lf(info);
            result_type_static_958=result_type_868->mStatic;
            result_type_868->mStatic=(_Bool)0;
            result_type_868->mUniq=(_Bool)0;
            result_type_868->mInline=(_Bool)0;
            result_type_868->mGenerate=(_Bool)0;
            fun_959=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2864, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_878)),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1voidph*)come_increment_ref_count(param_types_883),(struct list$1charph*)come_increment_ref_count(param_names_884),(struct list$1charph*)come_increment_ref_count(param_default_parametors_885),(_Bool)1,var_args_886,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_888)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_867),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_960=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1030=__builtin_string(fun_name_878)))));
            __right_value1030 = come_decrement_ref_count2(__right_value1030, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_960==((void*)0)||fun2_960->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_878)),(struct sFun*)come_increment_ref_count(fun_959));
            }
            if(            !result_type_static_958) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1033=buffer_to_string(header_957))));
                    __right_value1033 = come_decrement_ref_count2(__right_value1033, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2883, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1035=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2883, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_959),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1036=_inf_value7));
            come_call_finalizer3(header_957,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_960,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_867 = come_decrement_ref_count2(attribute_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_868,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_869 = come_decrement_ref_count2(var_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_878 = come_decrement_ref_count2(fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_879 = come_decrement_ref_count2(base_fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_883,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1035,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1036) { __right_value1036 = come_decrement_ref_count2(__right_value1036, ((struct sNode*)__right_value1036)->finalize, ((struct sNode*)__right_value1036)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result393__;
            come_call_finalizer3(header_957,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_960,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1037=parse_function_attribute(info)));
            asm_fun_961=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_962=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1037,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_961,"")) {
                __dec_obj274=fun_name_878;
                fun_name_878=(char*)come_increment_ref_count(__builtin_string(asm_fun_961));
                __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_963=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2892, "struct buffer*", (void*)0, (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_964=info->p;
                buffer_append(header_963,source_head_866,source_tail_964-source_head_866);
                skip_spaces_and_lf(info);
            }
            result_type_static_965=result_type_868->mStatic;
            result_type_868->mStatic=(_Bool)0;
            result_type_868->mUniq=(_Bool)0;
            result_type_868->mInline=(_Bool)0;
            result_type_868->mGenerate=(_Bool)0;
            fun_966=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2906, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_878)),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1voidph*)come_increment_ref_count(param_types_883),(struct list$1charph*)come_increment_ref_count(param_names_884),(struct list$1charph*)come_increment_ref_count(param_default_parametors_885),(_Bool)1,var_args_886,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_888)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_867),(char*)come_increment_ref_count(fun_attribute_962)));
            fun2_967=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1046=__builtin_string(fun_name_878)))));
            __right_value1046 = come_decrement_ref_count2(__right_value1046, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_967==((void*)0)||fun2_967->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_878)),(struct sFun*)come_increment_ref_count(fun_966));
            }
            if(            !result_type_static_965) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1049=buffer_to_string(header_963))));
                    __right_value1049 = come_decrement_ref_count2(__right_value1049, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2926, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1051=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2926, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_966),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1052=_inf_value8));
            asm_fun_961 = come_decrement_ref_count2(asm_fun_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_962 = come_decrement_ref_count2(fun_attribute_962, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_963,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_966,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_967,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_867 = come_decrement_ref_count2(attribute_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_868,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_869 = come_decrement_ref_count2(var_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_878 = come_decrement_ref_count2(fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_879 = come_decrement_ref_count2(base_fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_883,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1051,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1052) { __right_value1052 = come_decrement_ref_count2(__right_value1052, ((struct sNode*)__right_value1052)->finalize, ((struct sNode*)__right_value1052)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result394__;
            asm_fun_961 = come_decrement_ref_count2(asm_fun_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_962 = come_decrement_ref_count2(fun_attribute_962, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_963,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_966,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_967,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_891;
    __result395__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_867 = come_decrement_ref_count2(attribute_867, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_868,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_869 = come_decrement_ref_count2(var_name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_878 = come_decrement_ref_count2(fun_name_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_879 = come_decrement_ref_count2(base_fun_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_883,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_884,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj268;
struct list$1charph* __dec_obj269;
struct list$1charph* __dec_obj270;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj268=self->v1;
            come_call_finalizer3(__dec_obj268,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj269=self->v2;
            come_call_finalizer3(__dec_obj269,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj270=self->v3;
            come_call_finalizer3(__dec_obj270,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result376__;
void* __right_value953 = (void*)0;
struct sLambdaNode* result_898;
void* __right_value954 = (void*)0;
char* __dec_obj271;
struct sLambdaNode* __result377__;
    if(    self==(void*)0) {
        __result376__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    result_898=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode", sLambdaNode_finalize, sLambdaNode_clone, sLambdaNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_898->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_898->sname;
        result_898->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_898->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_898->mFun=self->mFun;
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_898;
    come_call_finalizer3(result_898,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static unsigned int sLambdaNode_get_hash_key(struct sLambdaNode* self){
unsigned int result_897;
    result_897=0;
    result_897+=int_get_hash_key(((int)self->sline));
    result_897+=int_get_hash_key(((int)self->sname));
    result_897+=int_get_hash_key(((int)self->sline_real));
    result_897+=int_get_hash_key(((int)self->mFun));
    return result_897;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_922;
unsigned int it_923;
_Bool same_key_exist_924;
char* it2_925;
struct map$2charphsGenericsFunph* __result389__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunphp_rehash(self);
    }
    hash_922=string_get_hash_key(key)%self->size;
    it_923=hash_922;
    while((_Bool)1) {
        if(        self->item_existance[it_923]) {
            if(            charp_equals(self->keys[it_923],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_923]);
                    self->keys[it_923] = come_decrement_ref_count2(self->keys[it_923], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_923]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_923]);
                    self->keys[it_923]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_923],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_923]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_923]=item;
                }
                break;
            }
            it_923++;
            if(            it_923>=self->size) {
                it_923=0;
            }
            else if(            it_923==hash_922) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_923]=(_Bool)1;
            if(            1) {
                self->keys[it_923]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_923]=key;
            }
            if(            1) {
                self->items[it_923]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_923]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_924=(_Bool)0;
    for(    it2_925=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_925=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_925,key)) {
            same_key_exist_924=(_Bool)1;
        }
    }
    if(    !same_key_exist_924) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result389__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_905;
void* __right_value966 = (void*)0;
char** keys_906;
void* __right_value967 = (void*)0;
struct sGenericsFun** items_907;
void* __right_value968 = (void*)0;
_Bool* item_existance_908;
int len_909;
char* it_912;
struct sGenericsFun* default_value_915;
void* __right_value969 = (void*)0;
struct sGenericsFun* it2_916;
unsigned int hash_919;
int n_920;
struct sGenericsFun* default_value_921;
void* __right_value970 = (void*)0;
default_value_915 = (void*)0;
default_value_921 = (void*)0;
    size_905=self->size*10;
    keys_906=(char**)come_increment_ref_count(((char**)(__right_value966=(char**)come_calloc(1, sizeof(char*)*(1*(size_905)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_907=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value967=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_905)), "/usr/local/include/comelang.h", 2708, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0))));
    item_existance_908=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value968=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_905)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_909=0;
    for(    it_912=map$2charphsGenericsFunphp_begin(self);    !map$2charphsGenericsFunphp_end(self);    it_912=map$2charphsGenericsFunphp_next(self)    ){
        memset(&default_value_915,0,sizeof(struct sGenericsFun*));
        it2_916=((struct sGenericsFun*)(__right_value969=map$2charphsGenericsFunphp_at(self,it_912,default_value_915)));
        come_call_finalizer3(__right_value969,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_919=string_get_hash_key(it_912)%size_905;
        n_920=hash_919;
        while((_Bool)1) {
            if(            item_existance_908[n_920]) {
                n_920++;
                if(                n_920>=size_905) {
                    n_920=0;
                }
                else if(                n_920==hash_919) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_908[n_920]=(_Bool)1;
                keys_906[n_920]=it_912;
                items_907[n_920]=((struct sGenericsFun*)(__right_value970=map$2charphsGenericsFunphp_at(self,it_912,default_value_921)));
                come_call_finalizer3(__right_value970,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_909++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_906;
    self->items=items_907;
    self->item_existance=item_existance_908;
    self->size=size_905;
    self->len=len_909;
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_910;
char* __result379__;
char* __result380__;
char* result_911;
char* __result381__;
result_910 = (void*)0;
result_911 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_910,0,sizeof(char*));
        __result379__ = gComeFunResultObject = __result_obj__ = result_910;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result380__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    memset(&result_911,0,sizeof(char*));
    __result381__ = gComeFunResultObject = __result_obj__ = result_911;
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_913;
char* __result382__;
char* __result383__;
char* result_914;
char* __result384__;
result_913 = (void*)0;
result_914 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_913,0,sizeof(char*));
        __result382__ = gComeFunResultObject = __result_obj__ = result_913;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result383__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    memset(&result_914,0,sizeof(char*));
    __result384__ = gComeFunResultObject = __result_obj__ = result_914;
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_917;
unsigned int it_918;
struct sGenericsFun* __result385__;
struct sGenericsFun* __result386__;
struct sGenericsFun* __result387__;
struct sGenericsFun* __result388__;
    hash_917=string_get_hash_key(((char*)key))%self->size;
    it_918=hash_917;
    while((_Bool)1) {
        if(        self->item_existance[it_918]) {
            if(            charp_equals(self->keys[it_918],key)) {
                __result385__ = gComeFunResultObject = __result_obj__ = self->items[it_918];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result385__;
            }
            it_918++;
            if(            it_918>=self->size) {
                it_918=0;
            }
            else if(            it_918==hash_917) {
                __result386__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result386__;
            }
        }
        else {
            __result387__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result387__;
        }
    }
    __result388__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_968;
char* __dec_obj275;
char* last_code2_969;
char* __dec_obj276;
_Bool comma_instead_of_semicolon_970;
struct sClass* current_stack_frame_struct_971;
char* real_fun_name_972;
struct sFun* finalizer_973;
void* __right_value1053 = (void*)0;
struct sType* type_before_974;
void* __right_value1054 = (void*)0;
struct sType* type2_975;
void* __right_value1055 = (void*)0;
char* fun_name2_976;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
char* none_generics_name_977;
void* __right_value1058 = (void*)0;
char* generics_fun_name_978;
void* __right_value1059 = (void*)0;
struct sGenericsFun* generics_fun_979;
void* __right_value1060 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_983=0;
_Bool err_984=0;
void* __right_value1061 = (void*)0;
char* __dec_obj277;
int i_985;
void* __right_value1062 = (void*)0;
char* new_fun_name_986;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
char* __dec_obj278;
void* __right_value1065 = (void*)0;
char* __dec_obj279;
void* __right_value1066 = (void*)0;
char* __dec_obj280;
void* __right_value1067 = (void*)0;
char* user_real_fun_name_987;
void* __right_value1068 = (void*)0;
struct sFun* user_finalizer_988;
void* __right_value1069 = (void*)0;
struct sType* type2_989;
struct sClass* klass_990;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct buffer* source_991;
void* __right_value1072 = (void*)0;
struct list$1voidph* o2_saved_996;
struct tuple2$2charphsTypeph* it_997;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_998=0;
struct sType* field_type_999=0;
char* p_1002;
int sline_1003;
char* sname_1004;
char* head_1005;
struct buffer* source3_1006;
struct buffer* __dec_obj286;
void* __right_value1073 = (void*)0;
char* __dec_obj287;
void* __right_value1074 = (void*)0;
struct sBlock* block_1007;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct sType* result_type_1008;
void* __right_value1077 = (void*)0;
char* name_1009;
void* __right_value1078 = (void*)0;
struct sType* self_type_1010;
struct sType* __list_values21___1012[1];
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct list$1voidph* param_types_1011;
void* __right_value1081 = (void*)0;
char* __list_values22___1013[1];
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
struct list$1charph* param_names_1014;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct list$1charph* param_default_parametors_1015;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct buffer* header_buf_1016;
void* __right_value1088 = (void*)0;
int i_1017;
void* __right_value1089 = (void*)0;
struct sType* param_type_1018;
void* __right_value1090 = (void*)0;
char* param_name_1019;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct sFun* fun2_1020;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct sFun* fun_1021;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1103 = (void*)0;
struct sNode* node_1022;
_Bool Value_1023;
struct buffer* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
struct tuple2$2sFunpcharph* __result407__;
memset(&i_985, 0, sizeof(int));
    last_code_968=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj275=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_969=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj276=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_970=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_971=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_972=((void*)0);
    finalizer_973=((void*)0);
    type_before_974=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_975=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_975->mHeap=(_Bool)0;
    fun_name2_976=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        finalizer_973=((struct sFun*)(__right_value1056=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_976)));
        come_call_finalizer3(__right_value1056,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_973==((void*)0)) {
            none_generics_name_977=(char*)come_increment_ref_count(get_none_generics_name(type2_975->mClass->mName));
            generics_fun_name_978=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_977,fun_name));
            generics_fun_979=((struct sGenericsFun*)(__right_value1059=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_978)));
            come_call_finalizer3(__right_value1059,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_979) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1060=create_generics_fun((char*)come_increment_ref_count(fun_name2_976),generics_fun_979,type,info)));
                name_983=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_984=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1060,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_984) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_973=((struct sFun*)(__right_value1061=map$2charphsFunphp_operator_load_element(info->funcs,name_983)));
                come_call_finalizer3(__right_value1061,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_983 = come_decrement_ref_count2(name_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_977 = come_decrement_ref_count2(none_generics_name_977, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_978 = come_decrement_ref_count2(generics_fun_name_978, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj277=real_fun_name_972;
        real_fun_name_972=(char*)come_increment_ref_count(fun_name2_976);
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_985=128-1;        i_985>=1;        i_985--        ){
            new_fun_name_986=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_976,i_985));
            finalizer_973=((struct sFun*)(__right_value1063=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_986)));
            come_call_finalizer3(__right_value1063,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_973) {
                __dec_obj278=fun_name2_976;
                fun_name2_976=(char*)come_increment_ref_count(__builtin_string(new_fun_name_986));
                __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_986 = come_decrement_ref_count2(new_fun_name_986, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_986 = come_decrement_ref_count2(new_fun_name_986, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_973==((void*)0)) {
            finalizer_973=((struct sFun*)(__right_value1065=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_976)));
            come_call_finalizer3(__right_value1065,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj279=real_fun_name_972;
        real_fun_name_972=(char*)come_increment_ref_count(fun_name2_976);
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_973==((void*)0)) {
        type=type_before_974;
        __dec_obj280=real_fun_name_972;
        real_fun_name_972=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_987=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_988=((struct sFun*)(__right_value1068=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_987)));
        come_call_finalizer3(__right_value1068,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        type2_989=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_989;
        klass_990=type->mClass;
        if(        type->mPointerNum>0&&klass_990->mStruct||type->mAllocaValue) {
            source_991=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3026, "struct buffer*", (void*)0, (void*)0, (void*)0))));
            buffer_append_char(source_991,123);
            if(            user_finalizer_988) {
                char source2_992[1024];
                memset(&source2_992, 0, sizeof(char)                *(1024)                );
                snprintf(source2_992,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_987);
                buffer_append_str(source_991,source2_992);
            }
            klass_990=((struct sClass*)(__right_value1072=map$2charphsClassphp_operator_load_element(info->classes,klass_990->mName)));
            come_call_finalizer3(__right_value1072,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_996=(struct list$1voidph*)come_increment_ref_count((klass_990->mFields)),it_997=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_996)));            !list$1voidphp_end((o2_saved_996));            it_997=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_996)))            ){
                multiple_assign_var12=it_997;
                name_998=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_999=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                field_type_999->mHeap) {
                    char source2_1000[1024];
                    memset(&source2_1000, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1000,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_998,name_998,name_998,name_998);
                    buffer_append_str(source_991,source2_1000);
                }
                else if(                field_type_999->mChannel) {
                    char source2_1001[1024];
                    memset(&source2_1001, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1001,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_998,name_998);
                    buffer_append_str(source_991,source2_1001);
                    snprintf(source2_1001,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_998,name_998);
                    buffer_append_str(source_991,source2_1001);
                }
                name_998 = come_decrement_ref_count2(name_998, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_996,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_991,125);
            p_1002=info->p;
            sline_1003=info->sline;
            sname_1004=(char*)come_increment_ref_count(info->sname);
            head_1005=info->head;
            source3_1006=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj286=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_991);
            come_call_finalizer3(__dec_obj286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_991->buf;
            info->head=source_991->buf;
            __dec_obj287=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_972));
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1007=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1008=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3075, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
            name_1009=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_972));
            self_type_1010=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1010->mHeap=(_Bool)0;
            if(            self_type_1010->mPointerNum==0) {
                self_type_1010->mPointerNum=1;
            }
            if(            self_type_1010->mPointerNum>1) {
                self_type_1010->mPointerNum=1;
            }
            param_types_1011=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___1012[0]=(struct sType*)come_increment_ref_count(self_type_1010),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3085, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),1,__list_values21___1012)));
            param_names_1014=(struct list$1charph*)come_increment_ref_count((__list_values22___1013[0]=(char*)come_increment_ref_count(((char*)(__right_value1081=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3086, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),1,__list_values22___1013)));
            __right_value1081 = come_decrement_ref_count2(__right_value1081, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_1015=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3087, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_1015,((void*)0));
            header_buf_1016=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3090, "struct buffer*", (void*)0, (void*)0, (void*)0))));
            buffer_append_str(header_buf_1016,((char*)(__right_value1088=make_come_type_name_string(result_type_1008,info))));
            __right_value1088 = come_decrement_ref_count2(__right_value1088, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1016," ");
            buffer_append_str(header_buf_1016,real_fun_name_972);
            buffer_append_str(header_buf_1016,"(");
            for(            i_1017=0;            i_1017<list$1voidphp_length(param_types_1011);            i_1017++            ){
                param_type_1018=((struct sType*)((void*)(__right_value1089=list$1voidphp_operator_load_element(param_types_1011,i_1017))));
                come_call_finalizer3(__right_value1089,(void*)0, 0, 1, 0, 0, __result_obj__);
                param_name_1019=((char*)(__right_value1090=list$1charphp_operator_load_element(param_names_1014,i_1017)));
                __right_value1090 = come_decrement_ref_count2(__right_value1090, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1016,((char*)(__right_value1091=make_come_type_name_string(param_type_1018,info))));
                __right_value1091 = come_decrement_ref_count2(__right_value1091, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1016," ");
                buffer_append_str(header_buf_1016,param_name_1019);
                if(                i_1017!=list$1voidphp_length(param_types_1011)-1) {
                    buffer_append_str(header_buf_1016,",");
                }
            }
            buffer_append_str(header_buf_1016,")");
            result_type_1008->mStatic=(_Bool)0;
            result_type_1008->mUniq=(_Bool)0;
            result_type_1008->mInline=(_Bool)0;
            result_type_1008->mGenerate=(_Bool)0;
            fun2_1020=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1092=__builtin_string(name_1009)))));
            __right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_1020==((void*)0)||fun2_1020->mExternal) {
                fun_1021=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3118, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1009),(struct sType*)come_increment_ref_count(result_type_1008),(struct list$1voidph*)come_increment_ref_count(param_types_1011),(struct list$1charph*)come_increment_ref_count(param_names_1014),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1015),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1007),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1016)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1009)),(struct sFun*)come_increment_ref_count(fun_1021));
                finalizer_973=fun_1021;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3130, "struct sNode", (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1102=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3130, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1021),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1022=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1102,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_1023=node_compile(node_1022,info);
                if(                !Value_1023) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1021,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_1022) { node_1022 = come_decrement_ref_count2(node_1022, ((struct sNode*)node_1022)->finalize, ((struct sNode*)node_1022)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_973=fun2_1020;
            }
            __dec_obj288=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1006);
            come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_1002;
            info->head=head_1005;
            info->sline=sline_1003;
            __dec_obj289=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1004);
            __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_991,buffer_finalize, 0, 0, 0, 0, (void*)0);
            sname_1004 = come_decrement_ref_count2(sname_1004, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_1006,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1007,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1008,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_1009 = come_decrement_ref_count2(name_1009, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(self_type_1010,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1011,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1014,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1015,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_1016,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1020,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_987 = come_decrement_ref_count2(user_real_fun_name_987, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_989,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_971;
    __dec_obj290=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_968);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_969);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_970;
    __result407__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1107=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3155, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),finalizer_973,(char*)come_increment_ref_count(real_fun_name_972))));
    last_code_968 = come_decrement_ref_count2(last_code_968, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_969 = come_decrement_ref_count2(last_code2_969, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_972 = come_decrement_ref_count2(real_fun_name_972, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_974,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_975,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_976 = come_decrement_ref_count2(fun_name2_976, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1107,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_980;
unsigned int hash_981;
unsigned int it_982;
struct sGenericsFun* __result396__;
struct sGenericsFun* __result397__;
struct sGenericsFun* __result398__;
struct sGenericsFun* __result399__;
default_value_980 = (void*)0;
    memset(&default_value_980,0,sizeof(struct sGenericsFun*));
    hash_981=string_get_hash_key(((char*)key))%self->size;
    it_982=hash_981;
    while((_Bool)1) {
        if(        self->item_existance[it_982]) {
            if(            charp_equals(self->keys[it_982],key)) {
                __result396__ = gComeFunResultObject = __result_obj__ = self->items[it_982];
                come_call_finalizer3(default_value_980,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result396__;
            }
            it_982++;
            if(            it_982>=self->size) {
                it_982=0;
            }
            else if(            it_982==hash_981) {
                __result397__ = gComeFunResultObject = __result_obj__ = default_value_980;
                come_call_finalizer3(default_value_980,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result397__;
            }
        }
        else {
            __result398__ = gComeFunResultObject = __result_obj__ = default_value_980;
            come_call_finalizer3(default_value_980,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result398__;
        }
    }
    __result399__ = gComeFunResultObject = __result_obj__ = default_value_980;
    come_call_finalizer3(default_value_980,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_993;
unsigned int hash_994;
unsigned int it_995;
struct sClass* __result400__;
struct sClass* __result401__;
struct sClass* __result402__;
struct sClass* __result403__;
default_value_993 = (void*)0;
    memset(&default_value_993,0,sizeof(struct sClass*));
    hash_994=string_get_hash_key(((char*)key))%self->size;
    it_995=hash_994;
    while((_Bool)1) {
        if(        self->item_existance[it_995]) {
            if(            charp_equals(self->keys[it_995],key)) {
                __result400__ = gComeFunResultObject = __result_obj__ = self->items[it_995];
                come_call_finalizer3(default_value_993,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result400__;
            }
            it_995++;
            if(            it_995>=self->size) {
                it_995=0;
            }
            else if(            it_995==hash_994) {
                __result401__ = gComeFunResultObject = __result_obj__ = default_value_993;
                come_call_finalizer3(default_value_993,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result401__;
            }
        }
        else {
            __result402__ = gComeFunResultObject = __result_obj__ = default_value_993;
            come_call_finalizer3(default_value_993,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result402__;
        }
    }
    __result403__ = gComeFunResultObject = __result_obj__ = default_value_993;
    come_call_finalizer3(default_value_993,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj281;
struct list$1voidph* __dec_obj282;
char* __dec_obj283;
char* __dec_obj284;
char* __dec_obj285;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj281=self->mName;
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj282=self->mFields;
            come_call_finalizer3(__dec_obj282,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj283=self->mDeclareSName;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj284=self->mParentClassName;
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj285=self->mAttribute;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj292;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj292=self->v2;
            __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sFunpcharph* __result404__;
void* __right_value1104 = (void*)0;
struct tuple2$2sFunpcharph* result_1025;
void* __right_value1105 = (void*)0;
char* __dec_obj293;
struct tuple2$2sFunpcharph* __result405__;
    if(    self==(void*)0) {
        __result404__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result404__;
    }
    result_1025=(struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "tuple2$2sFunpcharph_clone", 3, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key));
    if(    self!=((void*)0)) {
        result_1025->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj293=result_1025->v2;
        result_1025->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result405__ = gComeFunResultObject = __result_obj__ = result_1025;
    come_call_finalizer3(result_1025,tuple2$2sFunpcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self){
unsigned int result_1024;
    result_1024=0;
    result_1024+=int_get_hash_key(((int)self->v1));
    result_1024+=int_get_hash_key(((int)self->v2));
    return result_1024;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj294;
struct tuple2$2sFunpcharph* __result406__;
    self->v1=v1;
    __dec_obj294=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result406__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj295;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj295=self->v2;
            __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1026;
char* __dec_obj296;
char* last_code2_1027;
char* __dec_obj297;
_Bool comma_instead_of_semicolon_1028;
struct sClass* current_stack_frame_struct_1029;
struct sFun* equaler_1030;
void* __right_value1108 = (void*)0;
char* real_fun_name_1031;
void* __right_value1109 = (void*)0;
struct sType* type2_1032;
struct sClass* klass_1033;
void* __right_value1110 = (void*)0;
void* __right_value1111 = (void*)0;
struct buffer* source_1034;
char* name_1035;
void* __right_value1112 = (void*)0;
struct list$1voidph* o2_saved_1037;
struct tuple2$2charphsTypeph* it_1038;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1039=0;
struct sType* field_type_1040=0;
char* p_1042;
int sline_1043;
char* sname_1044;
char* head_1045;
struct buffer* source3_1046;
struct buffer* __dec_obj298;
void* __right_value1113 = (void*)0;
char* __dec_obj299;
void* __right_value1114 = (void*)0;
struct sBlock* block_1047;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
struct sType* result_type_1048;
void* __right_value1117 = (void*)0;
char* name_1049;
void* __right_value1118 = (void*)0;
struct sType* left_type_1050;
void* __right_value1119 = (void*)0;
struct sType* right_type_1051;
struct sType* __list_values23___1053[2];
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
struct list$1voidph* param_types_1052;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
char* __list_values24___1054[2];
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
struct list$1charph* param_names_1055;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct list$1charph* param_default_parametors_1056;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
struct buffer* header_buf_1057;
void* __right_value1130 = (void*)0;
int i_1058;
void* __right_value1131 = (void*)0;
struct sType* param_type_1059;
void* __right_value1132 = (void*)0;
char* param_name_1060;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
void* __right_value1135 = (void*)0;
struct sFun* fun2_1061;
void* __right_value1136 = (void*)0;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
struct sFun* fun_1062;
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1145 = (void*)0;
struct sNode* node_1063;
_Bool Value_1064;
struct buffer* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
struct tuple2$2sFunpcharph* __result408__;
    last_code_1026=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1027=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1028=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1029=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1030=((void*)0);
    real_fun_name_1031=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1032=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1032;
    klass_1033=type->mClass;
    if(    type->mPointerNum>0&&!klass_1033->mNumber) {
        source_1034=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3181, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1034,123);
        if(        klass_1033->mProtocol) {
            name_1035="_protocol_obj";
            char source2_1036[1024];
            memset(&source2_1036, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1036,1024,"return left.%s.equals(right.%s);\n",name_1035,name_1035);
            buffer_append_str(source_1034,source2_1036);
        }
        else {
            klass_1033=((struct sClass*)(__right_value1112=map$2charphsClassphp_operator_load_element(info->classes,klass_1033->mName)));
            come_call_finalizer3(__right_value1112,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1037=(struct list$1voidph*)come_increment_ref_count((klass_1033->mFields)),it_1038=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1037)));            !list$1voidphp_end((o2_saved_1037));            it_1038=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1037)))            ){
                multiple_assign_var13=it_1038;
                name_1039=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1040=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1041[1024];
                memset(&source2_1041, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1041,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1039,name_1039,name_1039);
                buffer_append_str(source_1034,source2_1041);
                name_1039 = come_decrement_ref_count2(name_1039, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1040,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1037,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1034,"return true;");
        buffer_append_char(source_1034,125);
        p_1042=info->p;
        sline_1043=info->sline;
        sname_1044=(char*)come_increment_ref_count(info->sname);
        head_1045=info->head;
        source3_1046=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1034);
        come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1034->buf;
        info->head=source_1034->buf;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1031));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1047=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1048=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3221, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"bool",(_Bool)0,info));
        name_1049=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1031));
        left_type_1050=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1050->mHeap=(_Bool)0;
        right_type_1051=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1051->mHeap=(_Bool)0;
        param_types_1052=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1053[0]=(struct sType*)come_increment_ref_count(left_type_1050),
__list_values23___1053[1]=(struct sType*)come_increment_ref_count(right_type_1051),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3227, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),2,__list_values23___1053)));
        param_names_1055=(struct list$1charph*)come_increment_ref_count((__list_values24___1054[0]=(char*)come_increment_ref_count(((char*)(__right_value1122=__builtin_string("left")))),
__list_values24___1054[1]=(char*)come_increment_ref_count(((char*)(__right_value1123=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3228, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),2,__list_values24___1054)));
        __right_value1122 = come_decrement_ref_count2(__right_value1122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1123 = come_decrement_ref_count2(__right_value1123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1056=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3229, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1056,((void*)0));
        list$1charphp_push_back(param_default_parametors_1056,((void*)0));
        header_buf_1057=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3233, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1057,((char*)(__right_value1130=make_come_type_name_string(result_type_1048,info))));
        __right_value1130 = come_decrement_ref_count2(__right_value1130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1057," ");
        buffer_append_str(header_buf_1057,real_fun_name_1031);
        buffer_append_str(header_buf_1057,"(");
        for(        i_1058=0;        i_1058<list$1voidphp_length(param_types_1052);        i_1058++        ){
            param_type_1059=((struct sType*)((void*)(__right_value1131=list$1voidphp_operator_load_element(param_types_1052,i_1058))));
            come_call_finalizer3(__right_value1131,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1060=((char*)(__right_value1132=list$1charphp_operator_load_element(param_names_1055,i_1058)));
            __right_value1132 = come_decrement_ref_count2(__right_value1132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1057,((char*)(__right_value1133=make_come_type_name_string(param_type_1059,info))));
            __right_value1133 = come_decrement_ref_count2(__right_value1133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1057," ");
            buffer_append_str(header_buf_1057,param_name_1060);
            if(            i_1058!=list$1voidphp_length(param_types_1052)-1) {
                buffer_append_str(header_buf_1057,",");
            }
        }
        buffer_append_str(header_buf_1057,")");
        result_type_1048->mStatic=(_Bool)0;
        result_type_1048->mUniq=(_Bool)0;
        result_type_1048->mInline=(_Bool)0;
        result_type_1048->mGenerate=(_Bool)0;
        fun2_1061=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1134=__builtin_string(name_1049)))));
        __right_value1134 = come_decrement_ref_count2(__right_value1134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1061==((void*)0)||fun2_1061->mExternal) {
            fun_1062=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3261, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1049),(struct sType*)come_increment_ref_count(result_type_1048),(struct list$1voidph*)come_increment_ref_count(param_types_1052),(struct list$1charph*)come_increment_ref_count(param_names_1055),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1056),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1047),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1057)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1049)),(struct sFun*)come_increment_ref_count(fun_1062));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3271, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1144=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3271, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1062),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1063=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1144,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1064=node_compile(node_1063,info);
            if(            !Value_1064) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1030=fun_1062;
            come_call_finalizer3(fun_1062,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1063) { node_1063 = come_decrement_ref_count2(node_1063, ((struct sNode*)node_1063)->finalize, ((struct sNode*)node_1063)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1030=fun2_1061;
        }
        __dec_obj300=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1046);
        come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1042;
        info->head=head_1045;
        info->sline=sline_1043;
        __dec_obj301=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1044);
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1034,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1044 = come_decrement_ref_count2(sname_1044, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1046,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1047,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1048,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1049 = come_decrement_ref_count2(name_1049, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1050,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1052,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1055,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1056,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1057,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1061,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1029;
    __dec_obj302=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1026);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj303=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1027);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1028;
    __result408__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1147=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3297, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),equaler_1030,(char*)come_increment_ref_count(real_fun_name_1031))));
    last_code_1026 = come_decrement_ref_count2(last_code_1026, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1027 = come_decrement_ref_count2(last_code2_1027, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1031 = come_decrement_ref_count2(real_fun_name_1031, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1032,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1147,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1065;
char* __dec_obj304;
char* last_code2_1066;
char* __dec_obj305;
_Bool comma_instead_of_semicolon_1067;
struct sClass* current_stack_frame_struct_1068;
struct sFun* equaler_1069;
void* __right_value1148 = (void*)0;
char* real_fun_name_1070;
void* __right_value1149 = (void*)0;
struct sType* type2_1071;
struct sClass* klass_1072;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
struct buffer* source_1073;
char* name_1074;
int i_1077;
void* __right_value1152 = (void*)0;
struct list$1voidph* o2_saved_1078;
struct tuple2$2charphsTypeph* it_1079;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1080=0;
struct sType* field_type_1081=0;
char* p_1085;
int sline_1086;
char* sname_1087;
char* head_1088;
struct buffer* source3_1089;
struct buffer* __dec_obj306;
void* __right_value1153 = (void*)0;
char* __dec_obj307;
void* __right_value1154 = (void*)0;
struct sBlock* block_1090;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
struct sType* result_type_1091;
void* __right_value1157 = (void*)0;
char* name_1092;
void* __right_value1158 = (void*)0;
struct sType* left_type_1093;
void* __right_value1159 = (void*)0;
struct sType* right_type_1094;
struct sType* __list_values25___1096[2];
void* __right_value1160 = (void*)0;
void* __right_value1161 = (void*)0;
struct list$1voidph* param_types_1095;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
char* __list_values26___1097[2];
void* __right_value1164 = (void*)0;
void* __right_value1165 = (void*)0;
struct list$1charph* param_names_1098;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct list$1charph* param_default_parametors_1099;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
struct buffer* header_buf_1100;
void* __right_value1170 = (void*)0;
int i_1101;
void* __right_value1171 = (void*)0;
struct sType* param_type_1102;
void* __right_value1172 = (void*)0;
char* param_name_1103;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
void* __right_value1175 = (void*)0;
struct sFun* fun2_1104;
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct sFun* fun_1105;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1185 = (void*)0;
struct sNode* node_1106;
_Bool Value_1107;
struct buffer* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
struct tuple2$2sFunpcharph* __result409__;
    last_code_1065=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1066=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1067=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1068=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1069=((void*)0);
    real_fun_name_1070=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1071=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1071;
    klass_1072=type->mClass;
    if(    type->mPointerNum>0&&!klass_1072->mNumber) {
        source_1073=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3322, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1073,123);
        if(        klass_1072->mProtocol) {
            name_1074="_protocol_obj";
            char source2_1075[1024];
            memset(&source2_1075, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1075,1024,"return left.%s !== right.%s;\n",name_1074,name_1074);
            buffer_append_str(source_1073,source2_1075);
        }
        else {
            char source2_1076[1024];
            memset(&source2_1076, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1076,1024,"return !(");
            buffer_append_str(source_1073,source2_1076);
            snprintf(source2_1076,1024,"( ");
            buffer_append_str(source_1073,source2_1076);
            i_1077=0;
            klass_1072=((struct sClass*)(__right_value1152=map$2charphsClassphp_operator_load_element(info->classes,klass_1072->mName)));
            come_call_finalizer3(__right_value1152,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1078=(struct list$1voidph*)come_increment_ref_count((klass_1072->mFields)),it_1079=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1078)));            !list$1voidphp_end((o2_saved_1078));            it_1079=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1078)))            ){
                multiple_assign_var14=it_1079;
                name_1080=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1081=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1082[1024];
                memset(&source2_1082, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1082,1024,"(left.%s === right.%s)",name_1080,name_1080,name_1080);
                buffer_append_str(source_1073,source2_1082);
                if(                i_1077==list$1voidphp_length(klass_1072->mFields)-1) {
                    char source2_1083[1024];
                    memset(&source2_1083, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1083,1024,"));");
                    buffer_append_str(source_1073,source2_1083);
                }
                else {
                    char source2_1084[1024];
                    memset(&source2_1084, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1084,1024," && ");
                    buffer_append_str(source_1073,source2_1084);
                }
                i_1077++;
                name_1080 = come_decrement_ref_count2(name_1080, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1081,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1078,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1073,125);
        p_1085=info->p;
        sline_1086=info->sline;
        sname_1087=(char*)come_increment_ref_count(info->sname);
        head_1088=info->head;
        source3_1089=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj306=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1073);
        come_call_finalizer3(__dec_obj306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1073->buf;
        info->head=source_1073->buf;
        __dec_obj307=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1070));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1090=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1091=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"bool",(_Bool)0,info));
        name_1092=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1070));
        left_type_1093=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1093->mHeap=(_Bool)0;
        right_type_1094=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1094->mHeap=(_Bool)0;
        param_types_1095=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1096[0]=(struct sType*)come_increment_ref_count(left_type_1093),
__list_values25___1096[1]=(struct sType*)come_increment_ref_count(right_type_1094),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3388, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),2,__list_values25___1096)));
        param_names_1098=(struct list$1charph*)come_increment_ref_count((__list_values26___1097[0]=(char*)come_increment_ref_count(((char*)(__right_value1162=__builtin_string("left")))),
__list_values26___1097[1]=(char*)come_increment_ref_count(((char*)(__right_value1163=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3389, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),2,__list_values26___1097)));
        __right_value1162 = come_decrement_ref_count2(__right_value1162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1163 = come_decrement_ref_count2(__right_value1163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1099=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3390, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1099,((void*)0));
        list$1charphp_push_back(param_default_parametors_1099,((void*)0));
        header_buf_1100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3394, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1100,((char*)(__right_value1170=make_come_type_name_string(result_type_1091,info))));
        __right_value1170 = come_decrement_ref_count2(__right_value1170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1100," ");
        buffer_append_str(header_buf_1100,real_fun_name_1070);
        buffer_append_str(header_buf_1100,"(");
        for(        i_1101=0;        i_1101<list$1voidphp_length(param_types_1095);        i_1101++        ){
            param_type_1102=((struct sType*)((void*)(__right_value1171=list$1voidphp_operator_load_element(param_types_1095,i_1101))));
            come_call_finalizer3(__right_value1171,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1103=((char*)(__right_value1172=list$1charphp_operator_load_element(param_names_1098,i_1101)));
            __right_value1172 = come_decrement_ref_count2(__right_value1172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1100,((char*)(__right_value1173=make_come_type_name_string(param_type_1102,info))));
            __right_value1173 = come_decrement_ref_count2(__right_value1173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1100," ");
            buffer_append_str(header_buf_1100,param_name_1103);
            if(            i_1101!=list$1voidphp_length(param_types_1095)-1) {
                buffer_append_str(header_buf_1100,",");
            }
        }
        buffer_append_str(header_buf_1100,")");
        result_type_1091->mStatic=(_Bool)0;
        result_type_1091->mUniq=(_Bool)0;
        result_type_1091->mInline=(_Bool)0;
        result_type_1091->mGenerate=(_Bool)0;
        fun2_1104=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1174=__builtin_string(name_1092)))));
        __right_value1174 = come_decrement_ref_count2(__right_value1174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1104==((void*)0)||fun2_1104->mExternal) {
            fun_1105=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3422, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1092),(struct sType*)come_increment_ref_count(result_type_1091),(struct list$1voidph*)come_increment_ref_count(param_types_1095),(struct list$1charph*)come_increment_ref_count(param_names_1098),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1099),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1090),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1100)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1092)),(struct sFun*)come_increment_ref_count(fun_1105));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3432, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1184=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3432, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1105),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1106=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1184,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1107=node_compile(node_1106,info);
            if(            !Value_1107) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1069=fun_1105;
            come_call_finalizer3(fun_1105,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1106) { node_1106 = come_decrement_ref_count2(node_1106, ((struct sNode*)node_1106)->finalize, ((struct sNode*)node_1106)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1069=fun2_1104;
        }
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1089);
        come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1085;
        info->head=head_1088;
        info->sline=sline_1086;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1087);
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1073,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1087 = come_decrement_ref_count2(sname_1087, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1089,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1090,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1091,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1092 = come_decrement_ref_count2(name_1092, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1093,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1094,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1095,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1098,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1099,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1100,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1104,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1068;
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1065);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1066);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1067;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1187=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3458, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),equaler_1069,(char*)come_increment_ref_count(real_fun_name_1070))));
    last_code_1065 = come_decrement_ref_count2(last_code_1065, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1066 = come_decrement_ref_count2(last_code2_1066, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1070 = come_decrement_ref_count2(real_fun_name_1070, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1071,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1187,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1108;
char* __dec_obj312;
char* last_code2_1109;
char* __dec_obj313;
_Bool comma_instead_of_semicolon_1110;
struct sClass* current_stack_frame_struct_1111;
struct sFun* equaler_1112;
void* __right_value1188 = (void*)0;
char* real_fun_name_1113;
void* __right_value1189 = (void*)0;
struct sType* type2_1114;
struct sClass* klass_1115;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
struct buffer* source_1116;
char* name_1117;
int i_1120;
void* __right_value1192 = (void*)0;
struct list$1voidph* o2_saved_1121;
struct tuple2$2charphsTypeph* it_1122;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1123=0;
struct sType* field_type_1124=0;
char* p_1128;
int sline_1129;
char* sname_1130;
char* head_1131;
struct buffer* source3_1132;
struct buffer* __dec_obj314;
void* __right_value1193 = (void*)0;
char* __dec_obj315;
void* __right_value1194 = (void*)0;
struct sBlock* block_1133;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
struct sType* result_type_1134;
void* __right_value1197 = (void*)0;
char* name_1135;
void* __right_value1198 = (void*)0;
struct sType* left_type_1136;
void* __right_value1199 = (void*)0;
struct sType* right_type_1137;
struct sType* __list_values27___1139[2];
void* __right_value1200 = (void*)0;
void* __right_value1201 = (void*)0;
struct list$1voidph* param_types_1138;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
char* __list_values28___1140[2];
void* __right_value1204 = (void*)0;
void* __right_value1205 = (void*)0;
struct list$1charph* param_names_1141;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct list$1charph* param_default_parametors_1142;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
struct buffer* header_buf_1143;
void* __right_value1210 = (void*)0;
int i_1144;
void* __right_value1211 = (void*)0;
struct sType* param_type_1145;
void* __right_value1212 = (void*)0;
char* param_name_1146;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
struct sFun* fun2_1147;
void* __right_value1216 = (void*)0;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct sFun* fun_1148;
void* __right_value1222 = (void*)0;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1225 = (void*)0;
struct sNode* node_1149;
_Bool Value_1150;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
void* __right_value1226 = (void*)0;
void* __right_value1227 = (void*)0;
struct tuple2$2sFunpcharph* __result410__;
    last_code_1108=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj312=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1109=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj313=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1110=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1111=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1112=((void*)0);
    real_fun_name_1113=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1114=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1114;
    klass_1115=type->mClass;
    if(    type->mPointerNum>0&&!klass_1115->mNumber) {
        source_1116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3483, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1116,123);
        if(        klass_1115->mProtocol) {
            name_1117="_protocol_obj";
            char source2_1118[1024];
            memset(&source2_1118, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1118,1024,"return !left.%s.equals(right.%s);\n",name_1117,name_1117);
            buffer_append_str(source_1116,source2_1118);
        }
        else {
            char source2_1119[1024];
            memset(&source2_1119, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1119,1024,"return !(");
            buffer_append_str(source_1116,source2_1119);
            i_1120=0;
            klass_1115=((struct sClass*)(__right_value1192=map$2charphsClassphp_operator_load_element(info->classes,klass_1115->mName)));
            come_call_finalizer3(__right_value1192,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1121=(struct list$1voidph*)come_increment_ref_count((klass_1115->mFields)),it_1122=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1121)));            !list$1voidphp_end((o2_saved_1121));            it_1122=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1121)))            ){
                multiple_assign_var15=it_1122;
                name_1123=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1124=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1125[1024];
                memset(&source2_1125, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1125,1024,"left.%s.equals(right.%s)",name_1123,name_1123);
                buffer_append_str(source_1116,source2_1125);
                if(                i_1120==list$1voidphp_length(klass_1115->mFields)-1) {
                    char source2_1126[1024];
                    memset(&source2_1126, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1126,1024,");");
                    buffer_append_str(source_1116,source2_1126);
                }
                else {
                    char source2_1127[1024];
                    memset(&source2_1127, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1127,1024," && ");
                    buffer_append_str(source_1116,source2_1127);
                }
                i_1120++;
                name_1123 = come_decrement_ref_count2(name_1123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1124,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1121,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1116,125);
        p_1128=info->p;
        sline_1129=info->sline;
        sname_1130=(char*)come_increment_ref_count(info->sname);
        head_1131=info->head;
        source3_1132=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1116);
        come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1116->buf;
        info->head=source_1116->buf;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1113));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1133=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1134=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"bool",(_Bool)0,info));
        name_1135=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1113));
        left_type_1136=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1136->mHeap=(_Bool)0;
        right_type_1137=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1137->mHeap=(_Bool)0;
        param_types_1138=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1139[0]=(struct sType*)come_increment_ref_count(left_type_1136),
__list_values27___1139[1]=(struct sType*)come_increment_ref_count(right_type_1137),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3546, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),2,__list_values27___1139)));
        param_names_1141=(struct list$1charph*)come_increment_ref_count((__list_values28___1140[0]=(char*)come_increment_ref_count(((char*)(__right_value1202=__builtin_string("left")))),
__list_values28___1140[1]=(char*)come_increment_ref_count(((char*)(__right_value1203=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3547, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),2,__list_values28___1140)));
        __right_value1202 = come_decrement_ref_count2(__right_value1202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1203 = come_decrement_ref_count2(__right_value1203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1142=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3548, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1142,((void*)0));
        list$1charphp_push_back(param_default_parametors_1142,((void*)0));
        header_buf_1143=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3552, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1143,((char*)(__right_value1210=make_come_type_name_string(result_type_1134,info))));
        __right_value1210 = come_decrement_ref_count2(__right_value1210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1143," ");
        buffer_append_str(header_buf_1143,real_fun_name_1113);
        buffer_append_str(header_buf_1143,"(");
        for(        i_1144=0;        i_1144<list$1voidphp_length(param_types_1138);        i_1144++        ){
            param_type_1145=((struct sType*)((void*)(__right_value1211=list$1voidphp_operator_load_element(param_types_1138,i_1144))));
            come_call_finalizer3(__right_value1211,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1146=((char*)(__right_value1212=list$1charphp_operator_load_element(param_names_1141,i_1144)));
            __right_value1212 = come_decrement_ref_count2(__right_value1212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1143,((char*)(__right_value1213=make_come_type_name_string(param_type_1145,info))));
            __right_value1213 = come_decrement_ref_count2(__right_value1213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1143," ");
            buffer_append_str(header_buf_1143,param_name_1146);
            if(            i_1144!=list$1voidphp_length(param_types_1138)-1) {
                buffer_append_str(header_buf_1143,",");
            }
        }
        buffer_append_str(header_buf_1143,")");
        result_type_1134->mStatic=(_Bool)0;
        result_type_1134->mUniq=(_Bool)0;
        result_type_1134->mInline=(_Bool)0;
        result_type_1134->mGenerate=(_Bool)0;
        fun2_1147=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1214=__builtin_string(name_1135)))));
        __right_value1214 = come_decrement_ref_count2(__right_value1214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1147==((void*)0)||fun2_1147->mExternal) {
            fun_1148=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3580, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1135),(struct sType*)come_increment_ref_count(result_type_1134),(struct list$1voidph*)come_increment_ref_count(param_types_1138),(struct list$1charph*)come_increment_ref_count(param_names_1141),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1142),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1133),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1143)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1135)),(struct sFun*)come_increment_ref_count(fun_1148));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3590, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1224=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3590, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1148),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1149=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1224,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1150=node_compile(node_1149,info);
            if(            !Value_1150) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1112=fun_1148;
            come_call_finalizer3(fun_1148,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1149) { node_1149 = come_decrement_ref_count2(node_1149, ((struct sNode*)node_1149)->finalize, ((struct sNode*)node_1149)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1112=fun2_1147;
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1132);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1128;
        info->head=head_1131;
        info->sline=sline_1129;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1130);
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1116,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1130 = come_decrement_ref_count2(sname_1130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1132,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1133,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1134,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1135 = come_decrement_ref_count2(name_1135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1136,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1137,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1138,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1141,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1142,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1143,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1147,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1111;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1108);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1109);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1110;
    __result410__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1227=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3616, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),equaler_1112,(char*)come_increment_ref_count(real_fun_name_1113))));
    last_code_1108 = come_decrement_ref_count2(last_code_1108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1109 = come_decrement_ref_count2(last_code2_1109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1113 = come_decrement_ref_count2(real_fun_name_1113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1227,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1151;
char* __dec_obj320;
char* last_code2_1152;
char* __dec_obj321;
_Bool comma_instead_of_semicolon_1153;
struct sClass* current_stack_frame_struct_1154;
struct sFun* equaler_1155;
void* __right_value1228 = (void*)0;
char* real_fun_name_1156;
void* __right_value1229 = (void*)0;
struct sType* type2_1157;
struct sClass* klass_1158;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct buffer* source_1159;
char* name_1160;
void* __right_value1232 = (void*)0;
struct list$1voidph* o2_saved_1163;
struct tuple2$2charphsTypeph* it_1164;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1165=0;
struct sType* field_type_1166=0;
char* p_1168;
int sline_1169;
char* sname_1170;
char* head_1171;
struct buffer* source3_1172;
struct buffer* __dec_obj322;
void* __right_value1233 = (void*)0;
char* __dec_obj323;
void* __right_value1234 = (void*)0;
struct sBlock* block_1173;
void* __right_value1235 = (void*)0;
void* __right_value1236 = (void*)0;
struct sType* result_type_1174;
void* __right_value1237 = (void*)0;
char* name_1175;
void* __right_value1238 = (void*)0;
struct sType* left_type_1176;
void* __right_value1239 = (void*)0;
struct sType* right_type_1177;
struct sType* __list_values29___1179[2];
void* __right_value1240 = (void*)0;
void* __right_value1241 = (void*)0;
struct list$1voidph* param_types_1178;
void* __right_value1242 = (void*)0;
void* __right_value1243 = (void*)0;
char* __list_values30___1180[2];
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
struct list$1charph* param_names_1181;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
struct list$1charph* param_default_parametors_1182;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
struct buffer* header_buf_1183;
void* __right_value1250 = (void*)0;
int i_1184;
void* __right_value1251 = (void*)0;
struct sType* param_type_1185;
void* __right_value1252 = (void*)0;
char* param_name_1186;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct sFun* fun2_1187;
void* __right_value1256 = (void*)0;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct sFun* fun_1188;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1265 = (void*)0;
struct sNode* node_1189;
_Bool Value_1190;
struct buffer* __dec_obj324;
char* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
struct tuple2$2sFunpcharph* __result411__;
    last_code_1151=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1152=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1153=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1154=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1155=((void*)0);
    real_fun_name_1156=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1157=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1157;
    klass_1158=type->mClass;
    if(    type->mPointerNum>0&&!klass_1158->mNumber) {
        source_1159=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3641, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1159,123);
        if(        klass_1158->mProtocol) {
            name_1160="_protocol_obj";
            char source2_1161[1024];
            memset(&source2_1161, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1161,1024,"return left.%s === right.%s;\n",name_1160,name_1160);
            buffer_append_str(source_1159,source2_1161);
        }
        else {
            char source2_1162[1024];
            memset(&source2_1162, 0, sizeof(char)            *(1024)            );
            klass_1158=((struct sClass*)(__right_value1232=map$2charphsClassphp_operator_load_element(info->classes,klass_1158->mName)));
            come_call_finalizer3(__right_value1232,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1163=(struct list$1voidph*)come_increment_ref_count((klass_1158->mFields)),it_1164=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1163)));            !list$1voidphp_end((o2_saved_1163));            it_1164=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1163)))            ){
                multiple_assign_var16=it_1164;
                name_1165=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1166=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1167[1024];
                memset(&source2_1167, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1167,1024,"if(left.%s !== right.%s) { return false; }\n",name_1165,name_1165,name_1165);
                buffer_append_str(source_1159,source2_1167);
                name_1165 = come_decrement_ref_count2(name_1165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1166,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1163,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1159,"return true;\n");
        buffer_append_char(source_1159,125);
        p_1168=info->p;
        sline_1169=info->sline;
        sname_1170=(char*)come_increment_ref_count(info->sname);
        head_1171=info->head;
        source3_1172=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj322=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1159);
        come_call_finalizer3(__dec_obj322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1159->buf;
        info->head=source_1159->buf;
        __dec_obj323=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1156));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1173=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1174=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3683, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"bool",(_Bool)0,info));
        name_1175=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1156));
        left_type_1176=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1176->mHeap=(_Bool)0;
        right_type_1177=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1177->mHeap=(_Bool)0;
        param_types_1178=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1179[0]=(struct sType*)come_increment_ref_count(left_type_1176),
__list_values29___1179[1]=(struct sType*)come_increment_ref_count(right_type_1177),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3689, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),2,__list_values29___1179)));
        param_names_1181=(struct list$1charph*)come_increment_ref_count((__list_values30___1180[0]=(char*)come_increment_ref_count(((char*)(__right_value1242=__builtin_string("left")))),
__list_values30___1180[1]=(char*)come_increment_ref_count(((char*)(__right_value1243=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3690, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),2,__list_values30___1180)));
        __right_value1242 = come_decrement_ref_count2(__right_value1242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1243 = come_decrement_ref_count2(__right_value1243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1182=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3691, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1182,((void*)0));
        list$1charphp_push_back(param_default_parametors_1182,((void*)0));
        header_buf_1183=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3695, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1183,((char*)(__right_value1250=make_come_type_name_string(result_type_1174,info))));
        __right_value1250 = come_decrement_ref_count2(__right_value1250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1183," ");
        buffer_append_str(header_buf_1183,real_fun_name_1156);
        buffer_append_str(header_buf_1183,"(");
        for(        i_1184=0;        i_1184<list$1voidphp_length(param_types_1178);        i_1184++        ){
            param_type_1185=((struct sType*)((void*)(__right_value1251=list$1voidphp_operator_load_element(param_types_1178,i_1184))));
            come_call_finalizer3(__right_value1251,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1186=((char*)(__right_value1252=list$1charphp_operator_load_element(param_names_1181,i_1184)));
            __right_value1252 = come_decrement_ref_count2(__right_value1252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1183,((char*)(__right_value1253=make_come_type_name_string(param_type_1185,info))));
            __right_value1253 = come_decrement_ref_count2(__right_value1253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1183," ");
            buffer_append_str(header_buf_1183,param_name_1186);
            if(            i_1184!=list$1voidphp_length(param_types_1178)-1) {
                buffer_append_str(header_buf_1183,",");
            }
        }
        buffer_append_str(header_buf_1183,")");
        result_type_1174->mStatic=(_Bool)0;
        result_type_1174->mUniq=(_Bool)0;
        result_type_1174->mInline=(_Bool)0;
        result_type_1174->mGenerate=(_Bool)0;
        fun2_1187=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1254=__builtin_string(name_1175)))));
        __right_value1254 = come_decrement_ref_count2(__right_value1254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1187==((void*)0)||fun2_1187->mExternal) {
            fun_1188=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1175),(struct sType*)come_increment_ref_count(result_type_1174),(struct list$1voidph*)come_increment_ref_count(param_types_1178),(struct list$1charph*)come_increment_ref_count(param_names_1181),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1182),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1173),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1183)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1175)),(struct sFun*)come_increment_ref_count(fun_1188));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3733, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1264=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3733, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1188),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1189=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1264,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1190=node_compile(node_1189,info);
            if(            !Value_1190) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1155=fun_1188;
            come_call_finalizer3(fun_1188,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1189) { node_1189 = come_decrement_ref_count2(node_1189, ((struct sNode*)node_1189)->finalize, ((struct sNode*)node_1189)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1155=fun2_1187;
        }
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1172);
        come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1168;
        info->head=head_1171;
        info->sline=sline_1169;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1170);
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1170 = come_decrement_ref_count2(sname_1170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1172,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1173,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1174,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1175 = come_decrement_ref_count2(name_1175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1176,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1178,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1181,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1182,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1183,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1187,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1154;
    __dec_obj326=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1151);
    __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj327=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1152);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1153;
    __result411__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1267=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3759, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),equaler_1155,(char*)come_increment_ref_count(real_fun_name_1156))));
    last_code_1151 = come_decrement_ref_count2(last_code_1151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1152 = come_decrement_ref_count2(last_code2_1152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1156 = come_decrement_ref_count2(real_fun_name_1156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1267,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
char* last_code_1191;
char* __dec_obj328;
char* last_code2_1192;
char* __dec_obj329;
_Bool comma_instead_of_semicolon_1193;
struct sClass* current_stack_frame_struct_1194;
struct sFun* cloner_1195;
void* __right_value1270 = (void*)0;
char* real_fun_name_1196;
void* __right_value1271 = (void*)0;
struct sType* type2_1197;
struct sClass* klass_1198;
char* fun_name2_1199;
void* __right_value1272 = (void*)0;
char* none_generics_name_1200;
void* __right_value1273 = (void*)0;
struct sType* obj_type_1201;
void* __right_value1274 = (void*)0;
char* __dec_obj330;
void* __right_value1275 = (void*)0;
char* fun_name3_1202;
void* __right_value1276 = (void*)0;
struct sGenericsFun* generics_fun_1203;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1204=0;
_Bool err_1205=0;
void* __right_value1279 = (void*)0;
void* __right_value1280 = (void*)0;
struct tuple2$2sFunpcharph* __result413__;
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
char* __dec_obj331;
void* __right_value1283 = (void*)0;
char* __dec_obj332;
int i_1206;
void* __right_value1284 = (void*)0;
char* new_fun_name_1207;
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
char* __dec_obj333;
void* __right_value1287 = (void*)0;
char* __dec_obj334;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct buffer* source_1208;
void* __right_value1290 = (void*)0;
char* name_1209;
void* __right_value1291 = (void*)0;
struct list$1voidph* o2_saved_1211;
struct tuple2$2charphsTypeph* it_1212;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1213=0;
struct sType* field_type_1214=0;
void* __right_value1292 = (void*)0;
struct list$1voidph* o2_saved_1217;
struct tuple2$2charphsTypeph* it_1218;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1219=0;
struct sType* field_type_1220=0;
char* p_1224;
int sline_1225;
char* sname_1226;
struct buffer* source3_1227;
char* head_1228;
struct buffer* __dec_obj335;
void* __right_value1293 = (void*)0;
char* __dec_obj336;
void* __right_value1294 = (void*)0;
struct sBlock* block_1229;
void* __right_value1295 = (void*)0;
struct sType* result_type_1230;
void* __right_value1296 = (void*)0;
char* name_1231;
void* __right_value1297 = (void*)0;
struct sType* self_type_1232;
struct sType* __list_values31___1234[1];
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct list$1voidph* param_types_1233;
void* __right_value1300 = (void*)0;
char* __list_values32___1235[1];
void* __right_value1301 = (void*)0;
void* __right_value1302 = (void*)0;
struct list$1charph* param_names_1236;
void* __right_value1303 = (void*)0;
void* __right_value1304 = (void*)0;
struct list$1charph* param_default_parametors_1237;
void* __right_value1305 = (void*)0;
void* __right_value1306 = (void*)0;
struct buffer* header_buf_1238;
void* __right_value1307 = (void*)0;
int i_1239;
void* __right_value1308 = (void*)0;
struct sType* param_type_1240;
void* __right_value1309 = (void*)0;
char* param_name_1241;
void* __right_value1310 = (void*)0;
void* __right_value1311 = (void*)0;
void* __right_value1312 = (void*)0;
struct sFun* fun2_1242;
void* __right_value1313 = (void*)0;
void* __right_value1314 = (void*)0;
void* __right_value1315 = (void*)0;
void* __right_value1316 = (void*)0;
void* __right_value1317 = (void*)0;
void* __right_value1318 = (void*)0;
struct sFun* fun_1243;
void* __right_value1319 = (void*)0;
void* __right_value1320 = (void*)0;
void* __right_value1321 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1322 = (void*)0;
struct sNode* node_1244;
_Bool Value_1245;
char* __dec_obj337;
struct buffer* __dec_obj338;
char* __dec_obj339;
char* __dec_obj340;
void* __right_value1323 = (void*)0;
void* __right_value1324 = (void*)0;
struct tuple2$2sFunpcharph* __result414__;
fun_name2_1199 = (void*)0;
memset(&i_1206, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1269=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3765, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1269,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    last_code_1191=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj328=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1192=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj329=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1193=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1194=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1195=((void*)0);
    real_fun_name_1196=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1197=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1197;
    klass_1198=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_1200=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1201=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj330=fun_name2_1199;
        fun_name2_1199=(char*)come_increment_ref_count(create_method_name(obj_type_1201,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1202=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1200,fun_name));
        generics_fun_1203=((struct sGenericsFun*)(__right_value1276=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_1202,((void*)0))));
        come_call_finalizer3(__right_value1276,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1203) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1278=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1199)),generics_fun_1203,obj_type_1201,info)));
            name_1204=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1205=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1278,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1205) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result413__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1280=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3805, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1204 = come_decrement_ref_count2(name_1204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1200 = come_decrement_ref_count2(none_generics_name_1200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1201,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1202 = come_decrement_ref_count2(fun_name3_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1191 = come_decrement_ref_count2(last_code_1191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1192 = come_decrement_ref_count2(last_code2_1192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1196 = come_decrement_ref_count2(real_fun_name_1196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1197,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1199 = come_decrement_ref_count2(fun_name2_1199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1280,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result413__;
                }
            }
            cloner_1195=((struct sFun*)(__right_value1281=map$2charphsFunphp_operator_load_element(info->funcs,name_1204)));
            come_call_finalizer3(__right_value1281,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            name_1204 = come_decrement_ref_count2(name_1204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1195=((struct sFun*)(__right_value1282=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1199)));
            come_call_finalizer3(__right_value1282,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj331=real_fun_name_1196;
        real_fun_name_1196=(char*)come_increment_ref_count(fun_name2_1199);
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1200 = come_decrement_ref_count2(none_generics_name_1200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1201,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1202 = come_decrement_ref_count2(fun_name3_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj332=fun_name2_1199;
        fun_name2_1199=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1206=128-1;        i_1206>=1;        i_1206--        ){
            new_fun_name_1207=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1199,i_1206));
            cloner_1195=((struct sFun*)(__right_value1285=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1207)));
            come_call_finalizer3(__right_value1285,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1195) {
                __dec_obj333=fun_name2_1199;
                fun_name2_1199=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1207));
                __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1207 = come_decrement_ref_count2(new_fun_name_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1207 = come_decrement_ref_count2(new_fun_name_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1195==((void*)0)) {
            cloner_1195=((struct sFun*)(__right_value1287=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1199)));
            come_call_finalizer3(__right_value1287,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj334=real_fun_name_1196;
        real_fun_name_1196=(char*)come_increment_ref_count(fun_name2_1199);
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1195==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3840, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1208,"{\n");
        buffer_append_str(source_1208,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1208,"var result = new %s~;\n",((char*)(__right_value1290=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1290 = come_decrement_ref_count2(__right_value1290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1198->mProtocol) {
            name_1209="_protocol_obj";
            char source2_1210[1024];
            memset(&source2_1210, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1210,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1208,source2_1210);
            klass_1198=((struct sClass*)(__right_value1291=map$2charphsClassphp_operator_load_element(info->classes,klass_1198->mName)));
            come_call_finalizer3(__right_value1291,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1211=(struct list$1voidph*)come_increment_ref_count((klass_1198->mFields)),it_1212=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1211)));            !list$1voidphp_end((o2_saved_1211));            it_1212=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1211)))            ){
                multiple_assign_var18=it_1212;
                name_1213=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1214=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1213,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1214->mArrayNum)>0) {
                    char source2_1215[1024];
                    memset(&source2_1215, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1215,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1213,name_1213,name_1213);
                    buffer_append_str(source_1208,source2_1215);
                }
                else {
                    char source2_1216[1024];
                    memset(&source2_1216, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1216,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1213,name_1213);
                    buffer_append_str(source_1208,source2_1216);
                }
                name_1213 = come_decrement_ref_count2(name_1213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1214,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1211,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1198=((struct sClass*)(__right_value1292=map$2charphsClassphp_operator_load_element(info->classes,klass_1198->mName)));
            come_call_finalizer3(__right_value1292,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1217=(struct list$1voidph*)come_increment_ref_count((klass_1198->mFields)),it_1218=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1217)));            !list$1voidphp_end((o2_saved_1217));            it_1218=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1217)))            ){
                multiple_assign_var19=it_1218;
                name_1219=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1220=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1220->mHeap) {
                    char source2_1221[1024];
                    memset(&source2_1221, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1221,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1219,name_1219,name_1219);
                    buffer_append_str(source_1208,source2_1221);
                }
                else if(                list$1sNodephp_length(field_type_1220->mArrayNum)>0) {
                    char source2_1222[1024];
                    memset(&source2_1222, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1222,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1219,name_1219,name_1219);
                    buffer_append_str(source_1208,source2_1222);
                }
                else {
                    char source2_1223[1024];
                    memset(&source2_1223, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1223,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1219,name_1219);
                    buffer_append_str(source_1208,source2_1223);
                }
                name_1219 = come_decrement_ref_count2(name_1219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1220,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1217,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1208,"return result;");
        buffer_append_char(source_1208,125);
        p_1224=info->p;
        sline_1225=info->sline;
        sname_1226=(char*)come_increment_ref_count(info->sname);
        source3_1227=(struct buffer*)come_increment_ref_count(info->source);
        head_1228=info->head;
        __dec_obj335=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1208);
        come_call_finalizer3(__dec_obj335,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj336=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1196));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1229=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1230=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1231=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1196));
        self_type_1232=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1232->mHeap=(_Bool)0;
        param_types_1233=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1234[0]=(struct sType*)come_increment_ref_count(self_type_1232),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3921, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),1,__list_values31___1234)));
        param_names_1236=(struct list$1charph*)come_increment_ref_count((__list_values32___1235[0]=(char*)come_increment_ref_count(((char*)(__right_value1300=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3922, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),1,__list_values32___1235)));
        __right_value1300 = come_decrement_ref_count2(__right_value1300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1237=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3923, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1237,((void*)0));
        header_buf_1238=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3926, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1238,((char*)(__right_value1307=make_come_type_name_string(result_type_1230,info))));
        __right_value1307 = come_decrement_ref_count2(__right_value1307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1238," ");
        buffer_append_str(header_buf_1238,real_fun_name_1196);
        buffer_append_str(header_buf_1238,"(");
        for(        i_1239=0;        i_1239<list$1voidphp_length(param_types_1233);        i_1239++        ){
            param_type_1240=((struct sType*)((void*)(__right_value1308=list$1voidphp_operator_load_element(param_types_1233,i_1239))));
            come_call_finalizer3(__right_value1308,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1241=((char*)(__right_value1309=list$1charphp_operator_load_element(param_names_1236,i_1239)));
            __right_value1309 = come_decrement_ref_count2(__right_value1309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1238,((char*)(__right_value1310=make_come_type_name_string(param_type_1240,info))));
            __right_value1310 = come_decrement_ref_count2(__right_value1310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1238," ");
            buffer_append_str(header_buf_1238,param_name_1241);
            if(            i_1239!=list$1voidphp_length(param_types_1233)-1) {
                buffer_append_str(header_buf_1238,",");
            }
        }
        buffer_append_str(header_buf_1238,")");
        result_type_1230->mStatic=(_Bool)0;
        result_type_1230->mUniq=(_Bool)0;
        result_type_1230->mInline=(_Bool)0;
        result_type_1230->mGenerate=(_Bool)0;
        fun2_1242=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1311=__builtin_string(name_1231)))));
        __right_value1311 = come_decrement_ref_count2(__right_value1311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1242==((void*)0)||fun2_1242->mExternal) {
            fun_1243=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3955, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1231),(struct sType*)come_increment_ref_count(result_type_1230),(struct list$1voidph*)come_increment_ref_count(param_types_1233),(struct list$1charph*)come_increment_ref_count(param_names_1236),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1237),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1229),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1238)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1243->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1231)),(struct sFun*)come_increment_ref_count(fun_1243));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3967, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1321=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3967, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1243),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1244=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1321,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1245=node_compile(node_1244,info);
            if(            !Value_1245) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1195=fun_1243;
            come_call_finalizer3(fun_1243,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1244) { node_1244 = come_decrement_ref_count2(node_1244, ((struct sNode*)node_1244)->finalize, ((struct sNode*)node_1244)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1195=fun2_1242;
        }
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1226);
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1225;
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1227);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1224;
        info->head=head_1228;
        info->sline=sline_1225;
        come_call_finalizer3(source_1208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1226 = come_decrement_ref_count2(sname_1226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1227,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1229,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1230,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1231 = come_decrement_ref_count2(name_1231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1232,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1233,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1236,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1237,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1238,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1242,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1194;
    __dec_obj339=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1191);
    __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj340=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1192);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1193;
    __result414__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1324=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3995, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),cloner_1195,(char*)come_increment_ref_count(real_fun_name_1196))));
    last_code_1191 = come_decrement_ref_count2(last_code_1191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1192 = come_decrement_ref_count2(last_code2_1192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1196 = come_decrement_ref_count2(real_fun_name_1196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1197,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1199 = come_decrement_ref_count2(fun_name2_1199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1324,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1246;
char* __dec_obj341;
char* last_code2_1247;
char* __dec_obj342;
_Bool comma_instead_of_semicolon_1248;
struct sClass* current_stack_frame_struct_1249;
struct sFun* cloner_1250;
void* __right_value1325 = (void*)0;
char* real_fun_name_1251;
void* __right_value1326 = (void*)0;
struct sType* type2_1252;
struct sClass* klass_1253;
void* __right_value1327 = (void*)0;
void* __right_value1328 = (void*)0;
struct buffer* source_1254;
int i_1255;
void* __right_value1329 = (void*)0;
struct list$1voidph* o2_saved_1256;
struct tuple2$2charphsTypeph* it_1257;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1258=0;
struct sType* field_type_1259=0;
char* p_1262;
int sline_1263;
char* sname_1264;
struct buffer* source3_1265;
char* head_1266;
struct buffer* __dec_obj343;
void* __right_value1330 = (void*)0;
char* __dec_obj344;
void* __right_value1331 = (void*)0;
struct sBlock* block_1267;
void* __right_value1332 = (void*)0;
void* __right_value1333 = (void*)0;
struct sType* result_type_1268;
void* __right_value1334 = (void*)0;
char* name_1269;
void* __right_value1335 = (void*)0;
struct sType* self_type_1270;
struct sType* __list_values33___1272[1];
void* __right_value1336 = (void*)0;
void* __right_value1337 = (void*)0;
struct list$1voidph* param_types_1271;
void* __right_value1338 = (void*)0;
char* __list_values34___1273[1];
void* __right_value1339 = (void*)0;
void* __right_value1340 = (void*)0;
struct list$1charph* param_names_1274;
void* __right_value1341 = (void*)0;
void* __right_value1342 = (void*)0;
struct list$1charph* param_default_parametors_1275;
void* __right_value1343 = (void*)0;
void* __right_value1344 = (void*)0;
struct buffer* header_buf_1276;
void* __right_value1345 = (void*)0;
int i_1277;
void* __right_value1346 = (void*)0;
struct sType* param_type_1278;
void* __right_value1347 = (void*)0;
char* param_name_1279;
void* __right_value1348 = (void*)0;
void* __right_value1349 = (void*)0;
void* __right_value1350 = (void*)0;
struct sFun* fun2_1280;
void* __right_value1351 = (void*)0;
void* __right_value1352 = (void*)0;
void* __right_value1353 = (void*)0;
void* __right_value1354 = (void*)0;
void* __right_value1355 = (void*)0;
void* __right_value1356 = (void*)0;
struct sFun* fun_1281;
void* __right_value1357 = (void*)0;
void* __right_value1358 = (void*)0;
void* __right_value1359 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1360 = (void*)0;
struct sNode* node_1282;
_Bool Value_1283;
char* __dec_obj345;
struct buffer* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
void* __right_value1361 = (void*)0;
void* __right_value1362 = (void*)0;
struct tuple2$2sFunpcharph* __result415__;
    last_code_1246=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj341=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1247=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj342=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1248=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1249=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1250=((void*)0);
    real_fun_name_1251=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1252=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1252;
    klass_1253=type->mClass;
    if(    type->mPointerNum>0&&!klass_1253->mNumber) {
        source_1254=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4020, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1254,"{\n");
        buffer_append_str(source_1254,"var result = new buffer();\n");
        buffer_append_format(source_1254,"result.append_str(\"%s {\");\n",klass_1253->mName);
        i_1255=0;
        klass_1253=((struct sClass*)(__right_value1329=map$2charphsClassphp_operator_load_element(info->classes,klass_1253->mName)));
        come_call_finalizer3(__right_value1329,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1256=(struct list$1voidph*)come_increment_ref_count((klass_1253->mFields)),it_1257=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1256)));        !list$1voidphp_end((o2_saved_1256));        it_1257=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1256)))        ){
            multiple_assign_var20=it_1257;
            name_1258=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1259=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1255==list$1voidphp_length(klass_1253->mFields)-1) {
                char source2_1260[1024];
                memset(&source2_1260, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1260,1024,"result.append_str(\"%s:\");\n",name_1258);
                buffer_append_str(source_1254,source2_1260);
                snprintf(source2_1260,1024,"result.append_str(self.%s.to_string());\n",name_1258);
                buffer_append_str(source_1254,source2_1260);
            }
            else {
                char source2_1261[1024];
                memset(&source2_1261, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1261,1024,"result.append_str(\"%s:\");\n",name_1258);
                buffer_append_str(source_1254,source2_1261);
                snprintf(source2_1261,1024,"result.append_str(self.%s.to_string());\n",name_1258);
                buffer_append_str(source_1254,source2_1261);
                snprintf(source2_1261,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1254,source2_1261);
            }
            i_1255++;
            name_1258 = come_decrement_ref_count2(name_1258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1259,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1256,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1254,"result.append_str(\"}\");\n");
        buffer_append_format(source_1254,"return result.to_string();\n");
        buffer_append_char(source_1254,125);
        p_1262=info->p;
        sline_1263=info->sline;
        sname_1264=(char*)come_increment_ref_count(info->sname);
        source3_1265=(struct buffer*)come_increment_ref_count(info->source);
        head_1266=info->head;
        __dec_obj343=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1254);
        come_call_finalizer3(__dec_obj343,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj344=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1251));
        __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1267=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1268=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4081, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info));
        result_type_1268->mHeap=(_Bool)1;
        name_1269=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1251));
        self_type_1270=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1270->mHeap=(_Bool)0;
        param_types_1271=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1272[0]=(struct sType*)come_increment_ref_count(self_type_1270),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4086, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),1,__list_values33___1272)));
        param_names_1274=(struct list$1charph*)come_increment_ref_count((__list_values34___1273[0]=(char*)come_increment_ref_count(((char*)(__right_value1338=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4087, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),1,__list_values34___1273)));
        __right_value1338 = come_decrement_ref_count2(__right_value1338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1275=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4088, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1275,((void*)0));
        header_buf_1276=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4091, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1276,((char*)(__right_value1345=make_come_type_name_string(result_type_1268,info))));
        __right_value1345 = come_decrement_ref_count2(__right_value1345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1276," ");
        buffer_append_str(header_buf_1276,real_fun_name_1251);
        buffer_append_str(header_buf_1276,"(");
        for(        i_1277=0;        i_1277<list$1voidphp_length(param_types_1271);        i_1277++        ){
            param_type_1278=((struct sType*)((void*)(__right_value1346=list$1voidphp_operator_load_element(param_types_1271,i_1277))));
            come_call_finalizer3(__right_value1346,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1279=((char*)(__right_value1347=list$1charphp_operator_load_element(param_names_1274,i_1277)));
            __right_value1347 = come_decrement_ref_count2(__right_value1347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1276,((char*)(__right_value1348=make_come_type_name_string(param_type_1278,info))));
            __right_value1348 = come_decrement_ref_count2(__right_value1348, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1276," ");
            buffer_append_str(header_buf_1276,param_name_1279);
            if(            i_1277!=list$1voidphp_length(param_types_1271)-1) {
                buffer_append_str(header_buf_1276,",");
            }
        }
        buffer_append_str(header_buf_1276,")");
        result_type_1268->mStatic=(_Bool)0;
        result_type_1268->mUniq=(_Bool)0;
        result_type_1268->mInline=(_Bool)0;
        result_type_1268->mGenerate=(_Bool)0;
        fun2_1280=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1349=__builtin_string(name_1269)))));
        __right_value1349 = come_decrement_ref_count2(__right_value1349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1280==((void*)0)||fun2_1280->mExternal) {
            fun_1281=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4119, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1269),(struct sType*)come_increment_ref_count(result_type_1268),(struct list$1voidph*)come_increment_ref_count(param_types_1271),(struct list$1charph*)come_increment_ref_count(param_names_1274),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1275),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1267),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1276)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1281->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1269)),(struct sFun*)come_increment_ref_count(fun_1281));
            cloner_1250=fun_1281;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4133, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1359=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4133, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1281),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1282=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1359,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1283=node_compile(node_1282,info);
            if(            !Value_1283) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1281,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1282) { node_1282 = come_decrement_ref_count2(node_1282, ((struct sNode*)node_1282)->finalize, ((struct sNode*)node_1282)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1250=fun2_1280;
        }
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1264);
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1263;
        __dec_obj346=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1265);
        come_call_finalizer3(__dec_obj346,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1262;
        info->head=head_1266;
        info->sline=sline_1263;
        come_call_finalizer3(source_1254,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1264 = come_decrement_ref_count2(sname_1264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1265,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1267,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1268,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1269 = come_decrement_ref_count2(name_1269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1270,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1271,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1274,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1275,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1276,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1280,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1249;
    __dec_obj347=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1246);
    __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj348=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1247);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1248;
    __result415__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1362=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4159, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),cloner_1250,(char*)come_increment_ref_count(real_fun_name_1251))));
    last_code_1246 = come_decrement_ref_count2(last_code_1246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1247 = come_decrement_ref_count2(last_code2_1247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1251 = come_decrement_ref_count2(real_fun_name_1251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1252,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1362,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1331;
char* __dec_obj359;
char* last_code2_1332;
char* __dec_obj360;
_Bool comma_instead_of_semicolon_1333;
struct sClass* current_stack_frame_struct_1334;
struct sFun* get_hash_key_fun_1335;
void* __right_value1413 = (void*)0;
char* real_fun_name_1336;
void* __right_value1414 = (void*)0;
struct sType* type2_1337;
struct sClass* klass_1338;
void* __right_value1415 = (void*)0;
void* __right_value1416 = (void*)0;
char* none_generics_name_1339;
void* __right_value1417 = (void*)0;
char* generics_fun_name_1340;
void* __right_value1418 = (void*)0;
struct sGenericsFun* generics_fun_1341;
void* __right_value1419 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1342=0;
_Bool err_1343=0;
void* __right_value1420 = (void*)0;
int i_1344;
void* __right_value1421 = (void*)0;
char* new_fun_name_1345;
void* __right_value1422 = (void*)0;
void* __right_value1423 = (void*)0;
char* __dec_obj361;
void* __right_value1424 = (void*)0;
void* __right_value1425 = (void*)0;
void* __right_value1426 = (void*)0;
struct buffer* source_1346;
int i_1347;
void* __right_value1427 = (void*)0;
struct list$1voidph* o2_saved_1348;
struct tuple2$2charphsTypeph* it_1349;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1350=0;
struct sType* field_type_1351=0;
char* p_1353;
int sline_1354;
char* sname_1355;
struct buffer* source3_1356;
char* head_1357;
struct buffer* __dec_obj362;
void* __right_value1428 = (void*)0;
char* __dec_obj363;
void* __right_value1429 = (void*)0;
struct sBlock* block_1358;
void* __right_value1430 = (void*)0;
void* __right_value1431 = (void*)0;
struct sType* result_type_1359;
void* __right_value1432 = (void*)0;
char* name_1360;
void* __right_value1433 = (void*)0;
struct sType* self_type_1361;
struct sType* __list_values37___1363[1];
void* __right_value1434 = (void*)0;
void* __right_value1435 = (void*)0;
struct list$1voidph* param_types_1362;
void* __right_value1436 = (void*)0;
char* __list_values38___1364[1];
void* __right_value1437 = (void*)0;
void* __right_value1438 = (void*)0;
struct list$1charph* param_names_1365;
void* __right_value1439 = (void*)0;
void* __right_value1440 = (void*)0;
struct list$1charph* param_default_parametors_1366;
void* __right_value1441 = (void*)0;
void* __right_value1442 = (void*)0;
struct buffer* header_buf_1367;
void* __right_value1443 = (void*)0;
int i_1368;
void* __right_value1444 = (void*)0;
struct sType* param_type_1369;
void* __right_value1445 = (void*)0;
char* param_name_1370;
void* __right_value1446 = (void*)0;
void* __right_value1447 = (void*)0;
void* __right_value1448 = (void*)0;
struct sFun* fun2_1371;
void* __right_value1449 = (void*)0;
void* __right_value1450 = (void*)0;
void* __right_value1451 = (void*)0;
void* __right_value1452 = (void*)0;
void* __right_value1453 = (void*)0;
void* __right_value1454 = (void*)0;
struct sFun* fun_1372;
void* __right_value1455 = (void*)0;
void* __right_value1456 = (void*)0;
void* __right_value1457 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1458 = (void*)0;
struct sNode* node_1373;
_Bool Value_1374;
char* __dec_obj364;
struct buffer* __dec_obj365;
char* __dec_obj366;
char* __dec_obj367;
void* __right_value1459 = (void*)0;
void* __right_value1460 = (void*)0;
struct tuple2$2sFunpcharph* __result417__;
memset(&i_1344, 0, sizeof(int));
    last_code_1331=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1332=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1333=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1334=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1335=((void*)0);
    real_fun_name_1336=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1337=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1337;
    klass_1338=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1335=((struct sFun*)(__right_value1415=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1336)));
        come_call_finalizer3(__right_value1415,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1335==((void*)0)) {
            none_generics_name_1339=(char*)come_increment_ref_count(get_none_generics_name(type2_1337->mClass->mName));
            generics_fun_name_1340=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1339,fun_name));
            generics_fun_1341=((struct sGenericsFun*)(__right_value1418=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_1340)));
            come_call_finalizer3(__right_value1418,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1341) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1419=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1336),generics_fun_1341,type,info)));
                name_1342=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1343=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1419,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1343) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1335=((struct sFun*)(__right_value1420=map$2charphsFunphp_operator_load_element(info->funcs,name_1342)));
                come_call_finalizer3(__right_value1420,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_1342 = come_decrement_ref_count2(name_1342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1339 = come_decrement_ref_count2(none_generics_name_1339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1340 = come_decrement_ref_count2(generics_fun_name_1340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1344=128-1;        i_1344>=1;        i_1344--        ){
            new_fun_name_1345=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1336,i_1344));
            get_hash_key_fun_1335=((struct sFun*)(__right_value1422=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1345)));
            come_call_finalizer3(__right_value1422,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1335) {
                __dec_obj361=real_fun_name_1336;
                real_fun_name_1336=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1345));
                __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1345 = come_decrement_ref_count2(new_fun_name_1345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1345 = come_decrement_ref_count2(new_fun_name_1345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1335==((void*)0)) {
            get_hash_key_fun_1335=((struct sFun*)(__right_value1424=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1336)));
            come_call_finalizer3(__right_value1424,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1335==((void*)0)&&type->mPointerNum>0&&!klass_1338->mNumber&&!klass_1338->mProtocol) {
        source_1346=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4447, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1346,"{\n");
        buffer_append_str(source_1346,"unsigned int result = 0;\n");
        i_1347=0;
        klass_1338=((struct sClass*)(__right_value1427=map$2charphsClassphp_operator_load_element(info->classes,klass_1338->mName)));
        come_call_finalizer3(__right_value1427,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1348=(struct list$1voidph*)come_increment_ref_count((klass_1338->mFields)),it_1349=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1348)));        !list$1voidphp_end((o2_saved_1348));        it_1349=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1348)))        ){
            multiple_assign_var24=it_1349;
            name_1350=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1351=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1352[1024];
            memset(&source2_1352, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1352,1024,"result += ((int)self.%s).get_hash_key();\n",name_1350);
            buffer_append_str(source_1346,source2_1352);
            i_1347++;
            name_1350 = come_decrement_ref_count2(name_1350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1351,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1348,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1346,"return result;\n");
        buffer_append_char(source_1346,125);
        p_1353=info->p;
        sline_1354=info->sline;
        sname_1355=(char*)come_increment_ref_count(info->sname);
        source3_1356=(struct buffer*)come_increment_ref_count(info->source);
        head_1357=info->head;
        __dec_obj362=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1346);
        come_call_finalizer3(__dec_obj362,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj363=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1336));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1358=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1359=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4484, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info));
        result_type_1359->mUnsigned=(_Bool)1;
        name_1360=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1336));
        self_type_1361=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1361->mHeap=(_Bool)0;
        param_types_1362=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1363[0]=(struct sType*)come_increment_ref_count(self_type_1361),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4489, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key)),1,__list_values37___1363)));
        param_names_1365=(struct list$1charph*)come_increment_ref_count((__list_values38___1364[0]=(char*)come_increment_ref_count(((char*)(__right_value1436=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4490, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key)),1,__list_values38___1364)));
        __right_value1436 = come_decrement_ref_count2(__right_value1436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1366=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4491, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1366,((void*)0));
        header_buf_1367=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4494, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1367,((char*)(__right_value1443=make_come_type_name_string(result_type_1359,info))));
        __right_value1443 = come_decrement_ref_count2(__right_value1443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1367," ");
        buffer_append_str(header_buf_1367,real_fun_name_1336);
        buffer_append_str(header_buf_1367,"(");
        for(        i_1368=0;        i_1368<list$1voidphp_length(param_types_1362);        i_1368++        ){
            param_type_1369=((struct sType*)((void*)(__right_value1444=list$1voidphp_operator_load_element(param_types_1362,i_1368))));
            come_call_finalizer3(__right_value1444,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1370=((char*)(__right_value1445=list$1charphp_operator_load_element(param_names_1365,i_1368)));
            __right_value1445 = come_decrement_ref_count2(__right_value1445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1367,((char*)(__right_value1446=make_come_type_name_string(param_type_1369,info))));
            __right_value1446 = come_decrement_ref_count2(__right_value1446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1367," ");
            buffer_append_str(header_buf_1367,param_name_1370);
            if(            i_1368!=list$1voidphp_length(param_types_1362)-1) {
                buffer_append_str(header_buf_1367,",");
            }
        }
        buffer_append_str(header_buf_1367,")");
        result_type_1359->mStatic=(_Bool)0;
        result_type_1359->mUniq=(_Bool)0;
        result_type_1359->mInline=(_Bool)0;
        result_type_1359->mGenerate=(_Bool)0;
        fun2_1371=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1447=__builtin_string(name_1360)))));
        __right_value1447 = come_decrement_ref_count2(__right_value1447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1371==((void*)0)||fun2_1371->mExternal) {
            fun_1372=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4522, "struct sFun*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1360),(struct sType*)come_increment_ref_count(result_type_1359),(struct list$1voidph*)come_increment_ref_count(param_types_1362),(struct list$1charph*)come_increment_ref_count(param_names_1365),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1366),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1358),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1367)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1372->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1360)),(struct sFun*)come_increment_ref_count(fun_1372));
            get_hash_key_fun_1335=fun_1372;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4536, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1457=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4536, "struct sFunNode*", (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1372),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1373=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1457,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1374=node_compile(node_1373,info);
            if(            !Value_1374) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1372,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1373) { node_1373 = come_decrement_ref_count2(node_1373, ((struct sNode*)node_1373)->finalize, ((struct sNode*)node_1373)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1335=fun2_1371;
        }
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1355);
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1354;
        __dec_obj365=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1356);
        come_call_finalizer3(__dec_obj365,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1353;
        info->head=head_1357;
        info->sline=sline_1354;
        come_call_finalizer3(source_1346,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1355 = come_decrement_ref_count2(sname_1355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1356,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1358,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1359,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1360 = come_decrement_ref_count2(name_1360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1361,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1362,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1365,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1366,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1367,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1371,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1334;
    __dec_obj366=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1331);
    __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj367=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1332);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1333;
    __result417__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1460=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4562, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key)),get_hash_key_fun_1335,(char*)come_increment_ref_count(real_fun_name_1336))));
    last_code_1331 = come_decrement_ref_count2(last_code_1331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1332 = come_decrement_ref_count2(last_code2_1332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1336 = come_decrement_ref_count2(real_fun_name_1336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1337,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1460,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

