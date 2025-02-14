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
struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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
    struct list$1voidph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
static void sCurrentNode_finalize(struct sCurrentNode* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
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
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sType* use_any_type(struct sType* type);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
struct sType* remove_any_type(struct sType* type);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self);
static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self);
static unsigned int tuple2$2charphsGenericsFunp_get_hash_key(struct tuple2$2charphsGenericsFunp* self);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static unsigned int sCurrentNode_get_hash_key(struct sCurrentNode* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static int list$1voidphp_length(struct list$1voidph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunphp_remove(struct map$2charphsFunph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1charphp_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
static unsigned int sMethodCallNode_get_hash_key(struct sMethodCallNode* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sCurrentNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string(self->sname)));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result222__;
    __result222__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sCurrentNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value252 = (void*)0;
char* class_name_292;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sClass* current_stack_293;
struct sVarTable* vtable_294;
struct map$2charphsVarph* o2_saved_295;
char* it_298;
char* key_301;
void* __right_value255 = (void*)0;
struct sVar* value_302;
void* __right_value293 = (void*)0;
struct sType* type2_316;
void* __right_value294 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct tuple2$2charphsTypeph* item_336;
void* __right_value300 = (void*)0;
struct sType* type3_339;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct tuple2$2charphsTypeph* item2_342;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct map$2charphsVarph* o2_saved_389;
char* it_390;
char* key_391;
void* __right_value314 = (void*)0;
struct sVar* value_392;
void* __right_value315 = (void*)0;
struct sType* type2_393;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct tuple2$2charphsTypeph* item_394;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value320 = (void*)0;
char* __dec_obj98;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sType* __dec_obj99;
_Bool __result275__;
    info->current_stack_num++;
    class_name_292=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_293=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 462, "struct sClass*", (void*)0, (void*)0, (void*)0)),class_name_292,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_294=info->lv_table;
    while(vtable_294) {
        for(        o2_saved_295=(struct map$2charphsVarph*)come_increment_ref_count((vtable_294->mVars)),it_298=map$2charphsVarphp_begin((o2_saved_295));        !map$2charphsVarphp_end((o2_saved_295));        it_298=map$2charphsVarphp_next((o2_saved_295))        ){
            key_301=it_298;
            value_302=((struct sVar*)(__right_value255=map$2charphsVarphp_operator_load_element(vtable_294->mVars,key_301)));
            come_call_finalizer3(__right_value255,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_316=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_302->mType));
            type2_316->mPointerNum++;
            item_336=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 475, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(__builtin_string(value_302->mCValueName)),(struct sType*)come_increment_ref_count(type2_316)));
            if(            value_302->mCValueName!=((void*)0)) {
                if(                strcmp(value_302->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_302->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_302->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_302->mType->mClass->mName,"va_list")||string_operator_equals(value_302->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodephp_length(type2_316->mArrayNum)==1) {
                    type3_339=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_316));
                    list$1sNodephp_reset(type3_339->mArrayNum);
                    type3_339->mPointerNum=1;
                    type3_339->mOriginIsArray=(_Bool)1;
                    item2_342=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 495, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(__builtin_string(value_302->mCValueName)),(struct sType*)come_increment_ref_count(type3_339)));
                    list$1voidphp_push_back(current_stack_293->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item2_342)));
                    value_302->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_339,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_342,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1voidphp_push_back(current_stack_293->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item_336)));
                }
            }
            come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_336,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_295,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_294=vtable_294->mParent;
    }
    output_struct(current_stack_293,info);
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(class_name_292),(struct sClass*)come_increment_ref_count(current_stack_293));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_292,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_292);
    vtable_294=info->lv_table;
    while(vtable_294) {
        for(        o2_saved_389=(struct map$2charphsVarph*)come_increment_ref_count((vtable_294->mVars)),it_390=map$2charphsVarphp_begin((o2_saved_389));        !map$2charphsVarphp_end((o2_saved_389));        it_390=map$2charphsVarphp_next((o2_saved_389))        ){
            key_391=it_390;
            value_392=((struct sVar*)(__right_value314=map$2charphsVarphp_operator_load_element(vtable_294->mVars,key_391)));
            come_call_finalizer3(__right_value314,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_393=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_392->mType));
            item_394=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 524, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key)),(char*)come_increment_ref_count(value_392->mCValueName),(struct sType*)come_increment_ref_count(type2_393)));
            if(            value_392->mCValueName!=((void*)0)) {
                if(                strcmp(value_392->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_392->mType->mClass->mName,"va_list")||string_operator_equals(value_392->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_393->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_393,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_394,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_389,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_294=vtable_294->mParent;
    }
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 553, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    __dec_obj98=come_value_395->c_value;
    come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=come_value_395->type;
    come_value_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 556, "struct sType*", (void*)0, (void*)0, (void*)0)),class_name_292,(_Bool)0,info));
    come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_395->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_395->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    __result275__ = (_Bool)1;
    class_name_292 = come_decrement_ref_count2(class_name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_293,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
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

static void sCurrentNode_finalize(struct sCurrentNode* self){
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

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_296;
char* __result223__;
char* __result224__;
char* result_297;
char* __result225__;
result_296 = (void*)0;
result_297 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_296,0,sizeof(char*));
        __result223__ = gComeFunResultObject = __result_obj__ = result_296;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result224__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    memset(&result_297,0,sizeof(char*));
    __result225__ = gComeFunResultObject = __result_obj__ = result_297;
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_299;
char* __result226__;
char* __result227__;
char* result_300;
char* __result228__;
result_299 = (void*)0;
result_300 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_299,0,sizeof(char*));
        __result226__ = gComeFunResultObject = __result_obj__ = result_299;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result227__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    memset(&result_300,0,sizeof(char*));
    __result228__ = gComeFunResultObject = __result_obj__ = result_300;
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_303;
unsigned int hash_304;
unsigned int it_305;
struct sVar* __result229__;
struct sVar* __result230__;
struct sVar* __result231__;
struct sVar* __result232__;
default_value_303 = (void*)0;
    memset(&default_value_303,0,sizeof(struct sVar*));
    hash_304=string_get_hash_key(((char*)key))%self->size;
    it_305=hash_304;
    while((_Bool)1) {
        if(        self->item_existance[it_305]) {
            if(            charp_equals(self->keys[it_305],key)) {
                __result229__ = gComeFunResultObject = __result_obj__ = self->items[it_305];
                come_call_finalizer3(default_value_303,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
            it_305++;
            if(            it_305>=self->size) {
                it_305=0;
            }
            else if(            it_305==hash_304) {
                __result230__ = gComeFunResultObject = __result_obj__ = default_value_303;
                come_call_finalizer3(default_value_303,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
        }
        else {
            __result231__ = gComeFunResultObject = __result_obj__ = default_value_303;
            come_call_finalizer3(default_value_303,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result231__;
        }
    }
    __result232__ = gComeFunResultObject = __result_obj__ = default_value_303;
    come_call_finalizer3(default_value_303,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj33;
char* __dec_obj34;
struct sType* __dec_obj35;
char* __dec_obj55;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj33=self->mName;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj34=self->mCValueName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj35=self->mType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj55=self->mFunName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_306;
struct list_item$1voidph* prev_it_307;
    it_306=self->head;
    while(it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        come_call_finalizer3(prev_it_307,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_308;
struct list_item$1voidph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_310;
struct list_item$1sNodeph* prev_it_311;
    it_310=self->head;
    while(it_310!=((void*)0)) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer3(prev_it_311,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_312;
struct list_item$1sNodeph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_314;
struct list_item$1charph* prev_it_315;
    it_314=self->head;
    while(it_314!=((void*)0)) {
        prev_it_315=it_314;
        it_314=it_314->next;
        come_call_finalizer3(prev_it_315,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result233__;
void* __right_value256 = (void*)0;
struct sType* result_318;
void* __right_value257 = (void*)0;
struct sType* __dec_obj56;
void* __right_value258 = (void*)0;
struct sType* __dec_obj57;
void* __right_value259 = (void*)0;
struct sType* __dec_obj58;
void* __right_value260 = (void*)0;
char* __dec_obj59;
void* __right_value261 = (void*)0;
char* __dec_obj60;
void* __right_value268 = (void*)0;
struct list$1voidph* __dec_obj64;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value277 = (void*)0;
struct list$1voidph* __dec_obj69;
void* __right_value284 = (void*)0;
struct list$1charph* __dec_obj73;
void* __right_value285 = (void*)0;
struct sType* __dec_obj74;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value287 = (void*)0;
struct sType* __dec_obj76;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value289 = (void*)0;
char* __dec_obj78;
void* __right_value290 = (void*)0;
char* __dec_obj79;
void* __right_value291 = (void*)0;
char* __dec_obj80;
void* __right_value292 = (void*)0;
char* __dec_obj81;
struct sType* __result247__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_318=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key));
    if(    self!=((void*)0)) {
        result_318->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_318->mNoSolvedGenericsType;
        result_318->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj57=result_318->mOriginalLoadVarType;
        result_318->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj58=result_318->mAnyOriginalType;
        result_318->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_318->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj59=result_318->mInterfaceName;
        result_318->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_318->mGenericsName;
        result_318->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_318->mGenericsTypes;
        result_318->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_318->mArrayNum;
        result_318->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_318->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_318->mParamTypes;
        result_318->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_318->mParamNames;
        result_318->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_318->mResultType;
        result_318->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_318->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj75=result_318->mAlignas;
        result_318->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj76=result_318->mChannelType;
        result_318->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_318->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_318->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_318->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_318->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_318->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_318->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_318->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_318->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_318->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_318->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_318->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_318->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_318->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_318->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_318->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_318->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_318->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_318->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_318->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_318->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_318->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_318->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_318->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_318->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj77=result_318->mSizeNum;
        result_318->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_318->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_318->mOriginalTypeName;
        result_318->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_318->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_318->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_318->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_318->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_318->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_318->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_318->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_318->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj79=result_318->mAsmName;
        result_318->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_318->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_318->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_318->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_318->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_318->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_318->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj80=result_318->mTupleName;
        result_318->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj81=result_318->mAttribute;
        result_318->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_318->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_318->mGenerate=self->mGenerate;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_318;
    come_call_finalizer3(result_318,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_317;
    result_317=0;
    result_317+=int_get_hash_key(((int)self->mClass));
    result_317+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_317+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_317+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_317+=int_get_hash_key(((int)self->mAnyClass));
    result_317+=int_get_hash_key(((int)self->mInterfaceName));
    result_317+=int_get_hash_key(((int)self->mGenericsName));
    result_317+=int_get_hash_key(((int)self->mGenericsTypes));
    result_317+=int_get_hash_key(((int)self->mArrayNum));
    result_317+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_317+=int_get_hash_key(((int)self->mParamTypes));
    result_317+=int_get_hash_key(((int)self->mParamNames));
    result_317+=int_get_hash_key(((int)self->mResultType));
    result_317+=int_get_hash_key(((int)self->mVarArgs));
    result_317+=int_get_hash_key(((int)self->mAlignas));
    result_317+=int_get_hash_key(((int)self->mChannelType));
    result_317+=int_get_hash_key(((int)self->mUnsigned));
    result_317+=int_get_hash_key(((int)self->mShort));
    result_317+=int_get_hash_key(((int)self->mLong));
    result_317+=int_get_hash_key(((int)self->mLongLong));
    result_317+=int_get_hash_key(((int)self->mConstant));
    result_317+=int_get_hash_key(((int)self->mAtomic));
    result_317+=int_get_hash_key(((int)self->mRegister));
    result_317+=int_get_hash_key(((int)self->mVolatile));
    result_317+=int_get_hash_key(((int)self->mStatic));
    result_317+=int_get_hash_key(((int)self->mUniq));
    result_317+=int_get_hash_key(((int)self->mRecord));
    result_317+=int_get_hash_key(((int)self->mExtern));
    result_317+=int_get_hash_key(((int)self->mRestrict));
    result_317+=int_get_hash_key(((int)self->mImmutable));
    result_317+=int_get_hash_key(((int)self->mHeap));
    result_317+=int_get_hash_key(((int)self->mChannel));
    result_317+=int_get_hash_key(((int)self->mNoHeap));
    result_317+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_317+=int_get_hash_key(((int)self->mException));
    result_317+=int_get_hash_key(((int)self->mPointerNum));
    result_317+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_317+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_317+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_317+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_317+=int_get_hash_key(((int)self->mSizeNum));
    result_317+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_317+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_317+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_317+=int_get_hash_key(((int)self->mFunctionParam));
    result_317+=int_get_hash_key(((int)self->mAllocaValue));
    result_317+=int_get_hash_key(((int)self->mGenericsStruct));
    result_317+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_317+=int_get_hash_key(((int)self->mInline));
    result_317+=int_get_hash_key(((int)self->mNullValue));
    result_317+=int_get_hash_key(((int)self->mGuardValue));
    result_317+=int_get_hash_key(((int)self->mAsmName));
    result_317+=int_get_hash_key(((int)self->mArrayPointerType));
    result_317+=int_get_hash_key(((int)self->mLambdaArray));
    result_317+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_317+=int_get_hash_key(((int)self->mTypedef));
    result_317+=int_get_hash_key(((int)self->mMultipleTypes));
    result_317+=int_get_hash_key(((int)self->mOriginIsArray));
    result_317+=int_get_hash_key(((int)self->mTupleName));
    result_317+=int_get_hash_key(((int)self->mAttribute));
    result_317+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_317+=int_get_hash_key(((int)self->mGenerate));
    return result_317;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1voidph* result_320;
struct list_item$1voidph* it_321;
void* __right_value267 = (void*)0;
struct list$1voidph* __result237__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_320=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    it_321=self->head;
    while(it_321!=((void*)0)) {
        list$1voidphp_add(result_320,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_321->item)));
        it_321=it_321->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_320;
    come_call_finalizer3(result_320,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_319;
    result_319=0;
    result_319+=int_get_hash_key(((int)self->head));
    result_319+=int_get_hash_key(((int)self->tail));
    result_319+=int_get_hash_key(((int)self->len));
    result_319+=int_get_hash_key(((int)self->it));
    return result_319;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_322;
void* __dec_obj61;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_323;
void* __dec_obj62;
void* __right_value266 = (void*)0;
struct list_item$1voidph* litem_324;
void* __dec_obj63;
struct list$1voidph* __result236__;
    if(    self->len==0) {
        litem_322=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_322->prev=((void*)0);
        litem_322->next=((void*)0);
        __dec_obj61=litem_322->item;
        litem_322->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head=litem_322;
    }
    else if(    self->len==1) {
        litem_323=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_323->prev=self->head;
        litem_323->next=((void*)0);
        __dec_obj62=litem_323->item;
        litem_323->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_323;
        self->head->next=litem_323;
    }
    else {
        litem_324=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value266=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_324->prev=self->tail;
        litem_324->next=((void*)0);
        __dec_obj63=litem_324->item;
        litem_324->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_324;
        self->tail=litem_324;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result238__;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sNodeph* result_325;
struct list_item$1sNodeph* it_326;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __result243__;
    if(    self==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_325=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0))));
    it_326=self->head;
    while(it_326!=((void*)0)) {
        list$1sNodephp_add(result_325,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_326->item)));
        it_326=it_326->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_325;
    come_call_finalizer3(result_325,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result239__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_327;
struct sNode* __dec_obj65;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_328;
struct sNode* __dec_obj66;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_329;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result240__;
    if(    self->len==0) {
        litem_327=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_327->prev=((void*)0);
        litem_327->next=((void*)0);
        __dec_obj65=litem_327->item;
        litem_327->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_327;
        self->head=litem_327;
    }
    else if(    self->len==1) {
        litem_328=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_328->prev=self->head;
        litem_328->next=((void*)0);
        __dec_obj66=litem_328->item;
        litem_328->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_328;
        self->head->next=litem_328;
    }
    else {
        litem_329=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0))));
        litem_329->prev=self->tail;
        litem_329->next=((void*)0);
        __dec_obj67=litem_329->item;
        litem_329->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_329;
        self->tail=litem_329;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result241__;
void* __right_value274 = (void*)0;
struct sNode* result_330;
struct sNode* __result242__;
    if(    self==(void*)0) {
        __result241__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_330=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_330->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_330->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_330->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_330->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_330->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_330->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_330->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_330->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_330->kind=self->kind;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_330;
    come_call_finalizer2((void*)0, result_330, result_330 ? ((struct sNode*)result_330)->finalize:(void*)0, result_330 ? ((struct sNode*)result_330)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result244__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* result_331;
struct list_item$1charph* it_332;
void* __right_value283 = (void*)0;
struct list$1charph* __result246__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_331=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0, (void*)0))));
    it_332=self->head;
    while(it_332!=((void*)0)) {
        list$1charphp_add(result_331,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_332->item)));
        it_332=it_332->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_331;
    come_call_finalizer3(result_331,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_333;
char* __dec_obj70;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_334;
char* __dec_obj71;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_335;
char* __dec_obj72;
struct list$1charph* __result245__;
    if(    self->len==0) {
        litem_333=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_333->prev=((void*)0);
        litem_333->next=((void*)0);
        __dec_obj70=litem_333->item;
        litem_333->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_333;
        self->head=litem_333;
    }
    else if(    self->len==1) {
        litem_334=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_334->prev=self->head;
        litem_334->next=((void*)0);
        __dec_obj71=litem_334->item;
        litem_334->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_334;
        self->head->next=litem_334;
    }
    else {
        litem_335=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0))));
        litem_335->prev=self->tail;
        litem_335->next=((void*)0);
        __dec_obj72=litem_335->item;
        litem_335->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_335;
        self->tail=litem_335;
    }
    self->len++;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj82;
struct sType* __dec_obj83;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj82=self->v1;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result248__;
void* __right_value295 = (void*)0;
struct tuple2$2charphsTypeph* result_338;
void* __right_value296 = (void*)0;
char* __dec_obj84;
void* __right_value297 = (void*)0;
struct sType* __dec_obj85;
struct tuple2$2charphsTypeph* __result249__;
    if(    self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_338=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_338->v1;
        result_338->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_338->v2;
        result_338->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_337;
    result_337=0;
    result_337+=int_get_hash_key(((int)self->v1));
    result_337+=int_get_hash_key(((int)self->v2));
    return result_337;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj86;
struct sType* __dec_obj87;
struct tuple2$2charphsTypeph* __result250__;
    __dec_obj86=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj87=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj88;
struct sType* __dec_obj89;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj88=self->v1;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_340;
struct list_item$1sNodeph* prev_it_341;
struct list$1sNodeph* __result251__;
    it_340=self->head;
    while(it_340!=((void*)0)) {
        prev_it_341=it_340;
        it_340=it_340->next;
        come_call_finalizer3(prev_it_341,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
struct list_item$1voidph* litem_343;
void* __dec_obj90;
void* __right_value305 = (void*)0;
struct list_item$1voidph* litem_344;
void* __dec_obj91;
void* __right_value306 = (void*)0;
struct list_item$1voidph* litem_345;
void* __dec_obj92;
struct list$1voidph* __result252__;
    if(    self->len==0) {
        litem_343=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value304=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_343->prev=((void*)0);
        litem_343->next=((void*)0);
        __dec_obj90=litem_343->item;
        litem_343->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_343;
        self->head=litem_343;
    }
    else if(    self->len==1) {
        litem_344=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value305=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_344->prev=self->head;
        litem_344->next=((void*)0);
        __dec_obj91=litem_344->item;
        litem_344->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_344;
        self->head->next=litem_344;
    }
    else {
        litem_345=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value306=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->tail;
        litem_345->next=((void*)0);
        __dec_obj92=litem_345->item;
        litem_345->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_345;
        self->tail=litem_345;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_346;
int i_347;
    for(    i_346=0;    i_346<self->size;    i_346++    ){
        if(        self->item_existance[i_346]) {
            if(            1) {
                come_call_finalizer3(self->items[i_346],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_347=0;    i_347<self->size;    i_347++    ){
        if(        self->item_existance[i_347]) {
            if(            1) {
                self->keys[i_347] = come_decrement_ref_count2(self->keys[i_347], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_365;
unsigned int it_366;
_Bool same_key_exist_383;
char* it2_386;
struct map$2charphsClassph* __result273__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_365=string_get_hash_key(key)%self->size;
    it_366=hash_365;
    while((_Bool)1) {
        if(        self->item_existance[it_366]) {
            if(            charp_equals(self->keys[it_366],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_366]);
                    self->keys[it_366] = come_decrement_ref_count2(self->keys[it_366], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_366]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_366]);
                    self->keys[it_366]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_366],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_366]=item;
                }
                break;
            }
            it_366++;
            if(            it_366>=self->size) {
                it_366=0;
            }
            else if(            it_366==hash_365) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_366]=(_Bool)1;
            if(            1) {
                self->keys[it_366]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_366]=key;
            }
            if(            1) {
                self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_366]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_383=(_Bool)0;
    for(    it2_386=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_386=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_386,key)) {
            same_key_exist_383=(_Bool)1;
        }
    }
    if(    !same_key_exist_383) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_348;
void* __right_value309 = (void*)0;
char** keys_349;
void* __right_value310 = (void*)0;
struct sClass** items_350;
void* __right_value311 = (void*)0;
_Bool* item_existance_351;
int len_352;
char* it_355;
struct sClass* default_value_358;
void* __right_value312 = (void*)0;
struct sClass* it2_359;
unsigned int hash_362;
int n_363;
struct sClass* default_value_364;
void* __right_value313 = (void*)0;
default_value_358 = (void*)0;
default_value_364 = (void*)0;
    size_348=self->size*10;
    keys_349=(char**)come_increment_ref_count(((char**)(__right_value309=(char**)come_calloc(1, sizeof(char*)*(1*(size_348)), "/usr/local/include/comelang.h", 2707, "char**", (void*)0, (void*)0, (void*)0))));
    items_350=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value310=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_348)), "/usr/local/include/comelang.h", 2708, "struct sClass**", (void*)0, (void*)0, (void*)0))));
    item_existance_351=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value311=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_348)), "/usr/local/include/comelang.h", 2709, "_Bool*", (void*)0, (void*)0, (void*)0))));
    len_352=0;
    for(    it_355=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_355=map$2charphsClassphp_next(self)    ){
        memset(&default_value_358,0,sizeof(struct sClass*));
        it2_359=((struct sClass*)(__right_value312=map$2charphsClassphp_at(self,it_355,default_value_358)));
        come_call_finalizer3(__right_value312,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_362=string_get_hash_key(it_355)%size_348;
        n_363=hash_362;
        while((_Bool)1) {
            if(            item_existance_351[n_363]) {
                n_363++;
                if(                n_363>=size_348) {
                    n_363=0;
                }
                else if(                n_363==hash_362) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_351[n_363]=(_Bool)1;
                keys_349[n_363]=it_355;
                items_350[n_363]=((struct sClass*)(__right_value313=map$2charphsClassphp_at(self,it_355,default_value_364)));
                come_call_finalizer3(__right_value313,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_352++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_349;
    self->items=items_350;
    self->item_existance=item_existance_351;
    self->size=size_348;
    self->len=len_352;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_353;
char* __result253__;
char* __result254__;
char* result_354;
char* __result255__;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_353;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_354,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_354;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_356;
char* __result256__;
char* __result257__;
char* result_357;
char* __result258__;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_356;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_357,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_357;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_360;
unsigned int it_361;
struct sClass* __result259__;
struct sClass* __result260__;
struct sClass* __result261__;
struct sClass* __result262__;
    hash_360=string_get_hash_key(((char*)key))%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            charp_equals(self->keys[it_361],key)) {
                __result259__ = gComeFunResultObject = __result_obj__ = self->items[it_361];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                __result260__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
        }
        else {
            __result261__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj93;
struct list$1voidph* __dec_obj94;
char* __dec_obj95;
char* __dec_obj96;
char* __dec_obj97;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj93=self->mName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj94=self->mFields;
            come_call_finalizer3(__dec_obj94,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj95=self->mDeclareSName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj96=self->mParentClassName;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj97=self->mAttribute;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_367;
struct list_item$1charp* it_368;
struct list$1charp* __result266__;
    it2_367=0;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        if(        charp_equals(it_368->item,item)) {
            list$1charpp_delete(self,it2_367,it2_367+1);
            break;
        }
        it2_367++;
        it_368=it_368->next;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_369;
struct list$1charp* __result263__;
struct list_item$1charp* it_372;
int i_373;
struct list_item$1charp* prev_it_374;
struct list_item$1charp* it_375;
int i_376;
struct list_item$1charp* prev_it_377;
struct list_item$1charp* it_378;
struct list_item$1charp* head_prev_it_379;
struct list_item$1charp* tail_it_380;
int i_381;
struct list_item$1charp* prev_it_382;
struct list$1charp* __result265__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_369=tail;
        tail=head;
        head=tmp_369;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result263__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_372=self->head;
        i_373=0;
        while(it_372!=((void*)0)) {
            if(            i_373<tail) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                come_call_finalizer3(prev_it_374,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_373==tail) {
                self->head=it_372;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else if(    tail==self->len) {
        it_375=self->head;
        i_376=0;
        while(it_375!=((void*)0)) {
            if(            i_376==head) {
                self->tail=it_375->prev;
                self->tail->next=((void*)0);
            }
            if(            i_376>=head) {
                prev_it_377=it_375;
                it_375=it_375->next;
                i_376++;
                come_call_finalizer3(prev_it_377,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_376++;
            }
        }
    }
    else {
        it_378=self->head;
        head_prev_it_379=((void*)0);
        tail_it_380=((void*)0);
        i_381=0;
        while(it_378!=((void*)0)) {
            if(            i_381==head) {
                head_prev_it_379=it_378->prev;
            }
            if(            i_381==tail) {
                tail_it_380=it_378;
            }
            if(            i_381>=head&&i_381<tail) {
                prev_it_382=it_378;
                it_378=it_378->next;
                i_381++;
                come_call_finalizer3(prev_it_382,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_378=it_378->next;
                i_381++;
            }
        }
        if(        head_prev_it_379!=((void*)0)) {
            head_prev_it_379->next=tail_it_380;
        }
        if(        tail_it_380!=((void*)0)) {
            tail_it_380->prev=head_prev_it_379;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_370;
struct list_item$1charp* prev_it_371;
struct list$1charp* __result264__;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_384;
char* __result267__;
char* __result268__;
char* result_385;
char* __result269__;
result_384 = (void*)0;
result_385 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_384,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_384;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->it=self->head;
    if(    self->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_385,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_385;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_387;
char* __result270__;
char* __result271__;
char* result_388;
char* __result272__;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_387,0,sizeof(char*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_387;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_388,0,sizeof(char*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_388;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
struct list_item$1CVALUEph* litem_396;
struct CVALUE* __dec_obj100;
void* __right_value324 = (void*)0;
struct list_item$1CVALUEph* litem_397;
struct CVALUE* __dec_obj105;
void* __right_value325 = (void*)0;
struct list_item$1CVALUEph* litem_398;
struct CVALUE* __dec_obj106;
struct list$1CVALUEph* __result274__;
    if(    self->len==0) {
        litem_396=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value323=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_396->prev=((void*)0);
        litem_396->next=((void*)0);
        __dec_obj100=litem_396->item;
        litem_396->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_396;
        self->head=litem_396;
    }
    else if(    self->len==1) {
        litem_397=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value324=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_397->prev=self->head;
        litem_397->next=((void*)0);
        __dec_obj105=litem_397->item;
        litem_397->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_397;
        self->head->next=litem_397;
    }
    else {
        litem_398=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value325=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_398->prev=self->tail;
        litem_398->next=((void*)0);
        __dec_obj106=litem_398->item;
        litem_398->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_398;
        self->tail=litem_398;
    }
    self->len++;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj101;
struct sType* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj101=self->c_value;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj102=self->type;
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj103=self->c_value_without_right_value_objects;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj104=self->c_value_without_cast_object_value;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sType* use_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj107;
int i_399;
struct list$1voidph* o2_saved_400;
struct sType* it_403;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sType* __result284__;
    if(    type->mAnyOriginalType) {
        __dec_obj107=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_399=0;
    for(    o2_saved_400=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_403=((struct sType*)list$1voidphp_begin((o2_saved_400)));    !list$1voidphp_end((o2_saved_400));    it_403=((struct sType*)list$1voidphp_next((o2_saved_400)))    ){
        list$1voidphp_operator_store_element(type->mGenericsTypes,i_399,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_403)))));
        i_399++;
    }
    come_call_finalizer3(o2_saved_400,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __result284__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_401;
void* __result276__;
void* __result277__;
void* result_402;
void* __result278__;
result_401 = (void*)0;
result_402 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_401,0,sizeof(void*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_401;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->head;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_402,0,sizeof(void*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_402;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_404;
void* __result279__;
void* __result280__;
void* result_405;
void* __result281__;
result_404 = (void*)0;
result_405 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_404,0,sizeof(void*));
        __result279__ = gComeFunResultObject = __result_obj__ = result_404;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result280__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    memset(&result_405,0,sizeof(void*));
    __result281__ = gComeFunResultObject = __result_obj__ = result_405;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_406;
int i_407;
void* default_value_408;
struct list$1voidph* __result282__;
struct list_item$1voidph* it_409;
int i_410;
void* __dec_obj108;
struct list$1voidph* __result283__;
default_value_408 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_406=self->len;
        for(        i_407=0;        i_407<position-len_406;        i_407++        ){
            memset(&default_value_408,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_408));
            come_call_finalizer3(default_value_408, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result282__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    it_409=self->head;
    i_410=0;
    while(it_409!=((void*)0)) {
        if(        position==i_410) {
            __dec_obj108=it_409->item;
            it_409->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj108,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_409=it_409->next;
        i_410++;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

struct sType* remove_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj109;
struct sType* __dec_obj110;
int i_411;
struct list$1voidph* o2_saved_412;
struct sType* it_413;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sType* __result285__;
    if(    type->mAnyOriginalType) {
        __dec_obj109=type->mAnyOriginalType;
        type->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        __dec_obj110=type->mNoSolvedGenericsType->mAnyOriginalType;
        type->mNoSolvedGenericsType->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_411=0;
    for(    o2_saved_412=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_413=((struct sType*)list$1voidphp_begin((o2_saved_412)));    !list$1voidphp_end((o2_saved_412));    it_413=((struct sType*)list$1voidphp_next((o2_saved_412)))    ){
        list$1voidphp_operator_store_element(type->mGenericsTypes,i_411,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_413)))));
        i_411++;
    }
    come_call_finalizer3(o2_saved_412,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __result285__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
char* none_generics_name_414;
void* __right_value331 = (void*)0;
char* fun_name2_415;
void* __right_value332 = (void*)0;
char* fun_name3_416;
void* __right_value333 = (void*)0;
struct sGenericsFun* generics_fun_417;
_Bool generics_any_child_420;
void* __right_value334 = (void*)0;
struct sType* no_solved_type_421;
struct sType* __dec_obj121;
struct list$1voidph* o2_saved_422;
struct sType* it_423;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* type2_424;
void* __right_value337 = (void*)0;
struct sType* type_before_425;
void* __right_value338 = (void*)0;
char* __dec_obj122;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_426=0;
_Bool err_427=0;
void* __right_value341 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result293__;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* type2_430;
void* __right_value348 = (void*)0;
struct sType* type_before_431;
void* __right_value349 = (void*)0;
char* __dec_obj128;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var2 = (void*)0;
char* name_432=0;
_Bool err_433=0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result294__;
void* __right_value355 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result298__;
    none_generics_name_414=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_415=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_416=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_414,fun_name));
    generics_fun_417=((struct sGenericsFun*)(__right_value333=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_416,((void*)0))));
    come_call_finalizer3(__right_value333,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    generics_any_child_420=(_Bool)0;
    no_solved_type_421=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj121=no_solved_type_421;
        no_solved_type_421=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
        for(        o2_saved_422=(struct list$1voidph*)come_increment_ref_count((no_solved_type_421->mGenericsTypes)),it_423=((struct sType*)list$1voidphp_begin((o2_saved_422)));        !list$1voidphp_end((o2_saved_422));        it_423=((struct sType*)list$1voidphp_next((o2_saved_422)))        ){
            if(            it_423->mAnyOriginalType) {
                generics_any_child_420=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_422,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_417) {
        if(        generics_fun_417->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_420)) {
            type2_424=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_421))));
            type_before_425=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj122=fun_name2_415;
            fun_name2_415=(char*)come_increment_ref_count(create_method_name(type2_424,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value340=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_415)),generics_fun_417,type2_424,info)));
            name_426=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_427=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value340,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_427) {
                err_msg(info,"%s not found",fun_name3_416);
                __result293__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value345=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 74, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                come_call_finalizer3(type2_424,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_425,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_426 = come_decrement_ref_count2(name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_414 = come_decrement_ref_count2(none_generics_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_415 = come_decrement_ref_count2(fun_name2_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_416 = come_decrement_ref_count2(fun_name3_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value345,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
            type=type_before_425;
            come_call_finalizer3(type2_424,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_425,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_426 = come_decrement_ref_count2(name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            type2_430=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_421))));
            type_before_431=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj128=fun_name2_415;
            fun_name2_415=(char*)come_increment_ref_count(create_method_name(type2_430,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var2=((struct tuple2$2charphbool*)(__right_value351=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_415)),generics_fun_417,type2_430,info)));
            name_432=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            err_433=multiple_assign_var2->v2;
            come_call_finalizer3(__right_value351,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_433) {
                err_msg(info,"%s not found",fun_name3_416);
                __result294__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value354=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 90, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                come_call_finalizer3(type2_430,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_414 = come_decrement_ref_count2(none_generics_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_415 = come_decrement_ref_count2(fun_name2_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_416 = come_decrement_ref_count2(fun_name3_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value354,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result294__;
            }
            type=type_before_431;
            come_call_finalizer3(type2_430,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result298__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value359=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 97, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone, tuple2$2charphsGenericsFunp_get_hash_key)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_415)),generics_fun_417)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_414 = come_decrement_ref_count2(none_generics_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_415 = come_decrement_ref_count2(fun_name2_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_416 = come_decrement_ref_count2(fun_name3_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(no_solved_type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value359,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_418;
unsigned int it_419;
struct sGenericsFun* __result286__;
struct sGenericsFun* __result287__;
struct sGenericsFun* __result288__;
struct sGenericsFun* __result289__;
    hash_418=string_get_hash_key(((char*)key))%self->size;
    it_419=hash_418;
    while((_Bool)1) {
        if(        self->item_existance[it_419]) {
            if(            charp_equals(self->keys[it_419],key)) {
                __result286__ = gComeFunResultObject = __result_obj__ = self->items[it_419];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result286__;
            }
            it_419++;
            if(            it_419>=self->size) {
                it_419=0;
            }
            else if(            it_419==hash_418) {
                __result287__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result287__;
            }
        }
        else {
            __result288__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result288__;
        }
    }
    __result289__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj111;
struct list$1charph* __dec_obj112;
struct list$1charph* __dec_obj113;
char* __dec_obj114;
struct sType* __dec_obj115;
struct list$1voidph* __dec_obj116;
struct list$1charph* __dec_obj117;
struct list$1charph* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj111=self->mImplType;
            come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj112=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj113=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj113,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj114=self->mName;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj115=self->mResultType;
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj116=self->mParamTypes;
            come_call_finalizer3(__dec_obj116,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj117=self->mParamNames;
            come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj118=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj118,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj119=self->mBlock;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj120=self->mGenericsSName;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj123;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj123=self->v1;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj124;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj124=self->v1;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphvoidp* __result290__;
void* __right_value342 = (void*)0;
struct tuple2$2charphvoidp* result_429;
void* __right_value343 = (void*)0;
char* __dec_obj125;
struct tuple2$2charphvoidp* __result291__;
    if(    self==(void*)0) {
        __result290__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    result_429=(struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "tuple2$2charphvoidp_clone", 3, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj125=result_429->v1;
        result_429->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->v2=self->v2;
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_429;
    come_call_finalizer3(result_429,tuple2$2charphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static unsigned int tuple2$2charphvoidp_get_hash_key(struct tuple2$2charphvoidp* self){
unsigned int result_428;
    result_428=0;
    result_428+=int_get_hash_key(((int)self->v1));
    result_428+=int_get_hash_key(((int)self->v2));
    return result_428;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj126;
struct tuple2$2charphvoidp* __result292__;
    __dec_obj126=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj127;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj129;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj129=self->v1;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsGenericsFunp* __result295__;
void* __right_value356 = (void*)0;
struct tuple2$2charphsGenericsFunp* result_435;
void* __right_value357 = (void*)0;
char* __dec_obj130;
struct tuple2$2charphsGenericsFunp* __result296__;
    if(    self==(void*)0) {
        __result295__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    result_435=(struct tuple2$2charphsGenericsFunp*)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "tuple2$2charphsGenericsFunp_clone", 3, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone, tuple2$2charphsGenericsFunp_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj130=result_435->v1;
        result_435->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_435->v2=self->v2;
    }
    __result296__ = gComeFunResultObject = __result_obj__ = result_435;
    come_call_finalizer3(result_435,tuple2$2charphsGenericsFunp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static unsigned int tuple2$2charphsGenericsFunp_get_hash_key(struct tuple2$2charphsGenericsFunp* self){
unsigned int result_434;
    result_434=0;
    result_434+=int_get_hash_key(((int)self->v1));
    result_434+=int_get_hash_key(((int)self->v2));
    return result_434;
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2){
void* __result_obj__=(void*)0;
char* __dec_obj131;
struct tuple2$2charphsGenericsFunp* __result297__;
    __dec_obj131=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj132;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj132=self->v1;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
char* fun_name3_437;
struct list$1voidph* method_generics_types_before_438;
struct list$1voidph* __dec_obj133;
void* __right_value361 = (void*)0;
struct sGenericsFun* generics_fun_439;
void* __right_value362 = (void*)0;
_Bool _if_conditional1;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result299__;
struct list$1voidph* __dec_obj134;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result300__;
    static int num_method_generics_436=0;
    fun_name3_437=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_436++));
    method_generics_types_before_438=(struct list$1voidph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj133=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj133,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_439=((struct sGenericsFun*)(__right_value361=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value361,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_439) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_437)),generics_fun_439,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_437);
            __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value365=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 113, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_438,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value365,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result299__;
        }
    }
    __dec_obj134=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_438);
    come_call_finalizer3(__dec_obj134,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value368=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 119, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone, tuple2$2charphsGenericsFunp_get_hash_key)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_437)),generics_fun_439)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_438,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value368,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value373 = (void*)0;
struct sNode* current_stack_frame_node_440;
_Bool Value_443;
_Bool __result303__;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_446;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct buffer* method_block2_447;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sType* method_block_type_448;
void* __right_value379 = (void*)0;
char* class_name_452;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sClass* current_stack_frame_struct_456;
void* __right_value382 = (void*)0;
_Bool __result310__;
void* __right_value383 = (void*)0;
struct sType* result_type_457;
struct list$1voidph* param_types_458;
struct list$1charph* param_names_459;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct buffer* all_alhabet_sname_460;
char* p_461;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
int i_462;
struct list$1voidph* o2_saved_463;
struct sType* it_464;
struct sType* param_type_465;
void* __right_value388 = (void*)0;
char* param_name_466;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
char* param_name_467;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* param_name_468;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct buffer* source3_469;
char* p_470;
char* head_471;
int sline_472;
struct buffer* __dec_obj137;
void* __right_value395 = (void*)0;
struct sNode* node_473;
_Bool Value_474;
_Bool __result311__;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
char* method_block_name_475;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct CVALUE* come_value2_476;
void* __right_value400 = (void*)0;
struct sFun* fun2_477;
_Bool __result316__;
struct sType* method_block_type2_480;
void* __right_value401 = (void*)0;
char* __dec_obj155;
void* __right_value402 = (void*)0;
struct sType* __dec_obj156;
struct buffer* __dec_obj157;
void* __right_value403 = (void*)0;
struct sType* __dec_obj158;
_Bool contained_method_generics_method_block_481;
struct list$1voidph* o2_saved_482;
struct sType* it_483;
_Bool __result318__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 124, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value370=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 124, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_440=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value370,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_443=node_compile(current_stack_frame_node_440,info);
    if(    !Value_443) {
        __result303__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result303__;
    }
    else {
    }
    come_value_446=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_446));
    dec_stack_ptr(1,info);
    method_block2_447=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 134, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    method_block_type_448=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value377=list$1voidphp_operator_load_element(fun->mParamTypes,-1))))));
    come_call_finalizer3(__right_value377,(void*)0, 0, 1, 0, 0, (void*)0);
    class_name_452=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)((void*)(__right_value380=list$1voidphp_operator_load_element(method_block_type_448->mParamTypes,0))))->mClass=((struct sClass*)(__right_value381=map$2charphsClassphp_operator_load_element(info->classes,class_name_452)));
    come_call_finalizer3(__right_value380,(void*)0, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value381,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_456=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value382=map$2charphsClassphp_operator_load_element(info->classes,class_name_452)));
    come_call_finalizer3(__right_value382,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_448->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result310__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_447,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_452 = come_decrement_ref_count2(class_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result310__;
    }
    result_type_457=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_448->mResultType));
    result_type_457->mStatic=(_Bool)0;
    param_types_458=method_block_type_448->mParamTypes;
    param_names_459=method_block_type_448->mParamNames;
    all_alhabet_sname_460=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 155, "struct buffer*", (void*)0, (void*)0, (void*)0))));
    {
        p_461=info->sname;
        while(*p_461) {
            if(            xisalnum(*p_461)) {
                buffer_append_char(all_alhabet_sname_460,*p_461++);
            }
            else {
                p_461++;
            }
        }
    }
    buffer_append_format(method_block2_447,"%s method_block%d_%s(",((char*)(__right_value386=make_type_name_string(result_type_457,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value387=buffer_to_string(all_alhabet_sname_460))));
    __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_462=0;
    for(    o2_saved_463=(param_types_458),it_464=((struct sType*)list$1voidphp_begin((o2_saved_463)));    !list$1voidphp_end((o2_saved_463));    it_464=((struct sType*)list$1voidphp_next((o2_saved_463)))    ){
        param_type_465=it_464;
        if(        i_462==0) {
            param_name_466=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_447,"%s",((char*)(__right_value389=make_define_var(param_type_465,param_name_466,(_Bool)0,info))));
            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_466 = come_decrement_ref_count2(param_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_462==1) {
            param_name_467=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_447,"%s",((char*)(__right_value391=make_define_var_no_solved(param_type_465,param_name_467,(_Bool)0,(_Bool)0,info))));
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_467 = come_decrement_ref_count2(param_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_468=(char*)come_increment_ref_count(xsprintf("it%d",i_462));
            buffer_append_format(method_block2_447,"%s",((char*)(__right_value393=make_define_var_no_solved(param_type_465,param_name_468,(_Bool)0,(_Bool)0,info))));
            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_468 = come_decrement_ref_count2(param_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_462!=list$1voidphp_length(param_types_458)-1) {
            buffer_append_str(method_block2_447,",");
        }
        i_462++;
    }
    buffer_append_str(method_block2_447,")\n");
    buffer_append_str(method_block2_447,((char*)(__right_value394=buffer_to_string(method_block))));
    __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_469=(struct buffer*)come_increment_ref_count(info->source);
    p_470=info->p;
    head_471=info->head;
    sline_472=info->sline;
    __dec_obj137=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_447);
    come_call_finalizer3(__dec_obj137,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_473=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_474=node_compile(node_473,info);
    if(    !Value_474) {
        __result311__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_447,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_452 = come_decrement_ref_count2(class_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_469,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result311__;
    }
    else {
    }
    method_block_name_475=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value396=buffer_to_string(all_alhabet_sname_460)))));
    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_476=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 220, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
    fun2_477=((struct sFun*)(__right_value400=map$2charphsFunphp_at(info->funcs,method_block_name_475,((void*)0))));
    come_call_finalizer3(__right_value400,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_477==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_475);
        __result316__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_447,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_452 = come_decrement_ref_count2(class_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_469,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_475 = come_decrement_ref_count2(method_block_name_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result316__;
    }
    method_block_type2_480=fun2_477->mLambdaType;
    __dec_obj155=come_value2_476->c_value;
    come_value2_476->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_475));
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj156=come_value2_476->type;
    come_value2_476->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_480));
    come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_476->var=((void*)0);
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_476));
    __dec_obj157=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_469);
    come_call_finalizer3(__dec_obj157,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_470;
    info->head=head_471;
    info->sline=sline_472;
    info->current_stack_frame_struct=current_stack_frame_struct_456;
    __dec_obj158=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_481=(_Bool)0;
    for(    o2_saved_482=(param_types_458),it_483=((struct sType*)list$1voidphp_begin((o2_saved_482)));    !list$1voidphp_end((o2_saved_482));    it_483=((struct sType*)list$1voidphp_next((o2_saved_482)))    ){
        if(        is_contained_method_generics_types(it_483,info)) {
            contained_method_generics_method_block_481=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_457,info)) {
        contained_method_generics_method_block_481=(_Bool)1;
    }
    if(    contained_method_generics_method_block_481) {
        map$2charphsFunphp_remove(info->funcs,method_block_name_475);
    }
    __result318__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_446,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_447,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_452 = come_decrement_ref_count2(class_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_469,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_475 = come_decrement_ref_count2(method_block_name_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result318__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result301__;
void* __right_value371 = (void*)0;
struct sCurrentNode* result_442;
void* __right_value372 = (void*)0;
char* __dec_obj135;
struct sCurrentNode* __result302__;
    if(    self==(void*)0) {
        __result301__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_442=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode", sCurrentNode_finalize, sCurrentNode_clone, sCurrentNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_442->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj135=result_442->sname;
        result_442->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_442->sline_real=self->sline_real;
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_442;
    come_call_finalizer3(result_442,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static unsigned int sCurrentNode_get_hash_key(struct sCurrentNode* self){
unsigned int result_441;
    result_441=0;
    result_441+=int_get_hash_key(((int)self->sline));
    result_441+=int_get_hash_key(((int)self->sname));
    result_441+=int_get_hash_key(((int)self->sline_real));
    return result_441;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_444;
struct list_item$1CVALUEph* prev_it_445;
    it_444=self->head;
    while(it_444!=((void*)0)) {
        prev_it_445=it_444;
        it_444=it_444->next;
        come_call_finalizer3(prev_it_445,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj136;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj136=self->item;
            come_call_finalizer3(__dec_obj136,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_449;
int i_450;
void* __result304__;
void* default_value_451;
void* __result305__;
default_value_451 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_449=self->head;
    i_450=0;
    while(it_449!=((void*)0)) {
        if(        position==i_450) {
            __result304__ = gComeFunResultObject = __result_obj__ = it_449->item;
            gComeFunResultObject = (void*)0;
            return __result304__;
        }
        it_449=it_449->next;
        i_450++;
    }
    memset(&default_value_451,0,sizeof(void*));
    __result305__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_451);
    come_call_finalizer3(default_value_451, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_453;
unsigned int hash_454;
unsigned int it_455;
struct sClass* __result306__;
struct sClass* __result307__;
struct sClass* __result308__;
struct sClass* __result309__;
default_value_453 = (void*)0;
    memset(&default_value_453,0,sizeof(struct sClass*));
    hash_454=string_get_hash_key(((char*)key))%self->size;
    it_455=hash_454;
    while((_Bool)1) {
        if(        self->item_existance[it_455]) {
            if(            charp_equals(self->keys[it_455],key)) {
                __result306__ = gComeFunResultObject = __result_obj__ = self->items[it_455];
                come_call_finalizer3(default_value_453,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result306__;
            }
            it_455++;
            if(            it_455>=self->size) {
                it_455=0;
            }
            else if(            it_455==hash_454) {
                __result307__ = gComeFunResultObject = __result_obj__ = default_value_453;
                come_call_finalizer3(default_value_453,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result307__;
            }
        }
        else {
            __result308__ = gComeFunResultObject = __result_obj__ = default_value_453;
            come_call_finalizer3(default_value_453,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
    }
    __result309__ = gComeFunResultObject = __result_obj__ = default_value_453;
    come_call_finalizer3(default_value_453,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_478;
unsigned int it_479;
struct sFun* __result312__;
struct sFun* __result313__;
struct sFun* __result314__;
struct sFun* __result315__;
    hash_478=string_get_hash_key(((char*)key))%self->size;
    it_479=hash_478;
    while((_Bool)1) {
        if(        self->item_existance[it_479]) {
            if(            charp_equals(self->keys[it_479],key)) {
                __result312__ = gComeFunResultObject = __result_obj__ = self->items[it_479];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result312__;
            }
            it_479++;
            if(            it_479>=self->size) {
                it_479=0;
            }
            else if(            it_479==hash_478) {
                __result313__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result313__;
            }
        }
        else {
            __result314__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result314__;
        }
    }
    __result315__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj138;
struct sType* __dec_obj139;
struct list$1voidph* __dec_obj140;
struct list$1charph* __dec_obj141;
struct list$1charph* __dec_obj142;
struct sType* __dec_obj143;
struct sBlock* __dec_obj144;
struct buffer* __dec_obj147;
struct buffer* __dec_obj148;
struct buffer* __dec_obj149;
struct buffer* __dec_obj150;
char* __dec_obj151;
char* __dec_obj152;
char* __dec_obj153;
char* __dec_obj154;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj138=self->mName;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj139=self->mResultType;
            come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj140=self->mParamTypes;
            come_call_finalizer3(__dec_obj140,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj141=self->mParamNames;
            come_call_finalizer3(__dec_obj141,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj142=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj142,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj143=self->mLambdaType;
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj144=self->mBlock;
            come_call_finalizer3(__dec_obj144,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj147=self->mSource;
            come_call_finalizer3(__dec_obj147,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj148=self->mSourceHead;
            come_call_finalizer3(__dec_obj148,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj149=self->mSourceHead2;
            come_call_finalizer3(__dec_obj149,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj150=self->mSourceDefer;
            come_call_finalizer3(__dec_obj150,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj151=self->mComeHeader;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj152=self->mDeclareSName;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj153=self->mAttribute;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj154=self->mFunAttribute;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj145;
struct sVarTable* __dec_obj146;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj145=self->mNodes;
            come_call_finalizer3(__dec_obj145,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj146=self->mVarTable;
            come_call_finalizer3(__dec_obj146,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunphp_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_484;
unsigned int it_485;
struct map$2charphsFunph* __result317__;
    hash_484=string_get_hash_key(((char*)key))%self->size;
    it_485=hash_484;
    while((_Bool)1) {
        if(        self->item_existance[it_485]) {
            if(            charp_equals(self->keys[it_485],key)) {
                list$1charpp_remove(self->key_list,self->keys[it_485]);
                self->item_existance[it_485]=(_Bool)0;
                if(                1) {
                    self->keys[it_485] = come_decrement_ref_count2(self->keys[it_485], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_485]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_485],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_485]=((void*)0);
                self->len--;
                break;
            }
            it_485++;
            if(            it_485>=self->size) {
                it_485=0;
            }
            else if(            it_485==hash_484) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result317__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value406 = (void*)0;
char* __dec_obj160;
void* __right_value416 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj171;
void* __right_value417 = (void*)0;
struct buffer* __dec_obj172;
void* __right_value418 = (void*)0;
struct list$1voidph* __dec_obj173;
struct sMethodCallNode* __result325__;
    ((struct sNodeBase*)(__right_value404=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value404,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj159=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj160=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj171=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj171,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj172=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj172,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj173=self->method_generics_types;
    self->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, method_generics_types));
    come_call_finalizer3(__dec_obj173,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
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
void* __right_value419 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value419=__builtin_string("sMethodCallNode")));
    __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_497;
struct list$1tuple2$2charphsNodephph* params_498;
struct sNode* obj_499;
struct buffer* method_block_500;
int method_block_sline_501;
_Bool no_infference_method_generics_502;
struct list$1voidph* method_generics_types_503;
_Bool recursive_504;
struct list$1voidph* method_generics_types_before_505;
struct list$1voidph* __dec_obj180;
void* __right_value420 = (void*)0;
struct list$1voidph* __dec_obj181;
_Bool Value_506;
_Bool __result327__;
void* __right_value421 = (void*)0;
struct CVALUE* obj_value_507;
void* __right_value422 = (void*)0;
struct sType* obj_type_508;
_Bool no_output_come_code_509;
struct sType* type_510;
void* __right_value423 = (void*)0;
char* none_generics_name_511;
void* __right_value424 = (void*)0;
char* fun_name2_512;
void* __right_value425 = (void*)0;
char* fun_name3_513;
void* __right_value426 = (void*)0;
struct sGenericsFun* generics_fun_514;
_Bool method_generics_515;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var3 = (void*)0;
char* name_516=0;
struct sGenericsFun* gfun_517=0;
char* generics_fun_name_518;
void* __right_value429 = (void*)0;
struct sFun* fun_519;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1CVALUEph* come_params_520;
_Bool no_output_come_code_521;
_Bool __result329__;
void* __right_value432 = (void*)0;
struct CVALUE* method_block_node_522;
void* __right_value433 = (void*)0;
struct sType* method_block_lambda_type_526;
void* __right_value434 = (void*)0;
struct sType* method_block_result_type_527;
void* __right_value435 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_528;
struct sType* generics_fun_method_block_result_type_529;
int method_generics_num_530;
void* __right_value436 = (void*)0;
int n_531;
struct list$1voidph* o2_saved_532;
struct sType* it_533;
int method_generics_num_534;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1CVALUEph* come_params_535;
int i_536;
struct list$1tuple2$2charphsNodephph* o2_saved_537;
struct tuple2$2charphsNodeph* it_540;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_543=0;
struct sNode* node_544=0;
_Bool Value_545;
_Bool __result338__;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_546;
int method_generics_num_547;
void* __right_value442 = (void*)0;
struct list$1voidph* o2_saved_548;
struct sType* it_549;
int method_generics_num_550;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct list$1CVALUEph* come_params_551;
int i_552;
struct list$1tuple2$2charphsNodephph* o2_saved_553;
struct tuple2$2charphsNodeph* it_554;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_555=0;
struct sNode* node_556=0;
_Bool Value_557;
_Bool __result339__;
void* __right_value447 = (void*)0;
struct CVALUE* come_value_558;
int method_generics_num_559;
void* __right_value448 = (void*)0;
int n_560;
struct list$1voidph* o2_saved_561;
struct sType* it_562;
int method_generics_num_563;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sClass* klass_564;
_Bool calling_dynamic_method_565;
struct sType* lambda_type_566;
struct list$1voidph* o2_saved_567;
struct tuple2$2charphsTypeph* it_568;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name_569=0;
struct sType* field_type_570=0;
void* __right_value451 = (void*)0;
struct sType* result_type_571;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1CVALUEph* come_params_572;
int i_573;
struct list$1tuple2$2charphsNodephph* o2_saved_574;
struct tuple2$2charphsNodeph* it_575;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_576=0;
struct sNode* node_577=0;
_Bool Value_578;
_Bool __result340__;
void* __right_value454 = (void*)0;
struct CVALUE* come_value_579;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
_Bool _if_conditional2;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct buffer* buf_580;
int j_581;
struct list$1CVALUEph* o2_saved_582;
struct CVALUE* it_585;
void* __right_value463 = (void*)0;
char* __dec_obj182;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct CVALUE* come_value2_588;
void* __right_value466 = (void*)0;
char* __dec_obj183;
void* __right_value467 = (void*)0;
struct sType* result_type2_589;
void* __right_value468 = (void*)0;
struct sType* __dec_obj184;
struct list$1voidph* __dec_obj185;
struct sGenericsFun* generics_fun_590;
char* generics_fun_name_591;
struct sFun* fun_592;
void* __right_value469 = (void*)0;
char* __dec_obj186;
struct sClass* klass_593;
void* __right_value470 = (void*)0;
_Bool _while_condtional1;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* __dec_obj187;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_594=0;
struct sGenericsFun* gfun_595=0;
char* __dec_obj188;
void* __right_value476 = (void*)0;
char* none_generics_name_596;
void* __right_value477 = (void*)0;
char* fun_name3_597;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var9 = (void*)0;
char* name_598=0;
struct sGenericsFun* gfun_599=0;
char* __dec_obj189;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var10 = (void*)0;
char* name_600=0;
struct sGenericsFun* gfun_601=0;
char* __dec_obj190;
int i_602;
void* __right_value482 = (void*)0;
char* new_fun_name_603;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
char* __dec_obj191;
struct sType* obj_array_type_607;
void* __right_value485 = (void*)0;
char* array_method_name_608;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
char* __dec_obj192;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* __dec_obj193;
void* __right_value491 = (void*)0;
_Bool __result351__;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* __dec_obj194;
void* __right_value495 = (void*)0;
struct sClass* klass_609;
void* __right_value496 = (void*)0;
_Bool _while_condtional2;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
char* __dec_obj195;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11 = (void*)0;
struct sFun* fun2_610=0;
char* real_fun_name_611=0;
char* __dec_obj197;
void* __right_value501 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var12 = (void*)0;
struct sFun* fun2_612=0;
char* real_fun_name_613=0;
char* __dec_obj198;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
char* original_obj_type_fun_name_614;
void* __right_value504 = (void*)0;
char* __dec_obj199;
_Bool __result352__;
_Bool __result353__;
_Bool __result354__;
void* __right_value505 = (void*)0;
struct sType* result_type_615;
void* __right_value506 = (void*)0;
struct sType* result_type2_616;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct list$1voidph* param_types_617;
struct list$1voidph* o2_saved_618;
struct sType* it_619;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* it2_620;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct list$1CVALUEph* come_params_621;
int i_622;
_Bool first_param_626;
struct list$1tuple2$2charphsNodephph* o2_saved_627;
struct tuple2$2charphsNodeph* it_628;
struct tuple2$2charphsNodeph* multiple_assign_var13 = (void*)0;
char* label_629=0;
struct sNode* node_630=0;
int n_631;
struct list$1charph* o2_saved_632;
char* it_635;
_Bool Value_638;
_Bool __result362__;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_639;
void* __right_value518 = (void*)0;
_Bool _if_conditional3;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
_Bool _if_conditional4;
void* __right_value525 = (void*)0;
int i_645;
struct list$1tuple2$2charphsNodephph* o2_saved_646;
struct tuple2$2charphsNodeph* it_647;
struct tuple2$2charphsNodeph* multiple_assign_var14 = (void*)0;
char* label_648=0;
struct sNode* node_649=0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
_Bool _if_conditional5;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
_Bool _elif_conditional1;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
_Bool _if_conditional6;
_Bool Value_653;
_Bool __result367__;
void* __right_value535 = (void*)0;
struct CVALUE* come_value_654;
void* __right_value536 = (void*)0;
_Bool _if_conditional7;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
_Bool _if_conditional8;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
_Bool _if_conditional9;
struct sType* obj_array_type_655;
void* __right_value545 = (void*)0;
char* array_method_name_656;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* buf_657;
int i_658;
struct list$1sNodeph* o2_saved_659;
struct sNode* it_662;
_Bool Value_665;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_666;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_667;
void* __right_value551 = (void*)0;
char* __dec_obj204;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj205;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct buffer* buf_671;
int i_672;
struct list$1sNodeph* o2_saved_673;
struct sNode* it_674;
_Bool Value_675;
void* __right_value562 = (void*)0;
struct CVALUE* come_value_676;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct CVALUE* come_value_677;
void* __right_value565 = (void*)0;
char* __dec_obj209;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* __dec_obj210;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* buf_678;
int i_679;
struct list$1sNodeph* o2_saved_680;
struct sNode* it_681;
_Bool Value_682;
void* __right_value573 = (void*)0;
struct CVALUE* come_value_683;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_684;
void* __right_value576 = (void*)0;
char* __dec_obj211;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sType* __dec_obj212;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct buffer* buf_685;
int i_686;
struct list$1sNodeph* o2_saved_687;
struct sNode* it_688;
_Bool Value_689;
void* __right_value584 = (void*)0;
struct CVALUE* come_value_690;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct CVALUE* come_value_691;
void* __right_value587 = (void*)0;
char* __dec_obj213;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sType* __dec_obj214;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* buf_692;
int i_693;
struct list$1sNodeph* o2_saved_694;
struct sNode* it_695;
_Bool Value_696;
void* __right_value595 = (void*)0;
struct CVALUE* come_value_697;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_698;
void* __right_value598 = (void*)0;
char* __dec_obj215;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __dec_obj216;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
char* default_param_699;
void* __right_value606 = (void*)0;
char* param_name_700;
void* __right_value607 = (void*)0;
_Bool _if_conditional10;
struct buffer* source_701;
char* p_702;
char* head_703;
int sline_704;
void* __right_value608 = (void*)0;
struct buffer* __dec_obj217;
void* __right_value609 = (void*)0;
struct sNode* node_705;
_Bool Value_706;
_Bool __result375__;
struct buffer* __dec_obj218;
void* __right_value610 = (void*)0;
struct CVALUE* come_value_707;
void* __right_value611 = (void*)0;
_Bool _if_conditional11;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
_Bool _if_conditional12;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
_Bool _if_conditional13;
_Bool __result376__;
_Bool __result377__;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct buffer* buf_708;
int j_709;
struct list$1CVALUEph* o2_saved_710;
struct CVALUE* it_711;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct CVALUE* come_value2_712;
void* __right_value624 = (void*)0;
char* __dec_obj219;
_Bool generics_any_child_713;
struct sType* obj_type2_714;
struct sType* __dec_obj220;
struct list$1voidph* o2_saved_715;
struct sType* it_716;
struct sType* obj_type2_717;
void* __right_value625 = (void*)0;
struct sType* __dec_obj221;
void* __right_value626 = (void*)0;
struct sType* __dec_obj222;
void* __right_value627 = (void*)0;
struct sType* __dec_obj223;
void* __right_value628 = (void*)0;
struct sType* __dec_obj224;
void* __right_value629 = (void*)0;
struct sType* __dec_obj225;
void* __right_value630 = (void*)0;
char* __dec_obj226;
void* __right_value631 = (void*)0;
struct CVALUE* __dec_obj227;
struct list$1voidph* __dec_obj228;
_Bool __result378__;
    fun_name_497=(char*)come_increment_ref_count(self->fun_name);
    params_498=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_499=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_500=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_501=self->method_block_sline;
    no_infference_method_generics_502=self->no_infference_method_generics;
    method_generics_types_503=(struct list$1voidph*)come_increment_ref_count(self->method_generics_types);
    recursive_504=self->recursive;
    method_generics_types_before_505=((void*)0);
    __dec_obj180=method_generics_types_before_505;
    method_generics_types_before_505=(struct list$1voidph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj180,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj181=info->method_generics_types;
    info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj181,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    Value_506=node_compile(obj_499,info);
    if(    !Value_506) {
        __result327__ = (_Bool)0;
        fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result327__;
    }
    else {
    }
    obj_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_508=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_507->type));
    if(    !no_infference_method_generics_502) {
        no_output_come_code_509=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_510=(struct sType*)come_increment_ref_count(obj_type_508);
        none_generics_name_511=(char*)come_increment_ref_count(get_none_generics_name(type_510->mClass->mName));
        fun_name2_512=(char*)come_increment_ref_count(create_method_name(type_510,(_Bool)0,fun_name_497,info,(_Bool)1));
        fun_name3_513=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_511,fun_name_497));
        generics_fun_514=((struct sGenericsFun*)(__right_value426=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_513,((void*)0))));
        come_call_finalizer3(__right_value426,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_514) {
            method_generics_515=list$1charphp_length(generics_fun_514->mMethodGenericsTypeNames)>0;
            if(            method_generics_515&&list$1voidphp_length(info->method_generics_types)==0) {
                multiple_assign_var3=((struct tuple2$2charphsGenericsFunp*)(__right_value428=make_generics_function(obj_type_508,(char*)come_increment_ref_count(__builtin_string(fun_name_497)),info,(_Bool)1)));
                name_516=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                gfun_517=multiple_assign_var3->v2;
                come_call_finalizer3(__right_value428,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_518=(char*)come_increment_ref_count(name_516);
                fun_519=((struct sFun*)(__right_value429=map$2charphsFunphp_at(info->funcs,generics_fun_name_518,((void*)0))));
                come_call_finalizer3(__right_value429,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_520=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 354, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
                if(                method_block_500) {
                    no_output_come_code_521=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_500,(struct list$1CVALUEph*)come_increment_ref_count(come_params_520),fun_519,fun_name3_513,method_block_sline_501,info,(_Bool)1)) {
                        __result329__ = (_Bool)0;
                        name_516 = come_decrement_ref_count2(name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_518 = come_decrement_ref_count2(generics_fun_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_511 = come_decrement_ref_count2(none_generics_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_512 = come_decrement_ref_count2(fun_name2_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_513 = come_decrement_ref_count2(fun_name3_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result329__;
                    }
                    info->no_output_come_code=no_output_come_code_521;
                    method_block_node_522=((struct CVALUE*)(__right_value432=list$1CVALUEphp_operator_load_element(come_params_520,-1)));
                    come_call_finalizer3(__right_value432,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_526=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_522->type));
                    method_block_result_type_527=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_528=((struct sType*)((void*)(__right_value435=list$1voidphp_operator_load_element(generics_fun_514->mParamTypes,-1))));
                    come_call_finalizer3(__right_value435,(void*)0, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_529=generics_fun_method_block_lambda_type_528->mResultType;
                    if(                    generics_fun_method_block_result_type_529->mClass->mMethodGenerics) {
                        method_generics_num_530=generics_fun_method_block_result_type_529->mClass->mMethodGenericsNum;
                        list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_530,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_527)));
                    }
                    n_531=0;
                    for(                    o2_saved_532=(struct list$1voidph*)come_increment_ref_count((generics_fun_method_block_lambda_type_528->mParamTypes)),it_533=((struct sType*)list$1voidphp_begin((o2_saved_532)));                    !list$1voidphp_end((o2_saved_532));                    it_533=((struct sType*)list$1voidphp_next((o2_saved_532)))                    ){
                        if(                        it_533->mClass->mMethodGenerics) {
                            method_generics_num_534=it_533->mClass->mMethodGenericsNum;
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_534,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value437=list$1voidphp_operator_load_element(method_block_lambda_type_526->mParamTypes,n_531)))))));
                            come_call_finalizer3(__right_value437,(void*)0, 0, 1, 0, 0, (void*)0);
                        }
                        n_531++;
                    }
                    come_call_finalizer3(o2_saved_532,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_535=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 383, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
                    i_536=0;
                    for(                    o2_saved_537=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_498)),it_540=list$1tuple2$2charphsNodephphp_begin((o2_saved_537));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_537));                    it_540=list$1tuple2$2charphsNodephphp_next((o2_saved_537))                    ){
                        multiple_assign_var4=it_540;
                        label_543=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                        node_544=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                        if(                        i_536==0) {
                            list$1CVALUEphp_push_back(come_params_535,(struct CVALUE*)come_increment_ref_count(obj_value_507));
                            i_536++;
                        }
                        else {
                            Value_545=node_compile(node_544,info);
                            if(                            !Value_545) {
                                __result338__ = (_Bool)0;
                                label_543 = come_decrement_ref_count2(label_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_544) { node_544 = come_decrement_ref_count2(node_544, ((struct sNode*)node_544)->finalize, ((struct sNode*)node_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_537,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_527,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_535,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_516 = come_decrement_ref_count2(name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_518 = come_decrement_ref_count2(generics_fun_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_511 = come_decrement_ref_count2(none_generics_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_512 = come_decrement_ref_count2(fun_name2_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_513 = come_decrement_ref_count2(fun_name3_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result338__;
                            }
                            else {
                            }
                            come_value_546=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_535,(struct CVALUE*)come_increment_ref_count(come_value_546));
                            come_call_finalizer3(come_value_546,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_543 = come_decrement_ref_count2(label_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_544) { node_544 = come_decrement_ref_count2(node_544, ((struct sNode*)node_544)->finalize, ((struct sNode*)node_544)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_537,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_514->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_547=generics_fun_514->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_547,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_531=0;
                    for(                    o2_saved_548=(struct list$1voidph*)come_increment_ref_count((generics_fun_514->mParamTypes)),it_549=((struct sType*)list$1voidphp_begin((o2_saved_548)));                    !list$1voidphp_end((o2_saved_548));                    it_549=((struct sType*)list$1voidphp_next((o2_saved_548)))                    ){
                        if(                        it_549->mClass->mMethodGenerics) {
                            method_generics_num_550=it_549->mClass->mMethodGenericsNum;
                            if(                            n_531<list$1CVALUEphp_length(come_params_535)) {
                                list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_550,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value443=list$1CVALUEphp_operator_load_element(come_params_535,n_531)))->type)));
                                come_call_finalizer3(__right_value443,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_531++;
                    }
                    come_call_finalizer3(o2_saved_548,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_527,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_535,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_551=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 422, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
                    i_552=0;
                    for(                    o2_saved_553=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_498)),it_554=list$1tuple2$2charphsNodephphp_begin((o2_saved_553));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_553));                    it_554=list$1tuple2$2charphsNodephphp_next((o2_saved_553))                    ){
                        multiple_assign_var5=it_554;
                        label_555=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                        node_556=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                        if(                        i_552==0) {
                            list$1CVALUEphp_push_back(come_params_551,(struct CVALUE*)come_increment_ref_count(obj_value_507));
                            i_552++;
                        }
                        else {
                            Value_557=node_compile(node_556,info);
                            if(                            !Value_557) {
                                __result339__ = (_Bool)0;
                                label_555 = come_decrement_ref_count2(label_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_556) { node_556 = come_decrement_ref_count2(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_553,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_551,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_516 = come_decrement_ref_count2(name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_518 = come_decrement_ref_count2(generics_fun_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_511 = come_decrement_ref_count2(none_generics_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_512 = come_decrement_ref_count2(fun_name2_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_513 = come_decrement_ref_count2(fun_name3_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result339__;
                            }
                            else {
                            }
                            come_value_558=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_551,(struct CVALUE*)come_increment_ref_count(come_value_558));
                            come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_555 = come_decrement_ref_count2(label_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_556) { node_556 = come_decrement_ref_count2(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_553,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_514->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_559=generics_fun_514->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_559,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_560=0;
                    for(                    o2_saved_561=(struct list$1voidph*)come_increment_ref_count((generics_fun_514->mParamTypes)),it_562=((struct sType*)list$1voidphp_begin((o2_saved_561)));                    !list$1voidphp_end((o2_saved_561));                    it_562=((struct sType*)list$1voidphp_next((o2_saved_561)))                    ){
                        if(                        it_562->mClass->mMethodGenerics) {
                            method_generics_num_563=it_562->mClass->mMethodGenericsNum;
                            if(                            n_560<list$1CVALUEphp_length(come_params_551)) {
                                list$1voidphp_operator_store_element(info->method_generics_types,method_generics_num_563,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value449=list$1CVALUEphp_operator_load_element(come_params_551,n_560)))->type)));
                                come_call_finalizer3(__right_value449,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_560++;
                    }
                    come_call_finalizer3(o2_saved_561,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_551,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunphp_remove(info->funcs,generics_fun_name_518);
                name_516 = come_decrement_ref_count2(name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_518 = come_decrement_ref_count2(generics_fun_name_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_520,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_509;
        come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_511 = come_decrement_ref_count2(none_generics_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_512 = come_decrement_ref_count2(fun_name2_512, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_513 = come_decrement_ref_count2(fun_name3_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_564=obj_type_508->mClass;
    calling_dynamic_method_565=(_Bool)0;
    lambda_type_566=((void*)0);
    for(    o2_saved_567=(struct list$1voidph*)come_increment_ref_count((klass_564->mFields)),it_568=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_567)));    !list$1voidphp_end((o2_saved_567));    it_568=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_567)))    ){
        multiple_assign_var6=it_568;
        field_name_569=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        field_type_570=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        string_operator_equals(field_name_569,fun_name_497)&&string_operator_equals(field_type_570->mClass->mName,"lambda")) {
            calling_dynamic_method_565=(_Bool)1;
            lambda_type_566=field_type_570;
            field_name_569 = come_decrement_ref_count2(field_name_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_569 = come_decrement_ref_count2(field_name_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_567,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_565) {
        result_type_571=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_566->mResultType));
        result_type_571->mStatic=(_Bool)0;
        come_params_572=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 485, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        i_573=0;
        for(        o2_saved_574=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_498)),it_575=list$1tuple2$2charphsNodephphp_begin((o2_saved_574));        !list$1tuple2$2charphsNodephphp_end((o2_saved_574));        it_575=list$1tuple2$2charphsNodephphp_next((o2_saved_574))        ){
            multiple_assign_var7=it_575;
            label_576=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_577=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            i_573==0) {
                list$1CVALUEphp_push_back(come_params_572,(struct CVALUE*)come_increment_ref_count(obj_value_507));
                i_573++;
            }
            else {
                Value_578=node_compile(node_577,info);
                if(                !Value_578) {
                    __result340__ = (_Bool)0;
                    label_576 = come_decrement_ref_count2(label_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_577) { node_577 = come_decrement_ref_count2(node_577, ((struct sNode*)node_577)->finalize, ((struct sNode*)node_577)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_574,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_572,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result340__;
                }
                else {
                }
                come_value_579=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value457=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value455=string_to_string(fun_name_497))),((char*)(__right_value456=int_to_string(i_573)))))),((struct sType*)((void*)(__right_value458=list$1voidphp_operator_load_element(lambda_type_566->mParamTypes,i_573-1)))),come_value_579->type,come_value_579,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value458,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional2=(((struct sType*)((void*)(__right_value459=list$1voidphp_operator_load_element(lambda_type_566->mParamTypes,i_573-1))))->mHeap&&come_value_579->type->mHeap)),                come_call_finalizer3(__right_value459,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)((void*)(__right_value460=list$1voidphp_operator_load_element(lambda_type_566->mParamTypes,i_573-1)))),come_value_579->type,come_value_579,info,(_Bool)1);
                    come_call_finalizer3(__right_value460,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_push_back(come_params_572,(struct CVALUE*)come_increment_ref_count(come_value_579));
                i_573++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_576 = come_decrement_ref_count2(label_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_577) { node_577 = come_decrement_ref_count2(node_577, ((struct sNode*)node_577)->finalize, ((struct sNode*)node_577)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_574,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_580=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 515, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_format(buf_580,"%s->%s",obj_value_507->c_value,fun_name_497);
        buffer_append_str(buf_580,"(");
        j_581=0;
        for(        o2_saved_582=(struct list$1CVALUEph*)come_increment_ref_count((come_params_572)),it_585=list$1CVALUEphp_begin((o2_saved_582));        !list$1CVALUEphp_end((o2_saved_582));        it_585=list$1CVALUEphp_next((o2_saved_582))        ){
            if(            j_581==0) {
                __dec_obj182=it_585->c_value;
                it_585->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_585->c_value));
                __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_580,it_585->c_value);
            if(            j_581!=list$1CVALUEphp_length(come_params_572)-1) {
                buffer_append_str(buf_580,",");
            }
            j_581++;
        }
        come_call_finalizer3(o2_saved_582,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_580,")");
        come_value2_588=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 535, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
        __dec_obj183=come_value2_588->c_value;
        come_value2_588->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_580));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_589=(struct sType*)come_increment_ref_count(solve_generics(result_type_571,info->generics_type,info));
        __dec_obj184=come_value2_588->type;
        come_value2_588->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_589));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_588->type->mStatic=(_Bool)0;
        come_value2_588->var=((void*)0);
        if(        result_type2_589->mHeap) {
            append_object_to_right_values2(come_value2_588,(struct sType*)come_increment_ref_count(result_type2_589),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_588->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_588));
        come_call_finalizer3(info->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj185=info->method_generics_types;
        info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_505);
        come_call_finalizer3(__dec_obj185,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_572,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_580,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_589,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_590=((void*)0);
        generics_fun_name_591=((void*)0);
        fun_592=((void*)0);
        if(        string_operator_equals(fun_name_497,"super")) {
            __dec_obj186=fun_name_497;
            fun_name_497=(char*)come_increment_ref_count(create_non_method_name(obj_type_508,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_593=obj_type_508->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value470=map$2charphsClassphp_operator_load_element(info->classes,klass_593->mParentClassName))))),            come_call_finalizer3(__right_value470,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_593=((struct sClass*)(__right_value471=map$2charphsClassphp_operator_load_element(info->classes,klass_593->mParentClassName)));
                come_call_finalizer3(__right_value471,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj187=generics_fun_name_591;
                generics_fun_name_591=(char*)come_increment_ref_count(create_method_name_using_class(klass_593,(_Bool)0,fun_name_497,info,(_Bool)1));
                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_592=((struct sFun*)(__right_value473=map$2charphsFunphp_at(info->funcs,generics_fun_name_591,((void*)0))));
                come_call_finalizer3(__right_value473,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_592) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_508&&obj_type_508->mNoSolvedGenericsType&&list$1voidphp_length(obj_type_508->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value475=make_generics_function(obj_type_508,(char*)come_increment_ref_count(__builtin_string(fun_name_497)),info,(_Bool)1)));
                name_594=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_595=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value475,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj188=generics_fun_name_591;
                generics_fun_name_591=(char*)come_increment_ref_count(name_594);
                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_590=gfun_595;
                name_594 = come_decrement_ref_count2(name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            list$1voidphp_length(info->method_generics_types)>0) {
                none_generics_name_596=(char*)come_increment_ref_count(get_none_generics_name(obj_type_508->mClass->mName));
                fun_name3_597=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_596,fun_name_497));
                multiple_assign_var9=((struct tuple2$2charphsGenericsFunp*)(__right_value479=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_597)),(struct list$1voidph*)come_increment_ref_count(info->method_generics_types),info)));
                name_598=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                gfun_599=multiple_assign_var9->v2;
                come_call_finalizer3(__right_value479,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj189=generics_fun_name_591;
                generics_fun_name_591=(char*)come_increment_ref_count(name_598);
                __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_590=gfun_599;
                none_generics_name_596 = come_decrement_ref_count2(none_generics_name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_597 = come_decrement_ref_count2(fun_name3_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                name_598 = come_decrement_ref_count2(name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var10=((struct tuple2$2charphsGenericsFunp*)(__right_value481=make_generics_function(obj_type_508,(char*)come_increment_ref_count(__builtin_string(fun_name_497)),info,(_Bool)1)));
                name_600=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                gfun_601=multiple_assign_var10->v2;
                come_call_finalizer3(__right_value481,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj190=generics_fun_name_591;
                generics_fun_name_591=(char*)come_increment_ref_count(name_600);
                __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_590=gfun_601;
                name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            for(            i_602=128;            i_602>=1;            i_602--            ){
                new_fun_name_603=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_591,i_602));
                fun_592=((struct sFun*)(__right_value483=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_603)));
                come_call_finalizer3(__right_value483,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_592!=((void*)0)) {
                    __dec_obj191=generics_fun_name_591;
                    generics_fun_name_591=(char*)come_increment_ref_count(__builtin_string(new_fun_name_603));
                    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_603 = come_decrement_ref_count2(new_fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_603 = come_decrement_ref_count2(new_fun_name_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_592==((void*)0)) {
                obj_array_type_607=obj_type_508->mOriginalLoadVarType;
                if(                obj_array_type_607&&list$1sNodephp_length(obj_array_type_607->mArrayNum)>0) {
                    array_method_name_608=(char*)come_increment_ref_count(create_method_name(obj_array_type_607,(_Bool)0,fun_name_497,info,(_Bool)0));
                    fun_592=((struct sFun*)(__right_value486=map$2charphsFunphp_at(info->funcs,array_method_name_608,((void*)0))));
                    come_call_finalizer3(__right_value486,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_592) {
                        __dec_obj192=generics_fun_name_591;
                        generics_fun_name_591=(char*)come_increment_ref_count(__builtin_string(array_method_name_608));
                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_592=((struct sFun*)(__right_value488=map$2charphsFunphp_at(info->funcs,generics_fun_name_591,((void*)0))));
                        come_call_finalizer3(__right_value488,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_592==((void*)0)) {
                            __dec_obj193=generics_fun_name_591;
                            generics_fun_name_591=(char*)come_increment_ref_count(create_method_name(obj_type_508,(_Bool)0,((char*)(__right_value489=__builtin_string(fun_name_497))),info,(_Bool)1));
                            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_592=((struct sFun*)(__right_value491=map$2charphsFunphp_at(info->funcs,generics_fun_name_591,((void*)0))));
                            come_call_finalizer3(__right_value491,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_592==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_591,info->come_fun->mName);
                                __result351__ = (_Bool)1;
                                array_method_name_608 = come_decrement_ref_count2(array_method_name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result351__;
                            }
                        }
                    }
                    array_method_name_608 = come_decrement_ref_count2(array_method_name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_592=((struct sFun*)(__right_value492=map$2charphsFunphp_at(info->funcs,generics_fun_name_591,((void*)0))));
                    come_call_finalizer3(__right_value492,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_592==((void*)0)) {
                        __dec_obj194=generics_fun_name_591;
                        generics_fun_name_591=(char*)come_increment_ref_count(create_method_name(obj_type_508,(_Bool)0,((char*)(__right_value493=__builtin_string(fun_name_497))),info,(_Bool)1));
                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_592=((struct sFun*)(__right_value495=map$2charphsFunphp_at(info->funcs,generics_fun_name_591,((void*)0))));
                        come_call_finalizer3(__right_value495,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_592==((void*)0)) {
                            klass_609=obj_type_508->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value496=map$2charphsClassphp_operator_load_element(info->classes,klass_609->mParentClassName))))),                            come_call_finalizer3(__right_value496,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_609=((struct sClass*)(__right_value497=map$2charphsClassphp_operator_load_element(info->classes,klass_609->mParentClassName)));
                                come_call_finalizer3(__right_value497,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj195=generics_fun_name_591;
                                generics_fun_name_591=(char*)come_increment_ref_count(create_method_name_using_class(klass_609,(_Bool)0,fun_name_497,info,(_Bool)1));
                                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_592=((struct sFun*)(__right_value499=map$2charphsFunphp_at(info->funcs,generics_fun_name_591,((void*)0))));
                                come_call_finalizer3(__right_value499,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_592) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_592==((void*)0)&&string_operator_equals(fun_name_497,"to_string")) {
                            multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value500=create_to_string_automatically(obj_type_508,fun_name_497,info)));
                            fun2_610=multiple_assign_var11->v1;
                            real_fun_name_611=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                            come_call_finalizer3(__right_value500,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_592=fun2_610;
                            __dec_obj197=generics_fun_name_591;
                            generics_fun_name_591=(char*)come_increment_ref_count(real_fun_name_611);
                            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_611 = come_decrement_ref_count2(real_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_592==((void*)0)&&string_operator_equals(fun_name_497,"equals")) {
                            multiple_assign_var12=((struct tuple2$2sFunpcharph*)(__right_value501=create_equals_automatically(obj_type_508,fun_name_497,info)));
                            fun2_612=multiple_assign_var12->v1;
                            real_fun_name_613=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                            come_call_finalizer3(__right_value501,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_592=fun2_612;
                            __dec_obj198=generics_fun_name_591;
                            generics_fun_name_591=(char*)come_increment_ref_count(real_fun_name_613);
                            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_613 = come_decrement_ref_count2(real_fun_name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_592==((void*)0)) {
                            original_obj_type_fun_name_614=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_508,(_Bool)0,((char*)(__right_value502=__builtin_string(fun_name_497))),info,(_Bool)1));
                            __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_592=((struct sFun*)(__right_value504=map$2charphsFunphp_at(info->funcs,original_obj_type_fun_name_614,((void*)0))));
                            come_call_finalizer3(__right_value504,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_592) {
                                __dec_obj199=generics_fun_name_591;
                                generics_fun_name_591=(char*)come_increment_ref_count(original_obj_type_fun_name_614);
                                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_614 = come_decrement_ref_count2(original_obj_type_fun_name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_592==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_591,info->come_fun->mName);
                            __result352__ = (_Bool)1;
                            generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result352__;
                        }
                    }
                }
            }
        }
        if(        fun_592==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_591,info->come_fun->mName);
            __result353__ = (_Bool)1;
            generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result353__;
        }
        if(        list$1voidphp_length(fun_592->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result354__ = (_Bool)1;
            generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result354__;
        }
        result_type_615=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_592->mResultType));
        result_type_615->mStatic=(_Bool)0;
        result_type2_616=(struct sType*)come_increment_ref_count(solve_generics(result_type_615,info->generics_type,info));
        param_types_617=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "20method.c", 700, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
        for(        o2_saved_618=(struct list$1voidph*)come_increment_ref_count((fun_592->mParamTypes)),it_619=((struct sType*)list$1voidphp_begin((o2_saved_618)));        !list$1voidphp_end((o2_saved_618));        it_619=((struct sType*)list$1voidphp_next((o2_saved_618)))        ){
            if(            it_619==((void*)0)) {
                list$1voidphp_push_back(param_types_617,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_619)));
            }
            else {
                it2_620=(struct sType*)come_increment_ref_count(solve_generics(it_619,info->generics_type,info));
                list$1voidphp_push_back(param_types_617,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_620)));
                come_call_finalizer3(it2_620,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_618,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_621=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 712, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        for(        i_622=0;        i_622<list$1voidphp_length(fun_592->mParamTypes)-(((method_block_500)?(2):(0)));        i_622++        ){
            list$1CVALUEphp_add(come_params_621,((void*)0));
        }
        first_param_626=(_Bool)1;
        for(        o2_saved_627=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_498)),it_628=list$1tuple2$2charphsNodephphp_begin((o2_saved_627));        !list$1tuple2$2charphsNodephphp_end((o2_saved_627));        it_628=list$1tuple2$2charphsNodephphp_next((o2_saved_627))        ){
            multiple_assign_var13=it_628;
            label_629=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_630=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            first_param_626) {
                first_param_626=(_Bool)0;
            }
            else if(            label_629) {
                n_631=0;
                for(                o2_saved_632=(struct list$1charph*)come_increment_ref_count((fun_592->mParamNames)),it_635=list$1charphp_begin((o2_saved_632));                !list$1charphp_end((o2_saved_632));                it_635=list$1charphp_next((o2_saved_632))                ){
                    if(                    string_operator_equals(label_629,it_635)) {
                        break;
                    }
                    n_631++;
                }
                come_call_finalizer3(o2_saved_632,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                Value_638=node_compile(node_630,info);
                if(                !Value_638) {
                    __result362__ = (_Bool)0;
                    label_629 = come_decrement_ref_count2(label_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_627,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_617,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_621,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result362__;
                }
                else {
                }
                come_value_639=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional3=(((struct sType*)((void*)(__right_value518=list$1voidphp_operator_load_element(param_types_617,n_631)))))),                come_call_finalizer3(__right_value518,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    check_assign_type(((char*)(__right_value521=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value519=string_to_string(fun_name_497))),((char*)(__right_value520=int_to_string(n_631)))))),((struct sType*)((void*)(__right_value522=list$1voidphp_operator_load_element(param_types_617,n_631)))),come_value_639->type,come_value_639,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value522,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional4=(((struct sType*)((void*)(__right_value523=list$1voidphp_operator_load_element(param_types_617,n_631))))&&((struct sType*)((void*)(__right_value524=list$1voidphp_operator_load_element(param_types_617,n_631))))->mHeap&&come_value_639->type->mHeap)),                come_call_finalizer3(__right_value523,(void*)0, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value524,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)((void*)(__right_value525=list$1voidphp_operator_load_element(param_types_617,n_631)))),come_value_639->type,come_value_639,info,(_Bool)1);
                    come_call_finalizer3(__right_value525,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_621,n_631,(struct CVALUE*)come_increment_ref_count(come_value_639));
                come_call_finalizer3(come_value_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_629 = come_decrement_ref_count2(label_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_630) { node_630 = come_decrement_ref_count2(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_627,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_645=0;
        for(        o2_saved_646=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_498)),it_647=list$1tuple2$2charphsNodephphp_begin((o2_saved_646));        !list$1tuple2$2charphsNodephphp_end((o2_saved_646));        it_647=list$1tuple2$2charphsNodephphp_next((o2_saved_646))        ){
            multiple_assign_var14=it_647;
            label_648=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            node_649=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            i_645==0) {
                check_assign_type(((char*)(__right_value528=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value526=string_to_string(fun_name_497))),((char*)(__right_value527=int_to_string(i_645)))))),((struct sType*)((void*)(__right_value529=list$1voidphp_operator_load_element(param_types_617,i_645)))),obj_value_507->type,obj_value_507,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value529,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional5=(((struct sType*)((void*)(__right_value530=list$1voidphp_operator_load_element(param_types_617,i_645))))->mHeap&&obj_value_507->type->mHeap)),                come_call_finalizer3(__right_value530,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)((void*)(__right_value531=list$1voidphp_operator_load_element(param_types_617,i_645)))),obj_value_507->type,obj_value_507,info,(_Bool)1);
                    come_call_finalizer3(__right_value531,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)((void*)(__right_value532=list$1voidphp_operator_load_element(param_types_617,i_645))))->mHeap&&!obj_value_507->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value532,(void*)0, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)(__right_value533=list$1charphp_operator_load_element(fun_592->mParamNames,i_645))));
                    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEphp_replace(come_params_621,i_645,(struct CVALUE*)come_increment_ref_count(obj_value_507));
                i_645++;
            }
            else if(            label_648) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional6=(((struct CVALUE*)(__right_value534=list$1CVALUEphp_operator_load_element(come_params_621,i_645)))==((void*)0))),                    come_call_finalizer3(__right_value534,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional6) {
                        break;
                    }
                    else {
                        i_645++;
                    }
                }
                Value_653=node_compile(node_649,info);
                if(                !Value_653) {
                    __result367__ = (_Bool)0;
                    label_648 = come_decrement_ref_count2(label_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_646,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_617,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_621,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result367__;
                }
                else {
                }
                come_value_654=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional7=(((struct sType*)((void*)(__right_value536=list$1voidphp_operator_load_element(param_types_617,i_645)))))),                come_call_finalizer3(__right_value536,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    check_assign_type(((char*)(__right_value539=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value537=string_to_string(fun_name_497))),((char*)(__right_value538=int_to_string(i_645)))))),((struct sType*)((void*)(__right_value540=list$1voidphp_operator_load_element(param_types_617,i_645)))),come_value_654->type,come_value_654,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value540,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional8=(((struct sType*)((void*)(__right_value541=list$1voidphp_operator_load_element(param_types_617,i_645))))&&((struct sType*)((void*)(__right_value542=list$1voidphp_operator_load_element(param_types_617,i_645))))->mHeap&&come_value_654->type->mHeap)),                come_call_finalizer3(__right_value541,(void*)0, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value542,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional8) {
                    std_move(((struct sType*)((void*)(__right_value543=list$1voidphp_operator_load_element(param_types_617,i_645)))),come_value_654->type,come_value_654,info,(_Bool)1);
                    come_call_finalizer3(__right_value543,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_621,i_645,(struct CVALUE*)come_increment_ref_count(come_value_654));
                i_645++;
                come_call_finalizer3(come_value_654,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_648 = come_decrement_ref_count2(label_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_649) { node_649 = come_decrement_ref_count2(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_646,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional9=(((struct CVALUE*)(__right_value544=list$1CVALUEphp_operator_load_element(come_params_621,i_645)))==((void*)0))),            come_call_finalizer3(__right_value544,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                break;
            }
            else {
                i_645++;
            }
        }
        obj_array_type_655=obj_type_508->mOriginalLoadVarType;
        if(        obj_array_type_655&&list$1sNodephp_length(obj_array_type_655->mArrayNum)>0) {
            array_method_name_656=(char*)come_increment_ref_count(create_method_name(obj_array_type_655,(_Bool)0,fun_name_497,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_591,array_method_name_656)) {
                if(                string_operator_equals(fun_name_497,"to_pointer")) {
                    buf_657=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 815, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                    i_658=0;
                    for(                    o2_saved_659=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_655->mArrayNum)),it_662=list$1sNodephp_begin((o2_saved_659));                    !list$1sNodephp_end((o2_saved_659));                    it_662=list$1sNodephp_next((o2_saved_659))                    ){
                        Value_665=node_compile(it_662,info);
                        if(                        !Value_665) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_666=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_657,"%s",come_value_666->c_value);
                        if(                        i_658!=list$1sNodephp_length(obj_array_type_655->mArrayNum)-1) {
                            buffer_append_str(buf_657,"*");
                        }
                        i_658++;
                        come_call_finalizer3(come_value_666,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_659,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_667=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 835, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
                    __dec_obj204=come_value_667->c_value;
                    come_value_667->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_657));
                    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_667->var=((void*)0);
                    __dec_obj205=come_value_667->type;
                    come_value_667->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 839, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_621,1,(struct CVALUE*)come_increment_ref_count(come_value_667));
                    list$1tuple2$2charphsNodephphp_push_back(params_498,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 842, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_657,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_667,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_497,"length")) {
                    buf_671=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 845, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                    i_672=0;
                    for(                    o2_saved_673=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_655->mArrayNum)),it_674=list$1sNodephp_begin((o2_saved_673));                    !list$1sNodephp_end((o2_saved_673));                    it_674=list$1sNodephp_next((o2_saved_673))                    ){
                        Value_675=node_compile(it_674,info);
                        if(                        !Value_675) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_676=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_671,"%s",come_value_676->c_value);
                        if(                        i_672!=list$1sNodephp_length(obj_array_type_655->mArrayNum)-1) {
                            buffer_append_str(buf_671,"*");
                        }
                        i_672++;
                        come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_673,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_677=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 864, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
                    __dec_obj209=come_value_677->c_value;
                    come_value_677->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_671));
                    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_677->var=((void*)0);
                    __dec_obj210=come_value_677->type;
                    come_value_677->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 868, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_621,1,(struct CVALUE*)come_increment_ref_count(come_value_677));
                    list$1tuple2$2charphsNodephphp_push_back(params_498,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 871, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_677,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_497,"to_buffer")) {
                    buf_678=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 874, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                    i_679=0;
                    for(                    o2_saved_680=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_655->mArrayNum)),it_681=list$1sNodephp_begin((o2_saved_680));                    !list$1sNodephp_end((o2_saved_680));                    it_681=list$1sNodephp_next((o2_saved_680))                    ){
                        Value_682=node_compile(it_681,info);
                        if(                        !Value_682) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_683=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_678,"%s",come_value_683->c_value);
                        if(                        i_679!=list$1sNodephp_length(obj_array_type_655->mArrayNum)-1) {
                            buffer_append_str(buf_678,"*");
                        }
                        i_679++;
                        come_call_finalizer3(come_value_683,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_680,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_684=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 893, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
                    __dec_obj211=come_value_684->c_value;
                    come_value_684->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_678));
                    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_684->var=((void*)0);
                    __dec_obj212=come_value_684->type;
                    come_value_684->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 897, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_621,1,(struct CVALUE*)come_increment_ref_count(come_value_684));
                    list$1tuple2$2charphsNodephphp_push_back(params_498,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 900, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_678,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_684,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_497,"to_list")) {
                    buf_685=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 903, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                    i_686=0;
                    for(                    o2_saved_687=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_655->mArrayNum)),it_688=list$1sNodephp_begin((o2_saved_687));                    !list$1sNodephp_end((o2_saved_687));                    it_688=list$1sNodephp_next((o2_saved_687))                    ){
                        Value_689=node_compile(it_688,info);
                        if(                        !Value_689) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_690=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_685,"%s",come_value_690->c_value);
                        if(                        i_686!=list$1sNodephp_length(obj_array_type_655->mArrayNum)-1) {
                            buffer_append_str(buf_685,"*");
                        }
                        i_686++;
                        come_call_finalizer3(come_value_690,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_687,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_691=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 922, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
                    __dec_obj213=come_value_691->c_value;
                    come_value_691->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_685));
                    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_691->var=((void*)0);
                    __dec_obj214=come_value_691->type;
                    come_value_691->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 926, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_621,1,(struct CVALUE*)come_increment_ref_count(come_value_691));
                    list$1tuple2$2charphsNodephphp_push_back(params_498,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 929, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_685,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_691,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_497,"to_vector")) {
                    buf_692=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 932, "struct buffer*", (void*)0, (void*)0, (void*)0))));
                    i_693=0;
                    for(                    o2_saved_694=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_655->mArrayNum)),it_695=list$1sNodephp_begin((o2_saved_694));                    !list$1sNodephp_end((o2_saved_694));                    it_695=list$1sNodephp_next((o2_saved_694))                    ){
                        Value_696=node_compile(it_695,info);
                        if(                        !Value_696) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_697=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_692,"%s",come_value_697->c_value);
                        if(                        i_693!=list$1sNodephp_length(obj_array_type_655->mArrayNum)-1) {
                            buffer_append_str(buf_692,"*");
                        }
                        i_693++;
                        come_call_finalizer3(come_value_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_694,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_698=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 951, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
                    __dec_obj215=come_value_698->c_value;
                    come_value_698->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_692));
                    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_698->var=((void*)0);
                    __dec_obj216=come_value_698->type;
                    come_value_698->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 955, "struct sType", sType_finalize, sType_clone, sType_get_hash_key)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_621,1,(struct CVALUE*)come_increment_ref_count(come_value_698));
                    list$1tuple2$2charphsNodephphp_push_back(params_498,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 958, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone, tuple2$2charphvoidp_get_hash_key)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_692,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_698,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_656 = come_decrement_ref_count2(array_method_name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephphp_length(params_498)<list$1voidphp_length(fun_592->mParamTypes)+(((method_block_500)?(-2):(0)))) {
            for(            ;            i_645<list$1voidphp_length(fun_592->mParamTypes)+(((method_block_500)?(-2):(0)));            i_645++            ){
                default_param_699=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value604=list$1charphp_operator_load_element(fun_592->mParamDefaultParametors,i_645)))));
                __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_700=((char*)(__right_value606=list$1charphp_operator_load_element(fun_592->mParamNames,i_645)));
                __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional10=(default_param_699&&string_operator_not_equals(default_param_699,"")&&((struct CVALUE*)(__right_value607=list$1CVALUEphp_operator_load_element(come_params_621,i_645)))==((void*)0))),                come_call_finalizer3(__right_value607,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    source_701=(struct buffer*)come_increment_ref_count(info->source);
                    p_702=info->p;
                    head_703=info->head;
                    sline_704=info->sline;
                    __dec_obj217=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_699));
                    come_call_finalizer3(__dec_obj217,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_705=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_706=node_compile(node_705,info);
                    if(                    !Value_706) {
                        __result375__ = (_Bool)0;
                        come_call_finalizer3(source_701,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_699 = come_decrement_ref_count2(default_param_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_617,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_621,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result375__;
                    }
                    else {
                    }
                    __dec_obj218=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_701);
                    come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_702;
                    info->head=head_703;
                    info->sline=sline_704;
                    come_value_707=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional11=(((struct sType*)((void*)(__right_value611=list$1voidphp_operator_load_element(param_types_617,i_645)))))),                    come_call_finalizer3(__right_value611,(void*)0, 0, 1, 0, 0, (void*)0),
                    _if_conditional11) {
                        check_assign_type(((char*)(__right_value614=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value612=string_to_string(fun_name_497))),((char*)(__right_value613=int_to_string(i_645)))))),((struct sType*)((void*)(__right_value615=list$1voidphp_operator_load_element(param_types_617,i_645)))),come_value_707->type,come_value_707,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value615,(void*)0, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional12=(((struct sType*)((void*)(__right_value616=list$1voidphp_operator_load_element(param_types_617,i_645))))&&((struct sType*)((void*)(__right_value617=list$1voidphp_operator_load_element(param_types_617,i_645))))->mHeap&&come_value_707->type->mHeap)),                    come_call_finalizer3(__right_value616,(void*)0, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value617,(void*)0, 0, 1, 0, 0, (void*)0),
                    _if_conditional12) {
                        std_move(((struct sType*)((void*)(__right_value618=list$1voidphp_operator_load_element(param_types_617,i_645)))),come_value_707->type,come_value_707,info,(_Bool)1);
                        come_call_finalizer3(__right_value618,(void*)0, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEphp_replace(come_params_621,i_645,(struct CVALUE*)come_increment_ref_count(come_value_707));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_701,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_705) { node_705 = come_decrement_ref_count2(node_705, ((struct sNode*)node_705)->finalize, ((struct sNode*)node_705)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional13=(((struct CVALUE*)(__right_value619=list$1CVALUEphp_operator_load_element(come_params_621,i_645)))==((void*)0))),                    come_call_finalizer3(__right_value619,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        err_msg(info,"require parametor(%s) %d",fun_592->mName,i_645);
                        __result376__ = (_Bool)0;
                        default_param_699 = come_decrement_ref_count2(default_param_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_617,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_621,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result376__;
                    }
                }
                default_param_699 = come_decrement_ref_count2(default_param_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_500) {
            if(            !compile_method_block(method_block_500,(struct list$1CVALUEph*)come_increment_ref_count(come_params_621),fun_592,fun_name_497,method_block_sline_501,info,(_Bool)0)) {
                __result377__ = (_Bool)0;
                generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_617,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_621,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result377__;
            }
        }
        buf_708=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1015, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        buffer_append_str(buf_708,generics_fun_name_591);
        buffer_append_str(buf_708,"(");
        j_709=0;
        for(        o2_saved_710=(struct list$1CVALUEph*)come_increment_ref_count((come_params_621)),it_711=list$1CVALUEphp_begin((o2_saved_710));        !list$1CVALUEphp_end((o2_saved_710));        it_711=list$1CVALUEphp_next((o2_saved_710))        ){
            buffer_append_str(buf_708,it_711->c_value);
            if(            j_709!=list$1CVALUEphp_length(come_params_621)-1) {
                buffer_append_str(buf_708,",");
            }
            j_709++;
        }
        come_call_finalizer3(o2_saved_710,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_708,")");
        come_value2_712=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1034, "struct CVALUE*", (void*)0, (void*)0, (void*)0))));
        __dec_obj219=come_value2_712->c_value;
        come_value2_712->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_708));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_value2_712->var=((void*)0);
        generics_any_child_713=(_Bool)0;
        obj_type2_714=(struct sType*)come_increment_ref_count(obj_type_508);
        if(        obj_type2_714->mNoSolvedGenericsType) {
            __dec_obj220=obj_type2_714;
            obj_type2_714=(struct sType*)come_increment_ref_count(obj_type2_714->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_715=(struct list$1voidph*)come_increment_ref_count((obj_type2_714->mGenericsTypes)),it_716=((struct sType*)list$1voidphp_begin((o2_saved_715)));            !list$1voidphp_end((o2_saved_715));            it_716=((struct sType*)list$1voidphp_next((o2_saved_715)))            ){
                if(                it_716->mAnyOriginalType) {
                    generics_any_child_713=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_715,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        result_type2_616->mAnyOriginalType&&generics_fun_590&&obj_type_508->mNoSolvedGenericsType) {
            obj_type2_717=(struct sType*)come_increment_ref_count(obj_type_508->mNoSolvedGenericsType);
            __dec_obj221=result_type2_616;
            result_type2_616=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_590->mResultType,obj_type2_717,info));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj222=come_value2_712->type;
            come_value2_712->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_616));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_712->type->mStatic=(_Bool)0;
            if(            result_type2_616->mHeap) {
                append_object_to_right_values2(come_value2_712,(struct sType*)come_increment_ref_count(result_type2_616),info,(_Bool)0);
            }
            come_call_finalizer3(obj_type2_717,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        generics_fun_590&&generics_any_child_713) {
            __dec_obj223=result_type2_616;
            result_type2_616=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_590->mResultType,obj_type2_714,info));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj224=come_value2_712->type;
            come_value2_712->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_616));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_712->type->mStatic=(_Bool)0;
            if(            result_type2_616->mHeap) {
                append_object_to_right_values2(come_value2_712,(struct sType*)come_increment_ref_count(result_type2_616),info,(_Bool)0);
            }
        }
        else {
            __dec_obj225=come_value2_712->type;
            come_value2_712->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_616));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_712->type->mStatic=(_Bool)0;
            if(            result_type2_616->mHeap) {
                append_object_to_right_values2(come_value2_712,(struct sType*)come_increment_ref_count(result_type2_616),info,(_Bool)0);
            }
        }
        __dec_obj226=come_value2_712->c_value;
        come_value2_712->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_712->c_value,come_value2_712->type,info));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj227=come_value2_712;
        come_value2_712=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_712),info));
        come_call_finalizer3(__dec_obj227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        add_come_last_code(info,"%s",come_value2_712->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_712));
        if(        is_contained_method_generics_types(obj_type_508,info)&&generics_fun_name_591) {
            map$2charphsFunphp_remove(info->funcs,generics_fun_name_591);
        }
        come_call_finalizer3(info->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj228=info->method_generics_types;
        info->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types_before_505);
        come_call_finalizer3(__dec_obj228,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_592;
        generics_fun_name_591 = come_decrement_ref_count2(generics_fun_name_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_616,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_617,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_621,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_708,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type2_714,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result378__ = (_Bool)1;
    fun_name_497 = come_decrement_ref_count2(fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_498,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_499) { obj_499 = come_decrement_ref_count2(obj_499, ((struct sNode*)obj_499)->finalize, ((struct sNode*)obj_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_503,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result378__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result319__;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_488;
struct list_item$1tuple2$2charphsNodephph* it_489;
void* __right_value415 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result324__;
    if(    self==((void*)0)) {
        __result319__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    result_488=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1220, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
    it_489=self->head;
    while(it_489!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_488,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_489->item)));
        it_489=it_489->next;
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_488;
    come_call_finalizer3(result_488,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result320__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_486;
struct list_item$1tuple2$2charphsNodephph* prev_it_487;
    it_486=self->head;
    while(it_486!=((void*)0)) {
        prev_it_487=it_486;
        it_486=it_486->next;
        come_call_finalizer3(prev_it_487,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj161;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj161=self->item;
            come_call_finalizer3(__dec_obj161,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj162;
struct sNode* __dec_obj163;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj162=self->v1;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj163=self->v2;
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_490;
struct tuple2$2charphsNodeph* __dec_obj164;
void* __right_value410 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_491;
struct tuple2$2charphsNodeph* __dec_obj165;
void* __right_value411 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_492;
struct tuple2$2charphsNodeph* __dec_obj166;
struct list$1tuple2$2charphsNodephph* __result321__;
    if(    self->len==0) {
        litem_490=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value409=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_490->prev=((void*)0);
        litem_490->next=((void*)0);
        __dec_obj164=litem_490->item;
        litem_490->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj164,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_490;
        self->head=litem_490;
    }
    else if(    self->len==1) {
        litem_491=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value410=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_491->prev=self->head;
        litem_491->next=((void*)0);
        __dec_obj165=litem_491->item;
        litem_491->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj165,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_491;
        self->head->next=litem_491;
    }
    else {
        litem_492=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value411=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_492->prev=self->tail;
        litem_492->next=((void*)0);
        __dec_obj166=litem_492->item;
        litem_492->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj166,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_492;
        self->tail=litem_492;
    }
    self->len++;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result322__;
void* __right_value412 = (void*)0;
struct tuple2$2charphsNodeph* result_494;
void* __right_value413 = (void*)0;
char* __dec_obj169;
void* __right_value414 = (void*)0;
struct sNode* __dec_obj170;
struct tuple2$2charphsNodeph* __result323__;
    if(    self==(void*)0) {
        __result322__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_494=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj169=result_494->v1;
        result_494->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj170=result_494->v2;
        result_494->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_494;
    come_call_finalizer3(result_494,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj167;
struct sNode* __dec_obj168;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj167=self->v1;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj168=self->v2;
            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_493;
    result_493=0;
    result_493+=int_get_hash_key(((int)self->v1));
    result_493+=int_get_hash_key(((int)self->v2));
    return result_493;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_495;
struct list_item$1tuple2$2charphsNodephph* prev_it_496;
    it_495=self->head;
    while(it_495!=((void*)0)) {
        prev_it_496=it_495;
        it_495=it_495->next;
        come_call_finalizer3(prev_it_496,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj174;
struct sNode* __dec_obj175;
char* __dec_obj176;
struct list$1tuple2$2charphsNodephph* __dec_obj177;
struct buffer* __dec_obj178;
struct list$1voidph* __dec_obj179;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj174=self->sname;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj175=self->obj;
            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj176=self->fun_name;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj177=self->params;
            come_call_finalizer3(__dec_obj177,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj178=self->method_block;
            come_call_finalizer3(__dec_obj178,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj179=self->method_generics_types;
            come_call_finalizer3(__dec_obj179,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result328__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_523;
int i_524;
struct CVALUE* __result330__;
struct CVALUE* default_value_525;
struct CVALUE* __result331__;
default_value_525 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_523=self->head;
    i_524=0;
    while(it_523!=((void*)0)) {
        if(        position==i_524) {
            __result330__ = gComeFunResultObject = __result_obj__ = it_523->item;
            gComeFunResultObject = (void*)0;
            return __result330__;
        }
        it_523=it_523->next;
        i_524++;
    }
    memset(&default_value_525,0,sizeof(struct CVALUE*));
    __result331__ = gComeFunResultObject = __result_obj__ = default_value_525;
    come_call_finalizer3(default_value_525,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_538;
struct tuple2$2charphsNodeph* __result332__;
struct tuple2$2charphsNodeph* __result333__;
struct tuple2$2charphsNodeph* result_539;
struct tuple2$2charphsNodeph* __result334__;
result_538 = (void*)0;
result_539 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_538,0,sizeof(struct tuple2$2charphsNodeph*));
        __result332__ = gComeFunResultObject = __result_obj__ = result_538;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    self->it=self->head;
    if(    self->it) {
        __result333__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    memset(&result_539,0,sizeof(struct tuple2$2charphsNodeph*));
    __result334__ = gComeFunResultObject = __result_obj__ = result_539;
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_541;
struct tuple2$2charphsNodeph* __result335__;
struct tuple2$2charphsNodeph* __result336__;
struct tuple2$2charphsNodeph* result_542;
struct tuple2$2charphsNodeph* __result337__;
result_541 = (void*)0;
result_542 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_541,0,sizeof(struct tuple2$2charphsNodeph*));
        __result335__ = gComeFunResultObject = __result_obj__ = result_541;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result336__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    memset(&result_542,0,sizeof(struct tuple2$2charphsNodeph*));
    __result337__ = gComeFunResultObject = __result_obj__ = result_542;
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_583;
struct CVALUE* __result341__;
struct CVALUE* __result342__;
struct CVALUE* result_584;
struct CVALUE* __result343__;
result_583 = (void*)0;
result_584 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_583,0,sizeof(struct CVALUE*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_583;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->head;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_584,0,sizeof(struct CVALUE*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_584;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_586;
struct CVALUE* __result344__;
struct CVALUE* __result345__;
struct CVALUE* result_587;
struct CVALUE* __result346__;
result_586 = (void*)0;
result_587 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_586,0,sizeof(struct CVALUE*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_586;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_587,0,sizeof(struct CVALUE*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_587;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_604;
unsigned int hash_605;
unsigned int it_606;
struct sFun* __result347__;
struct sFun* __result348__;
struct sFun* __result349__;
struct sFun* __result350__;
default_value_604 = (void*)0;
    memset(&default_value_604,0,sizeof(struct sFun*));
    hash_605=string_get_hash_key(((char*)key))%self->size;
    it_606=hash_605;
    while((_Bool)1) {
        if(        self->item_existance[it_606]) {
            if(            charp_equals(self->keys[it_606],key)) {
                __result347__ = gComeFunResultObject = __result_obj__ = self->items[it_606];
                come_call_finalizer3(default_value_604,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result347__;
            }
            it_606++;
            if(            it_606>=self->size) {
                it_606=0;
            }
            else if(            it_606==hash_605) {
                __result348__ = gComeFunResultObject = __result_obj__ = default_value_604;
                come_call_finalizer3(default_value_604,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result348__;
            }
        }
        else {
            __result349__ = gComeFunResultObject = __result_obj__ = default_value_604;
            come_call_finalizer3(default_value_604,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result349__;
        }
    }
    __result350__ = gComeFunResultObject = __result_obj__ = default_value_604;
    come_call_finalizer3(default_value_604,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj196;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj196=self->v2;
            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value514 = (void*)0;
struct list_item$1CVALUEph* litem_623;
struct CVALUE* __dec_obj200;
void* __right_value515 = (void*)0;
struct list_item$1CVALUEph* litem_624;
struct CVALUE* __dec_obj201;
void* __right_value516 = (void*)0;
struct list_item$1CVALUEph* litem_625;
struct CVALUE* __dec_obj202;
struct list$1CVALUEph* __result355__;
    if(    self->len==0) {
        litem_623=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value514=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1234, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_623->prev=((void*)0);
        litem_623->next=((void*)0);
        __dec_obj200=litem_623->item;
        litem_623->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_623;
        self->head=litem_623;
    }
    else if(    self->len==1) {
        litem_624=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value515=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1244, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_624->prev=self->head;
        litem_624->next=((void*)0);
        __dec_obj201=litem_624->item;
        litem_624->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_624;
        self->head->next=litem_624;
    }
    else {
        litem_625=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value516=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1254, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0))));
        litem_625->prev=self->tail;
        litem_625->next=((void*)0);
        __dec_obj202=litem_625->item;
        litem_625->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_625;
        self->tail=litem_625;
    }
    self->len++;
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_633;
char* __result356__;
char* __result357__;
char* result_634;
char* __result358__;
result_633 = (void*)0;
result_634 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_633,0,sizeof(char*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_633;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->it=self->head;
    if(    self->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_634,0,sizeof(char*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_634;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_636;
char* __result359__;
char* __result360__;
char* result_637;
char* __result361__;
result_636 = (void*)0;
result_637 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_636,0,sizeof(char*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_636;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_637,0,sizeof(char*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_637;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_640;
int i_641;
struct CVALUE* default_value_642;
struct list$1CVALUEph* __result363__;
struct list_item$1CVALUEph* it_643;
int i_644;
struct CVALUE* __dec_obj203;
struct list$1CVALUEph* __result364__;
default_value_642 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_640=self->len;
        for(        i_641=0;        i_641<position-len_640;        i_641++        ){
            memset(&default_value_642,0,sizeof(struct CVALUE*));
            list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_642));
            come_call_finalizer3(default_value_642,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result363__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    it_643=self->head;
    i_644=0;
    while(it_643!=((void*)0)) {
        if(        position==i_644) {
            __dec_obj203=it_643->item;
            it_643->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_643=it_643->next;
        i_644++;
    }
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_650;
int i_651;
char* __result365__;
char* default_value_652;
char* __result366__;
default_value_652 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_650=self->head;
    i_651=0;
    while(it_650!=((void*)0)) {
        if(        position==i_651) {
            __result365__ = gComeFunResultObject = __result_obj__ = it_650->item;
            gComeFunResultObject = (void*)0;
            return __result365__;
        }
        it_650=it_650->next;
        i_651++;
    }
    memset(&default_value_652,0,sizeof(char*));
    __result366__ = gComeFunResultObject = __result_obj__ = default_value_652;
    default_value_652 = come_decrement_ref_count2(default_value_652, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_660;
struct sNode* __result368__;
struct sNode* __result369__;
struct sNode* result_661;
struct sNode* __result370__;
result_660 = (void*)0;
result_661 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_660,0,sizeof(struct sNode*));
        __result368__ = gComeFunResultObject = __result_obj__ = result_660;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    self->it=self->head;
    if(    self->it) {
        __result369__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    memset(&result_661,0,sizeof(struct sNode*));
    __result370__ = gComeFunResultObject = __result_obj__ = result_661;
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_663;
struct sNode* __result371__;
struct sNode* __result372__;
struct sNode* result_664;
struct sNode* __result373__;
result_663 = (void*)0;
result_664 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_663,0,sizeof(struct sNode*));
        __result371__ = gComeFunResultObject = __result_obj__ = result_663;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result372__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    memset(&result_664,0,sizeof(struct sNode*));
    __result373__ = gComeFunResultObject = __result_obj__ = result_664;
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value554 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_668;
struct tuple2$2charphsNodeph* __dec_obj206;
void* __right_value555 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_669;
struct tuple2$2charphsNodeph* __dec_obj207;
void* __right_value556 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_670;
struct tuple2$2charphsNodeph* __dec_obj208;
struct list$1tuple2$2charphsNodephph* __result374__;
    if(    self->len==0) {
        litem_668=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value554=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1304, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_668->prev=((void*)0);
        litem_668->next=((void*)0);
        __dec_obj206=litem_668->item;
        litem_668->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj206,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_668;
        self->head=litem_668;
    }
    else if(    self->len==1) {
        litem_669=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value555=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1314, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_669->prev=self->head;
        litem_669->next=((void*)0);
        __dec_obj207=litem_669->item;
        litem_669->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj207,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_669;
        self->head->next=litem_669;
    }
    else {
        litem_670=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value556=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1324, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
        litem_670->prev=self->tail;
        litem_670->next=((void*)0);
        __dec_obj208=litem_670->item;
        litem_670->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj208,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_670;
        self->tail=litem_670;
    }
    self->len++;
    __result374__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value641 = (void*)0;
struct sNode* node_718;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj235;
struct sNode* __result381__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1105, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value633=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1105, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_718=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value633,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj235=node_718;
    node_718=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_718),info));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result381__ = gComeFunResultObject = __result_obj__ = node_718;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_718) { node_718 = come_decrement_ref_count2(node_718, ((struct sNode*)node_718)->finalize, ((struct sNode*)node_718)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result379__;
void* __right_value634 = (void*)0;
struct sMethodCallNode* result_720;
void* __right_value635 = (void*)0;
char* __dec_obj229;
void* __right_value636 = (void*)0;
struct sNode* __dec_obj230;
void* __right_value637 = (void*)0;
char* __dec_obj231;
void* __right_value638 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj232;
void* __right_value639 = (void*)0;
struct buffer* __dec_obj233;
void* __right_value640 = (void*)0;
struct list$1voidph* __dec_obj234;
struct sMethodCallNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_720=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode", sMethodCallNode_finalize, sMethodCallNode_clone, sMethodCallNode_get_hash_key));
    if(    self!=((void*)0)) {
        result_720->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj229=result_720->sname;
        result_720->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_720->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj230=result_720->obj;
        result_720->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj231=result_720->fun_name;
        result_720->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj232=result_720->params;
        result_720->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj232,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj233=result_720->method_block;
        result_720->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_720->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj234=result_720->method_generics_types;
        result_720->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj234,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_720->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_720->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_720->fun=self->fun;
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_720;
    come_call_finalizer3(result_720,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static unsigned int sMethodCallNode_get_hash_key(struct sMethodCallNode* self){
unsigned int result_719;
    result_719=0;
    result_719+=int_get_hash_key(((int)self->sline));
    result_719+=int_get_hash_key(((int)self->sname));
    result_719+=int_get_hash_key(((int)self->sline_real));
    result_719+=int_get_hash_key(((int)self->obj));
    result_719+=int_get_hash_key(((int)self->fun_name));
    result_719+=int_get_hash_key(((int)self->params));
    result_719+=int_get_hash_key(((int)self->method_block));
    result_719+=int_get_hash_key(((int)self->method_block_sline));
    result_719+=int_get_hash_key(((int)self->method_generics_types));
    result_719+=int_get_hash_key(((int)self->no_infference_method_generics));
    result_719+=int_get_hash_key(((int)self->recursive));
    result_719+=int_get_hash_key(((int)self->fun));
    return result_719;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_721;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
_Bool parse_method_generics_type_722;
char* p_723;
int sline_724;
void* __right_value648 = (void*)0;
char* word_725;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1voidph* method_generics_types_726;
void* __right_value651 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_727=0;
char* name_728=0;
_Bool err_729=0;
void* __right_value652 = (void*)0;
char* p_730;
int sline_731;
_Bool err_flag_732;
void* __right_value653 = (void*)0;
char* label_733;
void* __right_value654 = (void*)0;
char* __dec_obj240;
char* __dec_obj241;
_Bool no_comma_734;
_Bool in_fun_param_735;
void* __right_value655 = (void*)0;
struct sNode* node_736;
void* __right_value656 = (void*)0;
struct sNode* __dec_obj242;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct buffer* method_block_737;
int method_block_sline_738;
char* head_739;
void* __right_value659 = (void*)0;
char* tail_740;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct buffer* __dec_obj243;
int len_741;
void* __right_value662 = (void*)0;
char* mem_742;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value666 = (void*)0;
struct sNode* node_743;
void* __right_value667 = (void*)0;
struct sNode* __dec_obj244;
struct sNode* __result383__;
    params_721=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1114, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_push_back(params_721,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1115, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_722=(_Bool)0;
    {
        p_723=info->p;
        sline_724=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_725=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_725,info)) {
                    parse_method_generics_type_722=(_Bool)1;
                }
                word_725 = come_decrement_ref_count2(word_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_723;
        info->sline=sline_724;
    }
    method_generics_types_726=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "20method.c", 1145, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key))));
    if(    parse_method_generics_type_722&&*info->p==60) {
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
                multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value651=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_727=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                name_728=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                err_729=multiple_assign_var15->v3;
                come_call_finalizer3(__right_value651,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_729) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1voidphp_push_back(method_generics_types_726,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_727)));
                come_call_finalizer3(type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_728 = come_decrement_ref_count2(name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            p_730=info->p;
            sline_731=info->sline;
            err_flag_732=(_Bool)0;
            label_733=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj240=label_733;
                label_733=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_732=(_Bool)1;
            }
            if(            err_flag_732==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj241=label_733;
                label_733=((void*)0);
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_730;
                info->sline=sline_731;
            }
            no_comma_734=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_735=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_736=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj242=node_736;
            node_736=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_736),info));
            if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_735;
            info->no_comma=no_comma_734;
            list$1tuple2$2charphsNodephphp_push_back(params_721,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1221, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key)),(char*)come_increment_ref_count(label_733),(struct sNode*)come_increment_ref_count(node_736))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_733 = come_decrement_ref_count2(label_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_736) { node_736 = come_decrement_ref_count2(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_733 = come_decrement_ref_count2(label_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_736) { node_736 = come_decrement_ref_count2(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_737=((void*)0);
    method_block_sline_738=0;
    if(    *info->p==123) {
        head_739=info->p;
        method_block_sline_738=info->sline;
        ((char*)(__right_value659=skip_block(info)));
        __right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_740=info->p;
        __dec_obj243=method_block_737;
        method_block_737=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1245, "struct buffer*", (void*)0, (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj243,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_741=tail_740-head_739;
        mem_742=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_741+1)), "20method.c", 1248, "char*", (void*)0, (void*)0, (void*)0));
        memcpy(mem_742,head_739,len_741);
        mem_742[len_741]=0;
        buffer_append_str(method_block_737,mem_742);
        buffer_append_str(method_block_737,"\n");
        mem_742 = come_decrement_ref_count2(mem_742, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1260, "struct sNode", (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value665=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1260, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_721),method_block_737,method_block_sline_738,method_generics_types_726,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_743=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value665,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj244=node_743;
    node_743=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_743),info));
    if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
    __result383__ = gComeFunResultObject = __result_obj__ = node_743;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_721,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_726,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_737,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj236;
struct sNode* __dec_obj237;
struct tuple2$2charphsNodeph* __result382__;
    __dec_obj236=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    __result382__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj238;
char* __dec_obj239;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj238=self->v1;
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj239=self->v2;
            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value670 = (void*)0;
struct sNode* __result384__;
void* __right_value671 = (void*)0;
struct sNode* __result385__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1270, "struct sNode", (void*)0, (void*)0, (void*)0);
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value669=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1270, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0)),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value670=_inf_value4));
        come_call_finalizer3(__right_value669,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value670) { __right_value670 = come_decrement_ref_count2(__right_value670, ((struct sNode*)__right_value670)->finalize, ((struct sNode*)__right_value670)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result384__;
    }
    __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value671=string_node_v17(buf,head,head_sline,info)));
    if(__right_value671) { __right_value671 = come_decrement_ref_count2(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result385__;
}

