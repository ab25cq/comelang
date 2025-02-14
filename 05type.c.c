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
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
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
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static _Bool list$1charphp_contained(struct list$1charph* self, char* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self);
static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self);
static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charphp_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value249 = (void*)0;
struct sClass* klass_292;
void* __right_value250 = (void*)0;
struct sType* type_300;
void* __right_value251 = (void*)0;
struct sClass* generics_class_310;
void* __right_value252 = (void*)0;
_Bool generics_type_name_311;
void* __right_value253 = (void*)0;
_Bool mgenerics_type_name_317;
    klass_292=((struct sClass*)(__right_value249=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value249,sClass_finalize, 0, 1, 0, 0, (void*)0);
    type_300=((struct sType*)(__right_value250=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
    generics_class_310=((struct sClass*)(__right_value251=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer3(__right_value251,sClass_finalize, 0, 1, 0, 0, (void*)0);
    generics_type_name_311=list$1charphp_contained(info->generics_type_names,((char*)(__right_value252=__builtin_string(buf))));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_317=list$1charphp_contained(info->method_generics_type_names,((char*)(__right_value253=__builtin_string(buf))));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_300&&type_300->mTypedef)||(klass_292&&klass_292->mNumber)||(klass_292&&klass_292->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_310||generics_type_name_311||mgenerics_type_name_317||klass_292||type_300||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_293;
unsigned int hash_294;
unsigned int it_295;
struct sClass* __result220__;
struct sClass* __result221__;
struct sClass* __result222__;
struct sClass* __result223__;
default_value_293 = (void*)0;
    memset(&default_value_293,0,sizeof(struct sClass*));
    hash_294=string_get_hash_key(((char*)key))%self->size;
    it_295=hash_294;
    while((_Bool)1) {
        if(        self->item_existance[it_295]) {
            if(            charp_equals(self->keys[it_295],key)) {
                __result220__ = gComeFunResultObject = __result_obj__ = self->items[it_295];
                come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result220__;
            }
            it_295++;
            if(            it_295>=self->size) {
                it_295=0;
            }
            else if(            it_295==hash_294) {
                __result221__ = gComeFunResultObject = __result_obj__ = default_value_293;
                come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result221__;
            }
        }
        else {
            __result222__ = gComeFunResultObject = __result_obj__ = default_value_293;
            come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result222__;
        }
    }
    __result223__ = gComeFunResultObject = __result_obj__ = default_value_293;
    come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj31;
struct list$1voidph* __dec_obj32;
char* __dec_obj34;
char* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj31=self->mName;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj32=self->mFields;
            come_call_finalizer3(__dec_obj32,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj34=self->mDeclareSName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj35=self->mParentClassName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj36=self->mAttribute;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_296;
struct list_item$1voidph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            come_call_finalizer3(__dec_obj33,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_298;
struct list_item$1voidph* prev_it_299;
    it_298=self->head;
    while(it_298!=((void*)0)) {
        prev_it_299=it_298;
        it_298=it_298->next;
        come_call_finalizer3(prev_it_299,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_301;
unsigned int hash_302;
unsigned int it_303;
struct sType* __result224__;
struct sType* __result225__;
struct sType* __result226__;
struct sType* __result227__;
default_value_301 = (void*)0;
    memset(&default_value_301,0,sizeof(struct sType*));
    hash_302=string_get_hash_key(((char*)key))%self->size;
    it_303=hash_302;
    while((_Bool)1) {
        if(        self->item_existance[it_303]) {
            if(            charp_equals(self->keys[it_303],key)) {
                __result224__ = gComeFunResultObject = __result_obj__ = self->items[it_303];
                come_call_finalizer3(default_value_301,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result224__;
            }
            it_303++;
            if(            it_303>=self->size) {
                it_303=0;
            }
            else if(            it_303==hash_302) {
                __result225__ = gComeFunResultObject = __result_obj__ = default_value_301;
                come_call_finalizer3(default_value_301,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result225__;
            }
        }
        else {
            __result226__ = gComeFunResultObject = __result_obj__ = default_value_301;
            come_call_finalizer3(default_value_301,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result226__;
        }
    }
    __result227__ = gComeFunResultObject = __result_obj__ = default_value_301;
    come_call_finalizer3(default_value_301,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1voidph* __dec_obj42;
struct list$1sNodeph* __dec_obj43;
struct list$1voidph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct sType* __dec_obj47;
struct sNode* __dec_obj48;
struct sType* __dec_obj49;
struct sNode* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj38=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj40=self->mInterfaceName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj41=self->mGenericsName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj42=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj45,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj50=self->mSizeNum;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj51=self->mOriginalTypeName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj52=self->mAsmName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj53=self->mTupleName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj54=self->mAttribute;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_304;
struct list_item$1sNodeph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer3(prev_it_305,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_306;
struct list_item$1sNodeph* prev_it_307;
    it_306=self->head;
    while(it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        come_call_finalizer3(prev_it_307,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_308;
struct list_item$1charph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_314;
    for(    it_314=list$1charphp_begin(self);    !list$1charphp_end(self);    it_314=list$1charphp_next(self)    ){
        if(        charp_equals(it_314,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_312;
char* __result228__;
char* __result229__;
char* result_313;
char* __result230__;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_312,0,sizeof(char*));
        __result228__ = gComeFunResultObject = __result_obj__ = result_312;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    self->it=self->head;
    if(    self->it) {
        __result229__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    memset(&result_313,0,sizeof(char*));
    __result230__ = gComeFunResultObject = __result_obj__ = result_313;
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_315;
char* __result231__;
char* __result232__;
char* result_316;
char* __result233__;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_315,0,sizeof(char*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_315;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_316,0,sizeof(char*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_316;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

void skip_paren(struct sInfo* info){
int nest_318;
    nest_318=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_318++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_318--;
            if(            nest_318==0) {
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
char c_319;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_319=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_319==59||c_319==32||c_319==9||c_319==10||c_319==10||c_319==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* buf_320;
void* __right_value256 = (void*)0;
_Bool _if_conditional1;
void* __right_value257 = (void*)0;
char* __result234__;
void* __right_value258 = (void*)0;
char* result_321;
void* __right_value259 = (void*)0;
_Bool _if_conditional2;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __result239__;
char* __result240__;
    buf_320=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 96, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_320,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value256=buffer_to_string(buf_320))))==0)),    (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line);
        __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string("")));
        come_call_finalizer3(buf_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_321=(char*)come_increment_ref_count(buffer_to_string(buf_320));
    if(    (_if_conditional2=(info->module_params&&((char*)(__right_value259=map$2charphcharphp_operator_load_element(info->module_params,result_321))))),    (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional2) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string(((char*)(__right_value260=map$2charphcharphp_operator_load_element(info->module_params,result_321))))));
        come_call_finalizer3(buf_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_321 = come_decrement_ref_count2(result_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_321;
    come_call_finalizer3(buf_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_321 = come_decrement_ref_count2(result_321, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_322;
unsigned int hash_323;
unsigned int it_324;
char* __result235__;
char* __result236__;
char* __result237__;
char* __result238__;
default_value_322 = (void*)0;
    memset(&default_value_322,0,sizeof(char*));
    hash_323=string_get_hash_key(((char*)key))%self->size;
    it_324=hash_323;
    while((_Bool)1) {
        if(        self->item_existance[it_324]) {
            if(            charp_equals(self->keys[it_324],key)) {
                __result235__ = gComeFunResultObject = __result_obj__ = self->items[it_324];
                default_value_322 = come_decrement_ref_count2(default_value_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            it_324++;
            if(            it_324>=self->size) {
                it_324=0;
            }
            else if(            it_324==hash_323) {
                __result236__ = gComeFunResultObject = __result_obj__ = default_value_322;
                default_value_322 = come_decrement_ref_count2(default_value_322, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
        }
        else {
            __result237__ = gComeFunResultObject = __result_obj__ = default_value_322;
            default_value_322 = come_decrement_ref_count2(default_value_322, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = default_value_322;
    default_value_322 = come_decrement_ref_count2(default_value_322, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_325;
int sline_326;
char* buf_327;
void* __right_value262 = (void*)0;
char* __dec_obj55;
void* __right_value263 = (void*)0;
char* __dec_obj56;
char* __result241__;
buf_327 = (void*)0;
    p_325=info->p;
    sline_326=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj55=buf_327;
        buf_327=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj56=buf_327;
        buf_327=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_325;
    info->sline=sline_326;
    __result241__ = gComeFunResultObject = __result_obj__ = buf_327;
    buf_327 = come_decrement_ref_count2(buf_327, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
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
int line_328;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* fname_329;
void* __right_value266 = (void*)0;
char* __dec_obj57;
int nest_330;
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
                line_328=0;
                fname_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 195, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                while(xisdigit(*info->p)) {
                    line_328=line_328*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_329,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_328;
                __dec_obj57=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_329));
                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            nest_330=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_330++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_330--;
                    if(                    nest_330==0) {
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
struct list$1voidph* o2_saved_331;
struct sType* it_334;
_Bool __result248__;
    for(    o2_saved_331=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_334=((struct sType*)list$1voidphp_begin((o2_saved_331)));    !list$1voidphp_end((o2_saved_331));    it_334=((struct sType*)list$1voidphp_next((o2_saved_331)))    ){
        if(        is_contained_generics_class(it_334,info)) {
            __result248__ = (_Bool)1;
            come_call_finalizer3(o2_saved_331,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result248__;
        }
    }
    come_call_finalizer3(o2_saved_331,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_332;
void* __result242__;
void* __result243__;
void* result_333;
void* __result244__;
result_332 = (void*)0;
result_333 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_332,0,sizeof(void*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_332;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->it=self->head;
    if(    self->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_333,0,sizeof(void*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_333;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_335;
void* __result245__;
void* __result246__;
void* result_336;
void* __result247__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_335,0,sizeof(void*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_336,0,sizeof(void*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1voidph* param_types_340;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1charph* param_names_341;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1charph* param_default_parametors_342;
_Bool var_args_343;
void* __right_value277 = (void*)0;
void* __right_value312 = (void*)0;
struct sType* type__347;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
_Bool void_param_363;
char* p_364;
int sline_365;
void* __right_value315 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_366=0;
char* param_name_367=0;
_Bool err_368=0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result269__;
void* __right_value319 = (void*)0;
struct sType* param_type2_371;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* p_375;
_Bool no_comma_376;
void* __right_value325 = (void*)0;
struct sNode* node_377;
char* p2_378;
void* __right_value326 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result274__;
    param_types_340=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 324, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key))));
    param_names_341=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 325, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    param_default_parametors_342=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 326, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    var_args_343=(_Bool)0;
    if(    in_constructor_) {
        list$1charphp_add(param_names_341,(char*)come_increment_ref_count(xsprintf("self")));
        type__347=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        type__347->mHeap=(_Bool)1;
        list$1voidphp_add(param_types_340,(struct sType*)come_increment_ref_count(type__347));
        list$1charphp_add(param_default_parametors_342,((void*)0));
        come_call_finalizer3(type__347,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charphp_add(param_names_341,(char*)come_increment_ref_count(xsprintf("self")));
        list$1voidphp_add(param_types_340,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type)));
        list$1charphp_add(param_default_parametors_342,((void*)0));
    }
    expected_next_character(40,info);
    void_param_363=(_Bool)0;
    {
        p_364=info->p;
        sline_365=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_363=(_Bool)1;
            }
        }
        info->p=p_364;
        info->sline=sline_365;
    }
    if(    void_param_363) {
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
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value315=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_366=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_367=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_368=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value315,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_368) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result269__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)(__right_value318=tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool**)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "05type.c", 388, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool", tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone, tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key)),(struct list$1voidph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_367 = come_decrement_ref_count2(param_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_340,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value318,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result269__;
            }
            param_type2_371=(struct sType*)come_increment_ref_count(solve_generics(param_type_366,info->generics_type,info));
            param_type2_371->mFunctionParam=(_Bool)1;
            list$1voidphp_push_back(param_types_340,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_371)));
            list$1charphp_push_back(param_names_341,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_367)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_375=info->p;
                no_comma_376=info->no_comma;
                info->no_comma=(_Bool)1;
                node_377=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_376;
                p2_378=info->p;
                char buf_379[p2_378-p_375+1];
                memset(&buf_379, 0, sizeof(char)                *(p2_378-p_375+1)                );
                memcpy(buf_379,p_375,p2_378-p_375);
                buf_379[p2_378-p_375]=0;
                list$1charphp_push_back(param_default_parametors_342,(char*)come_increment_ref_count(__builtin_string(buf_379)));
                if(node_377) { node_377 = come_decrement_ref_count2(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charphp_push_back(param_default_parametors_342,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_343=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_367 = come_decrement_ref_count2(param_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_367 = come_decrement_ref_count2(param_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_367 = come_decrement_ref_count2(param_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_371,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value332=tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool**)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "05type.c", 448, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool", tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key)),(struct list$1voidph*)come_increment_ref_count(param_types_340),(struct list$1charph*)come_increment_ref_count(param_names_341),(struct list$1charph*)come_increment_ref_count(param_default_parametors_342),var_args_343)));
    come_call_finalizer3(param_types_340,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value332,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result249__;
void* __right_value267 = (void*)0;
struct list$1voidph* result_338;
struct list$1voidph* __result250__;
    if(    self==(void*)0) {
        __result249__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_338=(struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "list$1voidph_clone", 3, "struct list$1voidph", list$1voidph_finalize, list$1voidph_clone, list$1voidph_get_hash_key));
    if(    self!=((void*)0)) {
        result_338->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_338->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_338->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_338->it=self->it;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self){
unsigned int result_337;
    result_337=0;
    result_337+=int_get_hash_key(((int)self->head));
    result_337+=int_get_hash_key(((int)self->tail));
    result_337+=int_get_hash_key(((int)self->len));
    result_337+=int_get_hash_key(((int)self->it));
    return result_337;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_339;
    result_339=0;
    result_339+=int_get_hash_key(((int)self->head));
    result_339+=int_get_hash_key(((int)self->tail));
    result_339+=int_get_hash_key(((int)self->len));
    result_339+=int_get_hash_key(((int)self->it));
    return result_339;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_344;
char* __dec_obj58;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_345;
char* __dec_obj59;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_346;
char* __dec_obj60;
struct list$1charph* __result252__;
    if(    self->len==0) {
        litem_344=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj58=litem_344->item;
        litem_344->item=(char*)come_increment_ref_count(item);
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj59=litem_345->item;
        litem_345->item=(char*)come_increment_ref_count(item);
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj60=litem_346->item;
        litem_346->item=(char*)come_increment_ref_count(item);
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result253__;
void* __right_value278 = (void*)0;
struct sType* result_349;
void* __right_value279 = (void*)0;
struct sType* __dec_obj61;
void* __right_value280 = (void*)0;
struct sType* __dec_obj62;
void* __right_value281 = (void*)0;
struct sType* __dec_obj63;
void* __right_value282 = (void*)0;
char* __dec_obj64;
void* __right_value283 = (void*)0;
char* __dec_obj65;
void* __right_value290 = (void*)0;
struct list$1voidph* __dec_obj69;
void* __right_value298 = (void*)0;
struct list$1sNodeph* __dec_obj73;
void* __right_value299 = (void*)0;
struct list$1voidph* __dec_obj74;
void* __right_value303 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value304 = (void*)0;
struct sType* __dec_obj76;
void* __right_value305 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value306 = (void*)0;
struct sType* __dec_obj78;
void* __right_value307 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value308 = (void*)0;
char* __dec_obj80;
void* __right_value309 = (void*)0;
char* __dec_obj81;
void* __right_value310 = (void*)0;
char* __dec_obj82;
void* __right_value311 = (void*)0;
char* __dec_obj83;
struct sType* __result265__;
    if(    self==(void*)0) {
        __result253__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    result_349=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key));
    if(    self!=((void*)0)) {
        result_349->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj61=result_349->mNoSolvedGenericsType;
        result_349->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj62=result_349->mOriginalLoadVarType;
        result_349->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj63=result_349->mAnyOriginalType;
        result_349->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj64=result_349->mInterfaceName;
        result_349->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj65=result_349->mGenericsName;
        result_349->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj69=result_349->mGenericsTypes;
        result_349->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj69,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj73=result_349->mArrayNum;
        result_349->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj73,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj74=result_349->mParamTypes;
        result_349->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj74,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_349->mParamNames;
        result_349->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_349->mResultType;
        result_349->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_349->mAlignas;
        result_349->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_349->mChannelType;
        result_349->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_349->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_349->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_349->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_349->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_349->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_349->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_349->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_349->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_349->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_349->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_349->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_349->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_349->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_349->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_349->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_349->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_349->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_349->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_349->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_349->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_349->mSizeNum;
        result_349->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_349->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_349->mOriginalTypeName;
        result_349->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_349->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_349->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_349->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_349->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_349->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_349->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_349->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_349->mAsmName;
        result_349->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_349->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_349->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_349->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_349->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_349->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_349->mTupleName;
        result_349->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj83=result_349->mAttribute;
        result_349->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_349->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_349->mGenerate=self->mGenerate;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_349;
    come_call_finalizer3(result_349,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_348;
    result_348=0;
    result_348+=int_get_hash_key(((int)self->mClass));
    result_348+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_348+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_348+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_348+=int_get_hash_key(((int)self->mAnyClass));
    result_348+=int_get_hash_key(((int)self->mInterfaceName));
    result_348+=int_get_hash_key(((int)self->mGenericsName));
    result_348+=int_get_hash_key(((int)self->mGenericsTypes));
    result_348+=int_get_hash_key(((int)self->mArrayNum));
    result_348+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_348+=int_get_hash_key(((int)self->mParamTypes));
    result_348+=int_get_hash_key(((int)self->mParamNames));
    result_348+=int_get_hash_key(((int)self->mResultType));
    result_348+=int_get_hash_key(((int)self->mVarArgs));
    result_348+=int_get_hash_key(((int)self->mAlignas));
    result_348+=int_get_hash_key(((int)self->mChannelType));
    result_348+=int_get_hash_key(((int)self->mUnsigned));
    result_348+=int_get_hash_key(((int)self->mShort));
    result_348+=int_get_hash_key(((int)self->mLong));
    result_348+=int_get_hash_key(((int)self->mLongLong));
    result_348+=int_get_hash_key(((int)self->mConstant));
    result_348+=int_get_hash_key(((int)self->mAtomic));
    result_348+=int_get_hash_key(((int)self->mRegister));
    result_348+=int_get_hash_key(((int)self->mVolatile));
    result_348+=int_get_hash_key(((int)self->mStatic));
    result_348+=int_get_hash_key(((int)self->mUniq));
    result_348+=int_get_hash_key(((int)self->mRecord));
    result_348+=int_get_hash_key(((int)self->mExtern));
    result_348+=int_get_hash_key(((int)self->mRestrict));
    result_348+=int_get_hash_key(((int)self->mImmutable));
    result_348+=int_get_hash_key(((int)self->mHeap));
    result_348+=int_get_hash_key(((int)self->mChannel));
    result_348+=int_get_hash_key(((int)self->mNoHeap));
    result_348+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_348+=int_get_hash_key(((int)self->mException));
    result_348+=int_get_hash_key(((int)self->mPointerNum));
    result_348+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_348+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_348+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_348+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_348+=int_get_hash_key(((int)self->mSizeNum));
    result_348+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_348+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_348+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_348+=int_get_hash_key(((int)self->mFunctionParam));
    result_348+=int_get_hash_key(((int)self->mAllocaValue));
    result_348+=int_get_hash_key(((int)self->mGenericsStruct));
    result_348+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_348+=int_get_hash_key(((int)self->mInline));
    result_348+=int_get_hash_key(((int)self->mNullValue));
    result_348+=int_get_hash_key(((int)self->mGuardValue));
    result_348+=int_get_hash_key(((int)self->mAsmName));
    result_348+=int_get_hash_key(((int)self->mArrayPointerType));
    result_348+=int_get_hash_key(((int)self->mLambdaArray));
    result_348+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_348+=int_get_hash_key(((int)self->mTypedef));
    result_348+=int_get_hash_key(((int)self->mMultipleTypes));
    result_348+=int_get_hash_key(((int)self->mOriginIsArray));
    result_348+=int_get_hash_key(((int)self->mTupleName));
    result_348+=int_get_hash_key(((int)self->mAttribute));
    result_348+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_348+=int_get_hash_key(((int)self->mGenerate));
    return result_348;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result254__;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1voidph* result_350;
struct list_item$1voidph* it_351;
void* __right_value289 = (void*)0;
struct list$1voidph* __result256__;
    if(    self==((void*)0)) {
        __result254__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_350=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    it_351=self->head;
    while(it_351!=((void*)0)) {
        list$1voidphp_add(result_350,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_351->item)));
        it_351=it_351->next;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_350;
    come_call_finalizer3(result_350,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
struct list_item$1voidph* litem_352;
void* __dec_obj66;
void* __right_value287 = (void*)0;
struct list_item$1voidph* litem_353;
void* __dec_obj67;
void* __right_value288 = (void*)0;
struct list_item$1voidph* litem_354;
void* __dec_obj68;
struct list$1voidph* __result255__;
    if(    self->len==0) {
        litem_352=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value286=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_352->prev=((void*)0);
        litem_352->next=((void*)0);
        __dec_obj66=litem_352->item;
        litem_352->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_352;
        self->head=litem_352;
    }
    else if(    self->len==1) {
        litem_353=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value287=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_353->prev=self->head;
        litem_353->next=((void*)0);
        __dec_obj67=litem_353->item;
        litem_353->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_353;
        self->head->next=litem_353;
    }
    else {
        litem_354=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value288=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_354->prev=self->tail;
        litem_354->next=((void*)0);
        __dec_obj68=litem_354->item;
        litem_354->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_354;
        self->tail=litem_354;
    }
    self->len++;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result257__;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1sNodeph* result_355;
struct list_item$1sNodeph* it_356;
void* __right_value297 = (void*)0;
struct list$1sNodeph* __result262__;
    if(    self==((void*)0)) {
        __result257__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_355=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    it_356=self->head;
    while(it_356!=((void*)0)) {
        list$1sNodephp_add(result_355,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_356->item)));
        it_356=it_356->next;
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_355;
    come_call_finalizer3(result_355,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result258__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
struct list_item$1sNodeph* litem_357;
struct sNode* __dec_obj70;
void* __right_value294 = (void*)0;
struct list_item$1sNodeph* litem_358;
struct sNode* __dec_obj71;
void* __right_value295 = (void*)0;
struct list_item$1sNodeph* litem_359;
struct sNode* __dec_obj72;
struct list$1sNodeph* __result259__;
    if(    self->len==0) {
        litem_357=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value293=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_357->prev=((void*)0);
        litem_357->next=((void*)0);
        __dec_obj70=litem_357->item;
        litem_357->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_357;
        self->head=litem_357;
    }
    else if(    self->len==1) {
        litem_358=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->head;
        litem_358->next=((void*)0);
        __dec_obj71=litem_358->item;
        litem_358->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_358;
        self->head->next=litem_358;
    }
    else {
        litem_359=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_359->prev=self->tail;
        litem_359->next=((void*)0);
        __dec_obj72=litem_359->item;
        litem_359->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_359;
        self->tail=litem_359;
    }
    self->len++;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result260__;
void* __right_value296 = (void*)0;
struct sNode* result_360;
struct sNode* __result261__;
    if(    self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_360=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_360->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_360->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_360->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_360->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_360->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_360->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_360->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_360->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_360->kind=self->kind;
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_360;
    come_call_finalizer2((void*)0, result_360, result_360 ? ((struct sNode*)result_360)->finalize:(void*)0, result_360 ? ((struct sNode*)result_360)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result263__;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1charph* result_361;
struct list_item$1charph* it_362;
void* __right_value302 = (void*)0;
struct list$1charph* __result264__;
    if(    self==((void*)0)) {
        __result263__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_361=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    it_362=self->head;
    while(it_362!=((void*)0)) {
        list$1charphp_add(result_361,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_362->item)));
        it_362=it_362->next;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_361;
    come_call_finalizer3(result_361,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj85=self->v2;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result266__;
void* __right_value316 = (void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* result_370;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result267__;
    if(    self==(void*)0) {
        __result266__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_370=(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone", 3, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool", tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone, tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key));
    if(    self!=((void*)0)) {
        result_370->v1=self->v1;
    }
    if(    self!=((void*)0)) {
        result_370->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_370->v3=self->v3;
    }
    if(    self!=((void*)0)) {
        result_370->v4=self->v4;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_370;
    come_call_finalizer3(result_370,tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
unsigned int result_369;
    result_369=0;
    result_369+=int_get_hash_key(((int)self->v1));
    result_369+=int_get_hash_key(((int)self->v2));
    result_369+=int_get_hash_key(((int)self->v3));
    result_369+=int_get_hash_key(((int)self->v4));
    return result_369;
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result268__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct list_item$1voidph* litem_372;
void* __dec_obj86;
void* __right_value321 = (void*)0;
struct list_item$1voidph* litem_373;
void* __dec_obj87;
void* __right_value322 = (void*)0;
struct list_item$1voidph* litem_374;
void* __dec_obj88;
struct list$1voidph* __result270__;
    if(    self->len==0) {
        litem_372=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value320=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj86=litem_372->item;
        litem_372->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value321=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj87=litem_373->item;
        litem_373->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value322=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj88=litem_374->item;
        litem_374->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj89;
struct list$1charph* __dec_obj90;
struct list$1charph* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj89=self->v1;
            come_call_finalizer3(__dec_obj89,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj90=self->v2;
            come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj91=self->v3;
            come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result271__;
void* __right_value327 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* result_381;
void* __right_value328 = (void*)0;
struct list$1voidph* __dec_obj92;
void* __right_value329 = (void*)0;
struct list$1charph* __dec_obj93;
void* __right_value330 = (void*)0;
struct list$1charph* __dec_obj94;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result272__;
    if(    self==(void*)0) {
        __result271__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_381=(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone", 3, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool", tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj92=result_381->v1;
        result_381->v1=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->v1));
        come_call_finalizer3(__dec_obj92,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj93=result_381->v2;
        result_381->v2=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v2));
        come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj94=result_381->v3;
        result_381->v3=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v3));
        come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->v4=self->v4;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_381;
    come_call_finalizer3(result_381,tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
unsigned int result_380;
    result_380=0;
    result_380+=int_get_hash_key(((int)self->v1));
    result_380+=int_get_hash_key(((int)self->v2));
    result_380+=int_get_hash_key(((int)self->v3));
    result_380+=int_get_hash_key(((int)self->v4));
    return result_380;
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1voidph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result273__;
    __dec_obj95=self->v1;
    self->v1=(struct list$1voidph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj95,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj98;
struct list$1charph* __dec_obj99;
struct list$1charph* __dec_obj100;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj98=self->v1;
            come_call_finalizer3(__dec_obj98,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj100=self->v3;
            come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value333 = (void*)0;
struct sType* right_type2_382;
struct sType* left_no_solved_generics_type_383;
struct sType* right_no_solved_generics_type_384;
struct sClass* left_class_385;
struct sClass* right_class_386;
_Bool parent_class_387;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
char* left_type_name_388;
void* __right_value336 = (void*)0;
char* __dec_obj101;
void* __right_value337 = (void*)0;
struct sType* __dec_obj102;
void* __right_value338 = (void*)0;
struct sType* __dec_obj103;
void* __right_value339 = (void*)0;
char* left_type_name_389;
void* __right_value340 = (void*)0;
char* __dec_obj104;
void* __right_value341 = (void*)0;
struct sType* __dec_obj105;
void* __right_value342 = (void*)0;
struct sType* __dec_obj106;
_Bool __result275__;
int i_390;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* left_type_name_394;
void* __right_value346 = (void*)0;
char* __dec_obj107;
void* __right_value347 = (void*)0;
struct sType* __dec_obj108;
void* __right_value348 = (void*)0;
struct sType* __dec_obj109;
void* __right_value349 = (void*)0;
char* left_type_name_395;
void* __right_value350 = (void*)0;
char* __dec_obj110;
void* __right_value351 = (void*)0;
struct sType* __dec_obj111;
void* __right_value352 = (void*)0;
struct sType* __dec_obj112;
void* __right_value353 = (void*)0;
char* __dec_obj113;
void* __right_value354 = (void*)0;
struct sType* __dec_obj114;
void* __right_value355 = (void*)0;
struct sType* __dec_obj115;
void* __right_value356 = (void*)0;
char* left_type_name_396;
void* __right_value357 = (void*)0;
char* __dec_obj116;
void* __right_value358 = (void*)0;
struct sType* __dec_obj117;
void* __right_value359 = (void*)0;
struct sType* __dec_obj118;
void* __right_value360 = (void*)0;
char* left_type_name_397;
void* __right_value361 = (void*)0;
char* __dec_obj119;
void* __right_value362 = (void*)0;
struct sType* __dec_obj120;
void* __right_value363 = (void*)0;
struct sType* __dec_obj121;
_Bool __result278__;
_Bool __result279__;
_Bool __result280__;
_Bool __result281__;
_Bool __result282__;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct buffer* buf2_398;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
char* __dec_obj122;
void* __right_value372 = (void*)0;
struct sType* __dec_obj123;
void* __right_value373 = (void*)0;
struct sType* __dec_obj124;
_Bool __result283__;
_Bool __result284__;
_Bool __result285__;
_Bool __result286__;
void* __right_value374 = (void*)0;
char* tmp_399;
void* __right_value375 = (void*)0;
char* __dec_obj125;
void* __right_value376 = (void*)0;
struct sType* __dec_obj126;
void* __right_value377 = (void*)0;
struct sType* __dec_obj127;
_Bool __result287__;
_Bool __result288__;
void* __right_value378 = (void*)0;
char* tmp_400;
void* __right_value379 = (void*)0;
char* __dec_obj128;
void* __right_value380 = (void*)0;
struct sType* __dec_obj129;
_Bool __result289__;
int i_401;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
_Bool __result290__;
    right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_383=((void*)0);
    if(    left_type->mNoSolvedGenericsType) {
        left_no_solved_generics_type_383=left_type->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_384=((void*)0);
    if(    right_type2_382->mNoSolvedGenericsType) {
        right_no_solved_generics_type_384=right_type2_382->mNoSolvedGenericsType;
    }
    left_class_385=left_type->mClass;
    right_class_386=right_type2_382->mClass;
    parent_class_387=(_Bool)0;
    if(    string_operator_not_equals(left_class_385->mName,right_class_386->mName)) {
        while(left_class_385&&right_class_386) {
            if(            string_operator_equals(left_class_385->mName,right_class_386->mName)) {
                parent_class_387=(_Bool)1;
            }
            if(            right_class_386->mParentClassName) {
                right_class_386=((struct sClass*)(__right_value334=map$2charphsClassphp_operator_load_element(info->classes,right_class_386->mParentClassName)));
                come_call_finalizer3(__right_value334,sClass_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_386=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
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
                    printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_383&&right_no_solved_generics_type_384) {
        if(        strlen(left_type->mClass->mName)>=strlen("tuple")&&memcmp(left_type->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                err_msg(info,"tuple err");
                puts(msg);
                printf("left type is tuple, right type is none tuple\n");
                exit(2);
            }
        }
        else if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes),left_no_solved_generics_type_383->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_384->mGenericsTypes),right_no_solved_generics_type_384->mClass->mName,right_type2_382->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_388=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj101=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_388,come_value->c_value));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj102=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj103=right_type2_382;
                right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_388 = come_decrement_ref_count2(left_type_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes),left_no_solved_generics_type_383->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_384->mGenericsTypes),right_no_solved_generics_type_384->mClass->mName,right_type2_382->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_389=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj104=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_389,come_value->c_value));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj105=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj106=right_type2_382;
                right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_389 = come_decrement_ref_count2(left_type_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_382->mClass->mName)&&left_type->mPointerNum==right_type2_382->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_382->mClass->mName)&&(left_type->mPointerNum!=right_type2_382->mPointerNum||left_type->mHeap!=right_type2_382->mHeap)) {
            err_msg(info,"poinetr num err");
            puts(msg);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes),left_no_solved_generics_type_383->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_384->mGenericsTypes),right_no_solved_generics_type_384->mClass->mName,right_type2_382->mClass->mName);
            exit(2);
        }
        else if(        list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_383->mClass->mName,"void")&&left_no_solved_generics_type_383->mPointerNum>0&&right_no_solved_generics_type_384->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_384->mClass->mName,"void")&&right_no_solved_generics_type_384->mPointerNum>0&&left_no_solved_generics_type_383->mPointerNum>0)) {
            }
            else {
                if(                list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes)!=list$1voidphp_length(right_no_solved_generics_type_384->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        puts(msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes),left_no_solved_generics_type_383->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_384->mGenericsTypes),right_no_solved_generics_type_384->mClass->mName,right_type2_382->mClass->mName);
                        exit(2);
                    }
                    __result275__ = (_Bool)0;
                    come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result275__;
                }
                for(                i_390=0;                i_390<list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes);                i_390++                ){
                    check_assign_type(msg,((struct sType*)((void*)(__right_value343=list$1voidphp_operator_load_element(left_no_solved_generics_type_383->mGenericsTypes,i_390)))),((struct sType*)((void*)(__right_value344=list$1voidphp_operator_load_element(right_no_solved_generics_type_384->mGenericsTypes,i_390)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    come_call_finalizer3(__right_value343,(void*)0, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value344,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_383,right_no_solved_generics_type_384,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    strlen(left_type->mClass->mName)>=strlen("tuple")&&memcmp(left_type->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            err_msg(info,"tuple err");
            puts(msg);
            printf("left type is tuple, right type is none tuple\n");
            exit(2);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes),left_no_solved_generics_type_383->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_384->mGenericsTypes),right_no_solved_generics_type_384->mClass->mName,right_type2_382->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_394=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj107=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_394,come_value->c_value));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj108=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj109=right_type2_382;
            right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_394 = come_decrement_ref_count2(left_type_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_383->mGenericsTypes),left_no_solved_generics_type_383->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_384->mGenericsTypes),right_no_solved_generics_type_384->mClass->mName,right_type2_382->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_395=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj110=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_395,come_value->c_value));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj111=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj112=right_type2_382;
            right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_395 = come_decrement_ref_count2(left_type_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_382->mHeap&&left_type->mPointerNum>0&&right_type2_382->mPointerNum>0&&string_operator_not_equals(right_type2_382->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum,right_type2_382->mHeap);
        exit(2);
    }
    else if(    parent_class_387&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj113=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj115=right_type2_382;
        right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_396=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj116=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_396,come_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj117=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj118=right_type2_382;
            right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_396 = come_decrement_ref_count2(left_type_name_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_397=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj119=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_397,come_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj121=right_type2_382;
            right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_397 = come_decrement_ref_count2(left_type_name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_382->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_382->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_382->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_382->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                        exit(2);
                    }
                    __result278__ = (_Bool)0;
                    come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result278__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                    exit(2);
                }
                __result279__ = (_Bool)0;
                come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result279__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_382->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result280__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result280__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_382->mPointerNum==0&&string_operator_equals(right_type2_382->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_382->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result281__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result281__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_382->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_382->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_382->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_382->mClass->mName,"void")&&right_type2_382->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result282__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result282__;
        }
        else {
            buf2_398=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 806, "struct buffer*", (void*)0, (void*)0, (void*)0))));
            buffer_append_str(buf2_398,((char*)(__right_value370=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value366=string_to_string(come_value->c_value))),((char*)(__right_value367=string_to_string(info->sname))),((char*)(__right_value368=int_to_string(info->sline))),((char*)(__right_value369=int_to_string(gComeDebugStackFrameID++)))))));
            __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj122=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_398));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj123=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj124=right_type2_382;
            right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_398,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_382->mClass->mName,"char")&&right_type2_382->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_382->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_382->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_382->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result283__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result283__;
        }
        else if(        string_operator_equals(right_type2_382->mClass->mName,"void")&&right_type2_382->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_382->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result284__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result284__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_382->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_382->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result285__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result285__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_382->mClass->mName,"void")&&right_type2_382->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_382->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_382->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_382->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_382->mClass->mName,"void")&&right_type2_382->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_382->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result286__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result286__;
        }
        else if(        right_type2_382->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_399=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj125=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_399));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj126=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj127=right_type2_382;
                right_type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                tmp_399 = come_decrement_ref_count2(tmp_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_382->mPointerNum>0||(right_type2_382->mPointerNum==0&&right_type2_382->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_382->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_382->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_382->mClass->mName)) {
                if(                print_err_msg) {
                    puts(msg);
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                    exit(2);
                }
                __result287__ = (_Bool)0;
                come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result287__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_382->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
            }
            else if(            list$1sNodephp_length(right_type2_382->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodephp_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum,list$1sNodephp_length(right_type2_382->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_382->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_382->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_382->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_382->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_382->mPointerNum==0&&string_operator_equals(right_type2_382->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            __result288__ = (_Bool)0;
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result288__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_382->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_382->mPointerNum==0) {
            tmp_400=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj128=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_400));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result289__ = (_Bool)1;
            tmp_400 = come_decrement_ref_count2(tmp_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result289__;
            tmp_400 = come_decrement_ref_count2(tmp_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1voidphp_length(left_type->mGenericsTypes)>0) {
            if(            list$1voidphp_length(left_type->mGenericsTypes)!=list$1voidphp_length(right_type2_382->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                puts(msg);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_382->mClass->mName,right_type2_382->mPointerNum);
                exit(2);
            }
            for(            i_401=0;            i_401<list$1voidphp_length(left_type->mGenericsTypes);            i_401++            ){
                check_assign_type(msg,((struct sType*)((void*)(__right_value381=list$1voidphp_operator_load_element(left_type->mGenericsTypes,i_401)))),((struct sType*)((void*)(__right_value382=list$1voidphp_operator_load_element(right_type2_382->mGenericsTypes,i_401)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                come_call_finalizer3(__right_value381,(void*)0, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value382,(void*)0, 0, 1, 0, 0, (void*)0);
            }
        }
    }
    __result290__ = (_Bool)1;
    come_call_finalizer3(right_type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_391;
int i_392;
void* __result276__;
void* default_value_393;
void* __result277__;
default_value_393 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_391=self->head;
    i_392=0;
    while(it_391!=((void*)0)) {
        if(        position==i_392) {
            __result276__ = gComeFunResultObject = __result_obj__ = it_391->item;
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
        it_391=it_391->next;
        i_392++;
    }
    memset(&default_value_393,0,sizeof(void*));
    __result277__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_393);
    come_call_finalizer3(default_value_393, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
struct sType* result_type_402;
char* var_name_403;
char* p_404;
int sline_405;
void* __right_value384 = (void*)0;
char* word_406;
_Bool between_brace_407;
char* p_408;
int sline_409;
void* __right_value385 = (void*)0;
char* word_410;
void* __right_value386 = (void*)0;
char* __dec_obj130;
void* __right_value387 = (void*)0;
char* __dec_obj131;
_Bool no_comma_412;
void* __right_value388 = (void*)0;
struct sNode* node_413;
struct sNode* __dec_obj132;
char* p_414;
int sline_415;
void* __right_value389 = (void*)0;
char* word_416;
void* __right_value390 = (void*)0;
struct sNode* node_417;
void* __right_value394 = (void*)0;
char* attribute_421;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* __dec_obj136;
char* __dec_obj137;
void* __right_value397 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct tuple2$2sTypephcharph* __result295__;
    result_type_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_402->mPointerNum=result_type_402->mTypedefOriginalPointerNum;
    }
    var_name_403=((void*)0);
    {
        p_404=info->p;
        sline_405=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_406=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_406,"const")||string_operator_equals(word_406,"__restrict")||string_operator_equals(word_406,"restrict")||string_operator_equals(word_406,"__user")||string_operator_equals(word_406,"volatile")||string_operator_equals(word_406,"_Nonnull")||string_operator_equals(word_406,"_Nullable")||string_operator_equals(word_406,"_Null_unspecified")||string_operator_equals(word_406,"__user")||string_operator_equals(word_406,"_Addr")) {
            }
            else {
                info->p=p_404;
                info->sline=sline_405;
            }
            word_406 = come_decrement_ref_count2(word_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_404;
            info->sline=sline_405;
        }
    }
    between_brace_407=(_Bool)0;
    {
        p_408=info->p;
        sline_409=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_410=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_410,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_407=(_Bool)1;
                    }
                }
                word_410 = come_decrement_ref_count2(word_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_408;
        info->sline=sline_409;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_402->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_407&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj130=var_name_403;
        var_name_403=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_411=0;
        num_anonymous_var_name_411++;
        __dec_obj131=var_name_403;
        var_name_403=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_411));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_407&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_412=info->no_comma;
        info->no_comma=(_Bool)1;
        node_413=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_412;
        __dec_obj132=result_type_402->mSizeNum;
        result_type_402->mSizeNum=(struct sNode*)come_increment_ref_count(node_413);
        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_413) { node_413 = come_decrement_ref_count2(node_413, ((struct sNode*)node_413)->finalize, ((struct sNode*)node_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_414=info->p;
            sline_415=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_416=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_416,"const")||string_operator_equals(word_416,"__restrict")||string_operator_equals(word_416,"restrict")||string_operator_equals(word_416,"__user")||string_operator_equals(word_416,"volatile")||string_operator_equals(word_416,"_Nonnull")||string_operator_equals(word_416,"_Nullable")||string_operator_equals(word_416,"_Null_unspecified")||string_operator_equals(word_416,"__user")||string_operator_equals(word_416,"_Addr")) {
                }
                else {
                    info->p=p_414;
                    info->sline=sline_415;
                }
                word_416 = come_decrement_ref_count2(word_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_414;
                info->sline=sline_415;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_402->mArrayPointerType=(_Bool)1;
            result_type_402->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_417=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(result_type_402->mArrayNum,(struct sNode*)come_increment_ref_count(node_417));
        parse_sharp_v5(info);
        result_type_402->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_417) { node_417 = come_decrement_ref_count2(node_417, ((struct sNode*)node_417)->finalize, ((struct sNode*)node_417)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    attribute_421=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_421,"")) {
        if(        result_type_402->mAttribute) {
            __dec_obj136=result_type_402->mAttribute;
            result_type_402->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_402->mAttribute,((char*)(__right_value395=charp_operator_add(" ",attribute_421)))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj137=result_type_402->mAttribute;
            result_type_402->mAttribute=(char*)come_increment_ref_count(attribute_421);
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value397=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value397,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result295__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value402=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1130, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key)),(struct sType*)come_increment_ref_count(result_type_402),(char*)come_increment_ref_count(var_name_403))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_402,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_403 = come_decrement_ref_count2(var_name_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute_421 = come_decrement_ref_count2(attribute_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value402,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
struct list_item$1sNodeph* litem_418;
struct sNode* __dec_obj133;
void* __right_value392 = (void*)0;
struct list_item$1sNodeph* litem_419;
struct sNode* __dec_obj134;
void* __right_value393 = (void*)0;
struct list_item$1sNodeph* litem_420;
struct sNode* __dec_obj135;
struct list$1sNodeph* __result291__;
    if(    self->len==0) {
        litem_418=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value391=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_418->prev=((void*)0);
        litem_418->next=((void*)0);
        __dec_obj133=litem_418->item;
        litem_418->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_418;
        self->head=litem_418;
    }
    else if(    self->len==1) {
        litem_419=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value392=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_419->prev=self->head;
        litem_419->next=((void*)0);
        __dec_obj134=litem_419->item;
        litem_419->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_419;
        self->head->next=litem_419;
    }
    else {
        litem_420=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value393=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_420->prev=self->tail;
        litem_420->next=((void*)0);
        __dec_obj135=litem_420->item;
        litem_420->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_420;
        self->tail=litem_420;
    }
    self->len++;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj138;
char* __dec_obj139;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj138=self->v1;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj139=self->v2;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj140=self->v1;
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj141=self->v2;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result292__;
void* __right_value398 = (void*)0;
struct tuple2$2sTypephcharph* result_423;
void* __right_value399 = (void*)0;
struct sType* __dec_obj142;
void* __right_value400 = (void*)0;
char* __dec_obj143;
struct tuple2$2sTypephcharph* __result293__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_423=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj142=result_423->v1;
        result_423->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj143=result_423->v2;
        result_423->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_423;
    come_call_finalizer3(result_423,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self){
unsigned int result_422;
    result_422=0;
    result_422+=int_get_hash_key(((int)self->v1));
    result_422+=int_get_hash_key(((int)self->v2));
    return result_422;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj144;
char* __dec_obj145;
struct tuple2$2sTypephcharph* __result294__;
    __dec_obj144=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj145=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj146;
char* __dec_obj147;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj146=self->v1;
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj147=self->v2;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_424;
int sline_425;
void* __right_value403 = (void*)0;
char* word_426;
int nest_427;
    p_424=info->p;
    sline_425=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_426=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_426,"__attribute")||string_operator_equals(word_426,"__attribute__"))&&*info->p==40) {
            nest_427=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_427++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_427--;
                    if(                    nest_427==0) {
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
        else if(        string_operator_equals(word_426,"const")||string_operator_equals(word_426,"__restrict")||string_operator_equals(word_426,"restrict")||string_operator_equals(word_426,"__user")||string_operator_equals(word_426,"volatile")||string_operator_equals(word_426,"_Nonnull")||string_operator_equals(word_426,"_Nullable")||string_operator_equals(word_426,"__nonnull")||string_operator_equals(word_426,"_Null_unspecified")||string_operator_equals(word_426,"__user")||string_operator_equals(word_426,"_Addr")||string_operator_equals(word_426,"__noreturn")||string_operator_equals(word_426,"_noreturn")||string_operator_equals(word_426,"_Noreturn")) {
        }
        else {
            info->p=p_424;
            info->sline=sline_425;
        }
        word_426 = come_decrement_ref_count2(word_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_424;
        info->sline=sline_425;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_428;
void* __right_value404 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_429=0;
char* name_430=0;
_Bool err_431=0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct tuple3$3sTypephcharphbool* __result299__;
    no_output_err_428=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value404=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_429=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_430=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_431=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value404,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_428;
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value409=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1187, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count(type_429),(char*)come_increment_ref_count(name_430),err_431)));
    come_call_finalizer3(type_429,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_430 = come_decrement_ref_count2(name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value409,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj148;
char* __dec_obj149;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj148=self->v1;
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj149=self->v2;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphbool* __result296__;
void* __right_value405 = (void*)0;
struct tuple3$3sTypephcharphbool* result_433;
void* __right_value406 = (void*)0;
struct sType* __dec_obj150;
void* __right_value407 = (void*)0;
char* __dec_obj151;
struct tuple3$3sTypephcharphbool* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_433=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "tuple3$3sTypephcharphbool_clone", 3, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj150=result_433->v1;
        result_433->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj151=result_433->v2;
        result_433->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_433->v3=self->v3;
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_433;
    come_call_finalizer3(result_433,tuple3$3sTypephcharphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self){
unsigned int result_432;
    result_432=0;
    result_432+=int_get_hash_key(((int)self->v1));
    result_432+=int_get_hash_key(((int)self->v2));
    result_432+=int_get_hash_key(((int)self->v3));
    return result_432;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj152;
char* __dec_obj153;
struct tuple3$3sTypephcharphbool* __result298__;
    __dec_obj152=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj153=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_434;
int head_sline_435;
void* __right_value410 = (void*)0;
char* type_name_436;
_Bool record__437;
_Bool exception__438;
_Bool constant_439;
_Bool static__440;
_Bool volatile__441;
_Bool register__442;
_Bool unsigned__443;
_Bool long__444;
_Bool long_long_445;
_Bool short__446;
_Bool restrict__447;
_Bool struct__448;
_Bool union__449;
_Bool enum__450;
_Bool no_heap_451;
_Bool extern__452;
_Bool inline__453;
_Bool uniq__454;
_Bool tuple__455;
_Bool generate__456;
struct sNode* alignas__457;
_Bool anonymous_type_458;
_Bool anonymous_name_459;
_Bool atomic__460;
_Bool object_interface_461;
void* __right_value411 = (void*)0;
char* __dec_obj154;
void* __right_value412 = (void*)0;
char* __dec_obj155;
void* __right_value413 = (void*)0;
char* __dec_obj156;
int brace_num_462;
void* __right_value414 = (void*)0;
char* __dec_obj157;
int brace_num_463;
void* __right_value415 = (void*)0;
char* __dec_obj158;
void* __right_value416 = (void*)0;
char* __dec_obj159;
void* __right_value417 = (void*)0;
char* __dec_obj160;
void* __right_value418 = (void*)0;
char* __dec_obj161;
void* __right_value419 = (void*)0;
char* __dec_obj162;
void* __right_value420 = (void*)0;
struct sNode* exp_464;
struct sNode* __dec_obj163;
void* __right_value421 = (void*)0;
char* __dec_obj164;
void* __right_value422 = (void*)0;
char* __dec_obj165;
void* __right_value423 = (void*)0;
char* __dec_obj166;
void* __right_value424 = (void*)0;
char* __dec_obj167;
void* __right_value425 = (void*)0;
char* __dec_obj168;
void* __right_value426 = (void*)0;
char* __dec_obj169;
void* __right_value427 = (void*)0;
char* __dec_obj170;
void* __right_value428 = (void*)0;
char* __dec_obj171;
void* __right_value429 = (void*)0;
char* __dec_obj172;
void* __right_value430 = (void*)0;
char* __dec_obj173;
char* p_465;
int sline_466;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
char* __dec_obj174;
void* __right_value433 = (void*)0;
char* __dec_obj175;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
char* __dec_obj176;
char* p_467;
int sline_468;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct tuple3$3sTypephcharphbool* __result300__;
char* p_469;
int sline_470;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct tuple3$3sTypephcharphbool* __result301__;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sNode* node_471;
_Bool Value_472;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct tuple3$3sTypephcharphbool* __result302__;
char* p_473;
int sline_474;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
char* __dec_obj177;
void* __right_value449 = (void*)0;
char* __dec_obj178;
void* __right_value450 = (void*)0;
char* __dec_obj179;
char* p_475;
int sline_476;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct tuple3$3sTypephcharphbool* __result303__;
void* __right_value454 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_477=0;
char* name_478=0;
_Bool err_479=0;
char* p_480;
int sline_481;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct tuple3$3sTypephcharphbool* __result304__;
void* __right_value459 = (void*)0;
char* __dec_obj180;
void* __right_value460 = (void*)0;
char* __dec_obj181;
void* __right_value461 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_482=0;
char* name_483=0;
_Bool err_484=0;
char* p_485;
int sline_486;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct tuple3$3sTypephcharphbool* __result305__;
char* p_487;
int sline_488;
void* __right_value465 = (void*)0;
char* __dec_obj182;
void* __right_value466 = (void*)0;
char* __dec_obj183;
void* __right_value467 = (void*)0;
char* __dec_obj184;
void* __right_value468 = (void*)0;
char* __dec_obj185;
void* __right_value469 = (void*)0;
char* __dec_obj186;
void* __right_value470 = (void*)0;
char* __dec_obj187;
void* __right_value471 = (void*)0;
char* __dec_obj188;
char* p_489;
int sline_490;
void* __right_value472 = (void*)0;
char* __dec_obj189;
char* p_491;
int sline_492;
void* __right_value473 = (void*)0;
char* __dec_obj190;
void* __right_value474 = (void*)0;
char* __dec_obj191;
void* __right_value475 = (void*)0;
char* __dec_obj192;
char* p_493;
int sline_494;
void* __right_value476 = (void*)0;
char* __dec_obj193;
void* __right_value477 = (void*)0;
char* __dec_obj194;
void* __right_value478 = (void*)0;
char* __dec_obj195;
void* __right_value479 = (void*)0;
char* __dec_obj196;
void* __right_value480 = (void*)0;
char* __dec_obj197;
void* __right_value481 = (void*)0;
char* __dec_obj198;
void* __right_value482 = (void*)0;
char* __dec_obj199;
void* __right_value483 = (void*)0;
char* __dec_obj200;
void* __right_value484 = (void*)0;
char* __dec_obj201;
void* __right_value485 = (void*)0;
char* __dec_obj202;
void* __right_value486 = (void*)0;
char* __dec_obj203;
char* p_495;
int sline_496;
void* __right_value487 = (void*)0;
char* __dec_obj204;
void* __right_value488 = (void*)0;
char* __dec_obj205;
void* __right_value489 = (void*)0;
char* attribute_497;
int pointer_num_498;
_Bool heap_499;
_Bool refference_500;
_Bool no_refference_501;
_Bool channel_502;
_Bool any_class_503;
char* tuple_name_504;
void* __right_value490 = (void*)0;
char* __dec_obj206;
_Bool lambda_flag_505;
char* pX_506;
int slineX_507;
void* __right_value491 = (void*)0;
struct sType* type_508;
char* var_name_509;
_Bool function_pointer_flag_510;
char* p_511;
int sline_512;
void* __right_value492 = (void*)0;
char* word_513;
_Bool var_name_between_brace_514;
char* p_515;
int sline_516;
void* __right_value493 = (void*)0;
char* word_517;
void* __right_value494 = (void*)0;
char* __dec_obj207;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sNode* node_519;
_Bool Value_520;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct tuple3$3sTypephcharphbool* __result306__;
int pointer_num_521;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj208;
void* __right_value501 = (void*)0;
char* __dec_obj209;
void* __right_value502 = (void*)0;
struct sNode* node_522;
_Bool Value_523;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct tuple3$3sTypephcharphbool* __result307__;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj210;
void* __right_value507 = (void*)0;
char* __dec_obj211;
void* __right_value508 = (void*)0;
struct sNode* node_524;
_Bool Value_525;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct tuple3$3sTypephcharphbool* __result308__;
int pointer_num_526;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj212;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct tuple3$3sTypephcharphbool* __result309__;
void* __right_value515 = (void*)0;
char* attribute_527;
char* __dec_obj213;
void* __right_value516 = (void*)0;
char* __dec_obj214;
void* __right_value517 = (void*)0;
char* __dec_obj215;
void* __right_value518 = (void*)0;
char* __dec_obj216;
void* __right_value519 = (void*)0;
char* __dec_obj217;
_Bool no_comma_530;
void* __right_value520 = (void*)0;
struct sNode* node_531;
struct sNode* __dec_obj218;
void* __right_value521 = (void*)0;
char* attribute2_532;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* __dec_obj219;
char* __dec_obj220;
struct sType* result_type_533;
void* __right_value524 = (void*)0;
_Bool _if_conditional3;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj221;
void* __right_value527 = (void*)0;
int i_534;
void* __right_value528 = (void*)0;
_Bool _if_conditional4;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj222;
int i_538;
void* __right_value532 = (void*)0;
_Bool _if_conditional5;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj223;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj224;
struct sNode* __dec_obj225;
void* __right_value538 = (void*)0;
char* __dec_obj226;
void* __right_value539 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1voidph* param_types_539=0;
struct list$1charph* param_names_540=0;
struct list$1charph* param_default_parametors_541=0;
_Bool var_args_542=0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct sType* __dec_obj227;
struct sType* __dec_obj228;
struct list$1voidph* __dec_obj229;
struct list$1charph* __dec_obj230;
int function_pointer_num_543;
struct sType* result_type_544;
void* __right_value542 = (void*)0;
_Bool _if_conditional6;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj231;
void* __right_value545 = (void*)0;
int i_545;
void* __right_value546 = (void*)0;
_Bool _if_conditional7;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* __dec_obj232;
int i_546;
void* __right_value550 = (void*)0;
_Bool _if_conditional8;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj233;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* __dec_obj234;
struct sNode* __dec_obj235;
void* __right_value556 = (void*)0;
char* __dec_obj236;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct tuple3$3sTypephcharphbool* __result312__;
void* __right_value559 = (void*)0;
char* __dec_obj237;
_Bool function_pointer_array_548;
int function_pointer_array_num_549;
int n_550;
void* __right_value560 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1voidph* param_types_551=0;
struct list$1charph* param_names_552=0;
struct list$1charph* param_default_parametors_553=0;
_Bool var_args_554=0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sType* __dec_obj238;
void* __right_value563 = (void*)0;
struct sType* __dec_obj239;
struct list$1voidph* __dec_obj240;
struct list$1charph* __dec_obj241;
void* __right_value564 = (void*)0;
struct sNode* exp_555;
_Bool Value_556;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct tuple3$3sTypephcharphbool* __result313__;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_557;
void* __right_value568 = (void*)0;
struct sType* __dec_obj242;
void* __right_value569 = (void*)0;
char* attribute_558;
char* __dec_obj243;
void* __right_value570 = (void*)0;
char* __dec_obj244;
void* __right_value571 = (void*)0;
char* __dec_obj245;
void* __right_value572 = (void*)0;
char* __dec_obj246;
void* __right_value573 = (void*)0;
char* __dec_obj247;
_Bool no_comma_561;
void* __right_value574 = (void*)0;
struct sNode* node_562;
struct sNode* __dec_obj248;
void* __right_value575 = (void*)0;
char* attribute2_563;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* __dec_obj249;
char* __dec_obj250;
void* __right_value578 = (void*)0;
_Bool _if_conditional9;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sType* __dec_obj255;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
char* __dec_obj256;
struct sNode* __dec_obj257;
char* __dec_obj258;
int i_564;
void* __right_value583 = (void*)0;
_Bool _if_conditional10;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __dec_obj259;
struct sNode* __dec_obj260;
char* __dec_obj261;
int i_565;
void* __right_value587 = (void*)0;
_Bool _if_conditional11;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sType* __dec_obj262;
struct sNode* __dec_obj263;
char* __dec_obj264;
void* __right_value591 = (void*)0;
_Bool _if_conditional12;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct tuple3$3sTypephcharphbool* __result314__;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sType* __dec_obj265;
void* __right_value596 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_566=0;
char* var_name_567=0;
_Bool err_568=0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct tuple3$3sTypephcharphbool* __result315__;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct tuple3$3sTypephcharphbool* __result316__;
void* __right_value601 = (void*)0;
struct sType* __dec_obj266;
void* __right_value602 = (void*)0;
char* new_name_569;
struct sNode* __dec_obj267;
char* __dec_obj268;
char* __dec_obj269;
void* __right_value603 = (void*)0;
struct sClass* klass_570;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sClass* klass_612;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __dec_obj270;
struct sNode* __dec_obj271;
char* __dec_obj272;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1voidph* types_613;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_614=0;
char* name_615=0;
_Bool err_616=0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct tuple3$3sTypephcharphbool* __result338__;
void* __right_value622 = (void*)0;
int num_tuples_617;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sType* __dec_obj273;
struct list$1voidph* o2_saved_618;
struct sType* it_619;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* __dec_obj274;
void* __right_value628 = (void*)0;
char* new_name_620;
char* __dec_obj275;
void* __right_value629 = (void*)0;
char* attribute_621;
char* __dec_obj276;
void* __right_value630 = (void*)0;
char* __dec_obj277;
void* __right_value631 = (void*)0;
char* __dec_obj278;
void* __right_value632 = (void*)0;
char* __dec_obj279;
void* __right_value633 = (void*)0;
char* __dec_obj280;
_Bool no_comma_624;
void* __right_value634 = (void*)0;
struct sNode* node_625;
struct sNode* __dec_obj281;
void* __right_value635 = (void*)0;
char* attribute2_626;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
char* __dec_obj282;
char* __dec_obj283;
void* __right_value638 = (void*)0;
struct sNode* node_627;
void* __right_value639 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var9 = (void*)0;
char* asm_name_628=0;
char* attribute2_629=0;
char* __dec_obj284;
char* __dec_obj285;
void* __right_value640 = (void*)0;
struct sType* type_before_630;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct sType* __dec_obj286;
void* __right_value643 = (void*)0;
struct sNode* __list_values1___631[1];
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct list$1sNodeph* __dec_obj287;
struct sType* __dec_obj288;
void* __right_value647 = (void*)0;
struct sType* type_before_635;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sType* __dec_obj289;
struct sType* __dec_obj290;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sType* type2_636;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sType* type3_642;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sType* type4_643;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct tuple3$3sTypephcharphbool* __result344__;
char* __dec_obj292;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct tuple3$3sTypephcharphbool* __result345__;
type_508 = (void*)0;
var_name_509 = (void*)0;
result_type_533 = (void*)0;
result_type_544 = (void*)0;
    head_434=info->p;
    head_sline_435=info->sline;
    info->define_struct=(_Bool)0;
    type_name_436=(char*)come_increment_ref_count(parse_word(info));
    record__437=(_Bool)0;
    exception__438=(_Bool)0;
    constant_439=(_Bool)0;
    static__440=(_Bool)0;
    volatile__441=(_Bool)0;
    register__442=(_Bool)0;
    unsigned__443=(_Bool)0;
    long__444=(_Bool)0;
    long_long_445=(_Bool)0;
    short__446=(_Bool)0;
    restrict__447=(_Bool)0;
    struct__448=(_Bool)0;
    union__449=(_Bool)0;
    enum__450=(_Bool)0;
    no_heap_451=(_Bool)0;
    extern__452=(_Bool)0;
    inline__453=(_Bool)0;
    uniq__454=(_Bool)0;
    tuple__455=(_Bool)0;
    generate__456=(_Bool)0;
    alignas__457=((void*)0);
    anonymous_type_458=(_Bool)0;
    anonymous_name_459=(_Bool)0;
    atomic__460=(_Bool)0;
    object_interface_461=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_436,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_461=(_Bool)1;
            __dec_obj154=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj155=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__460=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_436,"__extension__")) {
            __dec_obj156=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_462=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_462++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_462--;
                        if(                        brace_num_462==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj157=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"__declspec")) {
            if(            *info->p==40) {
                brace_num_463=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_463++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_463--;
                        if(                        brace_num_463==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj158=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"_Noreturn")) {
            __dec_obj159=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"__noreturn")) {
            __dec_obj160=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"_Nullable")) {
            __dec_obj161=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"_noreturn")) {
            __dec_obj162=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"_Alignas")) {
            expected_next_character(40,info);
            exp_464=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj163=alignas__457;
            alignas__457=(struct sNode*)come_increment_ref_count(exp_464);
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj164=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_464) { exp_464 = come_decrement_ref_count2(exp_464, ((struct sNode*)exp_464)->finalize, ((struct sNode*)exp_464)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_436,"const")) {
            constant_439=(_Bool)1;
            __dec_obj165=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"static")) {
            static__440=(_Bool)1;
            __dec_obj166=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"uniq")) {
            uniq__454=(_Bool)1;
            __dec_obj167=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"record")) {
            record__437=(_Bool)1;
            __dec_obj168=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"exception")) {
            exception__438=(_Bool)1;
            __dec_obj169=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"extern")) {
            extern__452=(_Bool)1;
            __dec_obj170=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"inline")||string_operator_equals(type_name_436,"__inline")||string_operator_equals(type_name_436,"__inline__")||string_operator_equals(type_name_436,"__always_inline")||string_operator_equals(type_name_436,"__forceinline")) {
            inline__453=(_Bool)1;
            __dec_obj171=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"volatile")) {
            volatile__441=(_Bool)1;
            __dec_obj172=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"generate")) {
            generate__456=(_Bool)1;
            __dec_obj173=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"struct")) {
            struct__448=(_Bool)1;
            if(            *info->p==123) {
                p_465=info->p;
                sline_466=info->sline;
                ((char*)(__right_value431=skip_block(info)));
                __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_459=(_Bool)1;
                    anonymous_type_458=(_Bool)1;
                    __dec_obj174=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_465;
                    info->sline=sline_466;
                    break;
                }
                else {
                    anonymous_type_458=(_Bool)1;
                    __dec_obj175=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_465;
                    info->sline=sline_466;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value434=parse_struct_attribute(info)));
                __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj176=type_name_436;
                type_name_436=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_467=info->p;
                    sline_468=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_467;
                                info->sline=sline_468;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value437=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1422, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value437,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result300__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_469=info->p;
                    sline_470=info->sline;
                    ((char*)(__right_value438=skip_block(info)));
                    __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (void)((char*)(__right_value439=parse_struct_attribute(info)));
                    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        info->p=head_434;
                        info->sline=head_sline_435;
                        info->define_struct=(_Bool)1;
                        __result301__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value441=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1442, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value441,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result301__;
                    }
                    else {
                        info->p=p_469;
                        info->sline=sline_470;
                        node_471=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_436),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_472=node_compile(node_471,info);
                        if(                        !Value_472) {
                            __result302__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value445=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1454, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_471) { node_471 = come_decrement_ref_count2(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value445,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result302__;
                        }
                        else {
                        }
                        if(node_471) { node_471 = come_decrement_ref_count2(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_471) { node_471 = come_decrement_ref_count2(node_471, ((struct sNode*)node_471)->finalize, ((struct sNode*)node_471)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_436,"union")) {
            union__449=(_Bool)1;
            if(            *info->p==123) {
                p_473=info->p;
                sline_474=info->sline;
                ((char*)(__right_value446=skip_block(info)));
                __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value447=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value447,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_434;
                    info->sline=head_sline_435;
                    info->define_struct=(_Bool)0;
                    anonymous_type_458=(_Bool)1;
                    __dec_obj177=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_473;
                    info->sline=sline_474;
                    break;
                }
                else {
                    anonymous_type_458=(_Bool)1;
                    __dec_obj178=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_473;
                    info->sline=sline_474;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj179=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_475=info->p;
                sline_476=info->sline;
                ((char*)(__right_value451=skip_block(info)));
                __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_434;
                    info->sline=head_sline_435;
                    info->define_struct=(_Bool)1;
                    __result303__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value453=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1511, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value453,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result303__;
                }
                else {
                    anonymous_type_458=(_Bool)1;
                    info->p=p_475;
                    info->sline=sline_476;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_436,"enum")) {
            enum__450=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value454=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_477=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_478=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_479=multiple_assign_var3->v3;
                come_call_finalizer3(__right_value454,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_478 = come_decrement_ref_count2(name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_480=info->p;
                sline_481=info->sline;
                ((char*)(__right_value455=skip_block(info)));
                __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value456=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value456,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_434;
                    info->sline=head_sline_435;
                    info->define_struct=(_Bool)1;
                    __result304__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value458=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1549, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value458,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result304__;
                }
                else {
                    anonymous_type_458=(_Bool)1;
                    __dec_obj180=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_480;
                    info->sline=sline_481;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj181=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value461=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_482=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_483=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_484=multiple_assign_var4->v3;
                come_call_finalizer3(__right_value461,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_483 = come_decrement_ref_count2(name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_485=info->p;
                sline_486=info->sline;
                ((char*)(__right_value462=skip_block(info)));
                __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_434;
                    info->sline=head_sline_435;
                    info->define_struct=(_Bool)1;
                    __result305__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value464=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1585, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value464,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result305__;
                }
                else {
                    anonymous_type_458=(_Bool)1;
                    info->p=p_485;
                    info->sline=sline_486;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_436,"long")) {
            {
                p_487=info->p;
                sline_488=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_487;
                    info->sline=sline_488;
                    __dec_obj182=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj183=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_436,"unsigned")) {
                        __dec_obj184=type_name_436;
                        type_name_436=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_436,"int")) {
                            long__444=(_Bool)1;
                            unsigned__443=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_436,"signed")) {
                        __dec_obj185=type_name_436;
                        type_name_436=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_436,"int")) {
                            long__444=(_Bool)1;
                            unsigned__443=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_436,"long")) {
                        p_487=info->p;
                        sline_488=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_445=(_Bool)1;
                            __dec_obj186=type_name_436;
                            type_name_436=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__444=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_436,"int")) {
                            long_long_445=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_436,info)) {
                            __dec_obj187=type_name_436;
                            type_name_436=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_445=(_Bool)1;
                            info->p=p_487;
                            info->sline=sline_488;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_436,info)) {
                        if(                        long__444) {
                            long_long_445=(_Bool)1;
                            long__444=(_Bool)0;
                        }
                        else {
                            long__444=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_487;
                        info->sline=sline_488;
                        __dec_obj188=type_name_436;
                        type_name_436=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_436,"unsigned")) {
            unsigned__443=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_489=info->p;
                sline_490=info->sline;
                __dec_obj189=type_name_436;
                type_name_436=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_436,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_491=info->p;
                        sline_492=info->sline;
                        __dec_obj190=type_name_436;
                        type_name_436=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_436,info)) {
                            short__446=(_Bool)1;
                        }
                        else {
                            short__446=(_Bool)1;
                            __dec_obj191=type_name_436;
                            type_name_436=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_491;
                            info->sline=sline_492;
                        }
                    }
                    else {
                        short__446=(_Bool)1;
                        __dec_obj192=type_name_436;
                        type_name_436=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_436,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_493=info->p;
                        sline_494=info->sline;
                        __dec_obj193=type_name_436;
                        type_name_436=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_436,info)) {
                            long__444=(_Bool)1;
                        }
                        else {
                            long__444=(_Bool)1;
                            __dec_obj194=type_name_436;
                            type_name_436=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_493;
                            info->sline=sline_494;
                        }
                    }
                    else {
                        long__444=(_Bool)1;
                        __dec_obj195=type_name_436;
                        type_name_436=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_436,info)) {
                    __dec_obj196=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_489;
                    info->sline=sline_490;
                    break;
                }
            }
            else {
                __dec_obj197=type_name_436;
                type_name_436=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_436,"signed")||string_operator_equals(type_name_436,"__signed__")) {
            unsigned__443=(_Bool)0;
            __dec_obj198=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"register")) {
            register__442=(_Bool)1;
            __dec_obj199=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"restrict")) {
            restrict__447=(_Bool)1;
            __dec_obj200=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"_Addr")) {
            __dec_obj201=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"__restrict")) {
            restrict__447=(_Bool)1;
            __dec_obj202=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_436,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj203=type_name_436;
            type_name_436=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__455=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_436,"short")) {
            short__446=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_495=info->p;
                sline_496=info->sline;
                __dec_obj204=type_name_436;
                type_name_436=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_436,"int")) {
                    short__446=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_436,"short")) {
                    short__446=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_436,info)) {
                    info->p=p_495;
                    info->sline=sline_496;
                }
                else {
                    __dec_obj205=type_name_436;
                    type_name_436=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_495;
                    info->sline=sline_496;
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
    attribute_497=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_498=0;
    heap_499=(_Bool)0;
    refference_500=(_Bool)0;
    no_refference_501=(_Bool)0;
    channel_502=(_Bool)0;
    any_class_503=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_498++;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_503=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_499=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_502=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_504=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__455) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj206=tuple_name_504;
        tuple_name_504=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__460) {
        expected_next_character(41,info);
    }
    lambda_flag_505=(_Bool)0;
    {
        pX_506=info->p;
        slineX_507=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value491=parse_word(info)));
            __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_505=(_Bool)1;
            }
        }
        info->p=pX_506;
        info->sline=slineX_507;
    }
    function_pointer_flag_510=(_Bool)0;
    {
        p_511=info->p;
        sline_512=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_510=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_513=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_510=(_Bool)1;
                    }
                }
                word_513 = come_decrement_ref_count2(word_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_511;
        info->sline=sline_512;
    }
    var_name_between_brace_514=(_Bool)0;
    {
        p_515=info->p;
        sline_516=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_517=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_517,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_514=(_Bool)1;
                    }
                }
                word_517 = come_decrement_ref_count2(word_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_515;
        info->sline=sline_516;
    }
    if(    anonymous_type_458&&*info->p==123) {
        static int anonymous_num_518=0;
        if(        struct__448) {
            if(            string_operator_equals(type_name_436,"")) {
                __dec_obj207=type_name_436;
                type_name_436=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_518));
                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_519=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_436),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_520=node_compile(node_519,info);
            if(            !Value_520) {
                err_msg(info,"parse_struct is failed");
                __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value498=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1990, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value498,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result306__;
            }
            else {
            }
            pointer_num_521=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_521++;
            }
            __dec_obj208=type_508;
            type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2003, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),type_name_436,(_Bool)0,info));
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_508->mPointerNum=pointer_num_521;
            if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__450) {
            if(            string_operator_equals(type_name_436,"")) {
                __dec_obj209=type_name_436;
                type_name_436=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_518));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_522=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_436),info));
            if(            !info->no_output_err) {
                Value_523=node_compile(node_522,info);
                if(                !Value_523) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result307__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value504=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2017, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_522) { node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value504,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result307__;
                }
                else {
                }
            }
            __dec_obj210=type_508;
            type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2021, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),type_name_436,(_Bool)0,info));
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_522) { node_522 = come_decrement_ref_count2(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__449) {
            if(            string_operator_equals(type_name_436,"")) {
                __dec_obj211=type_name_436;
                type_name_436=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_518));
                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_524=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_436),info));
            Value_525=node_compile(node_524,info);
            if(            !Value_525) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result308__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value510=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2033, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_524) { node_524 = come_decrement_ref_count2(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value510,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result308__;
            }
            else {
            }
            pointer_num_526=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_526++;
            }
            __dec_obj212=type_508;
            type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2047, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),type_name_436,(_Bool)0,info));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_508->mPointerNum=pointer_num_526;
            if(node_524) { node_524 = come_decrement_ref_count2(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result309__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value514=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2053, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value514,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result309__;
        }
        attribute_527=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_527,"")) {
            __dec_obj213=type_508->mAttribute;
            type_508->mAttribute=(char*)come_increment_ref_count(attribute_527);
            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_514&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj214=var_name_509;
                var_name_509=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_459) {
                static int num_anonymous_var_name_528=0;
                num_anonymous_var_name_528++;
                __dec_obj215=var_name_509;
                var_name_509=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_528));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj216=var_name_509;
                var_name_509=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_529=0;
                num_anonymous_var_name_529++;
                __dec_obj217=var_name_509;
                var_name_509=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_529));
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_514&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_530=info->no_comma;
                info->no_comma=(_Bool)1;
                node_531=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_530;
                __dec_obj218=type_508->mSizeNum;
                type_508->mSizeNum=(struct sNode*)come_increment_ref_count(node_531);
                if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_531) { node_531 = come_decrement_ref_count2(node_531, ((struct sNode*)node_531)->finalize, ((struct sNode*)node_531)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_532=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_527,"")&&string_operator_not_equals(attribute2_532,"")) {
                __dec_obj219=type_508->mAttribute;
                type_508->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_527,((char*)(__right_value522=charp_operator_add(" ",attribute2_532)))));
                __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_532,"")) {
                __dec_obj220=type_508->mAttribute;
                type_508->mAttribute=(char*)come_increment_ref_count(attribute2_532);
                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_532 = come_decrement_ref_count2(attribute2_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_527 = come_decrement_ref_count2(attribute_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    lambda_flag_505) {
        if(        (_if_conditional3=(((struct sType*)(__right_value524=map$2charphsTypephp_operator_load_element(info->types,type_name_436))))),        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional3) {
            __dec_obj221=result_type_533;
            result_type_533=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value525=map$2charphsTypephp_operator_load_element(info->types,type_name_436)))));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value525,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_533->mClass=((struct sClass*)(__right_value527=map$2charphsClassphp_operator_load_element(info->classes,result_type_533->mClass->mName)));
            come_call_finalizer3(__right_value527,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_436)) {
            for(            i_534=0;            i_534<list$1charphp_length(info->generics_type_names);            i_534++            ){
                if(                (_if_conditional4=(string_operator_equals(((char*)(__right_value528=list$1charphp_operator_load_element(info->generics_type_names,i_534))),type_name_436))),                (__right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional4) {
                    __dec_obj222=result_type_533;
                    result_type_533=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2121, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value530=xsprintf("generics_type%d",i_534))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_436)) {
            for(            i_538=0;            i_538<list$1charphp_length(info->method_generics_type_names);            i_538++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value532=list$1charphp_operator_load_element(info->method_generics_type_names,i_538))),type_name_436))),                (__right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional5) {
                    __dec_obj223=result_type_533;
                    result_type_533=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2128, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value534=xsprintf("mgenerics_type%d",i_538))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj224=result_type_533;
            result_type_533=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2133, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),type_name_436,(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_533->mAtomic=result_type_533->mAtomic||atomic__460;
        result_type_533->mConstant=result_type_533->mConstant||constant_439;
        __dec_obj225=result_type_533->mAlignas;
        result_type_533->mAlignas=(struct sNode*)come_increment_ref_count(alignas__457);
        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_533->mRegister=register__442;
        result_type_533->mUnsigned=result_type_533->mUnsigned||unsigned__443;
        result_type_533->mVolatile=volatile__441;
        result_type_533->mGenerate=generate__456;
        result_type_533->mRecord=result_type_533->mRecord||record__437;
        result_type_533->mUniq=result_type_533->mUniq||uniq__454;
        result_type_533->mStatic=(result_type_533->mStatic||static__440)&&!result_type_533->mUniq;
        result_type_533->mException=result_type_533->mException||exception__438;
        result_type_533->mExtern=result_type_533->mExtern||extern__452;
        result_type_533->mInline=result_type_533->mInline||inline__453;
        result_type_533->mRestrict=result_type_533->mRestrict||restrict__447;
        result_type_533->mLongLong=result_type_533->mLongLong||long_long_445;
        result_type_533->mLong=result_type_533->mLong||long__444;
        result_type_533->mShort=result_type_533->mShort||short__446;
        result_type_533->mPointerNum=pointer_num_498;
        result_type_533->mHeap=result_type_533->mHeap||heap_499;
        result_type_533->mChannel=result_type_533->mChannel||channel_502;
        result_type_533->mAnyClass=result_type_533->mAnyClass||any_class_503;
        __dec_obj226=var_name_509;
        var_name_509=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value539=parse_params(info,(_Bool)0)));
        param_types_539=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_540=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_541=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_542=multiple_assign_var5->v4;
        come_call_finalizer3(__right_value539,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj227=type_508;
        type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2162, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj228=type_508->mResultType;
        type_508->mResultType=(struct sType*)come_increment_ref_count(result_type_533);
        come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj229=type_508->mParamTypes;
        type_508->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_539);
        come_call_finalizer3(__dec_obj229,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj230=type_508->mParamNames;
        type_508->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_540);
        come_call_finalizer3(__dec_obj230,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_508->mVarArgs=var_args_542;
        type_508->mExtern=extern__452;
        come_call_finalizer3(result_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_539,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_540,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_541,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_510) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_543=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_543++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional6=(((struct sType*)(__right_value542=map$2charphsTypephp_operator_load_element(info->types,type_name_436))))),        come_call_finalizer3(__right_value542,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional6) {
            __dec_obj231=result_type_544;
            result_type_544=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value543=map$2charphsTypephp_operator_load_element(info->types,type_name_436)))));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value543,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_544->mClass=((struct sClass*)(__right_value545=map$2charphsClassphp_operator_load_element(info->classes,result_type_544->mClass->mName)));
            come_call_finalizer3(__right_value545,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_436)) {
            for(            i_545=0;            i_545<list$1charphp_length(info->generics_type_names);            i_545++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)(__right_value546=list$1charphp_operator_load_element(info->generics_type_names,i_545))),type_name_436))),                (__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional7) {
                    __dec_obj232=result_type_544;
                    result_type_544=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2195, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value548=xsprintf("generics_type%d",i_545))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_436)) {
            for(            i_546=0;            i_546<list$1charphp_length(info->method_generics_type_names);            i_546++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value550=list$1charphp_operator_load_element(info->method_generics_type_names,i_546))),type_name_436))),                (__right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional8) {
                    __dec_obj233=result_type_544;
                    result_type_544=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2202, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value552=xsprintf("mgenerics_type%d",i_546))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj234=result_type_544;
            result_type_544=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2207, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),type_name_436,(_Bool)0,info));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_544->mConstant=result_type_544->mConstant||constant_439;
        result_type_544->mAtomic=result_type_544->mAtomic||atomic__460;
        __dec_obj235=result_type_544->mAlignas;
        result_type_544->mAlignas=(struct sNode*)come_increment_ref_count(alignas__457);
        if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_544->mRegister=register__442;
        result_type_544->mUnsigned=result_type_544->mUnsigned||unsigned__443;
        result_type_544->mVolatile=volatile__441;
        result_type_544->mGenerate=generate__456;
        result_type_544->mUniq=result_type_544->mUniq||uniq__454;
        result_type_544->mStatic=(result_type_544->mStatic||static__440)&&!result_type_544->mUniq;
        result_type_544->mRecord=result_type_544->mRecord||record__437;
        result_type_544->mException=result_type_544->mException||exception__438;
        result_type_544->mExtern=result_type_544->mExtern||extern__452;
        result_type_544->mInline=result_type_544->mInline||inline__453;
        result_type_544->mRestrict=result_type_544->mRestrict||restrict__447;
        result_type_544->mLongLong=result_type_544->mLongLong||long_long_445;
        result_type_544->mLong=result_type_544->mLong||long__444;
        result_type_544->mShort=result_type_544->mShort||short__446;
        result_type_544->mPointerNum+=pointer_num_498;
        result_type_544->mHeap=result_type_544->mHeap||heap_499;
        result_type_544->mChannel=result_type_544->mChannel||channel_502;
        result_type_544->mAnyClass=result_type_544->mAnyClass||any_class_503;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj236=var_name_509;
            var_name_509=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result312__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value558=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2235, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count(result_type_544),(char*)come_increment_ref_count(var_name_509),(_Bool)0)));
                come_call_finalizer3(result_type_544,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value558,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result312__;
            }
        }
        else {
            static int num_anonymous_var_name_547=0;
            num_anonymous_var_name_547++;
            __dec_obj237=var_name_509;
            var_name_509=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_547));
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_548=(_Bool)0;
        function_pointer_array_num_549=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_550=0;
            while(xisdigit(*info->p)) {
                n_550=n_550*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_549=n_550;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_548=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value560=parse_params(info,(_Bool)0)));
        param_types_551=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_552=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_553=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_554=multiple_assign_var6->v4;
        come_call_finalizer3(__right_value560,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj238=type_508;
        type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2267, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj239=type_508->mResultType;
        type_508->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_544));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj240=type_508->mParamTypes;
        type_508->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_551);
        come_call_finalizer3(__dec_obj240,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj241=type_508->mParamNames;
        type_508->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_552);
        come_call_finalizer3(__dec_obj241,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_508->mVarArgs=var_args_554;
        type_508->mExtern=extern__452;
        if(        function_pointer_array_548) {
            type_508->mLambdaArray=(_Bool)1;
            type_508->mLambdaArrayNum=function_pointer_array_num_549;
        }
        type_508->mFunctionPointerNum=function_pointer_num_543;
        come_call_finalizer3(result_type_544,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_551,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_552,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_436,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_555=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_556=node_compile(exp_555,info);
        if(        !Value_556) {
            err_msg(info,"invalid __typeof__ expression");
            __result313__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value566=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2291, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_555) { exp_555 = come_decrement_ref_count2(exp_555, ((struct sNode*)exp_555)->finalize, ((struct sNode*)exp_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
            type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value566,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
        else {
        }
        come_value_557=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj242=type_508;
        type_508=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_557->type));
        come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        attribute_558=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_558,"")) {
            __dec_obj243=type_508->mAttribute;
            type_508->mAttribute=(char*)come_increment_ref_count(attribute_558);
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_514&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj244=var_name_509;
                var_name_509=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_459) {
                static int num_anonymous_var_name_559=0;
                num_anonymous_var_name_559++;
                __dec_obj245=var_name_509;
                var_name_509=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_559));
                __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj246=var_name_509;
                var_name_509=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_560=0;
                num_anonymous_var_name_560++;
                __dec_obj247=var_name_509;
                var_name_509=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_560));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_514&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_561=info->no_comma;
                info->no_comma=(_Bool)1;
                node_562=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_561;
                __dec_obj248=type_508->mSizeNum;
                type_508->mSizeNum=(struct sNode*)come_increment_ref_count(node_562);
                if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_562) { node_562 = come_decrement_ref_count2(node_562, ((struct sNode*)node_562)->finalize, ((struct sNode*)node_562)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_563=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_558,"")&&string_operator_not_equals(attribute2_563,"")) {
                __dec_obj249=type_508->mAttribute;
                type_508->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_558,((char*)(__right_value576=charp_operator_add(" ",attribute2_563)))));
                __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_563,"")) {
                __dec_obj250=type_508->mAttribute;
                type_508->mAttribute=(char*)come_increment_ref_count(attribute2_563);
                __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_563 = come_decrement_ref_count2(attribute2_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(exp_555) { exp_555 = come_decrement_ref_count2(exp_555, ((struct sNode*)exp_555)->finalize, ((struct sNode*)exp_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        attribute_558 = come_decrement_ref_count2(attribute_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        (_if_conditional9=(((struct sType*)(__right_value578=map$2charphsTypephp_operator_load_element(info->types,type_name_436))))),        come_call_finalizer3(__right_value578,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            __dec_obj255=type_508;
            type_508=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value579=map$2charphsTypephp_operator_load_element(info->types,type_name_436)))));
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value579,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_508->mTypedefOriginalPointerNum=type_508->mPointerNum;
            type_508->mClass=((struct sClass*)(__right_value581=map$2charphsClassphp_operator_load_element(info->classes,type_508->mClass->mName)));
            come_call_finalizer3(__right_value581,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj256=type_508->mOriginalTypeName;
            type_508->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_436));
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_508->mOriginalTypeNamePointerNum=pointer_num_498;
            type_508->mOriginalTypeNameHeap=heap_499;
            type_508->mConstant=type_508->mConstant||constant_439;
            type_508->mAtomic=type_508->mAtomic||atomic__460;
            __dec_obj257=type_508->mAlignas;
            type_508->mAlignas=(struct sNode*)come_increment_ref_count(alignas__457);
            if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
            type_508->mRegister=register__442;
            type_508->mUnsigned=type_508->mUnsigned||unsigned__443;
            type_508->mVolatile=volatile__441;
            type_508->mGenerate=generate__456;
            type_508->mUniq=type_508->mUniq||uniq__454;
            type_508->mStatic=(type_508->mStatic||static__440)&&!type_508->mUniq;
            type_508->mRecord=type_508->mRecord||record__437;
            type_508->mException=type_508->mException||exception__438;
            type_508->mExtern=type_508->mExtern||extern__452;
            type_508->mInline=type_508->mInline||inline__453;
            type_508->mRestrict=type_508->mRestrict||restrict__447;
            type_508->mLongLong=type_508->mLongLong||long_long_445;
            type_508->mLong=type_508->mLong||long__444;
            type_508->mShort=type_508->mShort||short__446;
            type_508->mPointerNum+=pointer_num_498;
            type_508->mHeap=type_508->mHeap||heap_499;
            type_508->mChannel=type_508->mChannel||channel_502;
            type_508->mAnyClass=type_508->mAnyClass||any_class_503;
            __dec_obj258=type_508->mTupleName;
            type_508->mTupleName=(char*)come_increment_ref_count(tuple_name_504);
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_436)) {
            for(            i_564=0;            i_564<list$1charphp_length(info->generics_type_names);            i_564++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)(__right_value583=list$1charphp_operator_load_element(info->generics_type_names,i_564))),type_name_436))),                (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional10) {
                    __dec_obj259=type_508;
                    type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2390, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value585=xsprintf("generics_type%d",i_564))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_508->mConstant=type_508->mConstant||constant_439;
            type_508->mAtomic=type_508->mAtomic||atomic__460;
            __dec_obj260=type_508->mAlignas;
            type_508->mAlignas=(struct sNode*)come_increment_ref_count(alignas__457);
            if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
            type_508->mRegister=register__442;
            type_508->mUnsigned=type_508->mUnsigned||unsigned__443;
            type_508->mVolatile=volatile__441;
            type_508->mGenerate=generate__456;
            type_508->mUniq=type_508->mUniq||uniq__454;
            type_508->mStatic=(type_508->mStatic||static__440)&&!type_508->mUniq;
            type_508->mRecord=type_508->mRecord||record__437;
            type_508->mException=type_508->mException||exception__438;
            type_508->mExtern=type_508->mExtern||extern__452;
            type_508->mInline=type_508->mInline||inline__453;
            type_508->mRestrict=type_508->mRestrict||restrict__447;
            type_508->mLongLong=type_508->mLongLong||long_long_445;
            type_508->mLong=type_508->mLong||long__444;
            type_508->mShort=type_508->mShort||short__446;
            type_508->mPointerNum+=pointer_num_498;
            type_508->mHeap=type_508->mHeap||heap_499;
            type_508->mChannel=type_508->mChannel||channel_502;
            type_508->mAnyClass=type_508->mAnyClass||any_class_503;
            __dec_obj261=type_508->mTupleName;
            type_508->mTupleName=(char*)come_increment_ref_count(tuple_name_504);
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_436)) {
            for(            i_565=0;            i_565<list$1charphp_length(info->method_generics_type_names);            i_565++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value587=list$1charphp_operator_load_element(info->method_generics_type_names,i_565))),type_name_436))),                (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional11) {
                    __dec_obj262=type_508;
                    type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2420, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value589=xsprintf("mgenerics_type%d",i_565))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_508->mConstant=type_508->mConstant||constant_439;
            type_508->mAtomic=type_508->mAtomic||atomic__460;
            __dec_obj263=type_508->mAlignas;
            type_508->mAlignas=(struct sNode*)come_increment_ref_count(alignas__457);
            if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
            type_508->mRegister=register__442;
            type_508->mUnsigned=type_508->mUnsigned||unsigned__443;
            type_508->mVolatile=volatile__441;
            type_508->mGenerate=generate__456;
            type_508->mUniq=type_508->mUniq||uniq__454;
            type_508->mStatic=(type_508->mStatic||static__440)&&!type_508->mUniq;
            type_508->mRecord=type_508->mRecord||record__437;
            type_508->mException=type_508->mException||exception__438;
            type_508->mExtern=type_508->mExtern||extern__452;
            type_508->mInline=type_508->mInline||inline__453;
            type_508->mRestrict=type_508->mRestrict||restrict__447;
            type_508->mLongLong=type_508->mLongLong||long_long_445;
            type_508->mLong=type_508->mLong||long__444;
            type_508->mShort=type_508->mShort||short__446;
            type_508->mPointerNum+=pointer_num_498;
            type_508->mHeap=type_508->mHeap||heap_499;
            type_508->mChannel=type_508->mChannel||channel_502;
            type_508->mAnyClass=type_508->mAnyClass||any_class_503;
            __dec_obj264=type_508->mTupleName;
            type_508->mTupleName=(char*)come_increment_ref_count(tuple_name_504);
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional12=(((struct sClass*)(__right_value591=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_436)))==((void*)0))),            come_call_finalizer3(__right_value591,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional12) {
                __result314__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value593=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2453, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value593,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result314__;
            }
            __dec_obj265=type_508;
            type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2456, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),type_name_436,(_Bool)0,info));
            come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value596=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_566=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_567=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_568=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value596,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_568) {
                    __result315__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value598=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2462, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_567 = come_decrement_ref_count2(var_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value598,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result315__;
                }
                list$1voidphp_push_back(type_508->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_566));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_567 = come_decrement_ref_count2(var_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2));
                    __result316__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value600=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2479, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_567 = come_decrement_ref_count2(var_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value600,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result316__;
                }
                come_call_finalizer3(generics_type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_567 = come_decrement_ref_count2(var_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_508,info)) {
                __dec_obj266=type_508;
                type_508=(struct sType*)come_increment_ref_count(solve_generics(type_508,info->generics_type,info));
                come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_508,type_508,info)) {
                    new_name_569=(char*)come_increment_ref_count(create_generics_name(type_508,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_569);
                    exit(7);
                    new_name_569 = come_decrement_ref_count2(new_name_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_508->mConstant=type_508->mConstant||constant_439;
            type_508->mAtomic=type_508->mAtomic||atomic__460;
            __dec_obj267=type_508->mAlignas;
            type_508->mAlignas=(struct sNode*)come_increment_ref_count(alignas__457);
            if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
            type_508->mRegister=register__442;
            type_508->mUnsigned=type_508->mUnsigned||unsigned__443;
            type_508->mVolatile=volatile__441;
            type_508->mGenerate=generate__456;
            type_508->mUniq=type_508->mUniq||uniq__454;
            type_508->mStatic=(type_508->mStatic||static__440)&&!type_508->mUniq;
            type_508->mRecord=type_508->mRecord||record__437;
            type_508->mException=type_508->mException||exception__438;
            type_508->mExtern=type_508->mExtern||extern__452;
            type_508->mInline=type_508->mInline||inline__453;
            type_508->mRestrict=type_508->mRestrict||restrict__447;
            type_508->mLongLong=type_508->mLongLong||long_long_445;
            type_508->mLong=type_508->mLong||long__444;
            type_508->mShort=type_508->mShort||short__446;
            type_508->mPointerNum+=pointer_num_498;
            type_508->mHeap=type_508->mHeap||heap_499;
            type_508->mChannel=type_508->mChannel||channel_502;
            type_508->mAnyClass=type_508->mAnyClass||any_class_503;
            __dec_obj268=type_508->mTupleName;
            type_508->mTupleName=(char*)come_increment_ref_count(tuple_name_504);
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj269=type_name_436;
            type_name_436=(char*)come_increment_ref_count(type_508->mClass->mName);
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__448) {
                klass_570=((struct sClass*)(__right_value603=map$2charphsClassphp_operator_load_element(info->classes,type_name_436)));
                come_call_finalizer3(__right_value603,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_570==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_436),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2525, "struct sClass*", (void*)0, (void*)0, (void*)0)),type_name_436,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__449) {
                klass_612=((struct sClass*)(__right_value611=map$2charphsClassphp_operator_load_element(info->classes,type_name_436)));
                come_call_finalizer3(__right_value611,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_612==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_436),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2532, "struct sClass*", (void*)0, (void*)0, (void*)0)),type_name_436,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj270=type_508;
            type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),type_name_436,(_Bool)0,info));
            come_call_finalizer3(__dec_obj270,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_508->mConstant=type_508->mConstant||constant_439;
            type_508->mAtomic=type_508->mAtomic||atomic__460;
            __dec_obj271=type_508->mAlignas;
            type_508->mAlignas=(struct sNode*)come_increment_ref_count(alignas__457);
            if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
            type_508->mRegister=register__442;
            type_508->mUnsigned=type_508->mUnsigned||unsigned__443;
            type_508->mVolatile=volatile__441;
            type_508->mGenerate=generate__456;
            type_508->mUniq=type_508->mUniq||uniq__454;
            type_508->mStatic=(type_508->mStatic||static__440)&&!type_508->mUniq;
            type_508->mRecord=type_508->mRecord||record__437;
            type_508->mException=type_508->mException||exception__438;
            type_508->mExtern=type_508->mExtern||extern__452;
            type_508->mInline=type_508->mInline||inline__453;
            type_508->mRestrict=type_508->mRestrict||restrict__447;
            type_508->mLongLong=type_508->mLongLong||long_long_445;
            type_508->mLong=type_508->mLong||long__444;
            type_508->mShort=type_508->mShort||short__446;
            type_508->mPointerNum+=pointer_num_498;
            type_508->mHeap=type_508->mHeap||heap_499;
            type_508->mChannel=type_508->mChannel||channel_502;
            type_508->mAnyClass=type_508->mAnyClass||any_class_503;
            __dec_obj272=type_508->mTupleName;
            type_508->mTupleName=(char*)come_increment_ref_count(tuple_name_504);
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_508->mPointerNum++;
                if(                type_508->mNoSolvedGenericsType) {
                    type_508->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_508->mHeap=(_Bool)1;
                if(                type_508->mNoSolvedGenericsType) {
                    type_508->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_508->mNoHeap=(_Bool)1;
                if(                type_508->mNoSolvedGenericsType) {
                    type_508->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_508->mGuardValue=(_Bool)1;
                }
                else {
                    type_508->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_508->mNoCallingDestructor=(_Bool)1;
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
                type_508->mPointerNum++;
                if(                type_508->mNoSolvedGenericsType) {
                    type_508->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_508->mHeap=(_Bool)1;
                if(                type_508->mNoSolvedGenericsType) {
                    type_508->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_508->mAnyClass=(_Bool)1;
                if(                type_508->mNoSolvedGenericsType) {
                    type_508->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_508->mChannel=(_Bool)1;
                if(                type_508->mNoSolvedGenericsType) {
                    type_508->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_613=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 2667, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
            list$1voidphp_push_back(types_613,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_508)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value619=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_614=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_615=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_616=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value619,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_616) {
                    __result338__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value621=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2678, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_614,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(types_613,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value621,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result338__;
                }
                list$1voidphp_push_back(types_613,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_614)));
                come_call_finalizer3(type2_614,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_615 = come_decrement_ref_count2(name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_617=list$1voidphp_length(types_613);
            __dec_obj273=type_508;
            type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2691, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value624=xsprintf("tuple%d",num_tuples_617))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_508->mPointerNum++;
            type_508->mHeap=(_Bool)1;
            for(            o2_saved_618=(struct list$1voidph*)come_increment_ref_count((types_613)),it_619=((struct sType*)list$1voidphp_begin((o2_saved_618)));            !list$1voidphp_end((o2_saved_618));            it_619=((struct sType*)list$1voidphp_next((o2_saved_618)))            ){
                list$1voidphp_push_back(type_508->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value626=come_call_cloner(sType_clone, it_619))))));
                come_call_finalizer3(__right_value626,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_618,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_508->mPointerNum++;
                    if(                    type_508->mNoSolvedGenericsType) {
                        type_508->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_508->mHeap=(_Bool)1;
                    if(                    type_508->mNoSolvedGenericsType) {
                        type_508->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_508->mAnyClass=(_Bool)1;
                    if(                    type_508->mNoSolvedGenericsType) {
                        type_508->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_508->mChannel=(_Bool)1;
                    if(                    type_508->mNoSolvedGenericsType) {
                        type_508->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_508,info)) {
                __dec_obj274=type_508;
                type_508=(struct sType*)come_increment_ref_count(solve_generics(type_508,info->generics_type,info));
                come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_508,type_508,info)) {
                    new_name_620=(char*)come_increment_ref_count(create_generics_name(type_508,info));
                    printf("output generics is failed(%s)\n",new_name_620);
                    exit(9);
                    new_name_620 = come_decrement_ref_count2(new_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_508->mMultipleTypes=(_Bool)1;
            __dec_obj275=type_name_436;
            type_name_436=(char*)come_increment_ref_count(type_508->mClass->mName);
            __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_613,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_621=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_621,"")) {
            __dec_obj276=type_508->mAttribute;
            type_508->mAttribute=(char*)come_increment_ref_count(attribute_621);
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_514&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj277=var_name_509;
                var_name_509=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_459) {
                static int num_anonymous_var_name_622=0;
                num_anonymous_var_name_622++;
                __dec_obj278=var_name_509;
                var_name_509=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_622));
                __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj279=var_name_509;
                var_name_509=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_623=0;
                num_anonymous_var_name_623++;
                __dec_obj280=var_name_509;
                var_name_509=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_623));
                __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_514&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_624=info->no_comma;
                info->no_comma=(_Bool)1;
                node_625=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_624;
                __dec_obj281=type_508->mSizeNum;
                type_508->mSizeNum=(struct sNode*)come_increment_ref_count(node_625);
                if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_626=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_621,"")&&string_operator_not_equals(attribute2_626,"")) {
                __dec_obj282=type_508->mAttribute;
                type_508->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_621,((char*)(__right_value636=charp_operator_add(" ",attribute2_626)))));
                __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_626,"")) {
                __dec_obj283=type_508->mAttribute;
                type_508->mAttribute=(char*)come_increment_ref_count(attribute2_626);
                __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_626 = come_decrement_ref_count2(attribute2_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_621 = come_decrement_ref_count2(attribute_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            type_508->mArrayPointerType=(_Bool)1;
            type_508->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_627=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(type_508->mArrayNum,(struct sNode*)come_increment_ref_count(node_627));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_627) { node_627 = come_decrement_ref_count2(node_627, ((struct sNode*)node_627)->finalize, ((struct sNode*)node_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    multiple_assign_var9=((struct tuple2$2charphcharph*)(__right_value639=parse_attribute(info,(_Bool)0)));
    asm_name_628=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_629=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer3(__right_value639,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_629,"")) {
        __dec_obj284=type_508->mAttribute;
        type_508->mAttribute=(char*)come_increment_ref_count(attribute2_629);
        __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj285=type_508->mAsmName;
    type_508->mAsmName=(char*)come_increment_ref_count(asm_name_628);
    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_508->mChannel) {
        type_before_630=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_508));
        __dec_obj286=type_508;
        type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2853, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj286,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj287=type_508->mArrayNum;
        type_508->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___631[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value643=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2854, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key)),1,__list_values1___631)));
        come_call_finalizer3(__dec_obj287,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value643) { __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj288=type_508->mChannelType;
        type_508->mChannelType=(struct sType*)come_increment_ref_count(type_before_630);
        come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_508->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_630,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_508->mAnyClass&&!type_508->mClass->mProtocol) {
        type_before_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_508));
        type_before_635->mHeap=(_Bool)1;
        type_before_635->mPointerNum=1;
        __dec_obj289=type_508;
        type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2862, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"void",(_Bool)0,info));
        come_call_finalizer3(__dec_obj289,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_508->mHeap=(_Bool)1;
        type_508->mPointerNum=1;
        __dec_obj290=type_508->mAnyOriginalType;
        type_508->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_635);
        come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_508->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_635,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_508->mException) {
        type2_636=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2869, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type2_636->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2870, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"generics_type0",(_Bool)0,info)));
        list$1voidphp_operator_store_element(type2_636->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2871, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"generics_type1",(_Bool)0,info)));
        type2_636->mPointerNum=1;
        type2_636->mHeap=(_Bool)1;
        type3_642=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2875, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type3_642->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_508));
        list$1voidphp_operator_store_element(type3_642->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2877, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info)));
        ((struct sType*)((void*)(__right_value660=list$1voidphp_operator_load_element(type3_642->mGenericsTypes,1))))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value660,(void*)0, 0, 1, 0, 0, __result_obj__);
        type4_643=(struct sType*)come_increment_ref_count(solve_generics(type2_636,type3_642,info));
        type4_643->mException=(_Bool)1;
        type4_643->mUniq=type_508->mUniq;
        __result344__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value663=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2885, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count(type4_643),(char*)come_increment_ref_count(var_name_509),(_Bool)1)));
        come_call_finalizer3(type2_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_643,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
        attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_628 = come_decrement_ref_count2(asm_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute2_629 = come_decrement_ref_count2(attribute2_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value663,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result344__;
        come_call_finalizer3(type2_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_642,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_643,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_497,"")) {
        __dec_obj292=type_508->mAttribute;
        type_508->mAttribute=(char*)come_increment_ref_count(attribute_497);
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result345__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value665=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2892, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key)),(struct sType*)come_increment_ref_count(type_508),(char*)come_increment_ref_count(var_name_509),(_Bool)1)));
    type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__457) { alignas__457 = come_decrement_ref_count2(alignas__457, ((struct sNode*)alignas__457)->finalize, ((struct sNode*)alignas__457)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute_497 = come_decrement_ref_count2(attribute_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    tuple_name_504 = come_decrement_ref_count2(tuple_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_509 = come_decrement_ref_count2(var_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_628 = come_decrement_ref_count2(asm_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute2_629 = come_decrement_ref_count2(attribute2_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value665,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_535;
int i_536;
char* __result310__;
char* default_value_537;
char* __result311__;
default_value_537 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_535=self->head;
    i_536=0;
    while(it_535!=((void*)0)) {
        if(        position==i_536) {
            __result310__ = gComeFunResultObject = __result_obj__ = it_535->item;
            gComeFunResultObject = (void*)0;
            return __result310__;
        }
        it_535=it_535->next;
        i_536++;
    }
    memset(&default_value_537,0,sizeof(char*));
    __result311__ = gComeFunResultObject = __result_obj__ = default_value_537;
    default_value_537 = come_decrement_ref_count2(default_value_537, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj251;
struct sType* __dec_obj252;
char* __dec_obj253;
char* __dec_obj254;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj251=self->c_value;
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj252=self->type;
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj253=self->c_value_without_right_value_objects;
            __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj254=self->c_value_without_cast_object_value;
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_588;
unsigned int it_589;
_Bool same_key_exist_606;
char* it2_609;
struct map$2charphsClassph* __result337__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_588=string_get_hash_key(key)%self->size;
    it_589=hash_588;
    while((_Bool)1) {
        if(        self->item_existance[it_589]) {
            if(            charp_equals(self->keys[it_589],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_589]);
                    self->keys[it_589] = come_decrement_ref_count2(self->keys[it_589], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_589]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_589]);
                    self->keys[it_589]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_589],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_589]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_589]=item;
                }
                break;
            }
            it_589++;
            if(            it_589>=self->size) {
                it_589=0;
            }
            else if(            it_589==hash_588) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_589]=(_Bool)1;
            if(            1) {
                self->keys[it_589]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_589]=key;
            }
            if(            1) {
                self->items[it_589]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_589]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_606=(_Bool)0;
    for(    it2_609=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_609=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_609,key)) {
            same_key_exist_606=(_Bool)1;
        }
    }
    if(    !same_key_exist_606) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_571;
void* __right_value604 = (void*)0;
char** keys_572;
void* __right_value605 = (void*)0;
struct sClass** items_573;
void* __right_value606 = (void*)0;
_Bool* item_existance_574;
int len_575;
char* it_578;
struct sClass* default_value_581;
void* __right_value607 = (void*)0;
struct sClass* it2_582;
unsigned int hash_585;
int n_586;
struct sClass* default_value_587;
void* __right_value608 = (void*)0;
default_value_581 = (void*)0;
default_value_587 = (void*)0;
    size_571=self->size*10;
    keys_572=(char**)come_increment_ref_count(((char**)(__right_value604=(char**)come_calloc(1, sizeof(char*)*(1*(size_571)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_573=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value605=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_571)), "/usr/local/include/comelang.h", 2708, "struct sClass**", (void*)0, (void*)0, (void*)0))));
    item_existance_574=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value606=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_571)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_575=0;
    for(    it_578=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_578=map$2charphsClassphp_next(self)    ){
        memset(&default_value_581,0,sizeof(struct sClass*));
        it2_582=((struct sClass*)(__right_value607=map$2charphsClassphp_at(self,it_578,default_value_581)));
        come_call_finalizer3(__right_value607,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_585=string_get_hash_key(it_578)%size_571;
        n_586=hash_585;
        while((_Bool)1) {
            if(            item_existance_574[n_586]) {
                n_586++;
                if(                n_586>=size_571) {
                    n_586=0;
                }
                else if(                n_586==hash_585) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_574[n_586]=(_Bool)1;
                keys_572[n_586]=it_578;
                items_573[n_586]=((struct sClass*)(__right_value608=map$2charphsClassphp_at(self,it_578,default_value_587)));
                come_call_finalizer3(__right_value608,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_575++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_572;
    self->items=items_573;
    self->item_existance=item_existance_574;
    self->size=size_571;
    self->len=len_575;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_576;
char* __result317__;
char* __result318__;
char* result_577;
char* __result319__;
result_576 = (void*)0;
result_577 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_576,0,sizeof(char*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_576;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_577,0,sizeof(char*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_577;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_579;
char* __result320__;
char* __result321__;
char* result_580;
char* __result322__;
result_579 = (void*)0;
result_580 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_579,0,sizeof(char*));
        __result320__ = gComeFunResultObject = __result_obj__ = result_579;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result321__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    memset(&result_580,0,sizeof(char*));
    __result322__ = gComeFunResultObject = __result_obj__ = result_580;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_583;
unsigned int it_584;
struct sClass* __result323__;
struct sClass* __result324__;
struct sClass* __result325__;
struct sClass* __result326__;
    hash_583=string_get_hash_key(((char*)key))%self->size;
    it_584=hash_583;
    while((_Bool)1) {
        if(        self->item_existance[it_584]) {
            if(            charp_equals(self->keys[it_584],key)) {
                __result323__ = gComeFunResultObject = __result_obj__ = self->items[it_584];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result323__;
            }
            it_584++;
            if(            it_584>=self->size) {
                it_584=0;
            }
            else if(            it_584==hash_583) {
                __result324__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result324__;
            }
        }
        else {
            __result325__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result325__;
        }
    }
    __result326__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_590;
struct list_item$1charp* it_591;
struct list$1charp* __result330__;
    it2_590=0;
    it_591=self->head;
    while(it_591!=((void*)0)) {
        if(        charp_equals(it_591->item,item)) {
            list$1charpp_delete(self,it2_590,it2_590+1);
            break;
        }
        it2_590++;
        it_591=it_591->next;
    }
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_592;
struct list$1charp* __result327__;
struct list_item$1charp* it_595;
int i_596;
struct list_item$1charp* prev_it_597;
struct list_item$1charp* it_598;
int i_599;
struct list_item$1charp* prev_it_600;
struct list_item$1charp* it_601;
struct list_item$1charp* head_prev_it_602;
struct list_item$1charp* tail_it_603;
int i_604;
struct list_item$1charp* prev_it_605;
struct list$1charp* __result329__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_592=tail;
        tail=head;
        head=tmp_592;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result327__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_595=self->head;
        i_596=0;
        while(it_595!=((void*)0)) {
            if(            i_596<tail) {
                prev_it_597=it_595;
                it_595=it_595->next;
                i_596++;
                come_call_finalizer3(prev_it_597,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_596==tail) {
                self->head=it_595;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_595=it_595->next;
                i_596++;
            }
        }
    }
    else if(    tail==self->len) {
        it_598=self->head;
        i_599=0;
        while(it_598!=((void*)0)) {
            if(            i_599==head) {
                self->tail=it_598->prev;
                self->tail->next=((void*)0);
            }
            if(            i_599>=head) {
                prev_it_600=it_598;
                it_598=it_598->next;
                i_599++;
                come_call_finalizer3(prev_it_600,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_598=it_598->next;
                i_599++;
            }
        }
    }
    else {
        it_601=self->head;
        head_prev_it_602=((void*)0);
        tail_it_603=((void*)0);
        i_604=0;
        while(it_601!=((void*)0)) {
            if(            i_604==head) {
                head_prev_it_602=it_601->prev;
            }
            if(            i_604==tail) {
                tail_it_603=it_601;
            }
            if(            i_604>=head&&i_604<tail) {
                prev_it_605=it_601;
                it_601=it_601->next;
                i_604++;
                come_call_finalizer3(prev_it_605,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_601=it_601->next;
                i_604++;
            }
        }
        if(        head_prev_it_602!=((void*)0)) {
            head_prev_it_602->next=tail_it_603;
        }
        if(        tail_it_603!=((void*)0)) {
            tail_it_603->prev=head_prev_it_602;
        }
    }
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_593;
struct list_item$1charp* prev_it_594;
struct list$1charp* __result328__;
    it_593=self->head;
    while(it_593!=((void*)0)) {
        prev_it_594=it_593;
        it_593=it_593->next;
        come_call_finalizer3(prev_it_594,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_607;
char* __result331__;
char* __result332__;
char* result_608;
char* __result333__;
result_607 = (void*)0;
result_608 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_607,0,sizeof(char*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_607;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->it=self->head;
    if(    self->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_608,0,sizeof(char*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_608;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_610;
char* __result334__;
char* __result335__;
char* result_611;
char* __result336__;
result_610 = (void*)0;
result_611 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_610,0,sizeof(char*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_610;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_611,0,sizeof(char*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_611;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_632;
struct list$1sNodeph* __result339__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_632=0;    i_632<num_value;    i_632++    ){
        list$1sNodephp_push_back(self,values[i_632]);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result340__;
void* __right_value644 = (void*)0;
struct list$1sNodeph* result_634;
struct list$1sNodeph* __result341__;
    if(    self==(void*)0) {
        __result340__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    result_634=(struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "list$1sNodeph_clone", 3, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key));
    if(    self!=((void*)0)) {
        result_634->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_634->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_634->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_634->it=self->it;
    }
    __result341__ = gComeFunResultObject = __result_obj__ = result_634;
    come_call_finalizer3(result_634,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self){
unsigned int result_633;
    result_633=0;
    result_633+=int_get_hash_key(((int)self->head));
    result_633+=int_get_hash_key(((int)self->tail));
    result_633+=int_get_hash_key(((int)self->len));
    result_633+=int_get_hash_key(((int)self->it));
    return result_633;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_637;
int i_638;
void* default_value_639;
struct list$1voidph* __result342__;
struct list_item$1voidph* it_640;
int i_641;
void* __dec_obj291;
struct list$1voidph* __result343__;
default_value_639 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_637=self->len;
        for(        i_638=0;        i_638<position-len_637;        i_638++        ){
            memset(&default_value_639,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_639));
            come_call_finalizer3(default_value_639, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result342__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    it_640=self->head;
    i_641=0;
    while(it_640!=((void*)0)) {
        if(        position==i_641) {
            __dec_obj291=it_640->item;
            it_640->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj291,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_640=it_640->next;
        i_641++;
    }
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

