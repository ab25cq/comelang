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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
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
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static unsigned int sStrNode_get_hash_key(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
static unsigned int sNullReturnValue_get_hash_key(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
static unsigned int sNullReturnValueOfException_get_hash_key(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
static unsigned int sNullValue_get_hash_key(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static unsigned int sSStringNode_get_hash_key(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static unsigned int sBufferNode_get_hash_key(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static unsigned int sCharNode_get_hash_key(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static unsigned int sWCharNode_get_hash_key(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static unsigned int sWStringNode_get_hash_key(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static unsigned int sMapNode_get_hash_key(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
static unsigned int sListNode_get_hash_key(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static unsigned int sTupleNode_get_hash_key(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
static unsigned int sSomeNode_get_hash_key(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
static unsigned int sNoneNode_get_hash_key(struct sNoneNode* self);
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj32;
struct sStrNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sStrNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* come_value_292;
void* __right_value254 = (void*)0;
char* __dec_obj35;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* __dec_obj81;
_Bool __result238__;
    come_value_292=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj35=come_value_292->c_value;
    come_value_292->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_292->type;
    come_value_292->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_292->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_292));
    add_come_last_code(info,"%s",come_value_292->c_value);
    __result238__ = (_Bool)1;
    come_call_finalizer3(come_value_292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result238__;
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

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj33;
char* __dec_obj34;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj34=self->value;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
struct list$1voidph* __dec_obj41;
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
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj41,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
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

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_293;
struct list_item$1voidph* prev_it_294;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        prev_it_294=it_293;
        it_293=it_293->next;
        come_call_finalizer3(prev_it_294,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            come_call_finalizer3(__dec_obj42,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_295;
struct list_item$1voidph* prev_it_296;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        come_call_finalizer3(prev_it_296,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_297;
struct list_item$1sNodeph* prev_it_298;
    it_297=self->head;
    while(it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        come_call_finalizer3(prev_it_298,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_299;
struct list_item$1sNodeph* prev_it_300;
    it_299=self->head;
    while(it_299!=((void*)0)) {
        prev_it_300=it_299;
        it_299=it_299->next;
        come_call_finalizer3(prev_it_300,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_301;
struct list_item$1charph* prev_it_302;
    it_301=self->head;
    while(it_301!=((void*)0)) {
        prev_it_302=it_301;
        it_301=it_301->next;
        come_call_finalizer3(prev_it_302,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result222__;
void* __right_value255 = (void*)0;
struct sType* result_304;
void* __right_value256 = (void*)0;
struct sType* __dec_obj55;
void* __right_value257 = (void*)0;
struct sType* __dec_obj56;
void* __right_value258 = (void*)0;
struct sType* __dec_obj57;
void* __right_value259 = (void*)0;
char* __dec_obj58;
void* __right_value260 = (void*)0;
char* __dec_obj59;
void* __right_value267 = (void*)0;
struct list$1voidph* __dec_obj63;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __dec_obj67;
void* __right_value276 = (void*)0;
struct list$1voidph* __dec_obj68;
void* __right_value283 = (void*)0;
struct list$1charph* __dec_obj72;
void* __right_value284 = (void*)0;
struct sType* __dec_obj73;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value286 = (void*)0;
struct sType* __dec_obj75;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value288 = (void*)0;
char* __dec_obj77;
void* __right_value289 = (void*)0;
char* __dec_obj78;
void* __right_value290 = (void*)0;
char* __dec_obj79;
void* __right_value291 = (void*)0;
char* __dec_obj80;
struct sType* __result236__;
    if(    self==(void*)0) {
        __result222__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_304=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key));
    if(    self!=((void*)0)) {
        result_304->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj55=result_304->mNoSolvedGenericsType;
        result_304->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj56=result_304->mOriginalLoadVarType;
        result_304->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_304->mAnyOriginalType;
        result_304->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_304->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj58=result_304->mInterfaceName;
        result_304->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj59=result_304->mGenericsName;
        result_304->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj63=result_304->mGenericsTypes;
        result_304->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj63,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj67=result_304->mArrayNum;
        result_304->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj67,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_304->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_304->mParamTypes;
        result_304->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_304->mParamNames;
        result_304->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_304->mResultType;
        result_304->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_304->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj74=result_304->mAlignas;
        result_304->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj75=result_304->mChannelType;
        result_304->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_304->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_304->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_304->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_304->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_304->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_304->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_304->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_304->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_304->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_304->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_304->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_304->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_304->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_304->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_304->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_304->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_304->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_304->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_304->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_304->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_304->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_304->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_304->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_304->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj76=result_304->mSizeNum;
        result_304->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_304->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj77=result_304->mOriginalTypeName;
        result_304->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_304->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_304->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_304->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_304->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_304->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_304->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_304->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_304->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj78=result_304->mAsmName;
        result_304->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_304->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_304->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_304->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_304->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_304->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_304->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj79=result_304->mTupleName;
        result_304->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj80=result_304->mAttribute;
        result_304->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_304->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_304->mGenerate=self->mGenerate;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_304;
    come_call_finalizer3(result_304,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_303;
    result_303=0;
    result_303+=int_get_hash_key(((int)self->mClass));
    result_303+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_303+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_303+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_303+=int_get_hash_key(((int)self->mAnyClass));
    result_303+=int_get_hash_key(((int)self->mInterfaceName));
    result_303+=int_get_hash_key(((int)self->mGenericsName));
    result_303+=int_get_hash_key(((int)self->mGenericsTypes));
    result_303+=int_get_hash_key(((int)self->mArrayNum));
    result_303+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_303+=int_get_hash_key(((int)self->mParamTypes));
    result_303+=int_get_hash_key(((int)self->mParamNames));
    result_303+=int_get_hash_key(((int)self->mResultType));
    result_303+=int_get_hash_key(((int)self->mVarArgs));
    result_303+=int_get_hash_key(((int)self->mAlignas));
    result_303+=int_get_hash_key(((int)self->mChannelType));
    result_303+=int_get_hash_key(((int)self->mUnsigned));
    result_303+=int_get_hash_key(((int)self->mShort));
    result_303+=int_get_hash_key(((int)self->mLong));
    result_303+=int_get_hash_key(((int)self->mLongLong));
    result_303+=int_get_hash_key(((int)self->mConstant));
    result_303+=int_get_hash_key(((int)self->mAtomic));
    result_303+=int_get_hash_key(((int)self->mRegister));
    result_303+=int_get_hash_key(((int)self->mVolatile));
    result_303+=int_get_hash_key(((int)self->mStatic));
    result_303+=int_get_hash_key(((int)self->mUniq));
    result_303+=int_get_hash_key(((int)self->mRecord));
    result_303+=int_get_hash_key(((int)self->mExtern));
    result_303+=int_get_hash_key(((int)self->mRestrict));
    result_303+=int_get_hash_key(((int)self->mImmutable));
    result_303+=int_get_hash_key(((int)self->mHeap));
    result_303+=int_get_hash_key(((int)self->mChannel));
    result_303+=int_get_hash_key(((int)self->mNoHeap));
    result_303+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_303+=int_get_hash_key(((int)self->mException));
    result_303+=int_get_hash_key(((int)self->mPointerNum));
    result_303+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_303+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_303+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_303+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_303+=int_get_hash_key(((int)self->mSizeNum));
    result_303+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_303+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_303+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_303+=int_get_hash_key(((int)self->mFunctionParam));
    result_303+=int_get_hash_key(((int)self->mAllocaValue));
    result_303+=int_get_hash_key(((int)self->mGenericsStruct));
    result_303+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_303+=int_get_hash_key(((int)self->mInline));
    result_303+=int_get_hash_key(((int)self->mNullValue));
    result_303+=int_get_hash_key(((int)self->mGuardValue));
    result_303+=int_get_hash_key(((int)self->mAsmName));
    result_303+=int_get_hash_key(((int)self->mArrayPointerType));
    result_303+=int_get_hash_key(((int)self->mLambdaArray));
    result_303+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_303+=int_get_hash_key(((int)self->mTypedef));
    result_303+=int_get_hash_key(((int)self->mMultipleTypes));
    result_303+=int_get_hash_key(((int)self->mOriginIsArray));
    result_303+=int_get_hash_key(((int)self->mTupleName));
    result_303+=int_get_hash_key(((int)self->mAttribute));
    result_303+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_303+=int_get_hash_key(((int)self->mGenerate));
    return result_303;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result223__;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1voidph* result_306;
struct list_item$1voidph* it_307;
void* __right_value266 = (void*)0;
struct list$1voidph* __result226__;
    if(    self==((void*)0)) {
        __result223__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_306=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    it_307=self->head;
    while(it_307!=((void*)0)) {
        list$1voidphp_add(result_306,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_307->item)));
        it_307=it_307->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_306;
    come_call_finalizer3(result_306,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_305;
    result_305=0;
    result_305+=int_get_hash_key(((int)self->head));
    result_305+=int_get_hash_key(((int)self->tail));
    result_305+=int_get_hash_key(((int)self->len));
    result_305+=int_get_hash_key(((int)self->it));
    return result_305;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result224__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_308;
void* __dec_obj60;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_309;
void* __dec_obj61;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_310;
void* __dec_obj62;
struct list$1voidph* __result225__;
    if(    self->len==0) {
        litem_308=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj60=litem_308->item;
        litem_308->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1) {
        litem_309=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj61=litem_309->item;
        litem_309->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj62=litem_310->item;
        litem_310->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_310;
        self->tail=litem_310;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result227__;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sNodeph* result_311;
struct list_item$1sNodeph* it_312;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __result232__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_311=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    it_312=self->head;
    while(it_312!=((void*)0)) {
        list$1sNodephp_add(result_311,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_312->item)));
        it_312=it_312->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_311;
    come_call_finalizer3(result_311,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
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

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_313;
struct sNode* __dec_obj64;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_314;
struct sNode* __dec_obj65;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_315;
struct sNode* __dec_obj66;
struct list$1sNodeph* __result229__;
    if(    self->len==0) {
        litem_313=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_313->prev=((void*)0);
        litem_313->next=((void*)0);
        __dec_obj64=litem_313->item;
        litem_313->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_313;
        self->head=litem_313;
    }
    else if(    self->len==1) {
        litem_314=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_314->prev=self->head;
        litem_314->next=((void*)0);
        __dec_obj65=litem_314->item;
        litem_314->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_314;
        self->head->next=litem_314;
    }
    else {
        litem_315=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_315->prev=self->tail;
        litem_315->next=((void*)0);
        __dec_obj66=litem_315->item;
        litem_315->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_315;
        self->tail=litem_315;
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
void* __right_value273 = (void*)0;
struct sNode* result_316;
struct sNode* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_316=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_316->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_316->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_316->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_316->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_316->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_316->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_316->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_316->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_316->kind=self->kind;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_316;
    come_call_finalizer2((void*)0, result_316, result_316 ? ((struct sNode*)result_316)->finalize:(void*)0, result_316 ? ((struct sNode*)result_316)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result233__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* result_317;
struct list_item$1charph* it_318;
void* __right_value282 = (void*)0;
struct list$1charph* __result235__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_317=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    it_318=self->head;
    while(it_318!=((void*)0)) {
        list$1charphp_add(result_317,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_318->item)));
        it_318=it_318->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer3(result_317,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_319;
char* __dec_obj69;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_320;
char* __dec_obj70;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_321;
char* __dec_obj71;
struct list$1charph* __result234__;
    if(    self->len==0) {
        litem_319=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        __dec_obj69=litem_319->item;
        litem_319->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1) {
        litem_320=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        __dec_obj70=litem_320->item;
        litem_320->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        __dec_obj71=litem_321->item;
        litem_321->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1CVALUEph* litem_322;
struct CVALUE* __dec_obj82;
void* __right_value295 = (void*)0;
struct list_item$1CVALUEph* litem_323;
struct CVALUE* __dec_obj87;
void* __right_value296 = (void*)0;
struct list_item$1CVALUEph* litem_324;
struct CVALUE* __dec_obj88;
struct list$1CVALUEph* __result237__;
    if(    self->len==0) {
        litem_322=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value294=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj82=litem_322->item;
        litem_322->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1) {
        litem_323=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value295=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj87=litem_323->item;
        litem_323->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value296=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj88=litem_324->item;
        litem_324->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj83;
struct sType* __dec_obj84;
char* __dec_obj85;
char* __dec_obj86;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj83=self->c_value;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj84=self->type;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_right_value_objects;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj86=self->c_value_without_cast_object_value;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct buffer* __dec_obj89;
struct sBufferNode* __result239__;
    ((struct sNodeBase*)(__right_value297=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value297,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
char* __result240__;
    __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value298=__builtin_string("sBufferNode")));
    __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_325;
unsigned long  int size_326;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct CVALUE* come_value_327;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct buffer* buf_328;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* type2_329;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* any_type_330;
void* __right_value307 = (void*)0;
char* finalizer_name_331;
void* __right_value308 = (void*)0;
char* cloner_name_332;
void* __right_value309 = (void*)0;
char* get_hash_key_name_333;
void* __right_value310 = (void*)0;
_Bool _if_conditional1;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
_Bool _if_conditional2;
void* __right_value313 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_337=0;
char* name_338=0;
char* __dec_obj110;
void* __right_value314 = (void*)0;
_Bool _if_conditional3;
void* __right_value315 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_339=0;
char* name_340=0;
char* __dec_obj111;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sType* type2_341;
void* __right_value319 = (void*)0;
char* __dec_obj112;
void* __right_value320 = (void*)0;
struct sType* __dec_obj113;
_Bool __result245__;
    value_325=(struct buffer*)come_increment_ref_count(self->value);
    size_326=self->size;
    come_value_327=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    buf_328=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    type2_329=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"buffer",(_Bool)0,info));
    type2_329->mPointerNum++;
    any_type_330=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"buffer",(_Bool)0,info));
    any_type_330->mPointerNum=1;
    any_type_330->mHeap=(_Bool)1;
    finalizer_name_331=(char*)come_increment_ref_count(create_method_name(any_type_330,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_332=(char*)come_increment_ref_count(create_method_name(any_type_330,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_333=(char*)come_increment_ref_count(create_method_name(any_type_330,(_Bool)0,"get_hash_key",info,(_Bool)1));
    if(    (_if_conditional1=(((struct sFun*)(__right_value310=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_331)))==((void*)0))),    come_call_finalizer3(__right_value310,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value311=create_finalizer_automatically(any_type_330,"finalize",info)));
        come_call_finalizer3(__right_value311,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional2=(((struct sFun*)(__right_value312=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_332)))==((void*)0))),    come_call_finalizer3(__right_value312,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value313=create_cloner_automatically(any_type_330,"clone",info)));
        fun_337=multiple_assign_var1->v1;
        name_338=(char*)come_increment_ref_count(multiple_assign_var1->v2);
        come_call_finalizer3(__right_value313,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj110=cloner_name_332;
        cloner_name_332=(char*)come_increment_ref_count(name_338);
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_338 = come_decrement_ref_count2(name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional3=(((struct sFun*)(__right_value314=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_333)))==((void*)0))),    come_call_finalizer3(__right_value314,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional3) {
        multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value315=create_get_hash_key_automatically(any_type_330,"get_hash_key",info)));
        fun_339=multiple_assign_var2->v1;
        name_340=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        come_call_finalizer3(__right_value315,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj111=get_hash_key_name_333;
        get_hash_key_name_333=(char*)come_increment_ref_count(name_340);
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_340 = come_decrement_ref_count2(name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_format(buf_328,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_331,cloner_name_332,get_hash_key_name_333,((char*)(__right_value316=buffer_to_string(value_325))),size_326);
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(type2_329,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_341=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 83, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"buffer*",(_Bool)0,info));
    type2_341->mHeap=(_Bool)1;
    __dec_obj112=come_value_327->c_value;
    come_value_327->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_328));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=come_value_327->type;
    come_value_327->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_341));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_327->var=((void*)0);
    append_object_to_right_values2(come_value_327,(struct sType*)come_increment_ref_count(type2_341),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_327));
    add_come_last_code(info,"%s",come_value_327->c_value);
    __result245__ = (_Bool)1;
    come_call_finalizer3(value_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_328,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_331 = come_decrement_ref_count2(finalizer_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_332 = come_decrement_ref_count2(cloner_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_333 = come_decrement_ref_count2(get_hash_key_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_341,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result245__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj90;
struct buffer* __dec_obj91;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj90=self->sname;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj91=self->value;
            come_call_finalizer3(__dec_obj91,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_334;
unsigned int hash_335;
unsigned int it_336;
struct sFun* __result241__;
struct sFun* __result242__;
struct sFun* __result243__;
struct sFun* __result244__;
default_value_334 = (void*)0;
    memset(&default_value_334,0,sizeof(struct sFun*));
    hash_335=string_get_hash_key(((char*)key))%self->size;
    it_336=hash_335;
    while((_Bool)1) {
        if(        self->item_existance[it_336]) {
            if(            charp_equals(self->keys[it_336],key)) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_336];
                come_call_finalizer3(default_value_334,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_336++;
            if(            it_336>=self->size) {
                it_336=0;
            }
            else if(            it_336==hash_335) {
                __result242__ = gComeFunResultObject = __result_obj__ = default_value_334;
                come_call_finalizer3(default_value_334,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = default_value_334;
            come_call_finalizer3(default_value_334,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = default_value_334;
    come_call_finalizer3(default_value_334,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj92;
struct sType* __dec_obj93;
struct list$1voidph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct sType* __dec_obj97;
struct sBlock* __dec_obj98;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
struct buffer* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
char* __dec_obj107;
char* __dec_obj108;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj92=self->mName;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj93=self->mResultType;
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj94=self->mParamTypes;
            come_call_finalizer3(__dec_obj94,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj95=self->mParamNames;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj96=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj97=self->mLambdaType;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj98=self->mBlock;
            come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj101=self->mSource;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj103=self->mSourceHead2;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj104=self->mSourceDefer;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj105=self->mComeHeader;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj106=self->mDeclareSName;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj107=self->mAttribute;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj108=self->mFunAttribute;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj99;
struct sVarTable* __dec_obj100;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj99=self->mNodes;
            come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj100=self->mVarTable;
            come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj109;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj109=self->v2;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* __dec_obj114;
void* __right_value323 = (void*)0;
struct list$1sNodeph* __dec_obj115;
struct sSStringNode* __result246__;
    ((struct sNodeBase*)(__right_value321=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value321,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj114=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, exps));
    come_call_finalizer3(__dec_obj115,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value324 = (void*)0;
char* __result247__;
    __result247__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value324=__builtin_string("sSStringNode")));
    __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct CVALUE* come_value_342;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct buffer* buf_343;
struct list$1sNodeph* o2_saved_344;
struct sNode* it_347;
void* __right_value329 = (void*)0;
struct sNode* obj_350;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_351;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sNode* node_359;
_Bool Value_360;
_Bool __result259__;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_361;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sType* type2_362;
void* __right_value346 = (void*)0;
char* __dec_obj131;
void* __right_value347 = (void*)0;
struct sType* __dec_obj132;
_Bool __result260__;
    come_value_342=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 117, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    buf_343=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 119, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_343,"xsprintf(\"");
    buffer_append_str(buf_343,self->value);
    buffer_append_str(buf_343,"\"");
    if(    list$1sNodephp_length(self->exps)>0) {
        for(        o2_saved_344=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_347=list$1sNodephp_begin((o2_saved_344));        !list$1sNodephp_end((o2_saved_344));        it_347=list$1sNodephp_next((o2_saved_344))        ){
            obj_350=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_347));
            params_351=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 129, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_351,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 130, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_347)))));
            node_359=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_350),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_351),((void*)0),0,((void*)0),info));
            Value_360=node_compile(node_359,info);
            if(            !Value_360) {
                __result259__ = (_Bool)0;
                if(obj_350) { obj_350 = come_decrement_ref_count2(obj_350, ((struct sNode*)obj_350)->finalize, ((struct sNode*)obj_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_351,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_344,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_342,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result259__;
            }
            else {
            }
            come_value_361=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_343,",");
            buffer_append_str(buf_343,come_value_361->c_value);
            if(obj_350) { obj_350 = come_decrement_ref_count2(obj_350, ((struct sNode*)obj_350)->finalize, ((struct sNode*)obj_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_351,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_359) { node_359 = come_decrement_ref_count2(node_359, ((struct sNode*)node_359)->finalize, ((struct sNode*)node_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_361,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_344,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_343,")");
    type2_362=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 148, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info));
    type2_362->mHeap=(_Bool)1;
    __dec_obj131=come_value_342->c_value;
    come_value_342->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_343));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj132=come_value_342->type;
    come_value_342->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_362));
    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_342->var=((void*)0);
    append_object_to_right_values2(come_value_342,(struct sType*)come_increment_ref_count(type2_362),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_342));
    add_come_last_code(info,"%s",come_value_342->c_value);
    __result260__ = (_Bool)1;
    come_call_finalizer3(come_value_342,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_343,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_362,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result260__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj116;
char* __dec_obj117;
struct list$1sNodeph* __dec_obj118;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj116=self->sname;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj117=self->value;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj118=self->exps;
            come_call_finalizer3(__dec_obj118,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_345;
struct sNode* __result248__;
struct sNode* __result249__;
struct sNode* result_346;
struct sNode* __result250__;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_345,0,sizeof(struct sNode*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_345;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_346,0,sizeof(struct sNode*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_346;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_348;
struct sNode* __result251__;
struct sNode* __result252__;
struct sNode* result_349;
struct sNode* __result253__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_348,0,sizeof(struct sNode*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_349,0,sizeof(struct sNode*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result254__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_352;
struct list_item$1tuple2$2charphsNodephph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj119;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj119=self->item;
            come_call_finalizer3(__dec_obj119,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj120;
struct sNode* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_354;
struct tuple2$2charphsNodeph* __dec_obj122;
void* __right_value333 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_355;
struct tuple2$2charphsNodeph* __dec_obj123;
void* __right_value334 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_356;
struct tuple2$2charphsNodeph* __dec_obj124;
struct list$1tuple2$2charphsNodephph* __result255__;
    if(    self->len==0) {
        litem_354=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value332=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_354->prev=((void*)0);
        litem_354->next=((void*)0);
        __dec_obj122=litem_354->item;
        litem_354->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_354;
        self->head=litem_354;
    }
    else if(    self->len==1) {
        litem_355=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value333=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_355->prev=self->head;
        litem_355->next=((void*)0);
        __dec_obj123=litem_355->item;
        litem_355->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_355;
        self->head->next=litem_355;
    }
    else {
        litem_356=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value334=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_356->prev=self->tail;
        litem_356->next=((void*)0);
        __dec_obj124=litem_356->item;
        litem_356->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_356;
        self->tail=litem_356;
    }
    self->len++;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj125;
struct sNode* __dec_obj126;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj125=self->v1;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj126=self->v2;
            if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result256__;
void* __right_value337 = (void*)0;
struct tuple2$2charphsNodeph* result_358;
void* __right_value338 = (void*)0;
char* __dec_obj127;
void* __right_value339 = (void*)0;
struct sNode* __dec_obj128;
struct tuple2$2charphsNodeph* __result257__;
    if(    self==(void*)0) {
        __result256__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_358=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj127=result_358->v1;
        result_358->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj128=result_358->v2;
        result_358->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_358;
    come_call_finalizer3(result_358,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_357;
    result_357=0;
    result_357+=int_get_hash_key(((int)self->v1));
    result_357+=int_get_hash_key(((int)self->v2));
    return result_357;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj129;
struct sNode* __dec_obj130;
struct tuple2$2charphsNodeph* __result258__;
    __dec_obj129=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result258__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct sCharNode* __result261__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result262__;
    __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sCharNode")));
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_363;
void* __right_value352 = (void*)0;
char* __dec_obj134;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj135;
_Bool __result263__;
    come_value_363=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 181, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj134=come_value_363->c_value;
    come_value_363->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj135=come_value_363->type;
    come_value_363->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 184, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_363->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_363));
    add_come_last_code(info,"%s",come_value_363->c_value);
    __result263__ = (_Bool)1;
    come_call_finalizer3(come_value_363,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result263__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj133;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj133=self->sname;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
struct sWCharNode* __result264__;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value355,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
char* __result265__;
    __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value356=__builtin_string("sWCharNode")));
    __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_364;
void* __right_value359 = (void*)0;
char* __dec_obj137;
void* __right_value360 = (void*)0;
char* __dec_obj138;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj139;
_Bool __result266__;
    come_value_364=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 212, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj137=come_value_364->c_value;
        come_value_364->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj138=come_value_364->c_value;
        come_value_364->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj139=come_value_364->type;
    come_value_364->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 220, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_364->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_364));
    add_come_last_code(info,"%s",come_value_364->c_value);
    __result266__ = (_Bool)1;
    come_call_finalizer3(come_value_364,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result266__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj136;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj136=self->sname;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
int* __dec_obj140;
struct sWStringNode* __result267__;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value363,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj140=self->value;
    self->value=(int*)come_increment_ref_count(value);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
char* __result268__;
    __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value364=__builtin_string("sWStringNode")));
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_365;
void* __right_value367 = (void*)0;
char* __dec_obj143;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sType* __dec_obj144;
_Bool __result269__;
    come_value_365=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 247, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj143=come_value_365->c_value;
    come_value_365->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj144=come_value_365->type;
    come_value_365->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 250, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_365->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_365));
    add_come_last_code(info,"%s",come_value_365->c_value);
    __result269__ = (_Bool)1;
    come_call_finalizer3(come_value_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj141;
int* __dec_obj142;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj141=self->sname;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj142=self->value;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
char* __dec_obj145;
struct sRegexNode* __result270__;
    ((struct sNodeBase*)(__right_value370=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value370,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj145=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value372=__builtin_string("sRegexNode")));
    __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value378 = (void*)0;
struct sNode* obj_node_366;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_369;
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
struct sNode* node_370;
_Bool Value_371;
_Bool __result274__;
_Bool __result275__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 279, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value374=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 279, "struct sStrNode*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_366=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value374,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_369=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 281, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 283, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_366))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 284, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 285, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 286, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 287, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 288, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 289, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 290, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_369,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 291, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_370=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_366),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_369),((void*)0),info->sline,((void*)0),info));
    Value_371=node_compile(node_370,info);
    if(    !Value_371) {
        __result274__ = (_Bool)0;
        if(obj_node_366) { obj_node_366 = come_decrement_ref_count2(obj_node_366, ((struct sNode*)obj_node_366)->finalize, ((struct sNode*)obj_node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_369,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_370) { node_370 = come_decrement_ref_count2(node_370, ((struct sNode*)node_370)->finalize, ((struct sNode*)node_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result274__;
    }
    else {
    }
    __result275__ = (_Bool)1;
    if(obj_node_366) { obj_node_366 = come_decrement_ref_count2(obj_node_366, ((struct sNode*)obj_node_366)->finalize, ((struct sNode*)obj_node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params_369,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_370) { node_370 = come_decrement_ref_count2(node_370, ((struct sNode*)node_370)->finalize, ((struct sNode*)node_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result275__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj146;
char* __dec_obj147;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj146=self->sname;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj147=self->str;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result272__;
void* __right_value375 = (void*)0;
struct sStrNode* result_368;
void* __right_value376 = (void*)0;
char* __dec_obj148;
void* __right_value377 = (void*)0;
char* __dec_obj149;
struct sStrNode* __result273__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_368=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode", sStrNode_finalize, sStrNode_clone, sStrNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_368->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj148=result_368->sname;
        result_368->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_368->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj149=result_368->value;
        result_368->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_368;
    come_call_finalizer3(result_368,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static unsigned int sStrNode_get_hash_key(struct sStrNode* self){
unsigned int result_367;
    result_367=0;
    result_367+=int_get_hash_key(((int)self->sline));
    result_367+=int_get_hash_key(((int)self->sname));
    result_367+=int_get_hash_key(((int)self->sline_real));
    result_367+=int_get_hash_key(((int)self->value));
    return result_367;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
struct list$1sNodeph* __dec_obj150;
struct sListNode* __result276__;
    ((struct sNodeBase*)(__right_value417=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value417,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj150=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj150,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value418 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value418=__builtin_string("sListNode")));
    __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_372;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct list$1CVALUEph* params_373;
struct sType* list_element_type_376;
int n_377;
struct list$1sNodeph* o2_saved_378;
struct sNode* it_379;
void* __right_value421 = (void*)0;
_Bool _if_conditional4;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* value_node_380;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_381;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sNode* exp_382;
void* __right_value435 = (void*)0;
struct sNode* __dec_obj154;
_Bool Value_383;
_Bool __result279__;
_Bool Value_384;
_Bool __result280__;
void* __right_value436 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sType* __dec_obj155;
void* __right_value439 = (void*)0;
struct sType* type_values_386;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* var_name_391;
void* __right_value445 = (void*)0;
struct sVar* var__392;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct buffer* source_393;
int i_394;
struct list$1CVALUEph* o2_saved_395;
struct CVALUE* it_398;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
char* c_value_401;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sType* list_type_405;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* obj_type_409;
char* fun_name_410;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var3 = (void*)0;
char* name_411=0;
struct sGenericsFun* generics_fun_412=0;
char* generics_fun_name_413;
void* __right_value462 = (void*)0;
struct sFun* fun_414;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
char* __dec_obj163;
void* __right_value465 = (void*)0;
_Bool __result295__;
void* __right_value466 = (void*)0;
struct sType* result_type_417;
struct sType* type_418;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct CVALUE* obj_value_419;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct buffer* num_string_420;
void* __right_value471 = (void*)0;
struct sType* type2_421;
void* __right_value472 = (void*)0;
char* type_name_422;
struct sType* any_type_423;
void* __right_value473 = (void*)0;
char* finalizer_name_424;
void* __right_value474 = (void*)0;
char* cloner_name_425;
void* __right_value475 = (void*)0;
char* get_hash_key_name_426;
void* __right_value476 = (void*)0;
_Bool _if_conditional5;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
_Bool _if_conditional6;
void* __right_value479 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun_427=0;
char* name_428=0;
char* __dec_obj164;
void* __right_value480 = (void*)0;
_Bool _if_conditional7;
void* __right_value481 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_429=0;
char* name_430=0;
char* __dec_obj165;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
char* __dec_obj166;
void* __right_value484 = (void*)0;
struct sType* type3_431;
void* __right_value485 = (void*)0;
struct sType* __dec_obj167;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct list$1CVALUEph* come_params_432;
void* __right_value488 = (void*)0;
_Bool _if_conditional8;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct CVALUE* come_value2_436;
void* __right_value492 = (void*)0;
char* __dec_obj168;
struct sType* __dec_obj169;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct CVALUE* come_value3_437;
void* __right_value495 = (void*)0;
char* __dec_obj170;
struct sType* __dec_obj171;
int j_438;
struct list$1CVALUEph* o2_saved_439;
struct CVALUE* it_440;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct CVALUE* come_value4_441;
void* __right_value498 = (void*)0;
char* __dec_obj172;
void* __right_value499 = (void*)0;
struct sType* __dec_obj173;
_Bool __result298__;
    list_elements_372=self->list_elements;
    params_373=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 323, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    list_element_type_376=((void*)0);
    n_377=0;
    for(    o2_saved_378=(list_elements_372),it_379=list$1sNodephp_begin((o2_saved_378));    !list$1sNodephp_end((o2_saved_378));    it_379=list$1sNodephp_next((o2_saved_378))    ){
        if(        (_if_conditional4=(string_operator_equals(((char*)(__right_value421=it_379->kind(it_379->_protocol_obj))),"sWildCard"))),        (__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            value_node_380=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value422=xsprintf("Value"))),info));
            __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_381=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 331, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_381,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 332, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_380))));
            list$1tuple2$2charphsNodephphp_add(params_381,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 333, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_377,info)))));
            exp_382=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value433=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_380),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_381),((void*)0),0,((void*)0),info));
            __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj154=exp_382;
            exp_382=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_382,info));
            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
            Value_383=node_compile(exp_382,info);
            if(            !Value_383) {
                __result279__ = (_Bool)0;
                if(value_node_380) { value_node_380 = come_decrement_ref_count2(value_node_380, ((struct sNode*)value_node_380)->finalize, ((struct sNode*)value_node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_381,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_382) { exp_382 = come_decrement_ref_count2(exp_382, ((struct sNode*)exp_382)->finalize, ((struct sNode*)exp_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(params_373,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result279__;
            }
            else {
            }
            if(value_node_380) { value_node_380 = come_decrement_ref_count2(value_node_380, ((struct sNode*)value_node_380)->finalize, ((struct sNode*)value_node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(params_381,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_382) { exp_382 = come_decrement_ref_count2(exp_382, ((struct sNode*)exp_382)->finalize, ((struct sNode*)exp_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_384=node_compile(it_379,info);
            if(            !Value_384) {
                __result280__ = (_Bool)0;
                come_call_finalizer3(params_373,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result280__;
            }
            else {
            }
        }
        come_value_385=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_376) {
            check_assign_type(((char*)(__right_value437=xsprintf("invalid list element type"))),list_element_type_376,come_value_385->type,come_value_385,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(params_373,(struct CVALUE*)come_increment_ref_count(come_value_385));
        __dec_obj155=list_element_type_376;
        list_element_type_376=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_385->type));
        come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_377++;
        come_call_finalizer3(come_value_385,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_386=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_376));
    list$1sNodephp_push_back(type_values_386->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(params_373),info)));
    type_values_386->mHeap=(_Bool)0;
    static int list_value_num_390=0;
    var_name_391=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_390));
    add_variable_to_table(var_name_391,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_386)),info);
    var__392=get_variable_from_table(info->lv_table,var_name_391);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value446=make_define_var(type_values_386,var__392->mCValueName,(_Bool)0,info))));
    __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_393=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 374, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(source_393,"(");
    i_394=0;
    for(    o2_saved_395=(struct list$1CVALUEph*)come_increment_ref_count((params_373)),it_398=list$1CVALUEphp_begin((o2_saved_395));    !list$1CVALUEphp_end((o2_saved_395));    it_398=list$1CVALUEphp_next((o2_saved_395))    ){
        if(        list_element_type_376->mHeap) {
            c_value_401=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)(__right_value449=list$1CVALUEphp_operator_load_element(params_373,i_394)))->type,((struct CVALUE*)(__right_value450=list$1CVALUEphp_operator_load_element(params_373,i_394)))->c_value,info));
            come_call_finalizer3(__right_value449,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value450,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_393,"%s[%d]=%s,\n",var__392->mCValueName,i_394,c_value_401);
            c_value_401 = come_decrement_ref_count2(c_value_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_393,"%s[%d]=%s,\n",var__392->mCValueName,i_394,((struct CVALUE*)(__right_value452=list$1CVALUEphp_operator_load_element(params_373,i_394)))->c_value);
            come_call_finalizer3(__right_value452,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_394++;
    }
    come_call_finalizer3(o2_saved_395,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_405=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 394, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"list",(_Bool)0,info));
    list$1voidphp_push_back(list_type_405->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value458=come_call_cloner(sType_clone, list_element_type_376))))));
    come_call_finalizer3(__right_value458,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_409=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_405));
    fun_name_410="initialize_with_values";
    multiple_assign_var3=((struct tuple2$2charphsGenericsFunp*)(__right_value461=make_generics_function(obj_type_409,(char*)come_increment_ref_count(__builtin_string(fun_name_410)),info,(_Bool)1)));
    name_411=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_412=multiple_assign_var3->v2;
    come_call_finalizer3(__right_value461,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_413=(char*)come_increment_ref_count(name_411);
    fun_414=((struct sFun*)(__right_value462=map$2charphsFunphp_at(info->funcs,generics_fun_name_413,((void*)0))));
    come_call_finalizer3(__right_value462,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_414==((void*)0)) {
        __dec_obj163=generics_fun_name_413;
        generics_fun_name_413=(char*)come_increment_ref_count(create_method_name(obj_type_409,(_Bool)0,((char*)(__right_value463=__builtin_string(fun_name_410))),info,(_Bool)1));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_414=((struct sFun*)(__right_value465=map$2charphsFunphp_at(info->funcs,generics_fun_name_413,((void*)0))));
        come_call_finalizer3(__right_value465,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_414==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_413,info->come_fun->mName);
            __result295__ = (_Bool)1;
            come_call_finalizer3(params_373,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_386,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_391 = come_decrement_ref_count2(var_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_405,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_411 = come_decrement_ref_count2(name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_413 = come_decrement_ref_count2(generics_fun_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result295__;
        }
    }
    result_type_417=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_414->mResultType));
    result_type_417->mStatic=(_Bool)0;
    type_418=list_type_405;
    obj_value_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 421, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    num_string_420=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 423, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_420,"1");
    type2_421=(struct sType*)come_increment_ref_count(solve_generics(type_418,type_418,info));
    type_name_422=(char*)come_increment_ref_count(make_type_name_string(type2_421,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_423=(struct sType*)come_increment_ref_count(type2_421);
    any_type_423->mPointerNum=1;
    any_type_423->mHeap=(_Bool)1;
    finalizer_name_424=(char*)come_increment_ref_count(create_method_name(any_type_423,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_425=(char*)come_increment_ref_count(create_method_name(any_type_423,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_426=(char*)come_increment_ref_count(create_method_name(any_type_423,(_Bool)0,"get_hash_key",info,(_Bool)1));
    if(    (_if_conditional5=(((struct sFun*)(__right_value476=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_424)))==((void*)0))),    come_call_finalizer3(__right_value476,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional5) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value477=create_finalizer_automatically(any_type_423,"finalize",info)));
        come_call_finalizer3(__right_value477,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional6=(((struct sFun*)(__right_value478=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_425)))==((void*)0))),    come_call_finalizer3(__right_value478,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional6) {
        multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value479=create_cloner_automatically(any_type_423,"clone",info)));
        fun_427=multiple_assign_var4->v1;
        name_428=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        come_call_finalizer3(__right_value479,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj164=cloner_name_425;
        cloner_name_425=(char*)come_increment_ref_count(name_428);
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_428 = come_decrement_ref_count2(name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional7=(((struct sFun*)(__right_value480=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_426)))==((void*)0))),    come_call_finalizer3(__right_value480,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional7) {
        multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value481=create_get_hash_key_automatically(any_type_423,"get_hash_key",info)));
        fun_429=multiple_assign_var5->v1;
        name_430=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        come_call_finalizer3(__right_value481,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj165=get_hash_key_name_426;
        get_hash_key_name_426=(char*)come_increment_ref_count(name_430);
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_430 = come_decrement_ref_count2(name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj166=obj_value_419->c_value;
    obj_value_419->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s)",type_name_422,type_name_422,((char*)(__right_value482=buffer_to_string(num_string_420))),info->sname,info->sline,type_name_422,finalizer_name_424,cloner_name_425,get_hash_key_name_426));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_421));
    type3_431->mPointerNum++;
    type3_431->mHeap=(_Bool)1;
    type2_421->mHeap=(_Bool)1;
    __dec_obj167=obj_value_419->type;
    obj_value_419->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_421));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_419->type->mPointerNum++;
    obj_value_419->var=((void*)0);
    append_object_to_right_values2(obj_value_419,(struct sType*)come_increment_ref_count(type3_431),info,(_Bool)0);
    come_params_432=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 463, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional8=(((struct sType*)((void*)(__right_value488=list$1voidphp_operator_load_element(fun_414->mParamTypes,0))))->mHeap&&obj_value_419->type->mHeap)),    come_call_finalizer3(__right_value488,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional8) {
        std_move(((struct sType*)((void*)(__right_value489=list$1voidphp_operator_load_element(fun_414->mParamTypes,0)))),obj_value_419->type,obj_value_419,info,(_Bool)1);
        come_call_finalizer3(__right_value489,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_432,(struct CVALUE*)come_increment_ref_count(obj_value_419));
    come_value2_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 470, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj168=come_value2_436->c_value;
    come_value2_436->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(params_373)));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=come_value2_436->type;
    come_value2_436->type=((void*)0);
    come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_436->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_432,(struct CVALUE*)come_increment_ref_count(come_value2_436));
    come_value3_437=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 478, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj170=come_value3_437->c_value;
    come_value3_437->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__392->mCValueName));
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj171=come_value3_437->type;
    come_value3_437->type=((void*)0);
    come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_437->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_432,(struct CVALUE*)come_increment_ref_count(come_value3_437));
    buffer_append_str(source_393,generics_fun_name_413);
    buffer_append_str(source_393,"(");
    j_438=0;
    for(    o2_saved_439=(struct list$1CVALUEph*)come_increment_ref_count((come_params_432)),it_440=list$1CVALUEphp_begin((o2_saved_439));    !list$1CVALUEphp_end((o2_saved_439));    it_440=list$1CVALUEphp_next((o2_saved_439))    ){
        buffer_append_str(source_393,it_440->c_value);
        if(        j_438!=list$1CVALUEphp_length(come_params_432)-1) {
            buffer_append_str(source_393,",");
        }
        j_438++;
    }
    come_call_finalizer3(o2_saved_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_393,")");
    buffer_append_str(source_393,")");
    come_value4_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 504, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj172=come_value4_441->c_value;
    come_value4_441->c_value=(char*)come_increment_ref_count(buffer_to_string(source_393));
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=come_value4_441->type;
    come_value4_441->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_417));
    come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_441->type->mStatic=(_Bool)0;
    come_value4_441->var=((void*)0);
    if(    result_type_417->mHeap) {
        append_object_to_right_values2(come_value4_441,(struct sType*)come_increment_ref_count(result_type_417),info,(_Bool)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_441));
    add_come_last_code(info,"%s",come_value4_441->c_value);
    __result298__ = (_Bool)1;
    come_call_finalizer3(params_373,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_376,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_386,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_391 = come_decrement_ref_count2(var_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_393,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_405,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_411 = come_decrement_ref_count2(name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_413 = come_decrement_ref_count2(generics_fun_name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_417,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_420,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_422 = come_decrement_ref_count2(type_name_422, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_424 = come_decrement_ref_count2(finalizer_name_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_425 = come_decrement_ref_count2(cloner_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_426 = come_decrement_ref_count2(get_hash_key_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_432,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_441,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj151;
struct list$1sNodeph* __dec_obj152;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj152=self->list_elements;
            come_call_finalizer3(__dec_obj152,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result278__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_374;
struct list_item$1CVALUEph* prev_it_375;
    it_374=self->head;
    while(it_374!=((void*)0)) {
        prev_it_375=it_374;
        it_374=it_374->next;
        come_call_finalizer3(prev_it_375,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj153;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj153=self->item;
            come_call_finalizer3(__dec_obj153,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value440 = (void*)0;
struct list_item$1sNodeph* litem_387;
struct sNode* __dec_obj156;
void* __right_value441 = (void*)0;
struct list_item$1sNodeph* litem_388;
struct sNode* __dec_obj157;
void* __right_value442 = (void*)0;
struct list_item$1sNodeph* litem_389;
struct sNode* __dec_obj158;
struct list$1sNodeph* __result281__;
    if(    self->len==0) {
        litem_387=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value440=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_387->prev=((void*)0);
        litem_387->next=((void*)0);
        __dec_obj156=litem_387->item;
        litem_387->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_387;
        self->head=litem_387;
    }
    else if(    self->len==1) {
        litem_388=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value441=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->head;
        litem_388->next=((void*)0);
        __dec_obj157=litem_388->item;
        litem_388->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_388;
        self->head->next=litem_388;
    }
    else {
        litem_389=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value442=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_389->prev=self->tail;
        litem_389->next=((void*)0);
        __dec_obj158=litem_389->item;
        litem_389->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_389;
        self->tail=litem_389;
    }
    self->len++;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_396;
struct CVALUE* __result282__;
struct CVALUE* __result283__;
struct CVALUE* result_397;
struct CVALUE* __result284__;
result_396 = (void*)0;
result_397 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_396,0,sizeof(struct CVALUE*));
        __result282__ = gComeFunResultObject = __result_obj__ = result_396;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    self->it=self->head;
    if(    self->it) {
        __result283__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    memset(&result_397,0,sizeof(struct CVALUE*));
    __result284__ = gComeFunResultObject = __result_obj__ = result_397;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_399;
struct CVALUE* __result285__;
struct CVALUE* __result286__;
struct CVALUE* result_400;
struct CVALUE* __result287__;
result_399 = (void*)0;
result_400 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_399,0,sizeof(struct CVALUE*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_399;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_400,0,sizeof(struct CVALUE*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_400;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_402;
int i_403;
struct CVALUE* __result288__;
struct CVALUE* default_value_404;
struct CVALUE* __result289__;
default_value_404 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_402=self->head;
    i_403=0;
    while(it_402!=((void*)0)) {
        if(        position==i_403) {
            __result288__ = gComeFunResultObject = __result_obj__ = it_402->item;
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
        it_402=it_402->next;
        i_403++;
    }
    memset(&default_value_404,0,sizeof(struct CVALUE*));
    __result289__ = gComeFunResultObject = __result_obj__ = default_value_404;
    come_call_finalizer3(default_value_404,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value455 = (void*)0;
struct list_item$1voidph* litem_406;
void* __dec_obj159;
void* __right_value456 = (void*)0;
struct list_item$1voidph* litem_407;
void* __dec_obj160;
void* __right_value457 = (void*)0;
struct list_item$1voidph* litem_408;
void* __dec_obj161;
struct list$1voidph* __result290__;
    if(    self->len==0) {
        litem_406=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value455=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_406->prev=((void*)0);
        litem_406->next=((void*)0);
        __dec_obj159=litem_406->item;
        litem_406->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj159,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_406;
        self->head=litem_406;
    }
    else if(    self->len==1) {
        litem_407=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value456=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_407->prev=self->head;
        litem_407->next=((void*)0);
        __dec_obj160=litem_407->item;
        litem_407->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj160,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_407;
        self->head->next=litem_407;
    }
    else {
        litem_408=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value457=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_408->prev=self->tail;
        litem_408->next=((void*)0);
        __dec_obj161=litem_408->item;
        litem_408->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj161,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_408;
        self->tail=litem_408;
    }
    self->len++;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj162;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj162=self->v1;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_415;
unsigned int it_416;
struct sFun* __result291__;
struct sFun* __result292__;
struct sFun* __result293__;
struct sFun* __result294__;
    hash_415=string_get_hash_key(((char*)key))%self->size;
    it_416=hash_415;
    while((_Bool)1) {
        if(        self->item_existance[it_416]) {
            if(            charp_equals(self->keys[it_416],key)) {
                __result291__ = gComeFunResultObject = __result_obj__ = self->items[it_416];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result291__;
            }
            it_416++;
            if(            it_416>=self->size) {
                it_416=0;
            }
            else if(            it_416==hash_415) {
                __result292__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
        }
        else {
            __result293__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result293__;
        }
    }
    __result294__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_433;
int i_434;
void* __result296__;
void* default_value_435;
void* __result297__;
default_value_435 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_433=self->head;
    i_434=0;
    while(it_433!=((void*)0)) {
        if(        position==i_434) {
            __result296__ = gComeFunResultObject = __result_obj__ = it_433->item;
            gComeFunResultObject = (void*)0;
            return __result296__;
        }
        it_433=it_433->next;
        i_434++;
    }
    memset(&default_value_435,0,sizeof(void*));
    __result297__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_435);
    come_call_finalizer3(default_value_435, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value500 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj174;
struct sTupleNode* __result299__;
    ((struct sNodeBase*)(__right_value500=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value500,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj174=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj174,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value501 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value501=__builtin_string("sTupleNode")));
    __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_444;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1voidph* tuple_types_445;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1CVALUEph* tuple_values_446;
int n_447;
struct list$1tuple2$2charphsNodephph* o2_saved_448;
struct tuple2$2charphsNodeph* it_451;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* name_454=0;
struct sNode* node_455=0;
void* __right_value506 = (void*)0;
_Bool _if_conditional9;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* value_node_456;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* exp_457;
_Bool Value_458;
_Bool __result307__;
_Bool Value_459;
_Bool __result308__;
void* __right_value511 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* type_463;
char* __dec_obj181;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* type_464;
struct list$1voidph* o2_saved_465;
struct sType* it_468;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct CVALUE* obj_value_471;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct buffer* num_string_472;
void* __right_value527 = (void*)0;
struct sType* type2_473;
void* __right_value528 = (void*)0;
char* type_name_474;
struct sType* any_type_475;
void* __right_value529 = (void*)0;
char* finalizer_name_476;
void* __right_value530 = (void*)0;
char* cloner_name_477;
void* __right_value531 = (void*)0;
char* get_hash_key_name_478;
void* __right_value532 = (void*)0;
_Bool _if_conditional10;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
_Bool _if_conditional11;
void* __right_value535 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_479=0;
char* name_480=0;
char* __dec_obj182;
void* __right_value536 = (void*)0;
_Bool _if_conditional12;
void* __right_value537 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun_481=0;
char* name_482=0;
char* __dec_obj183;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
char* __dec_obj184;
void* __right_value540 = (void*)0;
struct sType* type3_483;
void* __right_value541 = (void*)0;
struct sType* __dec_obj185;
void* __right_value542 = (void*)0;
struct sType* obj_type_484;
char* fun_name_485;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var9 = (void*)0;
char* name_486=0;
struct sGenericsFun* generics_fun_487=0;
char* generics_fun_name_488;
void* __right_value545 = (void*)0;
struct sFun* fun_489;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
char* __dec_obj186;
void* __right_value548 = (void*)0;
_Bool __result317__;
void* __right_value549 = (void*)0;
struct sType* result_type_490;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1CVALUEph* come_params_491;
void* __right_value552 = (void*)0;
_Bool _if_conditional13;
void* __right_value553 = (void*)0;
int i_492;
struct list$1CVALUEph* o2_saved_493;
struct CVALUE* it_494;
void* __right_value554 = (void*)0;
struct CVALUE* come_value_495;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
_Bool _if_conditional14;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct buffer* buf_496;
int j_497;
struct list$1CVALUEph* o2_saved_498;
struct CVALUE* it_499;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct CVALUE* come_value2_500;
void* __right_value562 = (void*)0;
char* __dec_obj187;
void* __right_value563 = (void*)0;
struct sType* __dec_obj188;
_Bool __result318__;
    tuple_elements_444=self->tuple_elements;
    tuple_types_445=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 541, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    tuple_values_446=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 542, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    n_447=0;
    for(    o2_saved_448=(tuple_elements_444),it_451=list$1tuple2$2charphsNodephphp_begin((o2_saved_448));    !list$1tuple2$2charphsNodephphp_end((o2_saved_448));    it_451=list$1tuple2$2charphsNodephphp_next((o2_saved_448))    ){
        multiple_assign_var6=it_451;
        name_454=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_455=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional9=(string_operator_equals(((char*)(__right_value506=node_455->kind(node_455->_protocol_obj))),"sWildCard"))),        (__right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional9) {
            value_node_456=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value507=xsprintf("Value"))),info));
            __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_457=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_456),(char*)come_increment_ref_count(xsprintf("v%d",n_447+1)),info));
            Value_458=node_compile(exp_457,info);
            if(            !Value_458) {
                __result307__ = (_Bool)0;
                if(value_node_456) { value_node_456 = come_decrement_ref_count2(value_node_456, ((struct sNode*)value_node_456)->finalize, ((struct sNode*)value_node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_457) { exp_457 = come_decrement_ref_count2(exp_457, ((struct sNode*)exp_457)->finalize, ((struct sNode*)exp_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_445,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result307__;
            }
            else {
            }
            if(value_node_456) { value_node_456 = come_decrement_ref_count2(value_node_456, ((struct sNode*)value_node_456)->finalize, ((struct sNode*)value_node_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_457) { exp_457 = come_decrement_ref_count2(exp_457, ((struct sNode*)exp_457)->finalize, ((struct sNode*)exp_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_459=node_compile(node_455,info);
            if(            !Value_459) {
                __result308__ = (_Bool)0;
                name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(tuple_types_445,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result308__;
            }
            else {
            }
        }
        come_value_460=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_446,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_460)));
        type_463=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_460->type));
        __dec_obj181=type_463->mTupleName;
        type_463->mTupleName=(char*)come_increment_ref_count(name_454);
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1voidphp_push_back(tuple_types_445,(struct sType*)come_increment_ref_count(type_463));
        n_447++;
        name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_455) { node_455 = come_decrement_ref_count2(node_455, ((struct sNode*)node_455)->finalize, ((struct sNode*)node_455)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_463,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_464=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 572, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value520=xsprintf("tuple%d",list$1voidphp_length(tuple_types_445)))),(_Bool)0,info));
    __right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_465=(struct list$1voidph*)come_increment_ref_count((tuple_types_445)),it_468=((struct sType*)list$1voidphp_begin((o2_saved_465)));    !list$1voidphp_end((o2_saved_465));    it_468=((struct sType*)list$1voidphp_next((o2_saved_465)))    ){
        list$1voidphp_push_back(type_464->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value522=come_call_cloner(sType_clone, it_468))))));
        come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_465,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_471=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 578, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    num_string_472=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 580, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_472,"1");
    type2_473=(struct sType*)come_increment_ref_count(solve_generics(type_464,type_464,info));
    type_name_474=(char*)come_increment_ref_count(make_type_name_string(type2_473,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_475=(struct sType*)come_increment_ref_count(type2_473);
    any_type_475->mPointerNum=1;
    any_type_475->mHeap=(_Bool)1;
    finalizer_name_476=(char*)come_increment_ref_count(create_method_name(any_type_475,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_477=(char*)come_increment_ref_count(create_method_name(any_type_475,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_478=(char*)come_increment_ref_count(create_method_name(any_type_475,(_Bool)0,"get_hash_key",info,(_Bool)1));
    if(    (_if_conditional10=(((struct sFun*)(__right_value532=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_476)))==((void*)0))),    come_call_finalizer3(__right_value532,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional10) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value533=create_finalizer_automatically(any_type_475,"finalize",info)));
        come_call_finalizer3(__right_value533,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional11=(((struct sFun*)(__right_value534=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_477)))==((void*)0))),    come_call_finalizer3(__right_value534,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional11) {
        multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value535=create_cloner_automatically(any_type_475,"clone",info)));
        fun_479=multiple_assign_var7->v1;
        name_480=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer3(__right_value535,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj182=cloner_name_477;
        cloner_name_477=(char*)come_increment_ref_count(name_480);
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_480 = come_decrement_ref_count2(name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional12=(((struct sFun*)(__right_value536=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_478)))==((void*)0))),    come_call_finalizer3(__right_value536,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional12) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value537=create_get_hash_key_automatically(any_type_475,"get_hash_key",info)));
        fun_481=multiple_assign_var8->v1;
        name_482=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value537,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj183=get_hash_key_name_478;
        get_hash_key_name_478=(char*)come_increment_ref_count(name_482);
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_482 = come_decrement_ref_count2(name_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj184=obj_value_471->c_value;
    obj_value_471->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s)",type_name_474,type_name_474,((char*)(__right_value538=buffer_to_string(num_string_472))),info->sname,info->sline,type_name_474,finalizer_name_476,cloner_name_477,get_hash_key_name_478));
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_483=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_473));
    type3_483->mPointerNum++;
    type3_483->mHeap=(_Bool)1;
    type2_473->mHeap=(_Bool)1;
    __dec_obj185=obj_value_471->type;
    obj_value_471->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_473));
    come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_471->type->mPointerNum++;
    obj_value_471->var=((void*)0);
    append_object_to_right_values2(obj_value_471,(struct sType*)come_increment_ref_count(type3_483),info,(_Bool)0);
    obj_type_484=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_473));
    fun_name_485="initialize";
    multiple_assign_var9=((struct tuple2$2charphsGenericsFunp*)(__right_value544=make_generics_function(obj_type_484,(char*)come_increment_ref_count(__builtin_string(fun_name_485)),info,(_Bool)1)));
    name_486=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    generics_fun_487=multiple_assign_var9->v2;
    come_call_finalizer3(__right_value544,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_488=(char*)come_increment_ref_count(name_486);
    fun_489=((struct sFun*)(__right_value545=map$2charphsFunphp_at(info->funcs,generics_fun_name_488,((void*)0))));
    come_call_finalizer3(__right_value545,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_489==((void*)0)) {
        __dec_obj186=generics_fun_name_488;
        generics_fun_name_488=(char*)come_increment_ref_count(create_method_name(obj_type_484,(_Bool)0,((char*)(__right_value546=__builtin_string(fun_name_485))),info,(_Bool)1));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_489=((struct sFun*)(__right_value548=map$2charphsFunphp_at(info->funcs,generics_fun_name_488,((void*)0))));
        come_call_finalizer3(__right_value548,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_489==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_488,info->come_fun->mName);
            __result317__ = (_Bool)1;
            come_call_finalizer3(tuple_types_445,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_472,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_473,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_474 = come_decrement_ref_count2(type_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(any_type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
            finalizer_name_476 = come_decrement_ref_count2(finalizer_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_477 = come_decrement_ref_count2(cloner_name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            get_hash_key_name_478 = come_decrement_ref_count2(get_hash_key_name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_483,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_486 = come_decrement_ref_count2(name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_488 = come_decrement_ref_count2(generics_fun_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result317__;
        }
    }
    result_type_490=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_489->mResultType));
    result_type_490->mStatic=(_Bool)0;
    come_params_491=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 642, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional13=(((struct sType*)((void*)(__right_value552=list$1voidphp_operator_load_element(fun_489->mParamTypes,0))))->mHeap&&obj_value_471->type->mHeap)),    come_call_finalizer3(__right_value552,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional13) {
        std_move(((struct sType*)((void*)(__right_value553=list$1voidphp_operator_load_element(fun_489->mParamTypes,0)))),obj_value_471->type,obj_value_471,info,(_Bool)1);
        come_call_finalizer3(__right_value553,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_491,(struct CVALUE*)come_increment_ref_count(obj_value_471));
    i_492=1;
    for(    o2_saved_493=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_446)),it_494=list$1CVALUEphp_begin((o2_saved_493));    !list$1CVALUEphp_end((o2_saved_493));    it_494=list$1CVALUEphp_next((o2_saved_493))    ){
        come_value_495=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_494));
        if(        (_if_conditional14=(((struct sType*)((void*)(__right_value555=list$1voidphp_operator_load_element(fun_489->mParamTypes,i_492))))&&((struct sType*)((void*)(__right_value556=list$1voidphp_operator_load_element(fun_489->mParamTypes,i_492))))->mHeap&&come_value_495->type->mHeap)),        come_call_finalizer3(__right_value555,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value556,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            std_move(((struct sType*)((void*)(__right_value557=list$1voidphp_operator_load_element(fun_489->mParamTypes,i_492)))),come_value_495->type,come_value_495,info,(_Bool)1);
            come_call_finalizer3(__right_value557,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_491,(struct CVALUE*)come_increment_ref_count(come_value_495));
        i_492++;
        come_call_finalizer3(come_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_493,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_496=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 661, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_496,generics_fun_name_488);
    buffer_append_str(buf_496,"(");
    j_497=0;
    for(    o2_saved_498=(struct list$1CVALUEph*)come_increment_ref_count((come_params_491)),it_499=list$1CVALUEphp_begin((o2_saved_498));    !list$1CVALUEphp_end((o2_saved_498));    it_499=list$1CVALUEphp_next((o2_saved_498))    ){
        buffer_append_str(buf_496,it_499->c_value);
        if(        j_497!=list$1CVALUEphp_length(come_params_491)-1) {
            buffer_append_str(buf_496,",");
        }
        j_497++;
    }
    come_call_finalizer3(o2_saved_498,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_496,")");
    come_value2_500=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 678, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj187=come_value2_500->c_value;
    come_value2_500->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_496));
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj188=come_value2_500->type;
    come_value2_500->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_490));
    come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_500->type->mStatic=(_Bool)0;
    come_value2_500->var=((void*)0);
    if(    result_type_490->mHeap) {
        append_object_to_right_values2(come_value2_500,(struct sType*)come_increment_ref_count(result_type_490),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_500->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_500));
    __result318__ = (_Bool)1;
    come_call_finalizer3(tuple_types_445,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_472,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_473,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_474 = come_decrement_ref_count2(type_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_476 = come_decrement_ref_count2(finalizer_name_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_477 = come_decrement_ref_count2(cloner_name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_478 = come_decrement_ref_count2(get_hash_key_name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_486 = come_decrement_ref_count2(name_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_488 = come_decrement_ref_count2(generics_fun_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_500,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result318__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_442;
struct list_item$1tuple2$2charphsNodephph* prev_it_443;
    it_442=self->head;
    while(it_442!=((void*)0)) {
        prev_it_443=it_442;
        it_442=it_442->next;
        come_call_finalizer3(prev_it_443,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj175;
struct list$1tuple2$2charphsNodephph* __dec_obj176;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj175=self->sname;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj176=self->tuple_elements;
            come_call_finalizer3(__dec_obj176,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_449;
struct tuple2$2charphsNodeph* __result301__;
struct tuple2$2charphsNodeph* __result302__;
struct tuple2$2charphsNodeph* result_450;
struct tuple2$2charphsNodeph* __result303__;
result_449 = (void*)0;
result_450 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_449,0,sizeof(struct tuple2$2charphsNodeph*));
        __result301__ = gComeFunResultObject = __result_obj__ = result_449;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    self->it=self->head;
    if(    self->it) {
        __result302__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    memset(&result_450,0,sizeof(struct tuple2$2charphsNodeph*));
    __result303__ = gComeFunResultObject = __result_obj__ = result_450;
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_452;
struct tuple2$2charphsNodeph* __result304__;
struct tuple2$2charphsNodeph* __result305__;
struct tuple2$2charphsNodeph* result_453;
struct tuple2$2charphsNodeph* __result306__;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_452,0,sizeof(struct tuple2$2charphsNodeph*));
        __result304__ = gComeFunResultObject = __result_obj__ = result_452;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result305__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    memset(&result_453,0,sizeof(struct tuple2$2charphsNodeph*));
    __result306__ = gComeFunResultObject = __result_obj__ = result_453;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result309__;
void* __right_value512 = (void*)0;
struct CVALUE* result_462;
void* __right_value513 = (void*)0;
char* __dec_obj177;
void* __right_value514 = (void*)0;
struct sType* __dec_obj178;
void* __right_value515 = (void*)0;
char* __dec_obj179;
void* __right_value516 = (void*)0;
char* __dec_obj180;
struct CVALUE* __result310__;
    if(    self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_462=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj177=result_462->c_value;
        result_462->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj178=result_462->type;
        result_462->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_462->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_462->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj179=result_462->c_value_without_right_value_objects;
        result_462->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj180=result_462->c_value_without_cast_object_value;
        result_462->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_462;
    come_call_finalizer3(result_462,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_461;
    result_461=0;
    result_461+=int_get_hash_key(((int)self->c_value));
    result_461+=int_get_hash_key(((int)self->type));
    result_461+=int_get_hash_key(((int)self->var));
    result_461+=int_get_hash_key(((int)self->right_value_objects));
    result_461+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_461+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_461;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_466;
void* __result311__;
void* __result312__;
void* result_467;
void* __result313__;
result_466 = (void*)0;
result_467 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_466,0,sizeof(void*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_466;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->head;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_467,0,sizeof(void*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_467;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_469;
void* __result314__;
void* __result315__;
void* result_470;
void* __result316__;
result_469 = (void*)0;
result_470 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_469,0,sizeof(void*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_469;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_470,0,sizeof(void*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_470;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
struct list$1sNodeph* __dec_obj189;
struct sSomeNode* __result319__;
    ((struct sNodeBase*)(__right_value564=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value564,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj189=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj189,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value565 = (void*)0;
char* __result320__;
    __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value565=__builtin_string("sSomeNode")));
    __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_501;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1voidph* tuple_types_502;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1CVALUEph* tuple_values_503;
struct list$1sNodeph* o2_saved_504;
struct sNode* it_505;
_Bool Value_506;
_Bool __result321__;
void* __right_value570 = (void*)0;
struct CVALUE* come_value_507;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sType* type_508;
struct list$1voidph* o2_saved_509;
struct sType* it_510;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct CVALUE* obj_value_511;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct buffer* num_string_512;
void* __right_value581 = (void*)0;
struct sType* type2_513;
void* __right_value582 = (void*)0;
char* type_name_514;
void* __right_value583 = (void*)0;
char* finalizer_name_515;
void* __right_value584 = (void*)0;
char* cloner_name_516;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
char* __dec_obj192;
void* __right_value587 = (void*)0;
struct sType* type3_517;
void* __right_value588 = (void*)0;
struct sType* __dec_obj193;
void* __right_value589 = (void*)0;
struct sType* obj_type_518;
char* fun_name_519;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var10 = (void*)0;
char* name_520=0;
struct sGenericsFun* generics_fun_521=0;
char* generics_fun_name_522;
void* __right_value592 = (void*)0;
struct sFun* fun_523;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
char* __dec_obj194;
void* __right_value595 = (void*)0;
_Bool __result322__;
void* __right_value596 = (void*)0;
struct sType* result_type_524;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1CVALUEph* come_params_525;
void* __right_value599 = (void*)0;
_Bool _if_conditional15;
void* __right_value600 = (void*)0;
int i_526;
struct list$1CVALUEph* o2_saved_527;
struct CVALUE* it_528;
void* __right_value601 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
_Bool _if_conditional16;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct buffer* buf_530;
int j_531;
struct list$1CVALUEph* o2_saved_532;
struct CVALUE* it_533;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct CVALUE* come_value2_534;
void* __right_value609 = (void*)0;
char* __dec_obj195;
void* __right_value610 = (void*)0;
struct sType* __dec_obj196;
_Bool __result323__;
    tuple_elements_501=self->tuple_elements;
    tuple_types_502=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 715, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    tuple_values_503=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 716, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_504=(tuple_elements_501),it_505=list$1sNodephp_begin((o2_saved_504));    !list$1sNodephp_end((o2_saved_504));    it_505=list$1sNodephp_next((o2_saved_504))    ){
        Value_506=node_compile(it_505,info);
        if(        !Value_506) {
            __result321__ = (_Bool)0;
            come_call_finalizer3(tuple_types_502,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_503,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result321__;
        }
        else {
        }
        come_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_503,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_507)));
        list$1voidphp_push_back(tuple_types_502,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_507->type)));
        come_call_finalizer3(come_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 730, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value574=xsprintf("tuple%d",list$1voidphp_length(tuple_types_502)))),(_Bool)0,info));
    __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_509=(struct list$1voidph*)come_increment_ref_count((tuple_types_502)),it_510=((struct sType*)list$1voidphp_begin((o2_saved_509)));    !list$1voidphp_end((o2_saved_509));    it_510=((struct sType*)list$1voidphp_next((o2_saved_509)))    ){
        list$1voidphp_push_back(type_508->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value576=come_call_cloner(sType_clone, it_510))))));
        come_call_finalizer3(__right_value576,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_509,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_511=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 736, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    num_string_512=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 738, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_512,"1");
    type2_513=(struct sType*)come_increment_ref_count(solve_generics(type_508,type_508,info));
    type_name_514=(char*)come_increment_ref_count(make_type_name_string(type2_513,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_515=(char*)come_increment_ref_count(create_method_name(type2_513,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_516=(char*)come_increment_ref_count(create_method_name(type2_513,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj192=obj_value_511->c_value;
    obj_value_511->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0)",type_name_514,type_name_514,((char*)(__right_value585=buffer_to_string(num_string_512))),info->sname,info->sline,type_name_514));
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_517=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_513));
    type3_517->mPointerNum++;
    type3_517->mHeap=(_Bool)1;
    type2_513->mHeap=(_Bool)1;
    __dec_obj193=obj_value_511->type;
    obj_value_511->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_513));
    come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_511->type->mPointerNum++;
    obj_value_511->var=((void*)0);
    append_object_to_right_values2(obj_value_511,(struct sType*)come_increment_ref_count(type3_517),info,(_Bool)0);
    obj_type_518=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_513));
    fun_name_519="initialize";
    multiple_assign_var10=((struct tuple2$2charphsGenericsFunp*)(__right_value591=make_generics_function(obj_type_518,(char*)come_increment_ref_count(__builtin_string(fun_name_519)),info,(_Bool)1)));
    name_520=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    generics_fun_521=multiple_assign_var10->v2;
    come_call_finalizer3(__right_value591,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_522=(char*)come_increment_ref_count(name_520);
    fun_523=((struct sFun*)(__right_value592=map$2charphsFunphp_at(info->funcs,generics_fun_name_522,((void*)0))));
    come_call_finalizer3(__right_value592,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_523==((void*)0)) {
        __dec_obj194=generics_fun_name_522;
        generics_fun_name_522=(char*)come_increment_ref_count(create_method_name(obj_type_518,(_Bool)0,((char*)(__right_value593=__builtin_string(fun_name_519))),info,(_Bool)1));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_523=((struct sFun*)(__right_value595=map$2charphsFunphp_at(info->funcs,generics_fun_name_522,((void*)0))));
        come_call_finalizer3(__right_value595,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_523==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_522,info->come_fun->mName);
            __result322__ = (_Bool)1;
            come_call_finalizer3(tuple_types_502,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_503,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_512,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_513,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_514 = come_decrement_ref_count2(type_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_515 = come_decrement_ref_count2(finalizer_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_516 = come_decrement_ref_count2(cloner_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_517,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_520 = come_decrement_ref_count2(name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_522 = come_decrement_ref_count2(generics_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result322__;
        }
    }
    result_type_524=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_523->mResultType));
    result_type_524->mStatic=(_Bool)0;
    come_params_525=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 792, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional15=(((struct sType*)((void*)(__right_value599=list$1voidphp_operator_load_element(fun_523->mParamTypes,0))))->mHeap&&obj_value_511->type->mHeap)),    come_call_finalizer3(__right_value599,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional15) {
        std_move(((struct sType*)((void*)(__right_value600=list$1voidphp_operator_load_element(fun_523->mParamTypes,0)))),obj_value_511->type,obj_value_511,info,(_Bool)1);
        come_call_finalizer3(__right_value600,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_525,(struct CVALUE*)come_increment_ref_count(obj_value_511));
    i_526=1;
    for(    o2_saved_527=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_503)),it_528=list$1CVALUEphp_begin((o2_saved_527));    !list$1CVALUEphp_end((o2_saved_527));    it_528=list$1CVALUEphp_next((o2_saved_527))    ){
        come_value_529=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_528));
        if(        (_if_conditional16=(((struct sType*)((void*)(__right_value602=list$1voidphp_operator_load_element(fun_523->mParamTypes,i_526))))&&((struct sType*)((void*)(__right_value603=list$1voidphp_operator_load_element(fun_523->mParamTypes,i_526))))->mHeap&&come_value_529->type->mHeap)),        come_call_finalizer3(__right_value602,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value603,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional16) {
            std_move(((struct sType*)((void*)(__right_value604=list$1voidphp_operator_load_element(fun_523->mParamTypes,i_526)))),come_value_529->type,come_value_529,info,(_Bool)1);
            come_call_finalizer3(__right_value604,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_525,(struct CVALUE*)come_increment_ref_count(come_value_529));
        i_526++;
        come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_527,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 811, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_530,generics_fun_name_522);
    buffer_append_str(buf_530,"(");
    j_531=0;
    for(    o2_saved_532=(struct list$1CVALUEph*)come_increment_ref_count((come_params_525)),it_533=list$1CVALUEphp_begin((o2_saved_532));    !list$1CVALUEphp_end((o2_saved_532));    it_533=list$1CVALUEphp_next((o2_saved_532))    ){
        buffer_append_str(buf_530,it_533->c_value);
        if(        j_531!=list$1CVALUEphp_length(come_params_525)-1) {
            buffer_append_str(buf_530,",");
        }
        j_531++;
    }
    come_call_finalizer3(o2_saved_532,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_530,")");
    come_value2_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 828, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj195=come_value2_534->c_value;
    come_value2_534->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_530));
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj196=come_value2_534->type;
    come_value2_534->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_524));
    come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_534->type->mStatic=(_Bool)0;
    come_value2_534->var=((void*)0);
    if(    result_type_524->mHeap) {
        append_object_to_right_values2(come_value2_534,(struct sType*)come_increment_ref_count(result_type_524),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_534->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_534));
    __result323__ = (_Bool)1;
    come_call_finalizer3(tuple_types_502,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_503,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_512,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_513,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_514 = come_decrement_ref_count2(type_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_515 = come_decrement_ref_count2(finalizer_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_516 = come_decrement_ref_count2(cloner_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_517,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_520 = come_decrement_ref_count2(name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_522 = come_decrement_ref_count2(generics_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_525,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_530,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result323__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj190;
struct list$1sNodeph* __dec_obj191;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj190=self->sname;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj191=self->tuple_elements;
            come_call_finalizer3(__dec_obj191,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value611 = (void*)0;
struct sNullReturnValue* __result324__;
    ((struct sNodeBase*)(__right_value611=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value611,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value612 = (void*)0;
char* __result325__;
    __result325__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value612=__builtin_string("sNullReturnValue")));
    __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_535;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct buffer* buf_536;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* var_name_538;
void* __right_value619 = (void*)0;
struct sType* result_type_539;
void* __right_value620 = (void*)0;
struct sType* result_type2_540;
struct sType* left_type_541;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct CVALUE* come_value2_542;
char* __dec_obj198;
struct sType* __dec_obj199;
    if(    info->come_fun) {
        come_value_535=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 863, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
        buf_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 865, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        static int num_537=0;
        num_537++;
        var_name_538=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value617=int_to_string(num_537)))));
        __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_539=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_540=(struct sType*)come_increment_ref_count(solve_generics(result_type_539,info->generics_type,info));
        left_type_541=(struct sType*)come_increment_ref_count(result_type2_540);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value621=make_define_var(left_type_541,var_name_538,(_Bool)0,info))));
        __right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_538,((char*)(__right_value622=make_type_name_string(left_type_541,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value622 = come_decrement_ref_count2(__right_value622, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_542=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 881, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
        __dec_obj198=come_value2_542->c_value;
        come_value2_542->c_value=(char*)come_increment_ref_count(var_name_538);
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj199=come_value2_542->type;
        come_value2_542->type=(struct sType*)come_increment_ref_count(result_type2_540);
        come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_542->type->mStatic=(_Bool)0;
        come_value2_542->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_542));
        come_call_finalizer3(come_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_536,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_540,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_541,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_542,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj197;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj197=self->sname;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value629 = (void*)0;
struct sNode* __result328__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 898, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value626=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 898, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value629=_inf_value2));
    come_call_finalizer3(__right_value626,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value629) { __right_value629 = come_decrement_ref_count2(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result326__;
void* __right_value627 = (void*)0;
struct sNullReturnValue* result_544;
void* __right_value628 = (void*)0;
char* __dec_obj200;
struct sNullReturnValue* __result327__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_544=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue", sNullReturnValue_finalize, sNullReturnValue_clone, sNullReturnValue_get_hash_key));
    if(    self!=((void*)0)) {
        result_544->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_544->sname;
        result_544->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_544->sline_real=self->sline_real;
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_544;
    come_call_finalizer3(result_544,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static unsigned int sNullReturnValue_get_hash_key(struct sNullReturnValue* self){
unsigned int result_543;
    result_543=0;
    result_543+=int_get_hash_key(((int)self->sline));
    result_543+=int_get_hash_key(((int)self->sname));
    result_543+=int_get_hash_key(((int)self->sline_real));
    return result_543;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value630 = (void*)0;
struct sNullReturnValueOfException* __result329__;
    ((struct sNodeBase*)(__right_value630=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value630,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value631 = (void*)0;
char* __result330__;
    __result330__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value631=__builtin_string("sNullReturnValue")));
    __right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct CVALUE* come_value_545;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct buffer* buf_546;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
char* var_name_548;
void* __right_value638 = (void*)0;
struct sType* result_type_549;
void* __right_value639 = (void*)0;
struct sType* result_type2_550;
struct sType* __dec_obj202;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sType* left_type_551;
_Bool __result331__;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct CVALUE* come_value2_552;
char* __dec_obj203;
struct sType* __dec_obj204;
    if(    info->come_fun) {
        come_value_545=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 916, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
        buf_546=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 918, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        static int num_547=0;
        num_547++;
        var_name_548=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value636=int_to_string(num_547)))));
        __right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_549=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_550=(struct sType*)come_increment_ref_count(solve_generics(result_type_549,info->generics_type,info));
        if(        result_type2_550->mNoSolvedGenericsType) {
            __dec_obj202=result_type2_550;
            result_type2_550=(struct sType*)come_increment_ref_count(result_type2_550->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_551=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value640=list$1voidphp_operator_load_element(result_type2_550->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value640,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        left_type_551==((void*)0)||string_operator_not_equals(result_type2_550->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result331__ = (_Bool)0;
            come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
            var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_550,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_551,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result331__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value642=make_define_var(left_type_551,var_name_548,(_Bool)0,info))));
        __right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_548,((char*)(__right_value643=make_type_name_string(left_type_551,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_552=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 943, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
        __dec_obj203=come_value2_552->c_value;
        come_value2_552->c_value=(char*)come_increment_ref_count(var_name_548);
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj204=come_value2_552->type;
        come_value2_552->type=(struct sType*)come_increment_ref_count(left_type_551);
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_552->type->mStatic=(_Bool)0;
        come_value2_552->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_552));
        come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
        var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_550,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_551,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_552,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj201;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj201=self->sname;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value650 = (void*)0;
struct sNode* __result334__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 960, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value647=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 960, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value650=_inf_value3));
    come_call_finalizer3(__right_value647,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value650) { __right_value650 = come_decrement_ref_count2(__right_value650, ((struct sNode*)__right_value650)->finalize, ((struct sNode*)__right_value650)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result332__;
void* __right_value648 = (void*)0;
struct sNullReturnValueOfException* result_554;
void* __right_value649 = (void*)0;
char* __dec_obj205;
struct sNullReturnValueOfException* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_554=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException", sNullReturnValueOfException_finalize, sNullReturnValueOfException_clone, sNullReturnValueOfException_get_hash_key));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj205=result_554->sname;
        result_554->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_554;
    come_call_finalizer3(result_554,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static unsigned int sNullReturnValueOfException_get_hash_key(struct sNullReturnValueOfException* self){
unsigned int result_553;
    result_553=0;
    result_553+=int_get_hash_key(((int)self->sline));
    result_553+=int_get_hash_key(((int)self->sname));
    result_553+=int_get_hash_key(((int)self->sline_real));
    return result_553;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value651 = (void*)0;
struct sType* __dec_obj206;
struct sNullValue* __result335__;
    ((struct sNodeBase*)(__right_value651=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value651,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj206=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value652 = (void*)0;
char* __result336__;
    __result336__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value652=__builtin_string("sNullValue")));
    __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct CVALUE* come_value_555;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct buffer* buf_556;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* var_name_558;
struct sType* left_type_559;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct CVALUE* come_value2_560;
char* __dec_obj209;
struct sType* __dec_obj210;
_Bool __result337__;
    come_value_555=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 979, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    buf_556=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 981, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    static int num_557=0;
    num_557++;
    var_name_558=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value657=int_to_string(num_557)))));
    __right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_559=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value659=make_define_var(left_type_559,var_name_558,(_Bool)0,info))));
    __right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_558,((char*)(__right_value660=make_type_name_string(left_type_559,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    __right_value660 = come_decrement_ref_count2(__right_value660, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_560=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 993, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj209=come_value2_560->c_value;
    come_value2_560->c_value=(char*)come_increment_ref_count(var_name_558);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj210=come_value2_560->type;
    come_value2_560->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_560->type->mStatic=(_Bool)0;
    come_value2_560->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_560));
    __result337__ = (_Bool)1;
    come_call_finalizer3(come_value_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_556,buffer_finalize, 0, 0, 0, 0, (void*)0);
    var_name_558 = come_decrement_ref_count2(var_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_559,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result337__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj207;
struct sType* __dec_obj208;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj207=self->sname;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj208=self->type;
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value668 = (void*)0;
struct sNode* __result340__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1009, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value664=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 1009, "struct sNullValue*", (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value668=_inf_value4));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value664,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value668) { __right_value668 = come_decrement_ref_count2(__right_value668, ((struct sNode*)__right_value668)->finalize, ((struct sNode*)__right_value668)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result338__;
void* __right_value665 = (void*)0;
struct sNullValue* result_562;
void* __right_value666 = (void*)0;
char* __dec_obj211;
void* __right_value667 = (void*)0;
struct sType* __dec_obj212;
struct sNullValue* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_562=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue", sNullValue_finalize, sNullValue_clone, sNullValue_get_hash_key));
    if(    self!=((void*)0)) {
        result_562->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_562->sname;
        result_562->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_562->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj212=result_562->type;
        result_562->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_562;
    come_call_finalizer3(result_562,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static unsigned int sNullValue_get_hash_key(struct sNullValue* self){
unsigned int result_561;
    result_561=0;
    result_561+=int_get_hash_key(((int)self->sline));
    result_561+=int_get_hash_key(((int)self->sname));
    result_561+=int_get_hash_key(((int)self->sline_real));
    result_561+=int_get_hash_key(((int)self->type));
    return result_561;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value669 = (void*)0;
struct list$1sNodeph* __dec_obj213;
struct sNoneNode* __result341__;
    ((struct sNodeBase*)(__right_value669=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value669,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj213,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value670 = (void*)0;
char* __result342__;
    __result342__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value670=__builtin_string("sNoneNode")));
    __right_value670 = come_decrement_ref_count2(__right_value670, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_563;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct list$1voidph* tuple_types_564;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct list$1CVALUEph* tuple_values_565;
int i_566;
struct list$1sNodeph* o2_saved_567;
struct sNode* it_568;
_Bool Value_569;
_Bool __result343__;
void* __right_value675 = (void*)0;
struct CVALUE* come_value_570;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* string_type_571;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sType* type_572;
struct list$1voidph* o2_saved_573;
struct sType* it_574;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct CVALUE* obj_value_575;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct buffer* num_string_576;
void* __right_value689 = (void*)0;
struct sType* type2_577;
void* __right_value690 = (void*)0;
char* type_name_578;
void* __right_value691 = (void*)0;
char* finalizer_name_579;
void* __right_value692 = (void*)0;
char* cloner_name_580;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* __dec_obj216;
void* __right_value695 = (void*)0;
struct sType* type3_581;
void* __right_value696 = (void*)0;
struct sType* __dec_obj217;
void* __right_value697 = (void*)0;
struct sType* obj_type_582;
char* fun_name_583;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var11 = (void*)0;
char* name_584=0;
struct sGenericsFun* generics_fun_585=0;
char* generics_fun_name_586;
void* __right_value700 = (void*)0;
struct sFun* fun_587;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
char* __dec_obj218;
void* __right_value703 = (void*)0;
_Bool __result344__;
void* __right_value704 = (void*)0;
struct sType* result_type_588;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1CVALUEph* come_params_589;
void* __right_value707 = (void*)0;
_Bool _if_conditional17;
void* __right_value708 = (void*)0;
struct list$1CVALUEph* o2_saved_590;
struct CVALUE* it_591;
void* __right_value709 = (void*)0;
struct CVALUE* come_value_592;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
_Bool _if_conditional18;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct buffer* buf_593;
int j_594;
struct list$1CVALUEph* o2_saved_595;
struct CVALUE* it_596;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct CVALUE* come_value2_597;
void* __right_value717 = (void*)0;
char* __dec_obj219;
void* __right_value718 = (void*)0;
struct sType* __dec_obj220;
_Bool __result345__;
    tuple_elements_563=self->tuple_elements;
    tuple_types_564=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1029, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    tuple_values_565=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1030, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    i_566=0;
    for(    o2_saved_567=(tuple_elements_563),it_568=list$1sNodephp_begin((o2_saved_567));    !list$1sNodephp_end((o2_saved_567));    it_568=list$1sNodephp_next((o2_saved_567))    ){
        Value_569=node_compile(it_568,info);
        if(        !Value_569) {
            __result343__ = (_Bool)0;
            come_call_finalizer3(tuple_types_564,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result343__;
        }
        else {
        }
        come_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_565,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_570)));
        list$1voidphp_push_back(tuple_types_564,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_570->type)));
        if(        i_566==1) {
            string_type_571=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1045, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"char*",(_Bool)0,info));
            string_type_571->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value680=xsprintf("invalid none type"))),string_type_571,come_value_570->type,come_value_570,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value680 = come_decrement_ref_count2(__right_value680, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(string_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_566++;
        come_call_finalizer3(come_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_572=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1053, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),((char*)(__right_value682=xsprintf("tuple%d",list$1voidphp_length(tuple_types_564)))),(_Bool)0,info));
    __right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_573=(struct list$1voidph*)come_increment_ref_count((tuple_types_564)),it_574=((struct sType*)list$1voidphp_begin((o2_saved_573)));    !list$1voidphp_end((o2_saved_573));    it_574=((struct sType*)list$1voidphp_next((o2_saved_573)))    ){
        list$1voidphp_push_back(type_572->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value684=come_call_cloner(sType_clone, it_574))))));
        come_call_finalizer3(__right_value684,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_573,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_575=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1059, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    num_string_576=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1061, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_576,"1");
    type2_577=(struct sType*)come_increment_ref_count(solve_generics(type_572,type_572,info));
    type_name_578=(char*)come_increment_ref_count(make_type_name_string(type2_577,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    finalizer_name_579=(char*)come_increment_ref_count(create_method_name(type2_577,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_580=(char*)come_increment_ref_count(create_method_name(type2_577,(_Bool)0,"clone",info,(_Bool)1));
    __dec_obj216=obj_value_575->c_value;
    obj_value_575->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0)",type_name_578,type_name_578,((char*)(__right_value693=buffer_to_string(num_string_576))),info->sname,info->sline,type_name_578));
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_581=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_577));
    type3_581->mPointerNum++;
    type3_581->mHeap=(_Bool)1;
    type2_577->mHeap=(_Bool)1;
    __dec_obj217=obj_value_575->type;
    obj_value_575->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_577));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_575->type->mPointerNum++;
    obj_value_575->var=((void*)0);
    append_object_to_right_values2(obj_value_575,(struct sType*)come_increment_ref_count(type3_581),info,(_Bool)0);
    obj_type_582=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_577));
    fun_name_583="initialize";
    multiple_assign_var11=((struct tuple2$2charphsGenericsFunp*)(__right_value699=make_generics_function(obj_type_582,(char*)come_increment_ref_count(__builtin_string(fun_name_583)),info,(_Bool)1)));
    name_584=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_585=multiple_assign_var11->v2;
    come_call_finalizer3(__right_value699,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_586=(char*)come_increment_ref_count(name_584);
    fun_587=((struct sFun*)(__right_value700=map$2charphsFunphp_at(info->funcs,generics_fun_name_586,((void*)0))));
    come_call_finalizer3(__right_value700,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_587==((void*)0)) {
        __dec_obj218=generics_fun_name_586;
        generics_fun_name_586=(char*)come_increment_ref_count(create_method_name(obj_type_582,(_Bool)0,((char*)(__right_value701=__builtin_string(fun_name_583))),info,(_Bool)1));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_587=((struct sFun*)(__right_value703=map$2charphsFunphp_at(info->funcs,generics_fun_name_586,((void*)0))));
        come_call_finalizer3(__right_value703,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_587==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_586,info->come_fun->mName);
            __result344__ = (_Bool)1;
            come_call_finalizer3(tuple_types_564,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_575,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_576,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_577,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_578 = come_decrement_ref_count2(type_name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            finalizer_name_579 = come_decrement_ref_count2(finalizer_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cloner_name_580 = come_decrement_ref_count2(cloner_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_581,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_584 = come_decrement_ref_count2(name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_586 = come_decrement_ref_count2(generics_fun_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result344__;
        }
    }
    result_type_588=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_587->mResultType));
    result_type_588->mStatic=(_Bool)0;
    come_params_589=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1115, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional17=(((struct sType*)((void*)(__right_value707=list$1voidphp_operator_load_element(fun_587->mParamTypes,0))))->mHeap&&obj_value_575->type->mHeap)),    come_call_finalizer3(__right_value707,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional17) {
        std_move(((struct sType*)((void*)(__right_value708=list$1voidphp_operator_load_element(fun_587->mParamTypes,0)))),obj_value_575->type,obj_value_575,info,(_Bool)1);
        come_call_finalizer3(__right_value708,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_589,(struct CVALUE*)come_increment_ref_count(obj_value_575));
    i_566=1;
    for(    o2_saved_590=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_565)),it_591=list$1CVALUEphp_begin((o2_saved_590));    !list$1CVALUEphp_end((o2_saved_590));    it_591=list$1CVALUEphp_next((o2_saved_590))    ){
        come_value_592=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_591));
        if(        (_if_conditional18=(((struct sType*)((void*)(__right_value710=list$1voidphp_operator_load_element(fun_587->mParamTypes,i_566))))&&((struct sType*)((void*)(__right_value711=list$1voidphp_operator_load_element(fun_587->mParamTypes,i_566))))->mHeap&&come_value_592->type->mHeap)),        come_call_finalizer3(__right_value710,(void*)0, 0, 1, 0, 0, (void*)0),
        come_call_finalizer3(__right_value711,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional18) {
            std_move(((struct sType*)((void*)(__right_value712=list$1voidphp_operator_load_element(fun_587->mParamTypes,i_566)))),come_value_592->type,come_value_592,info,(_Bool)1);
            come_call_finalizer3(__right_value712,(void*)0, 0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_589,(struct CVALUE*)come_increment_ref_count(come_value_592));
        i_566++;
        come_call_finalizer3(come_value_592,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_590,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_593=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1134, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_593,generics_fun_name_586);
    buffer_append_str(buf_593,"(");
    j_594=0;
    for(    o2_saved_595=(struct list$1CVALUEph*)come_increment_ref_count((come_params_589)),it_596=list$1CVALUEphp_begin((o2_saved_595));    !list$1CVALUEphp_end((o2_saved_595));    it_596=list$1CVALUEphp_next((o2_saved_595))    ){
        buffer_append_str(buf_593,it_596->c_value);
        if(        j_594!=list$1CVALUEphp_length(come_params_589)-1) {
            buffer_append_str(buf_593,",");
        }
        j_594++;
    }
    come_call_finalizer3(o2_saved_595,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_593,")");
    come_value2_597=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1151, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj219=come_value2_597->c_value;
    come_value2_597->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_593));
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj220=come_value2_597->type;
    come_value2_597->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_588));
    come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_597->type->mStatic=(_Bool)0;
    come_value2_597->var=((void*)0);
    if(    result_type_588->mHeap) {
        append_object_to_right_values2(come_value2_597,(struct sType*)come_increment_ref_count(result_type_588),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_597->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_597));
    __result345__ = (_Bool)1;
    come_call_finalizer3(tuple_types_564,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_575,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_576,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_577,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_578 = come_decrement_ref_count2(type_name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    finalizer_name_579 = come_decrement_ref_count2(finalizer_name_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_580 = come_decrement_ref_count2(cloner_name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_581,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_584 = come_decrement_ref_count2(name_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_586 = come_decrement_ref_count2(generics_fun_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_588,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_589,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_593,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_597,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result345__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj214;
struct list$1sNodeph* __dec_obj215;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj214=self->sname;
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj215=self->tuple_elements;
            come_call_finalizer3(__dec_obj215,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value719 = (void*)0;
struct list$1sNodeph* __dec_obj221;
struct list$1sNodeph* __dec_obj222;
struct sMapNode* __result346__;
    ((struct sNodeBase*)(__right_value719=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value719,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj221=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj221,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj222=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj222,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value720 = (void*)0;
char* __result347__;
    __result347__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value720=__builtin_string("sMapNode")));
    __right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_598;
struct list$1sNodeph* map_elements_599;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct list$1CVALUEph* key_params_600;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct list$1CVALUEph* element_params_601;
struct sType* map_key_type_602;
struct sType* map_element_type_603;
int i_604;
void* __right_value725 = (void*)0;
struct sNode* key_elements_605;
void* __right_value726 = (void*)0;
struct sNode* elements_609;
void* __right_value727 = (void*)0;
_Bool _if_conditional19;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sNode* value_node_610;
struct sNode* exp_611;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_612;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* __dec_obj226;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_613;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj227;
void* __right_value748 = (void*)0;
struct sNode* __dec_obj228;
_Bool Value_614;
_Bool __result350__;
void* __right_value749 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value750 = (void*)0;
struct sType* __dec_obj229;
_Bool Value_616;
_Bool __result351__;
void* __right_value751 = (void*)0;
struct CVALUE* come_value_617;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sType* __dec_obj230;
void* __right_value754 = (void*)0;
_Bool _if_conditional20;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sNode* value_node_618;
struct sNode* exp2_619;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_620;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj231;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_621;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj232;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj233;
_Bool Value_622;
_Bool __result352__;
void* __right_value776 = (void*)0;
struct CVALUE* come_value2_623;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sType* __dec_obj234;
_Bool Value_624;
_Bool __result353__;
void* __right_value779 = (void*)0;
struct CVALUE* come_value2_625;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sType* __dec_obj235;
void* __right_value782 = (void*)0;
struct sType* key_type_values_627;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
char* var_name_628;
void* __right_value785 = (void*)0;
struct sVar* var__629;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sType* element_type_values_630;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
char* var_name2_631;
void* __right_value790 = (void*)0;
struct sVar* var2__632;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct buffer* source_633;
int i_634;
void* __right_value794 = (void*)0;
struct CVALUE* key_param_635;
void* __right_value795 = (void*)0;
struct CVALUE* element_param_636;
void* __right_value796 = (void*)0;
char* c_value_637;
void* __right_value797 = (void*)0;
char* c_value_638;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sType* map_type_639;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sType* obj_type_640;
char* fun_name_641;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var12 = (void*)0;
char* name_642=0;
struct sGenericsFun* generics_fun_643=0;
char* generics_fun_name_644;
void* __right_value805 = (void*)0;
struct sFun* fun_645;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
char* __dec_obj236;
void* __right_value808 = (void*)0;
_Bool __result354__;
void* __right_value809 = (void*)0;
struct sType* result_type_646;
struct sType* type_647;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct CVALUE* obj_value_648;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct buffer* num_string_649;
void* __right_value814 = (void*)0;
struct sType* type2_650;
void* __right_value815 = (void*)0;
char* type_name_651;
struct sType* any_type_652;
void* __right_value816 = (void*)0;
char* finalizer_name_653;
void* __right_value817 = (void*)0;
char* cloner_name_654;
void* __right_value818 = (void*)0;
char* get_hash_key_name_655;
void* __right_value819 = (void*)0;
_Bool _if_conditional21;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
_Bool _if_conditional22;
void* __right_value822 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var13 = (void*)0;
struct sFun* fun_656=0;
char* name_657=0;
char* __dec_obj237;
void* __right_value823 = (void*)0;
_Bool _if_conditional23;
void* __right_value824 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var14 = (void*)0;
struct sFun* fun_658=0;
char* name_659=0;
char* __dec_obj238;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
char* __dec_obj239;
void* __right_value827 = (void*)0;
struct sType* type3_660;
void* __right_value828 = (void*)0;
struct sType* __dec_obj240;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct list$1CVALUEph* come_params_661;
void* __right_value831 = (void*)0;
_Bool _if_conditional24;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct CVALUE* come_value2_662;
void* __right_value835 = (void*)0;
char* __dec_obj241;
struct sType* __dec_obj242;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct CVALUE* come_value3_663;
void* __right_value838 = (void*)0;
char* __dec_obj243;
struct sType* __dec_obj244;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct CVALUE* come_value4_664;
void* __right_value841 = (void*)0;
char* __dec_obj245;
struct sType* __dec_obj246;
int j_665;
struct list$1CVALUEph* o2_saved_666;
struct CVALUE* it_667;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct CVALUE* come_value5_668;
void* __right_value844 = (void*)0;
char* __dec_obj247;
void* __right_value845 = (void*)0;
struct sType* __dec_obj248;
_Bool __result355__;
exp_611 = (void*)0;
exp2_619 = (void*)0;
    map_key_elements_598=self->map_key_elements;
    map_elements_599=self->map_elements;
    key_params_600=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1191, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    element_params_601=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1192, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    map_key_type_602=((void*)0);
    map_element_type_603=((void*)0);
    for(    i_604=0;    i_604<list$1sNodephp_length(map_key_elements_598);    i_604++    ){
        key_elements_605=((struct sNode*)(__right_value725=list$1sNodephp_operator_load_element(map_key_elements_598,i_604)));
        if(__right_value725) { __right_value725 = come_decrement_ref_count2(__right_value725, ((struct sNode*)__right_value725)->finalize, ((struct sNode*)__right_value725)->_protocol_obj, 1, 0, 0, (void*)0); } 
        elements_609=((struct sNode*)(__right_value726=list$1sNodephp_operator_load_element(map_elements_599,i_604)));
        if(__right_value726) { __right_value726 = come_decrement_ref_count2(__right_value726, ((struct sNode*)__right_value726)->finalize, ((struct sNode*)__right_value726)->_protocol_obj, 1, 0, 0, (void*)0); } 
        if(        (_if_conditional19=(string_operator_equals(((char*)(__right_value727=key_elements_605->kind(key_elements_605->_protocol_obj))),"sWildCard"))),        (__right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional19) {
            value_node_610=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value728=xsprintf("Value"))),info));
            __right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_612=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1205, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_612,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1206, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_610))));
                __dec_obj226=exp_611;
                exp_611=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value735=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_610),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_612),((void*)0),0,((void*)0),info));
                if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_612,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_613=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1211, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_613,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1212, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_611))));
                list$1tuple2$2charphsNodephphp_add(params_613,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1213, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_604,info)))));
                __dec_obj227=exp_611;
                exp_611=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value746=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_611),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_613),((void*)0),0,((void*)0),info));
                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj228=exp_611;
                exp_611=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_611,info));
                if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_613,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_614=node_compile(exp_611,info);
            if(            !Value_614) {
                __result350__ = (_Bool)0;
                if(value_node_610) { value_node_610 = come_decrement_ref_count2(value_node_610, ((struct sNode*)value_node_610)->finalize, ((struct sNode*)value_node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_611) { exp_611 = come_decrement_ref_count2(exp_611, ((struct sNode*)exp_611)->finalize, ((struct sNode*)exp_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_600,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result350__;
            }
            else {
            }
            come_value_615=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(key_params_600,(struct CVALUE*)come_increment_ref_count(come_value_615));
            __dec_obj229=map_key_type_602;
            map_key_type_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_615->type));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_610) { value_node_610 = come_decrement_ref_count2(value_node_610, ((struct sNode*)value_node_610)->finalize, ((struct sNode*)value_node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_611) { exp_611 = come_decrement_ref_count2(exp_611, ((struct sNode*)exp_611)->finalize, ((struct sNode*)exp_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_616=node_compile(key_elements_605,info);
            if(            !Value_616) {
                __result351__ = (_Bool)0;
                come_call_finalizer3(key_params_600,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result351__;
            }
            else {
            }
            come_value_617=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_602) {
                check_assign_type(((char*)(__right_value752=xsprintf("invalid map key type"))),map_key_type_602,come_value_617->type,come_value_617,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(key_params_600,(struct CVALUE*)come_increment_ref_count(come_value_617));
            __dec_obj230=map_key_type_602;
            map_key_type_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_617->type));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_617,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional20=(string_operator_equals(((char*)(__right_value754=elements_609->kind(elements_609->_protocol_obj))),"sWildCard"))),        (__right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional20) {
            value_node_618=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value755=xsprintf("Value"))),info));
            __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_620=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1249, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_620,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1250, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_618))));
                __dec_obj231=exp2_619;
                exp2_619=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value762=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_618),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_620),((void*)0),0,((void*)0),info));
                if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(params_620,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_621=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1255, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_621,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1256, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_619))));
                list$1tuple2$2charphsNodephphp_add(params_621,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1257, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_604,info)))));
                __dec_obj232=exp2_619;
                exp2_619=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value773=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_619),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_621),((void*)0),0,((void*)0),info));
                if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
                __right_value773 = come_decrement_ref_count2(__right_value773, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj233=exp2_619;
                exp2_619=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_619,info));
                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_621,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_622=node_compile(exp2_619,info);
            if(            !Value_622) {
                __result352__ = (_Bool)0;
                if(value_node_618) { value_node_618 = come_decrement_ref_count2(value_node_618, ((struct sNode*)value_node_618)->finalize, ((struct sNode*)value_node_618)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_619) { exp2_619 = come_decrement_ref_count2(exp2_619, ((struct sNode*)exp2_619)->finalize, ((struct sNode*)exp2_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(key_params_600,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result352__;
            }
            else {
            }
            come_value2_623=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_603) {
                check_assign_type(((char*)(__right_value777=xsprintf("invalid map element type"))),map_element_type_603,come_value2_623->type,come_value2_623,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_601,(struct CVALUE*)come_increment_ref_count(come_value2_623));
            __dec_obj234=map_element_type_603;
            map_element_type_603=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_623->type));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_618) { value_node_618 = come_decrement_ref_count2(value_node_618, ((struct sNode*)value_node_618)->finalize, ((struct sNode*)value_node_618)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_619) { exp2_619 = come_decrement_ref_count2(exp2_619, ((struct sNode*)exp2_619)->finalize, ((struct sNode*)exp2_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value2_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_624=node_compile(elements_609,info);
            if(            !Value_624) {
                __result353__ = (_Bool)0;
                come_call_finalizer3(key_params_600,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result353__;
            }
            else {
            }
            come_value2_625=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_603) {
                check_assign_type(((char*)(__right_value780=xsprintf("invalid map element type"))),map_element_type_603,come_value2_625->type,come_value2_625,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value780 = come_decrement_ref_count2(__right_value780, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_push_back(element_params_601,(struct CVALUE*)come_increment_ref_count(come_value2_625));
            __dec_obj235=map_element_type_603;
            map_element_type_603=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_625->type));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_626=0;
    key_type_values_627=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_602));
    list$1sNodephp_push_back(key_type_values_627->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(key_params_600),info)));
    key_type_values_627->mHeap=(_Bool)0;
    var_name_628=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_626));
    add_variable_to_table(var_name_628,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_627)),info);
    var__629=get_variable_from_table(info->lv_table,var_name_628);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value786=make_define_var(key_type_values_627,var__629->mCValueName,(_Bool)0,info))));
    __right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_630=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_603));
    list$1sNodephp_push_back(element_type_values_630->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(element_params_601),info)));
    element_type_values_630->mHeap=(_Bool)0;
    var_name2_631=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_626));
    add_variable_to_table(var_name2_631,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_630)),info);
    var2__632=get_variable_from_table(info->lv_table,var_name2_631);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value791=make_define_var(element_type_values_630,var2__632->mCValueName,(_Bool)0,info))));
    __right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_633=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1318, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(source_633,"(");
    for(    i_634=0;    i_634<list$1CVALUEphp_length(key_params_600);    i_634++    ){
        key_param_635=((struct CVALUE*)(__right_value794=list$1CVALUEphp_operator_load_element(key_params_600,i_634)));
        come_call_finalizer3(__right_value794,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_636=((struct CVALUE*)(__right_value795=list$1CVALUEphp_operator_load_element(element_params_601,i_634)));
        come_call_finalizer3(__right_value795,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_602->mHeap) {
            c_value_637=(char*)come_increment_ref_count(increment_ref_count_object(key_param_635->type,key_param_635->c_value,info));
            buffer_append_format(source_633,"%s[%d]=%s,\n",var__629->mCValueName,i_634,c_value_637);
            c_value_637 = come_decrement_ref_count2(c_value_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_633,"%s[%d]=%s,\n",var__629->mCValueName,i_634,key_param_635->c_value);
        }
        if(        map_element_type_603->mHeap) {
            c_value_638=(char*)come_increment_ref_count(increment_ref_count_object(element_param_636->type,element_param_636->c_value,info));
            buffer_append_format(source_633,"%s[%d]=%s,\n",var2__632->mCValueName,i_634,c_value_638);
            c_value_638 = come_decrement_ref_count2(c_value_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_633,"%s[%d]=%s,\n",var2__632->mCValueName,i_634,element_param_636->c_value);
        }
    }
    map_type_639=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1343, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"map",(_Bool)0,info));
    list$1voidphp_push_back(map_type_639->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value800=come_call_cloner(sType_clone, map_key_type_602))))));
    come_call_finalizer3(__right_value800,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1voidphp_push_back(map_type_639->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value801=come_call_cloner(sType_clone, map_element_type_603))))));
    come_call_finalizer3(__right_value801,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_640=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_639));
    fun_name_641="initialize_with_values";
    multiple_assign_var12=((struct tuple2$2charphsGenericsFunp*)(__right_value804=make_generics_function(obj_type_640,(char*)come_increment_ref_count(__builtin_string(fun_name_641)),info,(_Bool)1)));
    name_642=(char*)come_increment_ref_count(multiple_assign_var12->v1);
    generics_fun_643=multiple_assign_var12->v2;
    come_call_finalizer3(__right_value804,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_644=(char*)come_increment_ref_count(name_642);
    fun_645=((struct sFun*)(__right_value805=map$2charphsFunphp_at(info->funcs,generics_fun_name_644,((void*)0))));
    come_call_finalizer3(__right_value805,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_645==((void*)0)) {
        __dec_obj236=generics_fun_name_644;
        generics_fun_name_644=(char*)come_increment_ref_count(create_method_name(obj_type_640,(_Bool)0,((char*)(__right_value806=__builtin_string(fun_name_641))),info,(_Bool)1));
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value806 = come_decrement_ref_count2(__right_value806, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_645=((struct sFun*)(__right_value808=map$2charphsFunphp_at(info->funcs,generics_fun_name_644,((void*)0))));
        come_call_finalizer3(__right_value808,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        fun_645==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_644,info->come_fun->mName);
            __result354__ = (_Bool)1;
            come_call_finalizer3(key_params_600,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_627,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_628 = come_decrement_ref_count2(var_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_630,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_631 = come_decrement_ref_count2(var_name2_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_633,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_642 = come_decrement_ref_count2(name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_644 = come_decrement_ref_count2(generics_fun_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result354__;
        }
    }
    result_type_646=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_645->mResultType));
    result_type_646->mStatic=(_Bool)0;
    type_647=map_type_639;
    obj_value_648=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1371, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    num_string_649=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1373, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    buffer_append_str(num_string_649,"1");
    type2_650=(struct sType*)come_increment_ref_count(solve_generics(type_647,type_647,info));
    type_name_651=(char*)come_increment_ref_count(make_type_name_string(type2_650,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_652=(struct sType*)come_increment_ref_count(type2_650);
    any_type_652->mPointerNum=1;
    any_type_652->mHeap=(_Bool)1;
    finalizer_name_653=(char*)come_increment_ref_count(create_method_name(any_type_652,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_654=(char*)come_increment_ref_count(create_method_name(any_type_652,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_655=(char*)come_increment_ref_count(create_method_name(any_type_652,(_Bool)0,"get_hash_key",info,(_Bool)1));
    if(    (_if_conditional21=(((struct sFun*)(__right_value819=map$2charphsFunphp_operator_load_element(info->funcs,finalizer_name_653)))==((void*)0))),    come_call_finalizer3(__right_value819,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional21) {
        (void*)((struct tuple2$2sFunpcharph*)(__right_value820=create_finalizer_automatically(any_type_652,"finalize",info)));
        come_call_finalizer3(__right_value820,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    }
    if(    (_if_conditional22=(((struct sFun*)(__right_value821=map$2charphsFunphp_operator_load_element(info->funcs,cloner_name_654)))==((void*)0))),    come_call_finalizer3(__right_value821,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional22) {
        multiple_assign_var13=((struct tuple2$2sFunpcharph*)(__right_value822=create_cloner_automatically(any_type_652,"clone",info)));
        fun_656=multiple_assign_var13->v1;
        name_657=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        come_call_finalizer3(__right_value822,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj237=cloner_name_654;
        cloner_name_654=(char*)come_increment_ref_count(name_657);
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_657 = come_decrement_ref_count2(name_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    (_if_conditional23=(((struct sFun*)(__right_value823=map$2charphsFunphp_operator_load_element(info->funcs,get_hash_key_name_655)))==((void*)0))),    come_call_finalizer3(__right_value823,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional23) {
        multiple_assign_var14=((struct tuple2$2sFunpcharph*)(__right_value824=create_get_hash_key_automatically(any_type_652,"get_hash_key",info)));
        fun_658=multiple_assign_var14->v1;
        name_659=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer3(__right_value824,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj238=get_hash_key_name_655;
        get_hash_key_name_655=(char*)come_increment_ref_count(name_659);
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        name_659 = come_decrement_ref_count2(name_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj239=obj_value_648->c_value;
    obj_value_648->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s)",type_name_651,type_name_651,((char*)(__right_value825=buffer_to_string(num_string_649))),info->sname,info->sline,type_name_651,finalizer_name_653,cloner_name_654,get_hash_key_name_655));
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value825 = come_decrement_ref_count2(__right_value825, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_660=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_650));
    type3_660->mPointerNum++;
    type3_660->mHeap=(_Bool)1;
    type2_650->mHeap=(_Bool)1;
    __dec_obj240=obj_value_648->type;
    obj_value_648->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_650));
    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_648->type->mPointerNum++;
    obj_value_648->var=((void*)0);
    append_object_to_right_values2(obj_value_648,(struct sType*)come_increment_ref_count(type3_660),info,(_Bool)0);
    come_params_661=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1413, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional24=(((struct sType*)((void*)(__right_value831=list$1voidphp_operator_load_element(fun_645->mParamTypes,0))))->mHeap&&obj_value_648->type->mHeap)),    come_call_finalizer3(__right_value831,(void*)0, 0, 1, 0, 0, (void*)0),
    _if_conditional24) {
        std_move(((struct sType*)((void*)(__right_value832=list$1voidphp_operator_load_element(fun_645->mParamTypes,0)))),obj_value_648->type,obj_value_648,info,(_Bool)1);
        come_call_finalizer3(__right_value832,(void*)0, 0, 1, 0, 0, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_661,(struct CVALUE*)come_increment_ref_count(obj_value_648));
    come_value2_662=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1420, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj241=come_value2_662->c_value;
    come_value2_662->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(key_params_600)));
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj242=come_value2_662->type;
    come_value2_662->type=((void*)0);
    come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_662->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_661,(struct CVALUE*)come_increment_ref_count(come_value2_662));
    come_value3_663=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1428, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj243=come_value3_663->c_value;
    come_value3_663->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__629->mCValueName));
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=come_value3_663->type;
    come_value3_663->type=((void*)0);
    come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_663->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_661,(struct CVALUE*)come_increment_ref_count(come_value3_663));
    come_value4_664=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1436, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj245=come_value4_664->c_value;
    come_value4_664->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__632->mCValueName));
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj246=come_value4_664->type;
    come_value4_664->type=((void*)0);
    come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_664->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_661,(struct CVALUE*)come_increment_ref_count(come_value4_664));
    buffer_append_str(source_633,generics_fun_name_644);
    buffer_append_str(source_633,"(");
    j_665=0;
    for(    o2_saved_666=(struct list$1CVALUEph*)come_increment_ref_count((come_params_661)),it_667=list$1CVALUEphp_begin((o2_saved_666));    !list$1CVALUEphp_end((o2_saved_666));    it_667=list$1CVALUEphp_next((o2_saved_666))    ){
        buffer_append_str(source_633,it_667->c_value);
        if(        j_665!=list$1CVALUEphp_length(come_params_661)-1) {
            buffer_append_str(source_633,",");
        }
        j_665++;
    }
    come_call_finalizer3(o2_saved_666,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_633,")");
    buffer_append_str(source_633,")");
    come_value5_668=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1462, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj247=come_value5_668->c_value;
    come_value5_668->c_value=(char*)come_increment_ref_count(buffer_to_string(source_633));
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj248=come_value5_668->type;
    come_value5_668->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_646));
    come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_668->type->mStatic=(_Bool)0;
    come_value5_668->var=((void*)0);
    if(    result_type_646->mHeap) {
        append_object_to_right_values2(come_value5_668,(struct sType*)come_increment_ref_count(result_type_646),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_668->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_668));
    __result355__ = (_Bool)1;
    come_call_finalizer3(key_params_600,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_601,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_627,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_628 = come_decrement_ref_count2(var_name_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_630,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_631 = come_decrement_ref_count2(var_name2_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_633,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_640,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_642 = come_decrement_ref_count2(name_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_fun_name_644 = come_decrement_ref_count2(generics_fun_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_648,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_649,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_650,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_651 = come_decrement_ref_count2(type_name_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_652,sType_finalize, 0, 0, 0, 0, (void*)0);
    finalizer_name_653 = come_decrement_ref_count2(finalizer_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cloner_name_654 = come_decrement_ref_count2(cloner_name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    get_hash_key_name_655 = come_decrement_ref_count2(get_hash_key_name_655, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_660,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_661,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_662,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_663,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_664,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_668,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result355__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj223;
struct list$1sNodeph* __dec_obj224;
struct list$1sNodeph* __dec_obj225;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj223=self->sname;
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj224=self->map_key_elements;
            come_call_finalizer3(__dec_obj224,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj225=self->map_elements;
            come_call_finalizer3(__dec_obj225,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_606;
int i_607;
struct sNode* __result348__;
struct sNode* default_value_608;
struct sNode* __result349__;
default_value_608 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_606=self->head;
    i_607=0;
    while(it_606!=((void*)0)) {
        if(        position==i_607) {
            __result348__ = gComeFunResultObject = __result_obj__ = it_606->item;
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
        it_606=it_606->next;
        i_607++;
    }
    memset(&default_value_608,0,sizeof(struct sNode*));
    __result349__ = gComeFunResultObject = __result_obj__ = default_value_608;
    if(default_value_608) { default_value_608 = come_decrement_ref_count2(default_value_608, ((struct sNode*)default_value_608)->finalize, ((struct sNode*)default_value_608)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_669;
int sline_670;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1sNodeph* exps_671;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct buffer* value_672;
char* head_of_last_line_673;
int len_674;
void* __right_value850 = (void*)0;
struct sNode* exp_675;
int sline2_676;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value858 = (void*)0;
struct sNode* __result358__;
int sline_real_679;
int sline_680;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct buffer* value_681;
char* p_682;
int sline_683;
int sline2_684;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value864 = (void*)0;
struct sNode* __result359__;
int sline_real_685;
int sline_686;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct buffer* value_687;
unsigned long  int size_688;
char* p_689;
int sline_690;
int len_691;
int sline2_692;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value872 = (void*)0;
struct sNode* __result362__;
int sline_real_695;
int sline_696;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct buffer* buf_697;
_Bool global_698;
_Bool ignore_case_699;
_Bool catch_exception_700;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value878 = (void*)0;
struct sNode* obj_701;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_702;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct buffer* method_block_703;
int method_block_sline_704;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct list$1voidph* method_generics_types_705;
void* __right_value920 = (void*)0;
struct sNode* node_706;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct sNode* __dec_obj254;
struct sNode* __result363__;
int sline_real_707;
int sline_708;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct buffer* value_709;
char* p_710;
int sline_711;
int len_712;
int sline2_713;
_Bool global_714;
_Bool ignore_case_715;
_Bool catch_exception_716;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value928 = (void*)0;
struct sNode* obj_717;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_718;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct buffer* method_block_719;
int method_block_sline_720;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct list$1voidph* method_generics_types_721;
void* __right_value970 = (void*)0;
struct sNode* node_722;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sNode* __dec_obj255;
struct sNode* __result364__;
int sline_real_723;
int c_724;
int n_725;
int n_726;
unsigned long long int n_729;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value977 = (void*)0;
struct sNode* __result367__;
int sline_real_732;
int c_733;
_Bool quote_734;
int n_735;
int n_736;
unsigned long long int n_739;
unsigned char p2_740;
int size_741;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value982 = (void*)0;
struct sNode* __result370__;
int sline_real_745;
int sline_746;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct buffer* value_747;
char* p_748;
int sline_749;
int sline2_750;
int len_751;
void* __right_value985 = (void*)0;
int* wstr_752;
char* str_753;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value991 = (void*)0;
struct sNode* __result373__;
int sline_real_756;
int sline_757;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct list$1sNodeph* exps_758;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct buffer* value_759;
char* p_760;
int sline_761;
int len_762;
void* __right_value996 = (void*)0;
struct sNode* exp_763;
int sline2_764;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value1000 = (void*)0;
struct sNode* __result374__;
int sline_real_765;
char* p_766;
_Bool no_comma_767;
void* __right_value1001 = (void*)0;
struct sNode* node_768;
char* p2_769;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct buffer* first_element_source_770;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct list$1sNodeph* list_elements_771;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct list$1sNodeph* map_keys_772;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct list$1sNodeph* map_elements_773;
_Bool no_comma_774;
void* __right_value1010 = (void*)0;
struct sNode* node2_775;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value1017 = (void*)0;
struct sNode* __result377__;
_Bool no_comma_778;
void* __right_value1018 = (void*)0;
struct sNode* node2_779;
void* __right_value1019 = (void*)0;
struct sNode* node3_780;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value1022 = (void*)0;
struct sNode* __result378__;
_Bool no_comma_781;
void* __right_value1023 = (void*)0;
struct sNode* node2_782;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value1029 = (void*)0;
struct sNode* __result381__;
void* __right_value1030 = (void*)0;
struct sNode* node_785;
struct sNode* __result382__;
struct sNode* __result383__;
memset(&c_724, 0, sizeof(int));
memset(&c_733, 0, sizeof(int));
memset(&quote_734, 0, sizeof(_Bool));
memset(&size_741, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_669=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_670=info->sline;
        exps_671=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1492, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        value_672=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1493, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        head_of_last_line_673=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_673) {
                    buffer_trim(value_672,info->p-head_of_last_line_673);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_672,37);
                buffer_append_char(value_672,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_672,92);
                buffer_append_char(value_672,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_672,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_674=0;
                    while(xisdigit(*info->p)&&len_674<3) {
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        len_674++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_672,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_675=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_671,(struct sNode*)come_increment_ref_count(exp_675));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_672,"%s");
                    if(exp_675) { exp_675 = come_decrement_ref_count2(exp_675, ((struct sNode*)exp_675)->finalize, ((struct sNode*)exp_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_672,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_676=info->sline;
                info->sline=sline_670;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_672,92);
                    buffer_append_char(value_672,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_673=info->p;
                }
                else {
                    buffer_append_char(value_672,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_669;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1632, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value853=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1632, "struct sSStringNode*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_672)),(struct list$1sNodeph*)come_increment_ref_count(exps_671),sline_670,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result358__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value858=_inf_value5));
        come_call_finalizer3(exps_671,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_672,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value853,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value858) { __right_value858 = come_decrement_ref_count2(__right_value858, ((struct sNode*)__right_value858)->finalize, ((struct sNode*)__right_value858)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result358__;
        come_call_finalizer3(exps_671,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_672,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_679=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_680=info->sline;
        value_681=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1642, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_682=info->p;
                sline_683=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_682;
                    info->sline=sline_683;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_681,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_681,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_681,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_684=info->sline;
                info->sline=sline_680;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_684;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_681,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_679;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1695, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value863=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1695, "struct sStrNode*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_681)),sline_680,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value864=_inf_value6));
        come_call_finalizer3(value_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value863,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value864) { __right_value864 = come_decrement_ref_count2(__right_value864, ((struct sNode*)__right_value864)->finalize, ((struct sNode*)__right_value864)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result359__;
        come_call_finalizer3(value_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_685=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_686=info->sline;
        value_687=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1705, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        size_688=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_687,*info->p);
                info->p++;
                p_689=info->p;
                sline_690=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_689;
                    info->sline=sline_690;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_687,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_691=0;
                    while(xisdigit(*info->p)&&len_691<3) {
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        len_691++;
                    }
                    size_688++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_687,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                    }
                    size_688++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 110:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 116:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 114:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 118:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 102:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 97:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 98:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        case 92:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                        default:
                        buffer_append_char(value_687,*info->p);
                        info->p++;
                        size_688++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_692=info->sline;
                info->sline=sline_686;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_687,*info->p);
                info->p++;
                size_688++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_685;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1832, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value868=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1832, "struct sBufferNode*", (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_687),size_688,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value872=_inf_value7));
        come_call_finalizer3(value_687,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value868,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value872) { __right_value872 = come_decrement_ref_count2(__right_value872, ((struct sNode*)__right_value872)->finalize, ((struct sNode*)__right_value872)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result362__;
        come_call_finalizer3(value_687,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_695=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_696=info->sline;
        buf_697=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1841, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_697,*info->p);
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
                buffer_append_char(buf_697,*info->p);
                info->p++;
            }
        }
        global_698=(_Bool)0;
        ignore_case_699=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_698=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_699=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_700=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_700=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1885, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value877=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1885, "struct sStrNode*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_697)),sline_696,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_701=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value877,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_702=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1887, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1889, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_701))));
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1890, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_699)?(((struct sNode*)(__right_value885=create_int_node(1,info)))):(((struct sNode*)(__right_value886=create_int_node(0,info)))))))));
        if(__right_value885) { __right_value885 = come_decrement_ref_count2(__right_value885, ((struct sNode*)__right_value885)->finalize, ((struct sNode*)__right_value885)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value886) { __right_value886 = come_decrement_ref_count2(__right_value886, ((struct sNode*)__right_value886)->finalize, ((struct sNode*)__right_value886)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1891, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1892, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_698)?(((struct sNode*)(__right_value894=create_int_node(1,info)))):(((struct sNode*)(__right_value895=create_int_node(0,info)))))))));
        if(__right_value894) { __right_value894 = come_decrement_ref_count2(__right_value894, ((struct sNode*)__right_value894)->finalize, ((struct sNode*)__right_value894)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value895) { __right_value895 = come_decrement_ref_count2(__right_value895, ((struct sNode*)__right_value895)->finalize, ((struct sNode*)__right_value895)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1893, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1894, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1895, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1896, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_702,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1897, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_703=((void*)0);
        method_block_sline_704=info->sline;
        method_generics_types_705=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1903, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
        node_706=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_701),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_702),method_block_703,method_block_sline_704,method_generics_types_705,info));
        if(        !catch_exception_700) {
            __dec_obj254=node_706;
            node_706=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_706)),info));
            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_695;
        __result363__ = gComeFunResultObject = __result_obj__ = node_706;
        come_call_finalizer3(buf_697,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_701) { obj_701 = come_decrement_ref_count2(obj_701, ((struct sNode*)obj_701)->finalize, ((struct sNode*)obj_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_702,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_705,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result363__;
        come_call_finalizer3(buf_697,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_701) { obj_701 = come_decrement_ref_count2(obj_701, ((struct sNode*)obj_701)->finalize, ((struct sNode*)obj_701)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_702,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_705,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_706) { node_706 = come_decrement_ref_count2(node_706, ((struct sNode*)node_706)->finalize, ((struct sNode*)node_706)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_707=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_708=info->sline;
        value_709=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1921, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_710=info->p;
                sline_711=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_710;
                    info->sline=sline_711;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_709,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_712=0;
                    while(xisdigit(*info->p)&&len_712<3) {
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        len_712++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_709,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_713=info->sline;
                info->sline=sline_708;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_709,*info->p);
                info->p++;
            }
        }
        global_714=(_Bool)0;
        ignore_case_715=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_714=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_715=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_716=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_716=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2052, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value927=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 2052, "struct sStrNode*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_709)),sline_708,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_717=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value927,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_718=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2054, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2056, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_717))));
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2057, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_715)?(((struct sNode*)(__right_value935=create_int_node(1,info)))):(((struct sNode*)(__right_value936=create_int_node(0,info)))))))));
        if(__right_value935) { __right_value935 = come_decrement_ref_count2(__right_value935, ((struct sNode*)__right_value935)->finalize, ((struct sNode*)__right_value935)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value936) { __right_value936 = come_decrement_ref_count2(__right_value936, ((struct sNode*)__right_value936)->finalize, ((struct sNode*)__right_value936)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2058, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2059, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_714)?(((struct sNode*)(__right_value944=create_int_node(1,info)))):(((struct sNode*)(__right_value945=create_int_node(0,info)))))))));
        if(__right_value944) { __right_value944 = come_decrement_ref_count2(__right_value944, ((struct sNode*)__right_value944)->finalize, ((struct sNode*)__right_value944)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value945) { __right_value945 = come_decrement_ref_count2(__right_value945, ((struct sNode*)__right_value945)->finalize, ((struct sNode*)__right_value945)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2060, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2061, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2062, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2063, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_718,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2064, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_719=((void*)0);
        method_block_sline_720=info->sline;
        method_generics_types_721=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 2070, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
        node_722=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_717),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_718),method_block_719,method_block_sline_720,method_generics_types_721,info));
        if(        !catch_exception_716) {
            __dec_obj255=node_722;
            node_722=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_722)),info));
            if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_707;
        __result364__ = gComeFunResultObject = __result_obj__ = node_722;
        come_call_finalizer3(value_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_717) { obj_717 = come_decrement_ref_count2(obj_717, ((struct sNode*)obj_717)->finalize, ((struct sNode*)obj_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_718,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_721,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_722) { node_722 = come_decrement_ref_count2(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result364__;
        come_call_finalizer3(value_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_717) { obj_717 = come_decrement_ref_count2(obj_717, ((struct sNode*)obj_717)->finalize, ((struct sNode*)obj_717)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(params_718,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_721,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_722) { node_722 = come_decrement_ref_count2(node_722, ((struct sNode*)node_722)->finalize, ((struct sNode*)node_722)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_723=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_725=0;
                while(xisdigit(*info->p)) {
                    n_725=n_725*8+*info->p-48;
                    info->p++;
                }
                c_724=n_725;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_724=10;
                    info->p++;
                    break;
                    case 116:
                    c_724=9;
                    info->p++;
                    break;
                    case 114:
                    c_724=13;
                    info->p++;
                    break;
                    case 97:
                    c_724=7;
                    info->p++;
                    break;
                    case 102:
                    c_724=12;
                    info->p++;
                    break;
                    case 118:
                    c_724=11;
                    info->p++;
                    break;
                    case 98:
                    c_724=8;
                    info->p++;
                    break;
                    case 92:
                    c_724=92;
                    info->p++;
                    break;
                    case 48:
                    c_724=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_726=0;
                        while(xisdigit(*info->p)) {
                            n_726=n_726*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_724=n_726;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_727[128];
                        memset(&buf_727, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_727,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_728[2];
                            memset(&buf2_728, 0, sizeof(char)                            *(2)                            );
                            buf2_728[0]=*info->p;
                            buf2_728[1]=0;
                            info->p++;
                            strncat(buf_727,buf2_728,128);
                        }
                        n_729=strtoll(buf_727,((void*)0),0);
                        c_724=n_729;
                    }
                    break;
                    default:
                    c_724=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_724=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_723;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2199, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value974=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2199, "struct sCharNode*", (void*)0, (void*)0, (void*)0)),c_724,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result367__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value977=_inf_value10));
            come_call_finalizer3(__right_value974,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value977) { __right_value977 = come_decrement_ref_count2(__right_value977, ((struct sNode*)__right_value977)->finalize, ((struct sNode*)__right_value977)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result367__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_732=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_734=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_735=0;
                while(xisdigit(*info->p)) {
                    n_735=n_735*8+*info->p-48;
                    info->p++;
                }
                c_733=n_735;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_733=10;
                    info->p++;
                    break;
                    case 116:
                    c_733=9;
                    info->p++;
                    break;
                    case 114:
                    c_733=13;
                    info->p++;
                    break;
                    case 97:
                    c_733=7;
                    info->p++;
                    break;
                    case 92:
                    c_733=92;
                    info->p++;
                    break;
                    case 48:
                    c_733=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_736=0;
                        while(xisdigit(*info->p)) {
                            n_736=n_736*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_733=n_736;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_737[128];
                        memset(&buf_737, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_737,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_738[2];
                            memset(&buf2_738, 0, sizeof(char)                            *(2)                            );
                            buf2_738[0]=*info->p;
                            buf2_738[1]=0;
                            info->p++;
                            strncat(buf_737,buf2_738,128);
                        }
                        n_739=strtoll(buf_737,((void*)0),0);
                        c_733=n_739;
                    }
                    break;
                    default:
                    c_733=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_734=(_Bool)0;
            p2_740=*(unsigned char*)info->p;
            if(            p2_740>127) {
                char str_742[6+1];
                memset(&str_742, 0, sizeof(char)                *(6+1)                );
                size_741=((p2_740&128)>>7)+((p2_740&64)>>6)+((p2_740&32)>>5)+((p2_740&16)>>4);
                if(                size_741>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_742,info->p,size_741);
                    str_742[size_741]=0;
                    if(                    mbtowc(&c_733,str_742,size_741)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_741;
                    }
                }
            }
            else {
                c_733=*info->p;
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
            info->sline_real=sline_real_732;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2341, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value979=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2341, "struct sWCharNode*", (void*)0, (void*)0, (void*)0)),c_733,quote_734,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value982=_inf_value11));
            come_call_finalizer3(__right_value979,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value982) { __right_value982 = come_decrement_ref_count2(__right_value982, ((struct sNode*)__right_value982)->finalize, ((struct sNode*)__right_value982)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result370__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_745=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_746=info->sline;
        value_747=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2352, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_748=info->p;
                sline_749=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_748;
                    info->sline=sline_749;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_747,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_747,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_747,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_750=info->sline;
                info->sline=sline_746;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_747,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_751=value_747->len;
        wstr_752=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_751+1)), "06str.c", 2403, "int*", (void*)0, (void*)0, (void*)0));
        str_753=value_747->buf;
        if(        mbstowcs(wstr_752,str_753,len_751+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_752[len_751]=0;
        info->sline_real=sline_real_745;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2415, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value987=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2415, "struct sWStringNode*", (void*)0, (void*)0, (void*)0)),(int*)come_increment_ref_count(wstr_752),sline_746,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value991=_inf_value12));
        come_call_finalizer3(value_747,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_752 = come_decrement_ref_count2(wstr_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value987,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value991) { __right_value991 = come_decrement_ref_count2(__right_value991, ((struct sNode*)__right_value991)->finalize, ((struct sNode*)__right_value991)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result373__;
        come_call_finalizer3(value_747,buffer_finalize, 0, 0, 0, 0, (void*)0);
        wstr_752 = come_decrement_ref_count2(wstr_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_756=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_757=info->sline;
        exps_758=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2425, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        value_759=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2426, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_760=info->p;
                sline_761=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_760;
                    info->sline=sline_761;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_759,37);
                buffer_append_char(value_759,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_759,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_762=0;
                    while(xisdigit(*info->p)&&len_762<3) {
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        len_762++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_759,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_763=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_758,(struct sNode*)come_increment_ref_count(exp_763));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_759,"%s");
                    if(exp_763) { exp_763 = come_decrement_ref_count2(exp_763, ((struct sNode*)exp_763)->finalize, ((struct sNode*)exp_763)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_759,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_764=info->sline;
                info->sline=sline_757;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_759,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_756;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2574, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value999=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2574, "struct sSStringNode*", (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_759)),(struct list$1sNodeph*)come_increment_ref_count(exps_758),sline_757,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result374__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1000=_inf_value13));
        come_call_finalizer3(exps_758,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_759,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value999,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1000) { __right_value1000 = come_decrement_ref_count2(__right_value1000, ((struct sNode*)__right_value1000)->finalize, ((struct sNode*)__right_value1000)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(exps_758,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_759,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_765=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_766=info->p;
        no_comma_767=info->no_comma;
        info->no_comma=(_Bool)1;
        node_768=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_767;
        p2_769=info->p;
        first_element_source_770=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2593, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append(first_element_source_770,p_766,p2_769-p_766);
        buffer_append_char(first_element_source_770,0);
        list_elements_771=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2598, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        map_keys_772=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2600, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        map_elements_773=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2601, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_772,(struct sNode*)come_increment_ref_count(node_768));
            no_comma_774=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_775=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_774;
            list$1sNodephp_push_back(map_elements_773,(struct sNode*)come_increment_ref_count(node2_775));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2624, "struct sNode", (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1012=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2624, "struct sMapNode*", (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_772),(struct list$1sNodeph*)come_increment_ref_count(map_elements_773),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1017=_inf_value14));
                if(node2_775) { node2_775 = come_decrement_ref_count2(node2_775, ((struct sNode*)node2_775)->finalize, ((struct sNode*)node2_775)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_768) { node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_771,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_772,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_773,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1012,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1017) { __right_value1017 = come_decrement_ref_count2(__right_value1017, ((struct sNode*)__right_value1017)->finalize, ((struct sNode*)__right_value1017)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result377__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_778=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_779=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_778;
                    list$1sNodephp_push_back(map_keys_772,(struct sNode*)come_increment_ref_count(node2_779));
                    expected_next_character(58,info);
                    no_comma_778=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_780=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_778;
                    list$1sNodephp_push_back(map_elements_773,(struct sNode*)come_increment_ref_count(node3_780));
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
                        if(node2_779) { node2_779 = come_decrement_ref_count2(node2_779, ((struct sNode*)node2_779)->finalize, ((struct sNode*)node2_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_780) { node3_780 = come_decrement_ref_count2(node3_780, ((struct sNode*)node3_780)->finalize, ((struct sNode*)node3_780)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_779) { node2_779 = come_decrement_ref_count2(node2_779, ((struct sNode*)node2_779)->finalize, ((struct sNode*)node2_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_780) { node3_780 = come_decrement_ref_count2(node3_780, ((struct sNode*)node3_780)->finalize, ((struct sNode*)node3_780)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2669, "struct sNode", (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1021=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2669, "struct sMapNode*", (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_772),(struct list$1sNodeph*)come_increment_ref_count(map_elements_773),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1022=_inf_value15));
                if(node2_775) { node2_775 = come_decrement_ref_count2(node2_775, ((struct sNode*)node2_775)->finalize, ((struct sNode*)node2_775)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_768) { node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(first_element_source_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_771,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_772,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_773,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1021,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value1022) { __right_value1022 = come_decrement_ref_count2(__right_value1022, ((struct sNode*)__right_value1022)->finalize, ((struct sNode*)__right_value1022)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result378__;
            }
            if(node2_775) { node2_775 = come_decrement_ref_count2(node2_775, ((struct sNode*)node2_775)->finalize, ((struct sNode*)node2_775)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_771,(struct sNode*)come_increment_ref_count(node_768));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_771,(struct sNode*)come_increment_ref_count(node_768));
            while((_Bool)1) {
                no_comma_781=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_782=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_781;
                list$1sNodephp_push_back(list_elements_771,(struct sNode*)come_increment_ref_count(node2_782));
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
                    if(node2_782) { node2_782 = come_decrement_ref_count2(node2_782, ((struct sNode*)node2_782)->finalize, ((struct sNode*)node2_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_782) { node2_782 = come_decrement_ref_count2(node2_782, ((struct sNode*)node2_782)->finalize, ((struct sNode*)node2_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodephp_length(list_elements_771)>0) {
            info->sline_real=sline_real_765;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2721, "struct sNode", (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1025=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2721, "struct sListNode*", (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(list_elements_771),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1029=_inf_value16));
            if(node_768) { node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(first_element_source_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_771,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_772,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_773,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1025,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1029) { __right_value1029 = come_decrement_ref_count2(__right_value1029, ((struct sNode*)__right_value1029)->finalize, ((struct sNode*)__right_value1029)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
        else {
        }
        if(node_768) { node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(first_element_source_770,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_771,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_772,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_773,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_785=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result382__ = gComeFunResultObject = __result_obj__ = node_785;
        if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
        if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result383__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result356__;
void* __right_value854 = (void*)0;
struct sSStringNode* result_678;
void* __right_value855 = (void*)0;
char* __dec_obj249;
void* __right_value856 = (void*)0;
char* __dec_obj250;
void* __right_value857 = (void*)0;
struct list$1sNodeph* __dec_obj251;
struct sSStringNode* __result357__;
    if(    self==(void*)0) {
        __result356__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    result_678=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode", sSStringNode_finalize, sSStringNode_clone, sSStringNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_678->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_678->sname;
        result_678->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_678->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj250=result_678->value;
        result_678->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj251=result_678->exps;
        result_678->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj251,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_678;
    come_call_finalizer3(result_678,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static unsigned int sSStringNode_get_hash_key(struct sSStringNode* self){
unsigned int result_677;
    result_677=0;
    result_677+=int_get_hash_key(((int)self->sline));
    result_677+=int_get_hash_key(((int)self->sname));
    result_677+=int_get_hash_key(((int)self->sline_real));
    result_677+=int_get_hash_key(((int)self->value));
    result_677+=int_get_hash_key(((int)self->exps));
    return result_677;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result360__;
void* __right_value869 = (void*)0;
struct sBufferNode* result_694;
void* __right_value870 = (void*)0;
char* __dec_obj252;
void* __right_value871 = (void*)0;
struct buffer* __dec_obj253;
struct sBufferNode* __result361__;
    if(    self==(void*)0) {
        __result360__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_694=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode", sBufferNode_finalize, sBufferNode_clone, sBufferNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_694->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj252=result_694->sname;
        result_694->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_694->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj253=result_694->value;
        result_694->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj253,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_694->size=self->size;
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_694;
    come_call_finalizer3(result_694,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static unsigned int sBufferNode_get_hash_key(struct sBufferNode* self){
unsigned int result_693;
    result_693=0;
    result_693+=int_get_hash_key(((int)self->sline));
    result_693+=int_get_hash_key(((int)self->sname));
    result_693+=int_get_hash_key(((int)self->sline_real));
    result_693+=int_get_hash_key(((int)self->value));
    result_693+=int_get_hash_key(((int)self->size));
    return result_693;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result365__;
void* __right_value975 = (void*)0;
struct sCharNode* result_731;
void* __right_value976 = (void*)0;
char* __dec_obj256;
struct sCharNode* __result366__;
    if(    self==(void*)0) {
        __result365__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_731=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode", sCharNode_finalize, sCharNode_clone, sCharNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_731->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj256=result_731->sname;
        result_731->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_731->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_731->value=self->value;
    }
    __result366__ = gComeFunResultObject = __result_obj__ = result_731;
    come_call_finalizer3(result_731,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static unsigned int sCharNode_get_hash_key(struct sCharNode* self){
unsigned int result_730;
    result_730=0;
    result_730+=int_get_hash_key(((int)self->sline));
    result_730+=int_get_hash_key(((int)self->sname));
    result_730+=int_get_hash_key(((int)self->sline_real));
    result_730+=int_get_hash_key(((int)self->value));
    return result_730;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result368__;
void* __right_value980 = (void*)0;
struct sWCharNode* result_744;
void* __right_value981 = (void*)0;
char* __dec_obj257;
struct sWCharNode* __result369__;
    if(    self==(void*)0) {
        __result368__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_744=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode", sWCharNode_finalize, sWCharNode_clone, sWCharNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_744->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj257=result_744->sname;
        result_744->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_744->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_744->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_744->quote=self->quote;
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_744;
    come_call_finalizer3(result_744,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static unsigned int sWCharNode_get_hash_key(struct sWCharNode* self){
unsigned int result_743;
    result_743=0;
    result_743+=int_get_hash_key(((int)self->sline));
    result_743+=int_get_hash_key(((int)self->sname));
    result_743+=int_get_hash_key(((int)self->sline_real));
    result_743+=int_get_hash_key(((int)self->value));
    result_743+=int_get_hash_key(((int)self->quote));
    return result_743;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result371__;
void* __right_value988 = (void*)0;
struct sWStringNode* result_755;
void* __right_value989 = (void*)0;
char* __dec_obj258;
void* __right_value990 = (void*)0;
int* __dec_obj259;
struct sWStringNode* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_755=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode", sWStringNode_finalize, sWStringNode_clone, sWStringNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_755->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj258=result_755->sname;
        result_755->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_755->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj259=result_755->value;
        result_755->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 7, "int*", "wchar_tp_finalize", "wchar_tp_clone"));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_755;
    come_call_finalizer3(result_755,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static unsigned int sWStringNode_get_hash_key(struct sWStringNode* self){
unsigned int result_754;
    result_754=0;
    result_754+=int_get_hash_key(((int)self->sline));
    result_754+=int_get_hash_key(((int)self->sname));
    result_754+=int_get_hash_key(((int)self->sline_real));
    result_754+=int_get_hash_key(((int)self->value));
    return result_754;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result375__;
void* __right_value1013 = (void*)0;
struct sMapNode* result_777;
void* __right_value1014 = (void*)0;
char* __dec_obj260;
void* __right_value1015 = (void*)0;
struct list$1sNodeph* __dec_obj261;
void* __right_value1016 = (void*)0;
struct list$1sNodeph* __dec_obj262;
struct sMapNode* __result376__;
    if(    self==(void*)0) {
        __result375__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    result_777=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode", sMapNode_finalize, sMapNode_clone, sMapNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_777->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_777->sname;
        result_777->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_777->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj261=result_777->map_key_elements;
        result_777->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj261,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj262=result_777->map_elements;
        result_777->map_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_elements));
        come_call_finalizer3(__dec_obj262,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_777;
    come_call_finalizer3(result_777,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static unsigned int sMapNode_get_hash_key(struct sMapNode* self){
unsigned int result_776;
    result_776=0;
    result_776+=int_get_hash_key(((int)self->sline));
    result_776+=int_get_hash_key(((int)self->sname));
    result_776+=int_get_hash_key(((int)self->sline_real));
    result_776+=int_get_hash_key(((int)self->map_key_elements));
    result_776+=int_get_hash_key(((int)self->map_elements));
    return result_776;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result379__;
void* __right_value1026 = (void*)0;
struct sListNode* result_784;
void* __right_value1027 = (void*)0;
char* __dec_obj263;
void* __right_value1028 = (void*)0;
struct list$1sNodeph* __dec_obj264;
struct sListNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_784=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode", sListNode_finalize, sListNode_clone, sListNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_784->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_784->sname;
        result_784->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_784->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj264=result_784->list_elements;
        result_784->list_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->list_elements));
        come_call_finalizer3(__dec_obj264,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_784;
    come_call_finalizer3(result_784,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static unsigned int sListNode_get_hash_key(struct sListNode* self){
unsigned int result_783;
    result_783=0;
    result_783+=int_get_hash_key(((int)self->sline));
    result_783+=int_get_hash_key(((int)self->sname));
    result_783+=int_get_hash_key(((int)self->sline_real));
    result_783+=int_get_hash_key(((int)self->list_elements));
    return result_783;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_786;
char* p_787;
char* name_788;
void* __right_value1033 = (void*)0;
char* __dec_obj265;
_Bool no_comma_789;
void* __right_value1034 = (void*)0;
struct sNode* node_790;
void* __right_value1035 = (void*)0;
struct sNode* __dec_obj266;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1050 = (void*)0;
struct sNode* __result389__;
name_788 = (void*)0;
    tuple_elements_786=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2736, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_787=info->p;
        if(        named_tuple) {
            __dec_obj265=name_788;
            name_788=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_789=info->no_comma;
        info->no_comma=(_Bool)1;
        node_790=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj266=node_790;
        node_790=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_790),info));
        if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_789;
        list$1tuple2$2charphsNodephphp_push_back(tuple_elements_786,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2755, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_788)),(struct sNode*)come_increment_ref_count(node_790))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            name_788 = come_decrement_ref_count2(name_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_790) { node_790 = come_decrement_ref_count2(node_790, ((struct sNode*)node_790)->finalize, ((struct sNode*)node_790)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        name_788 = come_decrement_ref_count2(name_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_790) { node_790 = come_decrement_ref_count2(node_790, ((struct sNode*)node_790)->finalize, ((struct sNode*)node_790)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2772, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1043=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2772, "struct sTupleNode*", (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_786),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1050=_inf_value17));
    come_call_finalizer3(tuple_elements_786,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1043,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1050) { __right_value1050 = come_decrement_ref_count2(__right_value1050, ((struct sNode*)__right_value1050)->finalize, ((struct sNode*)__right_value1050)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1036 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_791;
struct tuple2$2charphsNodeph* __dec_obj267;
void* __right_value1037 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_792;
struct tuple2$2charphsNodeph* __dec_obj268;
void* __right_value1038 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_793;
struct tuple2$2charphsNodeph* __dec_obj269;
struct list$1tuple2$2charphsNodephph* __result384__;
    if(    self->len==0) {
        litem_791=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1036=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_791->prev=((void*)0);
        litem_791->next=((void*)0);
        __dec_obj267=litem_791->item;
        litem_791->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj267,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_791;
        self->head=litem_791;
    }
    else if(    self->len==1) {
        litem_792=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1037=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_792->prev=self->head;
        litem_792->next=((void*)0);
        __dec_obj268=litem_792->item;
        litem_792->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj268,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_792;
        self->head->next=litem_792;
    }
    else {
        litem_793=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1038=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_793->prev=self->tail;
        litem_793->next=((void*)0);
        __dec_obj269=litem_793->item;
        litem_793->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj269,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_793;
        self->tail=litem_793;
    }
    self->len++;
    __result384__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result385__;
void* __right_value1044 = (void*)0;
struct sTupleNode* result_795;
void* __right_value1045 = (void*)0;
char* __dec_obj270;
void* __right_value1049 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj271;
struct sTupleNode* __result388__;
    if(    self==(void*)0) {
        __result385__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    result_795=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode", sTupleNode_finalize, sTupleNode_clone, sTupleNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_795->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj270=result_795->sname;
        result_795->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_795->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj271=result_795->tuple_elements;
        result_795->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj271,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_795;
    come_call_finalizer3(result_795,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static unsigned int sTupleNode_get_hash_key(struct sTupleNode* self){
unsigned int result_794;
    result_794=0;
    result_794+=int_get_hash_key(((int)self->sline));
    result_794+=int_get_hash_key(((int)self->sname));
    result_794+=int_get_hash_key(((int)self->sline_real));
    result_794+=int_get_hash_key(((int)self->tuple_elements));
    return result_794;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result386__;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_796;
struct list_item$1tuple2$2charphsNodephph* it_797;
void* __right_value1048 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result387__;
    if(    self==((void*)0)) {
        __result386__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_796=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
    it_797=self->head;
    while(it_797!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_796,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_797->item)));
        it_797=it_797->next;
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_796;
    come_call_finalizer3(result_796,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct list$1sNodeph* tuple_elements_798;
struct sNode* node_799;
void* __right_value1053 = (void*)0;
struct sNode* node2_800;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1059 = (void*)0;
struct sNode* __result392__;
    tuple_elements_798=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2777, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    node_799=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodephp_push_back(tuple_elements_798,(struct sNode*)come_increment_ref_count(node_799));
    node2_800=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_798,(struct sNode*)come_increment_ref_count(node2_800));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2787, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1055=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2787, "struct sSomeNode*", (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_798),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1059=_inf_value18));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(tuple_elements_798,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_800) { node2_800 = come_decrement_ref_count2(node2_800, ((struct sNode*)node2_800)->finalize, ((struct sNode*)node2_800)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1055,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1059) { __right_value1059 = come_decrement_ref_count2(__right_value1059, ((struct sNode*)__right_value1059)->finalize, ((struct sNode*)__right_value1059)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result390__;
void* __right_value1056 = (void*)0;
struct sSomeNode* result_802;
void* __right_value1057 = (void*)0;
char* __dec_obj272;
void* __right_value1058 = (void*)0;
struct list$1sNodeph* __dec_obj273;
struct sSomeNode* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_802=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode", sSomeNode_finalize, sSomeNode_clone, sSomeNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_802->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_802->sname;
        result_802->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_802->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj273=result_802->tuple_elements;
        result_802->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj273,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_802;
    come_call_finalizer3(result_802,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

static unsigned int sSomeNode_get_hash_key(struct sSomeNode* self){
unsigned int result_801;
    result_801=0;
    result_801+=int_get_hash_key(((int)self->sline));
    result_801+=int_get_hash_key(((int)self->sname));
    result_801+=int_get_hash_key(((int)self->sline_real));
    result_801+=int_get_hash_key(((int)self->tuple_elements));
    return result_801;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct list$1sNodeph* tuple_elements_803;
void* __right_value1062 = (void*)0;
struct sNode* node_804;
void* __right_value1063 = (void*)0;
struct sNode* __dec_obj274;
void* __right_value1064 = (void*)0;
struct sNode* node2_805;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1067 = (void*)0;
struct sNode* __result393__;
    tuple_elements_803=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2792, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_804=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj274=node_804;
    node_804=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_804),info));
    if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodephp_push_back(tuple_elements_803,(struct sNode*)come_increment_ref_count(node_804));
    node2_805=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_803,(struct sNode*)come_increment_ref_count(node2_805));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2805, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1066=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2805, "struct sSomeNode*", (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_803),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result393__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1067=_inf_value19));
    come_call_finalizer3(tuple_elements_803,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_804) { node_804 = come_decrement_ref_count2(node_804, ((struct sNode*)node_804)->finalize, ((struct sNode*)node_804)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_805) { node2_805 = come_decrement_ref_count2(node2_805, ((struct sNode*)node2_805)->finalize, ((struct sNode*)node2_805)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1066,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1067) { __right_value1067 = come_decrement_ref_count2(__right_value1067, ((struct sNode*)__right_value1067)->finalize, ((struct sNode*)__right_value1067)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result393__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
struct list$1sNodeph* tuple_elements_806;
void* __right_value1070 = (void*)0;
struct sNode* node_807;
void* __right_value1071 = (void*)0;
struct sNode* __dec_obj275;
void* __right_value1072 = (void*)0;
struct sNode* node2_808;
struct sNode* node3_809;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1078 = (void*)0;
struct sNode* __result396__;
    tuple_elements_806=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2810, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_807=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj275=node_807;
    node_807=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_807),info));
    if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_808=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodephp_push_back(tuple_elements_806,(struct sNode*)come_increment_ref_count(node2_808));
    node3_809=(struct sNode*)come_increment_ref_count(node_807);
    list$1sNodephp_push_back(tuple_elements_806,(struct sNode*)come_increment_ref_count(node3_809));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2825, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1074=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2825, "struct sNoneNode*", (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_806),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result396__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1078=_inf_value20));
    come_call_finalizer3(tuple_elements_806,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_807) { node_807 = come_decrement_ref_count2(node_807, ((struct sNode*)node_807)->finalize, ((struct sNode*)node_807)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_808) { node2_808 = come_decrement_ref_count2(node2_808, ((struct sNode*)node2_808)->finalize, ((struct sNode*)node2_808)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_809) { node3_809 = come_decrement_ref_count2(node3_809, ((struct sNode*)node3_809)->finalize, ((struct sNode*)node3_809)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value1074,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1078) { __right_value1078 = come_decrement_ref_count2(__right_value1078, ((struct sNode*)__right_value1078)->finalize, ((struct sNode*)__right_value1078)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result394__;
void* __right_value1075 = (void*)0;
struct sNoneNode* result_811;
void* __right_value1076 = (void*)0;
char* __dec_obj276;
void* __right_value1077 = (void*)0;
struct list$1sNodeph* __dec_obj277;
struct sNoneNode* __result395__;
    if(    self==(void*)0) {
        __result394__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    result_811=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode", sNoneNode_finalize, sNoneNode_clone, sNoneNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_811->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj276=result_811->sname;
        result_811->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_811->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj277=result_811->tuple_elements;
        result_811->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj277,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result395__ = gComeFunResultObject = __result_obj__ = result_811;
    come_call_finalizer3(result_811,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static unsigned int sNoneNode_get_hash_key(struct sNoneNode* self){
unsigned int result_810;
    result_810=0;
    result_810+=int_get_hash_key(((int)self->sline));
    result_810+=int_get_hash_key(((int)self->sname));
    result_810+=int_get_hash_key(((int)self->sline_real));
    result_810+=int_get_hash_key(((int)self->tuple_elements));
    return result_810;
}

